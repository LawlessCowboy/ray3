#!/usr/bin/env python3
"""Audit recovered function declarations against retail call-site ABI evidence.

The MWCC debug records sometimes drop parameters or record ``void`` for
functions that return a value.  A wrong prototype silently changes caller
code (argument registers, ignored/masked return values), so a match can be
blocked in a function that is otherwise correct.  This tool compares every
indexed declaration with two independent kinds of evidence from the retail
ELF:

* callee side: EABI argument registers (a0-a3/t0-t3 for integers and
  pointers, f12-f19 for floats) that the function reads before writing;
* caller side: argument registers that every ``jal`` site sets in the same
  basic block, and whether callers read (and mask) ``v0``/``f0`` after the
  call.

Findings are heuristics, ranked by confidence; confirm one with
``python3 tools/match.py signature FUNCTION`` before editing a declaration.
"""
from __future__ import annotations

import argparse
import json
import re
import struct
import sys
from collections import Counter
from pathlib import Path

sys.path.insert(0, str(Path(__file__).resolve().parent))
import match  # noqa: E402

rabbitizer = match.rabbitizer
GPR_ARGS = list(range(4, 12))     # a0-a3, t0-t3
FPR_ARGS = list(range(12, 20))    # f12-f19
NAMES = ['zero', 'at', 'v0', 'v1', 'a0', 'a1', 'a2', 'a3', 't0', 't1', 't2', 't3',
         't4', 't5', 't6', 't7', 's0', 's1', 's2', 's3', 's4', 's5', 's6', 's7',
         't8', 't9', 'k0', 'k1', 'gp', 'sp', 'fp', 'ra']
BLOCK_SCAN_LIMIT = 24


def decode(word: int):
    return rabbitizer.Instruction(word, category=rabbitizer.InstrCategory.R5900)


def is_transfer(word: int) -> bool:
    return match.is_control_transfer(word)


def is_call(word: int) -> bool:
    op = word >> 26
    return op == 3 or (op == 0 and (word & 0x3F) == 9)


def split_params(declaration: str) -> list[str] | None:
    start = declaration.find('(')
    end = declaration.rfind(')')
    if start < 0 or end < start:
        return None
    inner = declaration[start + 1:end].strip()
    if inner in ('', 'void'):
        return []
    params, depth, current = [], 0, ''
    for char in inner:
        if char in '(<[':
            depth += 1
        elif char in ')>]':
            depth -= 1
        if char == ',' and depth == 0:
            params.append(current.strip())
            current = ''
        else:
            current += char
    params.append(current.strip())
    return params


def is_float_param(param: str) -> bool:
    return '*' not in param and '[' not in param and re.search(r'\b(float|double|MTH_tdxReal)\b', param) is not None


def return_type(declaration: str, name: str) -> str:
    head = declaration[:declaration.find(name + '(')] if name + '(' in declaration else declaration.split('(')[0]
    return head.replace('static', '').replace('inline', '').replace('extern', '').strip()


def callee_reads(code: bytes) -> tuple[set[int], set[int]]:
    """Argument registers read before any write, scanning in address order."""
    written_g, written_f = set(), set()
    read_g, read_f = set(), set()
    for offset in range(0, len(code) - 3, 4):
        instr = decode(struct.unpack_from('<I', code, offset)[0])
        reads, writes, _ = match._register_operands(instr)
        for kind, reg in reads:
            if kind == 'g' and reg in GPR_ARGS and reg not in written_g:
                read_g.add(reg)
            if kind == 'f' and reg in FPR_ARGS and reg not in written_f:
                read_f.add(reg)
        for kind, reg in writes:
            (written_g if kind == 'g' else written_f).add(reg)
    return read_g, read_f


def call_site_evidence(words: tuple, base: int, site: int) -> dict:
    """Argument registers set before a jal and how v0/f0 is used after it."""
    index = (site - base) // 4
    set_g, set_f = set(), set()
    # delay slot executes before the callee
    window = [index + 1]
    cursor = index - 1
    while cursor >= 0 and index - cursor <= BLOCK_SCAN_LIMIT:
        word = words[cursor]
        if is_transfer(word):
            break
        if cursor > 0 and is_call(words[cursor - 1]):
            break   # delay slot of an earlier call belongs to that call
        window.append(cursor)
        cursor -= 1
    for position in window:
        _, writes, _ = match._register_operands(decode(words[position]))
        for kind, reg in writes:
            if kind == 'g' and reg in GPR_ARGS:
                set_g.add(reg)
            if kind == 'f' and reg in FPR_ARGS:
                set_f.add(reg)
    uses_v0 = uses_f0 = masked = False
    cursor = index + 2
    seen_v0 = seen_f0 = False
    while cursor < len(words) and cursor - index <= BLOCK_SCAN_LIMIT and not (seen_v0 and seen_f0):
        word = words[cursor]
        instr = decode(word)
        reads, writes, _ = match._register_operands(instr)
        if not seen_v0 and ('g', 2) in reads:
            uses_v0 = seen_v0 = True
            text_ = instr.disassemble()
            masked = text_.startswith('andi') and (text_.endswith('0xFF') or text_.endswith('0xFFFF'))
        if not seen_f0 and ('f', 0) in reads:
            uses_f0 = seen_f0 = True
        if ('g', 2) in writes:
            seen_v0 = True
        if ('f', 0) in writes:
            seen_f0 = True
        if is_transfer(word):
            # the delay slot still belongs to this block
            if cursor + 1 < len(words):
                reads, _, _ = match._register_operands(decode(words[cursor + 1]))
                if not seen_v0 and ('g', 2) in reads:
                    uses_v0 = True
                if not seen_f0 and ('f', 0) in reads:
                    uses_f0 = True
            break
        cursor += 1
    return {'g': set_g, 'f': set_f, 'v0': uses_v0, 'f0': uses_f0, 'masked': masked}


def highest(regs: set[int], order: list[int]) -> int:
    """Number of leading argument slots implied by the highest register used."""
    used = [order.index(r) for r in regs if r in order]
    return max(used) + 1 if used else 0


def audit(entries: list[dict], main, args) -> list[dict]:
    text = main.data
    base = main.addr
    words = struct.unpack_from(f'<{len(text) // 4}I', text)
    callers: dict[int, list[int]] = {}
    for position, word in enumerate(words):
        if word >> 26 == 3:
            target = ((base + position * 4) & 0xF0000000) | ((word & 0x03FFFFFF) << 2)
            callers.setdefault(target, []).append(base + position * 4)
    findings = []
    for entry in entries:
        if not entry.get('source') or not entry['source'].endswith(('.c', '.cpp', '.cxx')):
            continue
        if args.source and args.source not in entry['source']:
            continue
        if args.function and entry['name'] != args.function:
            continue
        if args.game and 'engine_sources' not in entry['source']:
            continue
        path = match.ROOT / entry['source']
        try:
            source = path.read_text(encoding='utf-8', errors='replace')
        except OSError:
            continue
        name = entry['name']
        definition = re.search(r'^[^;\n/*]*[\s*&]%s\s*\([^;{]*\)\s*\{' % re.escape(name), source, re.M)
        if not definition:
            continue
        declaration = definition.group(0).rstrip('{').strip()
        params = split_params(declaration)
        if params is None:
            continue
        declared_g = sum(1 for p in params if not is_float_param(p))
        # C++ members take an implicit this (a0); destructors also a delete flag (a1)
        member = re.search(r'__(?:Q\d+)?\d+[A-Za-z_]', name)
        if name.startswith('__dt__'):
            declared_g += 2
        elif member or '::' in declaration:
            declared_g += 1
        declared_f = sum(1 for p in params if is_float_param(p))
        rtype = return_type(declaration, name)
        offset = entry['address'] - base
        code = text[offset:offset + entry['size']]
        read_g, read_f = callee_reads(code)
        callee_g, callee_f = highest(read_g, GPR_ARGS), highest(read_f, FPR_ARGS)
        sites = [call_site_evidence(words, base, site) for site in callers.get(entry['address'], [])]
        site_g = min((highest(s['g'], GPR_ARGS) for s in sites), default=0)
        site_f = min((highest(s['f'], FPR_ARGS) for s in sites), default=0)
        uses_v0 = sum(s['v0'] for s in sites)
        uses_f0 = sum(s['f0'] for s in sites)
        masked = sum(s['masked'] for s in sites)
        issues = []
        if '...' in declaration:
            continue   # varargs: callers and callee legitimately disagree
        if callee_g > declared_g:
            # The callee scan is linear, so a rotated loop can read a register
            # "before" the write that dominates it; trust it only when the
            # callers agree, and keep caller-less functions as low confidence.
            if sites and site_g >= callee_g:
                conf = 'high'
            elif not sites:
                conf = 'low'
            elif site_g > declared_g:
                conf = 'medium'
            else:
                conf = None
            if conf:
                issues.append((conf, f'missing int params: callee reads {NAMES[GPR_ARGS[callee_g - 1]]} '
                                     f'({callee_g} int slots), declared {declared_g}; '
                                     f'all {len(sites)} call sites set >= {site_g}'))
        elif sites and site_g > declared_g and site_g == callee_g:
            issues.append(('medium', f'callers set {site_g} int args, declared {declared_g}'))
        if callee_f > declared_f:
            issues.append(('high' if site_f >= callee_f else 'medium',
                           f'missing float params: callee reads f{FPR_ARGS[callee_f - 1]}, declared {declared_f}'))
        if rtype.startswith('void') and '*' not in rtype and sites:
            if uses_v0 * 2 > len(sites) and uses_v0 >= 2:
                issues.append(('high', f'declared void but {uses_v0}/{len(sites)} callers read v0'))
            elif uses_f0 * 2 > len(sites) and uses_f0 >= 2:
                issues.append(('high', f'declared void but {uses_f0}/{len(sites)} callers read f0'))
        narrow = re.search(r'\b(char|short)\b', rtype) and '*' not in rtype
        if narrow and uses_v0 >= 3 and masked == 0 and args.narrow:
            issues.append(('low', f'narrow return {rtype!r}: {uses_v0} callers use v0, none mask it '
                                  '(caller TU may declare a wider return type)'))
        for conf, text_ in issues:
            findings.append({'confidence': conf, 'name': name, 'address': entry['address'],
                             'source': entry['source'], 'declaration': declaration,
                             'issue': text_, 'matched': name in args.matched})
    rank = {'high': 0, 'medium': 1, 'low': 2}
    findings.sort(key=lambda f: (rank[f['confidence']], f['source'], f['address']))
    return findings


def main() -> int:
    parser = argparse.ArgumentParser(description=__doc__, formatter_class=argparse.RawDescriptionHelpFormatter)
    parser.add_argument('--source', help='only declarations in sources containing this text')
    parser.add_argument('--function', help='only this function')
    parser.add_argument('--game', action='store_true', help='game sources only')
    parser.add_argument('--narrow', action='store_true', help='also report unmasked narrow returns (noisy)')
    parser.add_argument('--min', choices=['high', 'medium', 'low'], default='medium')
    parser.add_argument('--json', action='store_true')
    args = parser.parse_args()
    if rabbitizer is None:
        print('rabbitizer is required', file=sys.stderr)
        return 1
    _, symbols, main_section, _, _ = match.target_context()
    entries = match.cached_source_index(symbols, main_section)
    manifest = match.load_manifest()
    functions = manifest.get('functions', {})
    functions = functions if isinstance(functions, list) else list(functions.values())
    args.matched = {f['name'] for f in functions if f.get('status') == 'MATCH'}
    findings = audit(entries, main_section, args)
    keep = {'high': ['high'], 'medium': ['high', 'medium'], 'low': ['high', 'medium', 'low']}[args.min]
    findings = [f for f in findings if f['confidence'] in keep]
    if args.json:
        print(json.dumps(findings, indent=1))
        return 0
    for f in findings:
        status = ' [matched]' if f['matched'] else ''
        print(f"{f['confidence']:6} {f['name']}{status}  ({f['source'].split('/')[-1]})")
        print(f"       {f['issue']}")
        print(f"       decl: {f['declaration'][:150]}")
    print(f'{len(findings)} findings')
    return 0


if __name__ == '__main__':
    raise SystemExit(main())
