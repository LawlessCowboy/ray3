/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\tempgrp\SND_R3\src\psx2\ee\sndeethrd.cpp */
/* Language: C++ */
/* Compiler: MW MIPS C Compiler */

#include <stddef.h>

/* Recovered aggregate layouts from MWCC debug type records. */
typedef struct _SHiResTime _SHiResTime;
typedef struct ThreadParam ThreadParam;
typedef struct SemaParam SemaParam;

struct _SHiResTime {
    unsigned int m_uiHighWord; /* +0x0 */
    unsigned int m_uiLowWord; /* +0x4 */
};

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

unsigned long usnd_guiTickT0;
unsigned int g_uiCritSect;
unsigned int g_uiTimerSem;
int g_sTimers;
unsigned int gs_nbSem;
unsigned int gs_uiCSThread[256];
unsigned int gs_uiCSCount[256];
unsigned int gs_uiCritSect;
int (*usnd_uiTimerHandler)(int);
int _gp;
void (*usnd_vTimerLoop)(void*);

/* addr: 0x0018a1a0  size: 8 bytes */
void usnd_vTimerLoop__FPv(char* filename, char* mode)
{
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\tempgrp\SND_R3\src\psx2\ee\sndeethrd.cpp lines 692–697 */
/* addr: 0x0018a1b0  size: 100 bytes */
void usnd_vLeaveCritSect(unsigned int uiCS)
{
    /* line map: */
    /*   line 692 @ +0x000 */
    /*   line 692 @ +0x000 */
    /*   line 694 @ +0x000 */
    /*   line 697 @ +0x000 */
    /*   line 697 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\tempgrp\SND_R3\src\psx2\ee\sndeethrd.cpp lines 671–686 */
/* addr: 0x0018a220  size: 164 bytes */
unsigned int usnd_uiTryToEnterCritSect(unsigned int uiCS)
{
    unsigned int uiThreadId;
    /* line map: */
    /*   line 671 @ +0x000 */
    /*   line 677 @ +0x000 */
    /*   line 677 @ +0x000 */
    /*   line 681 @ +0x000 */
    /*   line 683 @ +0x000 */
    /*   line 686 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\tempgrp\SND_R3\src\psx2\ee\sndeethrd.cpp lines 650–662 */
/* addr: 0x0018a2d0  size: 164 bytes */
void usnd_vEnterCritSect(unsigned int uiCS)
{
    unsigned int uiThreadId;
    /* line map: */
    /*   line 650 @ +0x000 */
    /*   line 650 @ +0x000 */
    /*   line 654 @ +0x000 */
    /*   line 658 @ +0x000 */
    /*   line 659 @ +0x000 */
    /*   line 662 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\tempgrp\SND_R3\src\psx2\ee\sndeethrd.cpp lines 642–642 */
/* addr: 0x0018a380  size: 20 bytes */
void usnd_vDeleteCritSect(unsigned int uiCS)
{
    /* line map: */
    /*   line 642 @ +0x000 */
    /*   line 642 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\tempgrp\SND_R3\src\psx2\ee\sndeethrd.cpp lines 621–632 */
/* addr: 0x0018a3a0  size: 96 bytes */
unsigned int usnd_uiCreateCritSect(void)
{
    unsigned int uiSem;
    SemaParam sem;
    /* line map: */
    /*   line 621 @ +0x000 */
    /*   line 623 @ +0x000 */
    /*   line 623 @ +0x000 */
    /*   line 629 @ +0x000 */
    /*   line 632 @ +0x000 */
    /*   line 627 @ +0x000 */
    /*   line 630 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\tempgrp\SND_R3\src\psx2\ee\sndeethrd.cpp lines 591–601 */
/* addr: 0x0018a400  size: 284 bytes */
void usnd_vKillTimer(unsigned int uiTimerId, /* function pointer */ int pToBeKilled)
{
    /* line map: */
    /*   line 591 @ +0x000 */
    /*   line 596 @ +0x000 */
    /*   line 598 @ +0x000 */
    /*   line 601 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\tempgrp\SND_R3\src\psx2\ee\sndeethrd.cpp lines 555–578 */
/* addr: 0x0018a520  size: 380 bytes */
unsigned int usnd_uiSetTimer(unsigned int uiDelay, void (*pfnCallback)(unsigned int, unsigned int), unsigned int uiUserParam, /* function pointer */ int pSTS)
{
    /* line map: */
    /*   line 555 @ +0x000 */
    /*   line 560 @ +0x000 */
    /*   line 563 @ +0x000 */
    /*   line 564 @ +0x000 */
    /*   line 566 @ +0x000 */
    /*   line 568 @ +0x000 */
    /*   line 573 @ +0x000 */
    /*   line 573 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\tempgrp\SND_R3\src\psx2\ee\sndeethrd.cpp lines 467–495 */
/* addr: 0x0018a6a0  size: 524 bytes */
void usnd_vTimerLoop__FPv(/* function pointer */ int ppSTS)
{
    /* line map: */
    /*   line 467 @ +0x000 */
    /*   line 471 @ +0x000 */
    /*   line 476 @ +0x000 */
    /*   line 481 @ +0x000 */
    /*   line 481 @ +0x000 */
    /*   line 484 @ +0x000 */
    /*   line 488 @ +0x000 */
    /*   line 492 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* addr: 0x0018a8b0  size: 8 bytes */
unsigned int usnd_uiDesinitTimers(void)
{
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\tempgrp\SND_R3\src\psx2\ee\sndeethrd.cpp lines 390–423 */
/* addr: 0x0018a8c0  size: 296 bytes */
unsigned int usnd_uiInitTimers(void)
{
    SemaParam sem;
    ThreadParam tp;
    char stack[16384];
    /* line map: */
    /*   line 390 @ +0x000 */
    /*   line 390 @ +0x000 */
    /*   line 397 @ +0x000 */
    /*   line 398 @ +0x000 */
    /*   line 397 @ +0x000 */
    /*   line 410 @ +0x000 */
    /*   line 406 @ +0x000 */
    /*   line 408 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* addr: 0x0018a9f0  size: 8 bytes */
void usnd_vUpdateTimers(void)
{
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\tempgrp\SND_R3\src\psx2\ee\sndeethrd.cpp lines 345–345 */
/* addr: 0x0018aa00  size: 60 bytes */
unsigned int usnd_uiGetTime(void)
{
    /* line map: */
    /*   line 345 @ +0x000 */
    /*   line 345 @ +0x000 */
    /*   line 345 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\tempgrp\SND_R3\src\psx2\ee\sndeethrd.cpp lines 296–307 */
/* addr: 0x0018aa40  size: 156 bytes */
int usnd_uiTimerHandler__Fi(void)
{
    /* line map: */
    /*   line 296 @ +0x000 */
    /*   line 302 @ +0x000 */
    /*   line 302 @ +0x000 */
    /*   line 299 @ +0x000 */
    /*   line 299 @ +0x000 */
    /*   line 305 @ +0x000 */
    /*   line 307 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\tempgrp\SND_R3\src\psx2\ee\sndeethrd.cpp lines 180–205 */
/* addr: 0x0018aae0  size: 224 bytes */
void fs_vCleanTheString__FPc(char* ptr)
{
    char* p2;
    char* p;
    /* line map: */
    /*   line 180 @ +0x000 */
    /*   line 182 @ +0x000 */
    /*   line 182 @ +0x000 */
    /*   line 185 @ +0x000 */
    /*   line 190 @ +0x000 */
    /*   line 195 @ +0x000 */
    /*   line 198 @ +0x000 */
    /*   line 201 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\tempgrp\SND_R3\src\psx2\ee\sndeethrd.cpp lines 138–173 */
/* addr: 0x0018abc0  size: 400 bytes */
unsigned int usnd_uiComputeRelativePath(char* szAbsFP1, char* szAbsFP2, char* szResFP, unsigned int uiResStringSize)
{
    signed char cIndexFirstDifferentCar;
    signed char cRecursDir;
    signed char* param0;
    signed char* p2;
    signed char* p1;
    /* line map: */
    /*   line 141 @ +0x000 */
    /*   line 139 @ +0x000 */
    /*   line 138 @ +0x000 */
    /*   line 139 @ +0x000 */
    /*   line 138 @ +0x000 */
    /*   line 144 @ +0x000 */
    /*   line 148 @ +0x000 */
    /*   line 148 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\tempgrp\SND_R3\src\psx2\ee\sndeethrd.cpp lines 78–121 */
/* addr: 0x0018ad50  size: 404 bytes */
unsigned int usnd_uiComputeAbsolutePath(char* szAbsFP, char* szRelFP, char* szResFP, unsigned int uiResStringSize)
{
    char cRecursDir;
    char* p2;
    char* p1;
    /* line map: */
    /*   line 78 @ +0x000 */
    /*   line 87 @ +0x000 */
    /*   line 88 @ +0x000 */
    /*   line 94 @ +0x000 */
    /*   line 97 @ +0x000 */
    /*   line 100 @ +0x000 */
    /*   line 104 @ +0x000 */
    /*   line 108 @ +0x000 */
    /* TODO: decompile from asm/... */
}
