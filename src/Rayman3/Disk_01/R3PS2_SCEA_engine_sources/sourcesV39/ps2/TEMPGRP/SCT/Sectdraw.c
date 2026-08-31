/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\SCT\Sectdraw.c */
/* Language: C */
/* Compiler: MW MIPS C Compiler */

#include <stddef.h>

/* Recovered aggregate layouts from MWCC debug type records. */
typedef struct GEO_tdstEdge_ GEO_tdstEdge_;
typedef struct GEO_tdstColor_ GEO_tdstColor_;
typedef struct tdstState_ tdstState_;
typedef struct SECT_tdstSector_ SECT_tdstSector_;
typedef struct WP_tdstGraph_ WP_tdstGraph_;
typedef struct tdstAChannel_ tdstAChannel_;
typedef struct tdstAnim3d_ tdstAnim3d_;
typedef struct tdstGraphChainedListNode_ tdstGraphChainedListNode_;
typedef struct stMorphData stMorphData;
typedef struct tdstSubAnim_ tdstSubAnim_;
typedef struct tdstElement3d_ tdstElement3d_;
typedef struct SECT_tdstListOfDNMLights_ SECT_tdstListOfDNMLights_;
typedef struct CINE_tdstCine_ CINE_tdstCine_;
typedef struct tdstEvent_ tdstEvent_;
typedef struct CINE_Manager_ CINE_Manager_;
typedef struct tdstFrame3d_ tdstFrame3d_;
typedef struct SCT_tdstListOfSoundEvent_ SCT_tdstListOfSoundEvent_;
typedef struct tdst3dData_ tdst3dData_;
typedef union _SND_tduRefEvt _SND_tduRefEvt;
typedef struct _stTimerCount _stTimerCount;
typedef struct tdstBrain_ tdstBrain_;
typedef struct tdstProhibit_ tdstProhibit_;
typedef struct tdstCouple_ tdstCouple_;
typedef struct tdstEngineTimerStructure_ tdstEngineTimerStructure_;

struct GEO_tdstEdge_ {
    short xPoints[2]; /* +0x0 */
    /* array */ int st_VectorPoints[2]; /* +0x4 */
};

struct GEO_tdstColor_ {
    float xR; /* +0x0 */
    float xG; /* +0x4 */
    float xB; /* +0x8 */
    float xA; /* +0xc */
};

struct tdstState_ {
    int p_stAnim; /* +0x0 */
    /* aggregate */ int hForTransitionArray; /* +0x4 */
    /* aggregate */ int hForProhibitArray; /* +0xc */
    int h_NextState; /* +0x14 */
    int h_LinkedMechanicsIdCard; /* +0x18 */
    int szLevelList; /* +0x1c */
    int szAnimationSectionName; /* +0x20 */
    unsigned char ucRepeatAnimation; /* +0x24 */
    signed char scSpeedAnim; /* +0x25 */
    unsigned char ucTransitionStatusFlag; /* +0x26 */
    unsigned char ucCustomBits; /* +0x27 */
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

struct WP_tdstGraph_ {
    /* aggregate */ int m_hListOfNode; /* +0x0 */
};

struct tdstAChannel_ {
    int hSupObject; /* +0x0 */
    int hZoomSupObject; /* +0x4 */
    int p_stNextActiveChannel; /* +0x8 */
    int p_stFatherChannel; /* +0xc */
    /* array */ int ax_InterpolatedPositions[2]; /* +0x10 */
    unsigned char ucNbInterpolatedPositions; /* +0x88 */
    unsigned char bControlledChannel; /* +0x89 */
    unsigned char bLipsChannel; /* +0x8a */
    unsigned char bActiveChannel; /* +0x8b */
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

struct tdstGraphChainedListNode_ {
    int GraphChainedListNodeInfo; /* +0x0 */
    int p_NextGraphChainedListNode; /* +0x4 */
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

struct tdstElement3d_ {
    unsigned short wElement : 15; /* bit 0, byte +0x0 */
    unsigned short bf1ActiveStatus : 1; /* bit 15, byte +0x0 */
    unsigned char ucChannelNumber; /* +0x2 */
    unsigned char eTypeOfElement; /* +0x3 */
    unsigned char ucTransparency; /* +0x4 */
    unsigned char ucAnimLevel; /* +0x5 */
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

struct tdstFrame3d_ {
    int p_stArrayOfElts3d; /* +0x0 */
    int p_stAngularSpeedMatrix; /* +0x4 */
    int p_stLinearSpeedVector; /* +0x8 */
    /* aggregate */ int stHierarchy; /* +0xc */
    /* aggregate */ int stDeformation; /* +0x14 */
    int p_stAnim; /* +0x1c */
    unsigned short uwFrameNumber; /* +0x20 */
    unsigned char ucMatrixUpdated; /* +0x22 */
    unsigned char ucCacheEntry; /* +0x23 */
};

struct SCT_tdstListOfSoundEvent_ {
    int hPointerOfSectorSO; /* +0x0 */
    _SND_tduRefEvt uSoundEvent; /* +0x4 */
};

struct tdst3dData_ {
    int h_InitialState; /* +0x0 */
    int h_CurrentState; /* +0x4 */
    int h_FirstStateOfAction; /* +0x8 */
    int h_InitialObjectsTable; /* +0xc */
    int h_CurrentObjectsTable; /* +0x10 */
    int h_Family; /* +0x14 */
    /* aggregate */ int stGLIObjectMatrix; /* +0x20 */
    int p_stGLIObjectAbsoluteMatrix; /* +0x80 */
    float xCurrentFrame; /* +0x84 */
    unsigned char ucRepeatAnimation; /* +0x88 */
    unsigned char ucNextEvent; /* +0x89 */
    int d_ucEventActivation; /* +0x8c */
    int p_stCurrentHieCouples; /* +0x90 */
    unsigned short wCurrentHieNbCouples; /* +0x94 */
    unsigned short wSizeOfArrayOfElts3d; /* +0x96 */
    int h_StateInLastFrame; /* +0x98 */
    int h_WantedState; /* +0x9c */
    float xForcedFrame; /* +0xa0 */
    unsigned char ucFlagEndState; /* +0xa4 */
    unsigned char ucFlagEndOfAnim; /* +0xa5 */
    int hArrayOfChannels; /* +0xa8 */
    unsigned int ulNumberOfChannels; /* +0xac */
    int hFirstActiveChannel; /* +0xb0 */
    tdstFrame3d_ stFrame3d; /* +0xb4 */
    int hMorphChannelList; /* +0xd8 */
    unsigned int ulStartTime; /* +0xdc */
    unsigned int ulTimeDelay; /* +0xe0 */
    unsigned int ulTimePreviousFrame; /* +0xe4 */
    float xLastFrame; /* +0xe8 */
    unsigned char bStateJustModified; /* +0xec */
    unsigned char bSkipCurrentFrame; /* +0xed */
    int p_stShadowVisualMaterial; /* +0xf0 */
    int p_stShadowTexture; /* +0xf4 */
    float xShadowScaleX; /* +0xf8 */
    float xShadowScaleY; /* +0xfc */
    short xShadowQuality; /* +0x100 */
    unsigned short uwNbEngineFrameSinceLastMechEvent; /* +0x102 */
    unsigned char ucFrameRate; /* +0x104 */
    unsigned char ucFlagModifState; /* +0x105 */
    int lDrawMaskInit; /* +0x108 */
    int lDrawMask; /* +0x10c */
    int lLastComputeFrame; /* +0x110 */
    /* aggregate */ int stLastEventGlobalPosition; /* +0x120 */
    unsigned char bAnimMatrixChanged; /* +0x180 */
    unsigned char ucUserEventFlags; /* +0x181 */
    unsigned char ucBrainComputationFrequency; /* +0x182 */
    char cBrainCounter; /* +0x183 */
    unsigned short uwBrainMainCounter; /* +0x184 */
    unsigned char ucTransparency; /* +0x186 */
    unsigned char bDiscreetSpeed; /* +0x187 */
    /* aggregate */ int stLightDirForDynamicShadow; /* +0x188 */
    unsigned char ucIsShadowClosed; /* +0x194 */
    unsigned char ucShadowRecLevel; /* +0x195 */
    unsigned char ucLightComputationFrequency; /* +0x196 */
    char cLightCounter; /* +0x197 */
    /* aggregate */ int stSHWDeformationVector; /* +0x198 */
    float xSHWHeight; /* +0x1a4 */
    float xDistNoInterpol; /* +0x1a8 */
    float xDistNoMorphing; /* +0x1ac */
    float xDistNoDEnv; /* +0x1b0 */
    /* aggregate */ int hForSubAnimInUseArray; /* +0x1b4 */
    int h_CurrentCineActor; /* +0x1c0 */
    /* aggregate */ int hSkinMaterial; /* +0x1c4 */
    unsigned int NbSkinMaterials; /* +0x1d4 */
    short xSkinIndex[4]; /* +0x1d8 */
};

union _SND_tduRefEvt {
    unsigned int Id; /* +0x0 */
    int pstPtr; /* +0x0 */
};

struct _stTimerCount {
    unsigned long m_ulLowPart; /* +0x0 */
    unsigned long m_ulHighPart; /* +0x8 */
};

struct tdstBrain_ {
    int p_stMind; /* +0x0 */
    int hLastCollidedGoThroughMaterial; /* +0x4 */
    unsigned char bWarnMechanicsFlag; /* +0x8 */
    unsigned char bActiveDuringTransition; /* +0x9 */
};

struct tdstProhibit_ {
    int h_ProhibitedState; /* +0x0 */
};

struct tdstCouple_ {
    unsigned short wChild; /* +0x0 */
    unsigned short wFather; /* +0x2 */
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

unsigned int g_bDisplayingActors;
int g_pActorBeingDisplayed;
static int bNotCreateDefaultMaterial;
unsigned char g_ucSCTDisplaySectors;
/* aggregate */ int g_stEngineStructure;
unsigned char g_bInGameMenu;
unsigned int SCT_g_DrawingMirrored;
char GLI_cGlobalFogIsOn;

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\SCT\Sectdraw.c lines 26–47 */
/* addr: 0x00319c90  size: 96 bytes */
void SECT_fn_vAddSectorInList(/* function pointer */ int _hSectorSO, SECT_tdstSector_* hSector)
{
    /* line map: */
    /*   line 26 @ +0x000 */
    /*   line 34 @ +0x000 */
    /*   line 37 @ +0x000 */
    /*   line 41 @ +0x000 */
    /*   line 45 @ +0x000 */
    /*   line 47 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\SCT\Sectdraw.c lines 799–1052 */
/* addr: 0x00319cf0  size: 1160 bytes */
void SCT_fn_vSendSectorWhereIAmToViewport(/* function pointer */ int _p_stAbsolutePositionOfCamera, /* function pointer */ int _p_stVpt, /* function pointer */ int _hSprObjSector, int _lDrawMask, SECT_tdstSector_* hNeighbourSectorObject, /* function pointer */ int hGraphicInteractionChild, SECT_tdstSector_* hSectorObject)
{
    int* a_lCullingResultArray;
    short xI;
    char cDrawPerso;
    char cDrawMap;
    /* line map: */
    /*   line 799 @ +0x000 */
    /*   line 811 @ +0x000 */
    /*   line 816 @ +0x000 */
    /*   line 823 @ +0x000 */
    /*   line 823 @ +0x000 */
    /*   line 823 @ +0x000 */
    /*   line 830 @ +0x000 */
    /*   line 845 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\SCT\Sectdraw.c lines 536–690 */
/* addr: 0x0031a180  size: 600 bytes */
void SCT_fn_vSendSectorToViewportDynamic(/* function pointer */ int _p_stVpt, /* function pointer */ int _hSprObjSector, int _lDrawMask, int _lCullingResult, /* function pointer */ int hCharacterSO, /* function pointer */ int hCharacter, SECT_tdstSector_* hSectorObject)
{
    unsigned int ulCustomBits;
    int lDrawmaskOfCharacter;
    short xNbLights;
    short xI;
    /* line map: */
    /*   line 536 @ +0x000 */
    /*   line 546 @ +0x000 */
    /*   line 550 @ +0x000 */
    /*   line 574 @ +0x000 */
    /*   line 587 @ +0x000 */
    /*   line 615 @ +0x000 */
    /*   line 618 @ +0x000 */
    /*   line 620 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\SCT\Sectdraw.c lines 332–482 */
/* addr: 0x0031a3e0  size: 712 bytes */
int SCT_fn_lSendSectorToViewportStatic(/* function pointer */ int _p_stVpt, /* function pointer */ int _hSprObjSector, int _lDrawMask, /* function pointer */ int hParallelBox, /* function pointer */ int p_stBorderMaxPoint, /* function pointer */ int p_stBorderMinPoint, /* function pointer */ int p_stBdvMaxPoint, /* function pointer */ int p_stBdvMinPoint, SECT_tdstSector_* hSectorObject)
{
    int lMaxInOut;
    int lMinInOut;
    int lCullingResult;
    /* line map: */
    /*   line 341 @ +0x000 */
    /*   line 332 @ +0x000 */
    /*   line 354 @ +0x000 */
    /*   line 363 @ +0x000 */
    /*   line 370 @ +0x000 */
    /*   line 374 @ +0x000 */
    /*   line 374 @ +0x000 */
    /*   line 386 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\SCT\Sectdraw.c lines 252–294 */
/* addr: 0x0031a6b0  size: 316 bytes */
void SECT_fn_vSendFogToViewport(/* function pointer */ int _hSprObjSector, GLI_tdstLight_* hStaticLight, /* function pointer */ int hStaticLightsElement, SECT_tdstSector_* hSectorObject)
{
    GEO_tdstColor_ stColor;
    short xI;
    /* line map: */
    /*   line 252 @ +0x000 */
    /*   line 255 @ +0x000 */
    /*   line 270 @ +0x000 */
    /*   line 273 @ +0x000 */
    /*   line 279 @ +0x000 */
    /*   line 290 @ +0x000 */
    /*   line 294 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\SCT\Sectdraw.c lines 154–181 */
/* addr: 0x0031a7f0  size: 248 bytes */
void SECT_fn_vSendDynamicLightsFromWhereIAmToViewport(/* function pointer */ int _p_stVpt, /* function pointer */ int _hSprObjSector, /* function pointer */ int hGraphicInteractionChild, SECT_tdstSector_* hSectorObject)
{
    short xI;
    /* line map: */
    /*   line 157 @ +0x000 */
    /*   line 154 @ +0x000 */
    /*   line 161 @ +0x000 */
    /*   line 171 @ +0x000 */
    /*   line 181 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\SCT\Sectdraw.c lines 103–137 */
/* addr: 0x0031a8f0  size: 92 bytes */
void SECT_fn_vSendDynamicLightsOfASector(/* function pointer */ int _p_stVpt, SECT_tdstSector_* _hSectorObject, SECT_tdstListOfDNMLights_* hPrevDNMLightsElement, SECT_tdstListOfDNMLights_* hDNMLightsElement)
{
    /* line map: */
    /*   line 103 @ +0x000 */
    /*   line 111 @ +0x000 */
    /*   line 133 @ +0x000 */
    /*   line 137 @ +0x000 */
    /* TODO: decompile from asm/... */
}
