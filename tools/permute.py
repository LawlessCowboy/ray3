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


def find_function_span(source: str, name: str) -> tuple[int, int]:
    """Return the complete definition span, including its closing brace."""
    occurrence = re.search(rf'\b{re.escape(name)}\s*\(', source)
    if occurrence is None:
        raise ValueError(f'could not find definition for {name}')
    brace = source.find('{', occurrence.end())
    if brace < 0:
        raise ValueError(f'could not find opening brace for {name}')
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
    job = job_dir(entry)
    job.mkdir(parents=True, exist_ok=True)
    # Upstream preprocesses with `cpp -nostdinc`.  Replace the ubiquitous
    # stddef include in the isolated candidate with the only definitions our
    # recovered C needs, without changing canonical source or MWCC's headers.
    permuter_source = source.replace(
        '#include <stddef.h>', 'typedef unsigned int size_t;\n#define NULL ((void *)0)')
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
                 '`tools/permute.py verify`, never with upstream score alone.'),
    }
    (job / 'metadata.json').write_text(json.dumps(metadata, indent=2) + '\n', encoding='utf-8')
    _, _, main, _, _ = match.target_context()
    target_offset = main.offset + entry['address'] - main.addr
    target_words = match.TARGET_PATH.read_bytes()[target_offset:target_offset + entry['size']]
    synthetic_object(target_words, job / 'target.o', entry['name'])
    compile_script = job / 'compile.sh'
    compile_script.write_text(
        '#!/bin/sh\n'
        f'exec python3 "{ROOT / "tools" / "permute.py"}" compile "{job}" "$@"\n',
        encoding='utf-8')
    compile_script.chmod(0o755)
    (job / 'settings.toml').write_text(
        f'func_name = "{entry["name"]}"\ncompiler_type = "mwcc"\n'
        'objdump_command = "mipsel-linux-gnu-objdump -dr"\n', encoding='utf-8')
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
        return candidate
    original_path = ROOT / entry['source']
    original = original_path.read_text(encoding='utf-8', errors='replace')
    start, end = find_function_span(original, entry['name'])
    body = candidate.read_text(encoding='utf-8', errors='replace').strip()
    result = job_dir(entry) / 'candidate-full.c'
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
    result = match.compare(entry, source_override=source)
    print(f"{result['status']} {entry['name']} text={result.get('candidate_size', 0)}/{entry['size']} "
          f"build={result.get('build', 'unknown')}")
    if result['status'] != 'MATCH':
        detail = result.get('detail') or result.get('first_difference')
        if detail is not None:
            print(detail)
        return 1
    return 0


def command_compile(args: argparse.Namespace) -> int:
    """Compiler bridge called by upstream decomp-permuter's compile.sh."""
    job = Path(args.job).resolve()
    metadata = json.loads((job / 'metadata.json').read_text(encoding='utf-8'))
    entry = entry_for(metadata['function'])
    result = match.compare(entry, source_override=Path(args.input).resolve(), verbose=True)
    if result['status'] in {'COMPILE_ERROR', 'OBJECT_ERROR'}:
        print(result.get('detail', result['status']), file=sys.stderr)
        return 1
    synthetic_object(bytes.fromhex(result['candidate_hex']), Path(args.output).resolve(), entry['name'])
    return 0


def command_run(args: argparse.Namespace) -> int:
    entry = entry_for(args.function)
    job = prepare(entry)
    command = [str(ROOT / 'tools' / 'run-permuter.sh'), str(job), '--stop-on-zero',
               '-j', str(args.jobs)]
    result = subprocess.run(command, cwd=ROOT)
    for winner in sorted(job.glob('output-0-*/source.c')):
        verify = match.compare(entry, source_override=winner)
        print(f"{verify['status']} {winner.relative_to(ROOT)}")
        if verify['status'] == 'MATCH':
            return 0
    # Upstream does not write an output directory when the unpermuted base
    # already scores zero. The authoritative candidate is still worth testing.
    base = match.compare(entry, source_override=job / 'candidate.c')
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
