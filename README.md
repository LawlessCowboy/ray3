# Rayman 3: Hoodlum Havoc — PlayStation 2 Korean decompilation

This is an in-progress static-recompilation/decompilation project for the
Korean PS2 release of *Rayman 3: Hoodlum Havoc* (`SLKA-250.78`). That build is
especially useful because its linked ELF retains Metrowerks CodeWarrior debug
information: original source paths, function names, many signatures, local
names, aggregate layouts, line maps, and function sizes.

The repository contains only recovered source, symbols/configuration, parser
and extraction tools, and documentation. It does **not** contain game files,
the retail ELF, generated assembly, MWCC, Wibo, PS2 SDK files, probe fixtures,
or compiler binaries.

## Verified matching progress

Checked with `python3 tools/match.py coverage` at each matching commit:

| Scope | Functions | Code bytes |
| --- | --- | --- |
| **Game code** | **1,904 / 4,164** (+5 register-equivalent) | **114,796 / 1,511,580** (**7.5944%**) |
| Library code | 764 / 3,668 | 41,396 / 756,524 (5.4719%) |
| **Total** | **2,668 / 7,832** (+5 register-equivalent) | **156,192 / 2,268,104** (**6.8865%**) |

- Data: **0 / 168,050 bytes** (**0.0000%**); data-object matching has not
  started yet.
- Register-equivalent functions differ only by register renaming and are not
  counted as matched.
- *Game code* is the engine and game sources (including the SND_R3 sound glue)
  plus compiler-generated helpers linked among them. *Library code* is PS2GL,
  the harmonx sound middleware, the Metrowerks C/C++ runtime, the SCE SDK and
  other functions built without debug information. The split is computed by
  `code_category()` in `tools/match.py`.

## Status

- The canonical recovered tree is [`src/Rayman3`](src/Rayman3). It follows the
  source paths recorded in the target debug stream.
- Function ownership, names, sizes, line maps, a substantial set of parameter
  names/types, and many aggregate member layouts are recovered from debug
  data.
- Small/simple functions are being replaced with C/C++ implementations first.
- The project can compile individual translation units when a compatible local
  toolchain and headers are supplied. Full byte-matching linking is not yet
  available: the original PS2 SDK/runtime objects and final link environment
  have not been reconstructed.

## Repository layout

| Path | Purpose |
| --- | --- |
| `src/Rayman3/` | Canonical recovered source tree and ongoing decompilation work. |
| `include/` | Project include files. |
| `config/` | Splat map, symbols, and generated undefined-symbol lists. |
| `tools/` | Debug extractor/auditor and Splat-layout helper scripts. |
| `docs/` | Detailed reverse-engineering notes. |
| `Makefile` | Per-translation-unit MWCC build and source extraction entry points. |

## Required local inputs

Use a legally obtained Korean retail ELF and keep it outside Git. The expected
SHA-1 is `c2c3f5c2ccceedc6745b4738102409f27bbb9f10`.

The optional compile workflow additionally needs:

- Metrowerks CodeWarrior PS2 compilers 3.0 (26 November 2001), 3.0.1
  (23 January 2002) and 3.0.3 (16 July 2002), as packaged by
  [decomp.me](https://github.com/decompme/compilers), placed under
  `Compiler/mwcps2-<version>/`;
- [Wibo](https://github.com/decompals/wibo) (or an equivalent way to run that
  Windows compiler); and
- the matching PS2 SDK headers/libraries.

None of those proprietary game/compiler/SDK components are distributed here.

## Working with the recovered source

Compile the current translation units (no final link) with local tool paths:

```sh
make WIBO=/path/to/wibo-x86_64 MWCC=/path/to/mwccps2.exe
```

The evidence-backed baseline compiler profile is:

```text
-g -opt level=3 -farcall off -sdatathreshold 8 \
   -inline on -strings reuse,nopool,readonly -enum int \
   -Cpp_exceptions off -pragma "fast_fptosi on" -pragma "padloop on" \
   -pragma "optimize_for_size off"
```

Game sources (`Disk_01/R3PS2_SCEA_engine_sources`) additionally use
`-pragma "dividefix on" -inline deferred -O3,p`:

- retail game code pads a `div.s` followed by a branch or call with two nops,
  while the PS2GL library code does not;
- retail game objects list functions in reverse source order, which is what
  deferred inlining emits (it also lets a function inline a helper defined
  later in our address-ordered sources);
- `-O3,p` is not equivalent to `-opt level=3` plus the `optimize_for_size`
  pragma: it pads loop-head branch targets to 8 bytes with a nop and changes
  some scheduling, exactly as retail game code does (+48 game matches, none
  lost). The PS2GL library loses 89 matches with it, so it keeps the base
  flags.

`-opt level=3` and `-opt level=4` have been byte-identical for every current
probe. Level 3 is therefore the conservative project spelling, not proof that
the original selected level 3 over level 4. The `-opt all`/`full` speed bundle
does change target-shaped probes and is not the current candidate. `farcall`
off and the 8-byte small-data threshold have direct target evidence; the
remaining switches either match MWCC defaults or still need a real recovered
function to establish an override.

The ELF comment `MW MIPS C Compiler (2.4.1.01)` does not identify the compiler
front end: CodeWarrior PS2 3.0 emits that same comment. The November 2001 3.0
compiler exactly reproduces `fn_pstAllocMind`, including the target's `sd/ld`
RA save and `daddu` zero idiom; the previously tested 2.4 Build 0017 instead
emits `sq/lq` and `pextlb`. A later 3.0 Build 38 produces the same matching code,
so the precise 3.0 build remains to be discriminated with additional functions.

Whole-repo sweeps over every recorded match and attempt then picked the
compiler per owner. Game sources build with **3.0.1 (2002-01-23)**: 27 more
game matches than 3.0 and none lost. The files listed in
`config/compiler-3.0.3-sources.txt` (10 files) build with **3.0.3 (2002-07-16)**,
because each of them matches more functions under it. Retail game code sits
between those two builds, and no file has matches that only one build can
produce on both sides, which fits per-file builds made at different times.
PS2GL keeps **3.0 (2001-11-26)**, since it loses about 90 matches under the
later builds. Every other PS2 CodeWarrior release that could be found (decomp.me's
3.0b22/b38/b50/b52 and 3.0.1bXX builds, and the R3.03–R3.6 installers on the
Internet Archive) was probed and loses matches. `tools/match.py` and the Makefile
select the compiler automatically, and `MWCC=` overrides it for probes.

To inspect regenerated source without changing the working tree, use a
temporary output directory:

```sh
python3 tools/extract_debug.py /path/to/SLKA_250.78 --out /tmp/ray3-extract
```

The Make target intentionally requires an explicit target path. It refreshes
the checked-in templates while preserving every non-TODO function body by its
linked address, so parser and ownership improvements do not erase matching
work:

```sh
make extract TARGET=/path/to/SLKA_250.78
```

## Bulk matching workflow

`tools/match.py` is the standard compile/compare loop for recovered
functions. It compiles the owning translation unit with the Version 3 profile,
caches the resulting object, resolves supported named MIPS relocations against
the retail ELF, and compares the function bytes, size, relocation targets, and
debug line offsets.

```sh
python3 tools/match.py doctor
python3 tools/match.py list --unmatched --language C --max-lines 15
python3 tools/match.py show fn_vInterruptMenu2D
python3 tools/match.py check fn_vInterruptMenu2D
python3 tools/match.py coverage
```

Before dispatching workers, build a cached readiness list and choose from it:

```sh
python3 tools/match.py index --refresh
python3 tools/match.py preflight --jobs 4
python3 tools/match.py list --unmatched --compileable --language C --max-lines 15
```

The indexed worklist estimates difficulty from target code shape and recommends
the least-cost model/reasoning level. It is a triage aid, not matching proof:

```sh
python3 tools/match.py worklist
python3 tools/match.py list --unmatched --compileable --model gpt-5.6-luna
python3 tools/match.py list --unmatched --compileable --difficulty moderate
```

`check --record` adds an exact result to `config/matches.json`. The coverage
report gives both the verified function count and byte coverage: function code
is measured from unique non-zero-size `STT_FUNC` ranges in the ELF; static data
is measured from unique non-zero-size `STT_OBJECT` ranges in its loaded main
section. Data remains at zero until an explicitly verified object is recorded.

For parallel work, read [AGENTS.md](AGENTS.md). Workers are assigned one source
file at a time and use the concise matcher result rather than repeatedly
printing full assembly. Reusable compiler or ABI observations belong in
[matching insights](docs/matching-insights.md), recorded with `match.py
insight add`.

`tools/update_splat_config.py` derives source-file ownership ranges from the
ELF, and `tools/split_splat_by_source.py` runs Splat in memory-bounded batches.
Their output is intentionally ignored: generated split assembly belongs in a
local `asm/` directory, not in the repository.

## Metrowerks debug information

The ELF's `.debug`, `.line`, and `.mwcats` sections are custom Metrowerks data,
not ordinary DWARF or standard STABS, even though the 12-byte `.debug` header
looks STABS-compatible.

| Section | Recoverable information |
| --- | --- |
| `.debug` | Compiler/language, original Windows source path, function entry, signature descriptors, variable names, and linked aggregate/type records. |
| `.line` | Function-relative instruction offsets mapped to original source lines. |
| `.mwcats` | Function start address and exact code size. |
| `.symtab` | Linked symbol names/addresses used to validate function boundaries. |

### `.debug` stream model

Each translation-unit/function chunk begins with:

```text
u32 strtab_size | 11 00 | u16 0012 | u32 section_end
```

In a relocatable object the final word is a chunk-relative byte count. In the
linked Korean ELF it is an **absolute offset in the concatenated debug stream**.
The extractor tests both possible boundaries by looking for the following
header; treating every value as a relative count is a known failure mode that
skips chunks and turns later type records into fake function parameters.

Important decoded records include:

| Record | Meaning |
| --- | --- |
| `11 01 <u32>` / `21 01 <u32>` | Function/block entry and scope/end address. Linked function entries are validated against `.symtab`. |
| `36 01 <u32>` / `58 02 <str>` / `38 00 <str>` | Language, compiler name, and source path/name. |
| `07 38 00 <name>` | Function or variable name. |
| `55 00 <type> 00 <role>` | Scalar return/parameter/local descriptor. Roles include return (`13` or integer-return `43`) and parameter (`23`). |
| `63 00 ...` | Primitive pointer/reference descriptor. |
| `72 00 <type-ref> <role>` | By-value aggregate descriptor. |
| `83 00 <shape> ... <type-ref> <role>` | Indirect type: aggregate pointer, array/pointer composition, function pointer, or C++ `this`. Indirect returns may carry aggregate-return role `a3`; some omit the role and are immediately followed by the function-name marker. |
| `05 00 12 00 <u32>` | Generic record prefix and link pointer; it is not an `04` variable-address record. |

Linked type records begin with `<abbreviation:u32> <DWARF tag:u16> 12 00
<next:u32>`. The semantic tag is the field at `+4` (`01` array, `02` class,
`04` enum, `13` struct, `15` subroutine, `17` union); the first word is not a
stable type kind.

Type references link to file-level records. Named structs/unions/classes,
enums, nested local arrays, pointer-to-array forms, function pointers,
bitfields, inheritance offsets, and many members are recovered. There are
intentional limits: typedef aliases are normally erased by MWCC, array bounds
on parameters decay in the ABI, qualifiers are not reliably represented, and
some `72` aggregate references have no recoverable tag/typedef. Those last
cases are emitted as a visible `/* aggregate */ int` placeholder rather than
inventing a type.

Each `.line` record entry is `<source-line:u32> ff ff <code-offset:u32>`. The
extractor emits the complete address-ordered boundary list before a function,
so reconstructed statements can be placed at the same target offsets and a
candidate object's line table can provide an additional matching checkpoint.

See [the detailed format notes](docs/debug-format.md) for byte layouts and
examples, and [the audit notes](docs/debug-audit.md) for the evidence-preserving
export workflow.

## Contributing

Keep source changes scoped to one recovered translation unit where practical.
Do not commit retail binaries, generated assembly, compiler/SDK files, or
experiments/probe artifacts. When changing the parser, validate with a local
ELF extraction to a temporary directory and retain only reproducible parser
logic and documentation in Git.
