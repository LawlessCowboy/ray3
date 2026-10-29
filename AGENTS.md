# Rayman 3 matching workflow

Read this before making any matching change. The project uses the Korean PS2
ELF with CodeWarrior PS2 through Wibo: game sources build with 3.0.1
(2002-01-23), or 3.0.3 (2002-07-16) for the files in
`config/compiler-3.0.3-sources.txt`, and the PS2GL library with 3.0
(2001-11-26), or 3.0.1 for the files in `config/library-3.0.1-sources.txt`. Game sources also take `-pragma "dividefix on" -inline deferred
-O3,p`. The only accepted baseline profile is encoded in `tools/match.py` and
the Makefile.

**Ask before editing the tooling.** `tools/match.py` and the `config/`
compiler lists are coordinator-owned, but ownership is not permission: the
coordinator must ask the user before changing them, and say which change and
why. A compiler-list change alters what code the compiler produces for a whole
translation unit, so it is always measured with `verify-recorded` before and
after, and the trade-off is written into the list file.

## Scope: library header functions are out of scope

The retail debug attributes 177 functions to headers (`.h`, `.hpp`, `.hxx`):
the C4_R3 `harmonx` Pustl portable STL (`stree.h`, `streebase.h`, `smap.h`,
`sset.h`, `slist.h`, `sfunctional.h`, `smemory.h`, `sstring.h`,
`CStringIsLess.h`), the `CIdObjPtr`/`CIndexAllocator` services, and the
public MTH/Mat and PS2GL support headers. Those are library support code, not
game code, and they are **not** part of the decompilation effort.

`tools/match.py` enforces this: `list`, `worklist` and `batch` skip
header-owned functions (`list --include-headers` still shows them), `coverage`
counts them out of the totals and reports them as *excluded (library header
functions, out of scope)*, and `translation_units` ignores them so a
translation unit is never held open by a header function. Do not take header
functions from a worklist, and do not edit library headers to chase them.

Library functions with no recovered source (built without debug info: the
Sony SDK, C/C++ runtime, most of the harmonx `usnd` sound middleware and the
memory-card library) are third-party code and are also out of scope.
`coverage` excludes them and reports them as *excluded (third-party library
code without debug info, out of scope)*; `list --include-unowned` still shows
them. Short runs of unowned compiler-generated helpers between game objects
(constructors, `__arraydtor` thunks) stay counted as game code.

Game translation units may still *include* a library header, and a game
function whose retail debug points at a header is verified with
`check FUNCTION --source <the game unit that uses it>`.

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

Shared types live in `include/r3/`, one header per engine module (`MTH.h`,
`MAT.h`, `HIE.h`, `LST2.h`, `GEO.h`, `SECT.h`, ...; `ENG.h` holds the rest),
each including the headers its types need by value.

### Grouping typedefs into shared headers

Grouping a `DONE` unit's extracted typedefs into these headers is part of its
cleanup. Make it a cleanup-only change, kept apart from matching work like
the comment removal above:

- Replace a local type with an `#include "r3/<MODULE>.h"` only when the local
  copy is identical to the header's. A type not yet in a header may move into
  its module's header only when it is identical in every completed unit that
  defines it.
- In headers, write pointer members to other types as `struct X*` tags, so a
  header pulls in other headers only for types it holds by value.
- Keep these local: copies that differ, function prototypes, global
  declarations, `anon_N` types, anonymous `typedef struct { ... } Name;`
  copies (they clash with a header's tagged definition), types that need a
  non-shared type by value, and C++ library types (the usnd STL, `CIdObjPtr`
  and the like). Matches can depend on them.
- Treat a `} __attribute__((aligned(16)));` struct and a
  `typedef enum X { ... } X;` as whole blocks when comparing or moving them;
  a partial move skips the header or redefines the enumerators ("illegal name
  overloading").
- Extracted types and forward typedefs that nothing in the unit uses may be
  deleted outright.
- Compile-check each touched unit, then run `verify-recorded`; the recorded
  match count must not drop. `tools/match.py` hashes `include/r3/*.h` into its
  object cache key, so header edits rebuild every object.

## Large and advanced functions

This covers functions of roughly 100+ bytes with many basic blocks, loops,
calls or heavy stack traffic. The hard part is rarely the overall shape. It is
the last few percent: source details that decide how MWCC schedules, reuses
values and allocates registers. Spend effort there, driven by the diff.

### 1. Start from the best existing source

Before writing anything, check what is already there:

- the canonical TU body (the extractor's debug scaffold, or an earlier
  worker's reconstruction);
- recorded attempts in `config/matches.json` (their `reason` names the
  known residuals);
- `build/large-match/FUNCTION/` history and `insight list`.

If a compilable reconstruction exists, keep it as the baseline and refine it.
Do not regenerate it from scratch.

### 2. Use m2c as a map, not as source

Generate an m2c seed when the function has **no usable reconstruction**: a
stub or TODO body, or a scaffold too thin to follow the control flow. This
matters most for very large functions, where the seed quickly shows branch
structure, stack slots, call arguments and field accesses. When a working
reconstruction already exists, the seed is optional and rarely adds anything.

```sh
python3 tools/m2c_seed.py FUNCTION --output m2c-seeds/FUNCTION.c
# install if needed:
python3 -m pip install 'm2c @ git+https://github.com/matt-kempster/m2c.git'
```

The wrapper picks the owning assembly file and the `mipsel-mwcc-c`/`-c++`
target, and passes the recovered source as context. Keep seeds in
`m2c-seeds/`. Never paste m2c output into `src/Rayman3/`. Its gotos,
temporaries, flattened expressions and guessed types and globals are
decompiler artefacts. Read it beside the asm and write the C by hand into
the debug scaffold, keeping the scaffold's signature, field names, locals
and source order. Get a compilable baseline and run `check` before tuning.

### 3. Refine one hypothesis at a time

Run `check FUNCTION --diff` after every change, and fix residuals in this
order, because each class hides the next:

1. **Size and control flow**: extra or missing instructions, branch shape,
   loop form, else-if versus separate ifs, conditional move (`movz`/`movn`)
   versus branches.
2. **Data access**: relocations, field offsets folded into `%lo` versus
   `lw off(base)`, address values reused across calls, reloads of the same
   global.
3. **Scheduling**: statement order within a block, loop-invariant hoists.
4. **Register numbering only**: try local declaration order and block
   scoping, then hand off to the permuter (`docs/permuter.md`).

Recurring causes seen so far:

- retail recomputing `i*size` after a call, where MWCC keeps it in a saved
  register (a differently typed index expression stops the reuse);
- a ternary becoming `movz` where retail branches (assign through a local
  temp);
- an expression hoisted out of a loop in retail (precompute it into a local);
- a global reloaded where MWCC reuses the value (evidence for `volatile`);
- statement order at a loop head changing the delay-slot fill.

Check `insight list` for the specific idioms.

Run quick variant sweeps from a scratch script that rewrites the canonical
file, runs `check`, and restores it afterwards. Change one construct per
variant, and keep only changes the diff confirms. Prefer the most natural
spelling that matches.

Use `python3 tools/large_match.py start FUNCTION` for the source snapshot,
seed and baseline, then `python3 tools/large_match.py check FUNCTION --note
"hypothesis"` for each meaningful iteration. It saves the decoded diff,
classifies the residual and keeps the history under `build/large-match/`.
Add reusable observations with `large_match.py note`, and add compiler-level
findings with `insight add`. Record only a verified `MATCH`. Record a useful
failed attempt with `--record-attempt` and a concrete residual diagnosis.
Never force progress with assembly, intrinsics or guessed opcodes (see
Constraints for the evidence-backed asm exception). Small wrappers under the
threshold can be reconstructed directly.

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
