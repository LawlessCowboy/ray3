#!/usr/bin/env python3
"""Export and audit recoverable Metrowerks debug information from a linked ELF.

This intentionally does not generate source files.  It preserves the current
parser's output alongside raw ELF cross-checks, so that questionable debug
function candidates cannot silently become source ownership facts.

Usage:
    python3 debug_export.py SLKA_250.78 --out debug-export.json
    python3 debug_export.py SLKA_250.78 --summary-only
"""

import argparse
import json
import struct
from collections import Counter, defaultdict
from dataclasses import asdict
from pathlib import Path

from extract_debug import (
    DebugParser, STT_FUNC, parse_line_blob, parse_symtab, read_elf_sections,
)


def iter_debug_chunks(data):
    """Yield (header_offset, stream_start, end) for valid MW debug chunks."""
    pos = 0
    while pos + 12 <= len(data):
        if (data[pos] and data[pos + 4:pos + 8] == b'\x11\x00\x12\x00'):
            section_end = struct.unpack_from('<I', data, pos + 8)[0]
            relative_end = pos + section_end

            def header_at(offset):
                return (offset + 12 <= len(data) and data[offset]
                        and data[offset + 4:offset + 8] == b'\x11\x00\x12\x00')

            absolute_boundary = (
                pos + 12 <= section_end <= len(data)
                and (section_end == len(data) or header_at(section_end))
            )
            relative_boundary = (
                pos + 12 <= relative_end <= len(data)
                and (relative_end == len(data) or header_at(relative_end))
            )
            end = section_end if absolute_boundary and not relative_boundary else relative_end
            if end > pos + 12 and end <= len(data):
                yield pos, pos + 12, end
                pos = end
                continue
        pos += 1


def type_record_inventory(files):
    """Count named type records currently recovered by ``DebugParser``.

    This is intentionally narrower than a speculative raw-byte scan.  Linked
    ELF offsets have not yet been fully reverse engineered, so treating every
    byte sequence that resembles a record as a type record produces false
    positives.  The export therefore reports only parser-recovered records;
    unreported records remain work for probes rather than a misleading count.
    """
    types = [type_info for file_info in files for type_info in file_info.types]
    kinds = Counter(type_info.kind for type_info in types)
    tags = Counter(type_info.tag for type_info in types)
    return {
        'scope': 'parser_recovered_named_types_only',
        'records': len(types),
        'kinds': {f'0x{kind:08x}': count for kind, count in sorted(kinds.items())},
        'tags': {f'0x{tag:04x}': count for tag, count in sorted(tags.items())},
    }


def audit(elf_path):
    sections = read_elf_sections(Path(elf_path).read_bytes())
    required = ('main', '.debug', '.line', '.symtab', '.strtab')
    missing = [name for name in required if name not in sections]
    if missing:
        raise ValueError(f'missing required ELF sections: {", ".join(missing)}')

    main = sections['main']
    code_start, code_end = main['addr'], main['addr'] + main['size']
    symbols = parse_symtab(sections['.symtab']['data'], sections['.strtab']['data'])
    code_symbols = [symbol for symbol in symbols if symbol.type_ == STT_FUNC
                    and code_start <= symbol.value < code_end]
    symbols_by_addr = {symbol.value: symbol for symbol in code_symbols}
    line_maps = parse_line_blob(sections['.line']['data'])
    line_addrs = set(line_maps)

    files = DebugParser(
        sections['.debug']['data'], function_addresses=set(symbols_by_addr)
    ).parse()
    candidates = [function for file_info in files for function in file_info.functions
                  if code_start <= function.addr < code_end]
    candidates_by_addr = defaultdict(list)
    for function in candidates:
        candidates_by_addr[function.addr].append(function)

    exported_candidates = []
    for file_info in files:
        for function in file_info.functions:
            if not code_start <= function.addr < code_end:
                continue
            symbol = symbols_by_addr.get(function.addr)
            exported_candidates.append({
                **asdict(function),
                'source_path': file_info.path,
                'has_line_map': function.addr in line_maps,
                'symtab_name': symbol.name if symbol else None,
                'symtab_size': symbol.size if symbol else None,
                'name_matches_symtab': bool(symbol and function.name == symbol.name),
                'address_candidate_count': len(candidates_by_addr[function.addr]),
            })

    candidate_addrs = set(candidates_by_addr)
    symbol_addrs = set(symbols_by_addr)
    duplicate_addrs = {address: functions for address, functions in candidates_by_addr.items()
                       if len(functions) > 1}
    matched_name_addrs = {function.addr for function in candidates
                          if function.addr in symbols_by_addr
                          and function.name == symbols_by_addr[function.addr].name}
    line_without_symbol = sorted(line_addrs - symbol_addrs)

    mwcats = sections.get('.mwcats', {}).get('data', b'')
    summary = {
        'code_range': {'start': code_start, 'end_exclusive': code_end, 'size': main['size']},
        'sections': {name: section['size'] for name, section in sections.items()},
        'debug_chunks': sum(1 for _ in iter_debug_chunks(sections['.debug']['data'])),
        'line_chunks': len(line_maps),
        'line_entries': sum(len(entries) for entries in line_maps.values()),
        'symtab_code_functions': len(code_symbols),
        'symtab_code_function_addresses': len(symbol_addrs),
        'symtab_code_functions_zero_size': sum(symbol.size == 0 for symbol in code_symbols),
        'mwcats_records': len(mwcats) // 8,
        'parser_candidates': len(candidates),
        'parser_candidate_addresses': len(candidate_addrs),
        'parser_candidates_with_exact_symtab_name': sum(
            function.name == symbols_by_addr[function.addr].name
            for function in candidates if function.addr in symbols_by_addr),
        'parser_candidate_addresses_with_exact_symtab_name': len(matched_name_addrs),
        'parser_duplicate_addresses': len(duplicate_addrs),
        'parser_duplicate_candidate_excess': len(candidates) - len(candidate_addrs),
        'parser_addresses_without_line_map': len(candidate_addrs - line_addrs),
        'line_addresses_without_parser_candidate': len(line_addrs - candidate_addrs),
        'symtab_addresses_without_parser_candidate': len(symbol_addrs - candidate_addrs),
        'line_addresses_without_symtab_function': len(line_without_symbol),
        'type_record_inventory': type_record_inventory(files),
    }
    return {
        'schema_version': 1,
        'input': str(Path(elf_path)),
        'summary': summary,
        'parser_candidates': exported_candidates,
        'line_without_symbol': [
            {'address': address, 'line_entry_count': len(line_maps[address])}
            for address in line_without_symbol
        ],
        'parser_duplicate_addresses': [
            {'address': address,
             'candidates': [{'name': function.name, 'source_path': function.source_file}
                            for function in functions]}
            for address, functions in sorted(duplicate_addrs.items())
        ],
        'line_without_parser_candidate': sorted(line_addrs - candidate_addrs),
        'symtab_without_parser_candidate': sorted(symbol_addrs - candidate_addrs),
    }


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('elf')
    parser.add_argument('--out', type=Path, help='JSON destination (no source is generated)')
    parser.add_argument('--summary-only', action='store_true')
    args = parser.parse_args()
    if args.out and args.summary_only:
        parser.error('--out and --summary-only are mutually exclusive')
    result = audit(args.elf)
    if args.summary_only:
        print(json.dumps(result['summary'], indent=2, sort_keys=True))
    elif args.out:
        args.out.write_text(json.dumps(result, indent=2, sort_keys=True) + '\n', encoding='utf-8')
        print(f'wrote {args.out}')
    else:
        print(json.dumps(result, indent=2, sort_keys=True))


if __name__ == '__main__':
    main()
