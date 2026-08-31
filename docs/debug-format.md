# Metrowerks CodeWarrior PS2 Debug Info Format
## Version 2.4 (Build 0017, Dec 2000)

Reverse engineered from `mwccps2.exe` output and cross-referenced with
`SLKA_250.78` (Rayman 3: Hoodlum Havoc, Korean PS2 release).

---

## Overview

The compiler emits three custom debug sections per translation unit:

| Section   | ELF Type          | SH_Type value  | Content                          |
|-----------|-------------------|----------------|----------------------------------|
| `.debug`  | `MIPS_DEBUG`      | `0x70000005`   | Custom binary debug info stream  |
| `.line`   | `MIPS_DEBUG`      | `0x70000005`   | Source line → address mapping    |
| `.mwcats` | Custom (Metrowerks)| `0xca2a82c2`  | Function catalogue entry         |

In a relocatable object (`.o`) there is **one `.debug`, one `.line`, and one `.mwcats`
section per function**, plus one global `.debug` section at the start (the file header).

In a fully linked ELF all sections are concatenated into single blobs. Relocated
addresses are filled in by the linker.

---

## `.mwcats` Section

The simplest section. Exactly **8 bytes per function**:

```
Offset  Size  Field         Notes
------  ----  -----------   -----------------------------------------------
0x00    u16   flags         0x0002 = normal function
                            0x0102 = entry point (mwInit / program start)
0x02    u16   code_size     Size of function's machine code in bytes
0x04    u32   func_addr     Absolute address of function start (RELOC)
```

The `flags` field high byte acts as a flag byte:
- `0x00` = normal function
- `0x01` = entry point (only seen on `mwInit`, the MW runtime initialiser)

`code_size` exactly matches the size of the corresponding `.text` section for
that function. The `sh_link` field of `.mwcats` points to the associated `.text`
section index.

---

## `.line` Section

Maps source line numbers to code addresses. **One section per function.**

### Header (8 bytes)

```
Offset  Size  Field         Notes
------  ----  -----------   -----------------------------------------------
0x00    u32   section_size  Total size of this .line section in bytes
0x04    u32   func_addr     Function start address (RELOC → func symbol)
```

### Body: repeated `u16` pairs

All entries after the 8-byte header are `(u16 addr_offset, u16 line_num)` pairs.
`0xFFFF` in either field acts as a sentinel/block separator.

The body consists of **two interleaved sub-structures**:

#### Sub-structure A — Primary line table

Pairs of the form `(addr_offset, line_num)` ending with `(0xFFFF, end_addr)`:

```
(addr, line)   →  code at offset `addr` corresponds to source line `line`
(0xFFFF, end)  →  this range ends at offset `end`
```

These appear in source order. Lines with no emitted code (e.g. opening braces)
have zero-length ranges: `(0, line_N)` immediately followed by `(0xFFFF, 0)`.

#### Sub-structure B — Secondary address info

Pairs interleaved with sub-structure A, of the form:
`(0, count)`, `(0, 0xFFFF)`, `(next_start, 0)` — exact semantics TBD (possibly
instruction counts or range summaries).

The very last `(0xFFFF, X)` sentinel in the section always has `X = func_code_size`,
giving the total function code size.

For source recovery, retain pairs whose second word is a non-zero, non-sentinel
line number.  The other pairs are compiler range metadata.  In a linked ELF,
the 8-byte header's relocated function address associates each consecutive
`.line` chunk with its function.

### Example (`square(int n)`, lines 2–4, code size = 0x20)

```
[00] size_field = 48
[04] func_addr  = 0x00000000 (RELOC)
[08] (addr=0x0002, line=0 )   secondary
[0c]  SENTINEL  end=0x0000
[10] (addr=0x0000, line=3 )   line 3 = 'return n*n' at offset 0
[14] (addr=0x0000, END   )
[18] (addr=0x0008, line=0 )   secondary
[1c] (addr=0x0004, line=0 )   secondary
[20]  SENTINEL  end=0x0014    line range ends at offset 20
[24] (addr=0x0000, line=0 )   secondary
[28] (addr=0x0000, END   )
[2c] (addr=0x0020, line=0 )   func end = 0x20 ✓
```

---

## `.debug` Section

A **custom Metrowerks binary stream** — **not** standard STABS format despite the
ELF section type. The data is a sequence of tagged records with inline null-terminated
strings.

### 12-Byte STABS-compatible Header Record

Each `.debug` section begins with one 12-byte record in the standard STABS layout:

```
Offset  Size  Field         Notes
------  ----  -----------   -----------------------------------------------
0x00    u32   strtab_size   Size of the string data within this section
                            (embedded at end, counted from section end)
0x04    u8    type          Always 0x11
0x05    u8    other         Always 0x00
0x06    u16   desc          Always 0x0012 (18) — format version?
0x08    u32   section_end   Object: chunk-relative size; linked ELF: absolute end offset in the concatenated .debug blob
```

The global/file-header `.debug` section (first one in a .o) contains only this
header record — its `strtab_size == section_end`, so `num_records == 0`.

The two conventions at offset `0x08` are important. In individual object files
the value is the size of that section. In the fully linked Korean ELF, it is a
relocated absolute offset to the end of the chunk within the joined `.debug`
blob. The extractor resolves the ambiguity by checking whether the candidate
end is followed by another valid header.

### Binary Stream

After the 12-byte header, the remaining data is a proprietary opcode stream.
Known opcodes and record formats:

#### Block open/close markers

| Bytes          | Meaning                                             |
|----------------|-----------------------------------------------------|
| `11 01 XX XX XX XX` | Open scope / block start. 4-byte payload = address (RELOC in .o, filled in ELF) |
| `21 01 XX XX XX XX` | Another scope marker. 4-byte payload = function start address (RELOC) |
| `1d 00 00 00`  | Close scope / block end                             |
| `0b 00`        | Close nested scope (appears before `1d`)            |

#### Compiler/file identification records

| Bytes                      | Meaning                                   |
|----------------------------|-------------------------------------------|
| `36 01 XX 00 00 00`        | Language code. `XX=0x02` = C, `XX=0x04` = C++ |
| `58 02 <string\0>`         | Compiler name string (e.g. "MW MIPS C Compiler") |
| `38 00 <string\0>`         | Source file path string (Windows path, e.g. "Z:\home\...") |
| `06 01 XX XX XX XX`        | Pointer to `.line` section for this function (RELOC) |

#### Function/variable name record

```
07 38 00 <name\0>
```
- `0x07` = opcode: "name follows"
- `0x38` = tag/subtype
- `<name\0>` = null-terminated symbol name

The name is immediately preceded in the stream by a `04 XX 00 00 00` offset record.

#### Parameter/variable record (`0x55`)

```
55 00 RR 00 TT ...
```

- `0x55` = opcode: parameter or variable declaration
- `RR` = **register/type encoding** (see table below)
- `TT` = record subtype: `0x13` = return value, `0x23` = parameter.
  Scalar integer return probes also use `0x43` in this position; treat it as
  the same return-value role.

**Register/type encoding (`RR`):**

| RR   | C type   | Notes                                    |
|------|----------|------------------------------------------|
| 0x01 | char     |                                          |
| 0x05 | short    |                                          |
| 0x08 | int      | 32-bit integer                           |
| 0x0b | long     | Same size as int on PS2 (32-bit)         |
| 0x0e | float    | Single precision                         |
| 0x0f | double   | Double precision                         |
| 0x14 | void     | Seen in `0x55` return records            |

These are **not** raw MIPS register numbers — they are Metrowerks type identifiers
encoded in the register field of the debug record. The physical register used by
the calling convention is implied by the type and argument position.

For 64-bit scalar values, MWCC emits base code `0x08` with a non-zero modifier
byte: `0x81` is `long long` and `0x82` is `unsigned long long`.

For pointer types (`int*`), a `0x63` byte precedes the `0x23` parameter byte.
For struct/aggregate types, `0x72` is used in a similar position. `83 00`
records carry an indirect relocated type reference and are used for pointers to
named aggregates, composed array/pointer declarations, function pointers, and
C++ `this`. Parameters include a trailing `0x23`; an indirect return omits a
role byte and is immediately followed by the function-name marker.

#### Address/offset record

```
04 XX XX XX XX
```
A 4-byte little-endian address or offset value.

#### Additional known bytes

| Byte(s)   | Context / Meaning                                   |
|-----------|-----------------------------------------------------|
| `05 00 12 00 <u32>` | Generic variable/type record prefix and link to the next record; the `u32` is not an `04` address record |
| `12 00`   | Part of variable entry header                       |
| `82`      | Appears in some function descriptor blocks          |
| `20`      | Type modifier / separator byte                      |

#### Linked type-record header

```
<abbreviation:u32> <DWARF tag:u16> 12 00 <next-record:u32>
```

The semantic type category is the DWARF tag at offset `+4`, not the first
word. Observed named-type tags are `0x02` (class), `0x04` (enumeration),
`0x13` (structure), and `0x17` (union); `0x01` identifies an array and `0x15`
a subroutine type. A named declaration then begins with `b6 00`, its byte size,
and a `38 00` name. Treating the first word as a fixed type kind caused valid
game structures to be omitted whenever their abbreviation was not present in
the parser's small probe-derived allowlist.

---

## Full `.debug` Section Example

For `int add(int a, int b)` from `test.c` (pre-link, addresses = 0):

```
-- HEADER RECORD (12 bytes) --
[00] strtab_size = 109
[04] type = 0x11
[05] other = 0x00
[06] desc = 18
[08] section_end = 254  (object-local size in this pre-link example)

-- BINARY STREAM (starts at offset 12) --
11 01 00 00 00 00       block_open  addr=0x00000000 (RELOC → .debug_add)
21 01 24 00 00 00       scope_mark  addr=0x00000024 (RELOC → add)
06 01 00 00 00 00       line_ptr    ptr=0x00000000  (RELOC → .line_add)
36 01 02 00 00 00       language    lang=2 (C)
58 02 "MW MIPS C Compiler"\0
38 00 "Z:\...\test.c"\0

[func entry block]
11 01 00 00 00 00       block_open  addr=0 (RELOC → .debug_add)
21 01 24 00 00 00       scope_mark  (RELOC → add)
55 00 08 00 43 20       return_val  type=int (0x08=int), role=0x43=return desc
06 00 02                ...
1d 00 00 00             scope_close
82 13 20 0b 00 01
1d 00 00 00             scope_close
04 30 00 00 00          address 0x30
07 38 00 "add"\0        func_name = "add"

[param a]
23 00 00 00             type_ref
05 00 12 00
XX XX XX XX             (RELOC: offset within .debug)
55 00 08 00             param  reg/type=0x08 (int)
23 00 0b 00 02
1d 00 00 00
04 10 00 00 00          address 0x10 (offset in stack frame?)
07 38 00 "a"\0          param_name = "a"
23 00 ...               type info
...

[param b]
55 00 08 00             param  reg/type=0x08 (int)
...
07 38 00 "b"\0          param_name = "b"
...

[end block]
11 01 00 00 00 00       block_open
21 01 24 00 00 00       (RELOC → add)
04 00 00 00 04
00 00 00 04 00 00 00    terminator triple
```

---

## Notes on Linked ELF

In the final linked ELF (`SLKA_250.78`):
- All RELOC fields are filled with actual virtual addresses
- `.debug` sections from all TUs are concatenated sequentially
- Only **MW runtime library functions** have `.mwcats` entries (37 total)
- Game code functions are in the `main` section without `.mwcats`
- The `.debug` section is 12.5 MB, `.line` is 1.2 MB

### `.line` function records

The linked `.line` blob is a concatenation of function records. Each begins
with `<record-size:u32> <function-address:u32>`, followed by ten-byte entries:

```
<source-line:u32> ff ff <code-offset:u32>
```

The final entry has source line zero and records the function end offset. Code
offsets are relative to the function entry. Earlier extractor versions parsed
each entry as two `u16` values; that happened to recover plausible line numbers
but incorrectly assigned every one to offset zero.

Source file paths in `.debug` use Windows-style backslash paths from the
developer's machine (e.g. `C:\Program Files\Metrowerks\CodeWarrior\...` for
MW library files, `Z:\...` for game source files mounted on a network share).

---

## Unknown / TBD

- Full semantics of the two sub-structures in `.line`
- Exact meaning of `0x43 20`, `0x82`, `0x20` bytes in `.debug` stream
- Struct member encoding in `.debug` (opcode `0x72`): verified as a by-value
  aggregate marker for return values, parameters, and locals, but it does not
  yet yield the struct tag/typedef name.
- Pointer type encoding detail (opcode `0x63`): verified for a pointer
  parameter; the scalar pointee type code follows the marker.
- The `desc=18` field in the header record
- Whether `strtab_size` in the header has additional meaning beyond locating
  embedded strings (it does not point to a separate ELF string table)
