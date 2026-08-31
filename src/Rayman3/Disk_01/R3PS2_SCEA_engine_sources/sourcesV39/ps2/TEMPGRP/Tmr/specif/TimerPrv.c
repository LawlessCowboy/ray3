/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Tmr\specif\TimerPrv.c */
/* Language: C */
/* Compiler: MW MIPS C Compiler */

#include <stddef.h>

/* Recovered aggregate layouts from MWCC debug type records. */
typedef struct _stTimerCount _stTimerCount;

struct _stTimerCount {
    unsigned long m_ulLowPart; /* +0x0 */
    unsigned long m_ulHighPart; /* +0x8 */
};

float g_xVideoFrameDurationInSeconds;

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Tmr\specif\TimerPrv.c lines 19–60 */
/* addr: 0x00323510  size: 156 bytes */
short TMR_fn_wInitLibrary(void)
{
    /* line map: */
    /*   line 19 @ +0x000 */
    /*   line 30 @ +0x000 */
    /*   line 51 @ +0x000 */
    /*   line 54 @ +0x000 */
    /*   line 59 @ +0x000 */
    /*   line 60 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Tmr\specif\TimerPrv.c lines 212–214 */
/* addr: 0x003235b0  size: 36 bytes */
unsigned int TMR_fn_ulFastGetInternalCounter(void)
{
    _stTimerCount st;
    /* line map: */
    /*   line 212 @ +0x000 */
    /*   line 214 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* addr: 0x003235e0  size: 8 bytes */
unsigned int fn_ulTimerWaitTicksPerSecond(void)
{
    return 0x11940000;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Tmr\specif\TimerPrv.c lines 125–129 */
/* addr: 0x003235f0  size: 92 bytes */
void fn_vTimerWait(unsigned int ulTicksToWait)
{
    _stTimerCount st;
    unsigned int ulTick;
    /* line map: */
    /*   line 125 @ +0x000 */
    /*   line 125 @ +0x000 */
    /*   line 125 @ +0x000 */
    /*   line 125 @ +0x000 */
    /*   line 129 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Tmr\specif\TimerPrv.c lines 114–114 */
/* addr: 0x00323650  size: 24 bytes */
void fn_vTimerGetCounter(_stTimerCount* p_stValue)
{
    /* line map: */
    /*   line 114 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* addr: 0x00323670  size: 8 bytes */
unsigned int fn_ulTimerEventTickPerSecond(void)
{
    return 0x11940000;
}
