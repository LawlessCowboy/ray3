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

int channel_debug_printf(int a0, int a1, ...)
{
    return 0;
}

void PS2_fn_vLeaveCriticalSection(_stCriticalSection* p_stCS)
{
    if (p_stCS->ReentrancyCount-- == 0)
    {
        p_stCS->OwnerThreadId = -1;
        SignalSema(p_stCS->Sid);
    }
}

/* The target writes COP0 register 24 (mtc0 toto, $24); C cannot express it.
 * Spelled with the R5900 alias mtbpc, MWCC schedules it like an ordinary
 * instruction, so it fills the delay slot of the first path's branch and
 * gets its hazard nop on the last path, as in retail. */
void PS2_fn_vEnterCriticalSection(_stCriticalSection* p_stCS)
{
    int r;
    int MyThreadId;
    int toto;

    toto = 0;
    MyThreadId = GetThreadId();
    r = p_stCS->Sid;
    if (PollSema(r) == r)
    {
        p_stCS->ReentrancyCount = 0;
        p_stCS->OwnerThreadId = MyThreadId;
        asm { mtbpc toto }
    }
    else if (MyThreadId == p_stCS->OwnerThreadId)
    {
        p_stCS->ReentrancyCount++;
    }
    else
    {
        WaitSema(p_stCS->Sid);
        p_stCS->ReentrancyCount = 0;
        p_stCS->OwnerThreadId = MyThreadId;
        asm { mtbpc toto }
    }
}
