/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\ps2\ps2Threads.c */
/* Language: C */
/* Compiler: MW MIPS C Compiler */

#include <stddef.h>

/* Recovered aggregate layouts from MWCC debug type records. */
typedef struct ThreadParam ThreadParam;
typedef struct SemaParam SemaParam;

struct ThreadParam {
    int status; /* +0x0 */
    int entry; /* +0x4 */
    int stack; /* +0x8 */
    int stackSize; /* +0xc */
    int gpReg; /* +0x10 */
    int initPriority; /* +0x14 */
    int currentPriority; /* +0x18 */
    unsigned int attr; /* +0x1c */
    unsigned int option; /* +0x20 */
    int waitType; /* +0x24 */
    int waitId; /* +0x28 */
    int wakeupCount; /* +0x2c */
};

struct SemaParam {
    int currentCount; /* +0x0 */
    int maxCount; /* +0x4 */
    int initCount; /* +0x8 */
    int numWaitThreads; /* +0xc */
    unsigned int attr; /* +0x10 */
    unsigned int option; /* +0x14 */
};

int g_iThreadDebugOutput;
int MTid;
int ETid;
int LTid;
int TOnSid;
int TOffSid;
int DisplaySid;
int LoadSuspendSid;
int ContextSaveSid;
/* aggregate */ int stGL_CS;
unsigned char LTStack[131072];
unsigned char ETStack[131072];
int _gp;
void (*fn_vOneTrameThread)(void);
void (*fn_v_EngMain_MainLoop)(void);
unsigned int _heap_size;
unsigned int _end;
unsigned int _stack_size;
unsigned int _stack;
unsigned int _start;

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\ps2\ps2Threads.c lines 78–380 */
/* addr: 0x00318410  size: 924 bytes */
int PS2_fn_lInit(void)
{
    int i;
    int i;
    int MTid;
    char* mes;
    /* line map: */
    /*   line 78 @ +0x000 */
    /*   line 78 @ +0x000 */
    /*   line 82 @ +0x000 */
    /*   line 93 @ +0x000 */
    /*   line 104 @ +0x000 */
    /*   line 108 @ +0x000 */
    /*   line 113 @ +0x000 */
    /*   line 118 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\ps2\ps2Threads.c lines 536–567 */
/* addr: 0x003187b0  size: 216 bytes */
void PS2_fn_vFlipThreadsPriority(void)
{
    int ft_id;
    int bt_id;
    int ft_priority;
    int bt_priority;
    int lt_priority;
    int et_priority;
    ThreadParam T;
    /* line map: */
    /*   line 536 @ +0x000 */
    /*   line 539 @ +0x000 */
    /*   line 539 @ +0x000 */
    /*   line 544 @ +0x000 */
    /*   line 548 @ +0x000 */
    /*   line 550 @ +0x000 */
    /*   line 552 @ +0x000 */
    /*   line 559 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\ps2\ps2Threads.c lines 518–526 */
/* addr: 0x00318890  size: 76 bytes */
void PS2_fn_vWakeupMainThread(void)
{
    /* line map: */
    /*   line 518 @ +0x000 */
    /*   line 522 @ +0x000 */
    /*   line 526 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\ps2\ps2Threads.c lines 444–500 */
/* addr: 0x003188e0  size: 212 bytes */
void PS2_fn_vThreadSwitch(void)
{
    /* line map: */
    /*   line 444 @ +0x000 */
    /*   line 452 @ +0x000 */
    /*   line 457 @ +0x000 */
    /*   line 465 @ +0x000 */
    /*   line 473 @ +0x000 */
    /*   line 485 @ +0x000 */
    /*   line 500 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\ps2\ps2Threads.c lines 403–420 */
/* addr: 0x003189c0  size: 164 bytes */
void PS2_fn_v_CreateTransitionThread(void)
{
    ThreadParam T;
    /* line map: */
    /*   line 403 @ +0x000 */
    /*   line 403 @ +0x000 */
    /*   line 406 @ +0x000 */
    /*   line 406 @ +0x000 */
    /*   line 407 @ +0x000 */
    /*   line 405 @ +0x000 */
    /*   line 411 @ +0x000 */
    /*   line 414 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\ps2\ps2Threads.c lines 345–354 */
/* addr: 0x00318a70  size: 92 bytes */
void PS2_fn_vCreateSwitchSemaphores(void)
{
    SemaParam S;
    /* line map: */
    /*   line 345 @ +0x000 */
    /*   line 347 @ +0x000 */
    /*   line 345 @ +0x000 */
    /*   line 347 @ +0x000 */
    /*   line 352 @ +0x000 */
    /*   line 354 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* addr: 0x00318ad0  size: 8 bytes */
void PS2_fn_vSignalEndOfDisplay(void)
{
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\ps2\ps2Threads.c lines 293–295 */
/* addr: 0x00318ae0  size: 44 bytes */
void PS2_fn_vCreateDisplaySemaphore(void)
{
    SemaParam S;
    /* line map: */
    /*   line 293 @ +0x000 */
    /*   line 295 @ +0x000 */
    /*   line 295 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* addr: 0x00318b10  size: 8 bytes */
void PS2_fn_vWaitTransitionOff(void)
{
    /* TODO: decompile from asm/... */
}

/* addr: 0x00318b20  size: 8 bytes */
void PS2_fn_vWaitTransitionOn(void)
{
    /* TODO: decompile from asm/... */
}

/* addr: 0x00318b30  size: 8 bytes */
void PS2_fn_vTriggerTransitionOff(void)
{
    /* TODO: decompile from asm/... */
}

/* addr: 0x00318b40  size: 8 bytes */
void PS2_fn_vTriggerTransitionOn(void)
{
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\ps2\ps2Threads.c lines 233–242 */
/* addr: 0x00318b50  size: 92 bytes */
void PS2_fn_vCreateTransitionSemaphores(void)
{
    SemaParam S;
    /* line map: */
    /*   line 233 @ +0x000 */
    /*   line 235 @ +0x000 */
    /*   line 233 @ +0x000 */
    /*   line 235 @ +0x000 */
    /*   line 240 @ +0x000 */
    /*   line 242 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* addr: 0x00318bb0  size: 12 bytes */
void PS2_fn_vLeaveGLCriticalSection(void)
{
    /* TODO: decompile from asm/... */
}

/* addr: 0x00318bc0  size: 12 bytes */
void PS2_fn_vEnterGLCriticalSection(void)
{
    /* TODO: decompile from asm/... */
}

/* addr: 0x00318bd0  size: 12 bytes */
void PS2_fn_vCreateGLCriticalSection(void)
{
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\ps2\ps2Threads.c lines 173–204 */
/* addr: 0x00318be0  size: 200 bytes */
void PS2_fn_v_CreateEngineThread(void)
{
    ThreadParam T;
    /* line map: */
    /*   line 173 @ +0x000 */
    /*   line 173 @ +0x000 */
    /*   line 176 @ +0x000 */
    /*   line 176 @ +0x000 */
    /*   line 177 @ +0x000 */
    /*   line 175 @ +0x000 */
    /*   line 181 @ +0x000 */
    /*   line 184 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\ps2\ps2Threads.c lines 159–163 */
/* addr: 0x00318cb0  size: 44 bytes */
void PS2_fn_uiGetStackBaseAddress(void)
{
    ThreadParam T;
    int Tid;
    /* line map: */
    /*   line 159 @ +0x000 */
    /*   line 163 @ +0x000 */
    /* TODO: decompile from asm/... */
}
