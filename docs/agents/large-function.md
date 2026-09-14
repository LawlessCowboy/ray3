# Large-function escalation agent

Attempt a large function only after its TU compiles and nearby leaf functions validate signatures, globals, layouts, and helper calls. Reconstruct control flow and line-map boundaries first, then tune declarations, loop form, pragmas, and scheduling. Use the permuter only when control flow, relocations, memory offsets, and size already agree. Prefer rolled loops when both rolled and unrolled forms match.
