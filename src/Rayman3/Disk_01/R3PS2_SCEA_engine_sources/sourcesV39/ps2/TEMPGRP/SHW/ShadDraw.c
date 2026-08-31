/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\SHW\ShadDraw.c */
/* Language: C */
/* Compiler: MW MIPS C Compiler */

#include <stddef.h>

/* Recovered aggregate layouts from MWCC debug type records. */
typedef struct tdstAnim3d_ tdstAnim3d_;
typedef union _SND_tduRefEvt _SND_tduRefEvt;
typedef struct GEO_tdstColor_ GEO_tdstColor_;
typedef struct tdstFrame3d_ tdstFrame3d_;
typedef struct tdst3dData_ tdst3dData_;
typedef struct tdstAChannel_ tdstAChannel_;
typedef struct tdstElement3d_ tdstElement3d_;
typedef struct tdstSubAnim_ tdstSubAnim_;
typedef struct SCT_tdstListOfSoundEvent_ SCT_tdstListOfSoundEvent_;
typedef struct tdstBrain_ tdstBrain_;
typedef struct tdstEvent_ tdstEvent_;
typedef struct SECT_tdstListOfDNMLights_ SECT_tdstListOfDNMLights_;
typedef struct GEO_tdstEdge_ GEO_tdstEdge_;
typedef struct SECT_tdstSector_ SECT_tdstSector_;
typedef struct stRECT stRECT;
typedef struct tdstCouple_ tdstCouple_;
typedef struct stPOINT stPOINT;
typedef struct GLD_tdstDeviceAttributes_ GLD_tdstDeviceAttributes_;
typedef struct AI_tdstMind_ AI_tdstMind_;
typedef struct CINE_tdstCine_ CINE_tdstCine_;
typedef struct stMorphData stMorphData;

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

union _SND_tduRefEvt {
    unsigned int Id; /* +0x0 */
    int pstPtr; /* +0x0 */
};

struct GEO_tdstColor_ {
    float xR; /* +0x0 */
    float xG; /* +0x4 */
    float xB; /* +0x8 */
    float xA; /* +0xc */
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

struct tdstElement3d_ {
    unsigned short wElement : 15; /* bit 0, byte +0x0 */
    unsigned short bf1ActiveStatus : 1; /* bit 15, byte +0x0 */
    unsigned char ucChannelNumber; /* +0x2 */
    unsigned char eTypeOfElement; /* +0x3 */
    unsigned char ucTransparency; /* +0x4 */
    unsigned char ucAnimLevel; /* +0x5 */
};

struct tdstSubAnim_ {
    int p_stSubAnim; /* +0x0 */
};

struct SCT_tdstListOfSoundEvent_ {
    int hPointerOfSectorSO; /* +0x0 */
    _SND_tduRefEvt uSoundEvent; /* +0x4 */
};

struct tdstBrain_ {
    int p_stMind; /* +0x0 */
    int hLastCollidedGoThroughMaterial; /* +0x4 */
    unsigned char bWarnMechanicsFlag; /* +0x8 */
    unsigned char bActiveDuringTransition; /* +0x9 */
};

struct tdstEvent_ {
    int p_stfEventInTBL; /* +0x0 */
    unsigned short usEventNumberInTBL; /* +0x4 */
    unsigned short uwFrameNumber; /* +0x6 */
    unsigned short uwChannelNumber; /* +0x8 */
    unsigned short uwIsLocalized; /* +0xa */
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

struct stRECT {
    int left; /* +0x0 */
    int top; /* +0x4 */
    int right; /* +0x8 */
    int bottom; /* +0xc */
};

struct tdstCouple_ {
    unsigned short wChild; /* +0x0 */
    unsigned short wFather; /* +0x2 */
};

struct stPOINT {
    int x; /* +0x0 */
    int y; /* +0x4 */
};

struct GLD_tdstDeviceAttributes_ {
    unsigned int dwHeight; /* +0x0 */
    unsigned int dwWidth; /* +0x4 */
    float xPixelDimensionX; /* +0x8 */
    float xPixelDimensionY; /* +0xc */
    int p_cVirtualScreen; /* +0x10 */
    int lPitch; /* +0x14 */
    int p_sZBuffer; /* +0x18 */
    unsigned int dwFullScreenModeX; /* +0x1c */
    unsigned int dwFullScreenModeY; /* +0x20 */
    unsigned int dwFullScreenModeBpp; /* +0x24 */
    int hFullScreenModeWnd; /* +0x28 */
    int hNormalModeWnd; /* +0x2c */
    int bFullScreen; /* +0x30 */
    unsigned int uiTypeDriver; /* +0x34 */
    stPOINT pClientOnPrimary; /* +0x38 */
    stRECT rtClientRect; /* +0x40 */
    stRECT rtWindowRect; /* +0x50 */
};

struct AI_tdstMind_ {
    int p_stAIModel; /* +0x0 */
    int p_stIntelligence; /* +0x4 */
    int p_stReflex; /* +0x8 */
    int p_stDsgMem; /* +0xc */
    unsigned char bDoingIntel; /* +0x10 */
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

struct stMorphData {
    unsigned short uwChannelNumber; /* +0x0 */
    unsigned short uwFrameNumber; /* +0x2 */
    unsigned char ucNbTarget; /* +0x4 */
    unsigned char ucAlign[3]; /* +0x5 */
    short a_xIndexTargetMT[10]; /* +0x8 */
    unsigned char a_ucMorphingAmountMT[10]; /* +0x1c */
};

unsigned char SHW_g_bCurrentlyDrawingShadow;
int g_p_stTextureOfTextureShadow;
/* aggregate */ int p_hHandleOfShadowedSuperObject;
short g_p_hHandleOfElementForShadow[10];
/* aggregate */ int g_p_hHandleOfGeometricShadowObject;
short g_xIndexOfShadow;
int g_hShadowPolygonVisualMaterial;
GLD_tdstDeviceAttributes_ g_stDevAttrib;
/* aggregate */ int stSinEffectAmp;
char g_cSinusEffectState;
unsigned int g_ulSpoMask;
int g_p_stCurrentMatrix;
int HIE_g_hCurrentMatrix;
/* aggregate */ int HIE_g_a_hMatrixStack;
int HIE_g_lNbMatrixInStack;

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\SHW\ShadDraw.c lines 182–182 */
/* addr: 0x0031d070  size: 28 bytes */
void SECT_fn_vGetMinPointInBorder(SECT_tdstSector_* _hSector, /* function pointer */ int _p_stMinPoint)
{
    /* line map: */
    /*   line 182 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\SHW\ShadDraw.c lines 812–1213 */
/* addr: 0x0031d090  size: 2740 bytes */
void shw_fn_vInternalDrawShadow(/* function pointer */ int _p_stVpt, /* function pointer */ int _hHandleOfCharacter, /* function pointer */ int _hSprObjSector, int _lSectorDrawmask, SECT_tdstSector_* hSectorObject, /* function pointer */ int hInteractionElement, /* function pointer */ int hCollisionElement, /* function pointer */ int hCharacterList, /* function pointer */ int hTest, /* function pointer */ int hHandleOfGeometricShadowObject)
{
    float xNorm;
    float xInvGlobalNormalxZ;
    float xBY;
    float xBX;
    float xAY;
    float xAX;
    /* aggregate */ int stUV;
    /* aggregate */ int stCharacterRotation;
    /* aggregate */ int stPointOfShadowRectangle;
    /* aggregate */ int stMax;
    /* aggregate */ int stMin;
    int bFound;
    int i;
    int i;
    float xScaleY;
    float xScaleX;
    float xCoefAltitude;
    /* aggregate */ int stPickedPoint;
    /* aggregate */ int stVertexAB;
    /* aggregate */ int stStartPicking;
    /* aggregate */ int stGlobalNormalOfPickedFace;
    /* line map: */
    /*   line 844 @ +0x000 */
    /*   line 812 @ +0x000 */
    /*   line 844 @ +0x000 */
    /*   line 853 @ +0x000 */
    /*   line 853 @ +0x000 */
    /*   line 858 @ +0x000 */
    /*   line 858 @ +0x000 */
    /*   line 861 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\SHW\ShadDraw.c lines 727–763 */
/* addr: 0x0031db50  size: 148 bytes */
void SHW_fn_vDrawShadow(/* function pointer */ int _p_stVpt, /* function pointer */ int _hHandleOfCharacter, /* function pointer */ int _hSprObjSector, int _lSectorDrawmask)
{
    short xLevelOfQualityOfShadows;
    int bTransitionInProgress;
    unsigned long ulCustomBits;
    /* line map: */
    /*   line 727 @ +0x000 */
    /*   line 740 @ +0x000 */
    /*   line 747 @ +0x000 */
    /*   line 763 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\SHW\ShadDraw.c lines 684–694 */
/* addr: 0x0031dbf0  size: 80 bytes */
unsigned char SHW_bDidCharacterHaveAShadowLastFrame(/* function pointer */ int _hHandleOfCharacter)
{
    int i;
    /* line map: */
    /*   line 684 @ +0x000 */
    /*   line 687 @ +0x000 */
    /*   line 692 @ +0x000 */
    /*   line 694 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\SHW\ShadDraw.c lines 564–648 */
/* addr: 0x0031dc40  size: 392 bytes */
void SHW_fn_vSentToViewPort(/* function pointer */ int _p_stVpt, /* function pointer */ int _hHandleOfCharacter, int _lSectorDrawmask, /* function pointer */ int _hHandleOfGeometricShadowObject)
{
    float fGlobalAlphaTemp;
    unsigned char bTransparenceSetting;
    int lAdditionnalDrawMask;
    /* line map: */
    /*   line 565 @ +0x000 */
    /*   line 565 @ +0x000 */
    /*   line 565 @ +0x000 */
    /*   line 564 @ +0x000 */
    /*   line 564 @ +0x000 */
    /*   line 564 @ +0x000 */
    /*   line 567 @ +0x000 */
    /*   line 575 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* addr: 0x0031ddd0  size: 8 bytes */
void SHW_fn_vInitShadowCounter(void)
{
    /* TODO: decompile from asm/... */
}

/* addr: 0x0031dde0  size: 8 bytes */
void SHW_fn_vGlobalInitShadowCounter(void)
{
    /* TODO: decompile from asm/... */
}
