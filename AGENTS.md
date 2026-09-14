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

   Then run an initial `python3 tools/match.py check FUNCTION` before editing.
   If it already reports `MATCH`, treat it as a pre-existing match: record it
   with `--record`, report that no source change was needed, and select another
   worklist function.

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

   For a useful but unsuccessful attempt, record it with
   `python3 tools/match.py check FUNCTION --record-attempt --model MODEL
   --reason "concise mismatch diagnosis"`. The manifest keeps the attempted
   implementation and verifier diagnostics for later workers; failed attempts
   remain eligible for deliberate retry.

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
first mismatch reveals hidden complexity. Difficulty labels are not eligibility
restrictions: an assigned `trivial` function must still be attempted and must
not be refused merely because it is not an obvious return wrapper. Such
functions may contain branches, field accesses, calls, or aggregate copies.
Workers may also take moderately complex functions when source-file context
makes that efficient, escalating only when evidence warrants it. The
coordinator can inspect buckets with `python3 tools/match.py worklist` and
assign a model directly:

```sh
python3 tools/match.py list --unmatched --compileable --model gpt-5.6-luna
```

Claim a whole source before dispatching it so concurrent workers do not
duplicate a translation unit. `batch` skips leased sources by default:

```sh
python3 tools/match.py lease claim SOURCE --owner WORKER
python3 tools/match.py batch --sources 1 --per-source 20
python3 tools/match.py lease release SOURCE --owner WORKER
```

After a mismatch, use `python3 tools/match.py classify FUNCTION` for an
initial routing label such as `abi-narrow-type`, `relocation/global-layout`,
`tail-call/dispatch`, or `codegen/scheduling` before retrying or escalating.

## m2c seeds for advanced functions

For large or advanced functions (roughly 100+ bytes, many basic blocks,
loops, calls, or substantial stack traffic), workers may generate a
starting-point candidate with:

```sh
python3 tools/m2c_seed.py FUNCTION --output m2c-seeds/FUNCTION.c
```

The wrapper resolves the function's owning assembly file, selects the
`mipsel-mwcc-c` or `mipsel-mwcc-c++` target, and passes the recovered source as
context. Install m2c locally if needed:

```sh
python3 -m pip install 'm2c @ git+https://github.com/matt-kempster/m2c.git'
```

m2c output is scaffolding only. Do not copy it over canonical source or claim
a match from visual similarity. Preserve the generated seed outside
`src/Rayman3/`, then transfer only evidence-supported natural C into the
leased source file and verify every iteration with `tools/match.py check
FUNCTION --diff`. Use the debug signature, line map, recovered layouts, and
relocation names to correct m2c's guessed types, globals, and calls. For
small wrappers, direct reconstruction is usually faster than a seed.

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

## Regressed recorded matches

When a function is recorded as `MATCH` but the verifier now reports a
mismatch, inspect recent history before rewriting the source. Use
`git log --oneline -- SOURCE` and `git show COMMIT -- SOURCE` to identify the
last matching implementation and the change that introduced the regression.
Compare that version with the current source and restore only the relevant
natural-C declaration, ABI parameter, layout, or body change. Re-run
`python3 tools/match.py check FUNCTION --diff` before recording the result;
do not blindly revert another worker's unrelated fixes.

Report only the function name, `MATCH` result, and any reusable insight. If
blocked, report the first differing offset from `tools/match.py check`, the
candidate source construct, and whether the problem appears to be source,
compiler behaviour, or debug extraction.
