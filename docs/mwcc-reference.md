# Metrowerks PS2 reference notes

This is a comparison reference, not a replacement for the Rayman 3 baseline.
Every Rayman 3 match must continue to use MWCCPS2 3.0 (2001-11-26) and the
flags in `tools/match.py`.

## What other PS2 projects demonstrate

- [Persona 4 Decompilation](https://github.com/Raikaru/Persona4-Decompilation)
  tracks compiler version and flags per source group: game code, RenderWare,
  speed-tuned units, and GCC-built units use distinct profiles.  Treat a
  persistent file-family mismatch as evidence for a per-unit profile before
  changing global flags.
- [recvx-decomp](https://github.com/AshfordFamily/recvx-decomp) keeps a
  machine-readable compile configuration with source overrides and uses
  objdiff.  Its configuration is a useful model for recording source-local
  compiler, SDK, and small-data differences.
- [mh1j](https://github.com/2Tie/mh1j) documents the practical distinction
  between MWCCPS2 and EEGCC objects: library/compiler boundaries can create
  real branch-style differences even in an otherwise healthy whole-ELF build.
- [mwccps2-debugger](https://github.com/Raikaru/mwccps2-debugger) is a useful
  methodology reference for separating frontend/selection, scheduling, and
  register-allocation causes.  Its live internal debugger profiles do **not**
  cover Rayman 3's 2001 compiler build, so do not treat its internal layouts or
  flags as directly applicable.

## Worker rules for compiler observations

1. Do not copy another project's flags or source idioms into Rayman 3 merely
   because they are CodeWarrior projects.
2. Record a reusable observation only after reproducing it with this exact
   compiler via `tools/match.py insight add`.
3. Use `check --diff` first: branch/delay-slot (`B`/`D`) differences are often
   source lifetime/control-flow issues; named relocation differences are often
   symbol/layout issues; a run of FP nops can be scheduling or a PS2-specific
   source macro.
4. For a suspicious recovered declaration, run `match.py signature FUNCTION`
   before changing the function body.  It displays source, raw debug, decoded
   indirect type evidence, and the opening target ABI instructions.
