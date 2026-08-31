/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\MEC\MECBhv.c */
/* Language: C */
/* Compiler: MW MIPS C Compiler */

#include <stddef.h>

/* Recovered aggregate layouts from MWCC debug type records. */
typedef struct CINE_tdstCine_ CINE_tdstCine_;
typedef struct SCT_tdstListOfSoundEvent_ SCT_tdstListOfSoundEvent_;
typedef struct tdstElement3d_ tdstElement3d_;
typedef struct DNM_stDynamics DNM_stDynamics;
typedef struct tdstSubAnim_ tdstSubAnim_;
typedef struct tdstEvent_ tdstEvent_;
typedef struct DNM_stReport DNM_stReport;
typedef struct stMorphData stMorphData;
typedef struct tdstAnim3d_ tdstAnim3d_;
typedef struct tdstFrame3d_ tdstFrame3d_;
typedef struct SECT_tdstSector_ SECT_tdstSector_;
typedef struct tdst3dData_ tdst3dData_;
typedef struct MTH_stRotation MTH_stRotation;
typedef struct tdstBrain_ tdstBrain_;
typedef struct stMACDPID stMACDPID;
typedef union _SND_tduRefEvt _SND_tduRefEvt;
typedef struct anon_0 anon_0;
typedef struct SECT_tdstListOfDNMLights_ SECT_tdstListOfDNMLights_;
typedef struct anon_1 anon_1;
typedef struct tdstCouple_ tdstCouple_;
typedef struct tdstAChannel_ tdstAChannel_;
typedef struct MTH_stMove MTH_stMove;
typedef struct DNM_stObstacle DNM_stObstacle;
typedef struct GEO_tdstEdge_ GEO_tdstEdge_;
typedef union MEC_fn_vGroundGuess MEC_fn_vGroundGuess;

struct CINE_tdstCine_ {
    /* aggregate */ int hActorList; /* +0x0 */
    int hNextBrotherDyn; /* +0xc */
    int hPrevBrotherDyn; /* +0x10 */
    int hFatherDyn; /* +0x14 */
    unsigned char bPlaying; /* +0x18 */
    int lGenerateEvent; /* +0x1c */
    char szName[255]; /* +0x20 */
};

struct SCT_tdstListOfSoundEvent_ {
    int hPointerOfSectorSO; /* +0x0 */
    _SND_tduRefEvt uSoundEvent; /* +0x4 */
};

struct tdstElement3d_ {
    unsigned short wElement : 15; /* bit 0, byte +0x0 */
    unsigned short bf1ActiveStatus : 1; /* bit 15, byte +0x0 */
    unsigned char ucChannelNumber; /* +0x2 */
    unsigned char eTypeOfElement; /* +0x3 */
    unsigned char ucTransparency; /* +0x4 */
    unsigned char ucAnimLevel; /* +0x5 */
};

struct DNM_stDynamics {
    /* aggregate */ int m_tdstDynamicsBaseBlock; /* +0x0 */
    /* aggregate */ int m_tdstDynamicsAdvancedBlock; /* +0x170 */
    /* aggregate */ int m_tdstDynamicsComplexBlock; /* +0x200 */
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

struct DNM_stReport {
    unsigned int m_ulPrevSurfaceState; /* +0x0 */
    unsigned int m_ulCurrSurfaceState; /* +0x4 */
    DNM_stObstacle m_stObstacle; /* +0x8 */
    DNM_stObstacle m_stGround; /* +0x30 */
    DNM_stObstacle m_stWall; /* +0x58 */
    DNM_stObstacle m_stCharacter; /* +0x80 */
    DNM_stObstacle m_stWater; /* +0xa8 */
    DNM_stObstacle m_stCeil; /* +0xd0 */
    MTH_stMove m_stAbsolutePrevSpeed; /* +0xf8 */
    MTH_stMove m_stAbsoluteCurrSpeed; /* +0x114 */
    MTH_stMove m_stAbsolutePrevPosition; /* +0x130 */
    MTH_stMove m_stAbsoluteCurrPosition; /* +0x14c */
    char m_cBitField; /* +0x168 */
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

struct MTH_stRotation {
    float m_xAngle; /* +0x0 */
    /* aggregate */ int m_stAxis; /* +0x4 */
};

struct tdstBrain_ {
    int p_stMind; /* +0x0 */
    int hLastCollidedGoThroughMaterial; /* +0x4 */
    unsigned char bWarnMechanicsFlag; /* +0x8 */
    unsigned char bActiveDuringTransition; /* +0x9 */
};

struct stMACDPID {
    float m_xData0; /* +0x0 */
    /* aggregate */ int m_stData1; /* +0x4 */
    /* aggregate */ int m_stData2; /* +0x10 */
    /* aggregate */ int m_stData3; /* +0x1c */
    float m_xData3; /* +0x28 */
    float m_xData4; /* +0x2c */
    float m_xData5; /* +0x30 */
    anon_0 m_stData6; /* +0x34 */
    anon_1 m_stData7; /* +0x44 */
    char m_cData8; /* +0x54 */
    unsigned short m_uwData9; /* +0x56 */
    /* aggregate */ int m_stData10; /* +0x58 */
    float m_xData11; /* +0x64 */
    /* aggregate */ int m_stData12; /* +0x68 */
    float m_xData13; /* +0x74 */
    unsigned char m_bData14; /* +0x78 */
};

union _SND_tduRefEvt {
    unsigned int Id; /* +0x0 */
    int pstPtr; /* +0x0 */
};

struct anon_0 {
    float m_xAngle; /* +0x0 */
    /* aggregate */ int m_stAxis; /* +0x4 */
};

struct SECT_tdstListOfDNMLights_ {
    int hDNMLights; /* +0x0 */
    int hNextBrotherDyn; /* +0x4 */
    int hPrevBrotherDyn; /* +0x8 */
    int hFatherDyn; /* +0xc */
};

struct anon_1 {
    float m_xAngle; /* +0x0 */
    /* aggregate */ int m_stAxis; /* +0x4 */
};

struct tdstCouple_ {
    unsigned short wChild; /* +0x0 */
    unsigned short wFather; /* +0x2 */
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

struct MTH_stMove {
    /* aggregate */ int m_stLinear; /* +0x0 */
    MTH_stRotation m_stAngular; /* +0xc */
};

struct DNM_stObstacle {
    float m_xRate; /* +0x0 */
    /* aggregate */ int m_stNorm; /* +0x4 */
    /* aggregate */ int m_stContact; /* +0x10 */
    int hMyMaterial; /* +0x1c */
    int hCollidedMaterial; /* +0x20 */
    int mp_stSupObj; /* +0x24 */
};

struct GEO_tdstEdge_ {
    short xPoints[2]; /* +0x0 */
    /* array */ int st_VectorPoints[2]; /* +0x4 */
};

union MEC_fn_vGroundGuess {
    float xDT; /* +0x0 */
    float stVector; /* +0x0 */
};

int g_lCallCounter;
unsigned char g_bHighSpeed;
int NoTest;
int MEC_g_lCountObstacleForWallManagementForCorners;
float MEC_g_xRateForWallManagementForCorners;
/* aggregate */ int MEC_g_stTmpMov;
/* aggregate */ int g_stFirstMove;
float g_xZWater;
int lZWaterValidity;
int g_a_stObstacle;
/* aggregate */ int g_stReport;
int COL_g_lMaxNumberOfCollisions;
int (*MEC_fn_iComp2ObstForCorners)(void*, void*);

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\MEC\MECBhv.c lines 75–91 */
/* addr: 0x003053d0  size: 312 bytes */
int MEC_fn_lComputeCall(DNM_stDynamics* p_stDynamic, /* function pointer */ int hSupObj, float xDT, float xCoef)
{
    int lCall;
    int lNbFrame;
    /* line map: */
    /*   line 75 @ +0x000 */
    /*   line 75 @ +0x000 */
    /*   line 79 @ +0x000 */
    /*   line 86 @ +0x000 */
    /*   line 91 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\MEC\MECBhv.c lines 2307–2601 */
/* addr: 0x00305510  size: 4012 bytes */
void MEC_fn_vSwimObstacleManagement(DNM_stDynamics* p_stDynamic, /* function pointer */ int hSupObj, float xDT, /* function pointer */ int p_stGroundObstacle, /* function pointer */ int p_stTmpObstacle, /* function pointer */ int p_stObstacle, /* function pointer */ int p_stNormal, /* function pointer */ int hAbsolutePreviousMatrix, /* function pointer */ int hPreviousMatrix, /* function pointer */ int hInitialMatrix, /* function pointer */ int hCurrentMatrix)
{
    float xNorm;
    float xNorm;
    int lGroundObstacle;
    int lObstacleCounter;
    int lCounter;
    unsigned char bWaterBlock;
    float xRebound;
    float xSlide;
    unsigned char bWaterSurface;
    unsigned char bEdge;
    unsigned char bOnlyEdge;
    float xOneMinusRate;
    float xZWater;
    float xRate;
    /* aggregate */ int stNormalObstacle;
    /* aggregate */ int stNormalVector;
    /* aggregate */ int stAdjustVector;
    /* aggregate */ int stExtremPosition;
    /* aggregate */ int stVector;
    /* aggregate */ int stPosition;
    /* aggregate */ int stInitialMatrix;
    int lObstacle;
    /* line map: */
    /*   line 2352 @ +0x000 */
    /*   line 2345 @ +0x000 */
    /*   line 2307 @ +0x000 */
    /*   line 2328 @ +0x000 */
    /*   line 2329 @ +0x000 */
    /*   line 2341 @ +0x000 */
    /*   line 2357 @ +0x000 */
    /*   line 2357 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\MEC\MECBhv.c lines 2281–2297 */
/* addr: 0x003064c0  size: 416 bytes */
void MEC_fn_vGroundGuess(DNM_stDynamics* p_stDynamic, float xDT, /* function pointer */ int p_stNormal, /* function pointer */ int hCurrentMatrix)
{
    float xNorm;
    /* aggregate */ int stVector;
    /* line map: */
    /*   line 2281 @ +0x000 */
    /*   line 2283 @ +0x000 */
    /*   line 2287 @ +0x000 */
    /*   line 2290 @ +0x000 */
    /*   line 2290 @ +0x000 */
    /*   line 2292 @ +0x000 */
    /*   line 2292 @ +0x000 */
    /*   line 2295 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\MEC\MECBhv.c lines 1560–2269 */
/* addr: 0x00306660  size: 8644 bytes */
void MEC_fn_vGroundObstacleManagement(DNM_stDynamics* p_stDynamic, /* function pointer */ int hSupObj, float xDT, /* function pointer */ int hSupObjCol, DNM_stObstacle* p_stObstacle, /* function pointer */ int p_stMobileObstacle, /* function pointer */ int p_stTmpObstacle, /* function pointer */ int p_stWallObstacle, /* function pointer */ int p_stGroundObstacle, /* function pointer */ int p_stNormal, /* function pointer */ int hPreviousMatrix, /* function pointer */ int hCurrentMatrix, /* function pointer */ int p_stPOS_UpPosition)
{
    float xNorm;
    float xTmpReal;
    float xWallDistance;
    unsigned char bFirstGround;
    unsigned char bStep;
    /* aggregate */ int stGroundNormal;
    /* aggregate */ int stSafeTranslation;
    /* aggregate */ int stWallMove;
    /* aggregate */ int stAdjustVector1;
    /* aggregate */ int stAdjustVector;
    /* aggregate */ int stAbsoluteTangentMove;
    /* aggregate */ int stTangentMove;
    /* aggregate */ int stVertical;
    /* aggregate */ int stMove;
    /* aggregate */ int stDownVector;
    /* aggregate */ int stUpVector;
    /* aggregate */ int stVector;
    /* aggregate */ int stPreviousMatrix;
    /* array */ int a2_stPosition[2];
    float xSpeedZ;
    float xFactor;
    float xSlide;
    int lObstacleCounter;
    int lCounter;
    int lObstacle2;
    int lObstacle;
    /* line map: */
    /*   line 1595 @ +0x000 */
    /*   line 1595 @ +0x000 */
    /*   line 1612 @ +0x000 */
    /*   line 1560 @ +0x000 */
    /*   line 1618 @ +0x000 */
    /*   line 1623 @ +0x000 */
    /*   line 1622 @ +0x000 */
    /*   line 1595 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\MEC\MECBhv.c lines 1079–1455 */
/* addr: 0x00308830  size: 5960 bytes */
void MEC_fn_vClimbObstacleManagement(DNM_stDynamics* p_stDynamic, /* function pointer */ int hSupObj, float xDT, /* function pointer */ int hPreviousMatrix, /* function pointer */ int hCurrentMatrix, /* function pointer */ int p_stPOS_FrontPosition, /* function pointer */ int p_stPOS_BackPosition, /* function pointer */ int p_stGroundObstacle, /* function pointer */ int p_stSlideObstacle, /* function pointer */ int p_stClimbObstacle, /* function pointer */ int p_stTmpObstacle, /* function pointer */ int p_stNormal)
{
    float xNorm;
    /* array */ int a2_stPosition[2];
    /* aggregate */ int stTmpVector;
    /* aggregate */ int stNormTangentMove;
    /* aggregate */ int stSafeTranslation;
    /* aggregate */ int stSlideMove;
    /* aggregate */ int stTangentMove;
    /* aggregate */ int stMove;
    /* aggregate */ int stAdjustVector;
    /* aggregate */ int stVector;
    /* aggregate */ int stY;
    float xDotProdMin;
    float xSlope;
    float xNormalMove;
    unsigned char bStop;
    int lCounter2;
    int lCounter1;
    int lCounter;
    int lObstacle;
    /* line map: */
    /*   line 1115 @ +0x000 */
    /*   line 1115 @ +0x000 */
    /*   line 1079 @ +0x000 */
    /*   line 1112 @ +0x000 */
    /*   line 1111 @ +0x000 */
    /*   line 1115 @ +0x000 */
    /*   line 1115 @ +0x000 */
    /*   line 1125 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\MEC\MECBhv.c lines 818–1067 */
/* addr: 0x00309f80  size: 4200 bytes */
void MEC_fn_vGiObstacleManagement(DNM_stDynamics* p_stDynamic, /* function pointer */ int hSupObj, float xDT, /* function pointer */ int hPreviousMatrix, /* function pointer */ int hCurrentMatrix, /* function pointer */ int p_stPOS_UpPosition, /* function pointer */ int p_stPOS_DownPosition, DNM_stObstacle* p_stPreviousCeilObstacle, /* function pointer */ int p_stSlideObstacle, /* function pointer */ int p_stGiObstacle, /* function pointer */ int p_stTmpObstacle, /* function pointer */ int p_stGiContact, /* function pointer */ int p_stGiNormal)
{
    /* array */ int a2_stPosition[2];
    /* aggregate */ int stAdjustVector;
    /* aggregate */ int stVerticalVector;
    /* aggregate */ int stSlideMove;
    /* aggregate */ int stMove;
    /* aggregate */ int stTmpVector;
    /* aggregate */ int stVector;
    float xNormalMove;
    unsigned char bGiFace;
    int lFace;
    int lCounter1;
    int lCounter;
    int lObstacle;
    /* line map: */
    /*   line 819 @ +0x000 */
    /*   line 818 @ +0x000 */
    /*   line 832 @ +0x000 */
    /*   line 833 @ +0x000 */
    /*   line 840 @ +0x000 */
    /*   line 841 @ +0x000 */
    /*   line 834 @ +0x000 */
    /*   line 822 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\MEC\MECBhv.c lines 769–787 */
/* addr: 0x0030aff0  size: 344 bytes */
void MEC_fn_vBaseObstacleManagement(DNM_stDynamics* p_stDynamic, /* function pointer */ int hSupObj, float xDT, /* function pointer */ int hInitialMatrix, /* function pointer */ int hCurrentMatrix)
{
    /* aggregate */ int stInitialMatrix;
    int lObstacle;
    /* line map: */
    /*   line 769 @ +0x000 */
    /*   line 772 @ +0x000 */
    /*   line 774 @ +0x000 */
    /*   line 776 @ +0x000 */
    /*   line 776 @ +0x000 */
    /*   line 782 @ +0x000 */
    /*   line 784 @ +0x000 */
    /*   line 787 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\MEC\MECBhv.c lines 729–751 */
/* addr: 0x0030b150  size: 496 bytes */
void MEC_fn_vOrient(DNM_stDynamics* p_stDynamic, /* function pointer */ int p_stNormal, /* function pointer */ int hCurrentMatrix)
{
    float xNorm;
    /* aggregate */ int stZ;
    /* aggregate */ int stY;
    /* aggregate */ int stX;
    /* aggregate */ int stVector;
    /* line map: */
    /*   line 729 @ +0x000 */
    /*   line 735 @ +0x000 */
    /*   line 735 @ +0x000 */
    /*   line 735 @ +0x000 */
    /*   line 735 @ +0x000 */
    /*   line 738 @ +0x000 */
    /*   line 737 @ +0x000 */
    /*   line 739 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\MEC\MECBhv.c lines 486–526 */
/* addr: 0x0030b340  size: 1224 bytes */
void MEC_fn_vWallObstacleManagement(/* function pointer */ int pstResultMove, DNM_stDynamics* p_stDynamic, /* function pointer */ int pstMove, /* function pointer */ int pstGroundNormal, /* function pointer */ int pstWallNormal, unsigned char bAngleLimit, /* function pointer */ int hCurrentMatrix)
{
    float xNorm;
    float xNorm;
    float xFactor;
    /* aggregate */ int stVector;
    /* aggregate */ int stDirection;
    /* line map: */
    /*   line 486 @ +0x000 */
    /*   line 489 @ +0x000 */
    /*   line 492 @ +0x000 */
    /*   line 495 @ +0x000 */
    /*   line 498 @ +0x000 */
    /*   line 503 @ +0x000 */
    /*   line 507 @ +0x000 */
    /*   line 510 @ +0x000 */
    /* TODO: decompile from asm/... */
}
