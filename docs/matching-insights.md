# Matching insights

Use `python3 tools/match.py insight add "..." --category compiler` to record
short, reusable findings for every matching worker. Record an observation only
after reproducing it in the target or a controlled probe; include the relevant
compiler option, construct, and outcome.

- [compiler] CodeWarrior PS2 3.0 (2001-11-26) emits the target's `daddu` zero
  idiom and `sd`/`ld` return-address save for `fn_pstAllocMind`; MWCC 2.4 Build
  0017 instead emits `pextlb` and `sq`/`lq`.
- [compiler] Current probes make `-opt level=3` and `-opt level=4`
  codegen-equivalent. Use level 3 as the baseline unless a verified function
  disproves it.
- [source-layout] MWCC line-table offsets can reveal source formatting. The
  matched `fn_vInterruptMenu2D` required braced `if`/`else` bodies and its
  final clamp on one source line to reproduce the target line-offset pattern.

- [tooling] Cached match checks take about 0.3 seconds when the source body is unchanged; run index --refresh only after extraction changes ownership comments. (2026-09-06)

- [tooling] Difficulty triage uses target code size, branch/call count, memory
  pressure, FP/VU instructions, debug-line complexity, and C++ status. It
  selects the least-cost model bucket; an early mismatch should still trigger
  escalation rather than forcing an unsuitable worker to persist. (2026-09-06)

- [debug-format] MWCC linked .debug function records may omit unused leading parameters: Micros null callbacks record only their used pointer 0x83/0x63 descriptors, while _tdstAllRetObjectSound's function-pointer types preserve the full signatures and target code uses the resulting a2/a3/t0 registers. Treat such extracted parameter lists as incomplete when callback type or C++ mangling proves greater arity. (2026-09-06)
