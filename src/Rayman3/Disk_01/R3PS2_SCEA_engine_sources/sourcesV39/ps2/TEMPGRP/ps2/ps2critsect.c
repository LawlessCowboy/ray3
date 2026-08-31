/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\ps2\ps2critsect.c */
/* Language: C */
/* Compiler: MW MIPS C Compiler */

#include <stddef.h>

/* Recovered aggregate layouts from MWCC debug type records. */
typedef struct SemaParam SemaParam;

struct SemaParam {
    int currentCount; /* +0x0 */
    int maxCount; /* +0x4 */
    int initCount; /* +0x8 */
    int numWaitThreads; /* +0xc */
    unsigned int attr; /* +0x10 */
    unsigned int option; /* +0x14 */
};

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\ps2\ps2critsect.c lines 1575–1576 */
/* addr: 0x00318d90  size: 40 bytes */
int channel_debug_printf(void)
{
    /* line map: */
    /*   line 1575 @ +0x000 */
    /*   line 1576 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\ps2\ps2critsect.c lines 81–85 */
/* addr: 0x00318dc0  size: 52 bytes */
void PS2_fn_vLeaveCriticalSection(/* function pointer */ int p_stCS)
{
    /* line map: */
    /*   line 81 @ +0x000 */
    /*   line 85 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\ps2\ps2critsect.c lines 40–66 */
/* addr: 0x00318e00  size: 156 bytes */
void PS2_fn_vEnterCriticalSection(/* function pointer */ int p_stCS)
{
    int toto;
    int MyThreadId;
    int r;
    /* line map: */
    /*   line 40 @ +0x000 */
    /*   line 50 @ +0x000 */
    /*   line 50 @ +0x000 */
    /*   line 52 @ +0x000 */
    /*   line 55 @ +0x000 */
    /*   line 63 @ +0x000 */
    /*   line 66 @ +0x000 */
    /* TODO: decompile from asm/... */
}
