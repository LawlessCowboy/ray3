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

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Tmr\specif\TimerPrv.c lines 17–60 */
/* addr: 0x00323510  size: 156 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 17
 *   +0x0008 -> line 19
 *   +0x001c -> line 21
 *   +0x002c -> line 30
 *   +0x003c -> line 43
 *   +0x0050 -> line 51
 *   +0x005c -> line 53
 *   +0x0078 -> line 54
 *   +0x0080 -> line 57
 *   +0x0084 -> line 59
 *   +0x0088 -> line 57
 *   +0x0090 -> line 60
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
short TMR_fn_wInitLibrary(void)
{
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Tmr\specif\TimerPrv.c lines 210–214 */
/* addr: 0x003235b0  size: 36 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 210
 *   +0x0004 -> line 212
 *   +0x0018 -> line 213
 *   +0x001c -> line 214
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
unsigned int TMR_fn_ulFastGetInternalCounter(void)
{
    _stTimerCount st;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Tmr\specif\TimerPrv.c lines 139–139 */
/* addr: 0x003235e0  size: 8 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 139
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
unsigned int fn_ulTimerWaitTicksPerSecond(void)
{
    return 0x11940000;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Tmr\specif\TimerPrv.c lines 121–130 */
/* addr: 0x003235f0  size: 92 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 121
 *   +0x0004 -> line 125
 *   +0x000c -> line 128
 *   +0x0010 -> line 125
 *   +0x0014 -> line 128
 *   +0x0018 -> line 125
 *   +0x001c -> line 126
 *   +0x0020 -> line 125
 *   +0x0024 -> line 128
 *   +0x002c -> line 129
 *   +0x0054 -> line 130
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void fn_vTimerWait(unsigned int ulTicksToWait)
{
    _stTimerCount st;
    unsigned int ulTick;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Tmr\specif\TimerPrv.c lines 113–114 */
/* addr: 0x00323650  size: 24 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 113
 *   +0x0010 -> line 114
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void fn_vTimerGetCounter(_stTimerCount* p_stValue)
{
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Tmr\specif\TimerPrv.c lines 89–89 */
/* addr: 0x00323670  size: 8 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 89
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
unsigned int fn_ulTimerEventTickPerSecond(void)
{
    return 0x11940000;
}
