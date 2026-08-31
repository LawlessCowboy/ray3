/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ago\AGO3.cpp */
/* Language: C */
/* Compiler: MW MIPS C Compiler */

#include <stddef.h>

/* Recovered aggregate layouts from MWCC debug type records. */
typedef struct AGO3_Chain AGO3_Chain;
typedef struct _stTimerCount _stTimerCount;
typedef struct AGO3_CanRipple AGO3_CanRipple;
typedef struct tdstCouple_ tdstCouple_;
typedef struct AGO3_Smoke AGO3_Smoke;
typedef struct AGO3_Part AGO3_Part;
typedef struct C_Vector C_Vector;
typedef struct tdstAnim3d_ tdstAnim3d_;
typedef struct SCT_tdstListOfSoundEvent_ SCT_tdstListOfSoundEvent_;
typedef struct CINE_tdstCine_ CINE_tdstCine_;
typedef struct tdstAChannel_ tdstAChannel_;
typedef struct stRECT stRECT;
typedef struct AGO3_BeamWithUVs AGO3_BeamWithUVs;
typedef struct GEO_tdstEdge_ GEO_tdstEdge_;
typedef struct SECT_tdstListOfDNMLights_ SECT_tdstListOfDNMLights_;
typedef struct tdstFrame3d_ tdstFrame3d_;
typedef struct tdst3dData_ tdst3dData_;
typedef struct SECT_tdstSector_ SECT_tdstSector_;
typedef struct AGO3_FistSmoke AGO3_FistSmoke;
typedef struct tdstElement3d_ tdstElement3d_;
typedef struct _tdstBinarizedDataForMenu _tdstBinarizedDataForMenu;
typedef struct tdstSubAnim_ tdstSubAnim_;
typedef struct tdstEngineTimerStructure_ tdstEngineTimerStructure_;
typedef struct AGO3_ScrollMatUV AGO3_ScrollMatUV;
typedef struct stPOINT stPOINT;
typedef union _SND_tduRefEvt _SND_tduRefEvt;
typedef struct AGO3_Target AGO3_Target;
typedef struct AGO3_Snowboard_SnowEffect AGO3_Snowboard_SnowEffect;
typedef struct CINE_Manager_ CINE_Manager_;
typedef struct tdstBrain_ tdstBrain_;
typedef struct tdstGraphChainedListNode_ tdstGraphChainedListNode_;
typedef struct tdstEvent_ tdstEvent_;
typedef struct stMorphData stMorphData;
typedef struct GLD_tdstDeviceAttributes_ GLD_tdstDeviceAttributes_;
typedef struct WP_tdstGraph_ WP_tdstGraph_;

struct AGO3_Chain {
    /* C++ base AGO3_Part at +0x0. */
    /* aggregate */ int m_stPos; /* +0x30 */
    /* aggregate */ int m_stVector; /* +0x3c */
    /* aggregate */ int m_stIntermediateVector; /* +0x48 */
    /* aggregate */ int m_stDirection; /* +0x54 */
    /* aggregate */ int m_stIntermediateDirection; /* +0x60 */
    float m_fSize; /* +0x6c */
    float m_fIntermediateSize; /* +0x70 */
    float m_fLinkType; /* +0x74 */
    float m_fMainSize; /* +0x78 */
};

struct _stTimerCount {
    unsigned long m_ulLowPart; /* +0x0 */
    unsigned long m_ulHighPart; /* +0x8 */
};

struct AGO3_CanRipple {
    /* C++ base AGO3_Part at +0x0. */
    float m_fMainSize; /* +0x30 */
    float m_fTime; /* +0x34 */
    float m_fTime2; /* +0x38 */
    /* array */ int m_a_stSprite[4]; /* +0x3c */
    unsigned int m_ulDirection; /* +0x7c */
    unsigned int m_ulFirstSprite; /* +0x80 */
    /* aggregate */ int m_stInitialPosition; /* +0x84 */
    /* aggregate */ int m_stAdditionnalVector; /* +0x90 */
    int m_bRegeneration; /* +0x9c */
};

struct tdstCouple_ {
    unsigned short wChild; /* +0x0 */
    unsigned short wFather; /* +0x2 */
};

struct AGO3_Smoke {
    /* C++ base AGO3_Part at +0x0. */
    /* array */ int m_Sprites[8]; /* +0x30 */
};

struct AGO3_Part {
    float m_fCreationTime; /* +0x0 */
    C_Vector m_Position; /* +0x10 */
    int m_pMat1; /* +0x20 */
    unsigned char m_Finished; /* +0x24 */
};

struct C_Vector {
    float Vector[4]; /* +0x0 */
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

struct SCT_tdstListOfSoundEvent_ {
    int hPointerOfSectorSO; /* +0x0 */
    _SND_tduRefEvt uSoundEvent; /* +0x4 */
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

struct stRECT {
    int left; /* +0x0 */
    int top; /* +0x4 */
    int right; /* +0x8 */
    int bottom; /* +0xc */
};

struct AGO3_BeamWithUVs {
    /* C++ base AGO3_Part at +0x0. */
    float m_fSize; /* +0x30 */
    float m_fRepetition; /* +0x34 */
    C_Vector m_Direction; /* +0x40 */
};

struct GEO_tdstEdge_ {
    short xPoints[2]; /* +0x0 */
    /* array */ int st_VectorPoints[2]; /* +0x4 */
};

struct SECT_tdstListOfDNMLights_ {
    int hDNMLights; /* +0x0 */
    int hNextBrotherDyn; /* +0x4 */
    int hPrevBrotherDyn; /* +0x8 */
    int hFatherDyn; /* +0xc */
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

struct AGO3_FistSmoke {
    /* C++ base AGO3_Part at +0x0. */
    float m_fMainSize; /* +0x30 */
    unsigned int m_ulFist; /* +0x34 */
    unsigned int m_a_ulNbAGOs[2]; /* +0x38 */
    unsigned int m_a_ulFirstFree[2]; /* +0x40 */
    unsigned int m_a_ulFirstSet[2]; /* +0x48 */
    /* array */ int m_stSprite[2][50]; /* +0x50 */
};

struct tdstElement3d_ {
    unsigned short wElement : 15; /* bit 0, byte +0x0 */
    unsigned short bf1ActiveStatus : 1; /* bit 15, byte +0x0 */
    unsigned char ucChannelNumber; /* +0x2 */
    unsigned char eTypeOfElement; /* +0x3 */
    unsigned char ucTransparency; /* +0x4 */
    unsigned char ucAnimLevel; /* +0x5 */
};

struct _tdstBinarizedDataForMenu {
    int hText; /* +0x0 */
};

struct tdstSubAnim_ {
    int p_stSubAnim; /* +0x0 */
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

struct AGO3_ScrollMatUV {
    /* C++ base AGO3_Part at +0x0. */
    float m_fCurrentTime; /* +0x30 */
    float m_fDuration; /* +0x34 */
    float m_fInverseOfDuration; /* +0x38 */
    /* array */ int m_a_stScroll[2]; /* +0x3c */
};

struct stPOINT {
    int x; /* +0x0 */
    int y; /* +0x4 */
};

union _SND_tduRefEvt {
    unsigned int Id; /* +0x0 */
    int pstPtr; /* +0x0 */
};

struct AGO3_Target {
    /* C++ base AGO3_Part at +0x0. */
    float m_fSize; /* +0x30 */
    float m_fOrientation; /* +0x34 */
};

struct AGO3_Snowboard_SnowEffect {
    /* C++ base AGO3_Part at +0x0. */
    float m_fWidth; /* +0x30 */
    float m_fLength; /* +0x34 */
    float m_fMaxVerticalAngle; /* +0x38 */
    int m_pSnowParticleMat; /* +0x3c */
    /* aggregate */ int m_stDirection; /* +0x40 */
    /* aggregate */ int m_stDistanceVect; /* +0x4c */
    unsigned int m_dwEffectID; /* +0x58 */
    float m_fDistanceBelowSurf; /* +0x5c */
    float m_fVerticalAngle; /* +0x60 */
    /* array */ int m_a_stSnowParticle[64]; /* +0x64 */
    unsigned int m_dwNumSnowParts; /* +0x964 */
    unsigned int m_dwFirstFreePart; /* +0x968 */
    unsigned int m_dwFirstUsedPart; /* +0x96c */
    int m_bOnAir; /* +0x970 */
    float m_fParameter; /* +0x974 */
    float m_fSide; /* +0x978 */
    /* aggregate */ int m_stLastPosition; /* +0x97c */
    int m_bFirstInit; /* +0x988 */
    float m_fDistance; /* +0x98c */
    float m_fVPosition; /* +0x990 */
    float m_fUPosition; /* +0x994 */
};

struct CINE_Manager_ {
    /* aggregate */ int hCineList; /* +0x0 */
    /* aggregate */ int gp_stFixedCameraMatrix; /* +0x10 */
    int gp_stSPOHandleCamera; /* +0x70 */
};

struct tdstBrain_ {
    int p_stMind; /* +0x0 */
    int hLastCollidedGoThroughMaterial; /* +0x4 */
    unsigned char bWarnMechanicsFlag; /* +0x8 */
    unsigned char bActiveDuringTransition; /* +0x9 */
};

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

struct stMorphData {
    unsigned short uwChannelNumber; /* +0x0 */
    unsigned short uwFrameNumber; /* +0x2 */
    unsigned char ucNbTarget; /* +0x4 */
    unsigned char ucAlign[3]; /* +0x5 */
    short a_xIndexTargetMT[10]; /* +0x8 */
    unsigned char a_ucMorphingAmountMT[10]; /* +0x1c */
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

struct WP_tdstGraph_ {
    /* aggregate */ int m_hListOfNode; /* +0x0 */
};

int p_fCosTable;
unsigned int AGO3_g_Parts[2048];
unsigned int g_hLastAllocatedAGO3;
int g_bReInitAGO;
unsigned int g_dwAGOHandle;
unsigned int AGO_gProcessTrameCounter;
unsigned int g_ulNumberOfAgos3;
unsigned int AGO_g_WasDisplayedInMirror_DoNOT_Burry;
int AGO_g_WeirdAura;
float UpMul;
int AGO3_g_Impose_SUB_BlendingMode;
static int AGO3_C_WaveEnvelopedFistShape[51];
unsigned int m_hHandle;
unsigned int m_hHandle;
int m_bInProgress[2];
C_Vector m_a_stInitialSpriteDirection[2];
C_Vector m_a_stInitialSpritePosition[2];
int m_pAGO3_TFS_Object;
unsigned int m_hHandle;
/* aggregate */ int m_stLastPosition;
static int AGO3_C_HUShape[25];
float AGO3_C_CR_RippleDepth;
float AGO3_C_CR_SpaceBetweenTwoSprites;
float AGO3_C_CR_MaxSizePercentage;
float AGO3_C_CR_IntermediatePercentage;
float AGO3_C_CR_TimeToReachNextLevel;
float AGO3_C_CR_IntermediateTransparency;
float AGO3_C_CR_SpaceBetweenUpAndDown;
unsigned int m_hHandle;
unsigned int m_a_hHandle[10];
float m_a_fCloudExpansionTrajectory1[10];
float m_a_fCloudExpansionTrajectory2[10];
float m_a_fAnimatedCloud[12][4];
float m_a_fParticleID[4][4];
float m_a_fUV[12][2];
float m_a_fSize[2];
int m_a_dwScore[12];
int m_a_dwDigit[2][5];
int m_bPaused;
float m_a_fDigitUV[10][2];
float m_fDigitDistance;
float m_a_fScoreContainer[3][4];
float m_a_fDigitXY[2][5][2];
float m_a_fDigitSize[2];
float m_a_fDigitSizeOnContainer[2][2];
unsigned int m_a_dwNumDigits[2];
float m_fHeightDifference;
float m_fPixelToScreen;
float m_a_fDigitScreenXY[2][5][2];
float m_a_fScoreOnScreen[2][2];
float m_a_fComboPositionOnScreen[3][2];
float m_a_fDigitSizeOnScreen[2][2];
int m_bVisible[2];
float m_fComboTime;
unsigned int m_dwComboStatus;
float m_fContainerWidthPercentage;
float m_fComboSpeed;
float m_fInvComboSpeed;
float m_a_fDigitNumTurns[2][5];
float m_a_fDigitValue[2][5];
float m_fSpinningTime[2];
float m_fSpinningBaseTime[2];
float m_a_fScoreToAdd[2];
float m_a_fScoreToAddPerSec[2];
float m_a_fVibrationRange[4];
float m_a_fVibrationFrequency[4];
float m_a_fVibrationDelay[2];
float m_fVibrationTime;
float m_a_fVibrationDisplacement[2];
float m_fImpulseRange;
unsigned int m_dwComboID;
float m_fComboBlinkTime;
float m_fComboBlinkTimeInterval;
float m_a_fGlowing[4];
float m_a_fGlowingPos[4];
float m_fGlowingTime;
float m_fNumGlowsPerSecond;
float m_fGlowingSize;
unsigned int m_a_hHandle[2];
unsigned int m_hHandle;
char m_szThreeDots[4];
unsigned int m_ulTextColor;
unsigned int m_hHandle;
unsigned int m_hHandle;
float Muler;
anon_9 __vt__23AGO3_LinkChainComputing;
anon_24 __vt__9AGO3_Part;
float AGO_gExtraParameter1[3];
char AGO_bPrevAGOWasExtraParam;
anon_4 __vt__15AGO3_Transition;
float AGO_gExtraFloatParameter;
float g_ffFrameTime;
anon_5 __vt__19AGO3_OrientedTarget;
anon_13 __vt__17AGO3_CustomRipple;
anon_28 __vt__24AGO3_SpriteDurationFade2;
anon_16 __vt__25AGO3_Snowboard_SnowEffect;
anon_1 __vt__24AGO3_DigitalScoreDisplay;
anon_14 __vt__17AGO3_ScoreDisplay;
anon_0 __vt__19AGO3_LightExplosion;
anon_7 __vt__20AGO3_SwirlingBubbles;
anon_15 __vt__14AGO3_CanRipple;
/* aggregate */ int __dt;
/* aggregate */ int __ct;
anon_17 __vt__10AGO3_Smoke;
anon_22 __vt__10AGO3_Chain;
anon_3 __vt__16AGO3_ScrollMatUV;
anon_21 __vt__15AGO3_SpriteZoom;
anon_29 __vt__23AGO3_SpriteDurationFade;
/* aggregate */ int __dt;
/* aggregate */ int __ct;
anon_19 __vt__14AGO3_FistSmoke;
/* aggregate */ int __dt;
/* aggregate */ int __ct;
anon_12 __vt__21AGO3_TurningFistSmoke;
anon_10 __vt__23AGO3_WaveEnvelopedFist2;
anon_18 __vt__15AGO3_ShootSmoke;
anon_27 __vt__22AGO3_WaveEnvelopedFist;
anon_2 __vt__36AGO3_GrowingUVAnimatedFireBallMoving;
anon_26 __vt__16AGO3_BeamWithUVs;
anon_8 __vt__11AGO3_Target;
anon_6 __vt__20AGO3_GrowingFireBall;
anon_20 __vt__30AGO3_GrowingUVAnimatedFireBall;
anon_23 __vt__17AGO3_SimpleSparks;
/* aggregate */ int GLI_g_stYVect;
/* aggregate */ int GLI_g_stXVect;
float g_fTimeDifference;
int AGO_gExtraMaterial;
int g_p_stVpt;
_tdstBinarizedDataForMenu g_aBinDataForMenu;
unsigned int AGO_G_CurrentVU1Frame;
float AGO_gExtraParameter2[3];
/* aggregate */ int g_stEngineStructure;
anon_25 __vt__22AGO3_SphericalRadiance;
anon_11 __vt__19AGO3_HurricaneUpper;
unsigned int GLI_g_UseAlphaTest;
unsigned int SCT_g_DrawingMirrored;
unsigned int AGO_g_PreviousCurrentFrame;

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ago\AGO3.cpp lines 54–66 */
/* addr: 0x001ea500  size: 180 bytes */
/* Debug signature rejected: type-record data leaked into it. */
void Toby_DestroyAll(void)
{
    /* line map: */
    /*   line 54 @ +0x000 */
    /*   line 58 @ +0x000 */
    /*   line 60 @ +0x000 */
    /*   line 64 @ +0x000 */
    /*   line 66 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ago\AGO3.cpp lines 1057–1140 */
/* addr: 0x001f8880  size: 832 bytes */
void AGO3_WaveEnveloped::Process(/* function pointer */ int pPosition, /* function pointer */ int pPreviousSpritePosition, /* function pointer */ int pSpriteData)
{
    unsigned int i;
    float fMultiplier;
    float fInterval;
    unsigned int ulFirstEntry;
    unsigned int ulNbAGOs;
    unsigned int ulEntry;
    unsigned int ulFist;
    /* line map: */
    /*   line 1057 @ +0x000 */
    /*   line 1113 @ +0x000 */
    /*   line 1113 @ +0x000 */
    /*   line 1113 @ +0x000 */
    /*   line 1121 @ +0x000 */
    /*   line 1121 @ +0x000 */
    /*   line 1076 @ +0x000 */
    /*   line 1081 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ago\AGO3.cpp lines 1007–1047 */
/* addr: 0x001f8bc0  size: 480 bytes */
void AGO3_WaveEnveloped::Init(float fColor, /* function pointer */ int pSpriteData)
{
    float fOneMinusColor;
    unsigned int ulFist;
    /* line map: */
    /*   line 1007 @ +0x000 */
    /*   line 1007 @ +0x000 */
    /*   line 1011 @ +0x000 */
    /*   line 1014 @ +0x000 */
    /*   line 1014 @ +0x000 */
    /*   line 1014 @ +0x000 */
    /*   line 1014 @ +0x000 */
    /*   line 1018 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ago\AGO3.cpp lines 996–999 */
/* addr: 0x001f8da0  size: 40 bytes */
void AGO3_WaveEnveloped::DesInit(void)
{
    /* line map: */
    /*   line 999 @ +0x000 */
    /*   line 996 @ +0x000 */
    /*   line 998 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ago\AGO3.cpp lines 891–898 */
/* addr: 0x001f8dd0  size: 100 bytes */
void AGO3_BeamWithUVs::Display(/* function pointer */ int hVp)
{
    /* line map: */
    /*   line 891 @ +0x000 */
    /*   line 891 @ +0x000 */
    /*   line 891 @ +0x000 */
    /*   line 898 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ago\AGO3.cpp lines 885–885 */
/* addr: 0x001f8e40  size: 12 bytes */
void AGO3_BeamWithUVs::Process(void)
{
    /* line map: */
    /*   line 885 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ago\AGO3.cpp lines 831–851 */
/* addr: 0x001f8e50  size: 228 bytes */
void AGO3_Smoke::Display(/* function pointer */ int p)
{
    float v2;
    float v1;
    float u2;
    float u1;
    unsigned int i;
    /* line map: */
    /*   line 831 @ +0x000 */
    /*   line 835 @ +0x000 */
    /*   line 839 @ +0x000 */
    /*   line 843 @ +0x000 */
    /*   line 843 @ +0x000 */
    /*   line 843 @ +0x000 */
    /*   line 843 @ +0x000 */
    /*   line 848 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ago\AGO3.cpp lines 788–820 */
/* addr: 0x001f8f40  size: 288 bytes */
void AGO3_Smoke::Process(/* function pointer */ int p)
{
    C_Vector Direction;
    float Time;
    unsigned int i;
    unsigned int NbFinished;
    /* line map: */
    /*   line 793 @ +0x000 */
    /*   line 795 @ +0x000 */
    /*   line 788 @ +0x000 */
    /*   line 797 @ +0x000 */
    /*   line 803 @ +0x000 */
    /*   line 805 @ +0x000 */
    /*   line 810 @ +0x000 */
    /*   line 808 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ago\AGO3.cpp lines 754–784 */
/* addr: 0x001f9060  size: 820 bytes */
void AGO3_Smoke::Init(/* function pointer */ int pPosition, /* function pointer */ int pMat1, /* function pointer */ int p)
{
    C_Vector Position;
    unsigned int i;
    /* line map: */
    /*   line 756 @ +0x000 */
    /*   line 760 @ +0x000 */
    /*   line 762 @ +0x000 */
    /*   line 754 @ +0x000 */
    /*   line 756 @ +0x000 */
    /*   line 764 @ +0x000 */
    /*   line 767 @ +0x000 */
    /*   line 769 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ago\AGO3.cpp lines 689–710 */
/* addr: 0x001f93a0  size: 144 bytes */
void AGO3_Target::Display(/* function pointer */ int hVp)
{
    /* line map: */
    /*   line 689 @ +0x000 */
    /*   line 689 @ +0x000 */
    /*   line 689 @ +0x000 */
    /*   line 695 @ +0x000 */
    /*   line 710 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ago\AGO3.cpp lines 668–668 */
/* addr: 0x001f9430  size: 28 bytes */
void AGO3_Target::Process(void)
{
    /* line map: */
    /*   line 668 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ago\AGO3.cpp lines 618–621 */
/* addr: 0x001f9450  size: 116 bytes */
void AGO3_Growing::Display(/* function pointer */ int hVp)
{
    /* line map: */
    /*   line 618 @ +0x000 */
    /*   line 618 @ +0x000 */
    /*   line 618 @ +0x000 */
    /*   line 621 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ago\AGO3.cpp lines 611–614 */
/* addr: 0x001f94d0  size: 128 bytes */
void AGO3_GrowingUVAnimated::Display(/* function pointer */ int hVp)
{
    /* line map: */
    /*   line 611 @ +0x000 */
    /*   line 611 @ +0x000 */
    /*   line 611 @ +0x000 */
    /*   line 614 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ago\AGO3.cpp lines 604–606 */
/* addr: 0x001f9550  size: 128 bytes */
void AGO3_GrowingUVAnimated::Display(/* function pointer */ int hVp)
{
    /* line map: */
    /*   line 604 @ +0x000 */
    /*   line 604 @ +0x000 */
    /*   line 604 @ +0x000 */
    /*   line 606 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ago\AGO3.cpp lines 583–600 */
/* addr: 0x001f95d0  size: 284 bytes */
void AGO3_GrowingUVAnimated::Process(void)
{
    C_Vector Temp;
    int CurrentFrame;
    float TotalTime;
    /* line map: */
    /*   line 583 @ +0x000 */
    /*   line 583 @ +0x000 */
    /*   line 586 @ +0x000 */
    /*   line 591 @ +0x000 */
    /*   line 591 @ +0x000 */
    /*   line 592 @ +0x000 */
    /*   line 591 @ +0x000 */
    /*   line 591 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ago\AGO3.cpp lines 561–573 */
/* addr: 0x001f96f0  size: 144 bytes */
void AGO3_GrowingUVAnimated::Process(void)
{
    int CurrentFrame;
    float TotalTime;
    /* line map: */
    /*   line 561 @ +0x000 */
    /*   line 561 @ +0x000 */
    /*   line 564 @ +0x000 */
    /*   line 568 @ +0x000 */
    /*   line 568 @ +0x000 */
    /*   line 568 @ +0x000 */
    /*   line 569 @ +0x000 */
    /*   line 569 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ago\AGO3.cpp lines 473–482 */
/* addr: 0x001f9780  size: 168 bytes */
void AGO3_SimpleSparks::Display(/* function pointer */ int hVp, C_Vector* pVect)
{
    unsigned int i;
    /* line map: */
    /*   line 473 @ +0x000 */
    /*   line 477 @ +0x000 */
    /*   line 480 @ +0x000 */
    /*   line 482 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ago\AGO3.cpp lines 443–464 */
/* addr: 0x001f9830  size: 328 bytes */
void AGO3_SimpleSparks::Process(C_Vector* pVect)
{
    unsigned int i;
    C_Vector VTemp;
    /* line map: */
    /*   line 443 @ +0x000 */
    /*   line 446 @ +0x000 */
    /*   line 449 @ +0x000 */
    /*   line 451 @ +0x000 */
    /*   line 451 @ +0x000 */
    /*   line 454 @ +0x000 */
    /*   line 454 @ +0x000 */
    /*   line 457 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ago\AGO3.cpp lines 430–433 */
/* addr: 0x001f9980  size: 56 bytes */
void AGO3_SimpleSparks::DesInit(void)
{
    /* line map: */
    /*   line 430 @ +0x000 */
    /*   line 433 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ago\AGO3.cpp lines 400–425 */
/* addr: 0x001f99c0  size: 548 bytes */
void AGO3_SimpleSparks::Init(/* function pointer */ int pPosition, /* function pointer */ int pMat1, float fParameter, C_Vector* pWork, C_Vector* pVect)
{
    unsigned int i;
    /* line map: */
    /*   line 402 @ +0x000 */
    /*   line 402 @ +0x000 */
    /*   line 400 @ +0x000 */
    /*   line 402 @ +0x000 */
    /*   line 400 @ +0x000 */
    /*   line 403 @ +0x000 */
    /*   line 407 @ +0x000 */
    /*   line 410 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ago\AGO3.cpp lines 362–362 */
/* addr: 0x001f9bf0  size: 12 bytes */
void AGO3_Part::Process(void)
{
    /* line map: */
    /*   line 362 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* addr: 0x001f9c00  size: 36 bytes */
void AGO3_Part::Display(/* function pointer */ int hVp)
{
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ago\AGO3.cpp lines 270–288 */
/* addr: 0x001f9c40  size: 168 bytes */
void AGO3_vBurryDiedParts(void)
{
    unsigned int i;
    /* line map: */
    /*   line 270 @ +0x000 */
    /*   line 277 @ +0x000 */
    /*   line 280 @ +0x000 */
    /*   line 283 @ +0x000 */
    /*   line 285 @ +0x000 */
    /*   line 288 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ago\AGO3.cpp lines 242–263 */
/* addr: 0x001f9cf0  size: 180 bytes */
void AGO3_vDisplayAll(/* function pointer */ int hVp)
{
    float xAlphaTemp;
    unsigned int i;
    /* line map: */
    /*   line 242 @ +0x000 */
    /*   line 246 @ +0x000 */
    /*   line 249 @ +0x000 */
    /*   line 253 @ +0x000 */
    /*   line 259 @ +0x000 */
    /*   line 263 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ago\AGO3.cpp lines 211–232 */
/* addr: 0x001f9db0  size: 112 bytes */
void AGO3_vProcessAll(void)
{
    unsigned int* p;
    unsigned int i;
    /* line map: */
    /*   line 214 @ +0x000 */
    /*   line 211 @ +0x000 */
    /*   line 223 @ +0x000 */
    /*   line 228 @ +0x000 */
    /*   line 232 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ago\AGO3.cpp lines 192–197 */
/* addr: 0x001f9e20  size: 172 bytes */
void AGO3_vInit(void)
{
    /* line map: */
    /*   line 192 @ +0x000 */
    /*   line 197 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* addr: 0x001f9ed0  size: 16 bytes */
void AGO3_Transition::DesInit(void)
{
    /* TODO: decompile from asm/... */
}

/* addr: 0x001f9ee0  size: 8 bytes */
void AGO3_Transition::Display(void)
{
    /* TODO: decompile from asm/... */
}

/* addr: 0x001f9ef0  size: 12 bytes */
void AGO3_OrientedTarget::DesInit(void)
{
    /* TODO: decompile from asm/... */
}

/* addr: 0x001f9f00  size: 16 bytes */
void AGO3_Snowboard_SnowEffect::DesInit(void)
{
    /* TODO: decompile from asm/... */
}

/* addr: 0x001f9f10  size: 8 bytes */
void AGO3_DigitalScoreDisplay::Display(void)
{
    /* TODO: decompile from asm/... */
}

/* addr: 0x001f9f20  size: 12 bytes */
void AGO3_LightExplosion::DesInit(void)
{
    /* TODO: decompile from asm/... */
}

/* addr: 0x001f9f30  size: 16 bytes */
void AGO3_SwirlingBubbles::DesInit(void)
{
    /* TODO: decompile from asm/... */
}

/* addr: 0x001f9f40  size: 8 bytes */
int AGO3_HurricaneUpper::Kill_Enabled(void)
{
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ago\AGO3.cpp lines 2759–2759 */
/* addr: 0x001f9f50  size: 28 bytes */
void AGO3_Chain::Process(void)
{
    /* line map: */
    /*   line 2759 @ +0x000 */
    /* TODO: decompile from asm/... */
}
