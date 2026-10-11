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

typedef struct _tdstTimer {
    short m_wTimerType; /* +0x0 */
    short m_wTimerState; /* +0x2 */
    _stTimerCount m_stTimerCount_InitValue; /* +0x8 */
    _stTimerCount m_stTimerCount_LastValue; /* +0x18 */
    _stTimerCount m_stTimerCount_TotalValue; /* +0x28 */
    unsigned int m_ulEventId; /* +0x38 */
    void (*m_p_fn_vEventCallback)(void); /* +0x3c */
} _tdstTimer;

extern unsigned char g_ucTmrModuleId;
extern short wTimerCount;
extern short TimerLibOk;
extern short TMR_g_wErmOK;
extern _tdstTimer a_stTimerTab[16];
extern unsigned int a3_ulEventFrequency[3];
extern unsigned int a3_ulTimerFrequency[3];
extern unsigned char Erm_fn_ucInitErrMsg(void);
void* memset(void*, int, unsigned int);
unsigned int fn_ulTimerTickPerSecond(short wTimerType);
unsigned int fn_ulTimerEventTickPerSecond(short wTimerType);

short TMR_fn_wInitLibrary(void)
{
    if (TimerLibOk)
        return 0;

    memset(a_stTimerTab, 0, sizeof(a_stTimerTab));
    wTimerCount = 0;
    a3_ulTimerFrequency[1] = fn_ulTimerTickPerSecond(1);
    a3_ulEventFrequency[1] = fn_ulTimerEventTickPerSecond(1);

    if (!TMR_g_wErmOK)
    {
        if (g_ucTmrModuleId == 0xff)
            g_ucTmrModuleId = Erm_fn_ucInitErrMsg();
        TMR_g_wErmOK = 1;
    }

    TimerLibOk++;
    return 0;
}

unsigned int fn_ulTimerEventTickPerSecond(short wTimerType)
{
    return 0x11940000;
}

/* fn_vTimerGetCounter is inlined into its callers here yet still emitted as a
 * callable function, which MWCC only does with automatic inlining.  It is not
 * enabled for TMR_fn_wInitLibrary, which calls fn_ulTimerEventTickPerSecond. */
#pragma auto_inline on

void fn_vTimerGetCounter(void* unused, _stTimerCount* p_stValue)
{
    unsigned int count;
    __asm__ volatile("mfc0 %0, $9" : "=r"(count));
    p_stValue->m_ulLowPart = count;
    p_stValue->m_ulHighPart = 0;
}

unsigned int TMR_fn_ulFastGetInternalCounter(void)
{
    _stTimerCount st;
    fn_vTimerGetCounter(0, &st);
    return st.m_ulLowPart;
}

unsigned int fn_ulTimerWaitTicksPerSecond(void)
{
    return 0x11940000;
}

void fn_vTimerWait(unsigned int ulTicksToWait)
{
    _stTimerCount st;
    unsigned int ulTick;

    fn_vTimerGetCounter(0, &st);
    ulTick = st.m_ulLowPart;
    while (st.m_ulLowPart - ulTick < ulTicksToWait)
        fn_vTimerGetCounter(0, &st);
}

