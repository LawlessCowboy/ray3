/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Tmr\Timer.c */
/* Language: C */
/* Compiler: MW MIPS C Compiler */

#include <stddef.h>

/* Recovered aggregate layouts from MWCC debug type records. */
typedef struct _tdstTimer _tdstTimer;
typedef struct _stTimerCount _stTimerCount;

struct _tdstTimer {
    short m_wTimerType; /* +0x0 */
    short m_wTimerState; /* +0x2 */
    _stTimerCount m_stTimerCount_InitValue; /* +0x8 */
    _stTimerCount m_stTimerCount_LastValue; /* +0x18 */
    _stTimerCount m_stTimerCount_TotalValue; /* +0x28 */
    unsigned int m_ulEventId; /* +0x38 */
    int m_p_fn_vEventCallback; /* +0x3c */
};

struct _stTimerCount {
    unsigned long m_ulLowPart; /* +0x0 */
    unsigned long m_ulHighPart; /* +0x8 */
};

unsigned char g_ucTmrModuleId;
short wTimerCount;
short TimerLibOk;
short TMR_g_wErmOK;
_tdstTimer a_stTimerTab[16];
unsigned int a3_ulEventFrequency[3];
unsigned int a3_ulTimerFrequency[3];

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Tmr\Timer.c lines 84–85 */
/* addr: 0x00322b80  size: 72 bytes */
void HIE_vSetCharactereRLI(unsigned char ucNbRLI, unsigned char ucIndex1, unsigned char ucIndex2, float xPercent)
{
    /* line map: */
    /*   line 84 @ +0x000 */
    /*   line 84 @ +0x000 */
    /*   line 85 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Tmr\Timer.c lines 553–560 */
/* addr: 0x00322bd0  size: 92 bytes */
short TMR_fn_wWait(unsigned int ulTimeToWait)
{
    /* line map: */
    /*   line 553 @ +0x000 */
    /*   line 556 @ +0x000 */
    /*   line 560 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Tmr\Timer.c lines 444–472 */
/* addr: 0x00322c30  size: 380 bytes */
short TMR_fn_wResetTimer(short wTimerHandle)
{
    /* line map: */
    /*   line 444 @ +0x000 */
    /*   line 447 @ +0x000 */
    /*   line 451 @ +0x000 */
    /*   line 454 @ +0x000 */
    /*   line 457 @ +0x000 */
    /*   line 461 @ +0x000 */
    /*   line 465 @ +0x000 */
    /*   line 465 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Tmr\Timer.c lines 373–433 */
/* addr: 0x00322db0  size: 756 bytes */
short TMR_fn_wReadTimer(short wTimerHandle, _stTimerCount* p_stTimerCount)
{
    /* line map: */
    /*   line 373 @ +0x000 */
    /*   line 376 @ +0x000 */
    /*   line 380 @ +0x000 */
    /*   line 383 @ +0x000 */
    /*   line 386 @ +0x000 */
    /*   line 390 @ +0x000 */
    /*   line 402 @ +0x000 */
    /*   line 409 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Tmr\Timer.c lines 335–359 */
/* addr: 0x003230b0  size: 272 bytes */
short TMR_fn_wSetTimerValue(short wTimerHandle, _stTimerCount* p_stValue)
{
    /* line map: */
    /*   line 335 @ +0x000 */
    /*   line 338 @ +0x000 */
    /*   line 342 @ +0x000 */
    /*   line 345 @ +0x000 */
    /*   line 348 @ +0x000 */
    /*   line 356 @ +0x000 */
    /*   line 356 @ +0x000 */
    /*   line 356 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Tmr\Timer.c lines 158–200 */
/* addr: 0x003231c0  size: 400 bytes */
short TMR_fn_wStartTimer(short wTimerHandle)
{
    _stTimerCount stValue;
    /* line map: */
    /*   line 158 @ +0x000 */
    /*   line 161 @ +0x000 */
    /*   line 165 @ +0x000 */
    /*   line 168 @ +0x000 */
    /*   line 171 @ +0x000 */
    /*   line 175 @ +0x000 */
    /*   line 186 @ +0x000 */
    /*   line 189 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Tmr\Timer.c lines 113–147 */
/* addr: 0x00323350  size: 436 bytes */
short TMR_fn_wCreateTimer(short wTimerType)
{
    short i;
    /* line map: */
    /*   line 113 @ +0x000 */
    /*   line 116 @ +0x000 */
    /*   line 120 @ +0x000 */
    /*   line 123 @ +0x000 */
    /*   line 126 @ +0x000 */
    /*   line 130 @ +0x000 */
    /*   line 134 @ +0x000 */
    /*   line 136 @ +0x000 */
    /* TODO: decompile from asm/... */
}
