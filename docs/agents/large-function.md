# Large-function workflow

Use `python3 tools/m2c_seed.py FUNCTION --output m2c-seeds/FUNCTION.c` for
every large function before writing a candidate by hand. Treat the result as
scaffolding: transfer it into the canonical TU only far enough to establish a
natural, compilable baseline. Resolve missing declarations, signatures,
globals, and layouts from the debug metadata and nearby source, then run the
normal verifier before attempting to match.

Always compare the seed with the recovered debug-generated C scaffold before
editing. Prefer the scaffold's recovered ABI signature, aggregate names and
offsets, local declaration order, and line-boundary comments over m2c's
`M2C_UNK`, guessed pointer arithmetic, or absolute addresses. Import m2c's
control-flow and instruction-shape clues only where they agree with that
debug evidence.

Once the seed-derived candidate compiles, iterate with
`python3 tools/match.py check FUNCTION --diff`. Use the complete decoded diff
and line map to refine control flow, declaration lifetime/types, loop shape,
field accesses, calls, and source ordering. Do not claim progress from a
visually similar m2c output, and do not use inline assembly, intrinsics, or
hand-written opcodes. Use the permuter only after control flow, relocations,
memory offsets, and size already agree. Prefer rolled loops when both rolled
and unrolled forms match.

For repeatable bookkeeping, run `python3 tools/large_match.py start FUNCTION`
before editing; it also captures the canonical baseline automatically. Run
`python3 tools/large_match.py check FUNCTION --note "hypothesis"` after each
meaningful change. It stores the seed, source hash, full diff, residual
classification, and experiment history in `build/large-match/` without
modifying canonical source automatically.
