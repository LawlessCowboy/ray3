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
