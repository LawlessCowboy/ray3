/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\specif\ps2\GamSave.c */
/* Language: C */
/* Compiler: MW MIPS C Compiler */

#include <stddef.h>

/* Recovered aggregate layouts from MWCC debug type records. */
typedef struct stMorphData stMorphData;
typedef struct tdstGraphChainedListNode_ tdstGraphChainedListNode_;
typedef struct anon_0 anon_0;
typedef struct tdstAnim3d_ tdstAnim3d_;
typedef struct tdstSubAnim_ tdstSubAnim_;
typedef struct tdstEvent_ tdstEvent_;
typedef struct CINE_Manager_ CINE_Manager_;
typedef struct SECT_tdstListOfDNMLights_ SECT_tdstListOfDNMLights_;
typedef struct CINE_tdstCine_ CINE_tdstCine_;
typedef struct GEO_tdstEdge_ GEO_tdstEdge_;
typedef struct _stTimerCount _stTimerCount;
typedef struct SECT_tdstSector_ SECT_tdstSector_;
typedef struct tdstEngineTimerStructure_ tdstEngineTimerStructure_;
typedef struct SCT_tdstListOfSoundEvent_ SCT_tdstListOfSoundEvent_;
typedef struct tdstGameOptions_ tdstGameOptions_;
typedef union _SND_tduRefEvt _SND_tduRefEvt;

struct stMorphData {
    unsigned short uwChannelNumber; /* +0x0 */
    unsigned short uwFrameNumber; /* +0x2 */
    unsigned char ucNbTarget; /* +0x4 */
    unsigned char ucAlign[3]; /* +0x5 */
    short a_xIndexTargetMT[10]; /* +0x8 */
    unsigned char a_ucMorphingAmountMT[10]; /* +0x1c */
};

struct tdstGraphChainedListNode_ {
    int GraphChainedListNodeInfo; /* +0x0 */
    int p_NextGraphChainedListNode; /* +0x4 */
};

struct anon_0 {
    int year; /* +0x0 */
    int month; /* +0x4 */
    int day; /* +0x8 */
    int hour; /* +0xc */
    int minute; /* +0x10 */
    int second; /* +0x14 */
};

struct tdstAnim3d_ {
    unsigned short uwNumberOfFrames; /* +0x0 */
    unsigned char ucFrameRate; /* +0x2 */
    unsigned char ucMaxNumberOfElements; /* +0x3 */
    int d_stAnimEvent; /* +0x4 */
    int d_stMorphDataArray; /* +0x8 */
    unsigned short uwNumOfA3dGENERAL; /* +0xc */
    unsigned char ucNumberOfEvents; /* +0xe */
    unsigned char ucFlagMergeAnim; /* +0xf */
};

struct tdstSubAnim_ {
    int p_stSubAnim; /* +0x0 */
};

struct tdstEvent_ {
    int p_stfEventInTBL; /* +0x0 */
    unsigned short usEventNumberInTBL; /* +0x4 */
    unsigned short uwFrameNumber; /* +0x6 */
    unsigned short uwChannelNumber; /* +0x8 */
    unsigned short uwIsLocalized; /* +0xa */
};

struct CINE_Manager_ {
    /* aggregate */ int hCineList; /* +0x0 */
    /* aggregate */ int gp_stFixedCameraMatrix; /* +0x10 */
    int gp_stSPOHandleCamera; /* +0x70 */
};

struct SECT_tdstListOfDNMLights_ {
    int hDNMLights; /* +0x0 */
    int hNextBrotherDyn; /* +0x4 */
    int hPrevBrotherDyn; /* +0x8 */
    int hFatherDyn; /* +0xc */
};

struct CINE_tdstCine_ {
    /* aggregate */ int hActorList; /* +0x0 */
    int hNextBrotherDyn; /* +0xc */
    int hPrevBrotherDyn; /* +0x10 */
    int hFatherDyn; /* +0x14 */
    unsigned char bPlaying; /* +0x18 */
    int lGenerateEvent; /* +0x1c */
    char szName[255]; /* +0x20 */
};

struct GEO_tdstEdge_ {
    short xPoints[2]; /* +0x0 */
    /* array */ int st_VectorPoints[2]; /* +0x4 */
};

struct _stTimerCount {
    unsigned long m_ulLowPart; /* +0x0 */
    unsigned long m_ulHighPart; /* +0x8 */
};

struct SECT_tdstSector_ {
    /* aggregate */ int stListOfCharacters; /* +0x0 */
    /* aggregate */ int stListOfStaticLights; /* +0xc */
    /* aggregate */ int stListOfDNMLights; /* +0x14 */
    /* aggregate */ int stListOfSectorsInGraphicInteraction; /* +0x20 */
    /* aggregate */ int stListOfSectorsInCollisionInteraction; /* +0x28 */
    /* aggregate */ int stListOfSectorsInActivityInteraction; /* +0x30 */
    /* aggregate */ int stListOfSectorsInSoundInteraction; /* +0x38 */
    /* aggregate */ int stListOfSoundEvent; /* +0x40 */
    /* array */ int stMinMaxPoints[2]; /* +0x48 */
    float xZFar; /* +0x60 */
    unsigned char xVirtual; /* +0x64 */
    char cCameraType; /* +0x65 */
    char cCounter; /* +0x66 */
    char cPriority; /* +0x67 */
    int pSkyVisualMaterial; /* +0x68 */
    unsigned char FogIntensity; /* +0x6c */
    int h_PreviousSectorInList; /* +0x70 */
    int h_NextSectorInList; /* +0x74 */
    int lModifierMulIntensity; /* +0x78 */
    int lModifierAddIntensity; /* +0x7c */
    unsigned int glOpaqueDisplayList; /* +0x80 */
    unsigned int glTransparentDisplayList; /* +0x84 */
    char cCurrentActivity; /* +0x88 */
    char cWantedActivity; /* +0x89 */
    unsigned char ucInList; /* +0x8a */
    int xTransition; /* +0x8c */
    _SND_tduRefEvt hTransitionSoundEvent; /* +0x90 */
};

struct tdstEngineTimerStructure_ {
    unsigned int ulTrameNumber; /* +0x0 */
    short sTimerHandle; /* +0x4 */
    unsigned int ulCurrentTimerCount; /* +0x8 */
    unsigned int ulDeltaTimerCount; /* +0xc */
    unsigned int a_ulCounter[16]; /* +0x10 */
    unsigned int ulUsefulDeltaTime; /* +0x50 */
    unsigned int ulPauseTime; /* +0x54 */
    float xFrameLength; /* +0x58 */
    _stTimerCount stRealTimeCount; /* +0x60 */
    _stTimerCount stPauseTime; /* +0x70 */
    unsigned int ulTickPerMS; /* +0x80 */
};

struct SCT_tdstListOfSoundEvent_ {
    int hPointerOfSectorSO; /* +0x0 */
    _SND_tduRefEvt uSoundEvent; /* +0x4 */
};

struct tdstGameOptions_ {
    char szDefaultFileName[256]; /* +0x0 */
    char szCurrentFileName[256]; /* +0x100 */
    /* array */ int a_stSaveGameSlots[1]; /* +0x200 */
    unsigned int ulNbOfSlots; /* +0x208 */
    unsigned int ulCurrentSlot; /* +0x20c */
    unsigned int ulDetails; /* +0x210 */
    unsigned int ulScreenSize; /* +0x214 */
    unsigned int ulPal60; /* +0x218 */
    unsigned int ulScreenSizeLoad; /* +0x21c */
    int s32VolumeSound; /* +0x220 */
    int s32VolumeVoice; /* +0x224 */
    int s32VolumeMusic; /* +0x228 */
    int s32VolumeAmbiance; /* +0x22c */
    int s32VolumeMenu; /* +0x230 */
};

union _SND_tduRefEvt {
    unsigned int Id; /* +0x0 */
    int pstPtr; /* +0x0 */
};

static unsigned char gs_aDEF_ucHiddenSlotForSaveGame[1006];
char g_a_szSlotNames[4];
unsigned char GAM_g_ucSaveGameBeforeChangeLevel;
static int bIsValideMemory;
static int gs_lLastStatus;
static int gs_lReinsertStatus;
static int g_mustRecalcVMSStatus;
static int lDriveMemory;
static char szFilenameMemory[128];
static anon_0 strTimeMemory;
static int lCheckSumMemory;
/* aggregate */ int g_stEngineStructure;
/* array */ int g_axPadMapping;
tdstGameOptions_ g_stGameOptions;
int VMS_g_a8_lDriveNo[8];
int (*fn_iCompareSlotDate)(void*, void*);
int g_bSavingGameWithOptionsDontCheckDate;

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\specif\ps2\GamSave.c lines 146–150 */
/* addr: 0x00280600  size: 452 bytes */
void fn_vValidateAllOption(void)
{
    /* line map: */
    /*   line 146 @ +0x000 */
    /*   line 146 @ +0x000 */
    /*   line 148 @ +0x000 */
    /*   line 150 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\specif\ps2\GamSave.c lines 1832–1832 */
/* addr: 0x002807d0  size: 12 bytes */
int GAM_fn_iGetCurrentLanguageNb(void)
{
    /* line map: */
    /*   line 1832 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\specif\ps2\GamSave.c lines 1056–1075 */
/* addr: 0x002807e0  size: 364 bytes */
int fn_lCheckVMSConnexion(unsigned char _bFullCheck)
{
    int lStatus;
    /* line map: */
    /*   line 1056 @ +0x000 */
    /*   line 1062 @ +0x000 */
    /*   line 1067 @ +0x000 */
    /*   line 1071 @ +0x000 */
    /*   line 1075 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\specif\ps2\GamSave.c lines 844–883 */
/* addr: 0x00280950  size: 240 bytes */
unsigned char fn_bLoadUnknowFileFromSlot(int drive, char* fname, void** bufData, int* fileSize)
{
    char* pData;
    int lCheckSum2;
    int lCheckSum1;
    int lret;
    /* line map: */
    /*   line 844 @ +0x000 */
    /*   line 850 @ +0x000 */
    /*   line 855 @ +0x000 */
    /*   line 857 @ +0x000 */
    /*   line 870 @ +0x000 */
    /*   line 873 @ +0x000 */
    /*   line 879 @ +0x000 */
    /*   line 883 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\specif\ps2\GamSave.c lines 712–759 */
/* addr: 0x00280a40  size: 396 bytes */
unsigned char fn_bSaveFileInSlot(int drive, char* fileName, char* vmsComment, void* saveData, unsigned int dataSize)
{
    char* pData;
    char Title[32];
    int lCheckSum;
    /* line map: */
    /*   line 712 @ +0x000 */
    /*   line 717 @ +0x000 */
    /*   line 717 @ +0x000 */
    /*   line 726 @ +0x000 */
    /*   line 726 @ +0x000 */
    /*   line 730 @ +0x000 */
    /*   line 759 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\specif\ps2\GamSave.c lines 472–530 */
/* addr: 0x00280bd0  size: 700 bytes */
unsigned char GAM_fn_bUpdateSavingFile(/* function pointer */ int p_stSGSlot)
{
    unsigned int ulDate;
    anon_0 BusTime;
    char ax_cBasename[128];
    char ax_cFilename[128];
    int lNumActiveVms;
    int lNumberOfFile;
    int lCnt;
    /* line map: */
    /*   line 472 @ +0x000 */
    /*   line 472 @ +0x000 */
    /*   line 472 @ +0x000 */
    /*   line 472 @ +0x000 */
    /*   line 476 @ +0x000 */
    /*   line 481 @ +0x000 */
    /*   line 486 @ +0x000 */
    /*   line 488 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\specif\ps2\GamSave.c lines 271–271 */
/* addr: 0x00280e90  size: 52 bytes */
int fn_iCompareSlotDate(void* p_v1, void* p_v2)
{
    /* line map: */
    /*   line 271 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* addr: 0x00280ed0  size: 8 bytes */
unsigned char fn_bLoadLevelSaveGameAfterLoadLevel(void)
{
    /* TODO: decompile from asm/... */
}
