#!/usr/bin/env python3
"""Fast, relocation-aware matching support for the Rayman 3 PS2 project.

The tool deliberately works from relocatable MWCC objects.  It resolves named
MIPS relocations against the linked retail ELF, so a function can be verified
without reconstructing the game's final linker environment.
"""

from __future__ import annotations

import argparse
import fcntl
import hashlib
import json
import os
import re
import struct
import subprocess
import sys
import threading
from concurrent.futures import ThreadPoolExecutor, as_completed

try:
    import rabbitizer
except ImportError:
    rabbitizer = None
try:
    import spimdisasm
except ImportError:
    spimdisasm = None
from dataclasses import dataclass
from datetime import date
from collections import Counter
from pathlib import Path

from extract_debug import (DebugParser, STT_FUNC, STT_OBJECT, parse_line_blob,
                           parse_line_section)


ROOT = Path(__file__).resolve().parent.parent
SRC_ROOT = ROOT / 'src' / 'Rayman3'
BUILD_ROOT = ROOT / 'build' / 'match'

# Multiple recorded functions commonly belong to one translation unit.  Keep
# each fingerprint's object build atomic when verify-recorded is run with
# several workers; otherwise concurrent callers can race on the shared
# temporary object path.
_compile_locks: dict[Path, threading.Lock] = {}
_compile_locks_guard = threading.Lock()
INDEX_PATH = BUILD_ROOT / 'source-index.json'
COMPILEABILITY_PATH = BUILD_ROOT / 'compileability.json'
LEASES_PATH = BUILD_ROOT / 'source-leases.json'
MANIFEST_PATH = ROOT / 'config' / 'matches.json'
INSIGHTS_PATH = ROOT / 'docs' / 'matching-insights.md'
TARGET_PATH = ROOT / 'SLKA_250.78'
DEFAULT_WIBO = ROOT / 'wibo-x86_64'
DEFAULT_MWCC = ROOT / 'Compiler' / 'mwcps2-3.0-011126' / 'mwccps2.exe'
DEFAULT_INCLUDES = ROOT / 'include' / 'mwcc'
MODEL_ORDER = {
    'gpt-5.4-mini': 0,
    'gpt-5.6-luna': 1,
    'gpt-5.6-terra': 2,
    'gpt-5.6-sol': 3,
}
MWCC_FLAGS = [
    '-c', '-g', '-opt', 'level=3', '-farcall', 'off', '-sdatathreshold', '8',
    '-inline', 'off', '-strings', 'reuse,nopool', '-enum', 'int',
]


@dataclass
class Section:
    index: int
    name: str
    type: int
    addr: int
    offset: int
    size: int
    link: int
    info: int
    entsize: int
    data: bytes


@dataclass
class Symbol:
    index: int
    name: str
    value: int
    size: int
    info: int
    shndx: int

    @property
    def type(self) -> int:
        return self.info & 0x0F


def read_sections(path: Path) -> list[Section]:
    data = path.read_bytes()
    if data[:4] != b'\x7fELF' or data[4] != 1 or data[5] != 1:
        raise ValueError(f'{path}: expected ELF32 little-endian')
    shoff, = struct.unpack_from('<I', data, 32)
    shentsize, shnum, shstrndx = struct.unpack_from('<HHH', data, 46)
    shstr_hdr = shoff + shstrndx * shentsize
    _, _, _, _, shstr_off, shstr_size, *_ = struct.unpack_from('<IIIIIIIIII', data, shstr_hdr)
    shstr = data[shstr_off:shstr_off + shstr_size]
    sections = []
    for index in range(shnum):
        offset = shoff + index * shentsize
        name_off, typ, _, addr, file_off, size, link, info, _, entsize = struct.unpack_from(
            '<IIIIIIIIII', data, offset)
        end = shstr.find(b'\0', name_off)
        name = shstr[name_off:end].decode('latin-1') if name_off else ''
        sections.append(Section(index, name, typ, addr, file_off, size, link, info,
                                entsize, data[file_off:file_off + size]))
    return sections


def named_sections(sections: list[Section]) -> dict[str, Section]:
    """Return the first section of each name; object files may have duplicates."""
    result = {}
    for section in sections:
        result.setdefault(section.name, section)
    return result


def c_string(data: bytes, offset: int) -> str:
    end = data.find(b'\0', offset)
    return data[offset:end].decode('latin-1', errors='replace')


def parse_symbols(sections: list[Section]) -> list[Symbol]:
    result = []
    for section in sections:
        if section.type != 2 or section.entsize != 16:
            continue
        strings = sections[section.link].data
        for offset in range(0, section.size, 16):
            name_off, value, size, info, _, shndx = struct.unpack_from('<IIIBBH', section.data, offset)
            result.append(Symbol(len(result), c_string(strings, name_off), value, size, info, shndx))
    return result


def parse_relocations(section: Section) -> list[tuple[int, int, int]]:
    """Return (offset, symbol-index, MIPS relocation-type)."""
    result = []
    for offset in range(0, section.size, 8):
        reloc_offset, info = struct.unpack_from('<II', section.data, offset)
        result.append((reloc_offset, info >> 8, info & 0xFF))
    return result


def preferred_symbol(symbols: list[Symbol], address: int) -> Symbol | None:
    candidates = [s for s in symbols if s.value == address and s.name]
    if not candidates:
        return None
    generated = {'ENTRYPOINT', '__gnu_compiled_c', 'gcc2_compiled.'}
    return min(candidates, key=lambda s: (s.name in generated, len(s.name), s.name))


def intervals_size(intervals: list[tuple[int, int]]) -> int:
    total = 0
    end = -1
    for start, stop in sorted(intervals):
        if stop <= end:
            continue
        total += stop - max(start, end)
        end = max(end, stop)
    return total


ADDR_RE = re.compile(r'/\*\s*addr:\s*0x([0-9A-Fa-f]+)\s+size:\s*(\d+)\s+bytes\s*\*/')
NAME_RE = re.compile(r'\b([A-Za-z_~][A-Za-z0-9_:~]*)\s*\([^;{}]*\)\s*\{', re.S)
LINE_RE = re.compile(r'\+0x([0-9A-Fa-f]+)\s*->\s*line\s*(\d+)')


def instruction_features(code: bytes) -> dict[str, int]:
    """Return cheap, architecture-specific complexity signals from MIPS code."""
    branches = calls = cop1 = cop2 = memory = 0
    for offset in range(0, len(code) - 3, 4):
        word, = struct.unpack_from('<I', code, offset)
        opcode = word >> 26
        funct = word & 0x3F
        if opcode in {1, 4, 5, 6, 7, 20, 21, 22, 23}:
            branches += 1
        if opcode == 3 or (opcode == 0 and funct == 9):
            calls += 1
        if opcode == 17:
            cop1 += 1
        elif opcode == 18:
            cop2 += 1
        if 32 <= opcode <= 46:
            memory += 1
    return {
        'instructions': len(code) // 4,
        'branches': branches,
        'calls': calls,
        'cop1': cop1,
        'cop2': cop2,
        'memory': memory,
    }


def difficulty_for(code: bytes, line_count: int, language: str) -> dict:
    """Estimate matching effort and the least expensive suitable worker model.

    This is a triage estimate, not a claim about semantic difficulty. It is
    deliberately biased toward cheap models for small integer C functions and
    escalates for calls, control flow, floating point/VU code, and C++.
    """
    features = instruction_features(code)
    size = len(code)
    score = 0
    if size > 12:
        score += 1
    if size > 32:
        score += 1
    if size > 80:
        score += 1
    if size > 160:
        score += 2
    if size > 320:
        score += 3
    score += min(features['branches'], 6)
    score += 2 * min(features['calls'], 5)
    if features['memory'] > 8:
        score += 1
    if line_count > 8:
        score += 1
    if line_count > 20:
        score += 2
    if features['cop1']:
        score += 3
    if features['cop2']:
        score += 5
    if language == 'C++':
        score += 3
    if score <= 1:
        label, model, thinking = 'trivial', 'gpt-5.4-mini', 'minimal'
    elif score <= 4:
        label, model, thinking = 'easy', 'gpt-5.6-luna', 'low'
    elif score <= 8:
        label, model, thinking = 'moderate', 'gpt-5.6-terra', 'medium'
    elif score <= 15:
        label, model, thinking = 'complex', 'gpt-5.6-sol', 'high'
    else:
        label, model, thinking = 'expert', 'gpt-5.6-sol', 'xhigh'
    return {
        'score': score,
        'label': label,
        'model': model,
        'thinking': thinking,
        **features,
    }


def source_index(target_symbols: list[Symbol], main: Section) -> list[dict]:
    by_addr = {symbol.value: preferred_symbol(target_symbols, symbol.value)
               for symbol in target_symbols if symbol.type == STT_FUNC}
    entries_by_address: dict[int, dict] = {}
    for path in SRC_ROOT.rglob('*'):
        # Extraction experiments left nested and development trees beside the
        # canonical source root.  They can contain the same address comments;
        # indexing them first silently redirects manifest entries to stale
        # files.  Only the shipped Disk_01 tree is valid for matching.
        relative = path.relative_to(ROOT).as_posix()
        if '/Rayman3/Rayman3/' in relative or relative.startswith('src/Rayman3/dev/'):
            continue
        if path.suffix.lower() not in {'.c', '.cpp', '.cxx', '.h', '.hpp', '.hxx'}:
            continue
        text = path.read_text(encoding='utf-8', errors='replace')
        for match in ADDR_RE.finditer(text):
            address = int(match.group(1), 16)
            size = int(match.group(2))
            ahead = text[match.end():match.end() + 4096]
            name_match = NAME_RE.search(ahead)
            symbol = by_addr.get(address)
            name = symbol.name if symbol else (name_match.group(1) if name_match else '')
            comment_end = text.find('*/', match.end())
            comment = text[match.start():comment_end + 2] if comment_end >= 0 else ''
            line_map = [(int(offset, 16), int(line)) for offset, line in LINE_RE.findall(comment)]
            body_start = text.find('{', match.end())
            body = text[body_start:body_start + 400] if body_start >= 0 else ''
            suffix = path.suffix.lower()
            language = 'C++' if suffix in {'.cpp', '.cxx', '.hpp', '.hxx'} else 'C'
            code_offset = address - main.addr
            code = main.data[code_offset:code_offset + size] if code_offset >= 0 else b''
            entries_by_address.setdefault(address, {
                'address': address,
                'size': size,
                'name': name,
                'source': str(path.relative_to(ROOT)),
                'language': language,
                'todo': 'TODO: decompile from asm/' in body,
                'line_map': line_map,
                'difficulty': difficulty_for(code, len(line_map), language),
            })
    # The debug parser currently owns only part of the ELF's function set.
    # Keep a difficulty record for every remaining code symbol as well, but
    # leave it unassigned until source ownership is recovered.
    for symbol in target_symbols:
        if (symbol.type != STT_FUNC or not symbol.size or symbol.value in entries_by_address
                or not main.addr <= symbol.value < main.addr + main.size):
            continue
        code_offset = symbol.value - main.addr
        code = main.data[code_offset:code_offset + symbol.size]
        preferred = preferred_symbol(target_symbols, symbol.value)
        entries_by_address[symbol.value] = {
            'address': symbol.value,
            'size': symbol.size,
            'name': preferred.name if preferred else symbol.name or f'sym_{symbol.value:08x}',
            'source': None,
            'language': 'unknown',
            'todo': True,
            'line_map': [],
            'difficulty': difficulty_for(code, 0, 'unknown'),
        }
    return list(entries_by_address.values())


def cached_source_index(target_symbols: list[Symbol], main: Section,
                        refresh: bool = False) -> list[dict]:
    """Load stable function ownership metadata without rereading 340 sources.

    Function address comments and ownership do not change during normal body
    matching.  Refresh explicitly after extractor/Splat work; body edits do
    not need a rebuild and therefore keep the match loop fast.
    """
    if not refresh and INDEX_PATH.exists():
        try:
            payload = json.loads(INDEX_PATH.read_text())
            if (payload.get('schema_version') == 3
                    and payload.get('target_size') == TARGET_PATH.stat().st_size):
                return payload['entries']
        except (OSError, ValueError, KeyError):
            pass
    entries = source_index(target_symbols, main)
    INDEX_PATH.parent.mkdir(parents=True, exist_ok=True)
    INDEX_PATH.write_text(json.dumps({
        'schema_version': 3,
        'target_size': TARGET_PATH.stat().st_size,
        'entries': entries,
    }, separators=(',', ':')))
    return entries


def target_context() -> tuple[list[Section], list[Symbol], Section, dict[int, Symbol], dict[str, Symbol]]:
    if not TARGET_PATH.exists():
        raise FileNotFoundError('retail ELF missing: place it at SLKA_250.78')
    sections = read_sections(TARGET_PATH)
    by_name = named_sections(sections)
    main = by_name['main']
    symbols = parse_symbols(sections)
    addresses = {}
    names = {}
    for symbol in symbols:
        if symbol.name:
            names.setdefault(symbol.name, symbol)
        if symbol.value and symbol.type in {STT_FUNC, STT_OBJECT}:
            addresses.setdefault(symbol.value, symbol)
    return sections, symbols, main, addresses, names


def find_entry(query: str, entries: list[dict]) -> dict:
    if query.lower().startswith('0x'):
        address = int(query, 16)
        matches = [entry for entry in entries if entry['address'] == address]
    else:
        matches = [entry for entry in entries if entry['name'] == query]
    if len(matches) != 1:
        detail = ', '.join(f"0x{x['address']:08x}" for x in matches[:8]) or 'none'
        raise ValueError(f'function {query!r} is ambiguous or absent ({detail})')
    return matches[0]


def tool_paths() -> tuple[Path, Path, Path]:
    wibo = Path(os.environ.get('WIBO', DEFAULT_WIBO))
    mwcc = Path(os.environ.get('MWCC', DEFAULT_MWCC))
    includes = Path(os.environ.get('MWC_INCLUDES', DEFAULT_INCLUDES))
    return wibo, mwcc, includes


def compile_source(source: Path) -> tuple[Path | None, str]:
    wibo, mwcc, includes = tool_paths()
    for path, label in ((wibo, 'Wibo'), (mwcc, 'MWCC'), (includes, 'MWC include directory')):
        if not path.exists():
            return None, f'{label} missing: {path}'
    fingerprint = hashlib.sha1()
    fingerprint.update(source.read_bytes())
    fingerprint.update(mwcc.read_bytes())
    fingerprint.update(' '.join(MWCC_FLAGS).encode())
    output = BUILD_ROOT / 'objects' / f'{fingerprint.hexdigest()}.o'
    with _compile_locks_guard:
        lock = _compile_locks.setdefault(output, threading.Lock())
    with lock:
        if output.exists():
            return output, 'cached'
        output.parent.mkdir(parents=True, exist_ok=True)
        # Include the process id in the temporary name so an interrupted or
        # independently launched verifier cannot clobber this build.
        temporary = output.with_name(output.stem + f'.{os.getpid()}.tmp.o')
        env = os.environ.copy()
        env['MWCIncludes'] = str(includes)
        cmd = [str(wibo), str(mwcc), '-I' + str(ROOT / 'include'), *MWCC_FLAGS,
               str(source), '-o', str(temporary)]
        result = subprocess.run(cmd, cwd=ROOT, env=env, text=True,
                                stdout=subprocess.PIPE, stderr=subprocess.STDOUT)
        if result.returncode:
            temporary.unlink(missing_ok=True)
            return None, result.stdout[-4000:]
        temporary.replace(output)
        return output, 'compiled'


def load_compileability() -> dict:
    if not COMPILEABILITY_PATH.exists():
        return {'sources': {}}
    try:
        return json.loads(COMPILEABILITY_PATH.read_text())
    except (OSError, ValueError):
        return {'sources': {}}


def source_compileable(source_rel: str, state: dict) -> bool:
    if not source_rel:
        return False
    record = state.get('sources', {}).get(source_rel)
    path = ROOT / source_rel
    if not record or not path.exists():
        return False
    info = path.stat()
    return (record.get('status') == 'ok' and record.get('mtime_ns') == info.st_mtime_ns
            and record.get('size') == info.st_size)


def signed16(value: int) -> int:
    return value - 0x10000 if value & 0x8000 else value


def patch_relocation(code: bytearray, offset: int, reloc_type: int,
                     symbol_address: int, gp: int) -> bool:
    """Apply supported MIPS REL relocations in-place; return exactness support."""
    if offset + 4 > len(code):
        return False
    word, = struct.unpack_from('<I', code, offset)
    if reloc_type == 2:  # R_MIPS_32
        struct.pack_into('<I', code, offset, (symbol_address + word) & 0xFFFFFFFF)
    elif reloc_type == 4:  # R_MIPS_26
        word = (word & 0xFC000000) | ((symbol_address >> 2) & 0x03FFFFFF)
        struct.pack_into('<I', code, offset, word)
    elif reloc_type == 5:  # R_MIPS_HI16; common zero-addend form
        addend = (word & 0xFFFF) << 16
        word = (word & 0xFFFF0000) | (((symbol_address + addend + 0x8000) >> 16) & 0xFFFF)
        struct.pack_into('<I', code, offset, word)
    elif reloc_type == 6:  # R_MIPS_LO16
        word = (word & 0xFFFF0000) | ((symbol_address + signed16(word & 0xFFFF)) & 0xFFFF)
        struct.pack_into('<I', code, offset, word)
    elif reloc_type == 7:  # R_MIPS_GPREL16
        word = (word & 0xFFFF0000) | ((symbol_address - gp + signed16(word & 0xFFFF)) & 0xFFFF)
        struct.pack_into('<I', code, offset, word)
    else:
        return False
    return True


def compare(entry: dict, verbose: bool = False, source_override: Path | None = None) -> dict:
    sections, target_symbols, main, _, target_names = target_context()
    source = source_override or ROOT / entry['source']
    obj_path, build_state = compile_source(source)
    if obj_path is None:
        return {'status': 'COMPILE_ERROR', 'entry': entry, 'detail': build_state}
    obj_sections = read_sections(obj_path)
    obj_symbols = parse_symbols(obj_sections)
    candidates = [symbol for symbol in obj_symbols if symbol.type == STT_FUNC
                  and symbol.name == entry['name'] and symbol.size]
    # The debug stream records C++ source names, while MWCC's relocatable
    # objects retain its CodeWarrior ABI suffix (for example
    # ``fn_bStreamSize__FUi``).  C functions must remain an exact-name match;
    # for C++ accept the ABI spelling only when it identifies one function.
    if not candidates and entry.get('language') == 'C++':
        candidates = [symbol for symbol in obj_symbols if symbol.type == STT_FUNC
                      and symbol.name.startswith(entry['name'] + '__') and symbol.size]
    if not candidates:
        return {'status': 'OBJECT_ERROR', 'entry': entry, 'detail':
                f"no object function symbol named {entry['name']!r}"}
    if len(candidates) != 1:
        return {'status': 'OBJECT_ERROR', 'entry': entry, 'detail':
                f"ambiguous object symbols for {entry['name']!r}: " +
                ', '.join(symbol.name for symbol in candidates)}
    candidate = candidates[0]
    section = obj_sections[candidate.shndx]
    candidate_bytes = bytearray(section.data[candidate.value:candidate.value + candidate.size])
    target_offset = main.offset + entry['address'] - main.addr
    target_bytes = TARGET_PATH.read_bytes()[target_offset:target_offset + entry['size']]
    gp_symbol = target_names.get('_gp')
    gp = gp_symbol.value if gp_symbol else 0
    unresolved = []
    relocations = []
    for rel_section in obj_sections:
        if rel_section.type != 9 or rel_section.info != candidate.shndx:
            continue
        for offset, symbol_index, reloc_type in parse_relocations(rel_section):
            if not candidate.value <= offset < candidate.value + candidate.size:
                continue
            relative = offset - candidate.value
            symbol = obj_symbols[symbol_index] if symbol_index < len(obj_symbols) else None
            target_symbol = target_names.get(symbol.name) if symbol and symbol.name else None
            relocations.append({'offset': relative, 'type': reloc_type,
                                'symbol': symbol.name if symbol else ''})
            if target_symbol is None or not patch_relocation(candidate_bytes, relative, reloc_type,
                                                               target_symbol.value, gp):
                unresolved.append(relocations[-1])
    code_equal = bytes(candidate_bytes) == target_bytes
    line_symbol = next((symbol for symbol in obj_symbols
                        if symbol.name == '.line_' + entry['name']), None)
    line_section = obj_sections[line_symbol.shndx] if line_symbol else None
    candidate_lines = parse_line_section(line_section.data, 0) if line_section else []
    target_offsets = [offset for offset, _ in entry['line_map']]
    candidate_offsets = [offset for offset, _ in candidate_lines]
    lines_equal = bool(target_offsets) and candidate_offsets == target_offsets
    status = 'MATCH' if (code_equal and not unresolved and candidate.size == entry['size']) else 'MISMATCH'
    first_difference = None
    for offset, (got, want) in enumerate(zip(candidate_bytes, target_bytes)):
        if got != want:
            first_difference = offset
            break
    if first_difference is None and len(candidate_bytes) != len(target_bytes):
        first_difference = min(len(candidate_bytes), len(target_bytes))
    return {
        'status': status, 'entry': entry, 'object': str(obj_path.relative_to(ROOT)),
        'build': build_state, 'candidate_size': candidate.size, 'target_size': entry['size'],
        'code_equal': code_equal, 'line_offsets_equal': lines_equal,
        'candidate_lines': candidate_lines, 'target_lines': entry['line_map'],
        'relocations': relocations, 'unresolved_relocations': unresolved,
        'first_difference': first_difference,
        'candidate_hex': bytes(candidate_bytes).hex() if verbose else '',
        'target_hex': target_bytes.hex() if verbose else '',
    }


def load_manifest() -> dict:
    if not MANIFEST_PATH.exists():
        return {'schema_version': 1, 'functions': {}, 'data': {}}
    return json.loads(MANIFEST_PATH.read_text())


def save_manifest(manifest: dict) -> None:
    MANIFEST_PATH.write_text(json.dumps(manifest, indent=2, sort_keys=True) + '\n')


def function_source_excerpt(source: Path, name: str) -> str:
    """Return the named function's current C/C++ definition for attempt logs."""
    text = source.read_text(encoding='utf-8', errors='replace')
    marker = text.find(name)
    if marker < 0:
        return ''
    opening = text.find('{', marker)
    if opening < 0:
        return text[max(0, marker - 200):marker + len(name)]
    depth = 0
    for position in range(opening, len(text)):
        if text[position] == '{':
            depth += 1
        elif text[position] == '}':
            depth -= 1
            if depth == 0:
                return text[max(0, text.rfind('\n', 0, marker) + 1):position + 1]
    return text[max(0, text.rfind('\n', 0, marker) + 1):]


def coverage() -> dict:
    _, symbols, main, _, _ = target_context()
    manifest = load_manifest()
    code = [(s.value, s.value + s.size) for s in symbols if s.type == STT_FUNC and s.size
            and main.addr <= s.value < main.addr + main.size]
    data = [(s.value, s.value + s.size) for s in symbols if s.type == STT_OBJECT and s.size
            and main.addr <= s.value < main.addr + main.size]
    function_records = list(manifest.get('functions', {}).values())
    data_records = list(manifest.get('data', {}).values())
    matched_code = [(int(record['address'], 16), int(record['address'], 16) + record['size'])
                    for record in function_records if record.get('status') == 'MATCH']
    matched_data = [(int(record['address'], 16), int(record['address'], 16) + record['size'])
                    for record in data_records if record.get('status') == 'MATCH']
    return {
        'matched_functions': len([r for r in function_records if r.get('status') == 'MATCH']),
        'total_functions': len({(s.value, s.size) for s in symbols if s.type == STT_FUNC and s.size
                                and main.addr <= s.value < main.addr + main.size}),
        'code_bytes_matched': intervals_size(matched_code),
        'code_bytes_total': intervals_size(code),
        'data_objects_matched': len([r for r in data_records if r.get('status') == 'MATCH']),
        'data_objects_total': len({(s.value, s.size) for s in symbols if s.type == STT_OBJECT and s.size
                                   and main.addr <= s.value < main.addr + main.size}),
        'data_bytes_matched': intervals_size(matched_data),
        'data_bytes_total': intervals_size(data),
    }


def print_coverage(result: dict) -> None:
    def pct(value: int, total: int) -> str:
        return f'{(100 * value / total):.4f}%' if total else 'n/a'
    print(f"functions: {result['matched_functions']}/{result['total_functions']}")
    print(f"code bytes: {result['code_bytes_matched']}/{result['code_bytes_total']} "
          f"({pct(result['code_bytes_matched'], result['code_bytes_total'])})")
    print(f"data bytes: {result['data_bytes_matched']}/{result['data_bytes_total']} "
          f"({pct(result['data_bytes_matched'], result['data_bytes_total'])})")
    print(f"data objects: {result['data_objects_matched']}/{result['data_objects_total']}")


def command_doctor(_: argparse.Namespace) -> int:
    wibo, mwcc, includes = tool_paths()
    ok = True
    for label, path in [('retail ELF', TARGET_PATH), ('Wibo', wibo), ('MWCC 3.0', mwcc),
                        ('MWC include directory', includes)]:
        state = 'ok' if path.exists() else 'MISSING'
        print(f'{label}: {state} ({path.relative_to(ROOT) if path.is_relative_to(ROOT) else path})')
        ok &= path.exists()
    if TARGET_PATH.exists():
        digest = hashlib.sha1(TARGET_PATH.read_bytes()).hexdigest()
        print(f'ELF SHA-1: {digest} ({"ok" if digest == "c2c3f5c2ccceedc6745b4738102409f27bbb9f10" else "unexpected"})')
        ok &= digest == 'c2c3f5c2ccceedc6745b4738102409f27bbb9f10'
    for label, module in [('spimdisasm', spimdisasm), ('Rabbitizer', rabbitizer)]:
        if module is None:
            print(f'{label}: MISSING (install with: python3 -m pip install spimdisasm rabbitizer)')
            ok = False
        else:
            print(f'{label}: ok ({getattr(module, '__version__', 'installed')})')
    return 0 if ok else 2


def command_list(args: argparse.Namespace) -> int:
    _, symbols, main, _, _ = target_context()
    entries = cached_source_index(symbols, main, args.refresh_index)
    compileability = load_compileability()
    manifest = load_manifest()
    recorded_matches = {
        int(record['address'], 16)
        for record in manifest.get('functions', {}).values()
        if record.get('status') == 'MATCH'
    }
    matches = [e for e in entries if (not args.unmatched or e['address'] not in recorded_matches)
               and (args.include_unowned or e['source'] is not None)
               and (not args.max_lines or len(e['line_map']) <= args.max_lines)
               and (not args.language or e['language'] == args.language)
               and (not args.compileable or source_compileable(e['source'], compileability))
               and (not args.difficulty or e['difficulty']['label'] == args.difficulty)
               and (not args.model or e['difficulty']['model'] == args.model)]
    for entry in sorted(matches, key=lambda e: (e['difficulty']['score'], e['size'], e['address']))[:args.limit]:
        difficulty = entry['difficulty']
        print(f"0x{entry['address']:08x} {entry['size']:4d} {entry['language']:3s} "
              f"{difficulty['label']:8s} {difficulty['model']:13s}/{difficulty['thinking']:7s} "
              f"lines={len(entry['line_map']):2d} {entry['name']}  {entry['source'] or '<unrecovered>'}")
    print(f'{len(matches)} functions selected')
    return 0


def command_show(args: argparse.Namespace) -> int:
    _, symbols, main, _, _ = target_context()
    entry = find_entry(args.function, cached_source_index(symbols, main))
    print(json.dumps(entry, indent=2))
    return 0


def command_signature(args: argparse.Namespace) -> int:
    """Print source, raw-debug, and ABI evidence for a recovered signature."""
    sections, symbols, main, _, _ = target_context()
    entry = find_entry(args.function, cached_source_index(symbols, main))
    print(f"function: {entry['name']} @ 0x{entry['address']:08x} ({entry['size']} bytes)")
    if entry['source']:
        source = (ROOT / entry['source']).read_text(encoding='utf-8', errors='replace')
        marker = source.find(f' {entry["name"]}(')
        if marker < 0:
            marker = source.find(entry['name'] + '(')
        declaration = source[source.rfind('\n', 0, marker) + 1:source.find('{', marker)].strip()
        print(f'source declaration: {declaration or "<not recovered>"}')
    debug = next((section.data for section in sections if section.name == '.debug'), b'')
    name_pos = debug.find((entry['name'] + '\0').encode('latin-1'))
    if name_pos >= 0:
        parser = DebugParser(debug)
        parser._index_named_type_records()
        record_pos = debug.rfind(b'\x83\x00', max(0, name_pos - 64), name_pos)
        record = parser._indirect_record(record_pos, len(debug)) if record_pos >= 0 else None
        print(f'raw debug name offset: 0x{name_pos:x}')
        print('raw debug context:', debug[max(0, name_pos - 16):name_pos + len(entry['name']) + 8].hex(' '))
        if record:
            type_ref, depth, next_pos = record
            print(f'indirect type: ref=0x{type_ref:x} depth={depth} '
                  f'decoded={parser._resolve_indirect_type(type_ref, depth)}')
            print('trailing attributes:', debug[next_pos - 1:next_pos + 2].hex(' '))
    else:
        print('raw debug evidence: name not found')
    offset = entry['address'] - main.addr
    target = main.data[offset:offset + min(entry['size'], 24)]
    print('target ABI evidence:')
    for instruction_offset in range(0, len(target) - 3, 4):
        word = struct.unpack_from('<I', target, instruction_offset)[0]
        mnemonic = rabbitizer.Instruction(word).disassemble() if rabbitizer else f'0x{word:08x}'
        print(f'  +0x{instruction_offset:04x}: {mnemonic}')
    return 0


def branch_target(word: int, offset: int, function_address: int) -> int | None:
    """Return an in-function branch target offset when an instruction has one."""
    opcode = word >> 26
    is_relative = (
        opcode == 1 or 4 <= opcode <= 7 or 20 <= opcode <= 23
        or (opcode in (17, 18) and ((word >> 21) & 0x1f) == 8)
    )
    if is_relative:
        immediate = word & 0xffff
        if immediate & 0x8000:
            immediate -= 0x10000
        return offset + 4 + immediate * 4
    if opcode in (2, 3):
        absolute = ((function_address + offset + 4) & 0xf0000000) | ((word & 0x03ffffff) << 2)
        return absolute - function_address
    return None


def is_control_transfer(word: int) -> bool:
    opcode = word >> 26
    if opcode in (1, 2, 3, 4, 5, 6, 7, 17, 18, 20, 21, 22, 23):
        return True
    return opcode == 0 and ((word & 0x3f) in (8, 9))  # jr / jalr


def format_word_diff(candidate_hex: str, target_hex: str, relocations: list[dict],
                     function_address: int, candidate_lines: list[tuple[int, int]],
                     target_lines: list[tuple[int, int]]) -> str:
    """Render every instruction word, not only the first byte mismatch.

    PS2 instructions are four-byte little-endian words.  The matcher compares
    relocation-resolved bytes, so this table gives workers the same data in a
    source-shaped, full-function view.  ``!`` marks every differing word and
    ``R`` marks an object relocation that affected that word.
    """
    candidate = bytes.fromhex(candidate_hex)
    target = bytes.fromhex(target_hex)
    relocation_by_offset: dict[int, list[dict]] = {}
    for relocation in relocations:
        relocation_by_offset.setdefault(relocation['offset'], []).append(relocation)
    words = max(len(candidate), len(target)) // 4
    label_offsets = set()
    for raw in (candidate, target):
        for offset in range(0, len(raw) - 3, 4):
            target_offset = branch_target(struct.unpack_from('<I', raw, offset)[0], offset,
                                          function_address)
            if target_offset is not None and 0 <= target_offset < words * 4:
                label_offsets.add(target_offset)
    candidate_line_map = dict(candidate_lines)
    target_line_map = dict(target_lines)
    lines = ['offset  candidate  target     flags        candidate instruction                 target instruction']
    for offset in range(0, max(len(candidate), len(target)), 4):
        if offset in label_offsets:
            lines.append(f'L_{offset:04x}:')
        got = candidate[offset:offset + 4]
        want = target[offset:offset + 4]
        got_word = f'{struct.unpack("<I", (got + bytes(4))[:4])[0]:08x}' if got else '--------'
        want_word = f'{struct.unpack("<I", (want + bytes(4))[:4])[0]:08x}' if want else '--------'
        got_value = int(got_word, 16) if got else 0
        want_value = int(want_word, 16) if want else 0
        relocation_note = ','.join(
            f"R{entry['type']}:{entry['symbol'] or '?'}"
            for entry in relocation_by_offset.get(offset, [])
        )
        delay_slot = (offset >= 4 and ((got and is_control_transfer(
            struct.unpack_from('<I', candidate, offset - 4)[0])) or (want and is_control_transfer(
            struct.unpack_from('<I', target, offset - 4)[0]))))
        flags = ('!' if got != want else ' ') + ('B' if (got and is_control_transfer(got_value))
                 or (want and is_control_transfer(want_value)) else ' ')
        flags += 'D' if delay_slot else ' '
        flags += f' {relocation_note}' if relocation_note else ''
        got_asm = rabbitizer.Instruction(got_value).disassemble() if rabbitizer and got else ''
        want_asm = rabbitizer.Instruction(want_value).disassemble() if rabbitizer and want else ''
        got_target = branch_target(got_value, offset, function_address) if got else None
        want_target = branch_target(want_value, offset, function_address) if want else None
        if got_target is not None:
            got_asm += f' -> {"L_" + format(got_target, "04x") if 0 <= got_target < words * 4 else hex(function_address + got_target)}'
        if want_target is not None:
            want_asm += f' -> {"L_" + format(want_target, "04x") if 0 <= want_target < words * 4 else hex(function_address + want_target)}'
        lines.append(f'+0x{offset:04x}  {got_word}  {want_word}  {flags:<12} {got_asm:<36} {want_asm}')
    if candidate_line_map or target_line_map:
        lines.append('line map: offset  candidate-line  target-line')
        for offset in sorted(set(candidate_line_map) | set(target_line_map)):
            lines.append(f'          +0x{offset:04x}  {candidate_line_map.get(offset, "-")!s:<14} '
                         f'{target_line_map.get(offset, "-")}')
    return '\n'.join(lines)


def command_check(args: argparse.Namespace) -> int:
    _, symbols, main, _, _ = target_context()
    entry = find_entry(args.function, cached_source_index(symbols, main))
    if entry['source'] is None:
        print(f"SOURCE_UNRECOVERED {entry['name']}: no debug-owned source template")
        return 1
    result = compare(entry, args.diff)
    if args.json:
        print(json.dumps(result, indent=2))
    elif result['status'] == 'COMPILE_ERROR':
        print(f"COMPILE_ERROR {entry['name']}\n{result['detail']}")
    elif result['status'] == 'OBJECT_ERROR':
        print(f"OBJECT_ERROR {entry['name']}: {result['detail']}")
    else:
        print(f"{result['status']} {entry['name']} text={result['candidate_size']}/{result['target_size']} "
              f"relocs={len(result['relocations']) - len(result['unresolved_relocations'])}/"
              f"{len(result['relocations'])} lines={'ok' if result['line_offsets_equal'] else 'different'} "
              f"build={result['build']}")
        if result['first_difference'] is not None:
            print(f"first difference: +0x{result['first_difference']:x}")
        if result['unresolved_relocations']:
            print('unresolved relocations: ' + ', '.join(
                f"+0x{x['offset']:x}/type{x['type']}/{x['symbol'] or '?'}"
                for x in result['unresolved_relocations']))
        if args.diff:
            print('candidate:', result['candidate_hex'])
            print('target:   ', result['target_hex'])
            print(format_word_diff(result['candidate_hex'], result['target_hex'],
                                   result['relocations'], entry['address'],
                                   result['candidate_lines'], result['target_lines']))
    if args.record and result['status'] == 'MATCH':
        manifest = load_manifest()
        manifest.setdefault('functions', {})[f"0x{entry['address']:08x}"] = {
            'address': f"0x{entry['address']:08x}", 'name': entry['name'], 'size': entry['size'],
            'source': entry['source'], 'status': 'MATCH',
            'compiler_profile': 'mwccps2-3.0-011126-o3',
        }
        save_manifest(manifest)
        print('recorded verified match')
    if args.record_attempt:
        manifest = load_manifest()
        source_path = ROOT / entry['source']
        attempt = {
            'address': f"0x{entry['address']:08x}",
            'name': entry['name'],
            'size': entry['size'],
            'source': entry['source'],
            'status': result['status'],
            'model': args.model or os.environ.get('CODEX_MODEL', 'unknown'),
            'reason': args.reason or '',
            'candidate_size': result.get('candidate_size'),
            'target_size': result.get('target_size'),
            'first_difference': result.get('first_difference'),
            'unresolved_relocations': result.get('unresolved_relocations', []),
            'line_offsets_equal': result.get('line_offsets_equal'),
            'implementation': function_source_excerpt(source_path, entry['name']),
        }
        manifest.setdefault('attempts', []).append(attempt)
        save_manifest(manifest)
        print('recorded attempt')
    return 0 if result['status'] == 'MATCH' else 1


def classify_result(result: dict) -> str:
    """Give workers a first-pass routing label for a mismatch."""
    status = result.get('status')
    if status in {'COMPILE_ERROR', 'OBJECT_ERROR'}:
        return 'translation-unit'
    if status != 'MISMATCH':
        return str(status or 'unknown').lower()
    if result.get('unresolved_relocations'):
        return 'relocation/global-layout'
    if result.get('candidate_size') != result.get('target_size'):
        return 'control-flow/size'
    candidate = bytes.fromhex(result.get('candidate_hex', ''))
    target = bytes.fromhex(result.get('target_hex', ''))
    differing = [offset for offset in range(0, min(len(candidate), len(target)), 4)
                 if candidate[offset:offset + 4] != target[offset:offset + 4]]
    reloc_offsets = {r['offset'] & ~3 for r in result.get('relocations', [])}
    if differing and set(differing) <= reloc_offsets:
        return 'relocation/global-layout'
    for offset in differing:
        got = struct.unpack_from('<I', candidate, offset)[0]
        want = struct.unpack_from('<I', target, offset)[0]
        got_op, want_op = got >> 26, want >> 26
        if got_op == 0x0C and want_op != 0x0C:
            return 'abi-narrow-type'
        if {got_op, want_op} == {2, 3}:
            return 'tail-call/dispatch'
    if result.get('code_equal') and not result.get('line_offsets_equal'):
        return 'source-layout/line-map'
    return 'codegen/scheduling'


def command_classify(args: argparse.Namespace) -> int:
    _, symbols, main, _, _ = target_context()
    entry = find_entry(args.function, cached_source_index(symbols, main))
    result = compare(entry, verbose=True)
    print(json.dumps({'name': entry['name'], 'status': result.get('status'),
                      'class': classify_result(result),
                      'first_difference': result.get('first_difference'),
                      'candidate_size': result.get('candidate_size'),
                      'target_size': result.get('target_size'),
                      'unresolved_relocations': result.get('unresolved_relocations', []),
                      'line_offsets_equal': result.get('line_offsets_equal')}, indent=2))
    return 0 if result.get('status') == 'MATCH' else 1


def load_leases() -> dict:
    if not LEASES_PATH.exists():
        return {}
    return json.loads(LEASES_PATH.read_text())


def command_lease(args: argparse.Namespace) -> int:
    leases = load_leases()
    if args.action == 'list':
        print(json.dumps(leases, indent=2, sort_keys=True))
        return 0
    if not args.source:
        raise SystemExit('lease claim/release requires SOURCE')
    if args.action == 'claim':
        if args.source in leases and leases[args.source] != args.owner:
            print(f'LEASED {args.source} by {leases[args.source]}')
            return 1
        leases[args.source] = args.owner
        LEASES_PATH.parent.mkdir(parents=True, exist_ok=True)
        LEASES_PATH.write_text(json.dumps(leases, indent=2, sort_keys=True) + '\n')
        print(f'claimed {args.source} for {args.owner}')
        return 0
    leases.pop(args.source, None)
    LEASES_PATH.parent.mkdir(parents=True, exist_ok=True)
    LEASES_PATH.write_text(json.dumps(leases, indent=2, sort_keys=True) + '\n')
    print(f'released {args.source}')
    return 0


def command_coverage(args: argparse.Namespace) -> int:
    result = coverage()
    if args.json:
        print(json.dumps(result, indent=2))
    else:
        print_coverage(result)
    return 0


def command_verify_recorded(args: argparse.Namespace) -> int:
    """Recompile and verify every function currently recorded as MATCH."""
    _, symbols, main, _, _ = target_context()
    entries = cached_source_index(symbols, main)
    by_address = {entry['address']: entry for entry in entries}
    manifest = load_manifest()
    recorded = [record for record in manifest.get('functions', {}).values()
                if record.get('status') == 'MATCH']
    targets = []
    for record in recorded:
        entry = by_address.get(int(record['address'], 16))
        # Older records can predate address comments in a regenerated source
        # (notably C++ methods and a few recovered wrappers).  The manifest
        # still contains authoritative ownership, so use it as a fallback
        # rather than passing a source-less index entry into compile_source.
        if entry is None or entry.get('source') is None:
            source = record.get('source')
            if source and (ROOT / source).exists():
                entry = {
                    'address': int(record['address'], 16),
                    'size': int(record.get('size', 0)),
                    'name': record['name'],
                    'source': source,
                    'language': 'C++' if Path(source).suffix.lower() in {'.cpp', '.cxx'} else 'C',
                    'todo': False,
                    'line_map': [],
                    'difficulty': {'score': 0, 'label': 'unknown',
                                   'model': 'unknown', 'thinking': 'unknown'},
                }
        if entry is not None:
            targets.append(entry)
    jobs = max(1, args.jobs)
    results = []
    with ThreadPoolExecutor(max_workers=jobs) as pool:
        futures = {pool.submit(compare, entry): entry for entry in targets}
        completed = 0
        live_matches = 0
        for future in as_completed(futures):
            entry = futures[future]
            try:
                result = future.result()
            except Exception as error:  # keep the audit running for other functions
                result = {'status': 'ERROR', 'entry': entry, 'detail': str(error)}
            results.append(result)
            completed += 1
            live_matches += result.get('status') == 'MATCH'
            print(f"progress {completed}/{len(targets)} "
                  f"verified={live_matches} failed={completed - live_matches}",
                  flush=True)
    failures = [result for result in results if result.get('status') != 'MATCH']
    for result in sorted(results, key=lambda item: item['entry']['address']):
        entry = result['entry']
        if result['status'] == 'MATCH':
            print(f"MATCH {entry['name']}")
        else:
            print(f"{result['status']} {entry['name']}"
                  f" first_difference={result.get('first_difference')}"
                  f" detail={result.get('detail', '')}")
    # Keep the headline count, but also make it immediately clear whether a
    # failure is a real code mismatch or a TU/object problem.  A regenerated
    # source file can invalidate many recorded functions at once, and the old
    # single number obscured that distinction.
    by_status = Counter(result.get('status', 'ERROR') for result in results)
    print(f"verified {by_status.get('MATCH', 0)}/{len(results)} recorded matches")
    if failures:
        summary = ', '.join(f"{status}={count}" for status, count in
                           sorted(by_status.items()) if status != 'MATCH')
        print(f"failures by status: {summary}")
        by_source = Counter(result['entry'].get('source', '<unknown>')
                            for result in failures)
        print('failing translation units:')
        for source, count in by_source.most_common():
            print(f"  {count} {source}")
    return 1 if failures else 0


def command_insight(args: argparse.Namespace) -> int:
    if args.action == 'list':
        print(INSIGHTS_PATH.read_text() if INSIGHTS_PATH.exists() else 'No insights recorded.')
        return 0
    INSIGHTS_PATH.parent.mkdir(parents=True, exist_ok=True)
    with INSIGHTS_PATH.open('a', encoding='utf-8') as file:
        fcntl.flock(file.fileno(), fcntl.LOCK_EX)
        file.write(f"\n- [{args.category}] {args.text} ({date.today().isoformat()})\n")
        fcntl.flock(file.fileno(), fcntl.LOCK_UN)
    print('recorded shared insight')
    return 0


def command_index(args: argparse.Namespace) -> int:
    _, symbols, main, _, _ = target_context()
    entries = cached_source_index(symbols, main, args.refresh)
    print(f'indexed {len(entries)} ELF functions at {INDEX_PATH.relative_to(ROOT)}')
    return 0


def command_preflight(args: argparse.Namespace) -> int:
    """Compile each unique canonical source once and persist its readiness."""
    _, symbols, main, _, _ = target_context()
    entries = cached_source_index(symbols, main, args.refresh_index)
    sources = sorted({entry['source'] for entry in entries if entry['source']
                      and Path(entry['source']).suffix.lower() in {'.c', '.cpp', '.cxx'}})
    if args.limit:
        sources = sources[:args.limit]
    state = load_compileability()
    state.setdefault('sources', {})

    def probe(source_rel: str) -> tuple[str, bool, str, int, int]:
        source = ROOT / source_rel
        obj, detail = compile_source(source)
        info = source.stat()
        return source_rel, obj is not None, detail, info.st_mtime_ns, info.st_size

    complete = 0
    with ThreadPoolExecutor(max_workers=args.jobs) as pool:
        futures = [pool.submit(probe, source_rel) for source_rel in sources]
        for future in as_completed(futures):
            source_rel, ok, detail, mtime_ns, size = future.result()
            state['sources'][source_rel] = {
                'status': 'ok' if ok else 'blocked', 'detail': detail[-1000:],
                'mtime_ns': mtime_ns, 'size': size,
            }
            complete += 1
            print(f"{'OK' if ok else 'BLOCKED'} {complete}/{len(sources)} {source_rel}")
    COMPILEABILITY_PATH.parent.mkdir(parents=True, exist_ok=True)
    COMPILEABILITY_PATH.write_text(json.dumps(state, indent=2, sort_keys=True) + '\n')
    ok_count = sum(source_compileable(source_rel, state) for source_rel in sources)
    print(f'compileable sources: {ok_count}/{len(sources)}')
    return 0


def command_worklist(args: argparse.Namespace) -> int:
    """Summarise eligible functions by the least-cost recommended worker."""
    _, symbols, main, _, _ = target_context()
    entries = cached_source_index(symbols, main)
    compileability = load_compileability()
    groups: dict[tuple[str, str, str], list[dict]] = {}
    for entry in entries:
        if not entry['todo'] or not source_compileable(entry['source'], compileability):
            continue
        difficulty = entry['difficulty']
        key = (difficulty['model'], difficulty['thinking'], difficulty['label'])
        groups.setdefault(key, []).append(entry)
    for (model, thinking, label), group in sorted(groups.items(),
                                                   key=lambda item: MODEL_ORDER[item[0][0]]):
        total_bytes = sum(entry['size'] for entry in group)
        print(f'{model:13s} {thinking:7s} {label:8s} '
              f'functions={len(group):4d} code_bytes={total_bytes:7d}')
    print('Assign a bucket with: tools/match.py list --unmatched --compileable '
          '--model MODEL --limit N')
    return 0


def command_batch(args: argparse.Namespace) -> int:
    """Emit source-grouped work packages for the matching workers.

    Grouping by TU keeps compiler context and cached objects hot, while the
    default excludes both recorded matches and previously attempted functions
    so workers do not repeatedly receive stale assignments.
    """
    _, symbols, main, _, _ = target_context()
    entries = cached_source_index(symbols, main)
    compileability = load_compileability()
    manifest = load_manifest()
    leases = load_leases()
    matched = {int(r['address'], 16) for r in manifest.get('functions', {}).values()
               if r.get('status') == 'MATCH'}
    attempted = {int(r['address'], 16) for r in manifest.get('attempts', [])
                 if r.get('address')}
    groups: dict[str, list[dict]] = {}
    for entry in entries:
        if (not entry.get('todo') or not entry.get('source')
                or not source_compileable(entry['source'], compileability)
                or (not args.include_leased and entry['source'] in leases)
                or entry['address'] in matched
                or (not args.include_attempted and entry['address'] in attempted)):
            continue
        difficulty = entry['difficulty']
        if args.model and difficulty['model'] != args.model:
            continue
        if args.difficulty and difficulty['label'] != args.difficulty:
            continue
        groups.setdefault(entry['source'], []).append(entry)
    ranked = sorted(groups.items(), key=lambda item: (
        -len(item[1]), sum(x['size'] for x in item[1]), item[0]))
    for source, group in ranked[:args.sources]:
        group.sort(key=lambda e: (e['difficulty']['score'], e['size'], e['address']))
        print(f"TU {source} functions={len(group)}")
        for entry in group[:args.per_source]:
            d = entry['difficulty']
            print(f"  0x{entry['address']:08x} {entry['size']:4d} {d['label']:8s} "
                  f"{d['model']}/{d['thinking']} {entry['name']}")
    print(f"{sum(len(g) for _, g in ranked[:args.sources])} functions in "
          f"{min(args.sources, len(ranked))} source groups")
    return 0


def main() -> int:
    parser = argparse.ArgumentParser(description=__doc__)
    sub = parser.add_subparsers(dest='command', required=True)
    sub.add_parser('doctor').set_defaults(func=command_doctor)
    index_parser = sub.add_parser('index')
    index_parser.add_argument('--refresh', action='store_true')
    index_parser.set_defaults(func=command_index)
    list_parser = sub.add_parser('list')
    list_parser.add_argument('--unmatched', action='store_true')
    list_parser.add_argument('--max-lines', type=int)
    list_parser.add_argument('--language', choices=['C', 'C++'])
    list_parser.add_argument('--limit', type=int, default=30)
    list_parser.add_argument('--refresh-index', action='store_true')
    list_parser.add_argument('--compileable', action='store_true')
    list_parser.add_argument('--include-unowned', action='store_true')
    list_parser.add_argument('--difficulty', choices=['trivial', 'easy', 'moderate', 'complex', 'expert'])
    list_parser.add_argument('--model', choices=['gpt-5.4-mini', 'gpt-5.6-luna',
                                                  'gpt-5.6-terra', 'gpt-5.6-sol'])
    list_parser.set_defaults(func=command_list)
    show_parser = sub.add_parser('show')
    show_parser.add_argument('function')
    show_parser.set_defaults(func=command_show)
    signature_parser = sub.add_parser('signature')
    signature_parser.add_argument('function')
    signature_parser.set_defaults(func=command_signature)
    classify_parser = sub.add_parser('classify', help='classify a mismatch for worker routing')
    classify_parser.add_argument('function')
    classify_parser.set_defaults(func=command_classify)
    check_parser = sub.add_parser('check')
    check_parser.add_argument('function')
    check_parser.add_argument('--diff', action='store_true')
    check_parser.add_argument('--json', action='store_true')
    check_parser.add_argument('--record', action='store_true')
    check_parser.add_argument('--record-attempt', action='store_true',
                              help='record this attempt, including mismatch diagnostics')
    check_parser.add_argument('--model', help='model that attempted the function')
    check_parser.add_argument('--reason', help='concise explanation of the mismatch')
    check_parser.set_defaults(func=command_check)
    coverage_parser = sub.add_parser('coverage')
    coverage_parser.add_argument('--json', action='store_true')
    coverage_parser.set_defaults(func=command_coverage)
    verify_parser = sub.add_parser('verify-recorded',
                                   help='recompile and verify every recorded MATCH')
    verify_parser.add_argument('--jobs', type=int, default=4)
    verify_parser.set_defaults(func=command_verify_recorded)
    insight_parser = sub.add_parser('insight')
    insight_parser.add_argument('action', choices=['add', 'list'])
    insight_parser.add_argument('text', nargs='?')
    insight_parser.add_argument('--category', default='general')
    insight_parser.set_defaults(func=command_insight)
    preflight_parser = sub.add_parser('preflight')
    preflight_parser.add_argument('--jobs', type=int, default=4)
    preflight_parser.add_argument('--limit', type=int)
    preflight_parser.add_argument('--refresh-index', action='store_true')
    preflight_parser.set_defaults(func=command_preflight)
    sub.add_parser('worklist').set_defaults(func=command_worklist)
    batch_parser = sub.add_parser('batch', help='emit source-grouped worker assignments')
    batch_parser.add_argument('--sources', type=int, default=3)
    batch_parser.add_argument('--per-source', type=int, default=20)
    batch_parser.add_argument('--include-attempted', action='store_true')
    batch_parser.add_argument('--include-leased', action='store_true')
    batch_parser.add_argument('--difficulty', choices=['trivial', 'easy', 'moderate', 'complex', 'expert'])
    batch_parser.add_argument('--model', choices=['gpt-5.4-mini', 'gpt-5.6-luna',
                                                   'gpt-5.6-terra', 'gpt-5.6-sol'])
    batch_parser.set_defaults(func=command_batch)
    lease_parser = sub.add_parser('lease', help='claim translation units to prevent duplicate work')
    lease_parser.add_argument('action', choices=['claim', 'release', 'list'])
    lease_parser.add_argument('source', nargs='?')
    lease_parser.add_argument('--owner', default=os.environ.get('CODEX_MODEL', 'worker'))
    lease_parser.set_defaults(func=command_lease)
    args = parser.parse_args()
    if args.command == 'insight' and args.action == 'add' and not args.text:
        parser.error('insight add requires text')
    return args.func(args)


if __name__ == '__main__':
    raise SystemExit(main())
