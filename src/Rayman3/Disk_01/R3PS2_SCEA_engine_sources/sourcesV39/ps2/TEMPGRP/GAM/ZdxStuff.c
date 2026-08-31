/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\ZdxStuff.c */
/* Language: C */
/* Compiler: MW MIPS C Compiler */

#include <stddef.h>

/* Recovered aggregate layouts from MWCC debug type records. */
typedef struct tdstZdxList_ tdstZdxList_;
typedef struct tdstZoneSetEncapsulation_ tdstZoneSetEncapsulation_;
typedef struct tdstZoneSetList_ tdstZoneSetList_;
typedef struct tdst3dData_ tdst3dData_;
typedef struct tdstSectInfo_ tdstSectInfo_;
typedef struct tdstSubAnim_ tdstSubAnim_;
typedef struct MTH_stMove MTH_stMove;
typedef struct GEO_tdstEdge_ GEO_tdstEdge_;
typedef struct tdstState_ tdstState_;
typedef union _SND_tduRefEvt _SND_tduRefEvt;
typedef struct tdstMSLight_ tdstMSLight_;
typedef struct DNM_stReport DNM_stReport;
typedef struct tdstElement3d_ tdstElement3d_;
typedef struct tdstEvent_ tdstEvent_;
typedef struct tdstProhibit_ tdstProhibit_;
typedef struct stMorphData stMorphData;
typedef struct tdstAnim3d_ tdstAnim3d_;
typedef struct tdstMicro_ tdstMicro_;
typedef struct SECT_tdstListOfDNMLights_ SECT_tdstListOfDNMLights_;
typedef struct tdstCollSet_ tdstCollSet_;
typedef struct tdstBrain_ tdstBrain_;
typedef struct AI_tdstMind_ AI_tdstMind_;
typedef struct tdstAChannel_ tdstAChannel_;
typedef struct tdstCsaList_ tdstCsaList_;
typedef struct tdstFrame3d_ tdstFrame3d_;
typedef struct tdstDynam_ tdstDynam_;
typedef struct tdstCineinfo_ tdstCineinfo_;
typedef struct tdstMSWay_ tdstMSWay_;
typedef struct WP_tdstWayPoint_ WP_tdstWayPoint_;
typedef struct tdstMSSound_ tdstMSSound_;
typedef struct stMACDPID stMACDPID;
typedef struct CINE_tdstCine_ CINE_tdstCine_;
typedef union GEO_tduVSObject_ GEO_tduVSObject_;
typedef struct SECT_tdstSector_ SECT_tdstSector_;
typedef struct WP_tdstGraph_ WP_tdstGraph_;
typedef struct anon_0 anon_0;
typedef struct anon_1 anon_1;
typedef struct tdstCouple_ tdstCouple_;
typedef struct MTH_stRotation MTH_stRotation;
typedef struct SCT_tdstListOfSoundEvent_ SCT_tdstListOfSoundEvent_;
typedef struct DNM_stDynamics DNM_stDynamics;
typedef struct DNM_stObstacle DNM_stObstacle;
typedef struct _RollOffParam _RollOffParam;

struct tdstZdxList_ {
    /* aggregate */ int hGeoZdxList; /* +0x0 */
    unsigned short uwNumberOfZdx; /* +0x8 */
};

struct tdstZoneSetEncapsulation_ {
    int p_stZoneSetList; /* +0x0 */
    unsigned short uwIndex; /* +0x4 */
};

struct tdstZoneSetList_ {
    /* aggregate */ int hZdxIndexList; /* +0x0 */
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

struct tdstSectInfo_ {
    int hCurrentSector; /* +0x0 */
    int hNodeInSector; /* +0x4 */
    /* aggregate */ int stPreviousPosition; /* +0x8 */
    int hSectorSynchroCharacter; /* +0x14 */
};

struct tdstSubAnim_ {
    int p_stSubAnim; /* +0x0 */
};

struct MTH_stMove {
    /* aggregate */ int m_stLinear; /* +0x0 */
    MTH_stRotation m_stAngular; /* +0xc */
};

struct GEO_tdstEdge_ {
    short xPoints[2]; /* +0x0 */
    /* array */ int st_VectorPoints[2]; /* +0x4 */
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

union _SND_tduRefEvt {
    unsigned int Id; /* +0x0 */
    int pstPtr; /* +0x0 */
};

struct tdstMSLight_ {
    unsigned char bLocalLight; /* +0x0 */
    unsigned char bOnlyLocalLight; /* +0x1 */
    unsigned char bGiroPhare; /* +0x2 */
    unsigned char bPulsing; /* +0x3 */
    /* aggregate */ int stOffsetVect; /* +0x4 */
    /* aggregate */ int stAngle; /* +0x10 */
    float xStepGiro; /* +0x1c */
    float xStepPulse; /* +0x20 */
    float xMaxRangePulse; /* +0x24 */
    float xGiroAngle; /* +0x28 */
    int p_stLight; /* +0x2c */
    int p_stVisuLight; /* +0x30 */
    int hLightInSector; /* +0x34 */
    unsigned char ucNbRLIUse; /* +0x38 */
    unsigned char ucFirstRLI; /* +0x39 */
    unsigned char ucSecondRLI; /* +0x3a */
    float ucBlendPercent; /* +0x3c */
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

struct tdstElement3d_ {
    unsigned short wElement : 15; /* bit 0, byte +0x0 */
    unsigned short bf1ActiveStatus : 1; /* bit 15, byte +0x0 */
    unsigned char ucChannelNumber; /* +0x2 */
    unsigned char eTypeOfElement; /* +0x3 */
    unsigned char ucTransparency; /* +0x4 */
    unsigned char ucAnimLevel; /* +0x5 */
};

struct tdstEvent_ {
    int p_stfEventInTBL; /* +0x0 */
    unsigned short usEventNumberInTBL; /* +0x4 */
    unsigned short uwFrameNumber; /* +0x6 */
    unsigned short uwChannelNumber; /* +0x8 */
    unsigned short uwIsLocalized; /* +0xa */
};

struct tdstProhibit_ {
    int h_ProhibitedState; /* +0x0 */
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

struct tdstMicro_ {
    int hMicroMatrix; /* +0x0 */
    unsigned char bIsActive; /* +0x4 */
};

struct SECT_tdstListOfDNMLights_ {
    int hDNMLights; /* +0x0 */
    int hNextBrotherDyn; /* +0x4 */
    int hPrevBrotherDyn; /* +0x8 */
    int hFatherDyn; /* +0xc */
};

struct tdstCollSet_ {
    int hZddList; /* +0x0 */
    int hZdeList; /* +0x4 */
    int hZdmList; /* +0x8 */
    int hZdrList; /* +0xc */
    int hZddActivationList; /* +0x10 */
    int hZdeActivationList; /* +0x14 */
    int hZdmActivationList; /* +0x18 */
    int hZdrActivationList; /* +0x1c */
    int hZddCurrentActivation; /* +0x20 */
    int hZdeCurrentActivation; /* +0x24 */
    int hZdrCurrentActivation; /* +0x28 */
    int hZdmCurrentActivation; /* +0x2c */
    unsigned int ulFBZddPriviligedZones; /* +0x30 */
    unsigned int ulFBZdePriviligedZones; /* +0x34 */
    unsigned int ulFBZdmPriviligedZones; /* +0x38 */
    unsigned int ulFBZdrPriviligedZones; /* +0x3c */
    unsigned char ucCollComputeFrequency; /* +0x40 */
    unsigned char ucCharacterPriority; /* +0x41 */
    unsigned char ucCollisionFlag; /* +0x42 */
    /* aggregate */ int stColliderInfo; /* +0x44 */
};

struct tdstBrain_ {
    int p_stMind; /* +0x0 */
    int hLastCollidedGoThroughMaterial; /* +0x4 */
    unsigned char bWarnMechanicsFlag; /* +0x8 */
    unsigned char bActiveDuringTransition; /* +0x9 */
};

struct AI_tdstMind_ {
    int p_stAIModel; /* +0x0 */
    int p_stIntelligence; /* +0x4 */
    int p_stReflex; /* +0x8 */
    int p_stDsgMem; /* +0xc */
    unsigned char bDoingIntel; /* +0x10 */
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

struct tdstCsaList_ {
    /* aggregate */ int hZoneSetEncapsulationList; /* +0x0 */
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

struct tdstDynam_ {
    int p_stDynamics; /* +0x0 */
    int p_stParsingDatas; /* +0x4 */
    /* aggregate */ int eUsedMechanics; /* +0x8 */
};

struct tdstCineinfo_ {
    int hInit; /* +0x0 */
    int hCurrent; /* +0x4 */
    int hVisibility; /* +0x8 */
    int hWork; /* +0xc */
    /* aggregate */ int stLastFailedOrigin; /* +0x10 */
    /* aggregate */ int stLastFailedWanted; /* +0x1c */
    /* aggregate */ int stForceTarget; /* +0x28 */
    /* aggregate */ int stForcePosition; /* +0x34 */
    /* aggregate */ int stForceRefAxisY; /* +0x40 */
    /* aggregate */ int stForceRefAxisZ; /* +0x4c */
    float xApexRatio; /* +0x58 */
    float xLastDeltaCut; /* +0x5c */
    /* aggregate */ int eState; /* +0x60 */
    float xCounter1; /* +0x64 */
    float xCounter2; /* +0x68 */
    float xCounter3; /* +0x6c */
    float xCounter4; /* +0x70 */
    unsigned char ucVolIAFlags; /* +0x74 */
    unsigned char ucPerIAFlags; /* +0x75 */
    char cLastCutAngleSens; /* +0x76 */
    /* aggregate */ int AveragePosition; /* +0x78 */
    /* aggregate */ int stSightAxisSystem; /* +0x158 */
    unsigned char bCanDoBestPos; /* +0x17c */
    /* array */ int a10_stTransparentSuperObjectForCamera[10]; /* +0x180 */
    short xNumberOfTransparentSuperObjectForCamera; /* +0x248 */
    float fTransparency; /* +0x24c */
    float fTransparencySpeed; /* +0x250 */
    unsigned char ucTransparencyFlag; /* +0x254 */
    unsigned char bCameraIsMirrored; /* +0x255 */
    unsigned char bLightComputation; /* +0x256 */
};

struct tdstMSWay_ {
    int m_hPath; /* +0x0 */
    int m_lIndex; /* +0x4 */
    char m_bIsCircular; /* +0x8 */
};

struct WP_tdstWayPoint_ {
    /* aggregate */ int m_stVertex; /* +0x0 */
    float m_xRadius; /* +0xc */
    int m_hSuperObject; /* +0x10 */
};

struct tdstMSSound_ {
    _RollOffParam stRollOff; /* +0x0 */
    int hMechaCharacter; /* +0xc */
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

struct CINE_tdstCine_ {
    /* aggregate */ int hActorList; /* +0x0 */
    int hNextBrotherDyn; /* +0xc */
    int hPrevBrotherDyn; /* +0x10 */
    int hFatherDyn; /* +0x14 */
    unsigned char bPlaying; /* +0x18 */
    int lGenerateEvent; /* +0x1c */
    char szName[255]; /* +0x20 */
};

union GEO_tduVSObject_ {
    int p_stGeometricObject; /* +0x0 */
    int p_stMorphObject; /* +0x0 */
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

struct anon_0 {
    float m_xAngle; /* +0x0 */
    /* aggregate */ int m_stAxis; /* +0x4 */
};

struct anon_1 {
    float m_xAngle; /* +0x0 */
    /* aggregate */ int m_stAxis; /* +0x4 */
};

struct tdstCouple_ {
    unsigned short wChild; /* +0x0 */
    unsigned short wFather; /* +0x2 */
};

struct MTH_stRotation {
    float m_xAngle; /* +0x0 */
    /* aggregate */ int m_stAxis; /* +0x4 */
};

struct SCT_tdstListOfSoundEvent_ {
    int hPointerOfSectorSO; /* +0x0 */
    _SND_tduRefEvt uSoundEvent; /* +0x4 */
};

struct DNM_stDynamics {
    /* aggregate */ int m_tdstDynamicsBaseBlock; /* +0x0 */
    /* aggregate */ int m_tdstDynamicsAdvancedBlock; /* +0x170 */
    /* aggregate */ int m_tdstDynamicsComplexBlock; /* +0x200 */
};

struct DNM_stObstacle {
    float m_xRate; /* +0x0 */
    /* aggregate */ int m_stNorm; /* +0x4 */
    /* aggregate */ int m_stContact; /* +0x10 */
    int hMyMaterial; /* +0x1c */
    int hCollidedMaterial; /* +0x20 */
    int mp_stSupObj; /* +0x24 */
};

struct _RollOffParam {
    int rDistSatur; /* +0x0 */
    int rDistBackGround; /* +0x4 */
    unsigned char ucBackgroundVol; /* +0x8 */
};

unsigned char g_ucZDCVisible;
int g_hStaticCollisionGeoObj;
int g_hCollisionGeoObj;
int (*fn_iCmpZoneSetIndex)(void*, void*);

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\ZdxStuff.c lines 75–90 */
/* addr: 0x0026ac50  size: 224 bytes */
void fn_vTurnMatrixX(/* function pointer */ int _p_stMatrix, float _xAngle)
{
    float xSin;
    float xCos;
    /* aggregate */ int K;
    /* aggregate */ int J;
    /* aggregate */ int I;
    /* aggregate */ int TmpMatrix;
    /* line map: */
    /*   line 75 @ +0x000 */
    /*   line 78 @ +0x000 */
    /*   line 81 @ +0x000 */
    /*   line 83 @ +0x000 */
    /*   line 88 @ +0x000 */
    /*   line 85 @ +0x000 */
    /*   line 88 @ +0x000 */
    /*   line 88 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\ZdxStuff.c lines 2676–2682 */
/* addr: 0x0026ad30  size: 48 bytes */
int fn_lGetZdxListNumberOfElements(unsigned char ucZoneType, /* function pointer */ int hSuperObj, tdstZdxList_* hZdxList)
{
    /* line map: */
    /*   line 2676 @ +0x000 */
    /*   line 2682 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\ZdxStuff.c lines 2353–2393 */
/* addr: 0x0026ad60  size: 132 bytes */
void fn_vFirstTimeInitCollisionGeometricObject(void)
{
    short hElement;
    /* line map: */
    /*   line 2353 @ +0x000 */
    /*   line 2353 @ +0x000 */
    /*   line 2360 @ +0x000 */
    /*   line 2374 @ +0x000 */
    /*   line 2381 @ +0x000 */
    /*   line 2393 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\ZdxStuff.c lines 2304–2343 */
/* addr: 0x0026adf0  size: 684 bytes */
void fn_hMakeOneObjectFromManyOthers(unsigned char _ucZoneType, /* function pointer */ int _hCharacter, /* function pointer */ int _hTargetObject, /* function pointer */ int p_stZdxIndex)
{
    unsigned short uwCurrentIndexInActivation;
    short xI;
    /* aggregate */ int a10_hTable;
    short xIndex;
    /* line map: */
    /*   line 2304 @ +0x000 */
    /*   line 2308 @ +0x000 */
    /*   line 2312 @ +0x000 */
    /*   line 2314 @ +0x000 */
    /*   line 2317 @ +0x000 */
    /*   line 2322 @ +0x000 */
    /*   line 2325 @ +0x000 */
    /*   line 2329 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* addr: 0x0026b0a0  size: 8 bytes */
void fn_hStaticMakeOneObjectFromManyZdx(unsigned char _ucZoneType, /* function pointer */ int _hCharacter)
{
    /* TODO: decompile from asm/... */
}

/* addr: 0x0026b0b0  size: 8 bytes */
void fn_hMakeOneObjectFromManyZdx(unsigned char _ucZoneType, /* function pointer */ int _hCharacter)
{
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\ZdxStuff.c lines 2178–2195 */
/* addr: 0x0026b0c0  size: 352 bytes */
void fn_vGetAllObjectsInZdd(/* function pointer */ int _hSuperObj, unsigned char _ucModuleOrCharacter, unsigned char _ucChannelNumber, /* function pointer */ int _p_hSuperObjTable, unsigned short* _p_uwNumber, /* function pointer */ int hGeoObj)
{
    int lCurrentNumberOfObjects;
    int lMaxNumberOfObjects;
    /* line map: */
    /*   line 2178 @ +0x000 */
    /*   line 2183 @ +0x000 */
    /*   line 2188 @ +0x000 */
    /*   line 2191 @ +0x000 */
    /*   line 2195 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\ZdxStuff.c lines 2099–2145 */
/* addr: 0x0026b220  size: 616 bytes */
void fn_vDetectAllObjectsInThisModule(/* function pointer */ int _hCharacter, /* function pointer */ int _hModule, /* function pointer */ int _p_stMatrix, /* function pointer */ int _p_hSuperObjTable, int _lMaxNumberOfObjects, int* _lCurrentNumberOfObjects, /* function pointer */ int hActivityList, /* function pointer */ int hCharacterList)
{
    int i;
    /* line map: */
    /*   line 2099 @ +0x000 */
    /*   line 2102 @ +0x000 */
    /*   line 2106 @ +0x000 */
    /*   line 2110 @ +0x000 */
    /*   line 2119 @ +0x000 */
    /*   line 2123 @ +0x000 */
    /*   line 2127 @ +0x000 */
    /*   line 2130 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\ZdxStuff.c lines 1984–2039 */
/* addr: 0x0026b510  size: 740 bytes */
unsigned char fn_bIsCharacterTWODetectedByCharacterOne(/* function pointer */ int _hCharacterONE, /* function pointer */ int _hCharacterTWO, /* function pointer */ int hModule, tdstAChannel_* hChannel, /* function pointer */ int hPhyCollSet, /* function pointer */ int hGeoObj1, /* function pointer */ int p_stZdxIndex)
{
    unsigned short uwCurrentIndexInActivation;
    short xI;
    /* line map: */
    /*   line 1984 @ +0x000 */
    /*   line 1985 @ +0x000 */
    /*   line 1987 @ +0x000 */
    /*   line 1990 @ +0x000 */
    /*   line 1994 @ +0x000 */
    /*   line 1997 @ +0x000 */
    /*   line 2002 @ +0x000 */
    /*   line 2005 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\ZdxStuff.c lines 1946–1950 */
/* addr: 0x0026b800  size: 172 bytes */
unsigned char fn_bIsCharacterTWODetectedByThisZddOfCharacterOne(/* function pointer */ int _hCharacterONE, unsigned char _ucModuleOrCharacter, unsigned char _ucChannelNumber, /* function pointer */ int _hCharacterTWO, /* function pointer */ int hGeoObj, /* function pointer */ int p_stMatrix)
{
    /* line map: */
    /*   line 1946 @ +0x000 */
    /*   line 1946 @ +0x000 */
    /*   line 1948 @ +0x000 */
    /*   line 1950 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\ZdxStuff.c lines 1850–1923 */
/* addr: 0x0026b8b0  size: 876 bytes */
unsigned char fn_bThisTypeFromOneVsThisTypeFromTwo(/* function pointer */ int _hCharacterONE, unsigned short _wMaterialMaskOfONE, /* function pointer */ int _hCharacterTWO, unsigned short _wMaterialMaskOfTWO, /* function pointer */ int hModule, tdstAChannel_* hChannel, /* function pointer */ int hPhyCollSet, /* function pointer */ int hGeoObj1, /* function pointer */ int p_stZdxIndex)
{
    unsigned short uwCurrentIndexInActivation;
    short xI;
    /* line map: */
    /*   line 1850 @ +0x000 */
    /*   line 1851 @ +0x000 */
    /*   line 1855 @ +0x000 */
    /*   line 1859 @ +0x000 */
    /*   line 1862 @ +0x000 */
    /*   line 1865 @ +0x000 */
    /*   line 1870 @ +0x000 */
    /*   line 1872 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\ZdxStuff.c lines 1764–1812 */
/* addr: 0x0026bc20  size: 552 bytes */
void fn_vThisTypeVsThisType(/* function pointer */ int _hCharacter, unsigned short _wCharacterMask, unsigned short _wOthersMask, /* function pointer */ int _p_hObjectTable, unsigned short* _p_uwNumber, /* function pointer */ int hCollisionList, /* function pointer */ int hCharacterList)
{
    unsigned short uwMaxNumber;
    unsigned short uwCurrentNumber;
    unsigned int ulI;
    /* line map: */
    /*   line 1764 @ +0x000 */
    /*   line 1764 @ +0x000 */
    /*   line 1764 @ +0x000 */
    /*   line 1767 @ +0x000 */
    /*   line 1771 @ +0x000 */
    /*   line 1776 @ +0x000 */
    /*   line 1781 @ +0x000 */
    /*   line 1786 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\ZdxStuff.c lines 1733–1738 */
/* addr: 0x0026be50  size: 164 bytes */
unsigned char fn_bThisZdeFromOneVsThisZdeFromTwo(/* function pointer */ int _hCharacterONE, unsigned char _ucModuleOrCharacterForONE, unsigned char _ucChannelNumberForONE, /* function pointer */ int _hCharacterTWO, unsigned char _ucModuleOrCharacterForTWO, unsigned char _ucChannelNumberForTWO, /* function pointer */ int hMat2, /* function pointer */ int hMat1, /* function pointer */ int hGeoObj2, /* function pointer */ int hGeoObj1, /* function pointer */ int p_stMatrix2, /* function pointer */ int p_stMatrix1)
{
    /* line map: */
    /*   line 1733 @ +0x000 */
    /*   line 1733 @ +0x000 */
    /*   line 1733 @ +0x000 */
    /*   line 1733 @ +0x000 */
    /*   line 1735 @ +0x000 */
    /*   line 1738 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\ZdxStuff.c lines 1708–1712 */
/* addr: 0x0026bf00  size: 108 bytes */
unsigned char fn_bThisZdeFromOneVsAllZdeFromTwo(/* function pointer */ int _hCharacterONE, unsigned char _ucModuleOrCharacter, unsigned char _ucChannelNumber, /* function pointer */ int _hCharacterTWO, unsigned short _wMaterialMask, /* function pointer */ int hGeoObj, /* function pointer */ int p_stMatrix)
{
    /* line map: */
    /*   line 1708 @ +0x000 */
    /*   line 1708 @ +0x000 */
    /*   line 1708 @ +0x000 */
    /*   line 1712 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\ZdxStuff.c lines 1647–1689 */
/* addr: 0x0026bf70  size: 320 bytes */
void ZDX_fn_hGetGeoObjOfTypeAndMatrixFromZdxInfos(/* function pointer */ int _hCharacter, unsigned char _ucZoneType, unsigned char _ucModuleOrCharacter, unsigned char _ucChannelNumber, /* function pointer */ int _p_hMatrix, /* function pointer */ int hPhyCollSet, /* function pointer */ int hModuleIfZoom, /* function pointer */ int hModule, /* function pointer */ int hGeoObj)
{
    /* line map: */
    /*   line 1647 @ +0x000 */
    /*   line 1651 @ +0x000 */
    /*   line 1654 @ +0x000 */
    /*   line 1657 @ +0x000 */
    /*   line 1665 @ +0x000 */
    /*   line 1667 @ +0x000 */
    /*   line 1669 @ +0x000 */
    /*   line 1676 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\ZdxStuff.c lines 1503–1623 */
/* addr: 0x0026c0b0  size: 1100 bytes */
unsigned char fn_bIsThisZdeInClashWithCharacterZdeOfTypes(/* function pointer */ int _hGeoObj, /* function pointer */ int _hMatrix, /* function pointer */ int _hCharacter, unsigned short _wMaterialMask, /* function pointer */ int hObjectTable, /* function pointer */ int hModule, tdstAChannel_* hChannel, /* function pointer */ int hMat2, /* function pointer */ int hMat1, /* function pointer */ int hPhyCollSet, /* function pointer */ int hStaticGeoObj, /* function pointer */ int p_stZdxIndex)
{
    unsigned short uwCurrentIndexInActivation;
    short xI;
    /* line map: */
    /*   line 1503 @ +0x000 */
    /*   line 1503 @ +0x000 */
    /*   line 1503 @ +0x000 */
    /*   line 1510 @ +0x000 */
    /*   line 1517 @ +0x000 */
    /*   line 1522 @ +0x000 */
    /*   line 1526 @ +0x000 */
    /*   line 1530 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\ZdxStuff.c lines 1460–1479 */
/* addr: 0x0026c500  size: 320 bytes */
void fn_vGetAllCharactersInContactWithThisModuleZde(/* function pointer */ int _hSuperObj, unsigned char _ucChannelNumber, /* function pointer */ int _hSuperObjTable, unsigned short _wMaterialMask, int _lMaxNumberOfObjects, int* _p_lCurrentNumberofObjects, /* function pointer */ int hPhyCollSet, /* function pointer */ int hGeoObj, /* function pointer */ int hModule)
{
    /* line map: */
    /*   line 1460 @ +0x000 */
    /*   line 1463 @ +0x000 */
    /*   line 1465 @ +0x000 */
    /*   line 1469 @ +0x000 */
    /*   line 1472 @ +0x000 */
    /*   line 1479 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\ZdxStuff.c lines 1361–1437 */
/* addr: 0x0026c640  size: 752 bytes */
void fn_vGetAllCharacterInContactWithThisGeoObj(/* function pointer */ int _hSuperObj, /* function pointer */ int _hGeoObj, /* function pointer */ int _hMatrix, /* function pointer */ int _hSuperObjTable, unsigned short _wMaterialMask, int _lMaxNumberOfObjects, int* _p_lCurrentNumberOfObjects, tdstCollSet_* hCollSet, tdstCollSet_* hCollSet, /* function pointer */ int hCollisionList, /* function pointer */ int hCharacterList)
{
    int bNoCollisionWithProjectile;
    int bThisActorIsAProjectile;
    unsigned int ulI;
    /* line map: */
    /*   line 1361 @ +0x000 */
    /*   line 1361 @ +0x000 */
    /*   line 1366 @ +0x000 */
    /*   line 1370 @ +0x000 */
    /*   line 1373 @ +0x000 */
    /*   line 1379 @ +0x000 */
    /*   line 1383 @ +0x000 */
    /*   line 1389 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\ZdxStuff.c lines 1324–1337 */
/* addr: 0x0026c930  size: 188 bytes */
void fn_vGetAllCharactersInContactWithThisZde(/* function pointer */ int _hSuperObj, unsigned char _ucModuleOrCharacter, unsigned char _ucChannelNumber, /* function pointer */ int _hSuperObjTable, unsigned short* _p_uwNumber, unsigned short _wMaterialMask, /* function pointer */ int hGeoObj)
{
    int lCurrentNumberOfObjects;
    int lMaxNumberOfObjects;
    /* line map: */
    /*   line 1324 @ +0x000 */
    /*   line 1328 @ +0x000 */
    /*   line 1332 @ +0x000 */
    /*   line 1334 @ +0x000 */
    /*   line 1337 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\ZdxStuff.c lines 684–701 */
/* addr: 0x0026c9f0  size: 60 bytes */
void fn_hGetCollideZdxOfTypeAtIndex(unsigned char ucZoneType, unsigned short uwIndex, /* function pointer */ int hSuperObj, tdstZdxList_* p_stZdxList)
{
    /* line map: */
    /*   line 684 @ +0x000 */
    /*   line 701 @ +0x000 */
    /*   line 701 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\ZdxStuff.c lines 635–655 */
/* addr: 0x0026ca30  size: 172 bytes */
int fn_bHadToCorrectActivationList(tdstCsaList_* _p_stCsaList, tdstZoneSetEncapsulation_* p_stZSE2, tdstZoneSetEncapsulation_* p_stZSE)
{
    int bResult;
    unsigned short uwPosition;
    /* line map: */
    /*   line 635 @ +0x000 */
    /*   line 635 @ +0x000 */
    /*   line 643 @ +0x000 */
    /*   line 645 @ +0x000 */
    /*   line 648 @ +0x000 */
    /*   line 651 @ +0x000 */
    /*   line 655 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\ZdxStuff.c lines 517–517 */
/* addr: 0x0026cae0  size: 16 bytes */
int fn_iCmpZoneSetIndex(void* p_stZSE1, void* p_stZSE2)
{
    /* line map: */
    /*   line 517 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\ZdxStuff.c lines 239–292 */
/* addr: 0x0026caf0  size: 456 bytes */
void fn_vUpdateCurrentActivationForCharacter(/* function pointer */ int _hCharacter, tdstCollSet_* hCollSet, tdstCsaList_* hCsaList)
{
    short xIndex;
    /* line map: */
    /*   line 239 @ +0x000 */
    /*   line 243 @ +0x000 */
    /*   line 249 @ +0x000 */
    /*   line 249 @ +0x000 */
    /*   line 249 @ +0x000 */
    /*   line 252 @ +0x000 */
    /*   line 256 @ +0x000 */
    /*   line 262 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\ZdxStuff.c lines 152–190 */
/* addr: 0x0026ccc0  size: 516 bytes */
void fn_hIsTypeExistsInGeoObj(/* function pointer */ int _hGeoObj, unsigned short _wMaterialMask, /* function pointer */ int hGMT)
{
    short xNbElementsMax;
    short xNbElements;
    short xIndexMax;
    short xIndex;
    /* line map: */
    /*   line 152 @ +0x000 */
    /*   line 155 @ +0x000 */
    /*   line 159 @ +0x000 */
    /*   line 161 @ +0x000 */
    /*   line 166 @ +0x000 */
    /*   line 169 @ +0x000 */
    /*   line 171 @ +0x000 */
    /*   line 173 @ +0x000 */
    /* TODO: decompile from asm/... */
}
