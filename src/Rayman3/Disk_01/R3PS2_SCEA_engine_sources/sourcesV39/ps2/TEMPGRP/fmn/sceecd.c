/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\fmn\sceecd.c */
/* Language: C */
/* Compiler: MW MIPS C Compiler */

#include <stddef.h>

/* Recovered aggregate layouts from MWCC debug type records. */
typedef struct stFile_ stFile_;
typedef struct anon_0 anon_0;
typedef struct anon_1 anon_1;
typedef struct SectorCache_ SectorCache_;

struct stFile_ {
    int pChild; /* +0x0 */
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

/* addr: 0x00258cf0  size: 8 bytes */
void CD_SetCallBack(void* FunctionPointer)
{
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\fmn\sceecd.c lines 439–480 */
/* addr: 0x00258d00  size: 512 bytes */
int ReadDirInCache(stFile_* pLevel, stFile_* pNewFile)
{
    int numSectors;
    char work[16];
    int l;
    int last;
    int first;
    int j;
    int i;
    /* line map: */
    /*   line 439 @ +0x000 */
    /*   line 439 @ +0x000 */
    /*   line 439 @ +0x000 */
    /*   line 439 @ +0x000 */
    /*   line 439 @ +0x000 */
    /*   line 443 @ +0x000 */
    /*   line 446 @ +0x000 */
    /*   line 448 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\fmn\sceecd.c lines 303–346 */
/* addr: 0x00258f00  size: 764 bytes */
int SCEECdSearchFile(anon_0* fp, char* name, stFile_* pLevel)
{
    int numBytes;
    int i;
    char* namePtr;
    char* workPtr;
    char work[16];
    int RootDirAlreadyLoaded;
    /* line map: */
    /*   line 303 @ +0x000 */
    /*   line 303 @ +0x000 */
    /*   line 306 @ +0x000 */
    /*   line 313 @ +0x000 */
    /*   line 316 @ +0x000 */
    /*   line 319 @ +0x000 */
    /*   line 322 @ +0x000 */
    /*   line 325 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\fmn\sceecd.c lines 106–143 */
/* addr: 0x00259200  size: 452 bytes */
int SearchSectorCache(unsigned long sectornumber, char* pBuffer)
{
    int result;
    unsigned long MinSector;
    unsigned long MinAccess;
    int i;
    /* line map: */
    /*   line 106 @ +0x000 */
    /*   line 106 @ +0x000 */
    /*   line 111 @ +0x000 */
    /*   line 113 @ +0x000 */
    /*   line 116 @ +0x000 */
    /*   line 116 @ +0x000 */
    /*   line 120 @ +0x000 */
    /*   line 122 @ +0x000 */
    /* TODO: decompile from asm/... */
}
