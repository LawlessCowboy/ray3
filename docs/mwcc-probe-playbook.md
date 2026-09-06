# MWCC mismatch probe playbook

This playbook turns a stubborn Rayman 3 function mismatch into a small,
reproducible question.  It is for MWCCPS2 3.0 (2001-11-26) only.  The baseline
in `tools/match.py` remains authoritative: a result from another game,
compiler build, target, or option set is a hypothesis, never a match.

## First pass: classify the mismatch

Start from the complete, relocation-aware diff:

```sh
python3 tools/match.py check FUNCTION --diff
```

Read every `!`, not just the first one.  `B` marks a branch or jump, `D` its
delay slot, and `Rtype:symbol` names a candidate relocation.  Use the earliest
meaningful difference to choose one hypothesis below.

| Diff pattern | Likely cause | First natural-C experiment |
| --- | --- | --- |
| Different relocation or global address | Wrong declaration, member offset, linkage, or cast | Check `match.py signature FUNCTION`; then verify the pointed-to type, field order, array element type, and whether the original access was typed or byte-offset based. |
| Same operations but different registers | Different live ranges or alias information | Move declarations to their first use; split/merge temporary expressions; introduce a naturally named typed local pointer; preserve evaluation order. |
| Branch shape or its delay slot differs | Source control-flow/lifetime shape | Try the equivalent `if`/`else`, loop form, early return, and bracing/statement layout indicated by the debug line map. |
| Target has FP or load-use NOPs | Scheduler dependency/latency, or a PS2 macro | First reproduce the data dependency with natural temporaries.  `#pragma schedule off`/`reset` is a diagnostic probe only: keep it only if the *whole* function matches and evidence supports it. |
| Loop is rotated, entry check changes, or code size differs | Optimizer mode or source loop form | Keep the project baseline.  Test `while`, `do`/`while`, and `for` source forms first; if a minimal probe distinguishes an option, record the evidence for a possible source-local profile. |
| Call target or argument registers differ | Prototype/callback signature, incomplete debug parameters, or inline boundary | Inspect the call's target symbol and all argument registers.  Treat a debug signature as incomplete when a callback type or C++ mangling proves greater arity. |
| Object symbol missing or function window cannot resolve | Ownership/symbol index issue, not C codegen | Stop editing the body; report the symbol evidence to the coordinator for index/debug-parser investigation. |

## Controlled probe protocol

Use only one variable per experiment.  A useful probe has a stated question,
a baseline, one deliberate source or option change, and raw matcher output.

1. Save the target function name, address, target size, baseline source, and
   first meaningful difference from `check --diff`.
2. Make one natural source-shape change in the owning translation unit.
   Re-run `python3 tools/match.py check FUNCTION` immediately.
3. If the change affects the same mismatch family, retain it temporarily and
   reduce further; otherwise revert only that experiment.
4. For compiler-option questions, use a tiny throwaway source under ignored
   `build/` rather than changing the project profile.  Vary exactly one option
   or option suffix at a time and preserve the compiler command and output.
5. A function is finished only when the normal baseline reports `MATCH`.
   An alternate flag can justify a proposed source-local profile only after it
   reproduces multiple independent Rayman functions in the same source family.

Do not use inline assembly, intrinsics, raw opcodes, or a broad flag change as
a probe outcome.  They hide the original source shape instead of explaining
it.

## Scheduling-specific probe

For a run of target NOPs, make a tiny matrix of source variants before
concluding that scheduling is involved:

1. direct expression;
2. one typed temporary per dependent operation;
3. explicit load into a typed local followed by the arithmetic;
4. equivalent branch/loop form that preserves the dependency;
5. `#pragma schedule off` and `#pragma schedule reset` around the function as
   an isolated diagnostic.

Compare all variants with the normal function diff.  If scheduling off repairs
one area but damages another, as with `fn_ucFindPlaceInActionTable`, the retail
function was not globally unscheduled; continue searching for the source-level
dependency or a narrower project macro.

## Recording a result

Only record reusable evidence.  First inspect the existing findings:

```sh
python3 tools/match.py insight list
```

Then add a short statement that names the exact compiler, construct, and
observable result:

```sh
python3 tools/match.py insight add \
  "MWCC PS2 3.0: ... construct ... produces ... output ..." \
  --category compiler
```

Do not record function-specific guesses.  Include a failed-but-informative
result when it eliminates a tempting global explanation.

## External references, correctly scoped

- [mwccps2-debugger](https://github.com/Raikaru/mwccps2-debugger) provides the
  useful source/selection → scheduling → register-allocation → object-code
  classification.  Its live profiles do not support this compiler build.
- [Persona 4 Decompilation](https://github.com/Raikaru/Persona4-Decompilation)
  and [recvx-decomp](https://github.com/AshfordFamily/recvx-decomp) demonstrate
  evidence-backed per-source compiler profiles and object-level verification.
- [YGO Tag Force 5's matching guide](https://github.com/angelof-exe/ygo-tf-5-decomp/blob/main/docs/06-splitting-and-matching.md)
  contains MIPS MWCC examples of loop-form/optimization differences and
  volatile-pointer reload shaping.  Its PSP compiler and flags do not transfer
  to Rayman without local reproduction.
