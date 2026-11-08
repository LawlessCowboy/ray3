#!/usr/bin/env python3
"""Relocation-aware decomp-permuter handoff for Rayman 3 PS2.

Upstream decomp-permuter scores raw object disassembly. Rayman 3's target is a
linked ELF, so this adapter prepares isolated candidate files and verifies each
candidate with the project's authoritative relocation-aware matcher instead.
It never edits canonical source or records a match.
"""

from __future__ import annotations

import argparse
import json
import re
import struct
import subprocess
import sys
from pathlib import Path

ROOT = Path(__file__).resolve().parent.parent
LOCAL_DEPS = ROOT / 'tools' / 'decomp-permuter' / '.deps'
if LOCAL_DEPS.is_dir():
    sys.path.insert(0, str(LOCAL_DEPS))

import match


JOB_ROOT = ROOT / 'build' / 'permuter'
VENDOR = ROOT / 'tools' / 'decomp-permuter'


def safe_name(name: str) -> str:
    return re.sub(r'[^A-Za-z0-9_.-]+', '_', name)


def entry_for(name: str) -> dict:
    _, symbols, main, _, _ = match.target_context()
    return match.find_entry(name, match.cached_source_index(symbols, main))


def demangle(name: str) -> str | None:
    """Source spelling of a CodeWarrior-mangled function name, or None.

    `Display__23AGO3_LinkChainComputingFP...` is `AGO3_LinkChainComputing::Display`,
    `__ct__3FooFv` is `Foo::Foo`, `Q24usnd3Foo` nests and `Bar__Fi` is plain `Bar`."""
    for split in re.finditer(r'__(?=\d|Q\d|F)', name):
        method, rest = name[:split.start()], name[split.end():]
        if not method:
            continue
        if rest.startswith('F'):
            return None if method.startswith('__') else method
        parts = []
        count = 1
        if rest.startswith('Q'):
            count = int(rest[1])
            rest = rest[2:]
        for _ in range(count):
            digits = re.match(r'\d+', rest)
            if digits is None:
                break
            end = digits.end() + int(digits.group())
            parts.append(rest[digits.end():end])
            rest = rest[end:]
        else:
            if method == '__ct':
                method = parts[-1]
            elif method == '__dt':
                method = '~' + parts[-1]
            elif method.startswith('__'):
                return None
            return '::'.join(parts + [method])
    return None


def definition_occurrences(source: str, name: str) -> list[tuple[re.Match, int]]:
    """Every definition of exactly this spelling, as (name match, body brace)."""
    found = []
    for occurrence in re.finditer(rf'(?<![\w:~]){re.escape(name)}\s*\(', source):
        depth = 0
        pos = occurrence.end() - 1
        while pos < len(source):
            if source[pos] == '(':
                depth += 1
            elif source[pos] == ')':
                depth -= 1
                if depth == 0:
                    break
            pos += 1
        rest = re.match(r'\s*\{', source[pos + 1:])
        if rest is not None:
            found.append((occurrence, pos + 1 + rest.end() - 1))
    return found


def find_definition(source: str, name: str) -> tuple[re.Match, int]:
    """Return the name occurrence that starts the definition and its body
    brace, skipping prototypes and calls that precede it.  A mangled name not
    spelled in the source is looked up by its demangled spelling."""
    found = definition_occurrences(source, name)
    if found:
        return found[0]
    spelled = demangle(name)
    found = definition_occurrences(source, spelled) if spelled else []
    if len(found) > 1:
        raise ValueError(f'{name}: {len(found)} overloads of {spelled} in the source; '
                         'the permuter cannot tell them apart')
    if found:
        return found[0]
    raise ValueError(f'could not find definition for {name}')


def find_function_span(source: str, name: str) -> tuple[int, int]:
    """Return the complete definition span, including its closing brace."""
    occurrence, brace = find_definition(source, name)
    depth = 0
    quote: str | None = None
    escaped = False
    line_comment = False
    block_comment = False
    pos = brace
    while pos < len(source):
        char = source[pos]
        nxt = source[pos + 1] if pos + 1 < len(source) else ''
        if line_comment:
            if char == '\n':
                line_comment = False
        elif block_comment:
            if char == '*' and nxt == '/':
                block_comment = False
                pos += 1
        elif quote:
            if escaped:
                escaped = False
            elif char == '\\':
                escaped = True
            elif char == quote:
                quote = None
        elif char == '/' and nxt == '/':
            line_comment = True
            pos += 1
        elif char == '/' and nxt == '*':
            block_comment = True
            pos += 1
        elif char in {'\"', "'"}:
            quote = char
        elif char == '{':
            depth += 1
        elif char == '}':
            depth -= 1
            if depth == 0:
                return occurrence.start(), pos + 1
        pos += 1
    raise ValueError(f'could not find closing brace for {name}')


def job_dir(entry: dict) -> Path:
    return JOB_ROOT / safe_name(entry['name'])


def is_cxx(entry: dict) -> bool:
    return Path(entry['source']).suffix.lower() in {'.cpp', '.cxx'}


def strip_asm_blocks(source: str) -> str:
    """Replace MWCC `asm { ... }` statements with empty statements."""
    pieces = []
    pos = 0
    for match_ in re.finditer(r'\basm\s*\{', source):
        if match_.start() < pos:
            continue
        pieces.append(source[pos:match_.start()])
        pieces.append(';')
        pos = source.index('}', match_.end()) + 1
    pieces.append(source[pos:])
    return ''.join(pieces)


def pycparser_source(source: str) -> str:
    """Make a C++ translation unit parseable by upstream's pycparser.

    Only the target function is ever compiled back (see splice_candidate), so
    the rest of the file just has to parse: drop `extern "C"`, MWCC asm
    blocks and GCC attributes, and typedef C++ struct/union tags that the
    source uses without a typedef."""
    source = source.replace('extern "C" ', '')
    source = strip_asm_blocks(source)
    source = re.sub(r'__attribute__\s*\(\([^()]*(?:\([^()]*\))?[^()]*\)\)', '', source)
    typedefs = set(re.findall(r'typedef\s+(?:struct|union|enum)\s+\w+\s+(\w+)\s*;', source))
    typedefs |= set(re.findall(r'\}\s*(\w+)\s*;', source))
    tags: dict[str, str] = {}
    for tag in re.finditer(r'\b(struct|union)\s+(\w+)\s*[;{]', source):
        if tag.group(2) not in typedefs:
            tags.setdefault(tag.group(2), tag.group(1))
    prelude = ''.join(f'typedef {kind} {name} {name};\n' for name, kind in tags.items())
    return prelude + source


def strip_comments(source: str) -> str:
    return re.sub(r'"(?:\\.|[^"\\\n])*"|\'(?:\\.|[^\'\\\n])*\'|/\*.*?\*/|//[^\n]*',
                  lambda m: m.group(0) if m.group(0)[0] in '"\'' else ' ',
                  source, flags=re.S)


def split_statements(text: str) -> list[str]:
    """Split comment-free declarations into preprocessor lines and statements.
    A statement ends at a depth-zero `;`, or at the closing brace of a function."""
    items = []
    pos = 0
    start = None
    depth = 0
    while pos < len(text):
        char = text[pos]
        if start is None:
            if char.isspace():
                pos += 1
                continue
            if char == '#':
                end = pos
                while True:
                    end = text.find('\n', end)
                    if end < 0:
                        end = len(text)
                        break
                    if text[end - 1] != '\\':
                        break
                    end += 1
                items.append(text[pos:end])
                pos = end
                continue
            start = pos
        if char == '"':
            pos = re.compile(r'"(?:\\.|[^"\\])*"').match(text, pos).end()
            continue
        if char == '{':
            depth += 1
        elif char == '}':
            depth -= 1
            if depth == 0 and '(' in text[start:text.index('{', start)]:
                items.append(text[start:pos + 1])
                start = None
        elif char == ';' and depth == 0:
            items.append(text[start:pos + 1])
            start = None
        pos += 1
    return items


AGGREGATE = re.compile(r'(typedef\s+)?(struct|class|union)\s*(\w+)?\s*(:[^{]*)?\{')


def clean_aggregate(statement: str, bases: dict[str, str], members: dict[str, list[str]]) -> str:
    """Reduce a C++ struct to a C one: no base list, methods or static members.
    The data members of the class and of its bases are recorded for the target."""
    head = AGGREGATE.match(statement)
    close = statement.rindex('}')
    tag = head.group(3)
    if tag and head.group(4):
        base = re.search(r'(\w+)\s*$', head.group(4).strip())
        if base:
            bases[tag] = base.group(1)
    kept = []
    fields = []
    for member in split_statements(statement[head.end():close]):
        member = re.sub(r'^(?:public|protected|private)\s*:\s*', '', member)
        if member.startswith('#') or re.match(r'(virtual|friend|typedef|using|template)\b', member):
            continue
        if '(' in member and '(*' not in member:
            continue
        if member.startswith('static '):
            fields.append(member[len('static '):])
            continue
        if AGGREGATE.match(member):
            member = clean_aggregate(member, bases, members)
        else:
            fields.append(member)
        kept.append(member)
    if tag:
        members[tag] = fields
    return (f"{head.group(1) or ''}{'struct' if head.group(2) == 'class' else head.group(2)} "
            f"{tag or ''} {{\n" + '\n'.join(kept or ['int _unused;'])
            + '\n' + statement[close:])


def cleaned_cxx_source(source: str, name: str) -> str:
    """Reduce a C++ unit with classes to what pycparser needs to permute `name`.

    Only the target is ever compiled back (see splice_candidate), so every
    other function becomes a prototype or is dropped.  A method becomes a free
    function under its mangled name, and the data members it reaches implicitly
    become file-scope variables, which gives upstream their types."""
    spelled = demangle(name)
    method = spelled if spelled and '::' in spelled and not definition_occurrences(source, name) else None
    text = strip_comments(source.replace('extern "C" ', ''))
    text = re.sub(r'__attribute__\s*\(\([^()]*(?:\([^()]*\))?[^()]*\)\)', '', text)
    target_name = method or spelled if not definition_occurrences(source, name) else name
    kept = []
    target = None
    bases: dict[str, str] = {}
    members: dict[str, list[str]] = {}
    for statement in split_statements(text):
        if statement.startswith('#'):
            kept.append(statement)
            continue
        brace = statement.find('{')
        header = statement if brace < 0 else statement[:brace]
        if brace >= 0 and '(' in header:
            if re.search(rf'(?<![\w:~]){re.escape(target_name)}\s*\(', header):
                target = statement
            elif '::' not in header and '&' not in header:
                kept.append(strip_asm_blocks(header).rstrip() + ';')
            continue
        if AGGREGATE.match(statement):
            kept.append(clean_aggregate(statement, bases, members))
        elif brace >= 0:
            if re.match(r'(typedef\s+)?enum\b', statement):
                kept.append(statement)
        elif not re.search(r'::|&|\b(template|using|operator)\b', statement):
            if '(' in statement and '=' in statement:
                continue
            kept.append(re.sub(r'^class\b', 'struct', statement))
    if target is None:
        raise ValueError(f'could not find definition for {name}')
    if has_asm_blocks(target):
        raise ValueError(f'{name} contains an asm block')
    if method:
        cls = method.rsplit('::', 1)[0].rsplit('::', 1)[-1]
        target = target.replace(method, name, 1)
        if '::' in target:
            raise ValueError(f'{name}: a qualified name in the body cannot be permuted')
        joined = '\n'.join(kept)
        typedefs = set(re.findall(r'typedef\s+(?:struct|union|enum)\s+\w+\s+(\w+)\s*;', joined))
        typedefs |= set(re.findall(r'\}\s*(\w+)\s*;', joined))
        chain = []
        while cls in members or cls in bases:
            chain.extend(members.get(cls, []))
            cls = bases.get(cls, '')
        for field in chain:
            field = re.sub(r':\s*\d+\s*;$', ';', field)
            declared = re.search(r'(\w+)\s*(?:\[[^\]]*\]\s*)*;$', field)
            if declared and declared.group(1) not in typedefs:
                kept.append(field)
        kept.append(f"{method.rsplit('::', 1)[0].rsplit('::', 1)[-1]} *this;")
    kept.append(target)
    tags: dict[str, str] = {}
    joined = '\n'.join(kept)
    typedefs = set(re.findall(r'typedef\s+(?:struct|union|enum)\s+\w+\s+(\w+)\s*;', joined))
    typedefs |= set(re.findall(r'\}\s*(\w+)\s*;', joined))
    for tag in re.finditer(r'\b(struct|union)\s+(\w+)\s*[;{]', joined):
        if tag.group(2) not in typedefs:
            tags.setdefault(tag.group(2), tag.group(1))
    prelude = ''.join(f'typedef {kind} {tag} {tag};\n' for tag, kind in tags.items())
    if 'bool' not in typedefs and re.search(r'\bbool\b', joined):
        prelude += 'typedef int bool;\n'
    return prelude + joined + '\n'


def needs_cleaned_cxx(source: str, name: str) -> bool:
    """Whether pycparser needs the reduced form: a method, or a unit with classes."""
    return not definition_occurrences(source, name) or re.search(
        r'^\s*(?:struct|class)\s+\w+\s*:\s*\w', source, flags=re.M) is not None


def splice_candidate(entry: dict, candidate: Path, output_dir: Path) -> Path:
    """Put the candidate's definition of the target into the canonical source.

    MWCC picks C or C++ from the file suffix, so a C++ candidate must be
    compiled under the canonical suffix with the canonical surroundings
    (extern "C" prototypes, asm helpers) that pycparser cannot handle.  C
    sources with asm helpers are spliced the same way."""
    original_path = ROOT / entry['source']
    original = original_path.read_text(encoding='utf-8', errors='replace')
    text = candidate.read_text(encoding='utf-8', errors='replace')
    start, end = find_function_span(original, entry['name'])
    cand_start, cand_end = find_function_span(text, entry['name'])
    output_dir.mkdir(parents=True, exist_ok=True)
    result = output_dir / f'{candidate.stem}-spliced{original_path.suffix}'
    definition = text[cand_start:cand_end]
    if not definition_occurrences(original, entry['name']):
        # A renamed method: keep the canonical qualified signature, take the body.
        _, original_brace = find_definition(original, entry['name'])
        _, candidate_brace = find_definition(text, entry['name'])
        definition = original[start:original_brace] + text[candidate_brace:cand_end]
    result.write_text(original[:start] + definition + original[end:], encoding='utf-8')
    return result


def has_asm_blocks(source: str) -> bool:
    return re.search(r'\basm\s*\{', source) is not None


def uses_splice(entry: dict) -> bool:
    """Whether candidates are pycparser-friendly copies spliced back on compile.

    True for C++ sources and for C sources with MWCC `asm { ... }` helpers
    (e.g. an inline sqrt.s wrapper), which pycparser cannot parse."""
    if is_cxx(entry):
        return True
    source = (ROOT / entry['source']).read_text(encoding='utf-8', errors='replace')
    return has_asm_blocks(source)


def needs_splice(entry: dict, candidate: Path) -> bool:
    return candidate.suffix.lower() == '.c' and uses_splice(entry)


def synthetic_object(words: bytes, output: Path, symbol: str) -> None:
    """Assemble resolved words into a tiny object for upstream's scorer."""
    if len(words) % 4:
        raise ValueError('function code is not word-aligned')
    assembly = output.with_suffix('.s')
    lines = ['.set noreorder', '.text', f'.globl {symbol}', f'{symbol}:']
    lines.extend(f'  .word 0x{word:08x}' for word, in struct.iter_unpack('<I', words))
    assembly.write_text('\n'.join(lines) + '\n', encoding='utf-8')
    result = subprocess.run(['mipsel-linux-gnu-as', '-EL', str(assembly), '-o', str(output)],
                            cwd=ROOT, text=True, stdout=subprocess.PIPE,
                            stderr=subprocess.STDOUT)
    assembly.unlink(missing_ok=True)
    if result.returncode:
        raise ValueError(f'failed to assemble permuter object: {result.stdout[-1000:]}')


def prepare(entry: dict) -> Path:
    source_path = ROOT / entry['source']
    source = source_path.read_text(encoding='utf-8', errors='replace')
    start, end = find_function_span(source, entry['name'])
    if has_asm_blocks(source[start:end]):
        # Stripping the target's own asm would make every candidate compile to
        # different code, so upstream could never score it meaningfully.
        raise ValueError(f"{entry['name']} contains an asm block; the permuter cannot "
                         'parse it without changing the function')
    job = job_dir(entry)
    job.mkdir(parents=True, exist_ok=True)
    # Upstream preprocesses with `cpp -nostdinc`.  Replace the ubiquitous
    # stddef include in the isolated candidate with the only definitions our
    # recovered C needs, without changing canonical source or MWCC's headers.
    permuter_source = source.replace(
        '#include <stddef.h>', 'typedef unsigned int size_t;\n#define NULL ((void *)0)')
    if is_cxx(entry):
        if needs_cleaned_cxx(source, entry['name']):
            permuter_source = cleaned_cxx_source(permuter_source, entry['name'])
        else:
            permuter_source = pycparser_source(permuter_source)
    elif has_asm_blocks(permuter_source):
        permuter_source = strip_asm_blocks(permuter_source)
    (job / 'base.c').write_text(permuter_source, encoding='utf-8')
    (job / 'candidate.c').write_text(permuter_source, encoding='utf-8')
    (job / 'function.c').write_text(source[start:end] + '\n', encoding='utf-8')
    metadata = {
        'function': entry['name'],
        'address': f"0x{entry['address']:08x}",
        'size': entry['size'],
        'source': entry['source'],
        'definition_start': start,
        'definition_end': end,
        'upstream_permuter': str(VENDOR.relative_to(ROOT)),
        'note': ('candidate.c is a full translation-unit candidate. Verify it with '
                 '`tools/permute.py verify`, never with upstream score alone.'
                 + (' candidate.c is only a pycparser-friendly copy (C++ source or '
                    'MWCC asm helpers), and each candidate\'s definition of the target '
                    'is spliced back into the canonical source before compiling.'
                    if uses_splice(entry) else '')),
    }
    (job / 'metadata.json').write_text(json.dumps(metadata, indent=2) + '\n', encoding='utf-8')
    _, _, main, _, _ = match.target_context()
    target_offset = main.offset + entry['address'] - main.addr
    target_words = match.TARGET_PATH.read_bytes()[target_offset:target_offset + entry['size']]
    synthetic_object(target_words, job / 'target.o', entry['name'])
    compile_script = job / 'compile.sh'
    # The client uses the permute_bridge server when one is listening (about
    # 4.8x more iterations per second) and falls back to `permute.py compile`.
    compile_script.write_text(
        '#!/bin/sh\n'
        f'exec python3 "{ROOT / "tools" / "permute_bridge.py"}" compile "{job}" "$@"\n',
        encoding='utf-8')
    compile_script.chmod(0o755)
    # Without '-m mips:5900' objdump prints the R5900 ld/sd/lq/sq words as
    # '.word', and upstream's scorer then ignores register differences in them.
    (job / 'settings.toml').write_text(
        f'func_name = "{entry["name"]}"\ncompiler_type = "mwcc"\n'
        'objdump_command = "mipsel-linux-gnu-objdump -dr -m mips:5900"\n', encoding='utf-8')
    (job / 'README.md').write_text(
        '# Rayman relocation-aware permuter job\n\n'
        'Edit `candidate.c` or replace only the body from `function.c`, then run:\n\n'
        f'```sh\npython3 tools/permute.py verify {entry["name"]} {job.relative_to(ROOT)}/candidate.c\n```\n\n'
        'The result is authoritative only when this command prints `MATCH`. '
        'The vendored upstream `tools/decomp-permuter/` may be used to generate '
        'variants, but its raw-object score is advisory because Rayman comparisons '
        'must resolve MIPS relocations against the retail ELF.  Run it through '
        f'`tools/run-permuter.sh {job.relative_to(ROOT)} --stop-on-zero -j4`, then '
        'verify every winning `source.c` with this adapter.\n',
        encoding='utf-8')
    return job


def candidate_source(entry: dict, candidate: Path, body_only: bool) -> Path:
    if not body_only:
        if needs_splice(entry, candidate):
            return splice_candidate(entry, candidate, job_dir(entry))
        return candidate
    original_path = ROOT / entry['source']
    original = original_path.read_text(encoding='utf-8', errors='replace')
    start, end = find_function_span(original, entry['name'])
    body = candidate.read_text(encoding='utf-8', errors='replace').strip()
    result = job_dir(entry) / f'candidate-full{original_path.suffix}'
    result.write_text(original[:start] + body + '\n' + original[end:], encoding='utf-8')
    return result


def command_prepare(args: argparse.Namespace) -> int:
    entry = entry_for(args.function)
    job = prepare(entry)
    print(job.relative_to(ROOT))
    return 0


def command_verify(args: argparse.Namespace) -> int:
    entry = entry_for(args.function)
    candidate = Path(args.candidate).resolve()
    if not candidate.is_file():
        raise ValueError(f'candidate not found: {candidate}')
    source = candidate_source(entry, candidate, args.body_only)
    result = match.compare(entry, source_override=source, owner=ROOT / entry['source'])
    print(f"{result['status']} {entry['name']} text={result.get('candidate_size', 0)}/{entry['size']} "
          f"build={result.get('build', 'unknown')}")
    if result['status'] != 'MATCH':
        detail = result.get('detail') or result.get('first_difference')
        if detail is not None:
            print(detail)
        return 1
    return 0


_JOB_ENTRIES: dict[str, dict] = {}


def compile_candidate(job_path: str, input_path: str, output_path: str) -> tuple[int, str]:
    """Compile one candidate for a job; returns (exit code, error text).

    Shared by `permute.py compile` and the long-lived permute_bridge server,
    which keeps the matcher state loaded between iterations.
    """
    job = Path(job_path).resolve()
    entry = _JOB_ENTRIES.get(str(job))
    if entry is None:
        metadata = json.loads((job / 'metadata.json').read_text(encoding='utf-8'))
        entry = _JOB_ENTRIES[str(job)] = entry_for(metadata['function'])
    source = Path(input_path).resolve()
    spliced = None
    if needs_splice(entry, source):
        spliced = source = splice_candidate(entry, source, Path(output_path).resolve().parent)
    try:
        result = match.compare(entry, source_override=source, verbose=True,
                               owner=ROOT / entry['source'])
    finally:
        if spliced is not None:
            spliced.unlink(missing_ok=True)
    if result['status'] in {'COMPILE_ERROR', 'OBJECT_ERROR'}:
        return 1, str(result.get('detail', result['status']))
    synthetic_object(bytes.fromhex(result['candidate_hex']), Path(output_path).resolve(), entry['name'])
    return 0, ''


def command_compile(args: argparse.Namespace) -> int:
    """Compiler bridge called by upstream decomp-permuter's compile.sh."""
    rc, err = compile_candidate(args.job, args.input, args.output)
    if err:
        print(err, file=sys.stderr)
    return rc


def command_run(args: argparse.Namespace) -> int:
    entry = entry_for(args.function)
    job = prepare(entry)
    command = [str(ROOT / 'tools' / 'run-permuter.sh'), str(job), '--stop-on-zero',
               '-j', str(args.jobs)]
    result = subprocess.run(command, cwd=ROOT)
    for winner in sorted(job.glob('output-0-*/source.c')):
        verify = match.compare(entry, source_override=candidate_source(entry, winner, False),
                               owner=ROOT / entry['source'])
        print(f"{verify['status']} {winner.relative_to(ROOT)}")
        if verify['status'] == 'MATCH':
            return 0
    # Upstream does not write an output directory when the unpermuted base
    # already scores zero. The authoritative candidate is still worth testing.
    base = match.compare(entry, source_override=candidate_source(entry, job / 'candidate.c', False),
                         owner=ROOT / entry['source'])
    print(f"{base['status']} {job.relative_to(ROOT)}/candidate.c")
    if base['status'] == 'MATCH':
        return 0
    return result.returncode or 1


def command_doctor(_: argparse.Namespace) -> int:
    missing = []
    if not (VENDOR / 'permuter.py').is_file():
        missing.append('tools/decomp-permuter (clone upstream first)')
    for module in ('toml', 'pycparser'):
        try:
            __import__(module)
        except ImportError:
            missing.append(f'Python module {module}')
    if missing:
        print('MISSING: ' + ', '.join(missing))
        return 2
    print('OK: upstream permuter and Python dependencies are available')
    return 0


def main() -> int:
    parser = argparse.ArgumentParser(description=__doc__)
    sub = parser.add_subparsers(dest='command', required=True)
    prepare_parser = sub.add_parser('prepare', help='create an isolated candidate job')
    prepare_parser.add_argument('function')
    prepare_parser.set_defaults(func=command_prepare)
    verify_parser = sub.add_parser('verify', help='authoritatively verify a candidate')
    verify_parser.add_argument('function')
    verify_parser.add_argument('candidate')
    verify_parser.add_argument('--body-only', action='store_true',
                               help='candidate contains only the complete function definition')
    verify_parser.set_defaults(func=command_verify)
    compile_parser = sub.add_parser('compile', help=argparse.SUPPRESS)
    compile_parser.add_argument('job')
    compile_parser.add_argument('input')
    compile_parser.add_argument('-o', '--output', required=True)
    compile_parser.set_defaults(func=command_compile)
    run_parser = sub.add_parser('run', help='run upstream permuter then exactly verify winners')
    run_parser.add_argument('function')
    run_parser.add_argument('--jobs', type=int, default=4)
    run_parser.set_defaults(func=command_run)
    doctor_parser = sub.add_parser('doctor', help='check local permuter prerequisites')
    doctor_parser.set_defaults(func=command_doctor)
    args = parser.parse_args()
    try:
        return args.func(args)
    except (OSError, ValueError) as exc:
        print(f'ERROR: {exc}', file=sys.stderr)
        return 2


if __name__ == '__main__':
    raise SystemExit(main())
