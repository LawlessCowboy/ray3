#!/usr/bin/env python3
"""Compare source variants of one function by which diff rows they change.

A raw row count misleads: a correct fix often adds rows elsewhere until the
next fix lands. This reports, per variant, the rows fixed and introduced
relative to the base, split by class, and never picks a winner or edits the
canonical source. Variants are compiled as scratch copies through
``match.py check --candidate``, so sweeps can run in parallel with other work.

    python3 tools/sweep.py FUNCTION variants.py [--jobs N] [--base FILE] [--show NAME]

variants.py defines VARIANTS, a list of (name, edit); an edit is a list of
(old, new) replacements, each of which must occur, or a callable text -> text.
MWCC in the environment overrides the compiler, as for ``check``.
"""
from __future__ import annotations

import argparse
import os
import re
import runpy
import subprocess
import sys
from concurrent.futures import ThreadPoolExecutor
from dataclasses import dataclass, field
from pathlib import Path

ROOT = Path(__file__).resolve().parent.parent
sys.path.insert(0, str(ROOT / 'tools'))

STRUCTURAL, REGISTER, STACK, IMMEDIATE = 'structural', 'register', 'stack', 'immediate'
CLASS_OF = {'|': STRUCTURAL, '<': STRUCTURAL, '>': STRUCTURAL,
            'r': REGISTER, 's': STACK, 'i': IMMEDIATE}
RIGHT = re.compile(r'(?:\s|(?<=\S))([ri|s])\s+([0-9a-f]+):(?: ~>)?\s+(.*)$')
LEFT = re.compile(r'^([0-9a-f]+):(?: ~>)?\s+(.*)$')
ONLY_RIGHT = re.compile(r'^\s+>\s+[0-9a-f]+:(?: ~>)?\s+(.*)$')
ONLY_LEFT = re.compile(r'^(.*?)\s<\s*$')


@dataclass
class Row:
    """A differing row, keyed by retail offset so it survives candidate shifts."""
    key: str
    kind: str
    target: str = ''
    candidate: str = ''


@dataclass
class Result:
    name: str
    status: str = 'ERROR'
    text: str = ''
    relocs: str = ''
    rows: dict[str, Row] = field(default_factory=dict)
    detail: str = ''

    def counts(self) -> dict[str, int]:
        out = {STRUCTURAL: 0, REGISTER: 0, STACK: 0, IMMEDIATE: 0}
        for row in self.rows.values():
            out[row.kind] += 1
        return out


def squash(text: str) -> str:
    return re.sub(r'\s+', ' ', text).strip()


def parse_rows(diff: str) -> dict[str, Row]:
    rows: dict[str, Row] = {}
    last = 'start'
    extra = 0
    for line in diff.splitlines():
        if line.startswith('line map:'):
            break
        only = ONLY_RIGHT.match(line)
        if only:
            text = squash(only[1])
            extra += 1
            # Anchored to the previous retail row, not the candidate offset.
            key = f'>{last}:{text}'
            rows[key] = Row(key, STRUCTURAL, candidate=text)
            continue
        left = LEFT.match(line)
        if not left:
            continue
        offset = left[1]
        last = offset
        removed = ONLY_LEFT.match(line)
        if removed:
            rows[offset] = Row(offset, STRUCTURAL, target=squash(LEFT.match(removed[1])[2]))
            continue
        right = RIGHT.search(left[2])
        if right:
            target = squash(left[2][:right.start()])
            rows[offset] = Row(offset, CLASS_OF[right[1]], target, squash(right[3]))
    return rows


def run_check(function: str, path: Path | None) -> tuple[str, str]:
    cmd = [sys.executable, str(ROOT / 'tools' / 'match.py'), 'check', function, '--diff']
    if path is not None:
        cmd += ['--candidate', str(path)]
    done = subprocess.run(cmd, cwd=ROOT, text=True, stdout=subprocess.PIPE, stderr=subprocess.STDOUT)
    return done.stdout, cmd[-1]


def evaluate(name: str, function: str, path: Path | None) -> Result:
    output, _ = run_check(function, path)
    head = output.splitlines()[0] if output else 'ERROR no output'
    result = Result(name, head.split()[0])
    text = re.search(r'text=(\S+)', head)
    relocs = re.search(r'relocs=(\S+)', head)
    result.text = text[1] if text else ''
    result.relocs = relocs[1] if relocs else ''
    if result.status in {'MISMATCH', 'EQUIVALENT', 'MATCH'}:
        result.rows = parse_rows(output)
    else:
        result.detail = output[:800]
    return result


def apply_edit(text: str, edit) -> str:
    if callable(edit):
        return edit(text)
    for old, new in edit:
        if old not in text:
            raise ValueError(f'text not found: {old[:70]!r}')
        text = text.replace(old, new)
    return text


def describe(row: Row) -> str:
    return f'{row.key.split(":")[0]:>8} {row.kind:<10} retail: {row.target or "-":<44} ours: {row.candidate or "-"}'


def main() -> int:
    parser = argparse.ArgumentParser(description=__doc__.splitlines()[0])
    parser.add_argument('function')
    parser.add_argument('variants')
    parser.add_argument('--jobs', type=int, default=4)
    parser.add_argument('--base', help='base source (default: the owning source)')
    parser.add_argument('--show', action='append', default=[], help='print the rows a variant changes')
    args = parser.parse_args()

    import match
    _, symbols, main_section, _, _ = match.target_context()
    entry = match.find_entry(args.function, match.cached_source_index(symbols, main_section))
    owner = ROOT / entry['source']
    base_path = Path(args.base).resolve() if args.base else owner
    base_text = base_path.read_text(encoding='utf-8', errors='surrogateescape')
    variants = runpy.run_path(args.variants)['VARIANTS']

    work = ROOT / 'build' / 'sweep' / re.sub(r'\W+', '_', args.function)
    jobs: list[tuple[str, Path]] = []
    errors: list[str] = []
    for index, (name, edit) in enumerate(variants):
        try:
            text = apply_edit(base_text, edit)
        except ValueError as error:
            errors.append(f'{name}: {error}')
            continue
        folder = work / f'v{index}'
        folder.mkdir(parents=True, exist_ok=True)
        path = folder / owner.name
        path.write_text(text, encoding='utf-8', errors='surrogateescape')
        jobs.append((name, path))

    base_copy = work / 'base'
    base_copy.mkdir(parents=True, exist_ok=True)
    (base_copy / owner.name).write_text(base_text, encoding='utf-8', errors='surrogateescape')
    base = evaluate('base', args.function, base_copy / owner.name)
    counts = base.counts()
    print(f'base: {base.status} text={base.text} relocs={base.relocs} '
          f'structural={counts[STRUCTURAL]} register={counts[REGISTER]} '
          f'stack={counts[STACK]} immediate={counts[IMMEDIATE]}')
    if base.status not in {'MISMATCH', 'EQUIVALENT', 'MATCH'}:
        print(base.detail)
        return 1
    for line in errors:
        print('SKIP', line)

    with ThreadPoolExecutor(args.jobs) as pool:
        results = list(pool.map(lambda job: evaluate(job[0], args.function, job[1]), jobs))
    for result in results:
        if result.status not in {'MISMATCH', 'EQUIVALENT', 'MATCH'}:
            print(f'{result.name}: {result.status}\n{result.detail}')
            continue
        fixed = [base.rows[k] for k in base.rows if k not in result.rows]
        new = [result.rows[k] for k in result.rows if k not in base.rows]
        c = result.counts()
        print(f'{result.name}: {result.status} text={result.text} relocs={result.relocs} '
              f'fixed={len(fixed)} new={len(new)} structural={c[STRUCTURAL]} '
              f'register={c[REGISTER]} stack={c[STACK]} immediate={c[IMMEDIATE]}')
        if result.name in args.show:
            for row in fixed:
                print('  fixed', describe(row))
            for row in new:
                print('  new  ', describe(row))
    return 0


if __name__ == '__main__':
    raise SystemExit(main())
