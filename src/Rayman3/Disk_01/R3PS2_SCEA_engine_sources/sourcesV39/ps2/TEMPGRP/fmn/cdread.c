/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\fmn\cdread.c */
/* Language: C */
/* Compiler: MW MIPS C Compiler */

#include <stddef.h>

/* Recovered aggregate layouts from MWCC debug type records. */
typedef struct _CD_FILE_Internal_ _CD_FILE_Internal_;
typedef struct anon_0 anon_0;
typedef struct anon_1 anon_1;

struct _CD_FILE_Internal_ {
    unsigned int FirstLogicalSector; /* +0x0 */
    int FileSize; /* +0x4 */
    int CurrentPosition; /* +0x8 */
    unsigned int Pad; /* +0xc */
};

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
static _CD_FILE_Internal_ gs_CD_Files[20];
static unsigned char gs_CD_Buffer[32768];

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\fmn\cdread.c lines 892–935 */
/* addr: 0x00258540  size: 372 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 892
 *   +0x0004 -> line 899
 *   +0x0008 -> line 892
 *   +0x0014 -> line 899
 *   +0x0024 -> line 900
 *   +0x002c -> line 902
 *   +0x0030 -> line 904
 *   +0x0044 -> line 905
 *   +0x0050 -> line 907
 *   +0x0054 -> line 905
 *   +0x0060 -> line 907
 *   +0x0078 -> line 908
 *   +0x0080 -> line 913
 *   +0x0090 -> line 915
 *   +0x0094 -> line 917
 *   +0x00b0 -> line 919
 *   +0x00b8 -> line 920
 *   +0x00d0 -> line 921
 *   +0x00e0 -> line 922
 *   +0x00ec -> line 923
 *   +0x00f8 -> line 924
 *   +0x0108 -> line 926
 *   +0x0118 -> line 929
 *   +0x012c -> line 930
 *   +0x0134 -> line 931
 *   +0x014c -> line 932
 *   +0x0158 -> line 935
 *   +0x015c -> line 934
 *   +0x0160 -> line 935
 *   +0x0164 -> line 934
 *   +0x0168 -> line 935
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void FMN_SCE_ConvertPathDos2Unix(char* buffer)
{
    char* p_cConverted;
    char* p_cToConvert;
    char s_szFileName[512];
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\fmn\cdread.c lines 949–949 */
/* addr: 0x002586c0  size: 8 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 949
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
int PS2_fn_iGetCDMediaMode(void)
{
    return 2;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\fmn\cdread.c lines 914–916 */
/* addr: 0x002586d0  size: 36 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 914
 *   +0x0008 -> line 915
 *   +0x0018 -> line 916
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
int CD_OpenFileWithNameConversion(char* RawFileName)
{
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\fmn\cdread.c lines 455–456 */
/* addr: 0x00258700  size: 24 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 455
 *   +0x0010 -> line 456
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void CD_Close(int FileHandle)
{
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\fmn\cdread.c lines 288–450 */
/* addr: 0x00258720  size: 620 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 288
 *   +0x0004 -> line 304
 *   +0x0008 -> line 288
 *   +0x000c -> line 304
 *   +0x0010 -> line 288
 *   +0x0014 -> line 304
 *   +0x0018 -> line 288
 *   +0x001c -> line 304
 *   +0x0020 -> line 288
 *   +0x003c -> line 304
 *   +0x0040 -> line 315
 *   +0x0060 -> line 317
 *   +0x0064 -> line 320
 *   +0x0074 -> line 322
 *   +0x007c -> line 325
 *   +0x0094 -> line 326
 *   +0x00a4 -> line 327
 *   +0x00a8 -> line 328
 *   +0x00ac -> line 329
 *   +0x00bc -> line 330
 *   +0x00cc -> line 332
 *   +0x00d0 -> line 354
 *   +0x00d4 -> line 342
 *   +0x00d8 -> line 351
 *   +0x00dc -> line 346
 *   +0x00e0 -> line 352
 *   +0x00e4 -> line 341
 *   +0x00e8 -> line 354
 *   +0x00ec -> line 350
 *   +0x00f0 -> line 343
 *   +0x00f4 -> line 344
 *   +0x00f8 -> line 346
 *   +0x00fc -> line 356
 *   +0x0104 -> line 363
 *   +0x0110 -> line 366
 *   +0x0118 -> line 369
 *   +0x011c -> line 370
 *   +0x0120 -> line 376
 *   +0x0128 -> line 383
 *   +0x012c -> line 375
 *   +0x0130 -> line 377
 *   +0x0134 -> line 383
 *   +0x013c -> line 384
 *   +0x015c -> line 390
 *   +0x0168 -> line 394
 *   +0x0170 -> line 395
 *   +0x0194 -> line 404
 *   +0x01a0 -> line 406
 *   +0x01a8 -> line 409
 *   +0x01b0 -> line 411
 *   +0x01b8 -> line 413
 *   +0x01cc -> line 415
 *   +0x01d4 -> line 416
 *   +0x01d8 -> line 418
 *   +0x01e0 -> line 433
 *   +0x01f0 -> line 422
 *   +0x01f4 -> line 433
 *   +0x01fc -> line 435
 *   +0x0200 -> line 436
 *   +0x0204 -> line 434
 *   +0x0208 -> line 438
 *   +0x020c -> line 435
 *   +0x0214 -> line 438
 *   +0x0224 -> line 448
 *   +0x0230 -> line 449
 *   +0x0234 -> line 448
 *   +0x023c -> line 450
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
int CD_Read(int FileHandle, char* Buffer, int Size)
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
    _CD_FILE_Internal_* p;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\fmn\cdread.c lines 252–269 */
/* addr: 0x00258990  size: 136 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 252
 *   +0x000c -> line 253
 *   +0x0030 -> line 256
 *   +0x0038 -> line 257
 *   +0x0040 -> line 260
 *   +0x0048 -> line 262
 *   +0x0058 -> line 265
 *   +0x0068 -> line 266
 *   +0x0080 -> line 269
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
unsigned int CD_Seek(int FileHandle, int Position, int WhereFrom)
{
    _CD_FILE_Internal_* p;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\fmn\cdread.c lines 244–245 */
/* addr: 0x00258a20  size: 24 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 244
 *   +0x0010 -> line 245
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
unsigned int CD_Length(int FileHandle)
{
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\fmn\cdread.c lines 82–234 */
/* addr: 0x00258a40  size: 508 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 82
 *   +0x0004 -> line 98
 *   +0x0008 -> line 82
 *   +0x000c -> line 98
 *   +0x0010 -> line 82
 *   +0x0028 -> line 98
 *   +0x0050 -> line 100
 *   +0x005c -> line 103
 *   +0x0064 -> line 105
 *   +0x006c -> line 108
 *   +0x0078 -> line 118
 *   +0x0080 -> line 120
 *   +0x008c -> line 121
 *   +0x0090 -> line 120
 *   +0x0098 -> line 121
 *   +0x00b0 -> line 122
 *   +0x00b4 -> line 123
 *   +0x00c8 -> line 124
 *   +0x00d0 -> line 129
 *   +0x00e4 -> line 135
 *   +0x00fc -> line 137
 *   +0x0110 -> line 145
 *   +0x0120 -> line 148
 *   +0x012c -> line 149
 *   +0x0130 -> line 150
 *   +0x0134 -> line 149
 *   +0x0138 -> line 150
 *   +0x0140 -> line 153
 *   +0x0158 -> line 155
 *   +0x0168 -> line 159
 *   +0x0174 -> line 163
 *   +0x018c -> line 169
 *   +0x0194 -> line 170
 *   +0x01a0 -> line 173
 *   +0x01b8 -> line 175
 *   +0x01c0 -> line 178
 *   +0x01c8 -> line 182
 *   +0x01cc -> line 233
 *   +0x01d0 -> line 182
 *   +0x01d4 -> line 183
 *   +0x01dc -> line 184
 *   +0x01e0 -> line 234
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
int CD_OpenFile(char* FileName)
{
    int Count;
    int Ret;
    char TempString2[1024];
    int i;
    char* pName;
    char pTempName[1024];
    anon_1 SearchHeaderSpecial;
    _CD_FILE_Internal_* p;
    int Handle;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\fmn\cdread.c lines 64–79 */
/* addr: 0x00258c40  size: 172 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 64
 *   +0x0008 -> line 69
 *   +0x0010 -> line 71
 *   +0x0018 -> line 72
 *   +0x0020 -> line 73
 *   +0x0028 -> line 75
 *   +0x0030 -> line 77
 *   +0x0084 -> line 78
 *   +0x0088 -> line 77
 *   +0x0090 -> line 78
 *   +0x00a0 -> line 79
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void CD_Init(void)
{
    int Handle;
    /* TODO: decompile from asm/... */
}
