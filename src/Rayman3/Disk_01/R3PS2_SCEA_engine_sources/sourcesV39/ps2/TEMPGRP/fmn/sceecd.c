/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\fmn\sceecd.c */
/* Language: C */
/* Compiler: MW MIPS C Compiler */

#include <stddef.h>

extern int CD_ProgressCallBack;

/* Recovered aggregate layouts from MWCC debug type records. */
typedef struct stFile_ stFile_;
typedef struct anon_0 anon_0;
typedef struct anon_1 anon_1;
typedef struct SectorCache_ SectorCache_;

struct stFile_ {
    stFile_* pChild; /* +0x0 */
    unsigned int sector; /* +0x4 */
    unsigned int length; /* +0x8 */
    char name[16]; /* +0xc */
    unsigned int nb_sons; /* +0x1c */
};

struct anon_0 {
    int pos; /* +0x0 */
    int size; /* +0x4 */
};

struct anon_1 {
    unsigned char trycount; /* +0x0 */
    unsigned char spindlctrl; /* +0x1 */
    unsigned char datapattern; /* +0x2 */
    unsigned char pad; /* +0x3 */
};

struct SectorCache_ {
    unsigned long SectorNumber; /* +0x0 */
    unsigned char _extractor_padding_00[4]; /* implicitly added by extractor; +0x4..0x7 */
    char bValid; /* +0x8 */
    unsigned long lastaccess; /* +0x10 */
};

unsigned long GLOBAL_SectorAccess;
int g_NbCacheFiles;
int pRootDirCache;
stFile_ ax_FileCache[2048];
int g_NbSectRead;
SectorCache_ GLOBAL_SectorCache[16];
char GLOBAL_LoadBuffer[32768];
anon_1 CDmode;
unsigned char loadbuf[2048];
unsigned char loadbufRootDir[2048];

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\fmn\sceecd.c lines 59–59 */
/* addr: 0x00258cf0  size: 8 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 59
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void CD_SetCallBack(void* FunctionPointer)
{
    CD_ProgressCallBack = (int)FunctionPointer;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\fmn\sceecd.c lines 427–481 */
/* addr: 0x00258d00  size: 512 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 427
 *   +0x0004 -> line 439
 *   +0x0008 -> line 427
 *   +0x000c -> line 439
 *   +0x0010 -> line 427
 *   +0x002c -> line 439
 *   +0x0030 -> line 435
 *   +0x0034 -> line 439
 *   +0x003c -> line 435
 *   +0x0040 -> line 439
 *   +0x0044 -> line 440
 *   +0x0048 -> line 443
 *   +0x0054 -> line 444
 *   +0x005c -> line 446
 *   +0x0068 -> line 449
 *   +0x007c -> line 448
 *   +0x0080 -> line 449
 *   +0x00a4 -> line 450
 *   +0x00b0 -> line 454
 *   +0x00b8 -> line 453
 *   +0x00bc -> line 454
 *   +0x00c0 -> line 456
 *   +0x00cc -> line 458
 *   +0x00e4 -> line 459
 *   +0x00e8 -> line 458
 *   +0x00f0 -> line 459
 *   +0x00f8 -> line 461
 *   +0x0100 -> line 464
 *   +0x0104 -> line 461
 *   +0x0108 -> line 464
 *   +0x0110 -> line 466
 *   +0x0118 -> line 464
 *   +0x0128 -> line 466
 *   +0x0130 -> line 468
 *   +0x0140 -> line 469
 *   +0x0144 -> line 471
 *   +0x0170 -> line 472
 *   +0x019c -> line 474
 *   +0x01a8 -> line 477
 *   +0x01b0 -> line 478
 *   +0x01c8 -> line 479
 *   +0x01d8 -> line 480
 *   +0x01dc -> line 481
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
int ReadDirInCache(stFile_* pLevel)
{
    stFile_* pNewFile;
    int numSectors;
    char work[16];
    int l;
    int last;
    int first;
    int j;
    int i;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\fmn\sceecd.c lines 291–349 */
/* addr: 0x00258f00  size: 764 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 291
 *   +0x0004 -> line 303
 *   +0x0008 -> line 291
 *   +0x0028 -> line 303
 *   +0x0034 -> line 304
 *   +0x003c -> line 306
 *   +0x0124 -> line 311
 *   +0x0128 -> line 313
 *   +0x012c -> line 315
 *   +0x0130 -> line 316
 *   +0x0134 -> line 317
 *   +0x0138 -> line 319
 *   +0x0148 -> line 320
 *   +0x0178 -> line 322
 *   +0x0188 -> line 323
 *   +0x0190 -> line 325
 *   +0x0194 -> line 327
 *   +0x01a0 -> line 330
 *   +0x021c -> line 332
 *   +0x0220 -> line 334
 *   +0x0224 -> line 332
 *   +0x0228 -> line 334
 *   +0x0230 -> line 337
 *   +0x0238 -> line 343
 *   +0x02c0 -> line 344
 *   +0x02c8 -> line 346
 *   +0x02d8 -> line 349
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
int SCEECdSearchFile(anon_0* fp, char* name)
{
    int numBytes;
    int i;
    stFile_* pLevel;
    char* namePtr;
    char* workPtr;
    char work[16];
    int RootDirAlreadyLoaded;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\fmn\sceecd.c lines 101–143 */
/* addr: 0x00259200  size: 452 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 101
 *   +0x0020 -> line 106
 *   +0x0024 -> line 107
 *   +0x002c -> line 106
 *   +0x0034 -> line 109
 *   +0x0058 -> line 111
 *   +0x0070 -> line 112
 *   +0x008c -> line 113
 *   +0x0098 -> line 115
 *   +0x00a8 -> line 116
 *   +0x00ac -> line 117
 *   +0x00b0 -> line 116
 *   +0x00b4 -> line 118
 *   +0x00bc -> line 120
 *   +0x00d8 -> line 123
 *   +0x00dc -> line 122
 *   +0x00e0 -> line 123
 *   +0x00e4 -> line 124
 *   +0x00e8 -> line 125
 *   +0x00f8 -> line 131
 *   +0x0100 -> line 132
 *   +0x0130 -> line 133
 *   +0x0138 -> line 134
 *   +0x0140 -> line 135
 *   +0x0150 -> line 137
 *   +0x0164 -> line 138
 *   +0x016c -> line 137
 *   +0x0170 -> line 138
 *   +0x0174 -> line 137
 *   +0x0178 -> line 138
 *   +0x017c -> line 140
 *   +0x0180 -> line 138
 *   +0x0184 -> line 139
 *   +0x0194 -> line 140
 *   +0x01a4 -> line 142
 *   +0x01a8 -> line 143
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
int SearchSectorCache(unsigned long sectornumber, char* pBuffer)
{
    int result;
    unsigned long MinSector;
    unsigned long MinAccess;
    int i;
    GLOBAL_SectorAccess++;
    for (i = 0; i < 16; ++i) {
        if (GLOBAL_SectorCache[i].bValid &&
            GLOBAL_SectorCache[i].SectorNumber == sectornumber) {
            memcpy(pBuffer, GLOBAL_LoadBuffer + (i << 11), 0x800);
            GLOBAL_SectorCache[i].lastaccess = GLOBAL_SectorAccess;
            return 1;
        }
    }

    MinSector = 0;
    MinAccess = GLOBAL_SectorCache[0].lastaccess;
    for (i = 1; i < 16; ++i) {
        if (GLOBAL_SectorCache[i].lastaccess < MinAccess) {
            MinSector = i;
            MinAccess = GLOBAL_SectorCache[i].lastaccess;
        }
    }

    while (!sceCdRead(sectornumber, 1,
                      GLOBAL_LoadBuffer + (MinSector << 11), &CDmode)) {
        sceCdDiskReady(0);
    }
    sceCdSync(0);
    while (sceCdGetError()) {
        sceCdDiskReady(0);
    }
    GLOBAL_SectorCache[MinSector].SectorNumber = sectornumber;
    GLOBAL_SectorCache[MinSector].bValid = 1;
    GLOBAL_SectorCache[MinSector].lastaccess = GLOBAL_SectorAccess;
    memcpy(pBuffer, GLOBAL_LoadBuffer + (MinSector << 11), 0x800);
    return 1;
}
