/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\Clock.c */
/* Language: C */
/* Compiler: MW MIPS C Compiler */

#include <stddef.h>

/* Recovered aggregate layouts from MWCC debug type records. */
typedef struct CINE_Manager_ CINE_Manager_;
typedef struct LST2_tdstAnchorToFIL_tdxHandleToFileNameListElementDyn LST2_tdstAnchorToFIL_tdxHandleToFileNameListElementDyn;
typedef struct SECT_tdstListOfDNMLights_ SECT_tdstListOfDNMLights_;
typedef struct GEO_tdstEdge_ GEO_tdstEdge_;
typedef struct _stTimerCount _stTimerCount;
typedef struct tdstEvent_ tdstEvent_;
typedef struct stMorphData stMorphData;
typedef struct tdstSubAnim_ tdstSubAnim_;
typedef struct tdstAnim3d_ tdstAnim3d_;
typedef struct CINE_tdstCine_ CINE_tdstCine_;
typedef struct tdstEngineTimerStructure_ tdstEngineTimerStructure_;
typedef union GEO_tduVSObject_ GEO_tduVSObject_;
typedef struct SCT_tdstListOfSoundEvent_ SCT_tdstListOfSoundEvent_;
typedef struct SECT_tdstSector_ SECT_tdstSector_;
typedef struct tdstGraphChainedListNode_ tdstGraphChainedListNode_;
typedef union _SND_tduRefEvt _SND_tduRefEvt;

struct CINE_Manager_ {
    /* aggregate */ int hCineList; /* +0x0 */
    /* aggregate */ int gp_stFixedCameraMatrix; /* +0x10 */
    int gp_stSPOHandleCamera; /* +0x70 */
};

struct LST2_tdstAnchorToFIL_tdxHandleToFileNameListElementDyn {
    int hFirstElementDyn; /* +0x0 */
    int hLastElementDyn; /* +0x4 */
    int lNumberOfElementsDyn; /* +0x8 */
};

struct SECT_tdstListOfDNMLights_ {
    int hDNMLights; /* +0x0 */
    int hNextBrotherDyn; /* +0x4 */
    int hPrevBrotherDyn; /* +0x8 */
    int hFatherDyn; /* +0xc */
};

struct GEO_tdstEdge_ {
    short xPoints[2]; /* +0x0 */
    /* array */ int st_VectorPoints[2]; /* +0x4 */
};

struct _stTimerCount {
    unsigned long m_ulLowPart; /* +0x0 */
    unsigned long m_ulHighPart; /* +0x8 */
};

struct tdstEvent_ {
    int p_stfEventInTBL; /* +0x0 */
    unsigned short usEventNumberInTBL; /* +0x4 */
    unsigned short uwFrameNumber; /* +0x6 */
    unsigned short uwChannelNumber; /* +0x8 */
    unsigned short uwIsLocalized; /* +0xa */
};

struct stMorphData {
    unsigned short uwChannelNumber; /* +0x0 */
    unsigned short uwFrameNumber; /* +0x2 */
    unsigned char ucNbTarget; /* +0x4 */
    unsigned char ucAlign[3]; /* +0x5 */
    short a_xIndexTargetMT[10]; /* +0x8 */
    unsigned char a_ucMorphingAmountMT[10]; /* +0x1c */
};

struct tdstSubAnim_ {
    int p_stSubAnim; /* +0x0 */
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

struct CINE_tdstCine_ {
    /* aggregate */ int hActorList; /* +0x0 */
    int hNextBrotherDyn; /* +0xc */
    int hPrevBrotherDyn; /* +0x10 */
    int hFatherDyn; /* +0x14 */
    unsigned char bPlaying; /* +0x18 */
    int lGenerateEvent; /* +0x1c */
    char szName[255]; /* +0x20 */
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

union GEO_tduVSObject_ {
    int p_stGeometricObject; /* +0x0 */
    int p_stMorphObject; /* +0x0 */
};

struct SCT_tdstListOfSoundEvent_ {
    int hPointerOfSectorSO; /* +0x0 */
    _SND_tduRefEvt uSoundEvent; /* +0x4 */
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

struct tdstGraphChainedListNode_ {
    int GraphChainedListNodeInfo; /* +0x0 */
    int p_NextGraphChainedListNode; /* +0x4 */
};

union _SND_tduRefEvt {
    unsigned int Id; /* +0x0 */
    int pstPtr; /* +0x0 */
};

unsigned long GAM_g_ulMatc;
unsigned long GAM_g_ulMai;
int g_iFalseTime;
int g_iFalseTimeFixedTime;
int g_iNoCropTime;
_stTimerCount g_stRealTimerCountPaused;
_stTimerCount g_stRealTimerCount;
float GAM_g_a_xMat[5];
/* aggregate */ int g_stEngineStructure;
unsigned int g_uiAnotherRandom;
float g_xVideoFrameDurationInSeconds;

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\Clock.c lines 70–91 */
/* addr: 0x0025de50  size: 212 bytes */
void fn_vInitCSOList(tdstAChannel_* p_hChannelArray, unsigned int ulNumberOfChannels)
{
    unsigned int ulI;
    /* line map: */
    /*   line 70 @ +0x000 */
    /*   line 70 @ +0x000 */
    /*   line 70 @ +0x000 */
    /*   line 78 @ +0x000 */
    /*   line 83 @ +0x000 */
    /*   line 74 @ +0x000 */
    /*   line 76 @ +0x000 */
    /*   line 78 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\Clock.c lines 501–508 */
/* addr: 0x0025df30  size: 116 bytes */
void fn_vLoadEngineClock(void)
{
    /* line map: */
    /*   line 501 @ +0x000 */
    /*   line 501 @ +0x000 */
    /*   line 501 @ +0x000 */
    /*   line 503 @ +0x000 */
    /*   line 503 @ +0x000 */
    /*   line 508 @ +0x000 */
    /*   line 508 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\Clock.c lines 469–486 */
/* addr: 0x0025dfb0  size: 172 bytes */
void fn_vSaveEngineClock(void)
{
    unsigned int ulDeltaTime;
    _stTimerCount stCurrentTimerCount;
    /* line map: */
    /*   line 469 @ +0x000 */
    /*   line 469 @ +0x000 */
    /*   line 473 @ +0x000 */
    /*   line 477 @ +0x000 */
    /*   line 481 @ +0x000 */
    /*   line 486 @ +0x000 */
    /*   line 486 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\Clock.c lines 394–455 */
/* addr: 0x0025e060  size: 396 bytes */
void fn_vActualizeEngineClock(void)
{
    unsigned int ulDeltaTime;
    _stTimerCount stCurrentTimerCount;
    unsigned int i;
    unsigned int s_ulTimeRemainder;
    /* line map: */
    /*   line 394 @ +0x000 */
    /*   line 406 @ +0x000 */
    /*   line 406 @ +0x000 */
    /*   line 406 @ +0x000 */
    /*   line 406 @ +0x000 */
    /*   line 410 @ +0x000 */
    /*   line 413 @ +0x000 */
    /*   line 422 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\Clock.c lines 295–323 */
/* addr: 0x0025e1f0  size: 272 bytes */
void fn_vFakeTimer(_stTimerCount* pstCurrentTimerCount)
{
    unsigned long ulDeltaTime;
    /* line map: */
    /*   line 296 @ +0x000 */
    /*   line 295 @ +0x000 */
    /*   line 296 @ +0x000 */
    /*   line 296 @ +0x000 */
    /*   line 296 @ +0x000 */
    /*   line 310 @ +0x000 */
    /*   line 320 @ +0x000 */
    /*   line 320 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\Clock.c lines 248–268 */
/* addr: 0x0025e300  size: 276 bytes */
void fn_vStartEngineClock(void)
{
    _stTimerCount stCurrentTimerCount;
    unsigned int i;
    /* line map: */
    /*   line 248 @ +0x000 */
    /*   line 248 @ +0x000 */
    /*   line 250 @ +0x000 */
    /*   line 253 @ +0x000 */
    /*   line 253 @ +0x000 */
    /*   line 258 @ +0x000 */
    /*   line 258 @ +0x000 */
    /*   line 263 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\Clock.c lines 168–226 */
/* addr: 0x0025e420  size: 604 bytes */
unsigned int fn_ulDetermineUsefulDT(void)
{
    float xAverage;
    unsigned long i;
    float xFrameLengthInMs;
    int lResult;
    /* line map: */
    /*   line 168 @ +0x000 */
    /*   line 168 @ +0x000 */
    /*   line 168 @ +0x000 */
    /*   line 168 @ +0x000 */
    /*   line 170 @ +0x000 */
    /*   line 175 @ +0x000 */
    /*   line 177 @ +0x000 */
    /*   line 179 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* addr: 0x0025e680  size: 8 bytes */
void fn_vReinitEngineClock(void)
{
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\Clock.c lines 99–99 */
/* addr: 0x0025e690  size: 16 bytes */
void fn_vInitFrameLenght(void)
{
    /* line map: */
    /*   line 99 @ +0x000 */
    /* TODO: decompile from asm/... */
}
