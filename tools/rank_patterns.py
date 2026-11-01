#!/usr/bin/env python3
"""Rank unmatched functions by how much of their code matched functions already show.

Works from retail bytes only, so no compiling. Each instruction becomes a token:
mnemonic plus operand shape, with general registers, immediates and symbols
abstracted away (sp, gp, zero and a zero immediate stay visible, and branches keep
their direction). A function's score is the share of its token windows that occur
in some matched function. The nearest example is the matched function sharing the
most windows, weighted towards rare ones, because a rare shared pattern says more
than a common one.

    python3 tools/rank_patterns.py [--limit N] [--source TEXT] [--min-size BYTES]
    python3 tools/rank_patterns.py --function NAME     # uncovered code and examples
    python3 tools/rank_patterns.py --validate          # does the score predict matches?

The score estimates available precedent, not difficulty as such: register allocation
and source shape can still block a fully covered function.
"""
from __future__ import annotations

import argparse
import math
import random
import re
import struct
import subprocess
import sys
from collections import Counter, defaultdict
from pathlib import Path

import rabbitizer

ROOT = Path(__file__).resolve().parent.parent
TARGET = ROOT / 'SLKA_250.78'
WINDOW = 4
KEEP = {'$sp', '$gp', '$zero', '$ra'}


def load_functions() -> tuple[list[dict], set[str]]:
    """All in-scope functions from match.py, and the names still unmatched."""
    def listing(*extra: str) -> list[str]:
        cmd = [sys.executable, str(ROOT / 'tools' / 'match.py'), 'list', '--limit', '100000', *extra]
        return subprocess.run(cmd, cwd=ROOT, text=True, capture_output=True, check=True).stdout.splitlines()
    functions, seen = [], set()
    for line in listing():
        parts = line.split()
        if len(parts) >= 8 and parts[0].startswith('0x') and parts[-2] not in seen:
            seen.add(parts[-2])
            functions.append({'address': int(parts[0], 16), 'size': int(parts[1]), 'difficulty': parts[3],
                              'name': parts[-2], 'source': parts[-1]})
    unmatched = {line.split()[-2] for line in listing('--unmatched') if line.startswith('0x')}
    return functions, unmatched


class Retail:
    def __init__(self) -> None:
        self.data = TARGET.read_bytes()
        offset = struct.unpack_from('<I', self.data, 32)[0]
        entsize, count = struct.unpack_from('<HH', self.data, 46)
        self.sections = []
        for index in range(count):
            _, kind, flags, address, position, size = struct.unpack_from('<IIIIII', self.data, offset + index * entsize)
            if kind == 1 and flags & 4:
                self.sections.append((address, position, size))

    def words(self, address: int, size: int) -> list[int]:
        for start, position, length in self.sections:
            if start <= address and address + size <= start + length:
                return list(struct.unpack_from(f'<{size // 4}I', self.data, position + address - start))
        return []


def token(word: int) -> str:
    """Mnemonic and operand shape; identical tokens mean interchangeable code shape."""
    if word == 0:
        return 'nop'
    instruction = rabbitizer.Instruction(word, category=rabbitizer.InstrCategory.R5900)
    name = instruction.getOpcodeName().lower()
    if instruction.isBranch():
        return f'{name} {"back" if word & 0x8000 else "fwd"}'
    if instruction.isJumpWithAddress():
        return name
    text = instruction.disassemble().split(None, 1)
    if len(text) < 2:
        return name
    operands = []
    for operand in re.split(r',\s*', text[1].split('#')[0].strip()):
        match = re.match(r'^(-?(?:0x)?[0-9A-Fa-f]+)?\(?(\$\w+)?\)?$', operand)
        if not match:
            operands.append('?')
            continue
        immediate, register = match[1], match[2]
        parts = ''
        if immediate is not None:
            parts += '0' if int(immediate, 16) == 0 else 'i'
        if register:
            base = register if register in KEEP else ('f' if register.startswith('$f') else 'r')
            parts += f'({base})' if immediate is not None else base
        operands.append(parts)
    return f'{name} {",".join(operands)}'


def windows(tokens: list[str]) -> list[tuple[str, ...]]:
    if len(tokens) < WINDOW:
        return [tuple(tokens)] if tokens else []
    return [tuple(tokens[i:i + WINDOW]) for i in range(len(tokens) - WINDOW + 1)]


def build(functions: list[dict]) -> None:
    retail, cache = Retail(), {}
    for function in functions:
        words = retail.words(function['address'], function['size'])
        function['tokens'] = [cache.setdefault(w, token(w)) for w in words]
        function['windows'] = windows(function['tokens'])


def index_of(pool: list[dict]) -> dict[tuple[str, ...], list[int]]:
    index: dict[tuple[str, ...], list[int]] = defaultdict(list)
    for number, function in enumerate(pool):
        for window in set(function['windows']):
            index[window].append(number)
    return index


def score(function: dict, index: dict, pool: list[dict]) -> tuple[float, list[tuple[float, dict]], list[int]]:
    """Coverage, examples ordered by rarity-weighted overlap, uncovered window offsets."""
    if not function['windows']:
        return 0.0, [], []
    weights: Counter = Counter()
    covered, uncovered = 0, []
    for position, window in enumerate(function['windows']):
        owners = [n for n in index.get(window, ()) if pool[n]['name'] != function['name']]
        if not owners:
            uncovered.append(position)
            continue
        covered += 1
        weight = 1.0 / math.log2(len(owners) + 2)
        for owner in owners:
            weights[owner] += weight
    examples = [(value, pool[n]) for n, value in weights.most_common(5)]
    return covered / len(function['windows']), examples, uncovered


def auc(positive: list[float], negative: list[float]) -> float:
    """Chance a random positive outranks a random negative (0.5 means no signal)."""
    ranked = sorted([(v, 1) for v in positive] + [(v, 0) for v in negative])
    total, position, i = 0.0, 1, 0
    while i < len(ranked):
        j = i
        while j < len(ranked) and ranked[j][0] == ranked[i][0]:
            j += 1
        mean = (position + position + j - i - 1) / 2
        total += mean * sum(1 for k in range(i, j) if ranked[k][1])
        position += j - i
        i = j
    return (total - len(positive) * (len(positive) + 1) / 2) / (len(positive) * len(negative))


def validate(matched: list[dict], unmatched: list[dict]) -> None:
    print(f'{len(matched)} matched, {len(unmatched)} unmatched')
    print('Leave-one-out: each matched function is scored with itself hidden, so it gets no credit for itself.')
    index = index_of(matched)
    with_scores = [(f, score(f, index, matched)[0]) for f in matched]
    open_scores = [(f, score(f, index, matched)[0]) for f in unmatched]
    print(f'  AUC, pattern score:  {auc([s for _, s in with_scores], [s for _, s in open_scores]):.3f}')
    print(f'  AUC, smaller size:   {auc([-f["size"] for f, _ in with_scores], [-f["size"] for f, _ in open_scores]):.3f}')
    for low, high in ((0, 100), (100, 400), (400, 1600), (1600, 10**9)):
        a = [s for f, s in with_scores if low <= f['size'] < high]
        b = [s for f, s in open_scores if low <= f['size'] < high]
        if len(a) > 4 and len(b) > 4:
            print(f'  size {low}-{high}: AUC {auc(a, b):.3f} ({len(a)} matched, {len(b)} unmatched)')
    print('Rate matched by score band, all sizes:')
    everything = [(s, 1) for _, s in with_scores] + [(s, 0) for _, s in open_scores]
    for low, high in ((0, .5), (.5, .7), (.7, .8), (.8, .9), (.9, .95), (.95, 1.01)):
        band = [m for s, m in everything if low <= s < high]
        if band:
            print(f'  {low:.2f}-{min(high, 1):.2f}: {sum(band) / len(band):6.1%} of {len(band)}')


def show(function: dict, index: dict, pool: list[dict]) -> None:
    coverage, examples, uncovered = score(function, index, pool)
    print(f"{function['name']}  {function['size']} bytes  coverage {coverage:.1%}  {Path(function['source']).name}")
    print('Closest matched examples (rarity-weighted shared patterns):')
    for value, example in examples:
        print(f"  {value:8.1f}  {example['name']}  ({example['size']} bytes, {Path(example['source']).name})")
    if not uncovered:
        print('Every pattern window has precedent.')
        return
    spans, start, end = [], uncovered[0], uncovered[0]
    for position in uncovered[1:]:
        if position > end + 1:
            spans.append((start, end))
            start = position
        end = position
    spans.append((start, end))
    print(f'Code with no precedent, {len(spans)} spans:')
    for start, end in spans[:25]:
        print(f'  +0x{start * 4:x}: ' + ' ; '.join(function['tokens'][start:end + WINDOW]))
    if len(spans) > 25:
        print(f'  ... and {len(spans) - 25} more')


def main() -> int:
    parser = argparse.ArgumentParser(description=__doc__.splitlines()[0])
    parser.add_argument('--limit', type=int, default=40)
    parser.add_argument('--source', help='only functions whose source path contains this')
    parser.add_argument('--min-size', type=int, default=0)
    parser.add_argument('--function')
    parser.add_argument('--validate', action='store_true')
    parser.add_argument('--seed', type=int, default=0)
    args = parser.parse_args()
    random.seed(args.seed)
    functions, names = load_functions()
    build(functions)
    matched = [f for f in functions if f['name'] not in names]
    unmatched = [f for f in functions if f['name'] in names]
    if args.validate:
        validate(matched, unmatched)
        return 0
    index = index_of(matched)
    if args.function:
        found = [f for f in functions if f['name'] == args.function]
        if not found:
            print(f'{args.function}: not an in-scope function')
            return 1
        show(found[0], index, matched)
        return 0
    rows = []
    for function in unmatched:
        if function['size'] < args.min_size or (args.source and args.source not in function['source']):
            continue
        coverage, examples, uncovered = score(function, index, matched)
        rows.append((coverage, -function['size'], function, examples, len(uncovered)))
    rows.sort(key=lambda r: (-r[0], -r[1]))
    print(f'{"cover":>6} {"bytes":>6} {"gaps":>5}  {"function":<44} nearest example')
    for coverage, _, function, examples, gaps in rows[:args.limit]:
        near = examples[0][1]['name'] if examples else '-'
        print(f'{coverage:6.1%} {function["size"]:6d} {gaps:5d}  {function["name"]:<44} {near}')
    print(f'{len(rows)} functions ranked')
    return 0


if __name__ == '__main__':
    raise SystemExit(main())
