/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\ps2\ps2critsect.c */
/* Language: C */
/* Compiler: MW MIPS C Compiler */

#include <stddef.h>

/* Recovered aggregate layouts from MWCC debug type records. */
typedef struct _stCriticalSection _stCriticalSection;
typedef struct SemaParam SemaParam;

struct _stCriticalSection {
    int Sid; /* +0x0 */
    int OwnerThreadId; /* +0x4 */
    int ReentrancyCount; /* +0x8 */
};

struct SemaParam {
    int currentCount; /* +0x0 */
    int maxCount; /* +0x4 */
    int initCount; /* +0x8 */
    int numWaitThreads; /* +0xc */
    unsigned int attr; /* +0x10 */
    unsigned int option; /* +0x14 */
};

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\ps2\ps2critsect.c lines 1574–1576 */
/* addr: 0x00318d90  size: 40 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1574
 *   +0x0004 -> line 1575
 *   +0x0008 -> line 1574
 *   +0x0020 -> line 1576
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
int channel_debug_printf(void)
{
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\ps2\ps2critsect.c lines 72–89 */
/* addr: 0x00318dc0  size: 52 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 72
 *   +0x0008 -> line 81
 *   +0x0018 -> line 83
 *   +0x0020 -> line 85
 *   +0x0028 -> line 89
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void PS2_fn_vLeaveCriticalSection(_stCriticalSection* p_stCS)
{
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\ps2\ps2critsect.c lines 36–68 */
/* addr: 0x00318e00  size: 156 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 36
 *   +0x0018 -> line 40
 *   +0x001c -> line 48
 *   +0x0024 -> line 50
 *   +0x0028 -> line 48
 *   +0x002c -> line 50
 *   +0x003c -> line 51
 *   +0x0040 -> line 52
 *   +0x0044 -> line 54
 *   +0x0058 -> line 55
 *   +0x0068 -> line 60
 *   +0x0070 -> line 63
 *   +0x0074 -> line 65
 *   +0x0078 -> line 66
 *   +0x0080 -> line 68
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void PS2_fn_vEnterCriticalSection(_stCriticalSection* p_stCS)
{
    int toto;
    int MyThreadId;
    int r;
    /* TODO: decompile from asm/... */
}
