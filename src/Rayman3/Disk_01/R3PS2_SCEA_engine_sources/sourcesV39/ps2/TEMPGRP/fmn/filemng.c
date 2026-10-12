/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\fmn\filemng.c */
/* Language: C */
/* Compiler: MW MIPS C Compiler */

#include <stddef.h>
#include "r3/FIL.h"

extern unsigned char g_ucFILModuleId;
extern FIL_tdstInternalGeneral_ g_stInternalGeneral;
extern unsigned char Erm_fn_ucInitErrMsg(unsigned char);
extern void GLI_PrintDebugString(void);
extern int sceCdDiskReady(int);
extern void FMN_SCE_ConvertPathDos2Unix(char*);

/* Recovered aggregate layouts from MWCC debug type records. */
typedef struct anon_0 anon_0;
typedef struct stSCEFile stSCEFile;
typedef struct anon_1 anon_1;

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

unsigned char g_ucFMNModuleId;
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

void FIL_fn_vFirstInit(void)
{
    if (g_ucFILModuleId == 255)
        g_ucFILModuleId = Erm_fn_ucInitErrMsg(g_ucFILModuleId);
    g_stInternalGeneral.ucDisplayInformation = 255;
}

char* FMN_SCE_AddBaseDirectory(char* buffer)
{
    static char s_szFileName[256];
    strcpy(s_szFileName, buffer);
    return s_szFileName;
}

void FMN_SCE_ConvertPath2DVD(char* buffer)
{
    GLI_PrintDebugString();
    sceCdDiskReady(0);
    FMN_SCE_ConvertPathDos2Unix(buffer);
}
