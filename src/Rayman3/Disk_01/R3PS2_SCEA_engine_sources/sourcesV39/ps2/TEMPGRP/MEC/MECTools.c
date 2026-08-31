/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\MEC\MECTools.c */
/* Language: C */
/* Compiler: MW MIPS C Compiler */

#include <stddef.h>

/* Recovered aggregate layouts from MWCC debug type records. */
typedef struct tdstAChannel_ tdstAChannel_;
typedef struct DNM_stReport DNM_stReport;
typedef struct DNM_stDynamics DNM_stDynamics;
typedef struct SECT_tdstListOfDNMLights_ SECT_tdstListOfDNMLights_;
typedef struct CINE_tdstCine_ CINE_tdstCine_;
typedef struct tdstGraphChainedListNode_ tdstGraphChainedListNode_;
typedef struct WP_tdstGraph_ WP_tdstGraph_;
typedef struct SECT_tdstSector_ SECT_tdstSector_;
typedef struct MTH_stRotation MTH_stRotation;
typedef struct CINE_Manager_ CINE_Manager_;
typedef struct tdst3dData_ tdst3dData_;
typedef struct stMorphData stMorphData;
typedef struct tdstElement3d_ tdstElement3d_;
typedef struct SCT_tdstListOfSoundEvent_ SCT_tdstListOfSoundEvent_;
typedef struct MTH_stMove MTH_stMove;
typedef struct stMACDPID stMACDPID;
typedef struct tdstEvent_ tdstEvent_;
typedef struct tdstAnim3d_ tdstAnim3d_;
typedef struct tdstFrame3d_ tdstFrame3d_;
typedef struct tdstBrain_ tdstBrain_;
typedef struct anon_0 anon_0;
typedef struct GEO_tdstEdge_ GEO_tdstEdge_;
typedef struct anon_1 anon_1;
typedef struct tdstSubAnim_ tdstSubAnim_;
typedef struct _stTimerCount _stTimerCount;
typedef struct tdstEngineTimerStructure_ tdstEngineTimerStructure_;
typedef union _SND_tduRefEvt _SND_tduRefEvt;
typedef struct DNM_stObstacle DNM_stObstacle;
typedef struct tdstCouple_ tdstCouple_;
typedef struct MEC_fn_vRoundVector MEC_fn_vRoundVector;

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

struct DNM_stDynamics {
    /* aggregate */ int m_tdstDynamicsBaseBlock; /* +0x0 */
    /* aggregate */ int m_tdstDynamicsAdvancedBlock; /* +0x170 */
    /* aggregate */ int m_tdstDynamicsComplexBlock; /* +0x200 */
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

struct tdstGraphChainedListNode_ {
    int GraphChainedListNodeInfo; /* +0x0 */
    int p_NextGraphChainedListNode; /* +0x4 */
};

struct WP_tdstGraph_ {
    /* aggregate */ int m_hListOfNode; /* +0x0 */
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

struct MTH_stRotation {
    float m_xAngle; /* +0x0 */
    /* aggregate */ int m_stAxis; /* +0x4 */
};

struct CINE_Manager_ {
    /* aggregate */ int hCineList; /* +0x0 */
    /* aggregate */ int gp_stFixedCameraMatrix; /* +0x10 */
    int gp_stSPOHandleCamera; /* +0x70 */
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

struct stMorphData {
    unsigned short uwChannelNumber; /* +0x0 */
    unsigned short uwFrameNumber; /* +0x2 */
    unsigned char ucNbTarget; /* +0x4 */
    unsigned char ucAlign[3]; /* +0x5 */
    short a_xIndexTargetMT[10]; /* +0x8 */
    unsigned char a_ucMorphingAmountMT[10]; /* +0x1c */
};

struct tdstElement3d_ {
    unsigned short wElement : 15; /* bit 0, byte +0x0 */
    unsigned short bf1ActiveStatus : 1; /* bit 15, byte +0x0 */
    unsigned char ucChannelNumber; /* +0x2 */
    unsigned char eTypeOfElement; /* +0x3 */
    unsigned char ucTransparency; /* +0x4 */
    unsigned char ucAnimLevel; /* +0x5 */
};

struct SCT_tdstListOfSoundEvent_ {
    int hPointerOfSectorSO; /* +0x0 */
    _SND_tduRefEvt uSoundEvent; /* +0x4 */
};

struct MTH_stMove {
    /* aggregate */ int m_stLinear; /* +0x0 */
    MTH_stRotation m_stAngular; /* +0xc */
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

struct tdstEvent_ {
    int p_stfEventInTBL; /* +0x0 */
    unsigned short usEventNumberInTBL; /* +0x4 */
    unsigned short uwFrameNumber; /* +0x6 */
    unsigned short uwChannelNumber; /* +0x8 */
    unsigned short uwIsLocalized; /* +0xa */
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

struct tdstBrain_ {
    int p_stMind; /* +0x0 */
    int hLastCollidedGoThroughMaterial; /* +0x4 */
    unsigned char bWarnMechanicsFlag; /* +0x8 */
    unsigned char bActiveDuringTransition; /* +0x9 */
};

struct anon_0 {
    float m_xAngle; /* +0x0 */
    /* aggregate */ int m_stAxis; /* +0x4 */
};

struct GEO_tdstEdge_ {
    short xPoints[2]; /* +0x0 */
    /* array */ int st_VectorPoints[2]; /* +0x4 */
};

struct anon_1 {
    float m_xAngle; /* +0x0 */
    /* aggregate */ int m_stAxis; /* +0x4 */
};

struct tdstSubAnim_ {
    int p_stSubAnim; /* +0x0 */
};

struct _stTimerCount {
    unsigned long m_ulLowPart; /* +0x0 */
    unsigned long m_ulHighPart; /* +0x8 */
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

union _SND_tduRefEvt {
    unsigned int Id; /* +0x0 */
    int pstPtr; /* +0x0 */
};

struct DNM_stObstacle {
    float m_xRate; /* +0x0 */
    /* aggregate */ int m_stNorm; /* +0x4 */
    /* aggregate */ int m_stContact; /* +0x10 */
    int hMyMaterial; /* +0x1c */
    int hCollidedMaterial; /* +0x20 */
    int mp_stSupObj; /* +0x24 */
};

struct tdstCouple_ {
    unsigned short wChild; /* +0x0 */
    unsigned short wFather; /* +0x2 */
};

struct MEC_fn_vRoundVector {
    float xEpsilon; /* +0x0 */
};

/* aggregate */ int g_stEngineStructure;
int g_NbTrameSinceLastCanFall;
/* aggregate */ int g_stPersoMoveForCollision;
int COL_g_lMaxNumberOfCollisions;

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\MEC\MECTools.c lines 76–125 */
/* addr: 0x00310ea0  size: 500 bytes */
unsigned char MEC_fn_vBasePlatformManagement(DNM_stDynamics* p_stDynamic, /* function pointer */ int hSupObj, /* function pointer */ int hObstacleSuperObject, /* function pointer */ int hGeomSuperObject, /* function pointer */ int p_stObstacle)
{
    /* line map: */
    /*   line 76 @ +0x000 */
    /*   line 85 @ +0x000 */
    /*   line 85 @ +0x000 */
    /*   line 89 @ +0x000 */
    /*   line 93 @ +0x000 */
    /*   line 99 @ +0x000 */
    /*   line 103 @ +0x000 */
    /*   line 106 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\MEC\MECTools.c lines 1494–1502 */
/* addr: 0x00311160  size: 144 bytes */
void MEC_fn_vRepeatMove(DNM_stDynamics* p_stDynamic, /* function pointer */ int hCurrentMatrix, /* function pointer */ int hPreviousMatrix)
{
    /* aggregate */ int stVector;
    /* line map: */
    /*   line 1494 @ +0x000 */
    /*   line 1500 @ +0x000 */
    /*   line 1495 @ +0x000 */
    /*   line 1500 @ +0x000 */
    /*   line 1500 @ +0x000 */
    /*   line 1500 @ +0x000 */
    /*   line 1502 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\MEC\MECTools.c lines 1467–1486 */
/* addr: 0x003111f0  size: 200 bytes */
void MEC_fn_vNormalMode(DNM_stDynamics* p_stDynamic, int lMode, /* function pointer */ int p_stSpeed, /* function pointer */ int hPreviousMatrix)
{
    /* line map: */
    /*   line 1467 @ +0x000 */
    /*   line 1481 @ +0x000 */
    /*   line 1479 @ +0x000 */
    /*   line 1481 @ +0x000 */
    /*   line 1481 @ +0x000 */
    /*   line 1481 @ +0x000 */
    /*   line 1481 @ +0x000 */
    /*   line 1481 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\MEC\MECTools.c lines 1442–1463 */
/* addr: 0x003112c0  size: 204 bytes */
void MEC_fn_vSlowMode(DNM_stDynamics* p_stDynamic, int lMode, /* function pointer */ int p_stSpeed, /* function pointer */ int hCurrentMatrix)
{
    float xInvMode;
    /* line map: */
    /*   line 1442 @ +0x000 */
    /*   line 1458 @ +0x000 */
    /*   line 1456 @ +0x000 */
    /*   line 1458 @ +0x000 */
    /*   line 1458 @ +0x000 */
    /*   line 1458 @ +0x000 */
    /*   line 1458 @ +0x000 */
    /*   line 1463 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\MEC\MECTools.c lines 1379–1398 */
/* addr: 0x00311390  size: 408 bytes */
unsigned char MEC_fn_bNoMove(DNM_stDynamics* p_stDynamic)
{
    /* line map: */
    /*   line 1379 @ +0x000 */
    /*   line 1381 @ +0x000 */
    /*   line 1383 @ +0x000 */
    /*   line 1387 @ +0x000 */
    /*   line 1389 @ +0x000 */
    /*   line 1393 @ +0x000 */
    /*   line 1398 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\MEC\MECTools.c lines 1365–1365 */
/* addr: 0x00311530  size: 44 bytes */
unsigned char MEC_fn_bMainActor(/* function pointer */ int hSupObj)
{
    /* line map: */
    /*   line 1365 @ +0x000 */
    /*   line 1365 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\MEC\MECTools.c lines 1335–1346 */
/* addr: 0x00311560  size: 224 bytes */
void MEC_fn_vComputeInertiaTranslation(DNM_stDynamics* p_stDynamic, float xDT)
{
    unsigned char bSlide;
    /* aggregate */ int stVector;
    /* line map: */
    /*   line 1335 @ +0x000 */
    /*   line 1341 @ +0x000 */
    /*   line 1341 @ +0x000 */
    /*   line 1346 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\MEC\MECTools.c lines 1330–1332 */
/* addr: 0x00311640  size: 104 bytes */
void MEC_fn_vComputeStream(/* function pointer */ int p_stStream, DNM_stDynamics* p_stDynamic, float xDT, unsigned char bSlide)
{
    float xMultFactor;
    /* line map: */
    /*   line 1330 @ +0x000 */
    /*   line 1330 @ +0x000 */
    /*   line 1332 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* addr: 0x003116b0  size: 8 bytes */
void MEC_fn_vSetInitialFrameTranslation(DNM_stDynamics* p_stDynamic, /* function pointer */ int p_stVector)
{
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\MEC\MECTools.c lines 1285–1289 */
/* addr: 0x003116c0  size: 56 bytes */
void MEC_fn_hGetFatherActor(/* function pointer */ int hSupObj, /* function pointer */ int hActor)
{
    /* line map: */
    /*   line 1285 @ +0x000 */
    /*   line 1287 @ +0x000 */
    /*   line 1289 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\MEC\MECTools.c lines 1266–1268 */
/* addr: 0x00311700  size: 200 bytes */
void MEC_fn_vDeleteNullTranslationObstacle(int lObstacle, /* function pointer */ int a_stObstacle, /* function pointer */ int p_stTmpObstacle)
{
    int lCounter;
    /* line map: */
    /*   line 1266 @ +0x000 */
    /*   line 1266 @ +0x000 */
    /*   line 1266 @ +0x000 */
    /*   line 1268 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\MEC\MECTools.c lines 1188–1233 */
/* addr: 0x003117d0  size: 488 bytes */
void MEC_fn_vDeleteHangingObstacle(int lObstacle, /* function pointer */ int p_stObstacle, DNM_stDynamics* p_stDynamic, /* function pointer */ int p_stGroundObstacle, /* function pointer */ int p_stTmpObstacle)
{
    float xHandZPosition;
    float xZ;
    int lCounter;
    /* line map: */
    /*   line 1193 @ +0x000 */
    /*   line 1188 @ +0x000 */
    /*   line 1193 @ +0x000 */
    /*   line 1196 @ +0x000 */
    /*   line 1200 @ +0x000 */
    /*   line 1204 @ +0x000 */
    /*   line 1211 @ +0x000 */
    /*   line 1231 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\MEC\MECTools.c lines 1171–1179 */
/* addr: 0x003119c0  size: 160 bytes */
void MEC_fn_vDeleteNoCollidedGroundFace(int lObstacle, /* function pointer */ int p_stObstacle, DNM_stDynamics* p_stDynamic, /* function pointer */ int p_stCurrentObstacle)
{
    int lCounter;
    /* line map: */
    /*   line 1176 @ +0x000 */
    /*   line 1171 @ +0x000 */
    /*   line 1175 @ +0x000 */
    /*   line 1179 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\MEC\MECTools.c lines 1109–1156 */
/* addr: 0x00311a60  size: 1164 bytes */
void MEC_fn_vDeleteBaseBackFace(int lObstacle, /* function pointer */ int p_stObstacle, DNM_stDynamics* p_stDynamic, /* function pointer */ int p_stCurrentObstacle)
{
    float xNorm;
    float xNorm;
    /* aggregate */ int stTmp;
    int lCounter;
    /* aggregate */ int stVector;
    /* line map: */
    /*   line 1109 @ +0x000 */
    /*   line 1109 @ +0x000 */
    /*   line 1113 @ +0x000 */
    /*   line 1118 @ +0x000 */
    /*   line 1121 @ +0x000 */
    /*   line 1124 @ +0x000 */
    /*   line 1127 @ +0x000 */
    /*   line 1130 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\MEC\MECTools.c lines 1065–1098 */
/* addr: 0x00311ef0  size: 440 bytes */
void MEC_fn_vDeleteClimbBackFace(int lObstacle, /* function pointer */ int p_stObstacle, DNM_stDynamics* p_stDynamic, /* function pointer */ int p_stVector, /* function pointer */ int p_stCurrentObstacle)
{
    /* aggregate */ int stY;
    int lCounter;
    /* line map: */
    /*   line 1065 @ +0x000 */
    /*   line 1065 @ +0x000 */
    /*   line 1069 @ +0x000 */
    /*   line 1077 @ +0x000 */
    /*   line 1081 @ +0x000 */
    /*   line 1086 @ +0x000 */
    /*   line 1090 @ +0x000 */
    /*   line 1093 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\MEC\MECTools.c lines 1032–1057 */
/* addr: 0x003120b0  size: 408 bytes */
void MEC_fn_vDeleteGiBackFace(int lObstacle, /* function pointer */ int p_stObstacle, DNM_stDynamics* p_stDynamic, /* function pointer */ int p_stCurrentObstacle)
{
    int lCounter;
    /* line map: */
    /*   line 1032 @ +0x000 */
    /*   line 1039 @ +0x000 */
    /*   line 1054 @ +0x000 */
    /*   line 1036 @ +0x000 */
    /*   line 1041 @ +0x000 */
    /*   line 1045 @ +0x000 */
    /*   line 1049 @ +0x000 */
    /*   line 1052 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\MEC\MECTools.c lines 992–1022 */
/* addr: 0x00312250  size: 440 bytes */
void MEC_fn_vDeleteOnGroundBackFace(int lObstacle, /* function pointer */ int p_stObstacle, DNM_stDynamics* p_stDynamic, /* function pointer */ int p_stVector, /* function pointer */ int p_stGroundObstacle, /* function pointer */ int p_stCurrentObstacle)
{
    int lCounter;
    /* line map: */
    /*   line 1016 @ +0x000 */
    /*   line 1016 @ +0x000 */
    /*   line 1016 @ +0x000 */
    /*   line 992 @ +0x000 */
    /*   line 996 @ +0x000 */
    /*   line 999 @ +0x000 */
    /*   line 999 @ +0x000 */
    /*   line 999 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\MEC\MECTools.c lines 897–921 */
/* addr: 0x00312410  size: 184 bytes */
float MEC_fn_xConvertScale(float xValue, unsigned char bAdjust)
{
    float xTmpValue;
    /* line map: */
    /*   line 897 @ +0x000 */
    /*   line 905 @ +0x000 */
    /*   line 908 @ +0x000 */
    /*   line 911 @ +0x000 */
    /*   line 917 @ +0x000 */
    /*   line 921 @ +0x000 */
    /*   line 921 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\MEC\MECTools.c lines 889–891 */
/* addr: 0x003124d0  size: 104 bytes */
void MEC_fn_vRoundVector(/* function pointer */ int p_stVector, float xEpsilon)
{
    /* line map: */
    /*   line 889 @ +0x000 */
    /*   line 891 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\MEC\MECTools.c lines 849–868 */
/* addr: 0x00312540  size: 508 bytes */
void MEC_fn_vAdjustSpeed(DNM_stDynamics* p_stDynamic, float xDT, /* function pointer */ int hCurrentMatrix)
{
    float xNorm;
    /* aggregate */ int stTranslation;
    /* line map: */
    /*   line 849 @ +0x000 */
    /*   line 861 @ +0x000 */
    /*   line 855 @ +0x000 */
    /*   line 858 @ +0x000 */
    /*   line 861 @ +0x000 */
    /*   line 864 @ +0x000 */
    /*   line 865 @ +0x000 */
    /*   line 868 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\MEC\MECTools.c lines 844–846 */
/* addr: 0x00312740  size: 52 bytes */
void MEC_fn_vAdjustScaleVector(DNM_stDynamics* p_stDynamic, /* function pointer */ int p_stVector)
{
    /* line map: */
    /*   line 844 @ +0x000 */
    /*   line 846 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* addr: 0x00312780  size: 8 bytes */
void MEC_fn_vTranslateMatrixOff(DNM_stDynamics* p_stDynamic, /* function pointer */ int p_stMatrixTranslation)
{
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\MEC\MECTools.c lines 764–780 */
/* addr: 0x00312790  size: 300 bytes */
void MEC_fn_vTranslateMatrixOn(DNM_stDynamics* p_stDynamic, /* function pointer */ int p_stMatrixTranslation, /* function pointer */ int hPreviousMatrix, /* function pointer */ int hCurrentMatrix)
{
    /* line map: */
    /*   line 765 @ +0x000 */
    /*   line 764 @ +0x000 */
    /*   line 768 @ +0x000 */
    /*   line 771 @ +0x000 */
    /*   line 774 @ +0x000 */
    /*   line 778 @ +0x000 */
    /*   line 775 @ +0x000 */
    /*   line 775 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\MEC\MECTools.c lines 752–755 */
/* addr: 0x003128c0  size: 64 bytes */
void MEC_fn_vCorrectMatrix(DNM_stDynamics* p_stDynamic, /* function pointer */ int hMatrix)
{
    /* line map: */
    /*   line 752 @ +0x000 */
    /*   line 755 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\MEC\MECTools.c lines 731–744 */
/* addr: 0x00312900  size: 176 bytes */
void MEC_fn_vInitMatrix(DNM_stDynamics* p_stDynamic, /* function pointer */ int hPreviousMatrix, /* function pointer */ int hCurrentMatrix)
{
    /* line map: */
    /*   line 731 @ +0x000 */
    /*   line 739 @ +0x000 */
    /*   line 744 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\MEC\MECTools.c lines 703–718 */
/* addr: 0x003129b0  size: 128 bytes */
void MEC_fn_vComputeSpeed(DNM_stDynamics* p_stDynamic, float xDT)
{
    /* aggregate */ int stSpeed;
    /* line map: */
    /*   line 703 @ +0x000 */
    /*   line 716 @ +0x000 */
    /*   line 718 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\MEC\MECTools.c lines 648–692 */
/* addr: 0x00312a30  size: 512 bytes */
unsigned char MEC_fn_bDetectStep(DNM_stDynamics* p_stDynamic, int lObstacle, /* function pointer */ int p_stObstacle, /* function pointer */ int p_stGroundObstacle, /* function pointer */ int p_stMoveDirection, /* function pointer */ int p_stTmpObstacle)
{
    unsigned char bFindGround;
    unsigned char bStepCandidate;
    unsigned char bStep;
    int lCounter;
    /* line map: */
    /*   line 648 @ +0x000 */
    /*   line 655 @ +0x000 */
    /*   line 658 @ +0x000 */
    /*   line 660 @ +0x000 */
    /*   line 664 @ +0x000 */
    /*   line 667 @ +0x000 */
    /*   line 669 @ +0x000 */
    /*   line 669 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\MEC\MECTools.c lines 568–639 */
/* addr: 0x00312c30  size: 500 bytes */
void MEC_fn_pSelectGround(DNM_stDynamics* p_stDynamic, int lObstacle, /* function pointer */ int p_stObstacle, /* function pointer */ int p_stTangentMove, unsigned char* bFirstGround, /* function pointer */ int p_stGroundObstacle, /* function pointer */ int p_stTmpObstacle)
{
    int lCounter;
    float xCos;
    float xGroundDeltaRate;
    /* line map: */
    /*   line 582 @ +0x000 */
    /*   line 568 @ +0x000 */
    /*   line 582 @ +0x000 */
    /*   line 601 @ +0x000 */
    /*   line 613 @ +0x000 */
    /*   line 605 @ +0x000 */
    /*   line 601 @ +0x000 */
    /*   line 586 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\MEC\MECTools.c lines 404–560 */
/* addr: 0x00312e30  size: 1696 bytes */
unsigned char MEC_fn_EdgeAnalysisForCliff(DNM_stDynamics* p_stDynamic, int lObstacle, /* function pointer */ int p_stObstacle, /* function pointer */ int param3, /* function pointer */ int p_stTmpObstacle)
{
    int j;
    int i;
    int Ind;
    /* aggregate */ int V2;
    /* aggregate */ int V1;
    int IndWallGround;
    int lCounter;
    unsigned char bThereIsAWallGround;
    /* line map: */
    /*   line 404 @ +0x000 */
    /*   line 409 @ +0x000 */
    /*   line 409 @ +0x000 */
    /*   line 411 @ +0x000 */
    /*   line 419 @ +0x000 */
    /*   line 428 @ +0x000 */
    /*   line 434 @ +0x000 */
    /*   line 440 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\MEC\MECTools.c lines 372–381 */
/* addr: 0x003134d0  size: 512 bytes */
unsigned char fn_bIsOneEdgeInCommon(int i1, int i2)
{
    /* aggregate */ int V22;
    /* aggregate */ int V21;
    /* aggregate */ int V12;
    /* aggregate */ int V11;
    int Ind;
    /* line map: */
    /*   line 372 @ +0x000 */
    /*   line 372 @ +0x000 */
    /*   line 374 @ +0x000 */
    /*   line 381 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\MEC\MECTools.c lines 357–364 */
/* addr: 0x003136d0  size: 472 bytes */
unsigned char fn_bIsTheSameCollidedEdge(int i, /* function pointer */ int pV1, /* function pointer */ int pV2, int* Ind)
{
    /* aggregate */ int V2;
    /* aggregate */ int V1;
    /* line map: */
    /*   line 357 @ +0x000 */
    /*   line 361 @ +0x000 */
    /*   line 364 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\MEC\MECTools.c lines 302–341 */
/* addr: 0x003138b0  size: 472 bytes */
void MEC_fn_vDeleteUnderGroundWall(int lObstacle, /* function pointer */ int p_stObstacle, DNM_stDynamics* p_stDynamic, /* function pointer */ int p_stGroundObstacle, /* function pointer */ int p_stNormal, /* function pointer */ int p_stGroundEdge, /* function pointer */ int p_stTmpObstacle)
{
    /* aggregate */ int stContact;
    int lCounter;
    /* line map: */
    /*   line 302 @ +0x000 */
    /*   line 307 @ +0x000 */
    /*   line 315 @ +0x000 */
    /*   line 321 @ +0x000 */
    /*   line 336 @ +0x000 */
    /*   line 326 @ +0x000 */
    /*   line 331 @ +0x000 */
    /*   line 334 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\MEC\MECTools.c lines 248–287 */
/* addr: 0x00313a90  size: 496 bytes */
void MEC_fn_vDeleteWallEdge(int lObstacle, /* function pointer */ int p_stObstacle, DNM_stDynamics* p_stDynamic, /* function pointer */ int p_stTmpObstacle1, /* function pointer */ int p_stTmpObstacle)
{
    unsigned char bRemoveEdge;
    int lCounter1;
    int lCounter;
    /* line map: */
    /*   line 248 @ +0x000 */
    /*   line 273 @ +0x000 */
    /*   line 273 @ +0x000 */
    /*   line 273 @ +0x000 */
    /*   line 255 @ +0x000 */
    /*   line 259 @ +0x000 */
    /*   line 263 @ +0x000 */
    /*   line 265 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\MEC\MECTools.c lines 213–238 */
/* addr: 0x00313c80  size: 440 bytes */
void MEC_fn_vComputeCollisionTranslation(int lObstacle, /* function pointer */ int p_stObstacle, /* function pointer */ int p_stMove, /* function pointer */ int p_stTmpObstacle)
{
    float xNorm;
    /* aggregate */ int stVector;
    float xRate;
    int lCounter;
    /* line map: */
    /*   line 213 @ +0x000 */
    /*   line 225 @ +0x000 */
    /*   line 231 @ +0x000 */
    /*   line 231 @ +0x000 */
    /*   line 222 @ +0x000 */
    /*   line 225 @ +0x000 */
    /*   line 230 @ +0x000 */
    /*   line 232 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\MEC\MECTools.c lines 206–206 */
/* addr: 0x00313e40  size: 64 bytes */
float MEC_fn_xGetRebound(DNM_stDynamics* p_stDynamic, /* function pointer */ int p_stObstacle)
{
    float xRebound;
    /* line map: */
    /*   line 206 @ +0x000 */
    /*   line 206 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\MEC\MECTools.c lines 191–191 */
/* addr: 0x00313e80  size: 64 bytes */
float MEC_fn_xGetSlide(DNM_stDynamics* p_stDynamic, /* function pointer */ int p_stObstacle)
{
    float xSlide;
    /* line map: */
    /*   line 191 @ +0x000 */
    /*   line 191 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\MEC\MECTools.c lines 177–177 */
/* addr: 0x00313ec0  size: 44 bytes */
int MEC_fn_bDynamicsNeedCollide(DNM_stDynamics* p_stDynamic)
{
    /* line map: */
    /*   line 177 @ +0x000 */
    /*   line 177 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\MEC\MECTools.c lines 155–159 */
/* addr: 0x00313ef0  size: 112 bytes */
unsigned char MEC_fn_bCanCrashActor(/* function pointer */ int p_stCollideObstacle, /* function pointer */ int hSupObj)
{
    /* line map: */
    /*   line 155 @ +0x000 */
    /*   line 157 @ +0x000 */
    /*   line 159 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\MEC\MECTools.c lines 85–85 */
/* addr: 0x00313f60  size: 40 bytes */
unsigned char MEC_fn_bCeilObstacle(DNM_stDynamics* p_stDynamic, /* function pointer */ int p_stObstacle)
{
    /* line map: */
    /*   line 85 @ +0x000 */
    /*   line 85 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\MEC\MECTools.c lines 62–62 */
/* addr: 0x00313f90  size: 36 bytes */
unsigned char MEC_fn_bGroundNormal(DNM_stDynamics* p_stDynamic, /* function pointer */ int p_stNormal)
{
    /* line map: */
    /*   line 62 @ +0x000 */
    /* TODO: decompile from asm/... */
}
