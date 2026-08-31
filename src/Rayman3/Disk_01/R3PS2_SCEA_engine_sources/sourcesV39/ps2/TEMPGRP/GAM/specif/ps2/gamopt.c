/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\specif\ps2\gamopt.c */
/* Language: C */
/* Compiler: MW MIPS C Compiler */

#include <stddef.h>

/* Recovered aggregate layouts from MWCC debug type records. */
typedef struct tdstGraphChainedListNode_ tdstGraphChainedListNode_;
typedef struct tdstEvent_ tdstEvent_;
typedef struct CINE_Manager_ CINE_Manager_;
typedef struct SECT_tdstListOfDNMLights_ SECT_tdstListOfDNMLights_;
typedef struct _stTimerCount _stTimerCount;
typedef struct tdstSubAnim_ tdstSubAnim_;
typedef struct CINE_tdstCine_ CINE_tdstCine_;
typedef struct GEO_tdstEdge_ GEO_tdstEdge_;
typedef struct SCT_tdstListOfSoundEvent_ SCT_tdstListOfSoundEvent_;
typedef struct tdstGameOptions_ tdstGameOptions_;
typedef struct SECT_tdstSector_ SECT_tdstSector_;
typedef struct tdstEngineTimerStructure_ tdstEngineTimerStructure_;
typedef struct stMorphData stMorphData;
typedef union _SND_tduRefEvt _SND_tduRefEvt;
typedef struct tdstAnim3d_ tdstAnim3d_;

struct tdstGraphChainedListNode_ {
    int GraphChainedListNodeInfo; /* +0x0 */
    int p_NextGraphChainedListNode; /* +0x4 */
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

struct _stTimerCount {
    unsigned long m_ulLowPart; /* +0x0 */
    unsigned long m_ulHighPart; /* +0x8 */
};

struct tdstSubAnim_ {
    int p_stSubAnim; /* +0x0 */
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

struct stMorphData {
    unsigned short uwChannelNumber; /* +0x0 */
    unsigned short uwFrameNumber; /* +0x2 */
    unsigned char ucNbTarget; /* +0x4 */
    unsigned char ucAlign[3]; /* +0x5 */
    short a_xIndexTargetMT[10]; /* +0x8 */
    unsigned char a_ucMorphingAmountMT[10]; /* +0x1c */
};

union _SND_tduRefEvt {
    unsigned int Id; /* +0x0 */
    int pstPtr; /* +0x0 */
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

unsigned char PAUSE_g_ucPauseCause;
static unsigned int PAUSE_g_ulTimePause;
int RUMBLE_g_lConfigState;
unsigned int RUMBLE_g_ulFrequency;
unsigned int RUMBLE_g_ulPower;
int RUMBLE_g_bRequest;
unsigned char g_bCONSOLE_ENGINE;
int g_EngineWasPausedAutomatically;
unsigned int uDevicePaused;
unsigned int g_ulMoviesBit2;
unsigned int g_ulMoviesBit1;
int g_lNbSaveGameSlots;
tdstGameOptions_ g_stGameOptions;
int g_p_LastStructRecupPosSlot;
unsigned int RUMBLE_g_ulConfigTotalTime;
unsigned int RUMBLE_g_ulConfigStartTime;
int RUMBLE_g_lActivePortNumber;
int g_PauseStringNumber;
/* array */ int g_axPadMapping;
signed char INO_aJoyUsedByAI;
int g_GameHasNotStartedTheFirstBootCheck;
char g_a_szSlotNames[4];
/* aggregate */ int g_stEngineStructure;
int g_lSoundVolumeLineMenu;
int g_lSoundVolumeLineAmbiance;
int g_lSoundVolumeLineMusic;
int g_lSoundVolumeLineVoices;
int g_lSoundVolumeLineSound;
/* aggregate */ int g_eVideoMode;

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\specif\ps2\gamopt.c lines 256–268 */
/* addr: 0x0027f9e0  size: 280 bytes */
void fn_vChangeStorageBank(unsigned char ucStorageBank)
{
    /* line map: */
    /*   line 256 @ +0x000 */
    /*   line 257 @ +0x000 */
    /*   line 258 @ +0x000 */
    /*   line 260 @ +0x000 */
    /*   line 262 @ +0x000 */
    /*   line 264 @ +0x000 */
    /*   line 266 @ +0x000 */
    /*   line 268 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\specif\ps2\gamopt.c lines 1060–1064 */
/* addr: 0x0027fb00  size: 60 bytes */
void fn_vRedrawPauseStringIfRequired(void)
{
    /* line map: */
    /*   line 1060 @ +0x000 */
    /*   line 1064 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\specif\ps2\gamopt.c lines 1032–1038 */
/* addr: 0x0027fb40  size: 68 bytes */
void fn_vUnpauseFromMemoryCard(void)
{
    /* line map: */
    /*   line 1032 @ +0x000 */
    /*   line 1035 @ +0x000 */
    /*   line 1038 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\specif\ps2\gamopt.c lines 1022–1028 */
/* addr: 0x0027fb90  size: 60 bytes */
void fn_vPauseFromMemoryCard(void)
{
    /* line map: */
    /*   line 1022 @ +0x000 */
    /*   line 1025 @ +0x000 */
    /*   line 1028 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\specif\ps2\gamopt.c lines 1018–1018 */
/* addr: 0x0027fbd0  size: 16 bytes */
int fn_bHasBeenPausedForController(void)
{
    /* line map: */
    /*   line 1018 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\specif\ps2\gamopt.c lines 850–1010 */
/* addr: 0x0027fbe0  size: 648 bytes */
void fn_vManageControlerDisconnection(void)
{
    char buffer[32];
    int InitMtapAtLeastOnce;
    int DeconnectedPadId;
    int LastMtapGetConnection[2];
    int FrameCounter;
    /* line map: */
    /*   line 850 @ +0x000 */
    /*   line 854 @ +0x000 */
    /*   line 858 @ +0x000 */
    /*   line 864 @ +0x000 */
    /*   line 877 @ +0x000 */
    /*   line 877 @ +0x000 */
    /*   line 883 @ +0x000 */
    /*   line 886 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\specif\ps2\gamopt.c lines 792–795 */
/* addr: 0x0027fe70  size: 64 bytes */
void GAM_fn_vCheckJoyConnections(void)
{
    int i;
    /* line map: */
    /*   line 792 @ +0x000 */
    /*   line 795 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\specif\ps2\gamopt.c lines 597–597 */
/* addr: 0x0027feb0  size: 12 bytes */
int GAM_fn_iIsGamePaused(void)
{
    /* line map: */
    /*   line 597 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\specif\ps2\gamopt.c lines 419–476 */
/* addr: 0x0027fec0  size: 1048 bytes */
int fn_bLoadGameOptions(/* function pointer */ int p_stTempFile)
{
    unsigned char ucTmp;
    int lIndex;
    int lReturn;
    /* line map: */
    /*   line 419 @ +0x000 */
    /*   line 419 @ +0x000 */
    /*   line 422 @ +0x000 */
    /*   line 427 @ +0x000 */
    /*   line 435 @ +0x000 */
    /*   line 437 @ +0x000 */
    /*   line 439 @ +0x000 */
    /*   line 444 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\specif\ps2\gamopt.c lines 327–362 */
/* addr: 0x002802e0  size: 164 bytes */
int fn_bLoadCurrentGameOptions(void)
{
    unsigned char bReturn;
    /* line map: */
    /*   line 327 @ +0x000 */
    /*   line 332 @ +0x000 */
    /*   line 340 @ +0x000 */
    /*   line 343 @ +0x000 */
    /*   line 344 @ +0x000 */
    /*   line 356 @ +0x000 */
    /*   line 344 @ +0x000 */
    /*   line 344 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\specif\ps2\gamopt.c lines 188–192 */
/* addr: 0x00280390  size: 172 bytes */
void fn_vInitDefaultValuesForSoundVolumes(void)
{
    /* line map: */
    /*   line 188 @ +0x000 */
    /*   line 188 @ +0x000 */
    /*   line 190 @ +0x000 */
    /*   line 192 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\specif\ps2\gamopt.c lines 183–183 */
/* addr: 0x00280440  size: 76 bytes */
void GAM_fn_vSetVolumeMenu(int s32_Value)
{
    /* line map: */
    /*   line 183 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\specif\ps2\gamopt.c lines 178–178 */
/* addr: 0x00280490  size: 76 bytes */
void GAM_fn_vSetVolumeAmbiance(int s32_Value)
{
    /* line map: */
    /*   line 178 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\specif\ps2\gamopt.c lines 173–173 */
/* addr: 0x002804e0  size: 76 bytes */
/* Debug signature rejected: type-record data leaked into it. */
void GAM_fn_vSetVolumeVoice(void)
{
    /* line map: */
    /*   line 173 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\specif\ps2\gamopt.c lines 166–168 */
/* addr: 0x00280530  size: 112 bytes */
void GAM_fn_vSetVolumeSound(int s32_Value)
{
    /* line map: */
    /*   line 166 @ +0x000 */
    /*   line 168 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\specif\ps2\gamopt.c lines 162–162 */
/* addr: 0x002805a0  size: 76 bytes */
/* Debug signature rejected: type-record data leaked into it. */
void GAM_fn_vSetVolumeMusic(void)
{
    /* line map: */
    /*   line 162 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\specif\ps2\gamopt.c lines 158–158 */
/* addr: 0x002805f0  size: 12 bytes */
void fn_vChangeDetailsValue(unsigned int _ulValue)
{
    /* line map: */
    /*   line 158 @ +0x000 */
    /* TODO: decompile from asm/... */
}
