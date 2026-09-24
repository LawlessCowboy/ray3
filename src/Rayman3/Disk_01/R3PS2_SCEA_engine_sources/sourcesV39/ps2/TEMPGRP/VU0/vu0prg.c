/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\VU0\vu0prg.c */
/* Language: C */
/* Compiler: MW MIPS C Compiler */

#include <stddef.h>

extern unsigned int VU0_gs_LastMPRGLoaded __attribute__((section(".data")));
static unsigned int gs_uiPRGADRESS[2];
int VU0_g_keepit1;
extern unsigned int CollideVu0Microcode[];
extern unsigned int PlayAnimMPG[];

#pragma optimization_level 1

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\VU0\vu0prg.c lines 115–116 */
/* addr: 0x0013b7f0  size: 96 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 115
 *   +0x0058 -> line 116
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void VU0_fn_vLoadPrgCollision(void)
{
    if (VU0_gs_LastMPRGLoaded != (unsigned int)&CollideVu0Microcode) {
        VU0_gs_LastMPRGLoaded = (unsigned int)&CollideVu0Microcode;
        *(volatile unsigned int*)0x10008020 = 0;
        *(volatile unsigned int*)0x10008030 =
            (unsigned int)&CollideVu0Microcode;
        *(volatile unsigned int*)0x1000E010 = 1;
        *(volatile unsigned int*)0x10008000 = 0x145;
    }
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\VU0\vu0prg.c lines 107–108 */
/* addr: 0x0013b850  size: 96 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 107
 *   +0x0058 -> line 108
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void VU0_fn_vLoadPrgPlayAnim(void)
{
    if (VU0_gs_LastMPRGLoaded != (unsigned int)&PlayAnimMPG) {
        VU0_gs_LastMPRGLoaded = (unsigned int)&PlayAnimMPG;
        *(volatile unsigned int*)0x10008020 = 0;
        *(volatile unsigned int*)0x10008030 = (unsigned int)&PlayAnimMPG;
        *(volatile unsigned int*)0x1000E010 = 1;
        *(volatile unsigned int*)0x10008000 = 0x145;
    }
}

#pragma optimization_level reset

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\VU0\vu0prg.c lines 60–77 */
/* addr: 0x0013b8b0  size: 144 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 60
 *   +0x000c -> line 63
 *   +0x0020 -> line 65
 *   +0x002c -> line 70
 *   +0x0040 -> line 72
 *   +0x0048 -> line 73
 *   +0x0060 -> line 74
 *   +0x0074 -> line 75
 *   +0x007c -> line 77
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void VU0_fn_vWaitEndLoadVU0(void)
{
    int Reg;
    int i;
    /* TODO: decompile from asm/... */
}
