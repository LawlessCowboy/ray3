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

   Fast-worker assignments get up to 20 distinct, controlled natural-C
   variants before escalation. Group variants by a concrete hypothesis
   (control flow, typed locals/aliases, declaration lifetime, field/cast
   access, or source layout) and inspect `--diff` after each. Escalate earlier
   only for confirmed debug-parser, type/layout, or object-symbol evidence.

5. A function is done only when it reports `MATCH`. For a mismatch, use:

   ```sh
   python3 tools/match.py check FUNCTION --diff
   ```

   This prints the entire function as side-by-side four-byte PS2 instruction
   words **and Rabbitizer-decoded mnemonics** after named relocations have
   been resolved. Every differing word is marked `!`; `B` identifies a branch,
   `D` its delay slot, and `Rtype:symbol` names a candidate relocation. Local
   branch destinations are labelled `L_....`, followed by a candidate/target
   line-map table. Inspect every `!`, then compare those offsets with the
   matching target `asm/.../*.s` file. A lone relocation/immediate mismatch
   often indicates a symbol, layout, or signature issue; several adjacent
   non-relocation words usually indicate source shape or compiler scheduling.
   For a suspected signature error, run `python3 tools/match.py signature
   FUNCTION` to see source, raw-debug, decoded type, and target ABI evidence.
   Do not claim a match based solely on visually similar assembly.

   After a verified `MATCH`, run `python3 tools/match.py check FUNCTION --record`
   so the coordinator's worklist excludes the completed function. A reported
   match that is not recorded remains eligible for redispatch.

The matcher compiles the owning translation unit, caches the object by source
and compiler profile, resolves named MIPS relocations against the retail ELF,
and checks function bytes, size, relocation targets, and line offsets.

For cross-project Metrowerks context, read `docs/mwcc-reference.md`; it is
methodology only. Never copy another project's compiler version or flags into
this project's baseline without a local reproduction.

For a persistent mismatch, use `docs/mwcc-probe-playbook.md` to classify it
and run one controlled natural-C experiment at a time.

For a candidate whose control flow, calls, relocations, and data accesses are
already right but whose residual is register allocation or scheduling, hand it
to `docs/permuter.md`.  Upstream decomp-permuter scores are advisory; only
`python3 tools/permute.py verify FUNCTION CANDIDATE` can certify a Rayman match.

The coordinator runs `python3 tools/match.py preflight --jobs 4` before bulk
assignment. Select only sources shown by `list --compileable` until extractor
work clears more translation units. Run `index --refresh` after a full source
extraction; ordinary function-body edits keep the cached index valid.

Each indexed function has an estimated difficulty and recommended model based
on its target instruction count, branches, calls, memory pressure, FP/VU use,
debug-line complexity, and language. This is triage only: escalate when the
first mismatch reveals hidden complexity. The coordinator can inspect buckets
with `python3 tools/match.py worklist` and assign a model directly:

```sh
python3 tools/match.py list --unmatched --compileable --model gpt-5.6-luna
```

## Constraints

- Do not use inline assembly, hand-written opcodes, or intrinsics to force a
  match. Investigate compiler options, source structure, and macros first.
- Prefer natural structured control flow over explicit `goto` statements when
  reconstructing source; explicit gotos were uncommon in ordinary gameplay
  code. Use one only when the target control-flow/line-map evidence cannot be
  reproduced by an equivalent `if`/`else`, loop, or early-return form.
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
