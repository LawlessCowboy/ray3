/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\GameMenu2D\Specif\MemoryCard.cxx */
/* Language: C */
/* Compiler: MW MIPS C Compiler */

#include <stddef.h>

#include "r3/ENG.h"

#pragma cplusplus off

/* Layouts from DefineMenu2D.c; only the fields this unit uses are named. */
typedef struct tdstFileEntry_ {
    unsigned int Reserved_Key; /* +0x0 */
    unsigned int Reserved_Key2; /* +0x4 */
    char Name[8]; /* +0x8 */
    char DateTime[26]; /* +0x10 */
    unsigned int ulScore; /* +0x2c */
    unsigned int ulNbCage; /* +0x30 */
} tdstFileEntry_;

typedef enum anon_enum_009454b5 {
    eSaveFileTypePage = 0,
    eLoadFileTypePage = 1,
    eLevelTypePage = 2,
    eGameTypePage = 3,
    eOptionsTypePage = 4,
    eControlOptionTypePage = 5,
    eAudioOptionTypePage = 6,
    eVideoOptionTypePage = 7,
    eBonusTypePage = 8,
    eArcadeTypePage = 9,
    eCinematicTypePage = 10,
    eXTraTypePage = 11,
    eAlbumTypePage = 12,
    eHallOfFameTypePage = 13,
    eStartMenuTypePage = 14,
    eCenterScreenTypePage = 15,
    ePal60_1_TypePage = 16,
    ePal60_2_TypePage = 17,
    ePal60_3_TypePage = 18,
    eProgressive_1_TypePage = 19,
    eProgressive_2_TypePage = 20,
    eProgressive_3_TypePage = 21,
    eEndOfGamePage = 22
} anon_enum_009454b5;

typedef struct tdstMenu2DPages_ {
    struct GLI_tdstMaterial_* hMaterial; /* +0x0 */
    anon_enum_009454b5 eTypePage; /* +0x4 */
    char Title[50]; /* +0x8 */
    char aText[10][50]; /* +0x3a */
    char abGrayed[10]; /* +0x22e */
    char aValue[10]; /* +0x238 */
    unsigned int NbSelection; /* +0x244 */
    unsigned int NbEntry; /* +0x248 */
    unsigned int CurrentFirstEntry; /* +0x24c */
} tdstMenu2DPages_;

typedef struct tdst_Album_ {
    float fPicturePercentage; /* +0x0 */
    int bMoveForward; /* +0x4 */
    int bMoveBackward; /* +0x8 */
    char szFileName[256]; /* +0xc */
    int lPreviousNextInc; /* +0x10c */
    int lSnapID; /* +0x110 */
    int lSnapID2; /* +0x114 */
} tdst_Album_;

typedef struct anon_2 {
    unsigned int ulNbCage; /* +0x0 */
    unsigned int ulScore; /* +0x4 */
} anon_2;

typedef struct tdstEnvValue_ {
    float fNbCage;
    float fScore;
} tdstEnvValue_;

typedef struct SAV2_tdstHeader_ {
    anon_2 aEnvValue[10]; /* +0x0 */
    unsigned int aForKeyAlgo[4]; /* +0x50 */
    int EndOfGameIsDone; /* +0x60 */
    int MaxIndCurrentEnv; /* +0x64 */
    unsigned char stMenuOptions[12]; /* +0x68 */
    unsigned int ulWarnedUserAboutAutoSave; /* +0x74 */
    int RevisitMode; /* +0x78 */
    int RevisitEnvScore; /* +0x7c */
    int RevisitGlobalScore; /* +0x80 */
    int RevisitEnvironment; /* +0x84 */
    int RevisitOriginEnvironment; /* +0x88 */
    char szLevelName[20]; /* +0x8c */
    char szLevelNameAfterRevisit[20]; /* +0xa0 */
} SAV2_tdstHeader_;

typedef struct SAV2_tdstList_ {
    SAV2_tdstHeader_ stListHeader; /* +0x0 */
    unsigned int SAV2_ListAnchor[3]; /* +0xb4 */
} SAV2_tdstList_;

extern tdstFileEntry_ g_aFileEntryArray[100];
extern tdstMenu2DPages_ aMenu2DPages[35];
extern tdst_Album_ g_stAlbum;
extern anon_2 g_aEnvValue[10];
extern SAV2_tdstList_ SAV2_g_stList;

extern int g_AlbumPage;
extern int g_MustCheckMC;
extern int g_CurrentMenu2DPage;
extern int g_CurrentActionMenu2D;
extern int g_AlbumHadMemoryCardAtInit;
extern int g_Menu2D_IsInterrupted;
extern int g_LoadingGame;
extern int MNU_g_SavingScreenshot;
extern int g_RevisitMode;
extern int g_RevisitCurrentGlobalScore;
extern int g_RevisitCurrentEnvScore;
extern int g_RevisitEnvScoreAtBeginingOfLevel;
extern int g_RevisitGlobalScoreAtBeginingOfLevel;
extern unsigned int g_IndCurrentEnv;
extern int g_GlobalScoreAtBeginingOfLevel;
extern int g_CurrentEnvScoreAtBeginingOfLevel;
extern int g_CurrentEnvInit;
extern int GLI_g_PerformAutosaveAfterVideo;
extern char g_CurrentSaveName[];
extern int g_bAlbumInitialized;
extern unsigned int PS2MC_g_NbFilesFound;
extern int g_bCurrentMaterialBuffer;
extern int g_bAlbumIsWorking;
extern int g_bAlbumLoadInProgress;
extern int g_bAlbumLoadSucess;
extern int g_StartMenuPage;
extern unsigned int g_CurrentSelection;
extern int g_GamePage;
extern int g_SavePage;
extern int g_LoadPage;
extern int g_2DMenuID;
extern int g_hFixMaterialForAlbum[2];
extern int g_PAL60Page1;
extern int g_PAL60Page2;
extern int g_PAL60Page3;
extern int g_PScanPage1;
extern int g_PScanPage2;
extern int g_PScanPage3;
extern int g_PreviousVideoMode;
extern unsigned int g_SelectedTime;
extern tdstEngineStructure_ g_stEngineStructure;
extern int g_VideoOptionPage;

typedef struct _tdstBinarizedDataForMenu {
    int hText; /* +0x0 */
} _tdstBinarizedDataForMenu;
extern _tdstBinarizedDataForMenu g_aBinDataForMenu[105];

char* FON_fn_szGetTextPointerForHandle(int hString);
void fn_vPlaySoundInGameMenu2D(unsigned int uiGameMenuSoundID);

char* strcpy(char* dst, const char* src);
int PS2MC_GetCurrentMemoryCardStatus(void);
int PS2MC_HasToCheckMCFull(void);
void PS2MC_fn_vDoBootCheck(void);
unsigned int PS2MC_fn_iGetFunctionResult(int FlagID);
void PS2MC_fn_vGetMemoryCardFileHeaders(tdstFileEntry_* p_stEntryArray, unsigned int NbMaxEntries, unsigned int* p_uiNbFilesFound, int bFast);
void PS2MC_vClearFlag(int FlagID);
void ReturnFromSubMenu(void);
unsigned char SAV2_fn_bUpdateAllDataFromLoadedFile(void);
void fn_vR3RecomputeGlobalScore(void);
void CloseInGameMenu2D(void);
void GAM_fn_vAskToChangeLevel(char* szNewLevelName, int i);
void fn_vPreviousSelection(void);
void fn_vGetScreenShotDefaultName(void);
int GLI_bLoadSnapShotTexture(char* pFileName, int* p_hMaterial);
void GLI_vUncompressScreenShotIntoMaterial(int* p_hMaterial);
void GLI_fn_vSwitchTo50Hz(void);
void GLI_fn_vSwitchTo60Hz(void);
void GLI_fn_vSwitchToProgressive60Hz(void);
unsigned char SAV2_fn_bSaveAllOnDisk(char* szFileName);

void GAM_fn_vSaveGameAfterVideoIfNeeded(void)
{
    int i;
    int offset;
    unsigned int ulIndE;
    anon_2* p;

    if (GLI_g_PerformAutosaveAfterVideo)
    {
        SAV2_fn_bSaveAllOnDisk(g_CurrentSaveName);
        g_aEnvValue[0].ulScore = 0; i = 1; offset = 8; do { p = (anon_2 *)((char *)g_aEnvValue + offset); g_aEnvValue[0].ulScore += p[0].ulScore; g_aEnvValue[0].ulScore += p[1].ulScore; g_aEnvValue[0].ulScore += p[2].ulScore; g_aEnvValue[0].ulScore += p[3].ulScore; g_aEnvValue[0].ulScore += p[4].ulScore; g_aEnvValue[0].ulScore += p[5].ulScore; g_aEnvValue[0].ulScore += p[6].ulScore; g_aEnvValue[0].ulScore += p[7].ulScore; i += 8; offset += 64; } while (i < 2); offset = i * 8; if (i < 10) { do { p = (anon_2 *)((char *)g_aEnvValue + offset); g_aEnvValue[0].ulScore += p->ulScore; i++; offset += 8; } while (i < 10); } g_RevisitCurrentGlobalScore = g_aEnvValue[0].ulScore; if (g_RevisitMode != 0) { ulIndE = g_IndCurrentEnv; g_RevisitEnvScoreAtBeginingOfLevel = g_RevisitCurrentEnvScore; g_RevisitGlobalScoreAtBeginingOfLevel = g_RevisitCurrentGlobalScore; fn_vR3RecomputeGlobalScore(); if (g_RevisitEnvScoreAtBeginingOfLevel > (ulIndE < 10 ? g_aEnvValue[ulIndE].ulScore : 0)) { if (g_IndCurrentEnv < 10) { g_aEnvValue[g_IndCurrentEnv].ulScore = g_RevisitEnvScoreAtBeginingOfLevel; } fn_vR3RecomputeGlobalScore(); } fn_vR3RecomputeGlobalScore(); if (g_aEnvValue[0].ulScore < g_RevisitGlobalScoreAtBeginingOfLevel) { g_aEnvValue[0].ulScore = g_RevisitGlobalScoreAtBeginingOfLevel; fn_vR3RecomputeGlobalScore(); } } fn_vR3RecomputeGlobalScore(); ulIndE = g_IndCurrentEnv; g_GlobalScoreAtBeginingOfLevel = g_aEnvValue[0].ulScore; fn_vR3RecomputeGlobalScore(); g_CurrentEnvScoreAtBeginingOfLevel = (ulIndE < 10) ? g_aEnvValue[ulIndE].ulScore : 0; g_CurrentEnvInit = g_IndCurrentEnv;
    }
    GLI_g_PerformAutosaveAfterVideo = 0;
}

void fn_vInterruptPalAndProgressiveVideoPages(void)
{
    if (g_CurrentMenu2DPage == g_PAL60Page2)
    {
        g_CurrentMenu2DPage = g_PAL60Page3;
        g_CurrentSelection = 2;
        switch (g_PreviousVideoMode)
        {
        case 0x32:
            GLI_fn_vSwitchTo50Hz();
            break;
        case 0x46:
            GLI_fn_vSwitchToProgressive60Hz();
            break;
        }
        ReturnFromSubMenu();
    }
    if (g_CurrentMenu2DPage == g_PScanPage2)
    {
        g_CurrentMenu2DPage = g_PScanPage3;
        g_CurrentSelection = 2;
        switch (g_PreviousVideoMode)
        {
        case 0x32:
            GLI_fn_vSwitchTo50Hz();
            break;
        case 0x3C:
            GLI_fn_vSwitchTo60Hz();
            break;
        }
        ReturnFromSubMenu();
    }
}

void fn_vManagePalAndProgressiveVideoPage(void)
{
    if (g_CurrentMenu2DPage == g_PAL60Page2)
    {
        if (g_stEngineStructure.stEngineTimer.ulCurrentTimerCount - g_SelectedTime >= 5000)
        {
            g_CurrentMenu2DPage = g_PAL60Page3;
            g_CurrentSelection = 2;
            switch (g_PreviousVideoMode)
            {
            case 0x32:
                GLI_fn_vSwitchTo50Hz();
                break;
            case 0x46:
                GLI_fn_vSwitchToProgressive60Hz();
                break;
            }
        }
    }
    if (g_CurrentMenu2DPage == g_PScanPage2)
    {
        if (g_stEngineStructure.stEngineTimer.ulCurrentTimerCount - g_SelectedTime >= 5000)
        {
            g_CurrentMenu2DPage = g_PScanPage3;
            g_CurrentSelection = 2;
            switch (g_PreviousVideoMode)
            {
            case 0x32:
                GLI_fn_vSwitchTo50Hz();
                break;
            case 0x3C:
                GLI_fn_vSwitchTo60Hz();
                break;
            }
        }
    }
}

void fn_vManageValidatePalAndProgressiveVideoPage(void)
{
    switch (aMenu2DPages[g_CurrentMenu2DPage].eTypePage)
    {
    case ePal60_1_TypePage:
        fn_vPlaySoundInGameMenu2D(3);
        GLI_fn_vSwitchTo60Hz();
        g_SelectedTime = g_stEngineStructure.stEngineTimer.ulCurrentTimerCount;
        g_CurrentMenu2DPage = g_PAL60Page2;
        break;
    case ePal60_3_TypePage:
        if (g_CurrentSelection == 1)
        {
            GLI_fn_vSwitchTo60Hz();
            strcpy(aMenu2DPages[g_VideoOptionPage].aText[2], FON_fn_szGetTextPointerForHandle(g_aBinDataForMenu[96].hText));
            strcpy(aMenu2DPages[g_VideoOptionPage].aText[3], FON_fn_szGetTextPointerForHandle(g_aBinDataForMenu[88].hText));
        }
        ReturnFromSubMenu();
        break;
    case eProgressive_1_TypePage:
        fn_vPlaySoundInGameMenu2D(3);
        GLI_fn_vSwitchToProgressive60Hz();
        g_SelectedTime = g_stEngineStructure.stEngineTimer.ulCurrentTimerCount;
        g_CurrentMenu2DPage = g_PScanPage2;
        break;
    case eProgressive_3_TypePage:
        if (g_CurrentSelection == 1)
        {
            GLI_fn_vSwitchToProgressive60Hz();
            strcpy(aMenu2DPages[g_VideoOptionPage].aText[2], FON_fn_szGetTextPointerForHandle(g_aBinDataForMenu[98].hText));
        }
        ReturnFromSubMenu();
        break;
    }
}

int fn_vDefineProgressiveScanPages(int IndSubMenuPage)
{
    g_PScanPage1 = IndSubMenuPage;
    aMenu2DPages[g_PScanPage1].eTypePage = eProgressive_1_TypePage;
    strcpy(aMenu2DPages[g_PScanPage1].Title, "");
    aMenu2DPages[g_PScanPage1].NbSelection = 0;
    aMenu2DPages[g_PScanPage1].NbEntry = 0;
    strcpy(aMenu2DPages[g_PScanPage1].aText[0], FON_fn_szGetTextPointerForHandle(g_aBinDataForMenu[94].hText));

    g_PScanPage2 = IndSubMenuPage + 1;
    aMenu2DPages[g_PScanPage2].eTypePage = eProgressive_2_TypePage;
    strcpy(aMenu2DPages[g_PScanPage2].Title, "");
    aMenu2DPages[g_PScanPage2].NbSelection = 0;
    aMenu2DPages[g_PScanPage2].NbEntry = 0;
    strcpy(aMenu2DPages[g_PScanPage2].aText[0], FON_fn_szGetTextPointerForHandle(g_aBinDataForMenu[92].hText));

    g_PScanPage3 = IndSubMenuPage + 2;
    aMenu2DPages[g_PScanPage3].eTypePage = eProgressive_3_TypePage;
    strcpy(aMenu2DPages[g_PScanPage3].Title, "");
    aMenu2DPages[g_PScanPage3].NbEntry = aMenu2DPages[g_PScanPage3].NbSelection = 2;
    strcpy(aMenu2DPages[g_PScanPage3].aText[0], FON_fn_szGetTextPointerForHandle(g_aBinDataForMenu[93].hText));

    return IndSubMenuPage + 3;
}

int fn_vDefinePalVideoPages(int IndSubMenuPage)
{
    g_PAL60Page1 = IndSubMenuPage;
    aMenu2DPages[g_PAL60Page1].eTypePage = ePal60_1_TypePage;
    strcpy(aMenu2DPages[g_PAL60Page1].Title, "");
    aMenu2DPages[g_PAL60Page1].NbSelection = 0;
    aMenu2DPages[g_PAL60Page1].NbEntry = 0;
    strcpy(aMenu2DPages[g_PAL60Page1].aText[0], FON_fn_szGetTextPointerForHandle(g_aBinDataForMenu[91].hText));

    g_PAL60Page2 = IndSubMenuPage + 1;
    aMenu2DPages[g_PAL60Page2].eTypePage = ePal60_2_TypePage;
    strcpy(aMenu2DPages[g_PAL60Page2].Title, "");
    aMenu2DPages[g_PAL60Page2].NbSelection = 0;
    aMenu2DPages[g_PAL60Page2].NbEntry = 0;
    strcpy(aMenu2DPages[g_PAL60Page2].aText[0], FON_fn_szGetTextPointerForHandle(g_aBinDataForMenu[92].hText));

    g_PAL60Page3 = IndSubMenuPage + 2;
    aMenu2DPages[g_PAL60Page3].eTypePage = ePal60_3_TypePage;
    strcpy(aMenu2DPages[g_PAL60Page3].Title, "");
    aMenu2DPages[g_PAL60Page3].NbEntry = aMenu2DPages[g_PAL60Page3].NbSelection = 2;
    strcpy(aMenu2DPages[g_PAL60Page3].aText[0], FON_fn_szGetTextPointerForHandle(g_aBinDataForMenu[93].hText));

    return IndSubMenuPage + 3;
}

int fn_dwFindNextSnappedPicture(int lSnapID, char* _szFileName)
{
    if (aMenu2DPages[g_AlbumPage].NbEntry && ((unsigned int)lSnapID < aMenu2DPages[g_AlbumPage].NbEntry))
    {
        lSnapID++;
        strcpy(_szFileName, g_aFileEntryArray[lSnapID].Name);
    }
    else if (lSnapID == aMenu2DPages[g_AlbumPage].NbEntry)
    {
        lSnapID = 0;
        strcpy(_szFileName, g_aFileEntryArray[0].Name);
    }
    else
    {
        lSnapID = aMenu2DPages[g_AlbumPage].NbEntry;
    }
    return lSnapID;
}

int fn_dwFindPreviousSnappedPicture(int lSnapID, char* _szFileName)
{
    if (lSnapID > 0)
    {
        lSnapID--;
        strcpy(_szFileName, g_aFileEntryArray[lSnapID].Name);
    }
    else
    {
        lSnapID = aMenu2DPages[g_AlbumPage].NbEntry;
    }
    return lSnapID;
}

#define M_vGrayLoadEntry(_Page) { aMenu2DPages[_Page].abGrayed[1] = 1; if (g_CurrentSelection == 1) fn_vPreviousSelection(); }

int fn_vSpecificManageMenu2D(void)
{
    int i;
    int offset;
    unsigned int uiIndex;
    unsigned int ulIndE;
    anon_2* p;
    tdstEnvValue_* p_fEnvValue;
    tdstEnvValue_* p_fSav2EnvValue;

    if (PS2MC_GetCurrentMemoryCardStatus() == 0)
    {
        g_MustCheckMC = 3;
    }

    if (g_CurrentMenu2DPage == g_AlbumPage)
    {
        if (g_CurrentActionMenu2D != 2)
        {
            if (g_AlbumHadMemoryCardAtInit != PS2MC_GetCurrentMemoryCardStatus())
            {
                ReturnFromSubMenu();
                return 0;
            }
        }
    }

    if (g_Menu2D_IsInterrupted)
    {
        fn_vInterruptPalAndProgressiveVideoPages();
        return 0;
    }

    if (PS2MC_GetCurrentMemoryCardStatus() == 0)
    {
        g_MustCheckMC = 3;
    }
    else
    {
        if (PS2MC_HasToCheckMCFull())
        {
            g_MustCheckMC = 3;
        }
        switch (g_MustCheckMC)
        {
        case 3:
            PS2MC_fn_vDoBootCheck();
            g_MustCheckMC--;
            break;
        case 2:
            if (PS2MC_fn_iGetFunctionResult(4))
            {
                g_MustCheckMC--;
            }
            break;
        }
    }

    if (g_CurrentMenu2DPage == g_LoadPage)
    {
        if (!((PS2MC_GetCurrentMemoryCardStatus() != 0 && g_MustCheckMC < 2) || g_CurrentActionMenu2D == 2))
        {
            ReturnFromSubMenu();
            return 0;
        }
        if (g_LoadingGame)
        {
            switch (PS2MC_fn_iGetFunctionResult(6))
            {
            case 1:
                g_LoadingGame = 0;
                SAV2_fn_bUpdateAllDataFromLoadedFile();
                for (uiIndex = 0; uiIndex < 10; uiIndex++) { p_fEnvValue = (tdstEnvValue_*)((char*)g_aEnvValue + uiIndex * 8); p_fSav2EnvValue = (tdstEnvValue_*)((char*)&SAV2_g_stList.stListHeader.aEnvValue[0] + uiIndex * 8); p_fEnvValue[0] = p_fSav2EnvValue[0]; }
                g_aEnvValue[0].ulScore = 0; i = 1; offset = 8; do { p = (anon_2 *)((char *)g_aEnvValue + offset); g_aEnvValue[0].ulScore += p[0].ulScore; g_aEnvValue[0].ulScore += p[1].ulScore; g_aEnvValue[0].ulScore += p[2].ulScore; g_aEnvValue[0].ulScore += p[3].ulScore; g_aEnvValue[0].ulScore += p[4].ulScore; g_aEnvValue[0].ulScore += p[5].ulScore; g_aEnvValue[0].ulScore += p[6].ulScore; g_aEnvValue[0].ulScore += p[7].ulScore; i += 8; offset += 64; } while (i < 2); offset = i * 8; if (i < 10) { do { p = (anon_2 *)((char *)g_aEnvValue + offset); g_aEnvValue[0].ulScore += p->ulScore; i++; offset += 8; } while (i < 10); } g_RevisitCurrentGlobalScore = g_aEnvValue[0].ulScore; if (g_RevisitMode != 0) { ulIndE = g_IndCurrentEnv; g_RevisitEnvScoreAtBeginingOfLevel = g_RevisitCurrentEnvScore; g_RevisitGlobalScoreAtBeginingOfLevel = g_RevisitCurrentGlobalScore; fn_vR3RecomputeGlobalScore(); if (g_RevisitEnvScoreAtBeginingOfLevel > (ulIndE < 10 ? g_aEnvValue[ulIndE].ulScore : 0)) { if (g_IndCurrentEnv < 10) { g_aEnvValue[g_IndCurrentEnv].ulScore = g_RevisitEnvScoreAtBeginingOfLevel; } fn_vR3RecomputeGlobalScore(); } fn_vR3RecomputeGlobalScore(); if (g_aEnvValue[0].ulScore < g_RevisitGlobalScoreAtBeginingOfLevel) { g_aEnvValue[0].ulScore = g_RevisitGlobalScoreAtBeginingOfLevel; fn_vR3RecomputeGlobalScore(); } } fn_vR3RecomputeGlobalScore(); ulIndE = g_IndCurrentEnv; g_GlobalScoreAtBeginingOfLevel = g_aEnvValue[0].ulScore; fn_vR3RecomputeGlobalScore(); g_CurrentEnvScoreAtBeginingOfLevel = (ulIndE < 10) ? g_aEnvValue[ulIndE].ulScore : 0; g_CurrentEnvInit = g_IndCurrentEnv;
                CloseInGameMenu2D();
                GAM_fn_vAskToChangeLevel(SAV2_g_stList.stListHeader.szLevelName, 0);
                break;
            case 2:
                g_LoadingGame = 0;
                break;
            }
        }
    }
    else if (g_CurrentMenu2DPage == g_AlbumPage)
    {
        if (g_CurrentActionMenu2D != 2)
        {
            if (g_AlbumHadMemoryCardAtInit != PS2MC_GetCurrentMemoryCardStatus())
            {
                ReturnFromSubMenu();
                return 0;
            }
            if (!g_bAlbumInitialized && PS2MC_fn_iGetFunctionResult(3) == 1)
            {
                g_stAlbum.lSnapID = 1;
                g_stAlbum.lSnapID2 = 1;
                g_stAlbum.fPicturePercentage = 1.0f;
                g_stAlbum.bMoveForward = 0;
                g_stAlbum.bMoveBackward = 0;
                g_bCurrentMaterialBuffer = 0;
                aMenu2DPages[g_AlbumPage].NbSelection = (PS2MC_g_NbFilesFound > 3) ? 3 : PS2MC_g_NbFilesFound; aMenu2DPages[g_AlbumPage].NbEntry = PS2MC_g_NbFilesFound;
                g_bAlbumInitialized = 1;
                strcpy(g_stAlbum.szFileName, g_aFileEntryArray[0].Name);
                g_stAlbum.lSnapID = 0;
                if (g_stAlbum.lSnapID != aMenu2DPages[g_AlbumPage].NbEntry)
                {
                    g_bAlbumIsWorking = 1;
                    g_bAlbumLoadInProgress = 1;
                    GLI_bLoadSnapShotTexture(g_stAlbum.szFileName, g_hFixMaterialForAlbum);
                }
            }
            else
            {
                if (g_bAlbumLoadInProgress == 1)
                {
                    switch (PS2MC_fn_iGetFunctionResult(7))
                    {
                    case 1:
                        GLI_vUncompressScreenShotIntoMaterial(g_hFixMaterialForAlbum);
                        g_bAlbumIsWorking = 0;
                        g_bAlbumLoadSucess = 1;
                        g_bAlbumLoadInProgress = 0;
                        break;
                    case 2:
                        if (PS2MC_GetCurrentMemoryCardStatus() != 0)
                        {
                            g_bAlbumLoadSucess = 0;
                        }
                        else
                        {
                            g_bAlbumLoadSucess = 0;
                            ReturnFromSubMenu();
                        }
                        g_bAlbumIsWorking = 0;
                        g_bAlbumLoadInProgress = 0;
                        break;
                    }
                }
            }
            }
    }
    else if (g_CurrentMenu2DPage == g_StartMenuPage)
    {
        if (PS2MC_GetCurrentMemoryCardStatus() == 0)
        {
            M_vGrayLoadEntry(g_StartMenuPage);
        }
        else if (g_CurrentActionMenu2D != 2)
        {
            if (g_MustCheckMC == 1)
            {
                M_vGrayLoadEntry(g_StartMenuPage);
                PS2MC_g_NbFilesFound = 0; PS2MC_fn_vGetMemoryCardFileHeaders(g_aFileEntryArray, 100, &PS2MC_g_NbFilesFound, 1); aMenu2DPages[g_LoadPage].NbSelection = 0; aMenu2DPages[g_LoadPage].NbEntry = 0; aMenu2DPages[g_LoadPage].CurrentFirstEntry = 0;
                g_MustCheckMC = 0;
            }
            switch (PS2MC_fn_iGetFunctionResult(2))
            {
            case 1:
                aMenu2DPages[g_LoadPage].NbSelection = (PS2MC_g_NbFilesFound > 3) ? 3 : PS2MC_g_NbFilesFound;
                aMenu2DPages[g_LoadPage].NbEntry = PS2MC_g_NbFilesFound;
                if (aMenu2DPages[g_LoadPage].NbEntry == 0)
                {
                    M_vGrayLoadEntry(g_StartMenuPage);
                }
                else
                {
                    aMenu2DPages[g_StartMenuPage].abGrayed[1] = 0;
                }
                break;
            case 2:
                M_vGrayLoadEntry(g_StartMenuPage);
                break;
            }
        }
    }
    else if (g_CurrentMenu2DPage == g_GamePage)
    {
        if (PS2MC_GetCurrentMemoryCardStatus() == 0)
        {
            M_vGrayLoadEntry(g_GamePage);
        }
        else if (g_CurrentActionMenu2D != 2)
        {
            if (g_MustCheckMC == 1)
            {
                M_vGrayLoadEntry(g_GamePage);
                PS2MC_g_NbFilesFound = 0; PS2MC_fn_vGetMemoryCardFileHeaders(g_aFileEntryArray, 100, &PS2MC_g_NbFilesFound, 1); aMenu2DPages[g_LoadPage].NbSelection = 0; aMenu2DPages[g_LoadPage].NbEntry = 0; aMenu2DPages[g_LoadPage].CurrentFirstEntry = 0;
                g_MustCheckMC = 0;
            }
            switch (PS2MC_fn_iGetFunctionResult(2))
            {
            case 1:
                aMenu2DPages[g_LoadPage].NbSelection = (PS2MC_g_NbFilesFound > 3) ? 3 : PS2MC_g_NbFilesFound;
                aMenu2DPages[g_LoadPage].NbEntry = PS2MC_g_NbFilesFound;
                if (aMenu2DPages[g_LoadPage].NbEntry == 0)
                {
                    M_vGrayLoadEntry(g_GamePage);
                }
                else
                {
                    aMenu2DPages[g_GamePage].abGrayed[1] = 0;
                }
                break;
            case 2:
                M_vGrayLoadEntry(g_GamePage);
                break;
            }
        }
    }

    if (MNU_g_SavingScreenshot && g_CurrentMenu2DPage == g_SavePage)
    {
        switch (PS2MC_fn_iGetFunctionResult(3))
        {
        case 1:
            fn_vGetScreenShotDefaultName();
            MNU_g_SavingScreenshot = 0;
            PS2MC_vClearFlag(3);
            break;
        case 2:
            PS2MC_g_NbFilesFound = 0;
            fn_vGetScreenShotDefaultName();
            MNU_g_SavingScreenshot = 0;
            PS2MC_vClearFlag(3);
            break;
        }
    }

    if (g_CurrentActionMenu2D == 1)
    {
        if (g_CurrentMenu2DPage == g_SavePage)
        {
            if (g_2DMenuID == 2)
            {
                switch (PS2MC_fn_iGetFunctionResult(5))
                {
                case 1:
                    ReturnFromSubMenu();
                    PS2MC_vClearFlag(0);
                    PS2MC_vClearFlag(5);
                    break;
                case 2:
                    g_CurrentActionMenu2D = 0;
                    PS2MC_vClearFlag(0);
                    PS2MC_vClearFlag(5);
                    break;
                }
            }
            else
            {
                switch (PS2MC_fn_iGetFunctionResult(0))
                {
                case 1:
                    ReturnFromSubMenu();
                    PS2MC_vClearFlag(0);
                    PS2MC_vClearFlag(5);
                    break;
                case 2:
                    g_CurrentActionMenu2D = 0;
                    PS2MC_vClearFlag(0);
                    PS2MC_vClearFlag(5);
                    break;
                }
            }
        }
        else if (g_CurrentMenu2DPage == g_LoadPage)
        {
            switch (PS2MC_fn_iGetFunctionResult(2))
            {
            case 1:
                aMenu2DPages[g_LoadPage].NbSelection = (PS2MC_g_NbFilesFound > 3) ? 3 : PS2MC_g_NbFilesFound;
                aMenu2DPages[g_LoadPage].NbEntry = PS2MC_g_NbFilesFound;
                g_CurrentActionMenu2D = 3;
                break;
            case 2:
                ReturnFromSubMenu();
                g_CurrentActionMenu2D = 3;
                break;
            }
        }
        else if (g_CurrentMenu2DPage == g_AlbumPage)
        {
            switch (PS2MC_fn_iGetFunctionResult(3))
            {
            case 1:
                aMenu2DPages[g_AlbumPage].NbSelection = (PS2MC_g_NbFilesFound > 3) ? 3 : PS2MC_g_NbFilesFound;
                aMenu2DPages[g_AlbumPage].NbEntry = PS2MC_g_NbFilesFound;
                g_CurrentActionMenu2D = 3;
                break;
            case 2:
                aMenu2DPages[g_AlbumPage].NbSelection = 0;
                aMenu2DPages[g_AlbumPage].NbEntry = 0;
                g_stAlbum.lSnapID = 0;
                g_CurrentActionMenu2D = 3;
                break;
            }
        }

    }

    return 1;
}
