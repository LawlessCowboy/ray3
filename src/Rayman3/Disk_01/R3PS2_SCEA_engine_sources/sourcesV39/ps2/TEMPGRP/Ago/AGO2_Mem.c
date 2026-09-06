/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ago\AGO2_Mem.c */
/* Language: C */
/* Compiler: MW MIPS C Compiler */

#include <stddef.h>

/* Recovered aggregate layouts from MWCC debug type records. */
typedef struct HIE_tdstSuperObject_ HIE_tdstSuperObject_;
typedef struct MTH3D_tdstVector_ MTH3D_tdstVector_;
typedef struct MTH4D_tdstMatrix_ MTH4D_tdstMatrix_;
typedef struct AGO2_MEM_HandleDescriptors_ AGO2_MEM_HandleDescriptors_;
typedef struct AGO2_MEM_FreeZone_ AGO2_MEM_FreeZone_;

struct AGO2_MEM_HandleDescriptors_ {
    unsigned int Handle; /* +0x0 */
    unsigned int Size; /* +0x4 */
    int Pointer; /* +0x8 */
    unsigned int Shrinked; /* +0xc */
};

struct AGO2_MEM_FreeZone_ {
    int pStart; /* +0x0 */
    int pEnd; /* +0x4 */
    unsigned int Size; /* +0x8 */
};

static unsigned int g_AGO2_MEM_NbOfAllocatedBlocs;
static unsigned int g_AGO2_MEM_CurrentHandle;
static unsigned int g_AGO2_MEM_NumberOfFreeZones;
static AGO2_MEM_HandleDescriptors_ g_AGO2_MEM_HandleDescriptors[5000];
static char g_AGO2_Main_Memory[1048576];
static AGO2_MEM_FreeZone_ g_AGO2_MEM_FreeZones[1000];

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ago\AGO2_Mem.c lines 699–712 */
/* addr: 0x001e05e0  size: 72 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 699
 *   +0x000c -> line 704
 *   +0x001c -> line 705
 *   +0x0020 -> line 707
 *   +0x0028 -> line 708
 *   +0x0030 -> line 709
 *   +0x0038 -> line 712
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void AGO_GetMainCharacterPosition(MTH3D_tdstVector_* pPos)
{
    MTH4D_tdstMatrix_* pMat;
    HIE_tdstSuperObject_* hMainCharacterObjet;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ago\AGO2_Mem.c lines 365–467 */
/* addr: 0x001e0630  size: 1260 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 365
 *   +0x0004 -> line 370
 *   +0x0008 -> line 365
 *   +0x000c -> line 374
 *   +0x0010 -> line 365
 *   +0x0014 -> line 371
 *   +0x0018 -> line 374
 *   +0x001c -> line 373
 *   +0x0024 -> line 374
 *   +0x0050 -> line 378
 *   +0x0058 -> line 381
 *   +0x0064 -> line 382
 *   +0x006c -> line 393
 *   +0x0070 -> line 385
 *   +0x007c -> line 393
 *   +0x0080 -> line 388
 *   +0x0084 -> line 393
 *   +0x0088 -> line 389
 *   +0x0090 -> line 393
 *   +0x009c -> line 395
 *   +0x00a8 -> line 398
 *   +0x00b0 -> line 399
 *   +0x00bc -> line 401
 *   +0x00c4 -> line 403
 *   +0x00d4 -> line 407
 *   +0x00e8 -> line 409
 *   +0x00f4 -> line 410
 *   +0x00f8 -> line 409
 *   +0x0100 -> line 410
 *   +0x0104 -> line 409
 *   +0x0108 -> line 410
 *   +0x010c -> line 409
 *   +0x0110 -> line 410
 *   +0x0114 -> line 411
 *   +0x0128 -> line 413
 *   +0x0134 -> line 414
 *   +0x0140 -> line 417
 *   +0x0148 -> line 419
 *   +0x0150 -> line 423
 *   +0x0160 -> line 428
 *   +0x016c -> line 435
 *   +0x0170 -> line 428
 *   +0x018c -> line 435
 *   +0x0190 -> line 429
 *   +0x0194 -> line 428
 *   +0x0198 -> line 429
 *   +0x01a0 -> line 428
 *   +0x01a4 -> line 429
 *   +0x01bc -> line 435
 *   +0x01e0 -> line 437
 *   +0x01e4 -> line 439
 *   +0x01e8 -> line 437
 *   +0x01ec -> line 439
 *   +0x01f4 -> line 437
 *   +0x01f8 -> line 438
 *   +0x0200 -> line 439
 *   +0x02c0 -> line 435
 *   +0x02d0 -> line 440
 *   +0x02d4 -> line 439
 *   +0x02f0 -> line 440
 *   +0x0300 -> line 441
 *   +0x0308 -> line 442
 *   +0x0310 -> line 445
 *   +0x031c -> line 447
 *   +0x032c -> line 448
 *   +0x0330 -> line 447
 *   +0x0334 -> line 448
 *   +0x0338 -> line 447
 *   +0x0340 -> line 448
 *   +0x0350 -> line 449
 *   +0x0358 -> line 452
 *   +0x0368 -> line 453
 *   +0x036c -> line 452
 *   +0x0374 -> line 453
 *   +0x0378 -> line 452
 *   +0x037c -> line 453
 *   +0x0390 -> line 460
 *   +0x03b4 -> line 462
 *   +0x03c0 -> line 464
 *   +0x03c4 -> line 462
 *   +0x03c8 -> line 464
 *   +0x03d0 -> line 462
 *   +0x03d4 -> line 463
 *   +0x03dc -> line 464
 *   +0x0490 -> line 460
 *   +0x04a0 -> line 465
 *   +0x04a4 -> line 464
 *   +0x04c0 -> line 465
 *   +0x04d0 -> line 466
 *   +0x04dc -> line 467
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void AGO2_MEM_FreeFromHandle(unsigned int Handle)
{
    unsigned int k;
    unsigned int FreeZoneAfter;
    unsigned int FreeZoneBefore;
    void* pEnd;
    void* param0;
    AGO2_MEM_HandleDescriptors_* pCurrentDescriptor;
    unsigned int j;
    unsigned int HandleDescIndex;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ago\AGO2_Mem.c lines 294–350 */
/* addr: 0x001e0b20  size: 492 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 294
 *   +0x0004 -> line 297
 *   +0x0008 -> line 294
 *   +0x000c -> line 296
 *   +0x0010 -> line 295
 *   +0x0014 -> line 301
 *   +0x0018 -> line 295
 *   +0x001c -> line 297
 *   +0x0020 -> line 296
 *   +0x0024 -> line 297
 *   +0x002c -> line 298
 *   +0x0038 -> line 301
 *   +0x0054 -> line 303
 *   +0x0090 -> line 301
 *   +0x00a0 -> line 303
 *   +0x00a4 -> line 304
 *   +0x00a8 -> line 303
 *   +0x00b0 -> line 304
 *   +0x00bc -> line 306
 *   +0x00c0 -> line 313
 *   +0x00c4 -> line 309
 *   +0x00c8 -> line 313
 *   +0x00cc -> line 309
 *   +0x00d0 -> line 310
 *   +0x00d4 -> line 311
 *   +0x00d8 -> line 313
 *   +0x00e8 -> line 315
 *   +0x00f8 -> line 317
 *   +0x0108 -> line 320
 *   +0x010c -> line 319
 *   +0x0110 -> line 321
 *   +0x0114 -> line 323
 *   +0x0118 -> line 321
 *   +0x011c -> line 324
 *   +0x012c -> line 326
 *   +0x0134 -> line 329
 *   +0x013c -> line 331
 *   +0x0174 -> line 333
 *   +0x0178 -> line 334
 *   +0x0190 -> line 340
 *   +0x0194 -> line 335
 *   +0x0198 -> line 337
 *   +0x019c -> line 340
 *   +0x01a0 -> line 337
 *   +0x01a4 -> line 340
 *   +0x01b0 -> line 343
 *   +0x01b8 -> line 345
 *   +0x01d0 -> line 347
 *   +0x01e4 -> line 350
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void AGO2_MEM_Shrink(void)
{
    char* pStartMin;
    char* pStart;
    unsigned int Found;
    unsigned int IndexMin;
    unsigned int i;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ago\AGO2_Mem.c lines 269–276 */
/* addr: 0x001e0d10  size: 64 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 272
 *   +0x0004 -> line 270
 *   +0x0008 -> line 272
 *   +0x0014 -> line 273
 *   +0x0020 -> line 269
 *   +0x0024 -> line 273
 *   +0x0028 -> line 274
 *   +0x0034 -> line 270
 *   +0x0038 -> line 276
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void AGO2_MEM_Init(void)
{
    g_AGO2_MEM_CurrentHandle = 1;
    g_AGO2_MEM_NumberOfFreeZones = 1;
    g_AGO2_MEM_FreeZones[0].pStart = (int)g_AGO2_Main_Memory;
    g_AGO2_MEM_FreeZones[0].pEnd = (int)&g_AGO2_MEM_FreeZones;
    g_AGO2_MEM_NbOfAllocatedBlocs = 0;
    g_AGO2_MEM_FreeZones[0].Size = 0x100000;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ago\AGO2_Mem.c lines 251–260 */
/* addr: 0x001e0d50  size: 100 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 252
 *   +0x0008 -> line 251
 *   +0x0010 -> line 252
 *   +0x0038 -> line 254
 *   +0x0040 -> line 257
 *   +0x0048 -> line 259
 *   +0x005c -> line 260
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void AGO2_MEM_GetPointerFromHandle(unsigned int Handle)
{
    unsigned int i;
    /* TODO: decompile from asm/... */
}
