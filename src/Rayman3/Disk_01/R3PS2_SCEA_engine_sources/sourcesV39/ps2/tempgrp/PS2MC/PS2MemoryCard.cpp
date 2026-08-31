/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\tempgrp\PS2MC\PS2MemoryCard.cpp */
/* Language: C */
/* Compiler: MW MIPS C Compiler */

#include <stddef.h>

/* Recovered aggregate layouts from MWCC debug type records. */
typedef struct MC_tdstFileEntry MC_tdstFileEntry;
typedef struct PS2MC_tdstIconDescription PS2MC_tdstIconDescription;
typedef struct sceMcTblGetDir sceMcTblGetDir;
typedef struct sceCdCLOCK sceCdCLOCK;
typedef struct sceMcIconSys sceMcIconSys;

struct MC_tdstFileEntry {
    unsigned int Reserved_Key; /* +0x0 */
    unsigned int Reserved_Key2; /* +0x4 */
    char Name[8]; /* +0x8 */
    char DateTime[26]; /* +0x10 */
    unsigned int ulScore; /* +0x2c */
    unsigned int ulNbCage; /* +0x30 */
};

struct PS2MC_tdstIconDescription {
    int szFileNameRead; /* +0x0 */
    int szFileNameSave; /* +0x4 */
    unsigned int u32Size; /* +0x8 */
    int pData; /* +0xc */
};

struct sceMcTblGetDir {
    /* aggregate */ int _Create; /* +0x0 */
    /* aggregate */ int _Modify; /* +0x8 */
    unsigned int FileSizeByte; /* +0x10 */
    unsigned short AttrFile; /* +0x14 */
    unsigned short Reserve1; /* +0x16 */
    unsigned int Reserve2; /* +0x18 */
    unsigned int PdaAplNo; /* +0x1c */
    unsigned char EntryName[32]; /* +0x20 */
};

struct sceCdCLOCK {
    unsigned char stat; /* +0x0 */
    unsigned char second; /* +0x1 */
    unsigned char minute; /* +0x2 */
    unsigned char hour; /* +0x3 */
    unsigned char pad; /* +0x4 */
    unsigned char day; /* +0x5 */
    unsigned char month; /* +0x6 */
    unsigned char year; /* +0x7 */
};

struct sceMcIconSys {
    unsigned char Head[4]; /* +0x0 */
    unsigned short Reserv1; /* +0x4 */
    unsigned short OffsLF; /* +0x6 */
    unsigned int Reserv2; /* +0x8 */
    unsigned int TransRate; /* +0xc */
    /* array */ int BgColor[4]; /* +0x10 */
    /* array */ int LightDir[3]; /* +0x50 */
    /* array */ int LightColor[3]; /* +0x80 */
    float Ambient[4]; /* +0xb0 */
    unsigned char TitleName[68]; /* +0xc0 */
    unsigned char FnameView[64]; /* +0x104 */
    unsigned char FnameCopy[64]; /* +0x144 */
    unsigned char FnameDel[64]; /* +0x184 */
    unsigned char Reserve3[512]; /* +0x1c4 */
};

int g_EngineHasBeenPausedBecauseOfMC;
int g_GameHasNotStartedTheFirstBootCheck;
int PS2MC_g_MemoryCardManagerOnHold;
PS2MC_tdstIconDescription PS2MC_g_IconDesc[3];
static int PS2MC_g_Manager;
static sceMcTblGetDir PS2MC_fileListTable[20];
unsigned int g_UserWarnedAboutAutoSave;
unsigned int GLI_g_ChristianSlaterMode;

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\tempgrp\PS2MC\PS2MemoryCard.cpp lines 159–163 */
/* addr: 0x00327e70  size: 68 bytes */
void TXT_PauseGameIWantToDrawThisStringNumber(int _iStringNumber)
{
    /* line map: */
    /*   line 159 @ +0x000 */
    /*   line 163 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\tempgrp\PS2MC\PS2MemoryCard.cpp lines 5543–5554 */
/* addr: 0x0032a9c0  size: 184 bytes */
int PS2MC_fn_bHasBootCheckBeenDoneYet(void)
{
    /* line map: */
    /*   line 5543 @ +0x000 */
    /*   line 5545 @ +0x000 */
    /*   line 5548 @ +0x000 */
    /*   line 5554 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\tempgrp\PS2MC\PS2MemoryCard.cpp lines 5535–5535 */
/* addr: 0x0032aa80  size: 16 bytes */
int fn_bAutoSaveFinished(void)
{
    /* line map: */
    /*   line 5535 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\tempgrp\PS2MC\PS2MemoryCard.cpp lines 5527–5527 */
/* addr: 0x0032aa90  size: 20 bytes */
void PS2MC_DisableAutoSave(void)
{
    /* line map: */
    /*   line 5527 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\tempgrp\PS2MC\PS2MemoryCard.cpp lines 5520–5520 */
/* addr: 0x0032aab0  size: 28 bytes */
void PS2MC_vClearFlag(int FlagID)
{
    /* line map: */
    /*   line 5520 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\tempgrp\PS2MC\PS2MemoryCard.cpp lines 5514–5514 */
/* addr: 0x0032aad0  size: 16 bytes */
void PS2MC_vActivateMemoryCard(void)
{
    /* line map: */
    /*   line 5514 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\tempgrp\PS2MC\PS2MemoryCard.cpp lines 5490–5490 */
/* addr: 0x0032aae0  size: 12 bytes */
int PS2MC_HasToCheckMCFull(void)
{
    /* line map: */
    /*   line 5490 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\tempgrp\PS2MC\PS2MemoryCard.cpp lines 5475–5475 */
/* addr: 0x0032aaf0  size: 64 bytes */
int PS2MC_GetCurrentMemoryCardStatus(void)
{
    /* line map: */
    /*   line 5475 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\tempgrp\PS2MC\PS2MemoryCard.cpp lines 5460–5460 */
/* addr: 0x0032ab30  size: 16 bytes */
void PS2MC_fn_pGetLoadGameBuffer(void)
{
    /* line map: */
    /*   line 5460 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\tempgrp\PS2MC\PS2MemoryCard.cpp lines 5448–5448 */
/* addr: 0x0032ab40  size: 196 bytes */
void PS2MC_fn_vLoadScreenShot(char* _pFileName, char* _pBuffer)
{
    /* line map: */
    /*   line 5448 @ +0x000 */
    /*   line 5448 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\tempgrp\PS2MC\PS2MemoryCard.cpp lines 5435–5435 */
/* addr: 0x0032ac10  size: 208 bytes */
void PS2MC_fn_vLoadGame(char* _pFileName)
{
    /* line map: */
    /*   line 5435 @ +0x000 */
    /*   line 5435 @ +0x000 */
    /*   line 5435 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\tempgrp\PS2MC\PS2MemoryCard.cpp lines 5421–5421 */
/* addr: 0x0032ace0  size: 12 bytes */
void PS2MC_GetScreenShotPreviewData(void)
{
    /* line map: */
    /*   line 5421 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\tempgrp\PS2MC\PS2MemoryCard.cpp lines 5404–5404 */
/* addr: 0x0032acf0  size: 340 bytes */
void PS2MC_fn_vSaveScreenShot(char* _pData, char* _pFileName)
{
    /* line map: */
    /*   line 5404 @ +0x000 */
    /*   line 5404 @ +0x000 */
    /*   line 5404 @ +0x000 */
    /*   line 5404 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\tempgrp\PS2MC\PS2MemoryCard.cpp lines 5389–5389 */
/* addr: 0x0032ae50  size: 64 bytes */
void PS2MC_fn_vEnablePrompts(void)
{
    /* line map: */
    /*   line 5389 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\tempgrp\PS2MC\PS2MemoryCard.cpp lines 5375–5375 */
/* addr: 0x0032ae90  size: 76 bytes */
void PS2MC_fn_vStopPrompts(void)
{
    /* line map: */
    /*   line 5375 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\tempgrp\PS2MC\PS2MemoryCard.cpp lines 5364–5364 */
/* addr: 0x0032aee0  size: 28 bytes */
unsigned int PS2MC_fn_iGetFunctionResult(/* aggregate */ int FlagID)
{
    /* line map: */
    /*   line 5364 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\tempgrp\PS2MC\PS2MemoryCard.cpp lines 5346–5346 */
/* addr: 0x0032af00  size: 116 bytes */
void PS2MC_fn_vGetMemoryCardScreenShotsHeaders(MC_tdstFileEntry* _p_stEntryArray, unsigned int _NbMaxEntries, unsigned int* _p_uiNbFilesFound)
{
    /* line map: */
    /*   line 5346 @ +0x000 */
    /*   line 5346 @ +0x000 */
    /*   line 5346 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\tempgrp\PS2MC\PS2MemoryCard.cpp lines 5328–5328 */
/* addr: 0x0032af80  size: 128 bytes */
void PS2MC_fn_vGetMemoryCardFileHeaders(MC_tdstFileEntry* _p_stEntryArray, unsigned int _NbMaxEntries, unsigned int* _p_uiNbFilesFound, int bFast)
{
    /* line map: */
    /*   line 5328 @ +0x000 */
    /*   line 5328 @ +0x000 */
    /*   line 5328 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\tempgrp\PS2MC\PS2MemoryCard.cpp lines 5275–5291 */
/* addr: 0x0032b000  size: 112 bytes */
void PS2MC_fn_vSaveGame(char* _pData, char* _pFileName, unsigned int SaveGameSizeInBytes)
{
    /* line map: */
    /*   line 5275 @ +0x000 */
    /*   line 5275 @ +0x000 */
    /*   line 5282 @ +0x000 */
    /*   line 5285 @ +0x000 */
    /*   line 5291 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\tempgrp\PS2MC\PS2MemoryCard.cpp lines 5261–5261 */
/* addr: 0x0032b070  size: 20 bytes */
void PS2MC_fn_vDoBootCheck(void)
{
    /* line map: */
    /*   line 5261 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\tempgrp\PS2MC\PS2MemoryCard.cpp lines 5236–5236 */
/* addr: 0x0032b090  size: 40 bytes */
void PS2MC_fn_vStartMachine(void)
{
    /* line map: */
    /*   line 5236 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* addr: 0x0032b0c0  size: 8 bytes */
void PS2MC_fn_vUpdateStatus(void)
{
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\tempgrp\PS2MC\PS2MemoryCard.cpp lines 5205–5209 */
/* addr: 0x0032b0d0  size: 88 bytes */
unsigned int PS2MC_fn_uiInit(unsigned int Port, unsigned int Slot)
{
    /* line map: */
    /*   line 5205 @ +0x000 */
    /*   line 5205 @ +0x000 */
    /*   line 5209 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\tempgrp\PS2MC\PS2MemoryCard.cpp lines 5038–5062 */
/* addr: 0x0032b130  size: 444 bytes */
void C_PS2MC_Manager::AutoSaveGame(char* _pData, char* _pFileName)
{
    /* line map: */
    /*   line 5038 @ +0x000 */
    /*   line 5040 @ +0x000 */
    /*   line 5043 @ +0x000 */
    /*   line 5043 @ +0x000 */
    /*   line 5043 @ +0x000 */
    /*   line 5043 @ +0x000 */
    /*   line 5045 @ +0x000 */
    /*   line 5045 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\tempgrp\PS2MC\PS2MemoryCard.cpp lines 4962–4976 */
/* addr: 0x0032b2f0  size: 448 bytes */
void C_PS2MC_Manager::SaveGame(char* _pData, char* _pFileName)
{
    /* line map: */
    /*   line 4962 @ +0x000 */
    /*   line 4963 @ +0x000 */
    /*   line 4963 @ +0x000 */
    /*   line 4963 @ +0x000 */
    /*   line 4965 @ +0x000 */
    /*   line 4968 @ +0x000 */
    /*   line 4968 @ +0x000 */
    /*   line 4968 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\tempgrp\PS2MC\PS2MemoryCard.cpp lines 4906–4909 */
/* addr: 0x0032b4b0  size: 96 bytes */
void C_PS2MC_Manager::CalculateCheckSum(char* pDataOrg, unsigned int ulSize)
{
    unsigned char* pData;
    int i;
    /* line map: */
    /*   line 4906 @ +0x000 */
    /*   line 4906 @ +0x000 */
    /*   line 4909 @ +0x000 */
    /*   line 4909 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\tempgrp\PS2MC\PS2MemoryCard.cpp lines 4399–4881 */
/* addr: 0x0032b510  size: 2672 bytes */
void C_PS2MC_Manager::ManageSaveScreenShot(void)
{
    /* aggregate */ int functionResult;
    int returnVal;
    unsigned int Value;
    /* line map: */
    /*   line 4399 @ +0x000 */
    /*   line 4409 @ +0x000 */
    /*   line 4413 @ +0x000 */
    /*   line 4415 @ +0x000 */
    /*   line 4420 @ +0x000 */
    /*   line 4422 @ +0x000 */
    /*   line 4428 @ +0x000 */
    /*   line 4430 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\tempgrp\PS2MC\PS2MemoryCard.cpp lines 4198–4382 */
/* addr: 0x0032bf80  size: 1328 bytes */
void C_PS2MC_Manager::ManageLoadScreenShot(void)
{
    /* aggregate */ int Result;
    /* aggregate */ int functionResult;
    unsigned int Value;
    int bRetry;
    signed char init;
    /* line map: */
    /*   line 4198 @ +0x000 */
    /*   line 4208 @ +0x000 */
    /*   line 4214 @ +0x000 */
    /*   line 4217 @ +0x000 */
    /*   line 4229 @ +0x000 */
    /*   line 4235 @ +0x000 */
    /*   line 4237 @ +0x000 */
    /*   line 4241 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\tempgrp\PS2MC\PS2MemoryCard.cpp lines 3977–4178 */
/* addr: 0x0032c4b0  size: 1392 bytes */
void C_PS2MC_Manager::ManageLoadGame(void)
{
    /* aggregate */ int Result;
    /* aggregate */ int functionResult;
    unsigned int Value;
    int bRetry;
    signed char init;
    /* line map: */
    /*   line 3977 @ +0x000 */
    /*   line 3987 @ +0x000 */
    /*   line 3993 @ +0x000 */
    /*   line 3996 @ +0x000 */
    /*   line 4011 @ +0x000 */
    /*   line 4015 @ +0x000 */
    /*   line 4017 @ +0x000 */
    /*   line 4020 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\tempgrp\PS2MC\PS2MemoryCard.cpp lines 3384–3957 */
/* addr: 0x0032ca20  size: 3356 bytes */
void C_PS2MC_Manager::ManageSaveGame(void)
{
    /* aggregate */ int functionResult;
    int returnVal;
    /* line map: */
    /*   line 3384 @ +0x000 */
    /*   line 3394 @ +0x000 */
    /*   line 3398 @ +0x000 */
    /*   line 3400 @ +0x000 */
    /*   line 3405 @ +0x000 */
    /*   line 3407 @ +0x000 */
    /*   line 3413 @ +0x000 */
    /*   line 3415 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\tempgrp\PS2MC\PS2MemoryCard.cpp lines 3282–3369 */
/* addr: 0x0032d740  size: 528 bytes */
void C_PS2MC_Manager::ManageAreYouSureBeforeSave(void)
{
    unsigned int Value;
    /* line map: */
    /*   line 3282 @ +0x000 */
    /*   line 3282 @ +0x000 */
    /*   line 3282 @ +0x000 */
    /*   line 3286 @ +0x000 */
    /*   line 3290 @ +0x000 */
    /*   line 3298 @ +0x000 */
    /*   line 3304 @ +0x000 */
    /*   line 3308 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\tempgrp\PS2MC\PS2MemoryCard.cpp lines 3133–3261 */
/* addr: 0x0032d950  size: 920 bytes */
void C_PS2MC_Manager::ManageAutoSaveGame(void)
{
    /* aggregate */ int functionResult;
    int returnVal;
    /* line map: */
    /*   line 3133 @ +0x000 */
    /*   line 3133 @ +0x000 */
    /*   line 3133 @ +0x000 */
    /*   line 3137 @ +0x000 */
    /*   line 3147 @ +0x000 */
    /*   line 3161 @ +0x000 */
    /*   line 3180 @ +0x000 */
    /*   line 3184 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\tempgrp\PS2MC\PS2MemoryCard.cpp lines 2886–3073 */
/* addr: 0x0032dcf0  size: 1284 bytes */
void C_PS2MC_Manager::ManageFormatting(void)
{
    /* aggregate */ int functionResult;
    int returnVal;
    unsigned int Value;
    /* line map: */
    /*   line 2886 @ +0x000 */
    /*   line 2886 @ +0x000 */
    /*   line 2897 @ +0x000 */
    /*   line 2900 @ +0x000 */
    /*   line 2901 @ +0x000 */
    /*   line 2907 @ +0x000 */
    /*   line 2912 @ +0x000 */
    /*   line 2915 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\tempgrp\PS2MC\PS2MemoryCard.cpp lines 2222–2863 */
/* addr: 0x0032e200  size: 4748 bytes */
void C_PS2MC_Manager::ManageBootCheck(void)
{
    int NameIndex;
    int NameIndex;
    /* aggregate */ int Result;
    /* aggregate */ int functionResult;
    int FirstBootCheck;
    int b_InWarningMode;
    int Copy_m_bNeedToCheckAndWarnForMCFull;
    int LoopCount;
    signed char init;
    signed char init;
    signed char init;
    /* line map: */
    /*   line 2222 @ +0x000 */
    /*   line 2224 @ +0x000 */
    /*   line 2227 @ +0x000 */
    /*   line 2227 @ +0x000 */
    /*   line 2234 @ +0x000 */
    /*   line 2240 @ +0x000 */
    /*   line 2243 @ +0x000 */
    /*   line 2246 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\tempgrp\PS2MC\PS2MemoryCard.cpp lines 2140–2206 */
/* addr: 0x0032f490  size: 452 bytes */
void C_PS2MC_Manager::ManagePreBootCheck(int LoopCount, signed char init)
{
    /* line map: */
    /*   line 2140 @ +0x000 */
    /*   line 2150 @ +0x000 */
    /*   line 2153 @ +0x000 */
    /*   line 2153 @ +0x000 */
    /*   line 2162 @ +0x000 */
    /*   line 2165 @ +0x000 */
    /*   line 2164 @ +0x000 */
    /*   line 2166 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\tempgrp\PS2MC\PS2MemoryCard.cpp lines 1933–2111 */
/* addr: 0x0032f660  size: 2324 bytes */
void C_PS2MC_Manager::ManageGetScreenshotsEntries(void)
{
    MC_tdstFileEntry Temp;
    int bSwapped;
    unsigned int Century;
    sceCdCLOCK LocalTime;
    int NameIndex;
    /* aggregate */ int functionResult;
    unsigned int i;
    /* aggregate */ int Result;
    /* line map: */
    /*   line 1933 @ +0x000 */
    /*   line 1933 @ +0x000 */
    /*   line 1933 @ +0x000 */
    /*   line 1937 @ +0x000 */
    /*   line 1948 @ +0x000 */
    /*   line 1948 @ +0x000 */
    /*   line 1948 @ +0x000 */
    /*   line 1948 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\tempgrp\PS2MC\PS2MemoryCard.cpp lines 1607–1898 */
/* addr: 0x0032ff80  size: 3444 bytes */
void C_PS2MC_Manager::ManageGetSavedGamesEntries(void)
{
    MC_tdstFileEntry Temp;
    int bSwapped;
    unsigned int Century;
    sceCdCLOCK LocalTime;
    int NameIndex;
    /* aggregate */ int functionResult;
    unsigned int i;
    /* aggregate */ int Result;
    int CurrentEntry;
    unsigned int HeaderData[4];
    signed char init;
    /* line map: */
    /*   line 1607 @ +0x000 */
    /*   line 1613 @ +0x000 */
    /*   line 1617 @ +0x000 */
    /*   line 1624 @ +0x000 */
    /*   line 1624 @ +0x000 */
    /*   line 1624 @ +0x000 */
    /*   line 1632 @ +0x000 */
    /*   line 1634 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\tempgrp\PS2MC\PS2MemoryCard.cpp lines 1425–1543 */
/* addr: 0x00330d00  size: 1016 bytes */
void C_PS2MC_Manager::ManageCheckOneDirectory(void)
{
    char TempString[1024];
    int TotalDirectorySize;
    int i;
    /* aggregate */ int functionResult;
    int returnVal;
    /* line map: */
    /*   line 1425 @ +0x000 */
    /*   line 1425 @ +0x000 */
    /*   line 1425 @ +0x000 */
    /*   line 1429 @ +0x000 */
    /*   line 1437 @ +0x000 */
    /*   line 1437 @ +0x000 */
    /*   line 1441 @ +0x000 */
    /*   line 1444 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\tempgrp\PS2MC\PS2MemoryCard.cpp lines 1072–1392 */
/* addr: 0x00331100  size: 1664 bytes */
void C_PS2MC_Manager::UpdateStatus(void)
{
    /* line map: */
    /*   line 1072 @ +0x000 */
    /*   line 1072 @ +0x000 */
    /*   line 1072 @ +0x000 */
    /*   line 1079 @ +0x000 */
    /*   line 1088 @ +0x000 */
    /*   line 1087 @ +0x000 */
    /*   line 1091 @ +0x000 */
    /*   line 1095 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\tempgrp\PS2MC\PS2MemoryCard.cpp lines 881–931 */
/* addr: 0x00331780  size: 644 bytes */
void C_PS2MC_Manager::CreateIconFile(/* function pointer */ int pIconAnimation, /* function pointer */ int pIconVtx, /* function pointer */ int pIconHeader)
{
    char* pData;
    /* line map: */
    /*   line 881 @ +0x000 */
    /*   line 883 @ +0x000 */
    /*   line 882 @ +0x000 */
    /*   line 883 @ +0x000 */
    /*   line 916 @ +0x000 */
    /*   line 916 @ +0x000 */
    /*   line 916 @ +0x000 */
    /*   line 916 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\tempgrp\PS2MC\PS2MemoryCard.cpp lines 747–808 */
/* addr: 0x00331a10  size: 432 bytes */
void C_PS2MC_Manager::FillIconSys(char* _szTitleName, char bPhoto)
{
    float ambient[4];
    float lightcol[3][4];
    float lightdir[3][4];
    int bgcolor[4][4];
    char Title[66];
    /* line map: */
    /*   line 747 @ +0x000 */
    /*   line 754 @ +0x000 */
    /*   line 760 @ +0x000 */
    /*   line 747 @ +0x000 */
    /*   line 760 @ +0x000 */
    /*   line 769 @ +0x000 */
    /*   line 766 @ +0x000 */
    /*   line 766 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\tempgrp\PS2MC\PS2MemoryCard.cpp lines 585–691 */
/* addr: 0x00331bc0  size: 528 bytes */
unsigned int C_PS2MC_Manager::Init(unsigned int _Port, unsigned int _Slot)
{
    int iLength;
    int hFile;
    unsigned int i;
    /* aggregate */ int RetValue;
    /* line map: */
    /*   line 585 @ +0x000 */
    /*   line 596 @ +0x000 */
    /*   line 596 @ +0x000 */
    /*   line 596 @ +0x000 */
    /*   line 601 @ +0x000 */
    /*   line 609 @ +0x000 */
    /*   line 613 @ +0x000 */
    /*   line 615 @ +0x000 */
    /* TODO: decompile from asm/... */
}
