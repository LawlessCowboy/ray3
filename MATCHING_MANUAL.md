# Manual function matching guide

This repository matches reconstructed C/C++ against the Korean PS2 retail ELF
using the project’s fixed CodeWarrior PS2 profile. The verifier is the source
of truth: similar-looking assembly is not enough.

## 1. Check the current state

Run commands from the repository root:

```sh
python3 tools/match.py coverage
python3 tools/match.py worklist
python3 tools/match.py list --unmatched --compileable --model gpt-5.6-luna --limit 30
```

Choose a function that is unmatched and whose source is compileable. Before
editing, inspect its metadata and establish a baseline:

```sh
python3 tools/match.py show FUNCTION
python3 tools/match.py check FUNCTION
```

The `show` output gives the address, target size, source file, language, target
line map, and estimated difficulty. Work only in that canonical source file.

## 2. Claim the source file

Claim the whole translation unit so another worker does not edit it at the same
time:

```sh
python3 tools/match.py lease claim src/path/to/source.c --owner YOUR_NAME
```

Release it when finished:

```sh
python3 tools/match.py lease release src/path/to/source.c --owner YOUR_NAME
```

Do not edit another worker’s leased source. Existing unrelated changes in the
working tree are expected; inspect your own diff carefully.

## 3. Reconstruct small functions

Read the target assembly and the nearby recovered declarations. Prefer natural
source constructs: the original types, field names, declaration order, macros,
and structured `if`/loop control flow. Use `check` after every meaningful edit:

```sh
python3 tools/match.py check FUNCTION
python3 tools/match.py check FUNCTION --diff
python3 tools/match.py check FUNCTION --diff --diff-words
```

The aligned diff shows target on the left and candidate on the right. Pay
attention to:

- `i`: immediate or relocation differences, often a wrong global or field;
- `s`: stack-offset differences;
- `r`: register-only differences;
- `<` and `>`: an extra or missing instruction;
- the line-map table after the diff.

For a suspected declaration or ABI problem:

```sh
python3 tools/match.py signature FUNCTION
python3 tools/match.py classify FUNCTION
```

Try controlled natural-C variants one hypothesis at a time: control-flow form,
typed locals, declaration lifetime/order, field/cast expression, or source
layout. Do not force a compiler-generated function with hand-written opcodes or
inline assembly.

## 4. Handle large or advanced functions

For functions around 100 bytes or larger, or functions with loops, many calls,
or substantial stack traffic, start from the best existing source: the
canonical body and any recorded attempt in `config/matches.json`. Snapshot it
with:

```sh
python3 tools/large_match.py start FUNCTION
```

The m2c seed it writes to `m2c-seeds/FUNCTION.c` is a reading aid for
functions with no usable reconstruction. Never paste it into the source; write
the C by hand into the debug scaffold. Fix residuals in this order: size and
control flow, data access, scheduling, then register numbering (see
`AGENTS.md`, "Large and advanced functions"). Iterate with:

```sh
python3 tools/large_match.py check FUNCTION --note "short hypothesis"
```

For residual register allocation or scheduling after calls, relocations, sizes,
and control flow are correct, consult `docs/permuter.md`. Permuter scores are
advisory; only the Rayman verifier can certify a match.

## 5. Record the result

Only a verifier `MATCH` counts. Record it immediately:

```sh
python3 tools/match.py check FUNCTION --record
```

If the verifier reports `EQUIVALENT`, it is not a match; keep working toward an
exact match. If a useful attempt cannot be finished, preserve the candidate and
record the concrete diagnosis:

```sh
python3 tools/match.py check FUNCTION \
  --record-attempt --model gpt-5.6-luna \
  --reason "first differing offset and the source/compiler hypothesis"
```

Never record a visual or semantic guess as a match. Re-run `git diff --check`
before handing work back, and leave unrelated worker changes untouched.

## 6. Useful project checks

```sh
python3 tools/match.py preflight --jobs 4
python3 tools/match.py insight list
git diff --check
git status --short
```

Do not run extraction, regenerate Splat data, modify `tools/`, `config/`, the
Makefile, or commit/push as part of a normal worker pass unless the coordinator
explicitly asks for it.
