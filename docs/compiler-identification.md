# Compiler identification

The linked Korean ELF contains the comment:

```text
MW MIPS C Compiler (2.4.1.01)
```

That string is not sufficient to identify `mwccps2.exe`. Objects produced by
CodeWarrior PS2 3.0 retain the same comment, ELF32 little-endian format, R5900
processor flag, EABI64 ABI flag, and MIPS III ISA flag.

## Confirmed Version 3 discriminator

The recovered `fn_pstAllocMind` source has one allocation call followed by five
zero-initializations and a return. Its target is 52 bytes. CodeWarrior 2.4
Build 0017 generates the correct layout but uses `sq/lq` for the return-address
save and `pextlb` to form zero. Both tested Version 3 compilers generate the
target's `sd/ld` and `daddu`, with every non-relocated byte matching:

| Compiler | Result |
| --- | --- |
| 2.4 Engineering Build 0017, 2000-12-13 | Fails: `sq/lq`, `pextlb` |
| 3.0, 2001-11-26 | Matches at optimization levels 3 and 4 |
| 3.0 Build 38, 2003-03-07 | Matches at optimization levels 3 and 4 |

The Version 3 compilers also compile `return 0;` in
`fn_bLoadPlayerSaveGameAfterLoadLevel` to the target's exact `jr ra` / `daddu
v0, zero, zero` pair. Version 2.4 instead selects `pextlb`.

The project should therefore use CodeWarrior PS2 3.0. The November 2001 build
is the leading candidate because it is the earliest known Version 3 build and
is chronologically closest to the game. More non-leaf functions are needed to
distinguish it from later Version 3 builds.

## Confirmed control-flow match

`fn_vInterruptMenu2D` is a 60-byte function covering ten original source
lines. Its natural reconstruction contains a braced `if`/`else` that increments
or decrements `g_Menu2D_IsInterrupted`, followed by a clamp to zero. The
November 2001 Version 3 compiler reproduces every instruction and emits the six
expected `R_MIPS_GPREL16` relocations. Resolving those relocations with the
ELF's `-0x6cd0` GP offset gives an exact 60-byte match.

The candidate `.line` boundaries are also at offsets `0x00`, `0x08`, `0x10`,
`0x18`, `0x24`, and `0x34`, exactly matching the target. Their source-line
deltas show that the original branches were braced and the final clamp was
written on one line; the checked-in reconstruction preserves that form.
