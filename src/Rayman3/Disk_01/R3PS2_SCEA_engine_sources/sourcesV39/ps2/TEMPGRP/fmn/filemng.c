/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\fmn\filemng.c */
/* Language: C */
/* Compiler: MW MIPS C Compiler */

#include <stddef.h>

/* Recovered aggregate layouts from MWCC debug type records. */
typedef struct anon_0 anon_0;
typedef struct stSCEFile stSCEFile;
typedef struct anon_1 anon_1;
typedef struct FIL_tdstInternalGeneral_ FIL_tdstInternalGeneral_;

struct anon_0 {
    int BaseNameStart; /* +0x0 */
    int Path; /* +0x4 */
};

struct stSCEFile {
    int pcBuffer; /* +0x0 */
    int iPos; /* +0x4 */
    int iLen; /* +0x8 */
    int iIsUsed; /* +0xc */
    char name[1024]; /* +0x10 */
    int iLastUsed; /* +0x410 */
};

struct anon_1 {
    char ax_cPhysicBuffer[2080]; /* +0x0 */
    int p_cBuffer; /* +0x820 */
    int lBufferLength; /* +0x824 */
    int lBufferStartPosition; /* +0x828 */
    int lBufferIndex; /* +0x82c */
    int pstHandle; /* +0x830 */
    int lFilePosition; /* +0x834 */
    int lFileSize; /* +0x838 */
    int p_lEntries; /* +0x83c */
};

struct FIL_tdstInternalGeneral_ {
    unsigned char ucDisplayInformation;
};

unsigned char g_ucFILModuleId;
extern FIL_tdstInternalGeneral_ g_stInternalGeneral;
static int gs_lTotalSize;
static int gs_iUseCounter;
unsigned int BitLongCount;
unsigned char BitCount;
unsigned int BitLong;
unsigned int BitLongArray[16384];
stSCEFile g_a_stSCEFile[64];
char g_cCDResetEnable;
int FMN_ax_lFileIsOpened[8];
anon_1 FMN_ax_stFiles[8];

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\fmn\filemng.c lines 21–24 */
/* addr: 0x00258490  size: 56 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 21
 *   +0x0004 -> line 22
 *   +0x0008 -> line 21
 *   +0x000c -> line 22
 *   +0x0024 -> line 23
 *   +0x002c -> line 24
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void FIL_fn_vFirstInit(void)
{
    if (g_ucFILModuleId == 255)
        g_ucFILModuleId = Erm_fn_ucInitErrMsg(g_ucFILModuleId);
    g_stInternalGeneral.ucDisplayInformation = 255;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\fmn\filemng.c lines 959–1007 */
/* addr: 0x002584d0  size: 44 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0004 -> line 959
 *   +0x0008 -> line 1002
 *   +0x000c -> line 959
 *   +0x0010 -> line 1002
 *   +0x0018 -> line 1007
 *   +0x001c -> line 1006
 *   +0x0024 -> line 1007
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void FMN_SCE_AddBaseDirectory(char* buffer)
{
    char s_szFileName[256];
    strcpy(s_szFileName, buffer);
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\fmn\filemng.c lines 940–944 */
/* addr: 0x00258500  size: 52 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 940
 *   +0x000c -> line 941
 *   +0x0014 -> line 942
 *   +0x001c -> line 943
 *   +0x0024 -> line 944
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void FMN_SCE_ConvertPath2DVD(char* buffer)
{
    /* TODO: decompile from asm/... */
}
