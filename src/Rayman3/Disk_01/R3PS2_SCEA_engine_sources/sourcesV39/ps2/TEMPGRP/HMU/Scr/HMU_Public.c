/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\HMU\Scr\HMU_Public.c */
/* Language: C */
/* Compiler: MW MIPS C Compiler */

#include <stddef.h>

/* Recovered aggregate layouts from MWCC debug type records. */
typedef struct HMU_tdstMemoryStructure_ HMU_tdstMemoryStructure_;
unsigned char HMU_fn_ucGetTransition1NormalMemoryBlock(void);
unsigned char HMU_fn_ucGetLevelNormalMemoryBlock(void);

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

struct HMU_tdstMemoryStructure_ {
    e_ucHMUStaticBlocks m_eActualNormalMemoryBlock; /* +0x0 */
    e_ucHMUStaticBlocks m_eActualTempMemoryBlock; /* +0x4 */
    unsigned char bUseDynamicMemory[9]; /* +0x8 */
    unsigned char bIsInitialized[9]; /* +0x11 */
    unsigned int u32NumberOfAllocation[9]; /* +0x1c */
};

unsigned char HMU_g_bInitialized;
HMU_tdstMemoryStructure_ HMU_g_stMemoryStructure;
int g_a_p_stMmgModuleBlocksInfo[255];
unsigned char g_ucHMUModuleId;

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\HMU\Scr\HMU_Public.c lines 115–314 */
/* addr: 0x002edb00  size: 456 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 115
 *   +0x001c -> line 121
 *   +0x0024 -> line 124
 *   +0x002c -> line 126
 *   +0x0034 -> line 127
 *   +0x003c -> line 130
 *   +0x0048 -> line 137
 *   +0x0050 -> line 139
 *   +0x007c -> line 143
 *   +0x0084 -> line 145
 *   +0x008c -> line 147
 *   +0x009c -> line 148
 *   +0x00ac -> line 151
 *   +0x00b4 -> line 153
 *   +0x00bc -> line 155
 *   +0x00d4 -> line 203
 *   +0x00d8 -> line 205
 *   +0x00e8 -> line 206
 *   +0x00f8 -> line 207
 *   +0x0100 -> line 209
 *   +0x012c -> line 211
 *   +0x0134 -> line 271
 *   +0x0160 -> line 275
 *   +0x0168 -> line 278
 *   +0x0170 -> line 291
 *   +0x0178 -> line 294
 *   +0x0188 -> line 301
 *   +0x01a0 -> line 311
 *   +0x01a8 -> line 313
 *   +0x01ac -> line 314
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void HMU_fn_p_vMalloc(unsigned int u32Size, unsigned char bTempMalloc)
{
    e_ucHMUStaticBlocks eMemoryBlockUse;
    void* p_vReturn;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\HMU\Scr\HMU_Public.c lines 622–630 */
/* addr: 0x002edcd0  size: 44 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 622
 *   +0x0008 -> line 624
 *   +0x0010 -> line 626
 *   +0x0018 -> line 628
 *   +0x0020 -> line 630
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void HMU_fn_vSetMemoriesInBinaryMode(void)
{
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\HMU\Scr\HMU_Public.c lines 591–602 */
/* addr: 0x002edd00  size: 112 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 591
 *   +0x000c -> line 593
 *   +0x0014 -> line 595
 *   +0x0048 -> line 596
 *   +0x004c -> line 597
 *   +0x0050 -> line 596
 *   +0x0054 -> line 597
 *   +0x0058 -> line 600
 *   +0x0060 -> line 602
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void HMU_fn_vInitBinaryMemory(unsigned int _ulNormalMemSize)
{
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\HMU\Scr\HMU_Public.c lines 570–582 */
/* addr: 0x002edd70  size: 40 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 570
 *   +0x0008 -> line 573
 *   +0x0010 -> line 577
 *   +0x0018 -> line 582
 *   +0x001c -> line 578
 *   +0x0020 -> line 582
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
unsigned char HMU_fn_ucGetTransition2NormalMemoryBlock(void)
{
    HMU_fn_vEnterCriticalSection();
    HMU_fn_vLeaveCriticalSection();
    return 6;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\HMU\Scr\HMU_Public.c lines 555–567 */
/* addr: 0x002edda0  size: 40 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 555
 *   +0x0008 -> line 558
 *   +0x0010 -> line 562
 *   +0x0018 -> line 567
 *   +0x001c -> line 563
 *   +0x0020 -> line 567
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
unsigned char HMU_fn_ucGetTransition1NormalMemoryBlock(void)
{
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\HMU\Scr\HMU_Public.c lines 543–552 */
/* addr: 0x002eddd0  size: 56 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 543
 *   +0x0008 -> line 545
 *   +0x0010 -> line 547
 *   +0x001c -> line 548
 *   +0x0024 -> line 550
 *   +0x002c -> line 552
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void HMU_fn_vSetMemoriesInTransition2Mode(void)
{
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\HMU\Scr\HMU_Public.c lines 531–540 */
/* addr: 0x002ede10  size: 56 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 531
 *   +0x0008 -> line 533
 *   +0x0010 -> line 535
 *   +0x001c -> line 536
 *   +0x0024 -> line 538
 *   +0x002c -> line 540
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void HMU_fn_vSetMemoriesInTransition1Mode(void)
{
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\HMU\Scr\HMU_Public.c lines 517–528 */
/* addr: 0x002ede50  size: 112 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 517
 *   +0x0008 -> line 519
 *   +0x0010 -> line 521
 *   +0x0030 -> line 523
 *   +0x0038 -> line 522
 *   +0x003c -> line 523
 *   +0x0040 -> line 522
 *   +0x0044 -> line 523
 *   +0x0058 -> line 524
 *   +0x005c -> line 526
 *   +0x0064 -> line 528
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void HMU_fn_vDeleteTransition2Memories(void)
{
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\HMU\Scr\HMU_Public.c lines 503–514 */
/* addr: 0x002edec0  size: 112 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 503
 *   +0x0008 -> line 505
 *   +0x0010 -> line 507
 *   +0x0030 -> line 509
 *   +0x0038 -> line 508
 *   +0x003c -> line 509
 *   +0x0040 -> line 508
 *   +0x0044 -> line 509
 *   +0x0058 -> line 510
 *   +0x005c -> line 512
 *   +0x0064 -> line 514
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void HMU_fn_vDeleteTransition1Memories(void)
{
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\HMU\Scr\HMU_Public.c lines 490–500 */
/* addr: 0x002edf30  size: 112 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 490
 *   +0x000c -> line 492
 *   +0x0014 -> line 494
 *   +0x0048 -> line 495
 *   +0x004c -> line 496
 *   +0x0050 -> line 495
 *   +0x0054 -> line 496
 *   +0x0058 -> line 498
 *   +0x0060 -> line 500
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void HMU_fn_vInitTempTransition2Memory(unsigned int _ulTempMemSize)
{
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\HMU\Scr\HMU_Public.c lines 473–487 */
/* addr: 0x002edfa0  size: 112 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 473
 *   +0x000c -> line 475
 *   +0x0014 -> line 480
 *   +0x0048 -> line 482
 *   +0x004c -> line 483
 *   +0x0050 -> line 482
 *   +0x0054 -> line 483
 *   +0x0058 -> line 485
 *   +0x0060 -> line 487
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void HMU_fn_vInitNormalTransition2Memory(unsigned int _ulNormalMemSize)
{
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\HMU\Scr\HMU_Public.c lines 460–470 */
/* addr: 0x002ee010  size: 112 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 460
 *   +0x000c -> line 462
 *   +0x0014 -> line 464
 *   +0x0048 -> line 465
 *   +0x004c -> line 466
 *   +0x0050 -> line 465
 *   +0x0054 -> line 466
 *   +0x0058 -> line 468
 *   +0x0060 -> line 470
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void HMU_fn_vInitTempTransition1Memory(unsigned int _ulTempMemSize)
{
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\HMU\Scr\HMU_Public.c lines 443–457 */
/* addr: 0x002ee080  size: 112 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 443
 *   +0x000c -> line 445
 *   +0x0014 -> line 450
 *   +0x0048 -> line 452
 *   +0x004c -> line 453
 *   +0x0050 -> line 452
 *   +0x0054 -> line 453
 *   +0x0058 -> line 455
 *   +0x0060 -> line 457
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void HMU_fn_vInitNormalTransition1Memory(unsigned int _ulNormalMemSize)
{
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\HMU\Scr\HMU_Public.c lines 408–420 */
/* addr: 0x002ee0f0  size: 40 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 408
 *   +0x0008 -> line 411
 *   +0x0010 -> line 415
 *   +0x0018 -> line 420
 *   +0x001c -> line 416
 *   +0x0020 -> line 420
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
unsigned char HMU_fn_ucGetLevelNormalMemoryBlock(void)
{
    HMU_fn_vEnterCriticalSection();
    HMU_fn_vLeaveCriticalSection();
    return 2;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\HMU\Scr\HMU_Public.c lines 393–405 */
/* addr: 0x002ee120  size: 40 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 393
 *   +0x0008 -> line 396
 *   +0x0010 -> line 400
 *   +0x0018 -> line 405
 *   +0x001c -> line 401
 *   +0x0020 -> line 405
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
unsigned char HMU_fn_ucGetFixNormalMemoryBlock(void)
{
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\HMU\Scr\HMU_Public.c lines 378–390 */
/* addr: 0x002ee150  size: 48 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 378
 *   +0x0008 -> line 381
 *   +0x0010 -> line 383
 *   +0x0014 -> line 385
 *   +0x001c -> line 386
 *   +0x0020 -> line 390
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
unsigned char HMU_fn_ucGetActualTempMemoryBlockUsed(void)
{
    unsigned char ucReturn;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\HMU\Scr\HMU_Public.c lines 363–375 */
/* addr: 0x002ee180  size: 48 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 363
 *   +0x0008 -> line 366
 *   +0x0010 -> line 368
 *   +0x0014 -> line 370
 *   +0x001c -> line 371
 *   +0x0020 -> line 375
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
unsigned char HMU_fn_ucGetActualNormalMemoryBlockUsed(void)
{
    unsigned char ucReturn;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\HMU\Scr\HMU_Public.c lines 352–360 */
/* addr: 0x002ee1b0  size: 52 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 352
 *   +0x000c -> line 354
 *   +0x0014 -> line 356
 *   +0x001c -> line 358
 *   +0x0024 -> line 360
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void HMU_fn_vSetActualTempMemoryBlock(unsigned char ucBlocNumber)
{
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\HMU\Scr\HMU_Public.c lines 341–349 */
/* addr: 0x002ee1f0  size: 52 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 341
 *   +0x000c -> line 343
 *   +0x0014 -> line 345
 *   +0x001c -> line 347
 *   +0x0024 -> line 349
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void HMU_fn_vSetActualNormalMemoryBlock(unsigned char ucBlocNumber)
{
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\HMU\Scr\HMU_Public.c lines 329–338 */
/* addr: 0x002ee230  size: 56 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 329
 *   +0x0008 -> line 331
 *   +0x0010 -> line 333
 *   +0x001c -> line 334
 *   +0x0024 -> line 336
 *   +0x002c -> line 338
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void HMU_fn_vSetMemoriesInLevelMode(void)
{
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\HMU\Scr\HMU_Public.c lines 317–326 */
/* addr: 0x002ee270  size: 52 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 317
 *   +0x0008 -> line 319
 *   +0x0010 -> line 321
 *   +0x0014 -> line 322
 *   +0x0018 -> line 321
 *   +0x001c -> line 322
 *   +0x0020 -> line 324
 *   +0x0028 -> line 326
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void HMU_fn_vSetMemoriesInFixMode(void)
{
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\HMU\Scr\HMU_Public.c lines 279–292 */
/* addr: 0x002ee2b0  size: 112 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 279
 *   +0x0008 -> line 281
 *   +0x0010 -> line 283
 *   +0x0030 -> line 286
 *   +0x0038 -> line 284
 *   +0x003c -> line 286
 *   +0x0040 -> line 284
 *   +0x0044 -> line 286
 *   +0x0058 -> line 287
 *   +0x005c -> line 290
 *   +0x0064 -> line 292
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void HMU_fn_vDeleteLevelMemories(void)
{
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\HMU\Scr\HMU_Public.c lines 195–206 */
/* addr: 0x002ee320  size: 112 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 195
 *   +0x000c -> line 197
 *   +0x0014 -> line 199
 *   +0x0048 -> line 200
 *   +0x004c -> line 201
 *   +0x0050 -> line 200
 *   +0x0054 -> line 201
 *   +0x0058 -> line 204
 *   +0x0060 -> line 206
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void HMU_fn_vInitTempLevelMemory(unsigned int _ulTempMemSize)
{
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\HMU\Scr\HMU_Public.c lines 173–188 */
/* addr: 0x002ee390  size: 112 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 173
 *   +0x000c -> line 175
 *   +0x0014 -> line 180
 *   +0x0048 -> line 182
 *   +0x004c -> line 183
 *   +0x0050 -> line 182
 *   +0x0054 -> line 183
 *   +0x0058 -> line 186
 *   +0x0060 -> line 188
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void HMU_fn_vInitNormalLevelMemory(unsigned int _ulNormalMemSize)
{
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\HMU\Scr\HMU_Public.c lines 155–166 */
/* addr: 0x002ee400  size: 112 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 155
 *   +0x000c -> line 157
 *   +0x0014 -> line 159
 *   +0x0048 -> line 160
 *   +0x004c -> line 161
 *   +0x0050 -> line 160
 *   +0x0054 -> line 161
 *   +0x0058 -> line 164
 *   +0x0060 -> line 166
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void HMU_fn_vInitTempFixMemory(unsigned int _ulTempMemSize)
{
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\HMU\Scr\HMU_Public.c lines 133–148 */
/* addr: 0x002ee470  size: 112 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 133
 *   +0x000c -> line 135
 *   +0x0014 -> line 140
 *   +0x0048 -> line 142
 *   +0x004c -> line 143
 *   +0x0050 -> line 142
 *   +0x0054 -> line 143
 *   +0x0058 -> line 146
 *   +0x0060 -> line 148
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void HMU_fn_vInitNormalFixMemory(unsigned int _ulNormalMemSize)
{
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\HMU\Scr\HMU_Public.c lines 40–113 */
/* addr: 0x002ee4e0  size: 248 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 40
 *   +0x0008 -> line 56
 *   +0x0010 -> line 57
 *   +0x0018 -> line 60
 *   +0x0034 -> line 61
 *   +0x0048 -> line 62
 *   +0x0050 -> line 79
 *   +0x0054 -> line 80
 *   +0x0058 -> line 79
 *   +0x005c -> line 80
 *   +0x0060 -> line 108
 *   +0x0064 -> line 80
 *   +0x0068 -> line 81
 *   +0x0070 -> line 82
 *   +0x0078 -> line 83
 *   +0x0080 -> line 84
 *   +0x0088 -> line 85
 *   +0x0090 -> line 86
 *   +0x0098 -> line 87
 *   +0x00a0 -> line 88
 *   +0x00a8 -> line 98
 *   +0x00b0 -> line 99
 *   +0x00b8 -> line 100
 *   +0x00c0 -> line 101
 *   +0x00c8 -> line 102
 *   +0x00d0 -> line 103
 *   +0x00d8 -> line 104
 *   +0x00e0 -> line 105
 *   +0x00e4 -> line 110
 *   +0x00ec -> line 113
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void HMU_fn_vFirstInit(void)
{
    /* TODO: decompile from asm/... */
}
