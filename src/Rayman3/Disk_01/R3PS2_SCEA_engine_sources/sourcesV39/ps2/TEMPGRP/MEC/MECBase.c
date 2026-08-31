/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\MEC\MECBase.c */
/* Language: C */
/* Compiler: MW MIPS C Compiler */

#include <stddef.h>

/* Recovered aggregate layouts from MWCC debug type records. */
typedef struct tdstElement3d_ tdstElement3d_;
typedef struct CINE_tdstCine_ CINE_tdstCine_;
typedef struct tdstEvent_ tdstEvent_;
typedef struct stMorphData stMorphData;
typedef struct tdstSubAnim_ tdstSubAnim_;
typedef struct DNM_stDynamics DNM_stDynamics;
typedef struct tdstAnim3d_ tdstAnim3d_;
typedef struct tdstFrame3d_ tdstFrame3d_;
typedef struct CINE_Manager_ CINE_Manager_;
typedef struct GEO_tdstEdge_ GEO_tdstEdge_;
typedef union _SND_tduRefEvt _SND_tduRefEvt;
typedef struct DNM_stReport DNM_stReport;
typedef struct tdst3dData_ tdst3dData_;
typedef struct SCT_tdstListOfSoundEvent_ SCT_tdstListOfSoundEvent_;
typedef struct tdstBrain_ tdstBrain_;
typedef struct SECT_tdstSector_ SECT_tdstSector_;
typedef struct SECT_tdstListOfDNMLights_ SECT_tdstListOfDNMLights_;
typedef struct MTH_stMove MTH_stMove;
typedef struct _stTimerCount _stTimerCount;
typedef struct stMACDPID stMACDPID;
typedef struct MTH_stRotation MTH_stRotation;
typedef struct WP_tdstGraph_ WP_tdstGraph_;
typedef struct tdstAChannel_ tdstAChannel_;
typedef struct tdstCouple_ tdstCouple_;
typedef struct tdstEngineTimerStructure_ tdstEngineTimerStructure_;
typedef struct anon_0 anon_0;
typedef struct anon_1 anon_1;
typedef struct tdstGraphChainedListNode_ tdstGraphChainedListNode_;
typedef struct DNM_stObstacle DNM_stObstacle;

struct tdstElement3d_ {
    unsigned short wElement : 15; /* bit 0, byte +0x0 */
    unsigned short bf1ActiveStatus : 1; /* bit 15, byte +0x0 */
    unsigned char ucChannelNumber; /* +0x2 */
    unsigned char eTypeOfElement; /* +0x3 */
    unsigned char ucTransparency; /* +0x4 */
    unsigned char ucAnimLevel; /* +0x5 */
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

struct DNM_stDynamics {
    /* aggregate */ int m_tdstDynamicsBaseBlock; /* +0x0 */
    /* aggregate */ int m_tdstDynamicsAdvancedBlock; /* +0x170 */
    /* aggregate */ int m_tdstDynamicsComplexBlock; /* +0x200 */
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

struct CINE_Manager_ {
    /* aggregate */ int hCineList; /* +0x0 */
    /* aggregate */ int gp_stFixedCameraMatrix; /* +0x10 */
    int gp_stSPOHandleCamera; /* +0x70 */
};

struct GEO_tdstEdge_ {
    short xPoints[2]; /* +0x0 */
    /* array */ int st_VectorPoints[2]; /* +0x4 */
};

union _SND_tduRefEvt {
    unsigned int Id; /* +0x0 */
    int pstPtr; /* +0x0 */
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

struct SECT_tdstListOfDNMLights_ {
    int hDNMLights; /* +0x0 */
    int hNextBrotherDyn; /* +0x4 */
    int hPrevBrotherDyn; /* +0x8 */
    int hFatherDyn; /* +0xc */
};

struct MTH_stMove {
    /* aggregate */ int m_stLinear; /* +0x0 */
    MTH_stRotation m_stAngular; /* +0xc */
};

struct _stTimerCount {
    unsigned long m_ulLowPart; /* +0x0 */
    unsigned long m_ulHighPart; /* +0x8 */
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

struct MTH_stRotation {
    float m_xAngle; /* +0x0 */
    /* aggregate */ int m_stAxis; /* +0x4 */
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

struct anon_0 {
    float m_xAngle; /* +0x0 */
    /* aggregate */ int m_stAxis; /* +0x4 */
};

struct anon_1 {
    float m_xAngle; /* +0x0 */
    /* aggregate */ int m_stAxis; /* +0x4 */
};

struct tdstGraphChainedListNode_ {
    int GraphChainedListNodeInfo; /* +0x0 */
    int p_NextGraphChainedListNode; /* +0x4 */
};

struct DNM_stObstacle {
    float m_xRate; /* +0x0 */
    /* aggregate */ int m_stNorm; /* +0x4 */
    /* aggregate */ int m_stContact; /* +0x10 */
    int hMyMaterial; /* +0x1c */
    int hCollidedMaterial; /* +0x20 */
    int mp_stSupObj; /* +0x24 */
};

float MEC_g_xClimbSpeedLimit;
float MEC_g_xBaseCoeff;
float MEC_g_xWalkCoeff;
int g_iNewImpulseTribe;
int g_iNewMecaTribe;
/* aggregate */ int g_stReport;
int g_lCallCounter;
/* aggregate */ int g_stEngineStructure;
int lZWaterValidity;
unsigned char g_bHighSpeed;

/* addr: 0x00302c80  size: 8 bytes */
void DNM_fn_eIdentityCardGetType(void* _hCurrent)
{
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\MEC\MECBase.c lines 1074–1100 */
/* addr: 0x00302c90  size: 360 bytes */
void MEC_fn_vUpdateSpeed(/* function pointer */ int hSupObj, MTH_stMove* p_stMove, DNM_stDynamics* p_stDynamic, tdstDynam_* h_Dynam)
{
    float xAngle;
    /* aggregate */ int stAxis;
    /* aggregate */ int stPreviousY;
    /* aggregate */ int stCurrentY;
    /* line map: */
    /*   line 1074 @ +0x000 */
    /*   line 1076 @ +0x000 */
    /*   line 1085 @ +0x000 */
    /*   line 1090 @ +0x000 */
    /*   line 1087 @ +0x000 */
    /*   line 1090 @ +0x000 */
    /*   line 1090 @ +0x000 */
    /*   line 1090 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\MEC\MECBase.c lines 1054–1057 */
/* addr: 0x00302e00  size: 48 bytes */
void DNM_fn_vSetHangingLimit(DNM_stDynamics* p_stDynamic, float xValue)
{
    /* line map: */
    /*   line 1054 @ +0x000 */
    /*   line 1057 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\MEC\MECBase.c lines 1022–1043 */
/* addr: 0x00302e30  size: 680 bytes */
void MEC_vTurnAbsolute(DNM_stDynamics* p_stDynamic, /* function pointer */ int p_stVector, /* function pointer */ int hCurrentMatrix)
{
    /* aggregate */ int VectTmp;
    float xNorm;
    /* aggregate */ int stMatrix;
    /* line map: */
    /*   line 1022 @ +0x000 */
    /*   line 1022 @ +0x000 */
    /*   line 1025 @ +0x000 */
    /*   line 1029 @ +0x000 */
    /*   line 1031 @ +0x000 */
    /*   line 1031 @ +0x000 */
    /*   line 1034 @ +0x000 */
    /*   line 1043 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\MEC\MECBase.c lines 973–1011 */
/* addr: 0x003030e0  size: 476 bytes */
void MEC_vTurnAroundZAxis(DNM_stDynamics* p_stDynamic, float xAngle, /* function pointer */ int hCurrentMatrix)
{
    /* aggregate */ int stMatrix;
    float xSin;
    float xCos;
    /* aggregate */ int stK;
    /* aggregate */ int stJ;
    /* aggregate */ int stI;
    /* aggregate */ int stMove;
    /* aggregate */ int stVectorZ;
    /* line map: */
    /*   line 973 @ +0x000 */
    /*   line 973 @ +0x000 */
    /*   line 978 @ +0x000 */
    /*   line 988 @ +0x000 */
    /*   line 993 @ +0x000 */
    /*   line 991 @ +0x000 */
    /*   line 996 @ +0x000 */
    /*   line 996 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\MEC\MECBase.c lines 939–959 */
/* addr: 0x003032c0  size: 296 bytes */
void MEC_fn_vImposeActorMatrix(/* function pointer */ int hSupObj, DNM_stDynamics* p_stDynamic)
{
    /* line map: */
    /*   line 939 @ +0x000 */
    /*   line 944 @ +0x000 */
    /*   line 951 @ +0x000 */
    /*   line 947 @ +0x000 */
    /*   line 949 @ +0x000 */
    /*   line 956 @ +0x000 */
    /*   line 959 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\MEC\MECBase.c lines 888–928 */
/* addr: 0x003033f0  size: 492 bytes */
void MEC_vInitTranslation(DNM_stDynamics* p_stDynamic, /* function pointer */ int hSupObj, /* function pointer */ int p_stVector, /* function pointer */ int hPrevPreviousMatrix, /* function pointer */ int hAbsolutePreviousMatrix, /* function pointer */ int hPreviousMatrix, /* function pointer */ int hCurrentMatrix)
{
    /* line map: */
    /*   line 888 @ +0x000 */
    /*   line 888 @ +0x000 */
    /*   line 891 @ +0x000 */
    /*   line 900 @ +0x000 */
    /*   line 896 @ +0x000 */
    /*   line 901 @ +0x000 */
    /*   line 901 @ +0x000 */
    /*   line 901 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\MEC\MECBase.c lines 869–875 */
/* addr: 0x003035e0  size: 136 bytes */
void MEC_vImposeTranslation(DNM_stDynamics* p_stDynamic, /* function pointer */ int p_stVector)
{
    /* aggregate */ int stVector;
    /* line map: */
    /*   line 869 @ +0x000 */
    /*   line 873 @ +0x000 */
    /*   line 873 @ +0x000 */
    /*   line 875 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\MEC\MECBase.c lines 839–854 */
/* addr: 0x00303670  size: 140 bytes */
void MEC_vImposeRelativeRotation(DNM_stDynamics* p_stDynamic, /* function pointer */ int p_stRotationMatrix, /* function pointer */ int hCurrentMatrix)
{
    /* aggregate */ int stTmp;
    /* line map: */
    /*   line 839 @ +0x000 */
    /*   line 839 @ +0x000 */
    /*   line 851 @ +0x000 */
    /*   line 854 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\MEC\MECBase.c lines 822–826 */
/* addr: 0x00303700  size: 124 bytes */
void MEC_vImposeRotationVector(DNM_stDynamics* p_stDynamic, /* function pointer */ int p_stX, /* function pointer */ int p_stY, /* function pointer */ int p_stZ, /* function pointer */ int p_stImposeRotationMatrix)
{
    /* line map: */
    /*   line 822 @ +0x000 */
    /*   line 822 @ +0x000 */
    /*   line 826 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\MEC\MECBase.c lines 789–806 */
/* addr: 0x00303780  size: 208 bytes */
void MEC_vImposeRotationMatrix(DNM_stDynamics* p_stDynamic, /* function pointer */ int hRotationMatrix)
{
    /* aggregate */ int stMove;
    /* line map: */
    /*   line 789 @ +0x000 */
    /*   line 796 @ +0x000 */
    /*   line 796 @ +0x000 */
    /*   line 803 @ +0x000 */
    /*   line 803 @ +0x000 */
    /*   line 803 @ +0x000 */
    /*   line 806 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\MEC\MECBase.c lines 183–776 */
/* addr: 0x00303850  size: 7028 bytes */
void MEC_p_stDynamicsBaseMechanics(DNM_stDynamics* p_stDynamic, /* function pointer */ int hSupObj, float xDT, /* function pointer */ int p_stSpeedAnim, /* function pointer */ int p_stObstacle, DNM_stReport* p_stReport, /* function pointer */ int hInvRefMatrix, /* function pointer */ int hRefMatrix, /* function pointer */ int hInvPreviousReferenceMatrix, /* function pointer */ int hAbsolutePreviousMatrix, /* function pointer */ int hPrevPreviousMatrix, /* function pointer */ int hPreviousMatrix, /* function pointer */ int hCurrentMatrix)
{
    float xMul;
    float xDelta;
    /* aggregate */ int stMatrixTranslation;
    /* aggregate */ int stVector;
    MTH_stMove stMove;
    int lFrame;
    /* aggregate */ int stJ;
    /* aggregate */ int stI;
    unsigned char bImposeRotation;
    unsigned char bPlatformChange;
    unsigned char bPlatform;
    unsigned char bNeedToCollide;
    /* aggregate */ int stStablePreviousPosition;
    /* aggregate */ int stSpeed;
    /* aggregate */ int stRefMatrix;
    /* aggregate */ int stInvMatrix;
    /* aggregate */ int stPrevPreviousReferenceMatrix;
    /* aggregate */ int stInvPreviousReferenceMatrix;
    /* aggregate */ int stPreviousReferenceMatrix;
    /* line map: */
    /*   line 216 @ +0x000 */
    /*   line 183 @ +0x000 */
    /*   line 216 @ +0x000 */
    /*   line 216 @ +0x000 */
    /*   line 201 @ +0x000 */
    /*   line 217 @ +0x000 */
    /*   line 221 @ +0x000 */
    /*   line 224 @ +0x000 */
    /* TODO: decompile from asm/... */
}
