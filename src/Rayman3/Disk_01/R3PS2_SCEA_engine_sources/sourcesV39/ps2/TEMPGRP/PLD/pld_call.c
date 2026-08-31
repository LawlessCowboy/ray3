/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\PLD\pld_call.c */
/* Language: C++ */
/* Compiler: MW MIPS C Compiler */

#include <stddef.h>

/* Recovered aggregate layouts from MWCC debug type records. */
typedef union _SND_tduRefEvt _SND_tduRefEvt;
typedef struct AI_tdstMind_ AI_tdstMind_;
typedef struct SECT_tdstListOfDNMLights_ SECT_tdstListOfDNMLights_;
typedef struct tdstNTTO_ tdstNTTO_;
typedef struct tdstComport_ tdstComport_;

union _SND_tduRefEvt {
    unsigned int Id; /* +0x0 */
    int pstPtr; /* +0x0 */
};

struct AI_tdstMind_ {
    int p_stAIModel; /* +0x0 */
    int p_stIntelligence; /* +0x4 */
    int p_stReflex; /* +0x8 */
    int p_stDsgMem; /* +0xc */
    unsigned char bDoingIntel; /* +0x10 */
};

struct SECT_tdstListOfDNMLights_ {
    int hDNMLights; /* +0x0 */
    int hNextBrotherDyn; /* +0x4 */
    int hPrevBrotherDyn; /* +0x8 */
    int hFatherDyn; /* +0xc */
};

struct tdstNTTO_ {
    unsigned short uwTypeOfObject; /* +0x0 */
    unsigned short ucNumberInTable; /* +0x2 */
    unsigned char ucTransparency; /* +0x4 */
};

struct tdstComport_ {
    int p_stRules; /* +0x0 */
    int p_stSchedule; /* +0x4 */
    unsigned char ucNbRules; /* +0x8 */
};

unsigned char g_ucGLDModuleId;
int g_p_stCurrentMatrix;
/* array */ int g_aDEF_stMatrixStack[1];
int g_lNbMatrixInStack;
int gp_lBeginMapSoundEventID;
_SND_tduRefEvt g_stBeginMapSoundEvent;
unsigned int PLD_g_ulNumberOfFixVisualMaterials;
unsigned int PLD_g_ulNumberOfTransitionVisualMaterials;
/* aggregate */ int g_stStructArray;
unsigned int g_ulEngineClass;
unsigned int PLD_g_NextVideoParamSaved;
unsigned int g_bIsInTutorial;
unsigned int g_bIsInMapinter;
unsigned int g_bIsInMenuMap;
unsigned int g_bIsInEncyclo;
unsigned int bSwamp_60;
unsigned int g_bEndGame;
/* aggregate */ int MapInterName;
unsigned char g_ucIdOfNextTransitionbloc;
unsigned long g_NbPersoWithSettingsInFix;
int g_iNbPersoOfFixInDynamicHierarchy;
int G_DMM_CurrentAllocMode;
int g_bALoadComplete;
/* aggregate */ int szAsynchronousLoadLevelName;
/* aggregate */ int gp_stPersoInDynamicHierarchy;
/* aggregate */ int g_a_SettingsOfPerso;
/* aggregate */ int g_pstMainCharacterList;
int g_pstBinaryViewport;
/* aggregate */ int PLD_Saved_stNextVideoToPlay;
/* aggregate */ int szLastFixLoaded;
unsigned int ChosenLanguage;
unsigned int g_ulFixChecksum;
int g_a_u32SoundEventTable;
unsigned int g_ulSoundEventTableIndexInFix;
unsigned int g_ulSoundEventTableIndex;
unsigned int g_u32FixBankId;
int g_lNumberOfTexturesInFix;
int g_a_LinksOfSuperObjectInFix;
int g_pcAnimationsTimeStamp;
int g_pcLvlTimeStamp;
int g_pcLanguageTimeStamp;
/* aggregate */ int g_hMainCharacterList;
/* aggregate */ int g_stEngineStructure;
/* aggregate */ int fn_vResetTransitionAllocatorEven;
/* aggregate */ int fn_vTransitionDeallocatorEven;
/* aggregate */ int fn_vResetTransitionAllocatorOdd;
/* aggregate */ int fn_vTransitionDeallocatorOdd;
_tdstFixInfo g_stFixInfo;
unsigned int GLI_g_ulNumberOfVisualMaterials;
/* aggregate */ int GLI_g_StaticCopyOfArrayOfVisualMaterial;
/* aggregate */ int g_ax_pA3dGENERAL;
int gp_stDynamicWorld;
int g_stNewCineManager;
unsigned char g_bBeginMapSoundEventFlag;
_SND_tduRefEvt g_stBeginMapSoundEvent;
int g_hDemoSOList;
int gp_stNewDynamicWorld;
unsigned char g_bLevelHasTransitionMemory;
/* aggregate */ int SAI_g_stInternalStructure;
int COL_g_lMaxNumberOfTaggedFaces;
int COL_g_d_lTaggedFacesTable;
unsigned char IPO_g_ucNumberOfRLITables;
int g_hCharacterLauchingSoundEvents;
int gp_stLight;
/* aggregate */ int g_stObjectTypes;
tdstAlways_ g_stAlways;
int gs_hFirstSubMapPosition;
int SECT_hFatherSector;
int gp_stInactiveDynamicWorld;
int gp_stActualWorld;
int SECT_hNewFatherSector;
int gs_lNumberOfTextureToCreate;
int gs_aDEFTableOfTextureMemoryChannels;
int gs_aDEFTableOfTextureAlreadyRead;
int gp_stNewInactiveDynamicWorld;
int gp_stNewActualWorld;
int g_iLinkNumberA;
unsigned int G_IsLept15;
/* aggregate */ int g_ax_pDeformations;
/* aggregate */ int g_ax_pMorphData;
/* aggregate */ int g_ax_pEvents;
/* aggregate */ int g_ax_pKeyFrames;
/* aggregate */ int g_ax_pFramesKFIndex;
/* aggregate */ int g_ax_pFramesNumOfNTTO;
/* aggregate */ int g_ax_pChannels;
/* aggregate */ int g_ax_pOnlyFrames;
/* aggregate */ int g_ax_pNTTO;
/* aggregate */ int g_ax_pHierarchies;
/* aggregate */ int g_ax_pQuaternions;
/* aggregate */ int g_ax_pVectors;
/* aggregate */ int g_tdstStackInfos;
FON_tdstGeneral_ FON_g_stGeneral;
/* aggregate */ int g_aBinDataForMenu;
VID_tdstGeneral_ VID_g_stGeneralVideos;
/* aggregate */ int g_st_3DOS_EntryActions;
IPT_tdstInput_ IPT_g_hInputStructure;
unsigned char g_ucNbFontBitmap;
/* aggregate */ int g_TabBitmapFont;
/* aggregate */ int g_ListOfFonts;
unsigned char g_NbFont;
/* aggregate */ int RND_g_stRandomStructure;
int g_pcFixTimeStamp;

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\PLD\pld_call.c lines 129–129 */
/* addr: 0x0012c4a0  size: 36 bytes */
void SetPal50(void)
{
    /* line map: */
    /*   line 129 @ +0x000 */
    /*   line 129 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\PLD\pld_call.c lines 2789–2791 */
/* addr: 0x0012c4d0  size: 176 bytes */
void PLD_fn_vReinitPositionOfFixCharacters(void)
{
    unsigned long i;
    /* line map: */
    /*   line 2789 @ +0x000 */
    /*   line 2789 @ +0x000 */
    /*   line 2791 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\PLD\pld_call.c lines 2768–2778 */
/* addr: 0x0012c580  size: 92 bytes */
/*type_0x00*/ int PLD_fn_vUnLoadFix(void)
{
    /* line map: */
    /*   line 2768 @ +0x000 */
    /*   line 2768 @ +0x000 */
    /*   line 2771 @ +0x000 */
    /*   line 2776 @ +0x000 */
    /*   line 2778 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\PLD\pld_call.c lines 2680–2728 */
/* addr: 0x0012c5e0  size: 276 bytes */
void PLD_fn_vUnLoadTransition(/* function pointer */ int fn_vAllocatorReset, /* function pointer */ int fn_vDeallocator)
{
    /* aggregate */ int szTransitIdentifier;
    /* aggregate */ int eAreaToFree;
    int TransitionNumber;
    /* line map: */
    /*   line 2680 @ +0x000 */
    /*   line 2680 @ +0x000 */
    /*   line 2680 @ +0x000 */
    /*   line 2680 @ +0x000 */
    /*   line 2690 @ +0x000 */
    /*   line 2694 @ +0x000 */
    /*   line 2697 @ +0x000 */
    /*   line 2698 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\PLD\pld_call.c lines 2624–2665 */
/* addr: 0x0012c700  size: 184 bytes */
void PLD_fn_vUnLoadLevel(void)
{
    int i;
    /* line map: */
    /*   line 2624 @ +0x000 */
    /*   line 2624 @ +0x000 */
    /*   line 2640 @ +0x000 */
    /*   line 2651 @ +0x000 */
    /*   line 2665 @ +0x000 */
    /*   line 2664 @ +0x000 */
    /*   line 2663 @ +0x000 */
    /*   line 2665 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\PLD\pld_call.c lines 2588–2610 */
/* addr: 0x0012c7c0  size: 268 bytes */
void PLD_fn_vUnLoadLevelFamilies(/* function pointer */ int p_stThisFamily)
{
    /* aggregate */ int s_szNumericName;
    /* line map: */
    /*   line 2588 @ +0x000 */
    /*   line 2596 @ +0x000 */
    /*   line 2610 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\PLD\pld_call.c lines 1579–2545 */
/* addr: 0x0012c8d0  size: 5268 bytes */
void PLD_fn_vLoadLevel(char* _szLevelName, /* function pointer */ int hCharacter, /* function pointer */ int p_stThisFamily, /* function pointer */ int p_stObject, tdstBrain_* h_Brain, /* function pointer */ int p_stObject, /* function pointer */ int hNextCharacter, /* function pointer */ int hCharacter, /* function pointer */ int dummy, /* function pointer */ int h_SupObject)
{
    unsigned char ucCharacterId;
    int i;
    unsigned char ucFamilyId;
    int i;
    char* pch_Next;
    /* aggregate */ int ch_Buffer;
    /* aggregate */ int ch_Buffer;
    unsigned int u32TextureChannel;
    unsigned int* pu32SoundEventIdArray;
    unsigned int u32NbSoundEventForLevel;
    unsigned int u32NbSoundEventForTransit;
    unsigned int u32NbSoundEvent;
    unsigned int u32MapSoundEventId;
    int s32NumberOfTexturesNotInFix;
    unsigned int u32DataClass;
    unsigned int u32NbCond;
    unsigned int u32NbFunc;
    unsigned int u32NbProc;
    unsigned int u32FixChecksum;
    unsigned int i;
    char* pcAnimCMBAddress;
    char* pcCMBAddress;
    char* pcTransitStartCMBAddress;
    char* pcStartCMBAddress;
    /* aggregate */ int s_szNumericName;
    /* aggregate */ int param0;
    /* line map: */
    /*   line 1579 @ +0x000 */
    /*   line 1579 @ +0x000 */
    /*   line 1582 @ +0x000 */
    /*   line 1584 @ +0x000 */
    /*   line 1588 @ +0x000 */
    /*   line 1617 @ +0x000 */
    /*   line 1633 @ +0x000 */
    /*   line 1644 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\PLD\pld_call.c lines 1457–1481 */
/* addr: 0x0012dd70  size: 240 bytes */
void fn_v_Transition_CorrectTextureChannelTable(/* function pointer */ int pMat)
{
    int j;
    int i;
    /* line map: */
    /*   line 1457 @ +0x000 */
    /*   line 1457 @ +0x000 */
    /*   line 1469 @ +0x000 */
    /*   line 1473 @ +0x000 */
    /*   line 1475 @ +0x000 */
    /*   line 1478 @ +0x000 */
    /*   line 1481 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\PLD\pld_call.c lines 1407–1439 */
/* addr: 0x0012de60  size: 308 bytes */
void fn_v_Transition_CorrectTextureChannel(GLI_tdstTexture_* p_stTexture)
{
    int i;
    /* line map: */
    /*   line 1407 @ +0x000 */
    /*   line 1409 @ +0x000 */
    /*   line 1412 @ +0x000 */
    /*   line 1418 @ +0x000 */
    /*   line 1422 @ +0x000 */
    /*   line 1425 @ +0x000 */
    /*   line 1427 @ +0x000 */
    /*   line 1431 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\PLD\pld_call.c lines 1398–1398 */
/* addr: 0x0012dfa0  size: 40 bytes */
int debug_printf(void)
{
    /* line map: */
    /*   line 1398 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\PLD\pld_call.c lines 1306–1330 */
/* addr: 0x0012dfd0  size: 272 bytes */
void CheckForTutorial(char* Name)
{
    int i;
    /* aggregate */ int TempString;
    /* line map: */
    /*   line 1306 @ +0x000 */
    /*   line 1317 @ +0x000 */
    /*   line 1306 @ +0x000 */
    /*   line 1311 @ +0x000 */
    /*   line 1313 @ +0x000 */
    /*   line 1320 @ +0x000 */
    /*   line 1322 @ +0x000 */
    /*   line 1325 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\PLD\pld_call.c lines 1203–1220 */
/* addr: 0x0012e0e0  size: 420 bytes */
void PLD_fn_vClearAnimationsBanks(int iStartBank, int iNumberOfBanks)
{
    int iEndBank;
    int i;
    /* line map: */
    /*   line 1203 @ +0x000 */
    /*   line 1205 @ +0x000 */
    /*   line 1206 @ +0x000 */
    /*   line 1206 @ +0x000 */
    /*   line 1207 @ +0x000 */
    /*   line 1208 @ +0x000 */
    /*   line 1210 @ +0x000 */
    /*   line 1212 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\PLD\pld_call.c lines 1165–1188 */
/* addr: 0x0012e290  size: 928 bytes */
void PLD_fn_vReadAnimationsBanks(char** _ppcCMBAddress, int iStartBank, int iNumberOfBanks)
{
    char* pcCMBStartAddress;
    int iEndBank;
    int i;
    /* line map: */
    /*   line 1165 @ +0x000 */
    /*   line 1165 @ +0x000 */
    /*   line 1165 @ +0x000 */
    /*   line 1165 @ +0x000 */
    /*   line 1165 @ +0x000 */
    /*   line 1165 @ +0x000 */
    /*   line 1165 @ +0x000 */
    /*   line 1170 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\PLD\pld_call.c lines 670–1123 */
/* addr: 0x0012e630  size: 2428 bytes */
void PLD_fn_vLoadFix(/* function pointer */ int h_SupObject)
{
    int iTemp;
    char LangageValue;
    unsigned int* pu32SoundEventIdArray;
    unsigned int u32NbSoundEvent;
    unsigned int u32DataClass;
    unsigned int u32NbCond;
    unsigned int u32NbFunc;
    unsigned int u32NbProc;
    char* pcAnimCMBAddress;
    char* pcCMBAddress;
    char* pcStartCMBAddress;
    unsigned int i;
    /* line map: */
    /*   line 670 @ +0x000 */
    /*   line 699 @ +0x000 */
    /*   line 699 @ +0x000 */
    /*   line 716 @ +0x000 */
    /*   line 726 @ +0x000 */
    /*   line 726 @ +0x000 */
    /*   line 732 @ +0x000 */
    /*   line 752 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\PLD\pld_call.c lines 568–601 */
/* addr: 0x0012efb0  size: 172 bytes */
void PLD_fn_pcLoadArea(/* aggregate */ int _eAreaId, char* _szAreaName)
{
    char* szFilename;
    unsigned int u32AreaId;
    /* line map: */
    /*   line 568 @ +0x000 */
    /*   line 573 @ +0x000 */
    /*   line 578 @ +0x000 */
    /*   line 594 @ +0x000 */
    /*   line 601 @ +0x000 */
    /* TODO: decompile from asm/... */
}
