/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ago\AGO.c */
/* Language: C++ */
/* Compiler: MW MIPS C Compiler */

#include <stddef.h>

/* Recovered aggregate layouts from MWCC debug type records. */
typedef struct AGO_Part_ AGO_Part_;
typedef struct tdstElement3d_ tdstElement3d_;
typedef struct SECT_tdstListOfDNMLights_ SECT_tdstListOfDNMLights_;
typedef struct tdstFootStep_ tdstFootStep_;
typedef struct tdst3dData_ tdst3dData_;
typedef struct CINE_tdstCine_ CINE_tdstCine_;
typedef struct tdstBrain_ tdstBrain_;
typedef union anon_0 anon_0;
typedef struct tdstSubAnim_ tdstSubAnim_;
typedef struct tdstEvent_ tdstEvent_;
typedef struct stMorphData stMorphData;
typedef struct tdstAnim3d_ tdstAnim3d_;
typedef struct tdstFrame3d_ tdstFrame3d_;
typedef struct AGO_Triangles_ AGO_Triangles_;
typedef struct SCT_tdstListOfSoundEvent_ SCT_tdstListOfSoundEvent_;
typedef struct CINE_Manager_ CINE_Manager_;
typedef struct AGO2_Part_ AGO2_Part_;
typedef struct WP_tdstGraph_ WP_tdstGraph_;
typedef struct tdstAChannel_ tdstAChannel_;
typedef struct AGO_Gauge_ AGO_Gauge_;
typedef struct _stTimerCount _stTimerCount;
typedef struct tdstCouple_ tdstCouple_;
typedef struct AGO_V4D_ AGO_V4D_;
typedef struct AGO_Icone_ AGO_Icone_;
typedef struct GEO_tdstEdge_ GEO_tdstEdge_;
typedef struct tdstEngineTimerStructure_ tdstEngineTimerStructure_;
typedef struct AGO_Bitmap_ AGO_Bitmap_;
typedef struct SECT_tdstSector_ SECT_tdstSector_;
typedef struct tdstGraphChainedListNode_ tdstGraphChainedListNode_;
typedef union _SND_tduRefEvt _SND_tduRefEvt;

struct AGO_Part_ {
    unsigned int ulType; /* +0x0 */
    unsigned int AnimTime; /* +0x4 */
    float fCreationTime; /* +0x8 */
    float a3_fInitialPosition[4]; /* +0x10 */
    float a3_fPosition[4]; /* +0x20 */
    float a3_fDirection[4]; /* +0x30 */
    float a3_fAdditionnalVector[4]; /* +0x40 */
    int AdditionnalMaterial; /* +0x50 */
    float fScale[2]; /* +0x54 */
    float fAnimTimeScale; /* +0x5c */
    float a2_fScaleSpeed[2]; /* +0x60 */
    float fShadeSpeed; /* +0x68 */
    anon_0 LimitParam; /* +0x6c */
    int VisualMaterial; /* +0x70 */
    float Transparency; /* +0x74 */
    unsigned int CreationFrame; /* +0x78 */
    int pTempTexture; /* +0x7c */
    unsigned int Displayed; /* +0x80 */
    unsigned int Channel; /* +0x84 */
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

struct tdstFootStep_ {
    /* aggregate */ int Position; /* +0x0 */
    /* aggregate */ int Direction1; /* +0x10 */
    /* aggregate */ int Direction2; /* +0x20 */
    int hVisualMaterial; /* +0x30 */
    float fAlpha; /* +0x34 */
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

struct CINE_tdstCine_ {
    /* aggregate */ int hActorList; /* +0x0 */
    int hNextBrotherDyn; /* +0xc */
    int hPrevBrotherDyn; /* +0x10 */
    int hFatherDyn; /* +0x14 */
    unsigned char bPlaying; /* +0x18 */
    int lGenerateEvent; /* +0x1c */
    char szName[255]; /* +0x20 */
};

struct tdstBrain_ {
    int p_stMind; /* +0x0 */
    int hLastCollidedGoThroughMaterial; /* +0x4 */
    unsigned char bWarnMechanicsFlag; /* +0x8 */
    unsigned char bActiveDuringTransition; /* +0x9 */
};

union anon_0 {
    float f_ZLimit; /* +0x0 */
    float fTimeLimit; /* +0x0 */
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

struct stMorphData {
    unsigned short uwChannelNumber; /* +0x0 */
    unsigned short uwFrameNumber; /* +0x2 */
    unsigned char ucNbTarget; /* +0x4 */
    unsigned char ucAlign[3]; /* +0x5 */
    short a_xIndexTargetMT[10]; /* +0x8 */
    unsigned char a_ucMorphingAmountMT[10]; /* +0x1c */
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

struct AGO_Triangles_ {
    float c[3][3]; /* +0x0 */
    float uv[3][2]; /* +0x24 */
    int VisualMaterial; /* +0x3c */
    unsigned int DelayTime; /* +0x40 */
    unsigned int type; /* +0x44 */
    float fTransparency; /* +0x48 */
    unsigned int CreationTime; /* +0x4c */
};

struct SCT_tdstListOfSoundEvent_ {
    int hPointerOfSectorSO; /* +0x0 */
    _SND_tduRefEvt uSoundEvent; /* +0x4 */
};

struct CINE_Manager_ {
    /* aggregate */ int hCineList; /* +0x0 */
    /* aggregate */ int gp_stFixedCameraMatrix; /* +0x10 */
    int gp_stSPOHandleCamera; /* +0x70 */
};

struct AGO2_Part_ {
    unsigned int ulType; /* +0x0 */
    unsigned int ulBaseID; /* +0x4 */
    unsigned int Channel; /* +0x8 */
    int pMaterial1; /* +0xc */
    int pMaterial2; /* +0x10 */
    int pDisplayFnct; /* +0x14 */
    int pProcessFnct; /* +0x18 */
    int pTransparencyFunction; /* +0x1c */
    int pSizingFunction; /* +0x20 */
    int pLauchingCharacter; /* +0x24 */
    unsigned int AnimTime; /* +0x28 */
    unsigned int InternalHasBeenDisplayed; /* +0x2c */
    float fAnimTimeScale; /* +0x30 */
    unsigned int AssociatedViewport; /* +0x34 */
    AGO_V4D_ Position; /* +0x38 */
    AGO_V4D_ Direction; /* +0x48 */
    float xTransparency; /* +0x58 */
    float xTransparencySpeed; /* +0x5c */
    float xSize[2]; /* +0x60 */
    float xShrinkingSpeed; /* +0x68 */
    float xLimit; /* +0x6c */
    unsigned int hGroup; /* +0x70 */
    unsigned int GroupNumber; /* +0x74 */
    AGO_V4D_ LightColor; /* +0x78 */
    float xLightNear; /* +0x88 */
    float xLightFar; /* +0x8c */
    AGO_V4D_ Vector1; /* +0x90 */
    AGO_V4D_ Vector2; /* +0xa0 */
    AGO_V4D_ Vector3; /* +0xb0 */
    AGO_V4D_ Vector4; /* +0xc0 */
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

struct AGO_Gauge_ {
    float Coords[4]; /* +0x0 */
    int EmptyMaterial; /* +0x10 */
    int FullMaterial; /* +0x14 */
    float Position; /* +0x18 */
    int Transparency; /* +0x1c */
    unsigned char DestinationViewport; /* +0x20 */
};

struct _stTimerCount {
    unsigned long m_ulLowPart; /* +0x0 */
    unsigned long m_ulHighPart; /* +0x8 */
};

struct tdstCouple_ {
    unsigned short wChild; /* +0x0 */
    unsigned short wFather; /* +0x2 */
};

struct AGO_V4D_ {
    float xX; /* +0x0 */
    float xY; /* +0x4 */
    float xZ; /* +0x8 */
    float xW; /* +0xc */
};

struct AGO_Icone_ {
    float Coords[4]; /* +0x0 */
    float fZ; /* +0x10 */
    int Material; /* +0x14 */
    int Transparency; /* +0x18 */
    unsigned char DestinationViewport; /* +0x1c */
    float UVs[2][2]; /* +0x20 */
};

struct GEO_tdstEdge_ {
    short xPoints[2]; /* +0x0 */
    /* array */ int st_VectorPoints[2]; /* +0x4 */
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

struct AGO_Bitmap_ {
    float a_fCoords[4]; /* +0x0 */
    unsigned long ulWidth; /* +0x10 */
    unsigned long ulHeight; /* +0x18 */
    int p_vBitmapSurface; /* +0x20 */
    unsigned char ucDestinationViewport; /* +0x24 */
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

float g_a3f_WindDirection[3];
int AGO_g_OldMovieMaterial;
int TextureBlanche;
int g_pHeatSFXMaterial;
unsigned int g_ulNumberOfAgos;
int g_AGO_MustReinitStaticVars;
int AGO_g_OddFrame;
char AGO_bPrevAGOWasExtraParam;
int g_AGO_PloufMaterial;
int AGO_gExtraMaterial;
int AGO_g_BigRainMaterial;
int AGO_g_WaterLightMaterial;
unsigned char g_bUsingMapMondeAGOs;
int AGO_g_b_DisplayingAGOs;
int AGO_g_pCurrentMaterial;
static float g_OldPloufDirection[3];
char g_bForceWhiteFog;
char g_DoSmallPlouf;
int g_b_IsRaining;
float g_ffFrameTime;
float g_ffLastFrameTime;
float g_fTimeDifference;
int g_AGO_EnvMaterial;
int g_NumberOfZeldaAgos;
int AGO_g_iIndexOfClippedSprite;
float g_fNextPlouf;
char AGO_g_MainCharacterPreviousPositionIsValid;
unsigned int AGO_G_CurrentVU1Frame;
float AGO_G_fCurrentTime;
char g_bCanResize2DSpriteWithPercentAccordingToViewportRatio;
int AGO_g_VisualMaterialForAuras;
int AGO_g_DisplayingAuraCharacter;
int HasAGO2BeenInit;
int g_b_IsRainy;
unsigned int g_NbAGO_Triangles;
unsigned int g_AGO_NbEngineFramesSinceStart;
unsigned int AGO_g_NbFootSteps;
tdstFootStep_ AGO_g_FootSteps[100];
int LUM_g_pMaterial;
float LUM_g_fSquaredDistance;
unsigned int LUM_g_NumberOfLums;
unsigned int LUM_g_NumberOfActiveLums;
char LUM_g_LumActivity[150];
float LUM_g_LumPositions[150][4];
AGO_Triangles_ g_pAGO_Triangles[200];
int AGO_g_SuperObjectForAuras;
float AGO_G_fCurrentTime_Saved;
unsigned int AGO_g_CurrentFrame_Saved;
unsigned int AGO_g_PreviousCurrentFrame_Saved;
AGO_Bitmap_ g_stTheBitmaps[20];
AGO_Gauge_ g_TheGauges[40];
AGO_Icone_ g_TheIcones[200];
/* aggregate */ int AGO_g_stMainCharacterCurrentPosition;
/* aggregate */ int AGO_g_stMainCharacterPreviousPosition;
/* aggregate */ int AGO_g_stMainCharacterFinalPosition;
float AGO_gExtraFloatParameter;
float AGO_gExtraParameter2[3];
float AGO_gExtraParameter1[3];
float g_AGO_AnimTimeLag;
float g_AGO_AnimTimeScale;
AGO_Part_ g_AGO[501];
unsigned int AGO_g_PreviousCurrentFrame;
unsigned int AGO_g_CurrentFrame;
int GLI_g_AnimatedTextureToUse;
unsigned int GLI_g_DontRefreshAnimated;
char GLI_g_StereoVisionMode;
char GLI_g_AfterEffect;
unsigned int GLI_g_MustBlocIn30FPS;
int AGO_g_SuperObjectForAGOs;
char GLI_g_NextMapWillHaveAStereoScopicEffect;
char GLI_g_NextMapWillHaveACinemaEffect;
float GLI_g_MotionBlurIntensity;
float GLI_g_FarValue;
float GLI_g_NearValue;
float AGO2_g_pfCosTable[512];
unsigned char g_bInGameMenu;
unsigned char g_bOneShotAnim;
unsigned char g_bTakeCareOfAnimationCoordination;
unsigned int SCT_g_DrawingMirrored;
/* aggregate */ int g_stEngineStructure;
unsigned char g_bHasTextureAnimationFinished;
float g_BaseTimeForParticleAnimation;
unsigned char g_ucCurrentViewport;
float gs_fCoefOfMultiplicationForAnimatedTexture;

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ago\AGO.c lines 98–141 */
/* addr: 0x001d1410  size: 392 bytes */
void SwitchData::RebuildSwitch(void)
{
    unsigned int pos;
    unsigned int i;
    /* line map: */
    /*   line 98 @ +0x000 */
    /*   line 102 @ +0x000 */
    /*   line 104 @ +0x000 */
    /*   line 110 @ +0x000 */
    /*   line 113 @ +0x000 */
    /*   line 117 @ +0x000 */
    /*   line 119 @ +0x000 */
    /*   line 125 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ago\AGO.c lines 8678–8707 */
/* addr: 0x001d15a0  size: 800 bytes */
void AGO_vCreateFootStep(float* Pos, float* Direction, void* hVisualMaterial, tdstFootStep_* p)
{
    unsigned int Mini;
    unsigned int i;
    /* aggregate */ int Temp;
    /* aggregate */ int Normal;
    /* line map: */
    /*   line 8678 @ +0x000 */
    /*   line 8678 @ +0x000 */
    /*   line 8680 @ +0x000 */
    /*   line 8682 @ +0x000 */
    /*   line 8684 @ +0x000 */
    /*   line 8686 @ +0x000 */
    /*   line 8686 @ +0x000 */
    /*   line 8689 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ago\AGO.c lines 8357–8387 */
/* addr: 0x001d18c0  size: 212 bytes */
unsigned int LUM_TestPosition(float* pPosition)
{
    float z;
    float y;
    float x;
    float fSquaredDistance;
    float fMinSqDistance;
    unsigned int ClosestIndex;
    unsigned int i;
    /* line map: */
    /*   line 8358 @ +0x000 */
    /*   line 8357 @ +0x000 */
    /*   line 8361 @ +0x000 */
    /*   line 8367 @ +0x000 */
    /*   line 8368 @ +0x000 */
    /*   line 8368 @ +0x000 */
    /*   line 8369 @ +0x000 */
    /*   line 8373 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ago\AGO.c lines 8086–8090 */
/* addr: 0x001d19a0  size: 96 bytes */
void AGO_vClearUnwanted110AGOsForDemos(AGO_Part_* p)
{
    unsigned int i;
    /* line map: */
    /*   line 8086 @ +0x000 */
    /*   line 8089 @ +0x000 */
    /*   line 8090 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ago\AGO.c lines 8019–8066 */
/* addr: 0x001d1a00  size: 508 bytes */
void AGO_vDisplayTriangles(/* function pointer */ int p_stVpt, AGO_Triangles_* p)
{
    unsigned int j;
    unsigned int i;
    /* line map: */
    /*   line 8019 @ +0x000 */
    /*   line 8019 @ +0x000 */
    /*   line 8023 @ +0x000 */
    /*   line 8028 @ +0x000 */
    /*   line 8036 @ +0x000 */
    /*   line 8040 @ +0x000 */
    /*   line 8043 @ +0x000 */
    /*   line 8055 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ago\AGO.c lines 7969–8005 */
/* addr: 0x001d1c00  size: 352 bytes */
void AGO_vCreateTriangle(float* c1, float* c2, float* c3, void* VisualMat, float U1, float V1, float U2, float V2, float U3, float V3, float DelayTime, unsigned int Parameter, AGO_Triangles_* p)
{
    int LeastIndex;
    unsigned int Least;
    int i;
    /* line map: */
    /*   line 7969 @ +0x000 */
    /*   line 7969 @ +0x000 */
    /*   line 7973 @ +0x000 */
    /*   line 7976 @ +0x000 */
    /*   line 7979 @ +0x000 */
    /*   line 7983 @ +0x000 */
    /*   line 8001 @ +0x000 */
    /*   line 8001 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ago\AGO.c lines 7803–7831 */
/* addr: 0x001d1d60  size: 132 bytes */
void AGO_Define_OrthogonalVectorsV1Flat(/* function pointer */ int p_stDirection, /* function pointer */ int p_stV1, /* function pointer */ int p_stV2)
{
    float fNorm1;
    /* line map: */
    /*   line 7816 @ +0x000 */
    /*   line 7816 @ +0x000 */
    /*   line 7803 @ +0x000 */
    /*   line 7816 @ +0x000 */
    /*   line 7824 @ +0x000 */
    /*   line 7819 @ +0x000 */
    /*   line 7826 @ +0x000 */
    /*   line 7831 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ago\AGO.c lines 7765–7791 */
/* addr: 0x001d1df0  size: 232 bytes */
void AGO_Define_OrthogonalVectors(/* function pointer */ int p_stDirection, /* function pointer */ int p_stV1, /* function pointer */ int p_stV2)
{
    float fNorm3;
    float fNorm2;
    float fNorm1;
    /* line map: */
    /*   line 7765 @ +0x000 */
    /*   line 7769 @ +0x000 */
    /*   line 7770 @ +0x000 */
    /*   line 7769 @ +0x000 */
    /*   line 7770 @ +0x000 */
    /*   line 7775 @ +0x000 */
    /*   line 7780 @ +0x000 */
    /*   line 7786 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ago\AGO.c lines 5886–7729 */
/* addr: 0x001d1ee0  size: 16408 bytes */
void AGO_vAddParticleContd(unsigned int PartType, /* function pointer */ int p_stPosition, /* function pointer */ int p_stDirection, void* hVisualMaterial, float parameter, AGO_Part_* p, AGO_Part_* p, AGO2_Part_* p, AGO_Part_* p, AGO_Part_* p, AGO_Part_* p, AGO_Part_* p, AGO_Part_* p, AGO_Part_* p)
{
    float fSizeY;
    float fSizeX;
    /* aggregate */ int Normal;
    float Pos1[3];
    unsigned int i;
    int j;
    AGO_V4D_ Vector4;
    AGO_V4D_ Vector3;
    AGO_V4D_ Vector2;
    AGO_V4D_ Vector1;
    AGO_V4D_ Vector4;
    AGO_V4D_ Vector3;
    AGO_V4D_ Vector2;
    AGO_V4D_ Vector1;
    AGO_V4D_ Vector4;
    AGO_V4D_ Vector3;
    AGO_V4D_ Vector2;
    AGO_V4D_ Vector1;
    AGO_V4D_ Vector4;
    AGO_V4D_ Vector3;
    AGO_V4D_ Vector2;
    AGO_V4D_ Vector1;
    AGO_V4D_ NDirection;
    AGO_V4D_ NPosition;
    float* p2;
    float* p1;
    float fNorm;
    float* p2;
    float* p1;
    float fNorm;
    float Color[4];
    float Color[4];
    float Color[4];
    float Color[4];
    float Color[4];
    float Color[4];
    AGO_V4D_ Vector4;
    AGO_V4D_ Vector3;
    AGO_V4D_ Vector2;
    AGO_V4D_ Vector1;
    AGO_V4D_ Vector4;
    AGO_V4D_ Vector3;
    AGO_V4D_ Vector2;
    AGO_V4D_ Vector1;
    AGO_V4D_ Vector4;
    AGO_V4D_ Vector3;
    AGO_V4D_ Vector2;
    AGO_V4D_ Vector1;
    AGO_V4D_ Vector4;
    AGO_V4D_ Vector3;
    AGO_V4D_ Vector2;
    AGO_V4D_ Vector1;
    AGO_V4D_ Vector4;
    AGO_V4D_ Vector3;
    AGO_V4D_ Vector2;
    AGO_V4D_ Vector1;
    AGO_V4D_ Vector4;
    AGO_V4D_ Vector3;
    AGO_V4D_ Vector2;
    AGO_V4D_ Vector1;
    AGO_V4D_ Vector4;
    AGO_V4D_ Vector3;
    AGO_V4D_ Vector2;
    AGO_V4D_ Vector1;
    AGO_V4D_ Vector4;
    AGO_V4D_ Vector3;
    AGO_V4D_ Vector2;
    AGO_V4D_ Vector1;
    AGO_V4D_ Vector4;
    AGO_V4D_ Vector3;
    AGO_V4D_ Vector2;
    AGO_V4D_ Vector1;
    AGO_V4D_ Vector4;
    AGO_V4D_ Vector3;
    AGO_V4D_ Vector2;
    AGO_V4D_ Vector1;
    AGO_V4D_ Vector4;
    AGO_V4D_ Vector3;
    AGO_V4D_ Vector2;
    AGO_V4D_ Vector1;
    AGO_V4D_ Vector4;
    AGO_V4D_ Vector3;
    AGO_V4D_ Vector2;
    AGO_V4D_ Vector1;
    AGO_V4D_ Vector4;
    AGO_V4D_ Vector3;
    AGO_V4D_ Vector2;
    AGO_V4D_ Vector1;
    AGO_V4D_ Vector4;
    AGO_V4D_ Vector3;
    AGO_V4D_ Vector2;
    AGO_V4D_ Vector1;
    AGO_V4D_ NDirection;
    AGO_V4D_ NPosition;
    unsigned int i;
    float sx;
    float SPEED;
    float DIST;
    float R2;
    float R1;
    /* aggregate */ int V2;
    /* aggregate */ int V1;
    unsigned int can;
    AGO_V4D_ Vector4;
    AGO_V4D_ Vector3;
    AGO_V4D_ Vector2;
    AGO_V4D_ Vector1;
    unsigned int can;
    AGO_V4D_ Vector4;
    AGO_V4D_ Vector3;
    AGO_V4D_ Vector2;
    AGO_V4D_ Vector1;
    unsigned int can;
    unsigned int i;
    unsigned int IntParam;
    float Direction[4];
    float param2;
    float multiplier;
    float Pos2[3];
    float V4[3];
    float V3[3];
    float V2[3];
    float V1[3];
    float fNorm1;
    int j;
    unsigned int i;
    int j;
    float Norm;
    int j;
    int j;
    unsigned int Limit;
    float* p2;
    float* p1;
    float* p2;
    float* p1;
    float scale;
    int i;
    float Direction[3];
    float Pos[3];
    AGO_V4D_ Dest;
    AGO_V4D_ Pos;
    float ZAngle;
    float YAngle;
    float XAngle;
    /* line map: */
    /*   line 5886 @ +0x000 */
    /*   line 5888 @ +0x000 */
    /*   line 5889 @ +0x000 */
    /*   line 5886 @ +0x000 */
    /*   line 5886 @ +0x000 */
    /*   line 5889 @ +0x000 */
    /*   line 5901 @ +0x000 */
    /*   line 5909 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ago\AGO.c lines 5069–5862 */
/* addr: 0x001d5f00  size: 7616 bytes */
void AGO_vAddParticle(unsigned int PartType, /* function pointer */ int p_stPosition, /* function pointer */ int p_stDirection, void* hVisualMaterial, float parameter, AGO_Part_* p, AGO_Part_* p)
{
    int j;
    float* p2;
    float* p1;
    float* p2;
    float* param0;
    float* p2;
    float* p1;
    float* p2;
    float* p1;
    float fNorm;
    float* p2;
    float* p1;
    float fNorm;
    float angle;
    int Number;
    float sin1;
    float cos1;
    float fRadius;
    float* p2;
    float* p1;
    float* p2;
    float* p1;
    float scale;
    int i;
    float Direction[3];
    float Pos[3];
    float NextBubble;
    float NextBubble;
    float NextBubble;
    float NextBubble;
    /* line map: */
    /*   line 5069 @ +0x000 */
    /*   line 5069 @ +0x000 */
    /*   line 5074 @ +0x000 */
    /*   line 5079 @ +0x000 */
    /*   line 5083 @ +0x000 */
    /*   line 5096 @ +0x000 */
    /*   line 5109 @ +0x000 */
    /*   line 5109 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ago\AGO.c lines 4934–4974 */
/* addr: 0x001d7cc0  size: 764 bytes */
void CreateType25AGO(/* function pointer */ int p_stPosition, /* function pointer */ int p_stDirection, void* hVisualMaterial, float parameter, AGO_Part_* p)
{
    float* p2;
    float* p1;
    unsigned int ulCpt;
    float scale;
    float Direction[3];
    float Pos[3];
    /* line map: */
    /*   line 4934 @ +0x000 */
    /*   line 4940 @ +0x000 */
    /*   line 4940 @ +0x000 */
    /*   line 4942 @ +0x000 */
    /*   line 4946 @ +0x000 */
    /*   line 4938 @ +0x000 */
    /*   line 4950 @ +0x000 */
    /*   line 4953 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ago\AGO.c lines 4884–4921 */
/* addr: 0x001d7fc0  size: 620 bytes */
void CreateType24AGO(/* function pointer */ int p_stPosition, /* function pointer */ int p_stDirection, void* hVisualMaterial, float parameter, AGO_Part_* p)
{
    unsigned int ulCpt;
    float fTime;
    float fScale;
    float Direction[3];
    float Pos[3];
    /* line map: */
    /*   line 4884 @ +0x000 */
    /*   line 4887 @ +0x000 */
    /*   line 4887 @ +0x000 */
    /*   line 4894 @ +0x000 */
    /*   line 4890 @ +0x000 */
    /*   line 4890 @ +0x000 */
    /*   line 4892 @ +0x000 */
    /*   line 4899 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ago\AGO.c lines 4847–4872 */
/* addr: 0x001d8230  size: 636 bytes */
void CreateType22AGO(/* function pointer */ int p_stPosition, /* function pointer */ int p_stDirection, void* hVisualMaterial, float parameter, AGO_Part_* p)
{
    unsigned int ulCpt;
    float Direction[3];
    float Pos[3];
    /* line map: */
    /*   line 4847 @ +0x000 */
    /*   line 4850 @ +0x000 */
    /*   line 4850 @ +0x000 */
    /*   line 4853 @ +0x000 */
    /*   line 4857 @ +0x000 */
    /*   line 4860 @ +0x000 */
    /*   line 4860 @ +0x000 */
    /*   line 4862 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ago\AGO.c lines 4793–4836 */
/* addr: 0x001d84b0  size: 604 bytes */
void CreateType18AGO(/* function pointer */ int p_stPosition, /* function pointer */ int p_stDirection, void* hVisualMaterial, float parameter, AGO_Part_* p)
{
    float angle;
    int i;
    int Number;
    float sin1;
    float cos1;
    float scale;
    float fRadius;
    float Direction[3];
    float Pos[3];
    /* line map: */
    /*   line 4793 @ +0x000 */
    /*   line 4803 @ +0x000 */
    /*   line 4796 @ +0x000 */
    /*   line 4796 @ +0x000 */
    /*   line 4799 @ +0x000 */
    /*   line 4799 @ +0x000 */
    /*   line 4799 @ +0x000 */
    /*   line 4801 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ago\AGO.c lines 4738–4779 */
/* addr: 0x001d8710  size: 684 bytes */
void CreateType17AGO(/* function pointer */ int p_stPosition, /* function pointer */ int p_stDirection, void* hVisualMaterial, float parameter, AGO_Part_* p)
{
    float xNorm;
    unsigned int ulCpt;
    float fPosAlea;
    float fScale;
    /* aggregate */ int Direction2;
    float Direction[3];
    float Pos[3];
    /* line map: */
    /*   line 4738 @ +0x000 */
    /*   line 4742 @ +0x000 */
    /*   line 4742 @ +0x000 */
    /*   line 4745 @ +0x000 */
    /*   line 4746 @ +0x000 */
    /*   line 4750 @ +0x000 */
    /*   line 4755 @ +0x000 */
    /*   line 4755 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ago\AGO.c lines 4688–4710 */
/* addr: 0x001d89c0  size: 240 bytes */
void CreateType13AGO(/* function pointer */ int p_stPosition, /* function pointer */ int p_stDirection, void* hVisualMaterial, float parameter, AGO_Part_* p)
{
    float* p2;
    float* p1;
    float fScaleY;
    float fScaleX;
    float Direction[3];
    float Pos[3];
    /* line map: */
    /*   line 4688 @ +0x000 */
    /*   line 4691 @ +0x000 */
    /*   line 4702 @ +0x000 */
    /*   line 4702 @ +0x000 */
    /*   line 4702 @ +0x000 */
    /*   line 4700 @ +0x000 */
    /*   line 4696 @ +0x000 */
    /*   line 4699 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ago\AGO.c lines 4638–4675 */
/* addr: 0x001d8ab0  size: 740 bytes */
void CreateType6AGO(/* function pointer */ int p_stPosition, /* function pointer */ int p_stDirection, void* hVisualMaterial, float parameter)
{
    unsigned int ulCpt;
    /* aggregate */ int stHit;
    float fT;
    float fDist;
    float fTime;
    float scale;
    float Direction[3];
    float Pos[3];
    /* line map: */
    /*   line 4638 @ +0x000 */
    /*   line 4641 @ +0x000 */
    /*   line 4640 @ +0x000 */
    /*   line 4640 @ +0x000 */
    /*   line 4641 @ +0x000 */
    /*   line 4646 @ +0x000 */
    /*   line 4650 @ +0x000 */
    /*   line 4656 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ago\AGO.c lines 4548–4597 */
/* addr: 0x001d8da0  size: 840 bytes */
void CreateType3AGO(/* function pointer */ int p_stPosition, /* function pointer */ int p_stDirection, void* hVisualMaterial, float parameter, AGO_Part_* p)
{
    float* p2;
    float* p1;
    unsigned int ulCpt;
    float fScale;
    float Direction[3];
    float Pos[3];
    /* line map: */
    /*   line 4548 @ +0x000 */
    /*   line 4558 @ +0x000 */
    /*   line 4551 @ +0x000 */
    /*   line 4552 @ +0x000 */
    /*   line 4555 @ +0x000 */
    /*   line 4555 @ +0x000 */
    /*   line 4555 @ +0x000 */
    /*   line 4562 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ago\AGO.c lines 4485–4506 */
/* addr: 0x001d90f0  size: 556 bytes */
void CreateType1204AGO(/* function pointer */ int p_stPosition, void* hVisualMaterial, AGO_Part_* p)
{
    float* p2;
    float* p1;
    int i;
    float scale;
    float Direction[3];
    float Pos[3];
    float NextBubble;
    /* line map: */
    /*   line 4485 @ +0x000 */
    /*   line 4485 @ +0x000 */
    /*   line 4490 @ +0x000 */
    /*   line 4494 @ +0x000 */
    /*   line 4497 @ +0x000 */
    /*   line 4497 @ +0x000 */
    /*   line 4497 @ +0x000 */
    /*   line 4497 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ago\AGO.c lines 4447–4471 */
/* addr: 0x001d9320  size: 664 bytes */
void CreateType1203AGO(/* function pointer */ int p_stPosition, void* hVisualMaterial, AGO_Part_* p)
{
    float* p2;
    float* p1;
    int i;
    float scale;
    float Direction[3];
    float Pos[3];
    /* line map: */
    /*   line 4447 @ +0x000 */
    /*   line 4450 @ +0x000 */
    /*   line 4452 @ +0x000 */
    /*   line 4455 @ +0x000 */
    /*   line 4459 @ +0x000 */
    /*   line 4461 @ +0x000 */
    /*   line 4461 @ +0x000 */
    /*   line 4461 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ago\AGO.c lines 4402–4432 */
/* addr: 0x001d95c0  size: 632 bytes */
void CreateType1202AGO(/* function pointer */ int p_stPosition, void* hVisualMaterial, AGO_Part_* p)
{
    float* p2;
    float* p1;
    int i;
    float scaley;
    float scalex;
    float Direction[3];
    float Pos[3];
    /* line map: */
    /*   line 4402 @ +0x000 */
    /*   line 4406 @ +0x000 */
    /*   line 4408 @ +0x000 */
    /*   line 4408 @ +0x000 */
    /*   line 4408 @ +0x000 */
    /*   line 4408 @ +0x000 */
    /*   line 4408 @ +0x000 */
    /*   line 4417 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ago\AGO.c lines 4373–4384 */
/* addr: 0x001d9840  size: 328 bytes */
void CreateType104AGO(/* function pointer */ int p_stPosition, /* function pointer */ int p_stDirection, void* hVisualMaterial)
{
    float* p2;
    float* p1;
    float* p2;
    float* p1;
    int i;
    float Direction[3];
    float Pos[3];
    /* line map: */
    /*   line 4373 @ +0x000 */
    /*   line 4374 @ +0x000 */
    /*   line 4373 @ +0x000 */
    /*   line 4373 @ +0x000 */
    /*   line 4378 @ +0x000 */
    /*   line 4380 @ +0x000 */
    /*   line 4381 @ +0x000 */
    /*   line 4384 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ago\AGO.c lines 4349–4361 */
/* addr: 0x001d9990  size: 692 bytes */
void CreateType83AGO(/* function pointer */ int p_stPosition, /* function pointer */ int p_stDirection, void* hVisualMaterial, float parameter)
{
    float scale;
    float Direction[3];
    float Pos[3];
    float NextBubble;
    /* line map: */
    /*   line 4349 @ +0x000 */
    /*   line 4351 @ +0x000 */
    /*   line 4351 @ +0x000 */
    /*   line 4352 @ +0x000 */
    /*   line 4352 @ +0x000 */
    /*   line 4356 @ +0x000 */
    /*   line 4358 @ +0x000 */
    /*   line 4358 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ago\AGO.c lines 4326–4336 */
/* addr: 0x001d9c50  size: 756 bytes */
void CreateType67AGO(/* function pointer */ int p_stPosition, /* function pointer */ int p_stDirection, void* hVisualMaterial, float parameter)
{
    float scale;
    float Direction[3];
    float Pos[3];
    float NextBubble;
    /* line map: */
    /*   line 4326 @ +0x000 */
    /*   line 4328 @ +0x000 */
    /*   line 4332 @ +0x000 */
    /*   line 4332 @ +0x000 */
    /*   line 4332 @ +0x000 */
    /*   line 4334 @ +0x000 */
    /*   line 4336 @ +0x000 */
    /*   line 4336 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ago\AGO.c lines 4303–4313 */
/* addr: 0x001d9f50  size: 712 bytes */
void CreateType28AGO(/* function pointer */ int p_stPosition, /* function pointer */ int p_stDirection, void* hVisualMaterial, float parameter)
{
    float scale;
    float Direction[3];
    float Pos[3];
    float NextBubble;
    /* line map: */
    /*   line 4303 @ +0x000 */
    /*   line 4305 @ +0x000 */
    /*   line 4309 @ +0x000 */
    /*   line 4309 @ +0x000 */
    /*   line 4309 @ +0x000 */
    /*   line 4309 @ +0x000 */
    /*   line 4311 @ +0x000 */
    /*   line 4313 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ago\AGO.c lines 4279–4291 */
/* addr: 0x001da220  size: 216 bytes */
void CreateType65AGO(/* function pointer */ int p_stPosition, /* function pointer */ int p_stDirection, void* hVisualMaterial, float parameter)
{
    float* p2;
    float* p1;
    float* p2;
    float* p1;
    float scale;
    float Direction[3];
    float Pos[3];
    /* line map: */
    /*   line 4283 @ +0x000 */
    /*   line 4279 @ +0x000 */
    /*   line 4279 @ +0x000 */
    /*   line 4279 @ +0x000 */
    /*   line 4283 @ +0x000 */
    /*   line 4288 @ +0x000 */
    /*   line 4288 @ +0x000 */
    /*   line 4288 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ago\AGO.c lines 4205–4224 */
/* addr: 0x001da300  size: 468 bytes */
void CreateType21AGO(/* function pointer */ int p_stPosition, /* function pointer */ int p_stDirection, void* hVisualMaterial, float parameter, AGO_Part_* p)
{
    float fTemp;
    int i;
    float Direction[3];
    float Pos[3];
    float Offset;
    /* line map: */
    /*   line 4205 @ +0x000 */
    /*   line 4205 @ +0x000 */
    /*   line 4209 @ +0x000 */
    /*   line 4209 @ +0x000 */
    /*   line 4209 @ +0x000 */
    /*   line 4209 @ +0x000 */
    /*   line 4209 @ +0x000 */
    /*   line 4209 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ago\AGO.c lines 4127–4149 */
/* addr: 0x001da4e0  size: 488 bytes */
void CreateType15AGO(/* function pointer */ int p_stPosition, /* function pointer */ int p_stDirection, void* hVisualMaterial, float parameter)
{
    float offset2;
    float offset;
    int i;
    float scale;
    float Direction[3];
    float Pos[3];
    /* line map: */
    /*   line 4127 @ +0x000 */
    /*   line 4129 @ +0x000 */
    /*   line 4131 @ +0x000 */
    /*   line 4148 @ +0x000 */
    /*   line 4148 @ +0x000 */
    /*   line 4148 @ +0x000 */
    /*   line 4148 @ +0x000 */
    /*   line 4144 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ago\AGO.c lines 4079–4116 */
/* addr: 0x001da6d0  size: 612 bytes */
void CreateType35AGO(/* function pointer */ int p_stPosition, /* function pointer */ int p_stDirection, void* hVisualMaterial, float parameter)
{
    float sin1;
    float cos1;
    float Mul2;
    float Mul1;
    /* aggregate */ int stV3;
    /* aggregate */ int stV2;
    /* aggregate */ int stV1;
    float Direction[3];
    float Pos[3];
    /* line map: */
    /*   line 4083 @ +0x000 */
    /*   line 4083 @ +0x000 */
    /*   line 4080 @ +0x000 */
    /*   line 4079 @ +0x000 */
    /*   line 4088 @ +0x000 */
    /*   line 4079 @ +0x000 */
    /*   line 4088 @ +0x000 */
    /*   line 4088 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ago\AGO.c lines 4040–4060 */
/* addr: 0x001da940  size: 488 bytes */
void CreateType62AGO(/* function pointer */ int p_stPosition, /* function pointer */ int p_stDirection, void* hVisualMaterial)
{
    float* p2;
    float* p1;
    float* p2;
    float* p1;
    float time;
    float scale;
    int i;
    float Direction[3];
    float Pos[3];
    /* line map: */
    /*   line 4040 @ +0x000 */
    /*   line 4041 @ +0x000 */
    /*   line 4043 @ +0x000 */
    /*   line 4041 @ +0x000 */
    /*   line 4046 @ +0x000 */
    /*   line 4046 @ +0x000 */
    /*   line 4055 @ +0x000 */
    /*   line 4055 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ago\AGO.c lines 3998–4027 */
/* addr: 0x001dab30  size: 412 bytes */
void CreateType60AGO(/* function pointer */ int p_stPosition, /* function pointer */ int p_stDirection, void* hVisualMaterial)
{
    float* p2;
    float* p1;
    float* p2;
    float* p1;
    float scale;
    int i;
    float Direction[3];
    float Pos[3];
    /* line map: */
    /*   line 3998 @ +0x000 */
    /*   line 4001 @ +0x000 */
    /*   line 4000 @ +0x000 */
    /*   line 4020 @ +0x000 */
    /*   line 4022 @ +0x000 */
    /*   line 4024 @ +0x000 */
    /*   line 4024 @ +0x000 */
    /*   line 4024 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ago\AGO.c lines 3966–3984 */
/* addr: 0x001dacd0  size: 468 bytes */
void CreateType52AGO(/* function pointer */ int p_stPosition, /* function pointer */ int p_stDirection, void* hVisualMaterial)
{
    float* p2;
    float* p1;
    float* p1;
    int i;
    float scale;
    float Direction[3];
    float Pos[3];
    /* line map: */
    /*   line 3966 @ +0x000 */
    /*   line 3967 @ +0x000 */
    /*   line 3966 @ +0x000 */
    /*   line 3966 @ +0x000 */
    /*   line 3971 @ +0x000 */
    /*   line 3981 @ +0x000 */
    /*   line 3981 @ +0x000 */
    /*   line 3981 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ago\AGO.c lines 3941–3953 */
/* addr: 0x001daeb0  size: 348 bytes */
void CreateType72AGO(/* function pointer */ int p_stPosition, /* function pointer */ int p_stDirection, void* hVisualMaterial, float parameter)
{
    float f;
    float* p2;
    float* p1;
    float scale;
    int i;
    float Direction[3];
    float Pos[3];
    /* line map: */
    /*   line 3941 @ +0x000 */
    /*   line 3943 @ +0x000 */
    /*   line 3947 @ +0x000 */
    /*   line 3947 @ +0x000 */
    /*   line 3947 @ +0x000 */
    /*   line 3949 @ +0x000 */
    /*   line 3951 @ +0x000 */
    /*   line 3951 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ago\AGO.c lines 3817–3841 */
/* addr: 0x001db010  size: 592 bytes */
void CreateType8AGO(/* function pointer */ int p_stPosition, /* function pointer */ int p_stDirection, void* hVisualMaterial)
{
    float* p2;
    float* p1;
    float* p2;
    float* p1;
    float* p2;
    float* p1;
    float vy;
    float vx;
    float fNorm;
    float Pos2[3];
    float Direction[3];
    float Pos[3];
    /* line map: */
    /*   line 3818 @ +0x000 */
    /*   line 3818 @ +0x000 */
    /*   line 3818 @ +0x000 */
    /*   line 3824 @ +0x000 */
    /*   line 3817 @ +0x000 */
    /*   line 3820 @ +0x000 */
    /*   line 3824 @ +0x000 */
    /*   line 3824 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ago\AGO.c lines 3783–3803 */
/* addr: 0x001db260  size: 820 bytes */
void CreateType5AGO(/* function pointer */ int p_stPosition, void* hVisualMaterial, float parameter)
{
    float Direction[3];
    float Pos[3];
    /* line map: */
    /*   line 3783 @ +0x000 */
    /*   line 3783 @ +0x000 */
    /*   line 3783 @ +0x000 */
    /*   line 3783 @ +0x000 */
    /*   line 3786 @ +0x000 */
    /*   line 3786 @ +0x000 */
    /*   line 3786 @ +0x000 */
    /*   line 3787 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ago\AGO.c lines 3306–3771 */
/* addr: 0x001db5a0  size: 4608 bytes */
void AGO_vProcessPart(unsigned int ulPartNumber, /* function pointer */ int _p_stViewport, AGO_Part_* p)
{
    float pos2;
    float pos1;
    float pos0;
    float sinz;
    float cosz;
    float siny;
    float cosy;
    float sinx;
    float cosx;
    float Angle;
    float Cos1;
    float Sin1;
    /* aggregate */ int V2;
    /* aggregate */ int V1;
    float* pp;
    float untransparency;
    float unscale;
    float* pp2;
    float* pp;
    int i;
    int Finished;
    float Val2;
    float Val1;
    int i;
    int Finished;
    float Val2;
    float Val1;
    float TempValue;
    /* line map: */
    /*   line 3306 @ +0x000 */
    /*   line 3306 @ +0x000 */
    /*   line 3306 @ +0x000 */
    /*   line 3306 @ +0x000 */
    /*   line 3306 @ +0x000 */
    /*   line 3306 @ +0x000 */
    /*   line 3310 @ +0x000 */
    /*   line 3319 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ago\AGO.c lines 2585–3258 */
/* addr: 0x001dc7a0  size: 5992 bytes */
void AGO_vDisplayPart(unsigned int ulPartNumber, /* function pointer */ int _p_stViewport, AGO_Part_* p)
{
    int i;
    float x4[3];
    float x3[3];
    float x2[3];
    float x1[3];
    float v2[3];
    float v1[3];
    float* CosTable;
    float x4[3];
    float x3[3];
    float x2[3];
    float x1[3];
    float dt;
    float zz2;
    float xx2;
    float Scale;
    float Z;
    float FragTransparency;
    float Angle;
    int i;
    float* CosTable;
    float Position[3];
    float x4[3];
    float x3[3];
    float x2[3];
    float x1[3];
    float dt;
    float zz2;
    float xx2;
    float Scale;
    float Z;
    float FragTransparency;
    float Angle;
    int i;
    float TempPos[3];
    float Val2;
    float Val1;
    /* aggregate */ int stV3;
    /* aggregate */ int stV2;
    /* aggregate */ int stV1;
    float xNorm;
    int i;
    float Alpha;
    float A2;
    float dy;
    float dx;
    float scale;
    /* aggregate */ int VY;
    /* aggregate */ int VX;
    /* aggregate */ int vDir2;
    /* aggregate */ int vDir;
    /* aggregate */ int NewPos;
    /* aggregate */ int OldRegularPos;
    /* aggregate */ int OldModifiedPos;
    float xNorm;
    int i;
    float Time;
    float dPos;
    float Alpha;
    float Scale;
    /* aggregate */ int VY;
    /* aggregate */ int VX;
    /* aggregate */ int vDir2;
    /* aggregate */ int vDir;
    /* aggregate */ int NewPos;
    /* aggregate */ int OldRegularPos;
    /* aggregate */ int OldModifiedPos;
    float fNorm;
    /* aggregate */ int stV2;
    /* aggregate */ int stV1;
    float timet;
    float* pp2;
    float* pp;
    float* pp2;
    float timet;
    float AddZ;
    float AddY;
    float AddX;
    /* line map: */
    /*   line 2588 @ +0x000 */
    /*   line 2588 @ +0x000 */
    /*   line 2588 @ +0x000 */
    /*   line 2588 @ +0x000 */
    /*   line 2588 @ +0x000 */
    /*   line 2588 @ +0x000 */
    /*   line 2592 @ +0x000 */
    /*   line 2592 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ago\AGO.c lines 2436–2577 */
/* addr: 0x001ddf10  size: 872 bytes */
void AGO_vReDisplayAllPartsREAL(/* function pointer */ int _p_stViewport)
{
    void* NextTexture;
    void* CurrentTexture;
    int Start;
    float AlphaTemp;
    unsigned int i;
    /* line map: */
    /*   line 2436 @ +0x000 */
    /*   line 2443 @ +0x000 */
    /*   line 2445 @ +0x000 */
    /*   line 2447 @ +0x000 */
    /*   line 2451 @ +0x000 */
    /*   line 2456 @ +0x000 */
    /*   line 2463 @ +0x000 */
    /*   line 2463 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ago\AGO.c lines 2367–2409 */
/* addr: 0x001de280  size: 600 bytes */
void AGO_vReDisplayAllParts(/* function pointer */ int _p_stViewport)
{
    unsigned int FrameTime;
    /* line map: */
    /*   line 2371 @ +0x000 */
    /*   line 2367 @ +0x000 */
    /*   line 2368 @ +0x000 */
    /*   line 2367 @ +0x000 */
    /*   line 2371 @ +0x000 */
    /*   line 2375 @ +0x000 */
    /*   line 2375 @ +0x000 */
    /*   line 2382 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ago\AGO.c lines 1983–2345 */
/* addr: 0x001de4e0  size: 2024 bytes */
void AGO_vProcessAllPartsREAL(/* function pointer */ int _p_stViewport, AGO_Part_* p)
{
    void* NextTexture;
    void* CurrentTexture;
    int Start;
    float AlphaTemp;
    unsigned int Type;
    unsigned int MustDestroy;
    unsigned int i;
    int LastFrozen;
    /* line map: */
    /*   line 1983 @ +0x000 */
    /*   line 2011 @ +0x000 */
    /*   line 2013 @ +0x000 */
    /*   line 2015 @ +0x000 */
    /*   line 2018 @ +0x000 */
    /*   line 2020 @ +0x000 */
    /*   line 2026 @ +0x000 */
    /*   line 2029 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ago\AGO.c lines 1900–1963 */
/* addr: 0x001decd0  size: 816 bytes */
void AGO_vProcessAllParts(/* function pointer */ int _p_stViewport, unsigned int FrameTime)
{
    /* line map: */
    /*   line 1900 @ +0x000 */
    /*   line 1900 @ +0x000 */
    /*   line 1904 @ +0x000 */
    /*   line 1909 @ +0x000 */
    /*   line 1911 @ +0x000 */
    /*   line 1911 @ +0x000 */
    /*   line 1911 @ +0x000 */
    /*   line 1915 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ago\AGO.c lines 1858–1870 */
/* addr: 0x001df000  size: 612 bytes */
void AGO_fn_vDisplayBitmaps(/* function pointer */ int p_stVpt)
{
    int i;
    /* line map: */
    /*   line 1858 @ +0x000 */
    /*   line 1860 @ +0x000 */
    /*   line 1868 @ +0x000 */
    /*   line 1870 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ago\AGO.c lines 1707–1818 */
/* addr: 0x001df270  size: 596 bytes */
void AGO_vDisplayGAUGES(/* function pointer */ int p_stVpt)
{
    float position;
    float diffy;
    float diffx;
    int i;
    /* line map: */
    /*   line 1707 @ +0x000 */
    /*   line 1709 @ +0x000 */
    /*   line 1716 @ +0x000 */
    /*   line 1735 @ +0x000 */
    /*   line 1742 @ +0x000 */
    /*   line 1742 @ +0x000 */
    /*   line 1748 @ +0x000 */
    /*   line 1748 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ago\AGO.c lines 1600–1696 */
/* addr: 0x001df4d0  size: 288 bytes */
void AGO_vDisplayIcones(/* function pointer */ int p_stVpt)
{
    int i;
    /* line map: */
    /*   line 1600 @ +0x000 */
    /*   line 1605 @ +0x000 */
    /*   line 1610 @ +0x000 */
    /*   line 1617 @ +0x000 */
    /*   line 1655 @ +0x000 */
    /*   line 1679 @ +0x000 */
    /*   line 1681 @ +0x000 */
    /*   line 1687 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ago\AGO.c lines 1511–1528 */
/* addr: 0x001df5f0  size: 348 bytes */
void AddIconeWithUVs(float* V1, float* V2, float Num, void* Mat, float* UV1, float* UV2)
{
    /* line map: */
    /*   line 1512 @ +0x000 */
    /*   line 1514 @ +0x000 */
    /*   line 1512 @ +0x000 */
    /*   line 1514 @ +0x000 */
    /*   line 1512 @ +0x000 */
    /*   line 1511 @ +0x000 */
    /*   line 1514 @ +0x000 */
    /*   line 1512 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ago\AGO.c lines 1487–1503 */
/* addr: 0x001df750  size: 344 bytes */
void AddIcone(float* V1, float* V2, float Num, void* Mat)
{
    /* line map: */
    /*   line 1488 @ +0x000 */
    /*   line 1490 @ +0x000 */
    /*   line 1493 @ +0x000 */
    /*   line 1488 @ +0x000 */
    /*   line 1487 @ +0x000 */
    /*   line 1487 @ +0x000 */
    /*   line 1487 @ +0x000 */
    /*   line 1487 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ago\AGO.c lines 1447–1477 */
/* addr: 0x001df8b0  size: 460 bytes */
void AGO_vSetIcon(int NumeroVp, int Num, float* V1, float* V2, float xTransparency, void* Mat)
{
    /* line map: */
    /*   line 1447 @ +0x000 */
    /*   line 1447 @ +0x000 */
    /*   line 1449 @ +0x000 */
    /*   line 1447 @ +0x000 */
    /*   line 1450 @ +0x000 */
    /*   line 1450 @ +0x000 */
    /*   line 1449 @ +0x000 */
    /*   line 1452 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ago\AGO.c lines 1400–1413 */
/* addr: 0x001dfa80  size: 220 bytes */
void AGO_vSetGauge(int NumeroVp, int NumeroGauge, float* V1, float* V2, float xNiveau, float xTransparency, void* hVisualMaterial1, void* hVisualMaterial2)
{
    /* line map: */
    /*   line 1400 @ +0x000 */
    /*   line 1400 @ +0x000 */
    /*   line 1400 @ +0x000 */
    /*   line 1401 @ +0x000 */
    /*   line 1402 @ +0x000 */
    /*   line 1401 @ +0x000 */
    /*   line 1402 @ +0x000 */
    /*   line 1401 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ago\AGO.c lines 1185–1210 */
/* addr: 0x001dfb60  size: 176 bytes */
void AGO_vDestroyAllParts(AGO_Part_* pdst, AGO_Part_* psrc)
{
    unsigned int Limit;
    unsigned int NumToSkip;
    unsigned int Source;
    /* line map: */
    /*   line 1190 @ +0x000 */
    /*   line 1185 @ +0x000 */
    /*   line 1196 @ +0x000 */
    /*   line 1196 @ +0x000 */
    /*   line 1201 @ +0x000 */
    /*   line 1205 @ +0x000 */
    /*   line 1208 @ +0x000 */
    /*   line 1210 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ago\AGO.c lines 974–1151 */
/* addr: 0x001dfc10  size: 1880 bytes */
void AGO_vCreatePart(unsigned int parm_ulType, float* parm_a3_fPosition, float* parm_a3_fDirection, float TimeLimit, float fScaleX, float fScaleY, void* pVisualMaterial, AGO_Part_* p)
{
    float fAngle;
    float fSin2;
    float fCos2;
    float fSin1;
    float fCos1;
    /* aggregate */ int V2;
    /* aggregate */ int V1;
    float* p2;
    float* p1;
    float Angle;
    float Cos1;
    float Sin1;
    /* aggregate */ int V2;
    /* aggregate */ int V1;
    float* p2;
    float* p1;
    float* p2;
    float* p1;
    float* p2;
    float* p1;
    int i;
    /* line map: */
    /*   line 974 @ +0x000 */
    /*   line 974 @ +0x000 */
    /*   line 974 @ +0x000 */
    /*   line 977 @ +0x000 */
    /*   line 987 @ +0x000 */
    /*   line 993 @ +0x000 */
    /*   line 999 @ +0x000 */
    /*   line 1004 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ago\AGO.c lines 930–961 */
/* addr: 0x001e0370  size: 220 bytes */
int AGO_ulGetElderOne(void)
{
    float fOldestTime;
    unsigned int ulOldestIndex;
    unsigned int i;
    /* line map: */
    /*   line 930 @ +0x000 */
    /*   line 934 @ +0x000 */
    /*   line 938 @ +0x000 */
    /*   line 942 @ +0x000 */
    /*   line 944 @ +0x000 */
    /*   line 950 @ +0x000 */
    /*   line 956 @ +0x000 */
    /*   line 959 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ago\AGO.c lines 716–753 */
/* addr: 0x001e0450  size: 392 bytes */
void AGO_vInit(void)
{
    /* line map: */
    /*   line 720 @ +0x000 */
    /*   line 736 @ +0x000 */
    /*   line 716 @ +0x000 */
    /*   line 720 @ +0x000 */
    /*   line 719 @ +0x000 */
    /*   line 722 @ +0x000 */
    /*   line 724 @ +0x000 */
    /*   line 727 @ +0x000 */
    /* TODO: decompile from asm/... */
}
