/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\tempgrp\PS2MC\PS2MemoryCard.cpp */
/* Language: C */
/* Compiler: MW MIPS C Compiler */

#include <stddef.h>
extern "C" int printf(const char*, ...);
extern "C" void fn_vInterruptMenu2D(int bPauseMenu);
extern "C" char* strcpy(char*, const char*);
extern "C" char* Strcat(char*, char*);
extern "C" int strcmp(const char*, const char*);
extern "C" void* memset(void*, int, size_t);
extern "C" void* memcpy(void*, const void*, size_t);
extern "C" int sprintf(char*, const char*, ...);
extern "C" void SVG_fn_szAsciiToSJIS(char*, unsigned short, char*, unsigned short*);

/* Recovered aggregate layouts from MWCC debug type records. */
typedef struct sceMcIconSys sceMcIconSys;
typedef struct _SceeMemCardStatus _SceeMemCardStatus;
typedef struct sceMcStDateTime sceMcStDateTime;
typedef struct sceMcTblGetDir sceMcTblGetDir;
typedef struct C_PS2MC_Manager C_PS2MC_Manager;
typedef struct MC_tdstFileEntry MC_tdstFileEntry;
typedef struct PS2MC_tdstIconDescription PS2MC_tdstIconDescription;
typedef struct PS2MC_tdstIcon_ PS2MC_tdstIcon_;
typedef struct PS2MC_tdstIconVertex_ PS2MC_tdstIconVertex_;
typedef struct PS2MC_tdstIconAnimSection_ PS2MC_tdstIconAnimSection_;
typedef struct sceCdCLOCK sceCdCLOCK;
typedef struct _SceeMemCardFunctionResult _SceeMemCardFunctionResult;

typedef enum ESceeMemCardState {
    EMEMCARD_STATE_NULL = 1162040319,
    EMEMCARD_STATE_IDLE = 1162040064,
    EMEMCARD_STATE_ENTERING_STATE = 1162040065,
    EMEMCARD_STATE_FORMAT = 1162040066,
    EMEMCARD_STATE_FIND_DIR = 1162040067,
    EMEMCARD_STATE_CREATE_DIR = 1162040068,
    EMEMCARD_STATE_GET_NUM_FILES_IN_DIR = 1162040069,
    EMEMCARD_STATE_GET_DIR_LIST = 1162040070,
    EMEMCARD_STATE_FIND_FILE = 1162040071,
    EMEMCARD_STATE_LOAD_FILE = 1162040072,
    EMEMCARD_STATE_SAVE_FILE = 1162040073,
    EMEMCARD_STATE_NUM_STATES = 1162040074,
} ESceeMemCardState;

typedef enum PS2MC_tdstState {
    STATE_DO_NOTHING = 1598246144,
    STATE_ENTERING_IDLE = 1598246145,
    STATE_IDLE = 1598246146,
    STATE_WARNING = 1598246147,
    STATE_MANAGE_CHECK_ONE_DIRECTORY = 1598246148,
    STATE_BOOT_CHECK = 1598246149,
    STATE_SAVE_ARE_YOU_SURE = 1598246150,
    STATE_SAVE_GAME = 1598246151,
    STATE_AUTO_SAVE_GAME = 1598246152,
    STATE_MANAGE_FORMATTING = 1598246153,
    STATE_GET_SAVED_GAMES_ENTRIES = 1598246154,
    STATE_GET_SCREENSHOTS_ENTRIES = 1598246155,
    STATE_SAVE_SCREENSHOT = 1598246156,
    STATE_PROMPT_LAST_ERROR = 1598246157,
    STATE_LOAD_GAME = 1598246158,
    STATE_LOAD_SCREENSHOT = 1598246159,
    STATE_END = 1598246160,
} PS2MC_tdstState;

typedef enum PS2MC_tdeMessageID {
    MC_eFullMCForSavedGame = 844320768,
    MC_eFullMCForPhotos = 844320769,
    MC_eFullMCCancelSave = 844320770,
    MC_eFullMCWithSG = 844320771,
    MC_eFullMCForPhotosWithPhotos = 844320772,
    MC_eFullMCForPhotosCancelSave = 844320773,
    MC_eNoMC = 844320774,
    MC_eNoGameInMC = 844320775,
    MC_eUnformatted = 844320776,
    MC_eFormatting = 844320777,
    MC_eErrorWhileFormatting = 844320778,
    MC_eSavingGame = 844320779,
    MC_eAutoSaveFailed = 844320780,
    MC_eAutoSaving = 844320781,
    MC_eNoMCAtBoot = 844320782,
    MC_eNoMCAtBootScreenShots = 844320783,
    MC_eNoMCForSave = 844320784,
    MC_eNoMCForPhotos = 844320785,
    MC_eCancelSave = 844320786,
    MC_eCancelSaveYesNo = 844320787,
    MC_eErrorWhileSaving = 844320788,
    MC_eErrorWhileSavingMCRemoved = 844320789,
    MC_eAutoSaveExplanation = 844320790,
    MC_eRemovedMC_AutoSaveDisabled = 844320791,
    MC_eChangedMC_AutoSaveDisabled = 844320792,
    MC_eOverwriteWarning = 844320793,
    MC_eOverwriteWarningPhotos = 844320794,
    MC_eCorruptedFile = 844320795,
    MC_eLoadingData = 844320796,
    MC_eErrorWhileLoading = 844320797,
    MC_eErrorWhileLoadingBecauseMCRemoved = 844320798,
    MC_eErrorWhileLoadingBecauseMCRemovedForPhotos = 844320799,
    MC_eLoadingAreYouSure = 844320800,
    MC_eAutoSavingIconOnly = 844320801,
    MC_eAccessingMemoryCard = 844320802,
    MC_eAreYouSureFormat = 844320803,
    MC_eAreYouSureSave = 844320804,
    MC_eAreYouSureSaveNo = 844320805,
    MC_eSaveOk = 844320806,
    MC_eLoadOk = 844320807,
    MC_eEndMessage = 844320808,
} PS2MC_tdeMessageID;

typedef enum PS2MC_tdstFunctionFlags {
    FFlag_Save = 1598246144,
    FFlag_AutoSave = 1598246145,
    FFlag_GetSavedGamesHeaders = 1598246146,
    FFlag_GetScreenShotsHeaders = 1598246147,
    FFlag_BootCheck = 1598246148,
    FFlag_SaveScreenShot = 1598246149,
    FFlag_LoadGame = 1598246150,
    FFlag_LoadScreenShot = 1598246151,
    FFlag_End = 1598246152,
} PS2MC_tdstFunctionFlags;

typedef enum ESceeResult {
    E_FAIL = 1162040064,
    E_SUCCESS = 1162040065,
    E_INDETERMINATE = 1162040319,
} ESceeResult;

struct sceMcIconSys {
    unsigned char Head[4]; /* +0x0 */
    unsigned short Reserv1; /* +0x4 */
    unsigned short OffsLF; /* +0x6 */
    unsigned int Reserv2; /* +0x8 */
    unsigned int TransRate; /* +0xc */
    int BgColor[4][4]; /* +0x10 */
    float LightDir[3][4]; /* +0x50 */
    float LightColor[3][4]; /* +0x80 */
    float Ambient[4]; /* +0xb0 */
    unsigned char TitleName[68]; /* +0xc0 */
    unsigned char FnameView[64]; /* +0x104 */
    unsigned char FnameCopy[64]; /* +0x144 */
    unsigned char FnameDel[64]; /* +0x184 */
    unsigned char Reserve3[512]; /* +0x1c4 */
};

struct _SceeMemCardStatus {
    int type; /* +0x0 */
    int numFreeClusters; /* +0x4 */
    int formatStatus; /* +0x8 */
};

struct sceMcStDateTime {
    unsigned char Resv2; /* +0x0 */
    unsigned char Sec; /* +0x1 */
    unsigned char Min; /* +0x2 */
    unsigned char Hour; /* +0x3 */
    unsigned char Day; /* +0x4 */
    unsigned char Month; /* +0x5 */
    unsigned short Year; /* +0x6 */
};

struct sceMcTblGetDir {
    sceMcStDateTime _Create; /* +0x0 */
    sceMcStDateTime _Modify; /* +0x8 */
    unsigned int FileSizeByte; /* +0x10 */
    unsigned short AttrFile; /* +0x14 */
    unsigned short Reserve1; /* +0x16 */
    unsigned int Reserve2; /* +0x18 */
    unsigned int PdaAplNo; /* +0x1c */
    unsigned char EntryName[32]; /* +0x20 */
};

struct C_PS2MC_Manager {
    int m_bActivated; /* +0x0 */
    int m_bPromptIsOn; /* +0x4 */
    unsigned char m_uiState; /* +0x8 */
    unsigned char m_uiNextState; /* +0x9 */
    unsigned char m_uiIdleState; /* +0xa */
    unsigned int m_uiSubState; /* +0xc */
    unsigned char m_uiCurrentSavingProcedure; /* +0x10 */
    unsigned int m_bAutoSaveEnabled; /* +0x14 */
    unsigned int m_bMCChanged; /* +0x18 */
    unsigned int m_bMCChangedSinceLastSave; /* +0x1c */
    unsigned int m_bMemoryCardWasRemovedWhilePromptWasOff; /* +0x20 */
    unsigned int m_bNeedToWarnUserAboutAutoSaveDisabled; /* +0x24 */
    int m_bNeedToCheckAndWarnForMCFull; /* +0x28 */
    unsigned int m_Flags[8]; /* +0x2c */
    int m_dirFound; /* +0x4c */
    int m_IPausedTheEngine; /* +0x50 */
    int m_bWillHaveToRestoreMenu2D; /* +0x54 */
    int m_bAutoSaveWasntEvenTried; /* +0x58 */
    sceMcIconSys m_iconSys; /* +0x5c */
    unsigned int m_uiPort; /* +0x420 */
    unsigned int m_uiSlot; /* +0x424 */
    unsigned int m_pUserIconFile[8278]; /* +0x428 */
    unsigned int m_RequiredGameDataSize; /* +0x8580 */
    unsigned int m_RequiredPhotoSize; /* +0x8584 */
    unsigned int m_bCurrentlyWarningAboutMCRemoval; /* +0x8588 */
    unsigned char m_uiCheckDirReturnState; /* +0x858c */
    unsigned int m_uiCheckDirReturnSubState; /* +0x8590 */
    unsigned char m_uiCheckDirReturnStateError; /* +0x8594 */
    unsigned int m_uiCheckDirReturnSubStateError; /* +0x8598 */
    int m_uiCheckDirReturnedSize; /* +0x859c */
    char m_aFullFileName[64]; /* +0x85a0 */
    char m_aDirExtension[64]; /* +0x85e0 */
    char m_aFilePrefix[64]; /* +0x8620 */
    char m_aGameName[64]; /* +0x8660 */
    int m_pDataToSave; /* +0x86a0 */
    ESceeMemCardState m_MemoryCardModuleMode; /* +0x86a4 */
    _SceeMemCardStatus m_MemoryCardInternalStatus; /* +0x86a8 */
    _SceeMemCardStatus m_PreviousMemoryCardInternalStatus; /* +0x86b4 */
    MC_tdstFileEntry* m_pCurrentFileEntryArray; /* +0x86c0 */
    unsigned int m_uiCurrentNbEntriesInArray; /* +0x86c4 */
    int m_iTotalNumberOfFilesInMC; /* +0x86c8 */
    unsigned int m_uiNextEntry; /* +0x86cc */
    int m_p_uiNbFilesFound; /* +0x86d0 */
    unsigned char _extractor_padding_00[44]; /* implicitly added by extractor; +0x86d4..0x86ff */
    sceMcTblGetDir m_pDirInfo[120]; /* +0x8700 */
    int m_FastGetSavedGamesHeaders; /* +0xa500 */
    int m_bPreBootCheckWasDone; /* +0xa504 */
    int m_bPreBootCheckHadNoMC; /* +0xa508 */
    unsigned int m_ulCheckSum; /* +0xa50c */
    unsigned int m_uiBC_CurrentIndex; /* +0xa510 */
    unsigned char m_AutoSaveErrorMessage; /* PS2MC_tdeMessageID stored in one byte (next member at +0xa515); +0xa514 */
    unsigned char m_pLoadSaveBuffer[990]; /* +0xa515 */
    int m_pScreenShotLoadBuffer; /* +0xa8f4 */
    int m_bFirstBootCheckHasBeenDone; /* +0xa8f8 */
    unsigned char _extractor_padding_01[4]; /* tail padding: new allocates 0xa900 bytes; +0xa8fc..0xa8ff */
    C_PS2MC_Manager();
    void AutoSaveGame(char* _pData, char* _pFileName);
    void SaveGame(char* _pData, char* _pFileName);
    void CalculateCheckSum(char* pDataOrg, unsigned int ulSize);
    void ManageSaveScreenShot(void);
    void ManageLoadScreenShot(void);
    void ManageLoadGame(void);
    void ManageSaveGame(void);
    void ManageAreYouSureBeforeSave(void);
    void ManageAutoSaveGame(void);
    void ManageFormatting(void);
    void ManageBootCheck(void);
    void ManagePreBootCheck(void);
    void ManageGetScreenshotsEntries(void);
    void ManageGetSavedGamesEntries(void);
    void ManageCheckOneDirectory(void);
    void UpdateStatus(void);
    void CreateIconFile(void);
    void FillIconSys(char* _szTitleName, char bPhoto);
    unsigned int Init(unsigned int _Port, unsigned int _Slot);
};

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

struct PS2MC_tdstIcon_ {
    unsigned int uiVersion; /* +0x0 */
    unsigned int uiNBSP; /* +0x4 */
    unsigned int uiAttributes; /* +0x8 */
    float fBackFaceThreshold; /* +0xc */
    unsigned int nbVtx; /* +0x10 */
};

struct PS2MC_tdstIconVertex_ {
    short Pos[4]; /* +0x0 */
    short Normal[4]; /* +0x8 */
    short ST[2]; /* +0x10 */
    unsigned int Color; /* +0x14 */
};

struct PS2MC_tdstIconAnimSection_ {
    unsigned int uiNBSeq; /* +0x0 */
    unsigned int uiNbFrame; /* +0x4 */
    float fSpeed; /* +0x8 */
    unsigned int uiPlayOffset; /* +0xc */
    unsigned int uiNbKSP; /* +0x10 */
    unsigned int uiKSPID; /* +0x14 */
    unsigned int uiNBKF; /* +0x18 */
    unsigned int uiKEYS[2]; /* +0x1c */
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

struct _SceeMemCardFunctionResult {
    ESceeResult success; /* +0x0 */
    int subState; /* +0x4 */
    int libMCErrorCode; /* +0x8 */
};

int g_EngineHasBeenPausedBecauseOfMC;
int g_GameHasNotStartedTheFirstBootCheck;
PS2MC_tdstIconDescription PS2MC_g_IconDesc[3];
static int PS2MC_g_Manager;
static sceMcTblGetDir PS2MC_fileListTable[20];
unsigned int g_UserWarnedAboutAutoSave;
unsigned int GLI_g_ChristianSlaterMode;

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\tempgrp\PS2MC\PS2MemoryCard.cpp lines 158–163 */
/* addr: 0x00327e70  size: 68 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 158
 *   +0x0014 -> line 159
 *   +0x001c -> line 162
 *   +0x003c -> line 163
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
/* Shared text-entry layout recovered in TXT/DisplayText.c. */
struct _JFFTXT_ {
    int pString;
    float a3_Pos[3];
    float xTempSize;
    unsigned int ulColor;
    unsigned char ucTransparency;
    unsigned char bFrozenDisplay;
    unsigned char bOther;
    int EffectParameter;
    unsigned char ucForcedColor;
    unsigned char DestinationViewport;
    unsigned char ucDrawThisStringDuringPauseGame;
    unsigned char ucDrawThisStringDuringPauseInventory;
    unsigned char ucDrawThisStringDuringSaveGame;
};
extern "C" _JFFTXT_ g_JFFTXT[200];

void TXT_PauseGameIWantToDrawThisStringNumber(int _iStringNumber)
{
    _JFFTXT_* p;
    if (_iStringNumber < 0 || _iStringNumber >= 200)
        return;
    p = &g_JFFTXT[_iStringNumber]; p->ucDrawThisStringDuringPauseGame = 1;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\tempgrp\PS2MC\PS2MemoryCard.cpp lines 5542–5554 */
/* addr: 0x0032a9c0  size: 184 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 5542
 *   +0x000c -> line 5543
 *   +0x0018 -> line 5546
 *   +0x0020 -> line 5545
 *   +0x0024 -> line 5546
 *   +0x0088 -> line 5548
 *   +0x0094 -> line 5552
 *   +0x00a8 -> line 5554
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
int PS2MC_fn_bHasBootCheckBeenDoneYet(void)
{
    return ((C_PS2MC_Manager*)PS2MC_g_Manager)->m_bFirstBootCheckHasBeenDone;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\tempgrp\PS2MC\PS2MemoryCard.cpp lines 5533–5535 */
/* addr: 0x0032aa80  size: 16 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 5533
 *   +0x0008 -> line 5535
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
int fn_bAutoSaveFinished(void)
{
    return ((C_PS2MC_Manager*)PS2MC_g_Manager)->m_Flags[1] != 0;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\tempgrp\PS2MC\PS2MemoryCard.cpp lines 5526–5527 */
/* addr: 0x0032aa90  size: 20 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 5526
 *   +0x000c -> line 5527
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void PS2MC_DisableAutoSave(void)
{
    C_PS2MC_Manager* pManager = (C_PS2MC_Manager*)PS2MC_g_Manager;
    pManager->m_bAutoSaveEnabled = 0;
    g_UserWarnedAboutAutoSave = 0;
    pManager->m_bAutoSaveWasntEvenTried = 0;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\tempgrp\PS2MC\PS2MemoryCard.cpp lines 5519–5520 */
/* addr: 0x0032aab0  size: 28 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 5519
 *   +0x0014 -> line 5520
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void PS2MC_vClearFlag(int FlagID)
{
    C_PS2MC_Manager* pManager;
    pManager = (C_PS2MC_Manager*)PS2MC_g_Manager;
    pManager->m_Flags[FlagID] = -1;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\tempgrp\PS2MC\PS2MemoryCard.cpp lines 5512–5514 */
/* addr: 0x0032aad0  size: 16 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 5512
 *   +0x0008 -> line 5514
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void PS2MC_vActivateMemoryCard(void)
{
    ((C_PS2MC_Manager*)PS2MC_g_Manager)->m_bActivated = 1;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\tempgrp\PS2MC\PS2MemoryCard.cpp lines 5489–5490 */
/* addr: 0x0032aae0  size: 12 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 5489
 *   +0x0004 -> line 5490
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
int PS2MC_HasToCheckMCFull(void)
{
    return ((C_PS2MC_Manager*)PS2MC_g_Manager)->m_bNeedToCheckAndWarnForMCFull;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\tempgrp\PS2MC\PS2MemoryCard.cpp lines 5474–5475 */
/* addr: 0x0032aaf0  size: 64 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 5474
 *   +0x0038 -> line 5475
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
int PS2MC_GetCurrentMemoryCardStatus(void)
{
    C_PS2MC_Manager* pManager = (C_PS2MC_Manager*)PS2MC_g_Manager; if (*(int*)&pManager->m_MemoryCardInternalStatus != -10) return pManager->m_MemoryCardInternalStatus.type; else return pManager->m_PreviousMemoryCardInternalStatus.type;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\tempgrp\PS2MC\PS2MemoryCard.cpp lines 5459–5460 */
/* addr: 0x0032ab30  size: 16 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 5459
 *   +0x0008 -> line 5460
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void* PS2MC_fn_pGetLoadGameBuffer(void)
{
    return (void*)((char*)PS2MC_g_Manager + 0xA515);
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\tempgrp\PS2MC\PS2MemoryCard.cpp lines 5447–5449 */
/* addr: 0x0032ab40  size: 196 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 5447
 *   +0x0004 -> line 5448
 *   +0x0008 -> line 5447
 *   +0x0020 -> line 5448
 *   +0x00ac -> line 5449
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void PS2MC_fn_vLoadScreenShot(char* _pFileName, char* _pBuffer)
{
    C_PS2MC_Manager* pManager = (C_PS2MC_Manager*)PS2MC_g_Manager; pManager->m_Flags[7] = 0; strcpy(pManager->m_aGameName, _pFileName); strcpy(pManager->m_aDirExtension, "P"); Strcat(pManager->m_aDirExtension, _pFileName); strcpy(pManager->m_aFullFileName, pManager->m_aFilePrefix); Strcat(pManager->m_aFullFileName, "P"); Strcat(pManager->m_aFullFileName, _pFileName); pManager->m_pScreenShotLoadBuffer = (int)_pBuffer; fn_vInterruptMenu2D(1); pManager->m_uiIdleState = (unsigned char)STATE_LOAD_SCREENSHOT;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\tempgrp\PS2MC\PS2MemoryCard.cpp lines 5434–5436 */
/* addr: 0x0032ac10  size: 208 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 5434
 *   +0x0004 -> line 5435
 *   +0x0008 -> line 5434
 *   +0x000c -> line 5435
 *   +0x0010 -> line 5434
 *   +0x0018 -> line 5435
 *   +0x00bc -> line 5436
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void PS2MC_fn_vLoadGame(char* _pFileName)
{
    C_PS2MC_Manager* pManager = (C_PS2MC_Manager*)PS2MC_g_Manager; if (!strcmp(_pFileName, "PSONE")) GLI_g_ChristianSlaterMode = 1; else GLI_g_ChristianSlaterMode = 0; pManager->m_Flags[6] = 0; strcpy(pManager->m_aGameName, _pFileName); strcpy(pManager->m_aDirExtension, "S"); Strcat(pManager->m_aDirExtension, _pFileName); strcpy(pManager->m_aFullFileName, pManager->m_aFilePrefix); Strcat(pManager->m_aFullFileName, "S"); Strcat(pManager->m_aFullFileName, _pFileName); fn_vInterruptMenu2D(1); pManager->m_uiIdleState = (unsigned char)STATE_LOAD_GAME;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\tempgrp\PS2MC\PS2MemoryCard.cpp lines 5420–5421 */
/* addr: 0x0032ace0  size: 12 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 5420
 *   +0x0004 -> line 5421
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void* PS2MC_GetScreenShotPreviewData(void)
{
    return (void*)((char*)PS2MC_g_Manager + 0x580);
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\tempgrp\PS2MC\PS2MemoryCard.cpp lines 5403–5405 */
/* addr: 0x0032acf0  size: 340 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 5403
 *   +0x0004 -> line 5404
 *   +0x0008 -> line 5403
 *   +0x000c -> line 5404
 *   +0x0010 -> line 5403
 *   +0x0014 -> line 5404
 *   +0x0018 -> line 5403
 *   +0x001c -> line 5404
 *   +0x0140 -> line 5405
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void PS2MC_fn_vSaveScreenShot(char* _pData, char* _pFileName)
{
    C_PS2MC_Manager* pManager = (C_PS2MC_Manager*)PS2MC_g_Manager; pManager->m_pDataToSave = (int)_pData; pManager->CalculateCheckSum((char*)pManager->m_pDataToSave, 0x14004); char* pData = (char*)pManager->m_pDataToSave; pData[0x14000] = pManager->m_ulCheckSum >> 24; pData[0x14001] = pManager->m_ulCheckSum >> 16; pData[0x14002] = pManager->m_ulCheckSum >> 8; pData[0x14003] = pManager->m_ulCheckSum; pManager->m_Flags[5] = 0; strcpy(pManager->m_aGameName, _pFileName); strcpy(pManager->m_aDirExtension, "P"); Strcat(pManager->m_aDirExtension, _pFileName); strcpy(pManager->m_aFullFileName, pManager->m_aFilePrefix); Strcat(pManager->m_aFullFileName, "P"); Strcat(pManager->m_aFullFileName, _pFileName); fn_vInterruptMenu2D(1); pManager->m_uiCurrentSavingProcedure = (unsigned char)STATE_SAVE_SCREENSHOT; pManager->m_uiIdleState = (unsigned char)STATE_SAVE_ARE_YOU_SURE;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\tempgrp\PS2MC\PS2MemoryCard.cpp lines 5388–5389 */
/* addr: 0x0032ae50  size: 64 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 5388
 *   +0x0038 -> line 5389
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void PS2MC_fn_vEnablePrompts(void)
{
    C_PS2MC_Manager* pManager = (C_PS2MC_Manager*)PS2MC_g_Manager; if (!pManager->m_bPromptIsOn) { pManager->m_bPromptIsOn = 1; pManager->m_MemoryCardInternalStatus.type = -10; pManager->m_uiState = (unsigned char)STATE_PROMPT_LAST_ERROR; pManager->m_uiSubState = 0; pManager->m_uiNextState = (unsigned char)STATE_IDLE; }
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\tempgrp\PS2MC\PS2MemoryCard.cpp lines 5374–5376 */
/* addr: 0x0032ae90  size: 76 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 5374
 *   +0x000c -> line 5375
 *   +0x003c -> line 5376
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
extern "C" void PS2MC_RemoveCurrentMessage(void);

void PS2MC_fn_vStopPrompts(void)
{
    C_PS2MC_Manager* pManager = (C_PS2MC_Manager*)PS2MC_g_Manager; PS2MC_RemoveCurrentMessage(); pManager->m_bPromptIsOn = 0; if (pManager->m_bCurrentlyWarningAboutMCRemoval) { pManager->m_bCurrentlyWarningAboutMCRemoval = 0; pManager->m_bMemoryCardWasRemovedWhilePromptWasOff = 1; }
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\tempgrp\PS2MC\PS2MemoryCard.cpp lines 5363–5364 */
/* addr: 0x0032aee0  size: 28 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 5363
 *   +0x0014 -> line 5364
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
unsigned int PS2MC_fn_iGetFunctionResult(PS2MC_tdstFunctionFlags FlagID)
{
    char* pFlags;
    int iIndex;
    /* Matching idiom for the unfolded member offset (char* base plus offset, dead scaled-index
       assignment); found by scanning matched functions. Not original source and needs cleaning up. */
    pFlags = (char*)PS2MC_g_Manager + 0x2c;
    return ((unsigned int*)pFlags)[iIndex = (unsigned int)FlagID & 0xff];
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\tempgrp\PS2MC\PS2MemoryCard.cpp lines 5345–5347 */
/* addr: 0x0032af00  size: 116 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 5345
 *   +0x0004 -> line 5346
 *   +0x0008 -> line 5345
 *   +0x000c -> line 5346
 *   +0x0010 -> line 5345
 *   +0x0014 -> line 5346
 *   +0x0064 -> line 5347
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void PS2MC_fn_vGetMemoryCardScreenShotsHeaders(MC_tdstFileEntry* _p_stEntryArray, unsigned int _NbMaxEntries, unsigned int* _p_uiNbFilesFound)
{
    C_PS2MC_Manager* pManager = (C_PS2MC_Manager*)PS2MC_g_Manager; pManager->m_pCurrentFileEntryArray = _p_stEntryArray; pManager->m_uiCurrentNbEntriesInArray = _NbMaxEntries; pManager->m_uiNextEntry = 0; pManager->m_Flags[3] = 0; pManager->m_p_uiNbFilesFound = (int)_p_uiNbFilesFound; *(unsigned int*)pManager->m_p_uiNbFilesFound = 0; fn_vInterruptMenu2D(1); pManager->m_uiIdleState = (unsigned char)STATE_GET_SCREENSHOTS_ENTRIES;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\tempgrp\PS2MC\PS2MemoryCard.cpp lines 5327–5329 */
/* addr: 0x0032af80  size: 128 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 5327
 *   +0x0004 -> line 5328
 *   +0x0008 -> line 5327
 *   +0x000c -> line 5328
 *   +0x0010 -> line 5327
 *   +0x0014 -> line 5328
 *   +0x0070 -> line 5329
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void PS2MC_fn_vGetMemoryCardFileHeaders(MC_tdstFileEntry* _p_stEntryArray, unsigned int _NbMaxEntries, unsigned int* _p_uiNbFilesFound, int bFast)
{
    C_PS2MC_Manager* pManager = (C_PS2MC_Manager*)PS2MC_g_Manager; pManager->m_FastGetSavedGamesHeaders = bFast; pManager->m_pCurrentFileEntryArray = _p_stEntryArray; pManager->m_uiCurrentNbEntriesInArray = _NbMaxEntries; pManager->m_uiNextEntry = 0; pManager->m_Flags[2] = 0; pManager->m_p_uiNbFilesFound = (int)_p_uiNbFilesFound; *(unsigned int*)pManager->m_p_uiNbFilesFound = 0; fn_vInterruptMenu2D(1); pManager->m_uiIdleState = (unsigned char)STATE_GET_SAVED_GAMES_ENTRIES;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\tempgrp\PS2MC\PS2MemoryCard.cpp lines 5274–5291 */
/* addr: 0x0032b000  size: 112 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 5274
 *   +0x0004 -> line 5275
 *   +0x0008 -> line 5274
 *   +0x0018 -> line 5275
 *   +0x0020 -> line 5277
 *   +0x0030 -> line 5282
 *   +0x0040 -> line 5284
 *   +0x004c -> line 5285
 *   +0x0054 -> line 5288
 *   +0x005c -> line 5291
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void PS2MC_fn_vSaveGame(char* _pData, char* _pFileName, unsigned int SaveGameSizeInBytes)
{
    if (SaveGameSizeInBytes != 986)
        printf("\n\n************************\nPS2MC -> CAN'T SAVE !!!\nWrong SaveGame Size\nPlease redifine PS2MC_ACTUAL_SAVED_GAME_SIZE in PS2MC\\PS2MemoryCard.cpp to %d\n\n\n", SaveGameSizeInBytes);
    C_PS2MC_Manager* pManager = (C_PS2MC_Manager*)PS2MC_g_Manager;
    if (!pManager->m_bPromptIsOn)
        pManager->AutoSaveGame(_pData, _pFileName);
    else
        pManager->SaveGame(_pData, _pFileName);
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\tempgrp\PS2MC\PS2MemoryCard.cpp lines 5260–5261 */
/* addr: 0x0032b070  size: 20 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 5260
 *   +0x000c -> line 5261
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void PS2MC_fn_vDoBootCheck(void)
{
    C_PS2MC_Manager* pManager = (C_PS2MC_Manager*)PS2MC_g_Manager;
    pManager->m_Flags[4] = 0;
    pManager->m_uiIdleState = 5;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\tempgrp\PS2MC\PS2MemoryCard.cpp lines 5235–5236 */
/* addr: 0x0032b090  size: 40 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 5235
 *   +0x0020 -> line 5236
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void PS2MC_fn_vStartMachine(void)
{
    C_PS2MC_Manager* pManager = (C_PS2MC_Manager*)PS2MC_g_Manager;
    pManager->m_MemoryCardInternalStatus.type = -10;
    pManager->m_uiState = (unsigned char)STATE_IDLE;
    pManager->m_uiSubState = 0;
    pManager->m_uiNextState = (unsigned char)STATE_IDLE;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\tempgrp\PS2MC\PS2MemoryCard.cpp lines 5223–5223 */
/* addr: 0x0032b0c0  size: 8 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 5223
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void PS2MC_fn_vUpdateStatus(void)
{
    ((C_PS2MC_Manager*)PS2MC_g_Manager)->UpdateStatus();
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\tempgrp\PS2MC\PS2MemoryCard.cpp lines 5203–5209 */
/* addr: 0x0032b0d0  size: 88 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 5203
 *   +0x0018 -> line 5205
 *   +0x0030 -> line 5208
 *   +0x0038 -> line 5205
 *   +0x003c -> line 5208
 *   +0x0044 -> line 5209
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
unsigned int PS2MC_fn_uiInit(unsigned int Port, unsigned int Slot)
{
    C_PS2MC_Manager* pManager = new C_PS2MC_Manager;
    PS2MC_g_Manager = (int)pManager;
    return pManager->Init(Port, Slot);
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\tempgrp\PS2MC\PS2MemoryCard.cpp lines 5037–5062 */
/* addr: 0x0032b130  size: 444 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 5037
 *   +0x001c -> line 5038
 *   +0x0028 -> line 5041
 *   +0x002c -> line 5040
 *   +0x0030 -> line 5041
 *   +0x0038 -> line 5043
 *   +0x003c -> line 5042
 *   +0x0040 -> line 5043
 *   +0x0044 -> line 5042
 *   +0x004c -> line 5043
 *   +0x0050 -> line 5042
 *   +0x0054 -> line 5043
 *   +0x0060 -> line 5044
 *   +0x00bc -> line 5045
 *   +0x00c0 -> line 5047
 *   +0x00c4 -> line 5045
 *   +0x00d4 -> line 5047
 *   +0x00d8 -> line 5045
 *   +0x00dc -> line 5047
 *   +0x00e0 -> line 5045
 *   +0x011c -> line 5047
 *   +0x0124 -> line 5048
 *   +0x0138 -> line 5049
 *   +0x0148 -> line 5050
 *   +0x015c -> line 5051
 *   +0x0170 -> line 5052
 *   +0x0180 -> line 5053
 *   +0x0184 -> line 5054
 *   +0x018c -> line 5057
 *   +0x0198 -> line 5059
 *   +0x01a0 -> line 5060
 *   +0x01a4 -> line 5062
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void C_PS2MC_Manager::AutoSaveGame(char* _pData, char* _pFileName)
{
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\tempgrp\PS2MC\PS2MemoryCard.cpp lines 4961–4977 */
/* addr: 0x0032b2f0  size: 448 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 4961
 *   +0x0018 -> line 4962
 *   +0x0048 -> line 4964
 *   +0x004c -> line 4963
 *   +0x0050 -> line 4964
 *   +0x0054 -> line 4963
 *   +0x005c -> line 4964
 *   +0x0060 -> line 4963
 *   +0x0064 -> line 4964
 *   +0x0070 -> line 4965
 *   +0x00cc -> line 4966
 *   +0x00d0 -> line 4968
 *   +0x00d4 -> line 4966
 *   +0x00e4 -> line 4968
 *   +0x00e8 -> line 4966
 *   +0x00ec -> line 4968
 *   +0x00f0 -> line 4966
 *   +0x012c -> line 4968
 *   +0x0134 -> line 4969
 *   +0x0148 -> line 4970
 *   +0x0158 -> line 4971
 *   +0x016c -> line 4972
 *   +0x0180 -> line 4973
 *   +0x0190 -> line 4974
 *   +0x0198 -> line 4975
 *   +0x019c -> line 4976
 *   +0x01a0 -> line 4975
 *   +0x01a4 -> line 4976
 *   +0x01a8 -> line 4977
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void C_PS2MC_Manager::SaveGame(char* _pData, char* _pFileName)
{
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\tempgrp\PS2MC\PS2MemoryCard.cpp lines 4905–4910 */
/* addr: 0x0032b4b0  size: 96 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 4905
 *   +0x0004 -> line 4906
 *   +0x0008 -> line 4905
 *   +0x000c -> line 4906
 *   +0x0014 -> line 4908
 *   +0x0028 -> line 4909
 *   +0x002c -> line 4908
 *   +0x0050 -> line 4909
 *   +0x0058 -> line 4910
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void C_PS2MC_Manager::CalculateCheckSum(char* pDataOrg, unsigned int ulSize)
{
    unsigned char* pData;
    int i;
    pData = (unsigned char*)pDataOrg;
    m_ulCheckSum = 0;
    i = ulSize - 4;
    if (i != 0) {
        do {
            m_ulCheckSum = m_ulCheckSum * 3 + ((i & 1) + 1) * (*pData++ + (i & 1));
        } while (--i != 0);
    }
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\tempgrp\PS2MC\PS2MemoryCard.cpp lines 4394–4881 */
/* addr: 0x0032b510  size: 2672 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 4394
 *   +0x000c -> line 4399
 *   +0x0038 -> line 4406
 *   +0x0050 -> line 4409
 *   +0x0058 -> line 4412
 *   +0x006c -> line 4413
 *   +0x0070 -> line 4414
 *   +0x0078 -> line 4415
 *   +0x0088 -> line 4419
 *   +0x009c -> line 4420
 *   +0x00a0 -> line 4421
 *   +0x00a8 -> line 4422
 *   +0x00c8 -> line 4423
 *   +0x00d0 -> line 4428
 *   +0x00dc -> line 4429
 *   +0x00e0 -> line 4430
 *   +0x00e4 -> line 4431
 *   +0x00e8 -> line 4428
 *   +0x00ec -> line 4429
 *   +0x00f8 -> line 4430
 *   +0x0104 -> line 4431
 *   +0x0108 -> line 4436
 *   +0x0114 -> line 4453
 *   +0x0118 -> line 4436
 *   +0x0120 -> line 4453
 *   +0x014c -> line 4457
 *   +0x0154 -> line 4458
 *   +0x015c -> line 4459
 *   +0x0160 -> line 4458
 *   +0x0168 -> line 4460
 *   +0x0170 -> line 4461
 *   +0x01a4 -> line 4467
 *   +0x01ac -> line 4468
 *   +0x01b4 -> line 4469
 *   +0x01b8 -> line 4468
 *   +0x01c0 -> line 4470
 *   +0x01c8 -> line 4476
 *   +0x01d4 -> line 4478
 *   +0x01e8 -> line 4479
 *   +0x01ec -> line 4480
 *   +0x01f4 -> line 4488
 *   +0x01fc -> line 4496
 *   +0x0214 -> line 4499
 *   +0x022c -> line 4500
 *   +0x0234 -> line 4503
 *   +0x023c -> line 4504
 *   +0x0248 -> line 4508
 *   +0x024c -> line 4509
 *   +0x0250 -> line 4508
 *   +0x0254 -> line 4509
 *   +0x02a0 -> line 4510
 *   +0x02a8 -> line 4511
 *   +0x02b0 -> line 4515
 *   +0x02c0 -> line 4516
 *   +0x02c4 -> line 4520
 *   +0x02cc -> line 4530
 *   +0x02e4 -> line 4533
 *   +0x02e8 -> line 4535
 *   +0x02f0 -> line 4536
 *   +0x0310 -> line 4537
 *   +0x0318 -> line 4541
 *   +0x0320 -> line 4542
 *   +0x032c -> line 4546
 *   +0x033c -> line 4547
 *   +0x0344 -> line 4552
 *   +0x034c -> line 4559
 *   +0x0354 -> line 4560
 *   +0x0360 -> line 4563
 *   +0x0380 -> line 4564
 *   +0x0384 -> line 4566
 *   +0x038c -> line 4567
 *   +0x0394 -> line 4571
 *   +0x039c -> line 4572
 *   +0x03bc -> line 4574
 *   +0x03c4 -> line 4575
 *   +0x03d0 -> line 4578
 *   +0x03e0 -> line 4579
 *   +0x03e4 -> line 4582
 *   +0x03ec -> line 4589
 *   +0x0404 -> line 4592
 *   +0x041c -> line 4593
 *   +0x0424 -> line 4596
 *   +0x042c -> line 4597
 *   +0x0438 -> line 4601
 *   +0x0448 -> line 4602
 *   +0x044c -> line 4606
 *   +0x0454 -> line 4613
 *   +0x045c -> line 4614
 *   +0x0468 -> line 4617
 *   +0x0488 -> line 4618
 *   +0x048c -> line 4620
 *   +0x0494 -> line 4621
 *   +0x049c -> line 4625
 *   +0x04a4 -> line 4626
 *   +0x04c4 -> line 4629
 *   +0x04cc -> line 4636
 *   +0x04e0 -> line 4639
 *   +0x04e4 -> line 4640
 *   +0x04e8 -> line 4639
 *   +0x04ec -> line 4640
 *   +0x050c -> line 4643
 *   +0x0528 -> line 4645
 *   +0x053c -> line 4646
 *   +0x055c -> line 4647
 *   +0x0564 -> line 4650
 *   +0x056c -> line 4654
 *   +0x0574 -> line 4661
 *   +0x0580 -> line 4664
 *   +0x0590 -> line 4667
 *   +0x0598 -> line 4668
 *   +0x05a0 -> line 4669
 *   +0x05bc -> line 4672
 *   +0x05d0 -> line 4673
 *   +0x05f0 -> line 4676
 *   +0x05f8 -> line 4683
 *   +0x0604 -> line 4688
 *   +0x060c -> line 4692
 *   +0x0620 -> line 4693
 *   +0x0628 -> line 4696
 *   +0x0630 -> line 4704
 *   +0x063c -> line 4707
 *   +0x064c -> line 4709
 *   +0x0654 -> line 4710
 *   +0x065c -> line 4711
 *   +0x0678 -> line 4713
 *   +0x068c -> line 4714
 *   +0x06ac -> line 4717
 *   +0x06b4 -> line 4730
 *   +0x06bc -> line 4731
 *   +0x06f4 -> line 4735
 *   +0x0710 -> line 4737
 *   +0x0724 -> line 4738
 *   +0x0744 -> line 4739
 *   +0x074c -> line 4742
 *   +0x0754 -> line 4745
 *   +0x075c -> line 4754
 *   +0x0768 -> line 4757
 *   +0x0778 -> line 4759
 *   +0x0780 -> line 4760
 *   +0x0788 -> line 4761
 *   +0x07a4 -> line 4763
 *   +0x07b8 -> line 4764
 *   +0x07d8 -> line 4767
 *   +0x07e0 -> line 4779
 *   +0x07e8 -> line 4780
 *   +0x07f0 -> line 4781
 *   +0x081c -> line 4790
 *   +0x0838 -> line 4792
 *   +0x084c -> line 4793
 *   +0x086c -> line 4794
 *   +0x0874 -> line 4797
 *   +0x087c -> line 4800
 *   +0x0884 -> line 4807
 *   +0x0890 -> line 4810
 *   +0x08a0 -> line 4815
 *   +0x08a8 -> line 4816
 *   +0x08c4 -> line 4818
 *   +0x08d8 -> line 4819
 *   +0x08f8 -> line 4822
 *   +0x0900 -> line 4831
 *   +0x0910 -> line 4832
 *   +0x0918 -> line 4833
 *   +0x0944 -> line 4837
 *   +0x0960 -> line 4839
 *   +0x0974 -> line 4840
 *   +0x0994 -> line 4841
 *   +0x099c -> line 4844
 *   +0x09a4 -> line 4847
 *   +0x09ac -> line 4854
 *   +0x09b8 -> line 4857
 *   +0x09c8 -> line 4862
 *   +0x09d0 -> line 4863
 *   +0x09dc -> line 4864
 *   +0x09e0 -> line 4871
 *   +0x09e4 -> line 4864
 *   +0x09e8 -> line 4865
 *   +0x09ec -> line 4871
 *   +0x09f0 -> line 4865
 *   +0x09f4 -> line 4871
 *   +0x0a04 -> line 4872
 *   +0x0a0c -> line 4873
 *   +0x0a28 -> line 4875
 *   +0x0a3c -> line 4876
 *   +0x0a60 -> line 4881
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void C_PS2MC_Manager::ManageSaveScreenShot(void)
{
    _SceeMemCardFunctionResult functionResult;
    int returnVal;
    unsigned int Value;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\tempgrp\PS2MC\PS2MemoryCard.cpp lines 4194–4382 */
/* addr: 0x0032bf80  size: 1328 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 4194
 *   +0x000c -> line 4198
 *   +0x0024 -> line 4200
 *   +0x006c -> line 4208
 *   +0x0084 -> line 4211
 *   +0x008c -> line 4214
 *   +0x00a4 -> line 4215
 *   +0x00a8 -> line 4217
 *   +0x00b0 -> line 4224
 *   +0x00b8 -> line 4229
 *   +0x00cc -> line 4232
 *   +0x00d4 -> line 4235
 *   +0x00e8 -> line 4236
 *   +0x00ec -> line 4237
 *   +0x00f4 -> line 4238
 *   +0x0104 -> line 4241
 *   +0x0118 -> line 4242
 *   +0x011c -> line 4243
 *   +0x0124 -> line 4246
 *   +0x0138 -> line 4247
 *   +0x013c -> line 4251
 *   +0x0144 -> line 4258
 *   +0x014c -> line 4259
 *   +0x0158 -> line 4262
 *   +0x0174 -> line 4263
 *   +0x0178 -> line 4267
 *   +0x0180 -> line 4271
 *   +0x023c -> line 4273
 *   +0x0244 -> line 4274
 *   +0x025c -> line 4276
 *   +0x028c -> line 4280
 *   +0x029c -> line 4282
 *   +0x02ac -> line 4283
 *   +0x02b0 -> line 4284
 *   +0x02b8 -> line 4287
 *   +0x02c0 -> line 4291
 *   +0x02c8 -> line 4298
 *   +0x02d4 -> line 4301
 *   +0x02e4 -> line 4304
 *   +0x0344 -> line 4305
 *   +0x0350 -> line 4307
 *   +0x03ac -> line 4312
 *   +0x03b4 -> line 4314
 *   +0x03b8 -> line 4316
 *   +0x03bc -> line 4314
 *   +0x03c0 -> line 4316
 *   +0x03dc -> line 4318
 *   +0x03e4 -> line 4321
 *   +0x03f4 -> line 4323
 *   +0x0408 -> line 4324
 *   +0x040c -> line 4325
 *   +0x0414 -> line 4329
 *   +0x041c -> line 4330
 *   +0x0420 -> line 4329
 *   +0x0424 -> line 4331
 *   +0x0428 -> line 4330
 *   +0x042c -> line 4336
 *   +0x0434 -> line 4337
 *   +0x0450 -> line 4339
 *   +0x0464 -> line 4341
 *   +0x0478 -> line 4342
 *   +0x047c -> line 4343
 *   +0x0484 -> line 4347
 *   +0x048c -> line 4348
 *   +0x0490 -> line 4347
 *   +0x0494 -> line 4349
 *   +0x0498 -> line 4348
 *   +0x049c -> line 4353
 *   +0x04a4 -> line 4357
 *   +0x04b8 -> line 4359
 *   +0x04c0 -> line 4361
 *   +0x04d0 -> line 4362
 *   +0x04d8 -> line 4364
 *   +0x04e0 -> line 4367
 *   +0x04ec -> line 4369
 *   +0x0500 -> line 4370
 *   +0x0504 -> line 4371
 *   +0x050c -> line 4374
 *   +0x0514 -> line 4375
 *   +0x0520 -> line 4382
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void C_PS2MC_Manager::ManageLoadScreenShot(void)
{
    ESceeResult Result;
    _SceeMemCardFunctionResult functionResult;
    unsigned int Value;
    int bRetry;
    signed char init;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\tempgrp\PS2MC\PS2MemoryCard.cpp lines 3973–4183 */
/* addr: 0x0032c4b0  size: 1392 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 3973
 *   +0x000c -> line 3977
 *   +0x0024 -> line 3979
 *   +0x0080 -> line 3987
 *   +0x0098 -> line 3990
 *   +0x00a0 -> line 3993
 *   +0x00b8 -> line 3994
 *   +0x00bc -> line 3996
 *   +0x00c4 -> line 4007
 *   +0x00cc -> line 4011
 *   +0x00d4 -> line 4012
 *   +0x00f0 -> line 4015
 *   +0x00f8 -> line 4016
 *   +0x0118 -> line 4017
 *   +0x011c -> line 4019
 *   +0x0124 -> line 4020
 *   +0x012c -> line 4022
 *   +0x0130 -> line 4025
 *   +0x0138 -> line 4029
 *   +0x014c -> line 4032
 *   +0x0154 -> line 4035
 *   +0x0168 -> line 4036
 *   +0x016c -> line 4037
 *   +0x0174 -> line 4038
 *   +0x0184 -> line 4041
 *   +0x0198 -> line 4042
 *   +0x019c -> line 4043
 *   +0x01a4 -> line 4046
 *   +0x01b8 -> line 4047
 *   +0x01bc -> line 4051
 *   +0x01c4 -> line 4058
 *   +0x01cc -> line 4059
 *   +0x01d8 -> line 4062
 *   +0x01f4 -> line 4063
 *   +0x01f8 -> line 4067
 *   +0x0200 -> line 4071
 *   +0x02a4 -> line 4073
 *   +0x02ac -> line 4074
 *   +0x02c0 -> line 4076
 *   +0x02e8 -> line 4080
 *   +0x02f8 -> line 4082
 *   +0x0308 -> line 4083
 *   +0x030c -> line 4084
 *   +0x0314 -> line 4087
 *   +0x031c -> line 4091
 *   +0x0324 -> line 4098
 *   +0x0330 -> line 4101
 *   +0x0340 -> line 4103
 *   +0x0398 -> line 4104
 *   +0x03a0 -> line 4106
 *   +0x03dc -> line 4108
 *   +0x03f0 -> line 4109
 *   +0x03f4 -> line 4110
 *   +0x03fc -> line 4114
 *   +0x0404 -> line 4115
 *   +0x0408 -> line 4114
 *   +0x040c -> line 4116
 *   +0x0410 -> line 4115
 *   +0x0414 -> line 4118
 *   +0x041c -> line 4119
 *   +0x0438 -> line 4121
 *   +0x044c -> line 4123
 *   +0x0460 -> line 4124
 *   +0x0464 -> line 4125
 *   +0x046c -> line 4129
 *   +0x0474 -> line 4130
 *   +0x0478 -> line 4129
 *   +0x047c -> line 4131
 *   +0x0480 -> line 4130
 *   +0x0484 -> line 4135
 *   +0x048c -> line 4139
 *   +0x04a4 -> line 4141
 *   +0x04ac -> line 4143
 *   +0x04bc -> line 4144
 *   +0x04c4 -> line 4146
 *   +0x04cc -> line 4149
 *   +0x04d8 -> line 4151
 *   +0x04ec -> line 4152
 *   +0x04f0 -> line 4153
 *   +0x04f8 -> line 4156
 *   +0x0500 -> line 4157
 *   +0x0508 -> line 4162
 *   +0x0510 -> line 4166
 *   +0x0518 -> line 4167
 *   +0x0524 -> line 4172
 *   +0x052c -> line 4174
 *   +0x0530 -> line 4177
 *   +0x0534 -> line 4174
 *   +0x0538 -> line 4177
 *   +0x053c -> line 4175
 *   +0x0540 -> line 4177
 *   +0x0544 -> line 4176
 *   +0x0548 -> line 4177
 *   +0x055c -> line 4178
 *   +0x0560 -> line 4183
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void C_PS2MC_Manager::ManageLoadGame(void)
{
    ESceeResult Result;
    _SceeMemCardFunctionResult functionResult;
    unsigned int Value;
    int bRetry;
    signed char init;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\tempgrp\PS2MC\PS2MemoryCard.cpp lines 3379–3962 */
/* addr: 0x0032ca20  size: 3356 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 3379
 *   +0x000c -> line 3384
 *   +0x0038 -> line 3391
 *   +0x0050 -> line 3394
 *   +0x0058 -> line 3397
 *   +0x006c -> line 3398
 *   +0x0070 -> line 3399
 *   +0x0078 -> line 3400
 *   +0x0088 -> line 3404
 *   +0x009c -> line 3405
 *   +0x00a0 -> line 3406
 *   +0x00a8 -> line 3407
 *   +0x00c8 -> line 3408
 *   +0x00d0 -> line 3413
 *   +0x00dc -> line 3414
 *   +0x00e0 -> line 3415
 *   +0x00e4 -> line 3416
 *   +0x00e8 -> line 3413
 *   +0x00ec -> line 3414
 *   +0x00f8 -> line 3415
 *   +0x0104 -> line 3416
 *   +0x0108 -> line 3421
 *   +0x0114 -> line 3438
 *   +0x0118 -> line 3421
 *   +0x0120 -> line 3438
 *   +0x014c -> line 3442
 *   +0x0154 -> line 3443
 *   +0x015c -> line 3444
 *   +0x0160 -> line 3443
 *   +0x0168 -> line 3445
 *   +0x0170 -> line 3446
 *   +0x01a4 -> line 3452
 *   +0x01ac -> line 3453
 *   +0x01b4 -> line 3454
 *   +0x01b8 -> line 3453
 *   +0x01c0 -> line 3455
 *   +0x01c8 -> line 3460
 *   +0x01d4 -> line 3462
 *   +0x01e8 -> line 3463
 *   +0x01ec -> line 3464
 *   +0x01f4 -> line 3472
 *   +0x01fc -> line 3480
 *   +0x0214 -> line 3483
 *   +0x022c -> line 3484
 *   +0x0234 -> line 3487
 *   +0x023c -> line 3488
 *   +0x0248 -> line 3492
 *   +0x024c -> line 3493
 *   +0x0250 -> line 3492
 *   +0x0254 -> line 3493
 *   +0x02a0 -> line 3494
 *   +0x02a8 -> line 3495
 *   +0x02b0 -> line 3500
 *   +0x02c8 -> line 3501
 *   +0x02cc -> line 3502
 *   +0x02d0 -> line 3510
 *   +0x02d8 -> line 3520
 *   +0x02f0 -> line 3523
 *   +0x02f4 -> line 3525
 *   +0x02fc -> line 3526
 *   +0x031c -> line 3527
 *   +0x0324 -> line 3531
 *   +0x032c -> line 3532
 *   +0x0338 -> line 3536
 *   +0x0348 -> line 3537
 *   +0x0350 -> line 3542
 *   +0x0358 -> line 3549
 *   +0x0360 -> line 3550
 *   +0x036c -> line 3553
 *   +0x038c -> line 3554
 *   +0x0390 -> line 3555
 *   +0x0394 -> line 3557
 *   +0x039c -> line 3558
 *   +0x03a4 -> line 3562
 *   +0x03ac -> line 3563
 *   +0x03cc -> line 3564
 *   +0x03d4 -> line 3565
 *   +0x03e0 -> line 3568
 *   +0x03f0 -> line 3569
 *   +0x03f4 -> line 3572
 *   +0x03fc -> line 3579
 *   +0x0414 -> line 3582
 *   +0x042c -> line 3583
 *   +0x0434 -> line 3586
 *   +0x043c -> line 3587
 *   +0x0448 -> line 3591
 *   +0x0458 -> line 3592
 *   +0x045c -> line 3596
 *   +0x0464 -> line 3604
 *   +0x046c -> line 3605
 *   +0x0478 -> line 3608
 *   +0x0498 -> line 3609
 *   +0x049c -> line 3610
 *   +0x04a0 -> line 3612
 *   +0x04a8 -> line 3613
 *   +0x04b0 -> line 3617
 *   +0x04b8 -> line 3618
 *   +0x04d8 -> line 3621
 *   +0x04e0 -> line 3628
 *   +0x04f4 -> line 3631
 *   +0x04f8 -> line 3632
 *   +0x04fc -> line 3631
 *   +0x0500 -> line 3632
 *   +0x0520 -> line 3635
 *   +0x053c -> line 3637
 *   +0x0550 -> line 3638
 *   +0x0570 -> line 3639
 *   +0x0578 -> line 3642
 *   +0x0580 -> line 3646
 *   +0x0588 -> line 3653
 *   +0x0594 -> line 3656
 *   +0x05a4 -> line 3659
 *   +0x05ac -> line 3660
 *   +0x05b4 -> line 3661
 *   +0x05d0 -> line 3664
 *   +0x05e4 -> line 3665
 *   +0x0604 -> line 3668
 *   +0x060c -> line 3675
 *   +0x0618 -> line 3680
 *   +0x0620 -> line 3684
 *   +0x0634 -> line 3685
 *   +0x063c -> line 3688
 *   +0x0644 -> line 3696
 *   +0x0650 -> line 3699
 *   +0x0660 -> line 3701
 *   +0x0668 -> line 3702
 *   +0x0670 -> line 3703
 *   +0x068c -> line 3705
 *   +0x06a0 -> line 3706
 *   +0x06c0 -> line 3709
 *   +0x06c8 -> line 3721
 *   +0x06d0 -> line 3723
 *   +0x0704 -> line 3726
 *   +0x0720 -> line 3728
 *   +0x0734 -> line 3729
 *   +0x0754 -> line 3730
 *   +0x075c -> line 3733
 *   +0x0764 -> line 3736
 *   +0x076c -> line 3745
 *   +0x0778 -> line 3748
 *   +0x0788 -> line 3750
 *   +0x0790 -> line 3751
 *   +0x0798 -> line 3752
 *   +0x07b4 -> line 3754
 *   +0x07c8 -> line 3755
 *   +0x07e8 -> line 3758
 *   +0x07f0 -> line 3767
 *   +0x07f8 -> line 3769
 *   +0x082c -> line 3773
 *   +0x0848 -> line 3775
 *   +0x085c -> line 3776
 *   +0x087c -> line 3777
 *   +0x0884 -> line 3780
 *   +0x088c -> line 3783
 *   +0x0894 -> line 3790
 *   +0x08a0 -> line 3793
 *   +0x08b0 -> line 3802
 *   +0x08b8 -> line 3803
 *   +0x08d4 -> line 3805
 *   +0x08e8 -> line 3806
 *   +0x0908 -> line 3809
 *   +0x0910 -> line 3817
 *   +0x0918 -> line 3818
 *   +0x094c -> line 3822
 *   +0x0968 -> line 3824
 *   +0x097c -> line 3825
 *   +0x099c -> line 3826
 *   +0x09a4 -> line 3829
 *   +0x09ac -> line 3832
 *   +0x09b4 -> line 3840
 *   +0x09c0 -> line 3843
 *   +0x09d0 -> line 3845
 *   +0x09d8 -> line 3846
 *   +0x09e0 -> line 3847
 *   +0x09fc -> line 3849
 *   +0x0a10 -> line 3850
 *   +0x0a30 -> line 3853
 *   +0x0a38 -> line 3861
 *   +0x0a40 -> line 3862
 *   +0x0a74 -> line 3866
 *   +0x0a90 -> line 3868
 *   +0x0aa4 -> line 3869
 *   +0x0ac4 -> line 3870
 *   +0x0acc -> line 3873
 *   +0x0ad4 -> line 3876
 *   +0x0adc -> line 3883
 *   +0x0ae8 -> line 3886
 *   +0x0af8 -> line 3888
 *   +0x0b00 -> line 3889
 *   +0x0b08 -> line 3890
 *   +0x0b24 -> line 3892
 *   +0x0b38 -> line 3893
 *   +0x0b58 -> line 3896
 *   +0x0b60 -> line 3903
 *   +0x0b70 -> line 3904
 *   +0x0b78 -> line 3905
 *   +0x0ba4 -> line 3909
 *   +0x0bc0 -> line 3911
 *   +0x0bd4 -> line 3912
 *   +0x0bf4 -> line 3913
 *   +0x0bfc -> line 3916
 *   +0x0c04 -> line 3919
 *   +0x0c0c -> line 3926
 *   +0x0c18 -> line 3929
 *   +0x0c28 -> line 3931
 *   +0x0c38 -> line 3932
 *   +0x0c40 -> line 3933
 *   +0x0c48 -> line 3934
 *   +0x0c64 -> line 3936
 *   +0x0c78 -> line 3937
 *   +0x0c98 -> line 3940
 *   +0x0ca0 -> line 3944
 *   +0x0ca8 -> line 3945
 *   +0x0cb4 -> line 3950
 *   +0x0cbc -> line 3951
 *   +0x0cc8 -> line 3952
 *   +0x0ccc -> line 3956
 *   +0x0cd0 -> line 3952
 *   +0x0cd4 -> line 3955
 *   +0x0cd8 -> line 3953
 *   +0x0cdc -> line 3956
 *   +0x0ce0 -> line 3954
 *   +0x0ce4 -> line 3956
 *   +0x0ce8 -> line 3955
 *   +0x0cec -> line 3956
 *   +0x0cf0 -> line 3955
 *   +0x0cf8 -> line 3956
 *   +0x0d08 -> line 3957
 *   +0x0d0c -> line 3962
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void C_PS2MC_Manager::ManageSaveGame(void)
{
    _SceeMemCardFunctionResult functionResult;
    int returnVal;
    unsigned int Value;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\tempgrp\PS2MC\PS2MemoryCard.cpp lines 3278–3369 */
/* addr: 0x0032d740  size: 528 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 3278
 *   +0x0004 -> line 3282
 *   +0x0008 -> line 3278
 *   +0x000c -> line 3282
 *   +0x0010 -> line 3278
 *   +0x0014 -> line 3282
 *   +0x0020 -> line 3285
 *   +0x0028 -> line 3286
 *   +0x0048 -> line 3287
 *   +0x0050 -> line 3290
 *   +0x0084 -> line 3297
 *   +0x0094 -> line 3298
 *   +0x009c -> line 3300
 *   +0x00a4 -> line 3304
 *   +0x00ac -> line 3305
 *   +0x00b8 -> line 3308
 *   +0x00c8 -> line 3310
 *   +0x00cc -> line 3312
 *   +0x00d4 -> line 3313
 *   +0x00f0 -> line 3314
 *   +0x00f8 -> line 3317
 *   +0x0108 -> line 3318
 *   +0x0110 -> line 3320
 *   +0x0118 -> line 3321
 *   +0x0120 -> line 3323
 *   +0x0128 -> line 3324
 *   +0x0148 -> line 3327
 *   +0x0150 -> line 3331
 *   +0x0158 -> line 3332
 *   +0x0164 -> line 3335
 *   +0x0180 -> line 3336
 *   +0x0184 -> line 3337
 *   +0x0188 -> line 3339
 *   +0x0190 -> line 3340
 *   +0x0198 -> line 3342
 *   +0x01a8 -> line 3343
 *   +0x01b0 -> line 3346
 *   +0x01b8 -> line 3351
 *   +0x01c0 -> line 3352
 *   +0x01cc -> line 3355
 *   +0x01d4 -> line 3356
 *   +0x01dc -> line 3361
 *   +0x01f4 -> line 3362
 *   +0x01f8 -> line 3363
 *   +0x01fc -> line 3364
 *   +0x0200 -> line 3369
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void C_PS2MC_Manager::ManageAreYouSureBeforeSave(void)
{
    unsigned int Value;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\tempgrp\PS2MC\PS2MemoryCard.cpp lines 3124–3266 */
/* addr: 0x0032d950  size: 920 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 3124
 *   +0x0004 -> line 3133
 *   +0x0008 -> line 3124
 *   +0x000c -> line 3133
 *   +0x0010 -> line 3124
 *   +0x0014 -> line 3133
 *   +0x002c -> line 3136
 *   +0x006c -> line 3137
 *   +0x0074 -> line 3140
 *   +0x00b4 -> line 3147
 *   +0x00bc -> line 3156
 *   +0x00c0 -> line 3161
 *   +0x00d4 -> line 3165
 *   +0x00dc -> line 3180
 *   +0x00e4 -> line 3181
 *   +0x0118 -> line 3184
 *   +0x0134 -> line 3186
 *   +0x0174 -> line 3187
 *   +0x017c -> line 3190
 *   +0x0184 -> line 3193
 *   +0x018c -> line 3202
 *   +0x0194 -> line 3205
 *   +0x01a4 -> line 3207
 *   +0x01ac -> line 3208
 *   +0x01b4 -> line 3209
 *   +0x01d0 -> line 3211
 *   +0x0210 -> line 3214
 *   +0x0218 -> line 3222
 *   +0x0224 -> line 3224
 *   +0x022c -> line 3226
 *   +0x0258 -> line 3230
 *   +0x0274 -> line 3232
 *   +0x02b4 -> line 3233
 *   +0x02bc -> line 3236
 *   +0x02c4 -> line 3239
 *   +0x02cc -> line 3246
 *   +0x02d8 -> line 3249
 *   +0x02e8 -> line 3254
 *   +0x02f0 -> line 3255
 *   +0x02fc -> line 3256
 *   +0x0300 -> line 3257
 *   +0x0304 -> line 3256
 *   +0x0308 -> line 3257
 *   +0x0320 -> line 3258
 *   +0x0328 -> line 3259
 *   +0x0344 -> line 3261
 *   +0x0388 -> line 3266
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void C_PS2MC_Manager::ManageAutoSaveGame(void)
{
    _SceeMemCardFunctionResult functionResult;
    int returnVal;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\tempgrp\PS2MC\PS2MemoryCard.cpp lines 2881–3078 */
/* addr: 0x0032dcf0  size: 1284 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 2881
 *   +0x0004 -> line 2886
 *   +0x0008 -> line 2881
 *   +0x0014 -> line 2886
 *   +0x0064 -> line 2891
 *   +0x0090 -> line 2897
 *   +0x0098 -> line 2898
 *   +0x00b8 -> line 2900
 *   +0x00bc -> line 2898
 *   +0x00c0 -> line 2901
 *   +0x00c8 -> line 2906
 *   +0x00d0 -> line 2907
 *   +0x00dc -> line 2911
 *   +0x00f0 -> line 2912
 *   +0x00f4 -> line 2914
 *   +0x00fc -> line 2915
 *   +0x0104 -> line 2920
 *   +0x0114 -> line 2921
 *   +0x0118 -> line 2929
 *   +0x0120 -> line 2935
 *   +0x0128 -> line 2936
 *   +0x0134 -> line 2940
 *   +0x014c -> line 2941
 *   +0x0150 -> line 2940
 *   +0x0158 -> line 2941
 *   +0x0164 -> line 2942
 *   +0x016c -> line 2943
 *   +0x0174 -> line 2944
 *   +0x017c -> line 2947
 *   +0x0188 -> line 2948
 *   +0x01a8 -> line 2950
 *   +0x01ac -> line 2951
 *   +0x01b4 -> line 2952
 *   +0x01bc -> line 2958
 *   +0x01d8 -> line 2959
 *   +0x01e0 -> line 2960
 *   +0x01e8 -> line 2962
 *   +0x01f0 -> line 2963
 *   +0x01f4 -> line 2962
 *   +0x0204 -> line 2963
 *   +0x0210 -> line 2964
 *   +0x0218 -> line 2965
 *   +0x0220 -> line 2966
 *   +0x0228 -> line 2969
 *   +0x0234 -> line 2970
 *   +0x0254 -> line 2971
 *   +0x0258 -> line 2972
 *   +0x025c -> line 2974
 *   +0x0264 -> line 2978
 *   +0x0290 -> line 2981
 *   +0x0298 -> line 2983
 *   +0x02b8 -> line 2984
 *   +0x02bc -> line 2983
 *   +0x02c0 -> line 2985
 *   +0x02c8 -> line 2988
 *   +0x02d0 -> line 2989
 *   +0x02dc -> line 2991
 *   +0x02e0 -> line 2992
 *   +0x02e8 -> line 2994
 *   +0x02f0 -> line 2996
 *   +0x0300 -> line 2997
 *   +0x0304 -> line 3000
 *   +0x030c -> line 3003
 *   +0x0324 -> line 3005
 *   +0x0338 -> line 3010
 *   +0x0358 -> line 3012
 *   +0x0360 -> line 3016
 *   +0x0374 -> line 3017
 *   +0x0388 -> line 3018
 *   +0x03a4 -> line 3020
 *   +0x03b8 -> line 3021
 *   +0x03d8 -> line 3022
 *   +0x03e0 -> line 3026
 *   +0x03e8 -> line 3030
 *   +0x03f0 -> line 3033
 *   +0x03fc -> line 3035
 *   +0x040c -> line 3038
 *   +0x0418 -> line 3039
 *   +0x0420 -> line 3040
 *   +0x0428 -> line 3041
 *   +0x0444 -> line 3044
 *   +0x0458 -> line 3045
 *   +0x0478 -> line 3047
 *   +0x0480 -> line 3054
 *   +0x0498 -> line 3059
 *   +0x04a0 -> line 3060
 *   +0x04a8 -> line 3063
 *   +0x04b0 -> line 3068
 *   +0x04c8 -> line 3071
 *   +0x04d0 -> line 3073
 *   +0x04f4 -> line 3078
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void C_PS2MC_Manager::ManageFormatting(void)
{
    _SceeMemCardFunctionResult functionResult;
    int returnVal;
    unsigned int Value;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\tempgrp\PS2MC\PS2MemoryCard.cpp lines 2218–2868 */
/* addr: 0x0032e200  size: 4748 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 2218
 *   +0x000c -> line 2222
 *   +0x0024 -> line 2223
 *   +0x0038 -> line 2224
 *   +0x0050 -> line 2229
 *   +0x0054 -> line 2227
 *   +0x0058 -> line 2229
 *   +0x005c -> line 2227
 *   +0x0060 -> line 2229
 *   +0x006c -> line 2234
 *   +0x0070 -> line 2238
 *   +0x007c -> line 2240
 *   +0x0088 -> line 2242
 *   +0x0090 -> line 2243
 *   +0x00bc -> line 2244
 *   +0x00c0 -> line 2246
 *   +0x00d8 -> line 2247
 *   +0x00dc -> line 2246
 *   +0x00e4 -> line 2248
 *   +0x00ec -> line 2285
 *   +0x019c -> line 2292
 *   +0x01a0 -> line 2294
 *   +0x01ac -> line 2295
 *   +0x01b0 -> line 2299
 *   +0x01b8 -> line 2304
 *   +0x01cc -> line 2306
 *   +0x01d0 -> line 2307
 *   +0x01d8 -> line 2306
 *   +0x01e0 -> line 2307
 *   +0x01e4 -> line 2308
 *   +0x01f0 -> line 2310
 *   +0x01f4 -> line 2315
 *   +0x01fc -> line 2320
 *   +0x0210 -> line 2322
 *   +0x0214 -> line 2325
 *   +0x021c -> line 2322
 *   +0x0220 -> line 2323
 *   +0x0224 -> line 2325
 *   +0x0230 -> line 2328
 *   +0x023c -> line 2330
 *   +0x0250 -> line 2331
 *   +0x0258 -> line 2332
 *   +0x0284 -> line 2333
 *   +0x0288 -> line 2334
 *   +0x0290 -> line 2337
 *   +0x0294 -> line 2338
 *   +0x02a0 -> line 2339
 *   +0x02a4 -> line 2338
 *   +0x02a8 -> line 2339
 *   +0x02ac -> line 2338
 *   +0x02b0 -> line 2341
 *   +0x02b8 -> line 2342
 *   +0x02c8 -> line 2346
 *   +0x02cc -> line 2345
 *   +0x02d0 -> line 2346
 *   +0x02d8 -> line 2347
 *   +0x0310 -> line 2349
 *   +0x0314 -> line 2348
 *   +0x0318 -> line 2349
 *   +0x0330 -> line 2350
 *   +0x0338 -> line 2355
 *   +0x036c -> line 2364
 *   +0x0370 -> line 2365
 *   +0x0374 -> line 2364
 *   +0x0378 -> line 2365
 *   +0x037c -> line 2364
 *   +0x0380 -> line 2365
 *   +0x03a4 -> line 2373
 *   +0x03b4 -> line 2377
 *   +0x03b8 -> line 2378
 *   +0x03bc -> line 2377
 *   +0x03c0 -> line 2378
 *   +0x03c8 -> line 2379
 *   +0x0400 -> line 2381
 *   +0x0404 -> line 2380
 *   +0x0408 -> line 2381
 *   +0x0420 -> line 2382
 *   +0x0428 -> line 2387
 *   +0x0430 -> line 2390
 *   +0x0434 -> line 2394
 *   +0x043c -> line 2401
 *   +0x0444 -> line 2403
 *   +0x0454 -> line 2407
 *   +0x0478 -> line 2409
 *   +0x0484 -> line 2411
 *   +0x0498 -> line 2412
 *   +0x04a0 -> line 2413
 *   +0x04cc -> line 2414
 *   +0x04d0 -> line 2415
 *   +0x04d8 -> line 2420
 *   +0x04dc -> line 2419
 *   +0x04e0 -> line 2420
 *   +0x04e8 -> line 2421
 *   +0x0504 -> line 2423
 *   +0x050c -> line 2426
 *   +0x0514 -> line 2428
 *   +0x051c -> line 2429
 *   +0x0534 -> line 2431
 *   +0x0554 -> line 2433
 *   +0x0568 -> line 2434
 *   +0x0570 -> line 2435
 *   +0x059c -> line 2436
 *   +0x05a0 -> line 2437
 *   +0x05a8 -> line 2442
 *   +0x05ac -> line 2441
 *   +0x05b0 -> line 2442
 *   +0x05b8 -> line 2443
 *   +0x05f0 -> line 2445
 *   +0x05f4 -> line 2444
 *   +0x05f8 -> line 2445
 *   +0x0610 -> line 2449
 *   +0x0618 -> line 2456
 *   +0x0628 -> line 2459
 *   +0x063c -> line 2460
 *   +0x0644 -> line 2461
 *   +0x0670 -> line 2462
 *   +0x0674 -> line 2463
 *   +0x067c -> line 2468
 *   +0x0688 -> line 2469
 *   +0x0690 -> line 2472
 *   +0x0698 -> line 2484
 *   +0x06c0 -> line 2492
 *   +0x06cc -> line 2495
 *   +0x06f8 -> line 2498
 *   +0x0704 -> line 2499
 *   +0x0708 -> line 2500
 *   +0x070c -> line 2498
 *   +0x0710 -> line 2499
 *   +0x071c -> line 2500
 *   +0x0728 -> line 2501
 *   +0x072c -> line 2504
 *   +0x0734 -> line 2511
 *   +0x0764 -> line 2515
 *   +0x076c -> line 2516
 *   +0x0774 -> line 2517
 *   +0x07a0 -> line 2518
 *   +0x07a4 -> line 2519
 *   +0x07ac -> line 2524
 *   +0x07b0 -> line 2522
 *   +0x07b4 -> line 2524
 *   +0x07b8 -> line 2522
 *   +0x07c4 -> line 2524
 *   +0x07dc -> line 2530
 *   +0x07ec -> line 2531
 *   +0x07f4 -> line 2532
 *   +0x0820 -> line 2533
 *   +0x0824 -> line 2534
 *   +0x082c -> line 2538
 *   +0x0834 -> line 2542
 *   +0x083c -> line 2549
 *   +0x084c -> line 2552
 *   +0x0858 -> line 2554
 *   +0x0868 -> line 2555
 *   +0x0874 -> line 2557
 *   +0x087c -> line 2558
 *   +0x08a8 -> line 2560
 *   +0x08ac -> line 2561
 *   +0x08b4 -> line 2564
 *   +0x08bc -> line 2565
 *   +0x08e8 -> line 2568
 *   +0x08ec -> line 2566
 *   +0x08f0 -> line 2567
 *   +0x08f4 -> line 2568
 *   +0x08f8 -> line 2567
 *   +0x08fc -> line 2569
 *   +0x0900 -> line 2568
 *   +0x0904 -> line 2569
 *   +0x091c -> line 2571
 *   +0x0924 -> line 2572
 *   +0x0934 -> line 2574
 *   +0x0960 -> line 2575
 *   +0x0964 -> line 2576
 *   +0x0968 -> line 2579
 *   +0x0970 -> line 2588
 *   +0x0980 -> line 2590
 *   +0x0984 -> line 2591
 *   +0x0988 -> line 2590
 *   +0x098c -> line 2591
 *   +0x0994 -> line 2592
 *   +0x09cc -> line 2594
 *   +0x09d0 -> line 2593
 *   +0x09d4 -> line 2594
 *   +0x09ec -> line 2596
 *   +0x09f4 -> line 2597
 *   +0x0a04 -> line 2599
 *   +0x0a10 -> line 2601
 *   +0x0a24 -> line 2602
 *   +0x0a2c -> line 2603
 *   +0x0a58 -> line 2604
 *   +0x0a5c -> line 2605
 *   +0x0a64 -> line 2609
 *   +0x0a68 -> line 2608
 *   +0x0a6c -> line 2609
 *   +0x0a74 -> line 2610
 *   +0x0a90 -> line 2612
 *   +0x0a98 -> line 2613
 *   +0x0abc -> line 2621
 *   +0x0ac0 -> line 2622
 *   +0x0ac4 -> line 2621
 *   +0x0ac8 -> line 2622
 *   +0x0acc -> line 2621
 *   +0x0ad0 -> line 2622
 *   +0x0af4 -> line 2630
 *   +0x0b04 -> line 2633
 *   +0x0b08 -> line 2632
 *   +0x0b0c -> line 2633
 *   +0x0b14 -> line 2634
 *   +0x0b4c -> line 2636
 *   +0x0b50 -> line 2635
 *   +0x0b54 -> line 2636
 *   +0x0b6c -> line 2637
 *   +0x0b74 -> line 2640
 *   +0x0b7c -> line 2642
 *   +0x0b84 -> line 2646
 *   +0x0b88 -> line 2645
 *   +0x0b8c -> line 2646
 *   +0x0b94 -> line 2647
 *   +0x0bcc -> line 2649
 *   +0x0bd0 -> line 2648
 *   +0x0bd4 -> line 2649
 *   +0x0bec -> line 2652
 *   +0x0bf4 -> line 2658
 *   +0x0bfc -> line 2660
 *   +0x0c0c -> line 2662
 *   +0x0c1c -> line 2665
 *   +0x0c2c -> line 2666
 *   +0x0c34 -> line 2667
 *   +0x0c60 -> line 2668
 *   +0x0c64 -> line 2669
 *   +0x0c6c -> line 2674
 *   +0x0c78 -> line 2675
 *   +0x0c80 -> line 2677
 *   +0x0c88 -> line 2678
 *   +0x0c90 -> line 2682
 *   +0x0c9c -> line 2683
 *   +0x0ca4 -> line 2684
 *   +0x0cd0 -> line 2685
 *   +0x0cd4 -> line 2687
 *   +0x0cdc -> line 2699
 *   +0x0d04 -> line 2707
 *   +0x0d10 -> line 2710
 *   +0x0d3c -> line 2713
 *   +0x0d48 -> line 2714
 *   +0x0d4c -> line 2715
 *   +0x0d50 -> line 2716
 *   +0x0d54 -> line 2713
 *   +0x0d58 -> line 2714
 *   +0x0d64 -> line 2715
 *   +0x0d70 -> line 2716
 *   +0x0d74 -> line 2719
 *   +0x0d7c -> line 2726
 *   +0x0d8c -> line 2729
 *   +0x0d98 -> line 2731
 *   +0x0dac -> line 2732
 *   +0x0db8 -> line 2734
 *   +0x0dc0 -> line 2735
 *   +0x0dec -> line 2737
 *   +0x0df0 -> line 2738
 *   +0x0df8 -> line 2742
 *   +0x0dfc -> line 2741
 *   +0x0e00 -> line 2742
 *   +0x0e08 -> line 2743
 *   +0x0e24 -> line 2745
 *   +0x0e2c -> line 2746
 *   +0x0e60 -> line 2750
 *   +0x0e68 -> line 2751
 *   +0x0e70 -> line 2752
 *   +0x0e9c -> line 2753
 *   +0x0ea0 -> line 2754
 *   +0x0ea8 -> line 2759
 *   +0x0eac -> line 2757
 *   +0x0eb0 -> line 2759
 *   +0x0eb4 -> line 2757
 *   +0x0ec0 -> line 2759
 *   +0x0ed8 -> line 2765
 *   +0x0ee8 -> line 2766
 *   +0x0ef0 -> line 2767
 *   +0x0f1c -> line 2768
 *   +0x0f20 -> line 2769
 *   +0x0f28 -> line 2773
 *   +0x0f30 -> line 2777
 *   +0x0f38 -> line 2782
 *   +0x0f48 -> line 2784
 *   +0x0f54 -> line 2787
 *   +0x0f5c -> line 2788
 *   +0x0f88 -> line 2789
 *   +0x0f8c -> line 2792
 *   +0x0f94 -> line 2793
 *   +0x0fa8 -> line 2795
 *   +0x0fb8 -> line 2796
 *   +0x0fbc -> line 2799
 *   +0x0fc4 -> line 2803
 *   +0x0fd4 -> line 2805
 *   +0x0fe0 -> line 2808
 *   +0x0fe8 -> line 2809
 *   +0x1014 -> line 2810
 *   +0x1018 -> line 2813
 *   +0x1020 -> line 2814
 *   +0x1034 -> line 2816
 *   +0x103c -> line 2817
 *   +0x1068 -> line 2818
 *   +0x10a0 -> line 2821
 *   +0x10a4 -> line 2819
 *   +0x10a8 -> line 2821
 *   +0x10ac -> line 2820
 *   +0x10b0 -> line 2821
 *   +0x10c0 -> line 2823
 *   +0x10c4 -> line 2821
 *   +0x10c8 -> line 2822
 *   +0x10cc -> line 2821
 *   +0x10d0 -> line 2823
 *   +0x10d4 -> line 2822
 *   +0x10d8 -> line 2826
 *   +0x10e0 -> line 2831
 *   +0x10f0 -> line 2834
 *   +0x10fc -> line 2836
 *   +0x110c -> line 2837
 *   +0x1118 -> line 2839
 *   +0x1120 -> line 2840
 *   +0x114c -> line 2842
 *   +0x1150 -> line 2843
 *   +0x1158 -> line 2846
 *   +0x1160 -> line 2847
 *   +0x118c -> line 2850
 *   +0x1190 -> line 2848
 *   +0x1194 -> line 2849
 *   +0x1198 -> line 2850
 *   +0x119c -> line 2849
 *   +0x11a0 -> line 2851
 *   +0x11a4 -> line 2850
 *   +0x11a8 -> line 2851
 *   +0x11c0 -> line 2853
 *   +0x11c8 -> line 2854
 *   +0x11d8 -> line 2856
 *   +0x11e0 -> line 2857
 *   +0x120c -> line 2859
 *   +0x1244 -> line 2861
 *   +0x1248 -> line 2860
 *   +0x124c -> line 2861
 *   +0x1260 -> line 2863
 *   +0x1264 -> line 2861
 *   +0x1268 -> line 2862
 *   +0x126c -> line 2861
 *   +0x1270 -> line 2863
 *   +0x1274 -> line 2862
 *   +0x1278 -> line 2863
 *   +0x127c -> line 2868
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void C_PS2MC_Manager::ManageBootCheck(void)
{
    int NameIndex;
    ESceeResult Result;
    _SceeMemCardFunctionResult functionResult;
    int FirstBootCheck;
    int b_InWarningMode;
    int Copy_m_bNeedToCheckAndWarnForMCFull;
    int LoopCount;
    signed char init;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\tempgrp\PS2MC\PS2MemoryCard.cpp lines 2137–2206 */
/* addr: 0x0032f490  size: 452 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 2137
 *   +0x000c -> line 2140
 *   +0x0024 -> line 2143
 *   +0x004c -> line 2150
 *   +0x007c -> line 2152
 *   +0x0088 -> line 2153
 *   +0x008c -> line 2152
 *   +0x0090 -> line 2153
 *   +0x0094 -> line 2157
 *   +0x009c -> line 2162
 *   +0x00b4 -> line 2164
 *   +0x00b8 -> line 2165
 *   +0x00c0 -> line 2166
 *   +0x00c4 -> line 2164
 *   +0x00cc -> line 2165
 *   +0x00d0 -> line 2166
 *   +0x00dc -> line 2168
 *   +0x00e0 -> line 2173
 *   +0x00e8 -> line 2178
 *   +0x0100 -> line 2180
 *   +0x0108 -> line 2185
 *   +0x0118 -> line 2186
 *   +0x0124 -> line 2187
 *   +0x0150 -> line 2188
 *   +0x0154 -> line 2189
 *   +0x015c -> line 2188
 *   +0x0160 -> line 2189
 *   +0x0170 -> line 2190
 *   +0x0174 -> line 2189
 *   +0x0178 -> line 2190
 *   +0x017c -> line 2189
 *   +0x0180 -> line 2190
 *   +0x0184 -> line 2192
 *   +0x018c -> line 2196
 *   +0x0194 -> line 2201
 *   +0x0198 -> line 2196
 *   +0x019c -> line 2197
 *   +0x01a8 -> line 2199
 *   +0x01ac -> line 2201
 *   +0x01b4 -> line 2206
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void C_PS2MC_Manager::ManagePreBootCheck(void)
{
    int LoopCount;
    signed char init;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\tempgrp\PS2MC\PS2MemoryCard.cpp lines 1928–2111 */
/* addr: 0x0032f660  size: 2324 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1928
 *   +0x0004 -> line 1933
 *   +0x0008 -> line 1928
 *   +0x000c -> line 1933
 *   +0x0010 -> line 1928
 *   +0x0034 -> line 1933
 *   +0x0040 -> line 1936
 *   +0x0064 -> line 1937
 *   +0x006c -> line 1940
 *   +0x0098 -> line 1948
 *   +0x009c -> line 1947
 *   +0x00a0 -> line 1948
 *   +0x00a4 -> line 1947
 *   +0x00a8 -> line 1948
 *   +0x00ac -> line 1947
 *   +0x00b0 -> line 1948
 *   +0x00d8 -> line 1955
 *   +0x011c -> line 1957
 *   +0x0124 -> line 1965
 *   +0x0130 -> line 1967
 *   +0x0140 -> line 1971
 *   +0x0154 -> line 1974
 *   +0x0178 -> line 1975
 *   +0x0180 -> line 1978
 *   +0x0188 -> line 1980
 *   +0x0190 -> line 1981
 *   +0x0198 -> line 1983
 *   +0x01bc -> line 1986
 *   +0x01c4 -> line 2002
 *   +0x01d4 -> line 2006
 *   +0x01d8 -> line 2002
 *   +0x01dc -> line 2006
 *   +0x01fc -> line 2009
 *   +0x0200 -> line 2006
 *   +0x020c -> line 2009
 *   +0x0214 -> line 2022
 *   +0x021c -> line 2020
 *   +0x0220 -> line 2022
 *   +0x0224 -> line 2021
 *   +0x0228 -> line 2022
 *   +0x0234 -> line 2034
 *   +0x0238 -> line 2022
 *   +0x023c -> line 2034
 *   +0x0240 -> line 2022
 *   +0x0244 -> line 2025
 *   +0x0248 -> line 2026
 *   +0x024c -> line 2039
 *   +0x0250 -> line 2022
 *   +0x0254 -> line 2034
 *   +0x025c -> line 2023
 *   +0x0264 -> line 2022
 *   +0x02a0 -> line 2023
 *   +0x02a8 -> line 2024
 *   +0x02b0 -> line 2023
 *   +0x02ec -> line 2024
 *   +0x02f4 -> line 2025
 *   +0x02fc -> line 2024
 *   +0x0338 -> line 2025
 *   +0x0340 -> line 2026
 *   +0x0348 -> line 2025
 *   +0x0380 -> line 2026
 *   +0x03c8 -> line 2034
 *   +0x03e8 -> line 2035
 *   +0x044c -> line 2039
 *   +0x0454 -> line 2063
 *   +0x0460 -> line 2041
 *   +0x0464 -> line 2063
 *   +0x0468 -> line 2041
 *   +0x046c -> line 2054
 *   +0x0470 -> line 2057
 *   +0x0474 -> line 2054
 *   +0x0478 -> line 2057
 *   +0x047c -> line 2041
 *   +0x049c -> line 2042
 *   +0x04c4 -> line 2043
 *   +0x04ec -> line 2044
 *   +0x050c -> line 2045
 *   +0x052c -> line 2046
 *   +0x0554 -> line 2050
 *   +0x0560 -> line 2054
 *   +0x0570 -> line 2057
 *   +0x05f0 -> line 2063
 *   +0x05f4 -> line 2057
 *   +0x0600 -> line 2063
 *   +0x0604 -> line 2057
 *   +0x0614 -> line 2063
 *   +0x0624 -> line 2064
 *   +0x0670 -> line 2065
 *   +0x0690 -> line 2078
 *   +0x06a0 -> line 2077
 *   +0x06a4 -> line 2078
 *   +0x06b0 -> line 2080
 *   +0x06e8 -> line 2084
 *   +0x0774 -> line 2085
 *   +0x0780 -> line 2084
 *   +0x078c -> line 2085
 *   +0x07f4 -> line 2086
 *   +0x0800 -> line 2085
 *   +0x080c -> line 2086
 *   +0x086c -> line 2087
 *   +0x0870 -> line 2086
 *   +0x087c -> line 2088
 *   +0x0880 -> line 2087
 *   +0x0884 -> line 2089
 *   +0x08a0 -> line 2090
 *   +0x08a8 -> line 2096
 *   +0x08ac -> line 2099
 *   +0x08b0 -> line 2096
 *   +0x08b4 -> line 2100
 *   +0x08b8 -> line 2096
 *   +0x08bc -> line 2103
 *   +0x08c0 -> line 2096
 *   +0x08c4 -> line 2103
 *   +0x08c8 -> line 2099
 *   +0x08cc -> line 2103
 *   +0x08d0 -> line 2100
 *   +0x08d4 -> line 2103
 *   +0x08e4 -> line 2111
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void C_PS2MC_Manager::ManageGetScreenshotsEntries(void)
{
    MC_tdstFileEntry Temp;
    int bSwapped;
    unsigned int Century;
    sceCdCLOCK LocalTime;
    int NameIndex;
    _SceeMemCardFunctionResult functionResult;
    unsigned int i;
    ESceeResult Result;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\tempgrp\PS2MC\PS2MemoryCard.cpp lines 1603–1898 */
/* addr: 0x0032ff80  size: 3444 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1603
 *   +0x002c -> line 1607
 *   +0x0044 -> line 1610
 *   +0x0058 -> line 1613
 *   +0x0084 -> line 1614
 *   +0x008c -> line 1617
 *   +0x00d0 -> line 1625
 *   +0x00d4 -> line 1624
 *   +0x00d8 -> line 1625
 *   +0x00dc -> line 1624
 *   +0x00e0 -> line 1625
 *   +0x00e4 -> line 1624
 *   +0x00e8 -> line 1625
 *   +0x0110 -> line 1632
 *   +0x0160 -> line 1633
 *   +0x0174 -> line 1634
 *   +0x0188 -> line 1636
 *   +0x0190 -> line 1644
 *   +0x019c -> line 1646
 *   +0x01ac -> line 1650
 *   +0x01c0 -> line 1653
 *   +0x01ec -> line 1654
 *   +0x01f4 -> line 1657
 *   +0x01fc -> line 1659
 *   +0x0204 -> line 1660
 *   +0x020c -> line 1662
 *   +0x0238 -> line 1665
 *   +0x0240 -> line 1681
 *   +0x0250 -> line 1685
 *   +0x0254 -> line 1681
 *   +0x0258 -> line 1685
 *   +0x0278 -> line 1688
 *   +0x027c -> line 1685
 *   +0x0288 -> line 1688
 *   +0x0290 -> line 1701
 *   +0x0298 -> line 1699
 *   +0x029c -> line 1701
 *   +0x02a0 -> line 1700
 *   +0x02a4 -> line 1701
 *   +0x02b0 -> line 1713
 *   +0x02b4 -> line 1701
 *   +0x02b8 -> line 1713
 *   +0x02bc -> line 1701
 *   +0x02c0 -> line 1704
 *   +0x02c4 -> line 1705
 *   +0x02c8 -> line 1718
 *   +0x02cc -> line 1701
 *   +0x02d0 -> line 1713
 *   +0x02d8 -> line 1702
 *   +0x02e0 -> line 1701
 *   +0x031c -> line 1702
 *   +0x0324 -> line 1703
 *   +0x032c -> line 1702
 *   +0x0368 -> line 1703
 *   +0x0370 -> line 1704
 *   +0x0378 -> line 1703
 *   +0x03b4 -> line 1704
 *   +0x03bc -> line 1705
 *   +0x03c4 -> line 1704
 *   +0x03fc -> line 1705
 *   +0x0444 -> line 1713
 *   +0x0464 -> line 1714
 *   +0x04c8 -> line 1718
 *   +0x04d0 -> line 1742
 *   +0x04dc -> line 1720
 *   +0x04e0 -> line 1742
 *   +0x04e4 -> line 1720
 *   +0x04e8 -> line 1733
 *   +0x04ec -> line 1736
 *   +0x04f0 -> line 1733
 *   +0x04f4 -> line 1736
 *   +0x04f8 -> line 1720
 *   +0x0518 -> line 1721
 *   +0x0540 -> line 1722
 *   +0x0568 -> line 1723
 *   +0x0588 -> line 1724
 *   +0x05a8 -> line 1725
 *   +0x05d0 -> line 1729
 *   +0x05dc -> line 1733
 *   +0x05ec -> line 1736
 *   +0x063c -> line 1742
 *   +0x0640 -> line 1736
 *   +0x0644 -> line 1742
 *   +0x0648 -> line 1736
 *   +0x0690 -> line 1742
 *   +0x06a0 -> line 1743
 *   +0x06e4 -> line 1746
 *   +0x06e8 -> line 1747
 *   +0x06ec -> line 1746
 *   +0x06f0 -> line 1748
 *   +0x06f4 -> line 1746
 *   +0x06fc -> line 1747
 *   +0x0700 -> line 1746
 *   +0x0704 -> line 1747
 *   +0x0718 -> line 1748
 *   +0x0730 -> line 1761
 *   +0x0740 -> line 1760
 *   +0x0744 -> line 1761
 *   +0x0750 -> line 1763
 *   +0x0788 -> line 1767
 *   +0x0814 -> line 1768
 *   +0x0820 -> line 1767
 *   +0x082c -> line 1768
 *   +0x0894 -> line 1769
 *   +0x08a0 -> line 1768
 *   +0x08ac -> line 1769
 *   +0x090c -> line 1770
 *   +0x0910 -> line 1769
 *   +0x091c -> line 1771
 *   +0x0920 -> line 1770
 *   +0x0924 -> line 1772
 *   +0x0940 -> line 1773
 *   +0x0948 -> line 1776
 *   +0x095c -> line 1779
 *   +0x0960 -> line 1782
 *   +0x0964 -> line 1779
 *   +0x0968 -> line 1783
 *   +0x096c -> line 1779
 *   +0x0974 -> line 1782
 *   +0x0978 -> line 1785
 *   +0x0980 -> line 1787
 *   +0x099c -> line 1788
 *   +0x09a4 -> line 1792
 *   +0x09a8 -> line 1793
 *   +0x09b0 -> line 1796
 *   +0x09b8 -> line 1800
 *   +0x09f0 -> line 1801
 *   +0x0a04 -> line 1802
 *   +0x0a3c -> line 1803
 *   +0x0a50 -> line 1804
 *   +0x0a64 -> line 1805
 *   +0x0a9c -> line 1807
 *   +0x0aa4 -> line 1808
 *   +0x0ab8 -> line 1810
 *   +0x0ae0 -> line 1814
 *   +0x0af0 -> line 1818
 *   +0x0b0c -> line 1819
 *   +0x0b10 -> line 1818
 *   +0x0b1c -> line 1819
 *   +0x0b20 -> line 1818
 *   +0x0b28 -> line 1819
 *   +0x0b38 -> line 1821
 *   +0x0b3c -> line 1819
 *   +0x0b48 -> line 1821
 *   +0x0b4c -> line 1819
 *   +0x0b58 -> line 1820
 *   +0x0b64 -> line 1821
 *   +0x0b74 -> line 1824
 *   +0x0b78 -> line 1827
 *   +0x0b7c -> line 1824
 *   +0x0b80 -> line 1828
 *   +0x0b84 -> line 1824
 *   +0x0b88 -> line 1831
 *   +0x0b8c -> line 1824
 *   +0x0b90 -> line 1831
 *   +0x0b94 -> line 1827
 *   +0x0b98 -> line 1831
 *   +0x0b9c -> line 1828
 *   +0x0ba0 -> line 1831
 *   +0x0bac -> line 1832
 *   +0x0bb4 -> line 1837
 *   +0x0bbc -> line 1840
 *   +0x0bc0 -> line 1842
 *   +0x0bc8 -> line 1845
 *   +0x0bd0 -> line 1848
 *   +0x0bd8 -> line 1853
 *   +0x0be4 -> line 1856
 *   +0x0bf4 -> line 1858
 *   +0x0c0c -> line 1859
 *   +0x0c10 -> line 1858
 *   +0x0c30 -> line 1859
 *   +0x0c60 -> line 1860
 *   +0x0c68 -> line 1861
 *   +0x0c70 -> line 1864
 *   +0x0c74 -> line 1865
 *   +0x0c78 -> line 1864
 *   +0x0c84 -> line 1865
 *   +0x0c88 -> line 1864
 *   +0x0ca8 -> line 1865
 *   +0x0cd0 -> line 1872
 *   +0x0cd4 -> line 1873
 *   +0x0cdc -> line 1872
 *   +0x0ce4 -> line 1873
 *   +0x0cf4 -> line 1876
 *   +0x0cf8 -> line 1879
 *   +0x0cfc -> line 1876
 *   +0x0d00 -> line 1880
 *   +0x0d04 -> line 1876
 *   +0x0d0c -> line 1879
 *   +0x0d10 -> line 1883
 *   +0x0d18 -> line 1884
 *   +0x0d34 -> line 1889
 *   +0x0d3c -> line 1892
 *   +0x0d44 -> line 1898
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void C_PS2MC_Manager::ManageGetSavedGamesEntries(void)
{
    MC_tdstFileEntry Temp;
    int bSwapped;
    unsigned int Century;
    sceCdCLOCK LocalTime;
    int NameIndex;
    _SceeMemCardFunctionResult functionResult;
    unsigned int i;
    ESceeResult Result;
    int CurrentEntry;
    unsigned int HeaderData[4];
    signed char init;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\tempgrp\PS2MC\PS2MemoryCard.cpp lines 1420–1549 */
/* addr: 0x00330d00  size: 1016 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1420
 *   +0x0004 -> line 1425
 *   +0x0008 -> line 1420
 *   +0x000c -> line 1425
 *   +0x0010 -> line 1420
 *   +0x0018 -> line 1425
 *   +0x0024 -> line 1428
 *   +0x0050 -> line 1429
 *   +0x0058 -> line 1432
 *   +0x0098 -> line 1437
 *   +0x009c -> line 1438
 *   +0x00a0 -> line 1437
 *   +0x00a4 -> line 1438
 *   +0x00c8 -> line 1441
 *   +0x00d4 -> line 1443
 *   +0x00fc -> line 1444
 *   +0x0104 -> line 1447
 *   +0x010c -> line 1450
 *   +0x0114 -> line 1455
 *   +0x011c -> line 1458
 *   +0x012c -> line 1460
 *   +0x0134 -> line 1461
 *   +0x013c -> line 1462
 *   +0x0144 -> line 1464
 *   +0x016c -> line 1467
 *   +0x0174 -> line 1472
 *   +0x0180 -> line 1474
 *   +0x01a4 -> line 1475
 *   +0x01b0 -> line 1477
 *   +0x01d8 -> line 1478
 *   +0x01e0 -> line 1481
 *   +0x01e8 -> line 1483
 *   +0x01f0 -> line 1486
 *   +0x0218 -> line 1489
 *   +0x0220 -> line 1494
 *   +0x022c -> line 1496
 *   +0x023c -> line 1498
 *   +0x0244 -> line 1499
 *   +0x024c -> line 1500
 *   +0x0254 -> line 1502
 *   +0x027c -> line 1505
 *   +0x0284 -> line 1516
 *   +0x02a4 -> line 1517
 *   +0x02b4 -> line 1518
 *   +0x02c4 -> line 1519
 *   +0x02d4 -> line 1521
 *   +0x02f8 -> line 1525
 *   +0x0304 -> line 1527
 *   +0x0330 -> line 1528
 *   +0x0338 -> line 1531
 *   +0x0358 -> line 1532
 *   +0x0370 -> line 1534
 *   +0x037c -> line 1535
 *   +0x038c -> line 1536
 *   +0x039c -> line 1538
 *   +0x03b4 -> line 1541
 *   +0x03c4 -> line 1542
 *   +0x03d0 -> line 1543
 *   +0x03d4 -> line 1542
 *   +0x03d8 -> line 1543
 *   +0x03e4 -> line 1549
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void C_PS2MC_Manager::ManageCheckOneDirectory(void)
{
    char TempString[1024];
    int TotalDirectorySize;
    int i;
    _SceeMemCardFunctionResult functionResult;
    int returnVal;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\tempgrp\PS2MC\PS2MemoryCard.cpp lines 1065–1397 */
/* addr: 0x00331100  size: 1664 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1065
 *   +0x0004 -> line 1072
 *   +0x0008 -> line 1065
 *   +0x0014 -> line 1072
 *   +0x0028 -> line 1075
 *   +0x002c -> line 1072
 *   +0x0034 -> line 1075
 *   +0x0048 -> line 1079
 *   +0x005c -> line 1082
 *   +0x007c -> line 1088
 *   +0x0080 -> line 1085
 *   +0x0084 -> line 1087
 *   +0x008c -> line 1088
 *   +0x00dc -> line 1091
 *   +0x00e4 -> line 1093
 *   +0x00f0 -> line 1095
 *   +0x00f4 -> line 1096
 *   +0x00f8 -> line 1101
 *   +0x0104 -> line 1103
 *   +0x0110 -> line 1105
 *   +0x0118 -> line 1106
 *   +0x0124 -> line 1108
 *   +0x012c -> line 1115
 *   +0x0154 -> line 1122
 *   +0x0170 -> line 1124
 *   +0x0178 -> line 1133
 *   +0x0190 -> line 1136
 *   +0x01a8 -> line 1144
 *   +0x01f0 -> line 1146
 *   +0x01fc -> line 1150
 *   +0x0200 -> line 1154
 *   +0x020c -> line 1156
 *   +0x0218 -> line 1159
 *   +0x022c -> line 1160
 *   +0x0248 -> line 1162
 *   +0x0258 -> line 1167
 *   +0x0264 -> line 1168
 *   +0x0268 -> line 1167
 *   +0x026c -> line 1168
 *   +0x0288 -> line 1169
 *   +0x0290 -> line 1173
 *   +0x0294 -> line 1177
 *   +0x029c -> line 1178
 *   +0x02b8 -> line 1181
 *   +0x02bc -> line 1184
 *   +0x02c8 -> line 1187
 *   +0x02d8 -> line 1188
 *   +0x02ec -> line 1192
 *   +0x030c -> line 1193
 *   +0x0314 -> line 1199
 *   +0x031c -> line 1204
 *   +0x0340 -> line 1207
 *   +0x0348 -> line 1210
 *   +0x0360 -> line 1212
 *   +0x0378 -> line 1213
 *   +0x0380 -> line 1216
 *   +0x03a4 -> line 1223
 *   +0x03ac -> line 1232
 *   +0x03cc -> line 1235
 *   +0x03f8 -> line 1236
 *   +0x0400 -> line 1237
 *   +0x0408 -> line 1239
 *   +0x0418 -> line 1242
 *   +0x041c -> line 1241
 *   +0x0424 -> line 1242
 *   +0x044c -> line 1243
 *   +0x046c -> line 1248
 *   +0x0474 -> line 1257
 *   +0x0494 -> line 1259
 *   +0x049c -> line 1260
 *   +0x04a4 -> line 1263
 *   +0x04ac -> line 1266
 *   +0x04b4 -> line 1271
 *   +0x04bc -> line 1273
 *   +0x04c4 -> line 1279
 *   +0x04cc -> line 1281
 *   +0x04d4 -> line 1288
 *   +0x04dc -> line 1290
 *   +0x04e4 -> line 1294
 *   +0x04ec -> line 1296
 *   +0x04f4 -> line 1304
 *   +0x04fc -> line 1306
 *   +0x0504 -> line 1316
 *   +0x050c -> line 1318
 *   +0x0514 -> line 1327
 *   +0x051c -> line 1329
 *   +0x0524 -> line 1337
 *   +0x052c -> line 1339
 *   +0x0534 -> line 1343
 *   +0x053c -> line 1345
 *   +0x0544 -> line 1349
 *   +0x054c -> line 1351
 *   +0x0554 -> line 1361
 *   +0x0564 -> line 1363
 *   +0x057c -> line 1365
 *   +0x05a0 -> line 1367
 *   +0x05a8 -> line 1368
 *   +0x05b4 -> line 1370
 *   +0x05c8 -> line 1371
 *   +0x05e4 -> line 1373
 *   +0x05f4 -> line 1378
 *   +0x05f8 -> line 1375
 *   +0x05fc -> line 1378
 *   +0x0618 -> line 1379
 *   +0x0620 -> line 1380
 *   +0x0640 -> line 1386
 *   +0x0648 -> line 1390
 *   +0x0668 -> line 1392
 *   +0x0670 -> line 1397
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void C_PS2MC_Manager::UpdateStatus(void)
{
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\tempgrp\PS2MC\PS2MemoryCard.cpp lines 880–949 */
/* addr: 0x00331780  size: 644 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 880
 *   +0x0004 -> line 881
 *   +0x0008 -> line 880
 *   +0x000c -> line 883
 *   +0x0010 -> line 881
 *   +0x0014 -> line 882
 *   +0x001c -> line 916
 *   +0x0020 -> line 883
 *   +0x0024 -> line 884
 *   +0x002c -> line 916
 *   +0x0030 -> line 887
 *   +0x0034 -> line 916
 *   +0x0038 -> line 888
 *   +0x003c -> line 916
 *   +0x0040 -> line 889
 *   +0x0044 -> line 916
 *   +0x0048 -> line 890
 *   +0x004c -> line 916
 *   +0x0050 -> line 891
 *   +0x0054 -> line 916
 *   +0x0058 -> line 892
 *   +0x005c -> line 917
 *   +0x0060 -> line 893
 *   +0x0064 -> line 918
 *   +0x0068 -> line 894
 *   +0x006c -> line 895
 *   +0x0070 -> line 916
 *   +0x009c -> line 917
 *   +0x00c8 -> line 918
 *   +0x00f4 -> line 920
 *   +0x0120 -> line 921
 *   +0x014c -> line 922
 *   +0x0178 -> line 925
 *   +0x01a4 -> line 926
 *   +0x01d0 -> line 927
 *   +0x01fc -> line 929
 *   +0x0228 -> line 930
 *   +0x0254 -> line 931
 *   +0x027c -> line 949
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void C_PS2MC_Manager::CreateIconFile(void)
{
    PS2MC_tdstIconAnimSection_* pIconAnimation;
    PS2MC_tdstIconVertex_* pIconVtx;
    PS2MC_tdstIcon_* pIconHeader;
    char* pData;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\tempgrp\PS2MC\PS2MemoryCard.cpp lines 745–808 */
/* addr: 0x00331a10  size: 432 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 745
 *   +0x0004 -> line 747
 *   +0x0008 -> line 745
 *   +0x000c -> line 754
 *   +0x0010 -> line 745
 *   +0x0014 -> line 760
 *   +0x0018 -> line 745
 *   +0x0024 -> line 747
 *   +0x0044 -> line 754
 *   +0x004c -> line 760
 *   +0x0054 -> line 766
 *   +0x0058 -> line 769
 *   +0x0064 -> line 747
 *   +0x0068 -> line 766
 *   +0x006c -> line 747
 *   +0x0070 -> line 766
 *   +0x0074 -> line 747
 *   +0x007c -> line 754
 *   +0x0094 -> line 760
 *   +0x00ac -> line 766
 *   +0x00b0 -> line 769
 *   +0x00b8 -> line 772
 *   +0x00c8 -> line 777
 *   +0x00d0 -> line 779
 *   +0x00ec -> line 780
 *   +0x00f4 -> line 783
 *   +0x010c -> line 786
 *   +0x0120 -> line 789
 *   +0x0124 -> line 792
 *   +0x0128 -> line 789
 *   +0x012c -> line 792
 *   +0x0138 -> line 793
 *   +0x0148 -> line 794
 *   +0x0158 -> line 795
 *   +0x0168 -> line 800
 *   +0x0178 -> line 801
 *   +0x0188 -> line 802
 *   +0x0198 -> line 808
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void C_PS2MC_Manager::FillIconSys(char* _szTitleName, char bPhoto)
{
    char Title[66];
    int bgcolor[4][4] = {{128, 0, 0, 0}, {0, 128, 0, 0}, {0, 0, 128, 0}, {128, 128, 128, 0}};
    float lightdir[3][4] = {{0.5f, 0.5f, 0.5f, 0}, {0, -0.4f, -0.1f, 0}, {-0.5f, -0.5f, 0.5f, 0}};
    float lightcol[3][4] = {{0.48f, 0.48f, 0.03f, 0}, {0.5f, 0.33f, 0.2f, 0}, {0.14f, 0.14f, 0.38f, 0}};
    float ambient[4] = {0.5f, 0.5f, 0.5f, 0};
    memset(&m_iconSys, 0, sizeof(m_iconSys));
    strcpy((char*)m_iconSys.Head, "PS2D");
    if (bPhoto)
        sprintf(Title, "%s\n%s", "Rayman3 Photo", _szTitleName);
    else
        sprintf(Title, "%s\n%s", "Rayman3 Data", _szTitleName);
    SVG_fn_szAsciiToSJIS((char*)m_iconSys.TitleName, 33, Title, &m_iconSys.OffsLF);
    m_iconSys.TransRate = 0x60;
    memcpy(m_iconSys.BgColor, bgcolor, sizeof(bgcolor));
    memcpy(m_iconSys.LightDir, lightdir, sizeof(lightdir));
    memcpy(m_iconSys.LightColor, lightcol, sizeof(lightcol));
    memcpy(m_iconSys.Ambient, ambient, sizeof(ambient));
    strcpy((char*)m_iconSys.FnameView, (char*)PS2MC_g_IconDesc[0].szFileNameSave);
    strcpy((char*)m_iconSys.FnameCopy, (char*)PS2MC_g_IconDesc[0].szFileNameSave);
    strcpy((char*)m_iconSys.FnameDel, (char*)PS2MC_g_IconDesc[0].szFileNameSave);
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\tempgrp\PS2MC\PS2MemoryCard.cpp lines 580–693 */
/* addr: 0x00331bc0  size: 528 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 580
 *   +0x0024 -> line 585
 *   +0x002c -> line 586
 *   +0x0030 -> line 596
 *   +0x0034 -> line 589
 *   +0x0038 -> line 596
 *   +0x003c -> line 590
 *   +0x0040 -> line 596
 *   +0x0050 -> line 597
 *   +0x0058 -> line 601
 *   +0x006c -> line 607
 *   +0x0070 -> line 609
 *   +0x007c -> line 611
 *   +0x0088 -> line 613
 *   +0x00a8 -> line 614
 *   +0x00c0 -> line 615
 *   +0x00d0 -> line 622
 *   +0x00d8 -> line 629
 *   +0x00f8 -> line 630
 *   +0x0100 -> line 633
 *   +0x010c -> line 635
 *   +0x011c -> line 638
 *   +0x0128 -> line 641
 *   +0x0134 -> line 643
 *   +0x0138 -> line 644
 *   +0x0148 -> line 647
 *   +0x0150 -> line 649
 *   +0x015c -> line 655
 *   +0x016c -> line 666
 *   +0x0170 -> line 655
 *   +0x0174 -> line 666
 *   +0x0178 -> line 655
 *   +0x017c -> line 666
 *   +0x0180 -> line 655
 *   +0x0188 -> line 666
 *   +0x018c -> line 681
 *   +0x019c -> line 685
 *   +0x01a0 -> line 689
 *   +0x01a4 -> line 685
 *   +0x01a8 -> line 691
 *   +0x01ac -> line 685
 *   +0x01b0 -> line 689
 *   +0x01b4 -> line 685
 *   +0x01b8 -> line 689
 *   +0x01bc -> line 685
 *   +0x01c0 -> line 689
 *   +0x01c4 -> line 685
 *   +0x01c8 -> line 691
 *   +0x01cc -> line 685
 *   +0x01d8 -> line 689
 *   +0x01e8 -> line 693
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
unsigned int C_PS2MC_Manager::Init(unsigned int _Port, unsigned int _Slot)
{
    int iLength;
    int hFile;
    unsigned int i;
    ESceeResult RetValue;
    /* TODO: decompile from asm/... */
}
