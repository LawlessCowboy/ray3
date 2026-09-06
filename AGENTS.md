# Rayman 3 matching workflow

Read this before making any matching change. The project uses the Korean PS2
ELF with CodeWarrior PS2 3.0 (2001-11-26) through Wibo. The only accepted
baseline profile is encoded in `tools/match.py` and the Makefile.

## Worker loop

1. Work only in the assigned canonical source file under `src/Rayman3/`.
2. Inspect concise target metadata with:

   ```sh
   python3 tools/match.py show FUNCTION
   ```

3. Reconstruct natural C/C++ using the debug signature, target line map, and
   generated assembly. Prefer original-looking control flow, macros, types,
   declaration order, and formatting.
4. Run the fast verifier after every meaningful edit:

   ```sh
   python3 tools/match.py check FUNCTION
   ```

5. A function is done only when it reports `MATCH`. Use `--diff` only when the
   one-line result needs investigation. Do not claim a match based solely on
   visually similar assembly.

The matcher compiles the owning translation unit, caches the object by source
and compiler profile, resolves named MIPS relocations against the retail ELF,
and checks function bytes, size, relocation targets, and line offsets.

The coordinator runs `python3 tools/match.py preflight --jobs 4` before bulk
assignment. Select only sources shown by `list --compileable` until extractor
work clears more translation units. Run `index --refresh` after a full source
extraction; ordinary function-body edits keep the cached index valid.

## Constraints

- Do not use inline assembly, hand-written opcodes, or intrinsics to force a
  match. Investigate compiler options, source structure, and macros first.
- Do not change `tools/`, `config/`, `Makefile`, the parser, Splat config, or
  another worker's source file unless the coordinator assigns that work.
- Do not run extraction, Splat regeneration, `git add`, or `git commit`.
- If the recovered declaration itself looks wrong, preserve the evidence and
  report it rather than silently weakening or inventing a type.
- Work source-file by source-file so the cached object and local context are
  reused and concurrent workers do not edit the same translation unit.

## Shared findings

Before reporting a reusable compiler or code-generation observation, check:

```sh
python3 tools/match.py insight list
```

Record a concise, reproduced insight with:

```sh
python3 tools/match.py insight add "Finding and evidence" --category compiler
```

Use categories such as `compiler`, `source-layout`, `abi`, `relocation`, or
`debug-format`. Do not record one-off function details.

## Reporting

Report only the function name, `MATCH` result, and any reusable insight. If
blocked, report the first differing offset from `tools/match.py check`, the
candidate source construct, and whether the problem appears to be source,
compiler behaviour, or debug extraction.
