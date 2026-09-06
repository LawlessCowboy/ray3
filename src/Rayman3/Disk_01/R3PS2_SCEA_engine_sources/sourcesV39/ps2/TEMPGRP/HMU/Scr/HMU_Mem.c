/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\HMU\Scr\HMU_Mem.c */
/* Language: C++ */
/* Compiler: MW MIPS C Compiler */

#include <stddef.h>

/* Recovered aggregate layouts from MWCC debug type records. */
typedef struct sceDmaChan sceDmaChan;
typedef struct tdstBlockInfo_ tdstBlockInfo_;
typedef struct HMU_tdstMemoryStructure_ HMU_tdstMemoryStructure_;

typedef enum e_ucHMUStaticBlocks {
    E_ucHMUFirstMemoryBlock = 0,
    E_ucHMUFixNormalMemoryBlock = 0,
    E_ucHMUFixTempMemoryBlock = 1,
    E_ucHMULevelNormalMemoryBlock = 2,
    E_ucHMULevelTempMemoryBlock = 3,
    E_ucHMUTransition1NormalMemoryBlock = 4,
    E_ucHMUTransition1TempMemoryBlock = 5,
    E_ucHMUTransition2NormalMemoryBlock = 6,
    E_ucHMUTransition2TempMemoryBlock = 7,
    E_ucHMUBinaryMemoryBlock = 8,
    E_ucHMUMaxBlocksNb = 9,
} e_ucHMUStaticBlocks;

struct tdstBlockInfo_ {
    int p_cBeginBlock; /* +0x0 */
    int p_cEndBlock; /* +0x4 */
    int p_cFirstFree; /* +0x8 */
    int p_cMaxMem; /* +0xc */
};

struct HMU_tdstMemoryStructure_ {
    e_ucHMUStaticBlocks m_eActualNormalMemoryBlock; /* +0x0 */
    e_ucHMUStaticBlocks m_eActualTempMemoryBlock; /* +0x4 */
    unsigned char bUseDynamicMemory[9]; /* +0x8 */
    unsigned char bIsInitialized[9]; /* +0x11 */
    unsigned int u32NumberOfAllocation[9]; /* +0x1c */
};

unsigned char g_ucHMUModuleId;
HMU_tdstMemoryStructure_ HMU_g_stMemoryStructure;
tdstBlockInfo_ g_a_stHMUBlocksInfo[9];
unsigned int HMU_g_ulLastSndDirectAlloc;
int HMU_g_p_vSndDirectSoundAlloc[1000];

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\HMU\Scr\HMU_Mem.c lines 192–241 */
/* addr: 0x002ed560  size: 452 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 192
 *   +0x0018 -> line 201
 *   +0x001c -> line 192
 *   +0x0020 -> line 197
 *   +0x0024 -> line 192
 *   +0x0030 -> line 201
 *   +0x0034 -> line 192
 *   +0x0038 -> line 197
 *   +0x003c -> line 192
 *   +0x0044 -> line 201
 *   +0x0050 -> line 206
 *   +0x005c -> line 207
 *   +0x0064 -> line 210
 *   +0x0078 -> line 211
 *   +0x0094 -> line 218
 *   +0x0098 -> line 221
 *   +0x00d8 -> line 222
 *   +0x00e0 -> line 223
 *   +0x00ec -> line 224
 *   +0x00f8 -> line 225
 *   +0x0104 -> line 226
 *   +0x0110 -> line 228
 *   +0x0114 -> line 230
 *   +0x011c -> line 226
 *   +0x0128 -> line 233
 *   +0x012c -> line 235
 *   +0x0130 -> line 233
 *   +0x0138 -> line 235
 *   +0x0140 -> line 236
 *   +0x0148 -> line 235
 *   +0x0158 -> line 234
 *   +0x015c -> line 235
 *   +0x0174 -> line 236
 *   +0x017c -> line 238
 *   +0x018c -> line 240
 *   +0x0194 -> line 241
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void GLI_vGsStoreFrameBufferInto128x128x16__FPUssiis(unsigned short* _DestinationBuffer, short vram, int WIDTH, short CurrentPSM)
{
    unsigned int x;
    unsigned int B;
    unsigned int G;
    unsigned int R;
    unsigned int DestY;
    unsigned char* ram;
    unsigned char* tempram;
    sceDmaChan* d1;
    short spsm;
    int h;
    sceGsStoreImage gssi;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\HMU\Scr\HMU_Mem.c lines 592–633 */
/* addr: 0x002ed730  size: 312 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 592
 *   +0x0020 -> line 598
 *   +0x0028 -> line 601
 *   +0x0038 -> line 604
 *   +0x0058 -> line 607
 *   +0x0060 -> line 609
 *   +0x0078 -> line 611
 *   +0x0080 -> line 612
 *   +0x0084 -> line 614
 *   +0x0088 -> line 613
 *   +0x008c -> line 615
 *   +0x0090 -> line 614
 *   +0x0094 -> line 616
 *   +0x00b0 -> line 619
 *   +0x00c8 -> line 622
 *   +0x00d4 -> line 623
 *   +0x00e4 -> line 624
 *   +0x00f4 -> line 626
 *   +0x00fc -> line 627
 *   +0x0108 -> line 628
 *   +0x0110 -> line 632
 *   +0x0118 -> line 633
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void HMU_fn_vSndFree(void** p_vPointer)
{
    unsigned int i;
    unsigned char bDirectFreeDone;
    unsigned char ucOldHMUTempBloc;
    void* p_vBeginBloc;
    unsigned short uwBlocId;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\HMU\Scr\HMU_Mem.c lines 539–585 */
/* addr: 0x002ed870  size: 368 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 539
 *   +0x0010 -> line 544
 *   +0x0018 -> line 547
 *   +0x0024 -> line 549
 *   +0x0038 -> line 550
 *   +0x003c -> line 551
 *   +0x0040 -> line 554
 *   +0x0050 -> line 558
 *   +0x0058 -> line 559
 *   +0x005c -> line 558
 *   +0x0060 -> line 559
 *   +0x0098 -> line 560
 *   +0x00a4 -> line 562
 *   +0x00b8 -> line 563
 *   +0x00c4 -> line 564
 *   +0x00cc -> line 567
 *   +0x00f8 -> line 569
 *   +0x0100 -> line 572
 *   +0x010c -> line 573
 *   +0x011c -> line 574
 *   +0x012c -> line 576
 *   +0x0138 -> line 577
 *   +0x0148 -> line 578
 *   +0x0150 -> line 582
 *   +0x0158 -> line 584
 *   +0x015c -> line 585
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void HMU_fn_pvSndMalloc(unsigned int u32Size)
{
    unsigned int i;
    unsigned char ucOldHMUTempBloc;
    void* p_vReturn;
    unsigned char bFirstTime;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\HMU\Scr\HMU_Mem.c lines 462–517 */
/* addr: 0x002ed9e0  size: 276 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 462
 *   +0x0014 -> line 468
 *   +0x001c -> line 476
 *   +0x002c -> line 478
 *   +0x0034 -> line 479
 *   +0x003c -> line 482
 *   +0x004c -> line 483
 *   +0x005c -> line 485
 *   +0x0064 -> line 486
 *   +0x0074 -> line 488
 *   +0x0080 -> line 489
 *   +0x0090 -> line 490
 *   +0x0098 -> line 493
 *   +0x009c -> line 494
 *   +0x00b0 -> line 496
 *   +0x00b8 -> line 497
 *   +0x00c0 -> line 499
 *   +0x00d0 -> line 502
 *   +0x00ec -> line 505
 *   +0x00f8 -> line 514
 *   +0x0100 -> line 517
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void HMU_fn_vFree(void** p_vPointer, unsigned char bTempMalloc)
{
    void* p_vBeginBloc;
    unsigned short uwBlocId;
    e_ucHMUStaticBlocks eMemoryBlockUse;
    /* TODO: decompile from asm/... */
}
