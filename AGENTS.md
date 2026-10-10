# Rayman 3 matching workflow

Read this before making any matching change. The project uses the Korean PS2
ELF with CodeWarrior PS2 through Wibo: game sources build with 3.0.1
(2002-01-23), or 3.0.3 (2002-07-16) for the files in
`config/compiler-3.0.3-sources.txt`, and the PS2GL library with 3.0
(2001-11-26). Game sources also take `-pragma "dividefix on" -inline deferred
-O3,p`. The only accepted baseline profile is encoded in `tools/match.py` and
the Makefile.

## Git branches and pull requests

`main` is protected. When a task explicitly calls for committing and pushing
changes, create or use a task-specific branch based on the latest `origin/main`,
commit the intended changes there, push that branch, and open a pull request
targeting `main`. Do not push directly to `main` or bypass repository rules.
This does not override workflow instructions below that prohibit a worker from
staging or committing matching changes.

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

   This prints an aligned, symbolized diff from asm-differ (TARGET on the
   left, CANDIDATE on the right), followed by the candidate/target line-map
   table. Retail operands are named from the ELF: calls, `%hi`/`%lo` pairs
   (paired along branch edges) and `$gp`-relative globals show symbol names,
   and string literals show their contents (for example `%lo("Texts/%s")`),
   so a wrong format string or global is visible directly. Alignment means one
   extra or missing instruction appears as a single `<`/`>` row instead of
   shifting everything after it. Row markers: `r` register-only difference,
   `i` immediate/relocation difference, `s` stack-offset difference,
   `|` different instruction, `<`/`>` instruction only on one side. A retail
   `lui`/`%lo` pair that the candidate spells as raw numbers means the source
   hard-codes an absolute address instead of naming the global.

   `--diff-words` prints the older positional table: four-byte words and
   Rabbitizer mnemonics after relocations are resolved, `!` on every
   differing word, `B`/`D` for branches and delay slots, `Rtype:symbol` for
   candidate relocations. Use it for exact byte evidence; both flags together
   print both views. The asm-differ view needs a local checkout (see
   `tools/asmdiff.py`); without it `--diff` falls back to the word table.
   A lone relocation/immediate mismatch often indicates a symbol, layout, or
   signature issue; several adjacent non-relocation differences usually
   indicate source shape or compiler scheduling.
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

`check` may also report `EQUIVALENT`: the code is identical except for a
consistent per-value register renaming, verified by dataflow with EABI
registers fixed at calls and returns. It is not a match and does not count in
coverage. Only the verifier assigns it; a coordinator records it with
`python3 tools/match.py check FUNCTION --record-equivalent`, which never
overrides a recorded `MATCH`. Keep working towards `MATCH`, since an
equivalent function stays in the worklist.

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

## Cleanup after a translation unit is complete

Use `python3 tools/match.py tus` to confirm the source is marked `DONE` before
cleaning it up. `DONE` means every function in that translation unit has a
recorded `MATCH`; `EQUIVALENT` functions do not count. Until then, preserve the
extractor's function address/size comments and `+offset -> line` maps because
they help reconstruct and verify functions.

After a translation unit is `DONE`, a cleanup-only change may remove those
extractor-generated address/size and line-map comment blocks from that source
file. Keep `TODO` markers, authored explanations, and comments that describe
code behavior. Re-run `python3 tools/match.py check FUNCTION` for the affected
functions after cleanup; if removing metadata changes a result from `MATCH`,
restore the comments needed to retain the verified match. Keep cleanup separate
from function reconstruction changes so it can be reviewed independently.

## m2c-first workflow for advanced functions

For every large or advanced function (roughly 100+ bytes, many basic blocks,
loops, calls, or substantial stack traffic), workers must generate an m2c
starting-point candidate before attempting handwritten reconstruction. This is
an iteration aid, not a claim about the original source. Keep the seed in
`m2c-seeds/` and use it to establish the target's control-flow skeleton,
stack slots, calls, and likely memory accesses.

Generate the seed with:

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
`src/Rayman3/`, then transfer evidence-supported natural C into the leased
source file in two phases:

1. **Compile first.** Make the seed-derived candidate compile in the owning
   translation unit with the project compiler. Resolve syntax, missing types,
   declarations, and helper/global names using the debug signature and nearby
   source context. Run `python3 tools/match.py check FUNCTION` as soon as it
   compiles; a non-matching but compilable baseline is required before tuning.
   Before transferring code, compare the m2c seed line-by-line with the
   recovered debug C scaffold in the canonical TU. Keep the scaffold's
   recovered signature, aggregate field names/offsets, local declarations,
   source order, and line-boundary comments when m2c guessed them poorly;
   import only m2c control-flow and instruction-shape evidence that agrees
   with that debug evidence.
2. **Refine against the target.** Use `check FUNCTION --diff` after every
   meaningful change. Compare all aligned differences (and `--diff-words` for exact bytes) and the
   target line map, then adjust natural control flow, declaration types and
   lifetime, loop form, field/layout accesses, calls, and source ordering.
   Record only a verified `MATCH`; record a useful failed attempt with its
   concrete diagnosis. Never force progress with assembly, intrinsics, or
   guessed opcodes (see Constraints for the evidence-backed asm exception).

Use `python3 tools/large_match.py start FUNCTION` to create the seed, source
snapshot, and an automatic canonical baseline check, then
`python3 tools/large_match.py check FUNCTION --note "hypothesis"` for every
verifier iteration. The helper saves the complete decoded diff, classifies the
residual, hashes the candidate source, and keeps the hypothesis history under
`build/large-match/`. Add reusable observations with
`python3 tools/large_match.py note FUNCTION "observation"`. This gives future
workers a reproducible baseline and prevents repeated experiments from being
mistaken for independent evidence.

Use the debug signature, line map, recovered layouts, and relocation names to
correct m2c's guessed types, globals, and calls. For genuinely small wrappers
under the threshold, direct reconstruction remains acceptable and usually
faster than a seed.

## Constraints

- Do not use inline assembly, hand-written opcodes, or intrinsics to force a
  match. Investigate compiler options, source structure, and macros first.
  The only exception is where target evidence shows the original itself was
  assembly, and the evidence must be stated in the attempt or insight:
  - Instructions MWCC cannot emit from C under the baseline, such as `abs.s`,
    `sqrt.s`, or the R5900 accumulator ops `mula.s`/`madda.s`/`madd.s`. Use
    the file's existing MTH-style asm macros or a small `inline` C wrapper
    around a statement-level `asm` block (e.g. `MTH_xAbs`), containing only
    the non-C instruction; everything around it stays C.
  - Whole hand-written asm functions, identified by one line-map entry per
    instruction together with register or idiom choices MWCC does not produce
    for the equivalent C elsewhere in the ELF. `PS2GL_ApiTable.c` is the
    reference case: `asm void PS2glX(void) { lw v0, g_pPS2glApiTable;
    lw v1, tagPS2glApiTable.pfn_PS2glX(v0); jr v1; nop }`, with the delay-slot
    `nop` on the `jr` line.

  Retail loop-head alignment nops (a `nop` branch target at 4 mod 8) are
  emitted by the game baseline's `-O3,p` from plain C; never add asm nops for
  them. A remaining nop mismatch means the loop or join shape is wrong.

  Never use asm to repair register allocation or scheduling in
  compiler-generated code. That residual belongs to the permuter, or is
  recorded as `EQUIVALENT`.
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
