/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\VID\Specif\audiodec.c */
/* Language: C */
/* Compiler: MW MIPS C Compiler */

#include <stddef.h>

static unsigned int g_s_TimerSnd;
static float g_s_fStartedSince;
static int g_s_CurrentFrame;
static int g_s_SoundIsPlaying;

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\VID\Specif\audiodec.c lines 150–158 */
/* addr: 0x00132f60  size: 36 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 150
 *   +0x0008 -> line 153
 *   +0x0010 -> line 157
 *   +0x0018 -> line 158
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
int vagStop(void)
{
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\VID\Specif\audiodec.c lines 146–146 */
/* addr: 0x00132f90  size: 8 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 146
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
int vagSynchroToWait(void)
{
    return 0;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\VID\Specif\audiodec.c lines 80–102 */
/* addr: 0x00132fa0  size: 196 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 80
 *   +0x0008 -> line 83
 *   +0x004c -> line 89
 *   +0x0050 -> line 83
 *   +0x0064 -> line 86
 *   +0x0070 -> line 83
 *   +0x0074 -> line 89
 *   +0x007c -> line 90
 *   +0x0088 -> line 91
 *   +0x0094 -> line 95
 *   +0x009c -> line 96
 *   +0x00a4 -> line 97
 *   +0x00a8 -> line 98
 *   +0x00ac -> line 97
 *   +0x00b4 -> line 102
 *   +0x00b8 -> line 101
 *   +0x00bc -> line 102
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
int vagUpdateSound(void)
{
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\VID\Specif\audiodec.c lines 44–55 */
/* addr: 0x00133070  size: 44 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 44
 *   +0x0004 -> line 46
 *   +0x0008 -> line 44
 *   +0x000c -> line 46
 *   +0x0014 -> line 49
 *   +0x0018 -> line 54
 *   +0x001c -> line 52
 *   +0x0020 -> line 55
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
int vagInit(float fVolume)
{
    SND_VID_fn_vInitVideoSound(2, 0xAC44);
    g_s_SoundIsPlaying = 0;
    g_s_CurrentFrame = 0;
    return 0;
}
