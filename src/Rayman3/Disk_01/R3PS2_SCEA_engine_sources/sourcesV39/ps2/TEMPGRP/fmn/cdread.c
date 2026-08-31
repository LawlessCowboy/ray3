/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\fmn\cdread.c */
/* Language: C */
/* Compiler: MW MIPS C Compiler */

#include <stddef.h>

/* Recovered aggregate layouts from MWCC debug type records. */
typedef struct anon_0 anon_0;
typedef struct anon_1 anon_1;

struct anon_0 {
    unsigned char trycount; /* +0x0 */
    unsigned char spindlctrl; /* +0x1 */
    unsigned char datapattern; /* +0x2 */
    unsigned char pad; /* +0x3 */
};

struct anon_1 {
    int pos; /* +0x0 */
    int size; /* +0x4 */
};

int CD_ProgressCallBack;
int g_bUsingCache;
static /* array */ int gs_CD_Files[20];
static unsigned char gs_CD_Buffer[32768];

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\fmn\cdread.c lines 899–934 */
/* addr: 0x00258540  size: 372 bytes */
void FMN_SCE_ConvertPathDos2Unix(char* buffer)
{
    char* p_cConverted;
    char* p_cToConvert;
    char s_szFileName[512];
    /* line map: */
    /*   line 899 @ +0x000 */
    /*   line 899 @ +0x000 */
    /*   line 902 @ +0x000 */
    /*   line 905 @ +0x000 */
    /*   line 905 @ +0x000 */
    /*   line 908 @ +0x000 */
    /*   line 915 @ +0x000 */
    /*   line 919 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* addr: 0x002586c0  size: 8 bytes */
int PS2_fn_iGetCDMediaMode(void)
{
    return 2;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\fmn\cdread.c lines 915–915 */
/* addr: 0x002586d0  size: 36 bytes */
/*type_0x00*/ int CD_OpenFileWithNameConversion(char* RawFileName)
{
    /* line map: */
    /*   line 915 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\fmn\cdread.c lines 456–456 */
/* addr: 0x00258700  size: 24 bytes */
void CD_Close(int FileHandle)
{
    /* line map: */
    /*   line 456 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\fmn\cdread.c lines 304–448 */
/* addr: 0x00258720  size: 620 bytes */
int CD_Read(int FileHandle, char* Buffer, int Size, /* function pointer */ int p)
{
    unsigned int Toto;
    int TempSizeOfTheChunkIHaveJustRead;
    char* AlignedBuffer;
    int NbSectorsToReadThisTime;
    int SizeIHaveRead;
    anon_0 ReadMode;
    int FirstSectorToRead;
    int SizeOfTheChunkIHaveJustRead;
    int NumberOfSectorsIHaveRead;
    int NumberOfSectorsToRead;
    int SizeToRead;
    int OffsetInDestBuffer;
    int OffsetInSectorBuffer;
    /* line map: */
    /*   line 304 @ +0x000 */
    /*   line 304 @ +0x000 */
    /*   line 304 @ +0x000 */
    /*   line 304 @ +0x000 */
    /*   line 304 @ +0x000 */
    /*   line 317 @ +0x000 */
    /*   line 322 @ +0x000 */
    /*   line 326 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\fmn\cdread.c lines 253–266 */
/* addr: 0x00258990  size: 136 bytes */
unsigned int CD_Seek(int FileHandle, int Position, int WhereFrom, /* function pointer */ int p)
{
    /* line map: */
    /*   line 253 @ +0x000 */
    /*   line 257 @ +0x000 */
    /*   line 262 @ +0x000 */
    /*   line 266 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\fmn\cdread.c lines 245–245 */
/* addr: 0x00258a20  size: 24 bytes */
unsigned int CD_Length(int FileHandle)
{
    /* line map: */
    /*   line 245 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\fmn\cdread.c lines 98–234 */
/* addr: 0x00258a40  size: 508 bytes */
int CD_OpenFile(char* FileName, /* function pointer */ int p)
{
    int Count;
    int Ret;
    char TempString2[1024];
    int i;
    char* pName;
    char pTempName[1024];
    anon_1 SearchHeaderSpecial;
    int Handle;
    /* line map: */
    /*   line 98 @ +0x000 */
    /*   line 98 @ +0x000 */
    /*   line 98 @ +0x000 */
    /*   line 103 @ +0x000 */
    /*   line 108 @ +0x000 */
    /*   line 120 @ +0x000 */
    /*   line 120 @ +0x000 */
    /*   line 122 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\fmn\cdread.c lines 69–78 */
/* addr: 0x00258c40  size: 172 bytes */
void CD_Init(void)
{
    int Handle;
    /* line map: */
    /*   line 69 @ +0x000 */
    /*   line 72 @ +0x000 */
    /*   line 75 @ +0x000 */
    /*   line 78 @ +0x000 */
    /*   line 78 @ +0x000 */
    /* TODO: decompile from asm/... */
}
