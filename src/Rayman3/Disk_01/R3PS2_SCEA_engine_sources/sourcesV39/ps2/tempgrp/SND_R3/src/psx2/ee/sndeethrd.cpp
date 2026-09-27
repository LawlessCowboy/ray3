/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\tempgrp\SND_R3\src\psx2\ee\sndeethrd.cpp */
/* Language: C++ */
/* Compiler: MW MIPS C Compiler */

#include <stddef.h>

#pragma exceptions off

/* Recovered aggregate layouts from MWCC debug type records. */
typedef struct _SHiResTime _SHiResTime;
typedef struct _usnd_STimerStruct _usnd_STimerStruct;
typedef struct ThreadParam ThreadParam;
typedef struct SemaParam SemaParam;

extern "C" void DeleteSema(int);
extern "C" int rand(void);

struct _SHiResTime {
    unsigned int m_uiHighWord; /* +0x0 */
    unsigned int m_uiLowWord; /* +0x4 */
};

struct _usnd_STimerStruct {
    void (*m_pfnCallback)(unsigned int, unsigned int); /* +0x0 */
    unsigned int m_uiUserParam; /* +0x4 */
    unsigned long m_uiTime; /* +0x8 */
    unsigned char _extractor_padding_00[4]; /* implicitly added by extractor; +0xc..0xf */
    unsigned int m_uiPeriod; /* +0x10 */
    unsigned char m_bDelete; /* +0x14 */
    unsigned char m_bCall; /* +0x15 */
    _usnd_STimerStruct* m_next; /* +0x18 */
};

struct ThreadParam {
    int status; /* +0x0 */
    void (*entry)(void*); /* +0x4 */
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

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\tempgrp\SND_R3\src\psx2\ee\sndeethrd.cpp lines 692–699 */
/* addr: 0x0018a1b0  size: 100 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 693
 *   +0x0004 -> line 692
 *   +0x0008 -> line 693
 *   +0x001c -> line 692
 *   +0x0020 -> line 693
 *   +0x0030 -> line 694
 *   +0x003c -> line 696
 *   +0x0048 -> line 697
 *   +0x004c -> line 696
 *   +0x0050 -> line 697
 *   +0x0058 -> line 699
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void usnd_vLeaveCritSect(unsigned int uiCS)
{
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\tempgrp\SND_R3\src\psx2\ee\sndeethrd.cpp lines 670–686 */
/* addr: 0x0018a220  size: 164 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 670
 *   +0x0014 -> line 671
 *   +0x0020 -> line 674
 *   +0x0040 -> line 677
 *   +0x0044 -> line 676
 *   +0x0054 -> line 677
 *   +0x005c -> line 679
 *   +0x0070 -> line 681
 *   +0x0074 -> line 682
 *   +0x0080 -> line 683
 *   +0x0088 -> line 685
 *   +0x008c -> line 686
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
unsigned int usnd_uiTryToEnterCritSect(unsigned int uiCS)
{
    unsigned int uiThreadId;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\tempgrp\SND_R3\src\psx2\ee\sndeethrd.cpp lines 649–662 */
/* addr: 0x0018a2d0  size: 164 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 649
 *   +0x0018 -> line 650
 *   +0x0020 -> line 652
 *   +0x0034 -> line 650
 *   +0x0038 -> line 652
 *   +0x004c -> line 654
 *   +0x0060 -> line 655
 *   +0x0068 -> line 658
 *   +0x0070 -> line 660
 *   +0x0074 -> line 659
 *   +0x0078 -> line 660
 *   +0x0088 -> line 662
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void usnd_vEnterCritSect(unsigned int uiCS)
{
    unsigned int uiThreadId;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\tempgrp\SND_R3\src\psx2\ee\sndeethrd.cpp lines 640–642 */
/* addr: 0x0018a380  size: 20 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 640
 *   +0x0004 -> line 642
 *   +0x0008 -> line 640
 *   +0x000c -> line 642
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void usnd_vDeleteCritSect(unsigned int uiCS)
{
    gs_nbSem--;
    DeleteSema(uiCS - 1);
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\tempgrp\SND_R3\src\psx2\ee\sndeethrd.cpp lines 617–633 */
/* addr: 0x0018a3a0  size: 96 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 617
 *   +0x0004 -> line 621
 *   +0x0008 -> line 617
 *   +0x000c -> line 623
 *   +0x0010 -> line 621
 *   +0x0014 -> line 623
 *   +0x001c -> line 627
 *   +0x0020 -> line 629
 *   +0x0030 -> line 630
 *   +0x0038 -> line 632
 *   +0x003c -> line 630
 *   +0x0044 -> line 627
 *   +0x004c -> line 629
 *   +0x0050 -> line 630
 *   +0x0054 -> line 633
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
unsigned int usnd_uiCreateCritSect(void)
{
    unsigned int uiSem;
    SemaParam sem;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\tempgrp\SND_R3\src\psx2\ee\sndeethrd.cpp lines 590–601 */
/* addr: 0x0018a400  size: 284 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 590
 *   +0x001c -> line 591
 *   +0x0020 -> line 594
 *   +0x0028 -> line 596
 *   +0x0098 -> line 597
 *   +0x00a0 -> line 598
 *   +0x00a8 -> line 599
 *   +0x00fc -> line 601
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void usnd_vKillTimer(unsigned int uiTimerId)
{
    _usnd_STimerStruct* pToBeKilled;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\tempgrp\SND_R3\src\psx2\ee\sndeethrd.cpp lines 551–579 */
/* addr: 0x0018a520  size: 380 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 551
 *   +0x0028 -> line 555
 *   +0x0030 -> line 557
 *   +0x003c -> line 560
 *   +0x0044 -> line 565
 *   +0x0048 -> line 563
 *   +0x004c -> line 565
 *   +0x0050 -> line 564
 *   +0x0054 -> line 565
 *   +0x0074 -> line 566
 *   +0x0084 -> line 567
 *   +0x0088 -> line 568
 *   +0x008c -> line 572
 *   +0x00fc -> line 573
 *   +0x0100 -> line 575
 *   +0x0114 -> line 573
 *   +0x0118 -> line 575
 *   +0x011c -> line 574
 *   +0x0120 -> line 575
 *   +0x0158 -> line 578
 *   +0x015c -> line 579
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
unsigned int usnd_uiSetTimer(unsigned int uiDelay, void (*pfnCallback)(unsigned int, unsigned int), unsigned int uiUserParam)
{
    _usnd_STimerStruct* pSTS;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\tempgrp\SND_R3\src\psx2\ee\sndeethrd.cpp lines 460–497 */
/* addr: 0x0018a6a0  size: 524 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 460
 *   +0x0020 -> line 467
 *   +0x0028 -> line 469
 *   +0x0098 -> line 471
 *   +0x00ec -> line 474
 *   +0x00f8 -> line 476
 *   +0x0108 -> line 480
 *   +0x0170 -> line 481
 *   +0x0174 -> line 482
 *   +0x017c -> line 481
 *   +0x0180 -> line 482
 *   +0x01c0 -> line 484
 *   +0x01c8 -> line 485
 *   +0x01d0 -> line 488
 *   +0x01dc -> line 491
 *   +0x01ec -> line 492
 *   +0x01f0 -> line 493
 *   +0x01f8 -> line 495
 *   +0x0204 -> line 497
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void usnd_vTimerLoop__FPv(void)
{
    _usnd_STimerStruct** ppSTS;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\tempgrp\SND_R3\src\psx2\ee\sndeethrd.cpp lines 434–434 */
/* addr: 0x0018a8b0  size: 8 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 434
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
unsigned int usnd_uiDesinitTimers(void)
{
    return 1;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\tempgrp\SND_R3\src\psx2\ee\sndeethrd.cpp lines 383–424 */
/* addr: 0x0018a8c0  size: 296 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 383
 *   +0x0004 -> line 390
 *   +0x0008 -> line 383
 *   +0x000c -> line 390
 *   +0x001c -> line 393
 *   +0x0060 -> line 397
 *   +0x0064 -> line 393
 *   +0x0068 -> line 398
 *   +0x006c -> line 393
 *   +0x0074 -> line 397
 *   +0x0078 -> line 398
 *   +0x0084 -> line 410
 *   +0x0088 -> line 405
 *   +0x0094 -> line 406
 *   +0x00a0 -> line 407
 *   +0x00a8 -> line 408
 *   +0x00b0 -> line 409
 *   +0x00b4 -> line 410
 *   +0x00c4 -> line 417
 *   +0x00d0 -> line 421
 *   +0x0118 -> line 424
 *   +0x011c -> line 423
 *   +0x0120 -> line 424
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
unsigned int usnd_uiInitTimers(void)
{
    SemaParam sem;
    ThreadParam tp;
    char stack[16384];
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\tempgrp\SND_R3\src\psx2\ee\sndeethrd.cpp lines 377–377 */
/* addr: 0x0018a9f0  size: 8 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 377
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void usnd_vUpdateTimers(void)
{
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\tempgrp\SND_R3\src\psx2\ee\sndeethrd.cpp lines 344–346 */
/* addr: 0x0018aa00  size: 60 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 344
 *   +0x0004 -> line 345
 *   +0x0008 -> line 344
 *   +0x000c -> line 345
 *   +0x0028 -> line 346
 *   +0x002c -> line 345
 *   +0x0034 -> line 346
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
unsigned int usnd_uiGetTime(void)
{
    return (usnd_guiTickT0 * 1000) / 2500;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\tempgrp\SND_R3\src\psx2\ee\sndeethrd.cpp lines 294–308 */
/* addr: 0x0018aa40  size: 156 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 294
 *   +0x0004 -> line 296
 *   +0x0008 -> line 294
 *   +0x000c -> line 302
 *   +0x0010 -> line 296
 *   +0x0014 -> line 302
 *   +0x0018 -> line 296
 *   +0x0024 -> line 299
 *   +0x0028 -> line 302
 *   +0x002c -> line 299
 *   +0x0030 -> line 302
 *   +0x0084 -> line 305
 *   +0x008c -> line 308
 *   +0x0090 -> line 307
 *   +0x0094 -> line 308
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
int usnd_uiTimerHandler__Fi(void)
{
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\tempgrp\SND_R3\src\psx2\ee\sndeethrd.cpp lines 179–205 */
/* addr: 0x0018aae0  size: 224 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 179
 *   +0x0004 -> line 180
 *   +0x0008 -> line 179
 *   +0x000c -> line 182
 *   +0x0010 -> line 179
 *   +0x0014 -> line 182
 *   +0x0020 -> line 184
 *   +0x0038 -> line 185
 *   +0x003c -> line 186
 *   +0x004c -> line 190
 *   +0x0054 -> line 192
 *   +0x0068 -> line 195
 *   +0x006c -> line 197
 *   +0x0078 -> line 198
 *   +0x0094 -> line 200
 *   +0x009c -> line 201
 *   +0x00b4 -> line 202
 *   +0x00b8 -> line 203
 *   +0x00bc -> line 204
 *   +0x00cc -> line 205
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void fs_vCleanTheString__FPc(char* ptr)
{
    char* p2;
    char* p;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\tempgrp\SND_R3\src\psx2\ee\sndeethrd.cpp lines 137–173 */
/* addr: 0x0018abc0  size: 400 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 137
 *   +0x0018 -> line 141
 *   +0x001c -> line 137
 *   +0x0020 -> line 139
 *   +0x0024 -> line 137
 *   +0x0028 -> line 138
 *   +0x002c -> line 137
 *   +0x0030 -> line 139
 *   +0x0034 -> line 137
 *   +0x0040 -> line 138
 *   +0x0044 -> line 141
 *   +0x0050 -> line 144
 *   +0x0058 -> line 145
 *   +0x007c -> line 148
 *   +0x0080 -> line 151
 *   +0x0084 -> line 148
 *   +0x0088 -> line 149
 *   +0x008c -> line 151
 *   +0x0094 -> line 153
 *   +0x00ac -> line 155
 *   +0x00d0 -> line 158
 *   +0x00dc -> line 159
 *   +0x00ec -> line 161
 *   +0x00fc -> line 162
 *   +0x0108 -> line 163
 *   +0x0118 -> line 164
 *   +0x012c -> line 165
 *   +0x0150 -> line 167
 *   +0x015c -> line 170
 *   +0x0164 -> line 173
 *   +0x0168 -> line 172
 *   +0x016c -> line 173
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
unsigned int usnd_uiComputeRelativePath(char* szAbsFP1, char* szAbsFP2, char* szResFP, unsigned int uiResStringSize)
{
    signed char cIndexFirstDifferentCar;
    signed char cRecursDir;
    signed char* param0;
    signed char* p2;
    signed char* p1;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\tempgrp\SND_R3\src\psx2\ee\sndeethrd.cpp lines 73–122 */
/* addr: 0x0018ad50  size: 404 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 73
 *   +0x0024 -> line 78
 *   +0x0038 -> line 84
 *   +0x0070 -> line 87
 *   +0x0078 -> line 86
 *   +0x007c -> line 88
 *   +0x0084 -> line 91
 *   +0x0088 -> line 94
 *   +0x0094 -> line 95
 *   +0x00c0 -> line 97
 *   +0x00c8 -> line 99
 *   +0x00e8 -> line 100
 *   +0x00f8 -> line 101
 *   +0x0100 -> line 104
 *   +0x0110 -> line 105
 *   +0x0118 -> line 108
 *   +0x0124 -> line 109
 *   +0x0130 -> line 112
 *   +0x0158 -> line 114
 *   +0x015c -> line 115
 *   +0x016c -> line 119
 *   +0x0174 -> line 121
 *   +0x0178 -> line 122
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
unsigned int usnd_uiComputeAbsolutePath(char* szAbsFP, char* szRelFP, char* szResFP, unsigned int uiResStringSize)
{
    char cRecursDir;
    char* p2;
    char* p1;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\tempgrp\SND_R3\src\psx2\ee\sndeethrd.cpp lines 52–59 */
/* addr: 0x0018aef0  size: 72 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 52
 *   +0x000c -> line 55
 *   +0x0014 -> line 56
 *   +0x0018 -> line 55
 *   +0x001c -> line 56
 *   +0x0038 -> line 59
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
unsigned int usnd_uiRand(unsigned int uiMaxRandValue)
{
    unsigned long ulRandomValue;
    ulRandomValue = rand();
    ulRandomValue = (ulRandomValue * uiMaxRandValue) / 0x7fffffff;
    return ulRandomValue;
}
