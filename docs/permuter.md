# Decomp-permuter handoff

Use the permuter only when the candidate already has the right control flow,
calls, relocations, and data accesses, and the remaining differences are likely
register allocation, temporary lifetime, or instruction scheduling.  It is not
a substitute for recovering incorrect types, globals, signatures, or logic.

Rayman 3 compares a relocatable MWCC object against a linked retail ELF after
resolving MIPS relocations.  Upstream decomp-permuter scores raw object
disassembly, so its score is advisory here.  `tools/permute.py verify` is the
only acceptance gate.

## Setup

The upstream checkout is local and ignored:

```sh
git clone https://github.com/simonlindholm/decomp-permuter.git tools/decomp-permuter
python3 -m pip install --target tools/decomp-permuter/.deps pycparser toml Levenshtein
```

Then check availability:

```sh
python3 tools/permute.py doctor
```

## Worker handoff

```sh
python3 tools/permute.py prepare FUNCTION
python3 tools/permute.py verify FUNCTION build/permuter/FUNCTION/candidate.c
```

`prepare` creates an ignored full translation-unit candidate plus the isolated
function definition and metadata.  An agent may use the upstream permuter to
generate natural-C candidates, but must put the selected full translation unit
in `candidate.c` (or pass a complete definition with `--body-only`) and run the
Rayman verifier.  Never copy a candidate into canonical source automatically:
the coordinator first inspects it and records it only after `MATCH`.

For a bounded random search, the adapter gives upstream a synthetic object made
from **relocation-resolved** candidate and retail words, then re-checks every
score-zero winner through the full matcher:

```sh
python3 tools/permute.py run FUNCTION --jobs 4
```

For a C++ source (`.cpp`/`.cxx`), `candidate.c` is a pycparser-friendly copy:
`extern "C"`, MWCC `asm` blocks and GCC attributes are removed and C++
struct/union tags get typedefs. MWCC chooses C or C++ from the file suffix, so
`compile`, `verify` and `run` splice the candidate's definition of the target
function back into the canonical source and compile that under its own suffix.
Only the target function's definition in `candidate.c` matters for C++ jobs.
C sources that contain MWCC `asm { ... }` helpers (such as an inline `sqrt.s`
wrapper) are handled the same way: the helpers are stripped from `candidate.c`
and the target definition is spliced back into the canonical source. A target
function whose own body contains an `asm` block cannot be permuted, and
`prepare` refuses it.

Use bounded manual `PERM_GENERAL` / `PERM_VAR` experiments for a known set of
source-shape choices.  Random mode is useful only near the end; it can produce
unnatural code and it cannot diagnose a wrong debug type or global layout.

## Faster iterations: the compile bridge

Each permuter iteration runs the job's `compile.sh`. Starting a fresh
`permute.py compile` re-imports the matcher and re-parses the retail ELF and
source index every time, which is about 80% of a ~0.5 s iteration (the compile
itself is ~0.1 s). Leave a bridge server running instead:

```sh
python3 tools/permute_bridge.py serve        # socket: build/permuter/bridge.sock
tools/run-permuter.sh build/permuter/FUNCTION --stop-on-zero -j4
```

Jobs written by `prepare` call the bridge client, which uses the server when
one is listening and otherwise falls back to `permute.py compile`, so a server
is optional. Objects are byte-identical either way, and the verifier gate is
unchanged. Measured about 4.8-5x more iterations per second at `-j3` on small
translation units; very large units are limited by the permuter's own
parse/print step. Set `PERMUTE_BRIDGE_SOCKET` (client and server) to run one
server per concurrent permuter run.

Screen cheaply: both permuter matches found so far (PS2glComputeBSfromBB,
fn_vTakeControlOfChannel) scored zero within about 50 iterations, while runs
that fail go thousands of iterations without one. A short screen (60-90 s) per
function finds most hits.
