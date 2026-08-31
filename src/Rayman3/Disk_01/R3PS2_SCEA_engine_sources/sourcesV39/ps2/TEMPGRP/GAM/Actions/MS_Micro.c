/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\Actions\MS_Micro.c */
/* Language: C */
/* Compiler: MW MIPS C Compiler */

#include <stddef.h>

/* Recovered aggregate layouts from MWCC debug type records. */
typedef struct MTH_stMove MTH_stMove;
typedef struct tdstGraphChainedListNode_ tdstGraphChainedListNode_;
typedef struct DNM_stReport DNM_stReport;
typedef struct CINE_Manager_ CINE_Manager_;
typedef struct tdstAnim3d_ tdstAnim3d_;
typedef struct SECT_tdstListOfDNMLights_ SECT_tdstListOfDNMLights_;
typedef struct tdstFrame3d_ tdstFrame3d_;
typedef struct tdstElement3d_ tdstElement3d_;
typedef struct tdstSubAnim_ tdstSubAnim_;
typedef struct tdstMicro_ tdstMicro_;
typedef struct tdstEvent_ tdstEvent_;
typedef struct WP_tdstGraph_ WP_tdstGraph_;
typedef struct _stVector _stVector;
typedef struct tdstIndexMicros_ tdstIndexMicros_;
typedef struct tdstCouple_ tdstCouple_;
typedef struct stMACDPID stMACDPID;
typedef struct SCT_tdstListOfSoundEvent_ SCT_tdstListOfSoundEvent_;
typedef struct anon_0 anon_0;
typedef struct CINE_tdstCine_ CINE_tdstCine_;
typedef struct GEO_tdstEdge_ GEO_tdstEdge_;
typedef struct AI_tdstMind_ AI_tdstMind_;
typedef struct anon_1 anon_1;
typedef struct tdstBrain_ tdstBrain_;
typedef union _SND_tduRefEvt _SND_tduRefEvt;
typedef struct SECT_tdstSector_ SECT_tdstSector_;
typedef struct tdst3dData_ tdst3dData_;
typedef struct MTH_stRotation MTH_stRotation;
typedef struct DNM_stDynamics DNM_stDynamics;
typedef struct tdstEngineTimerStructure_ tdstEngineTimerStructure_;
typedef struct DNM_stObstacle DNM_stObstacle;
typedef struct _stTimerCount _stTimerCount;
typedef struct stMorphData stMorphData;

struct MTH_stMove {
    /* aggregate */ int m_stLinear; /* +0x0 */
    MTH_stRotation m_stAngular; /* +0xc */
};

struct tdstGraphChainedListNode_ {
    int GraphChainedListNodeInfo; /* +0x0 */
    int p_NextGraphChainedListNode; /* +0x4 */
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

struct CINE_Manager_ {
    /* aggregate */ int hCineList; /* +0x0 */
    /* aggregate */ int gp_stFixedCameraMatrix; /* +0x10 */
    int gp_stSPOHandleCamera; /* +0x70 */
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

struct tdstMicro_ {
    int hMicroMatrix; /* +0x0 */
    unsigned char bIsActive; /* +0x4 */
};

struct tdstEvent_ {
    int p_stfEventInTBL; /* +0x0 */
    unsigned short usEventNumberInTBL; /* +0x4 */
    unsigned short uwFrameNumber; /* +0x6 */
    unsigned short uwChannelNumber; /* +0x8 */
    unsigned short uwIsLocalized; /* +0xa */
};

struct WP_tdstGraph_ {
    /* aggregate */ int m_hListOfNode; /* +0x0 */
};

struct _stVector {
    float f32x; /* +0x0 */
    float f32y; /* +0x4 */
    float f32z; /* +0x8 */
};

struct tdstIndexMicros_ {
    int hNextBrotherDyn; /* +0x0 */
    int hPrevBrotherDyn; /* +0x4 */
    int hFatherDyn; /* +0x8 */
    int lIndex; /* +0xc */
    int hMicroObj; /* +0x10 */
};

struct tdstCouple_ {
    unsigned short wChild; /* +0x0 */
    unsigned short wFather; /* +0x2 */
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

struct SCT_tdstListOfSoundEvent_ {
    int hPointerOfSectorSO; /* +0x0 */
    _SND_tduRefEvt uSoundEvent; /* +0x4 */
};

struct anon_0 {
    float m_xAngle; /* +0x0 */
    /* aggregate */ int m_stAxis; /* +0x4 */
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

struct AI_tdstMind_ {
    int p_stAIModel; /* +0x0 */
    int p_stIntelligence; /* +0x4 */
    int p_stReflex; /* +0x8 */
    int p_stDsgMem; /* +0xc */
    unsigned char bDoingIntel; /* +0x10 */
};

struct anon_1 {
    float m_xAngle; /* +0x0 */
    /* aggregate */ int m_stAxis; /* +0x4 */
};

struct tdstBrain_ {
    int p_stMind; /* +0x0 */
    int hLastCollidedGoThroughMaterial; /* +0x4 */
    unsigned char bWarnMechanicsFlag; /* +0x8 */
    unsigned char bActiveDuringTransition; /* +0x9 */
};

union _SND_tduRefEvt {
    unsigned int Id; /* +0x0 */
    int pstPtr; /* +0x0 */
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

struct DNM_stDynamics {
    /* aggregate */ int m_tdstDynamicsBaseBlock; /* +0x0 */
    /* aggregate */ int m_tdstDynamicsAdvancedBlock; /* +0x170 */
    /* aggregate */ int m_tdstDynamicsComplexBlock; /* +0x200 */
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

struct DNM_stObstacle {
    float m_xRate; /* +0x0 */
    /* aggregate */ int m_stNorm; /* +0x4 */
    /* aggregate */ int m_stContact; /* +0x10 */
    int hMyMaterial; /* +0x1c */
    int hCollidedMaterial; /* +0x20 */
    int mp_stSupObj; /* +0x24 */
};

struct _stTimerCount {
    unsigned long m_ulLowPart; /* +0x0 */
    unsigned long m_ulHighPart; /* +0x8 */
};

struct stMorphData {
    unsigned short uwChannelNumber; /* +0x0 */
    unsigned short uwFrameNumber; /* +0x2 */
    unsigned char ucNbTarget; /* +0x4 */
    unsigned char ucAlign[3]; /* +0x5 */
    short a_xIndexTargetMT[10]; /* +0x8 */
    unsigned char a_ucMorphingAmountMT[10]; /* +0x1c */
};

/* aggregate */ int g_stIndexMicrosList;
int (*fn_bGetMicroTangent)(int, _stVector*);
int (*fn_bGetMicroNormal)(int, _stVector*);
int (*fn_bGetMicroVelocity)(int, _stVector*);
int (*fn_bGetMicroPosition)(int, _stVector*);
int (*RetMicroSonoreFILTRE)(int);
int (*fn_rGetMicroTangentZ)(int);
int (*fn_rGetMicroTangentY)(int);
int (*fn_rGetMicroTangentX)(int);
int (*fn_rGetMicroNormalZ)(int);
int (*fn_rGetMicroNormalY)(int);
int (*fn_rGetMicroNormalX)(int);
int (*fn_rGetMicroVelocityZ)(int);
int (*fn_rGetMicroVelocityY)(int);
int (*fn_rGetMicroVelocityX)(int);
int (*fn_rGetMicroCoordinateZ)(int);
int (*fn_rGetMicroCoordinateY)(int);
int (*fn_rGetMicroCoordinateX)(int);
/* aggregate */ int g_stEngineStructure;
unsigned char g_ucGameModuleId;

/* addr: 0x00272070  size: 8 bytes */
unsigned int fn_ulMSWaySizeOf(void)
{
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\Actions\MS_Micro.c lines 857–857 */
/* addr: 0x00272080  size: 20 bytes */
void GAM_fn_vChangeCharacterForMicro(/* function pointer */ int _hCharacter)
{
    /* line map: */
    /*   line 857 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\Actions\MS_Micro.c lines 797–818 */
/* addr: 0x002720a0  size: 272 bytes */
void fn_vInitMicrosFunction(void)
{
    /* aggregate */ int st_pfnRetMicroSound;
    /* line map: */
    /*   line 797 @ +0x000 */
    /*   line 797 @ +0x000 */
    /*   line 799 @ +0x000 */
    /*   line 799 @ +0x000 */
    /*   line 816 @ +0x000 */
    /*   line 799 @ +0x000 */
    /*   line 801 @ +0x000 */
    /*   line 801 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\Actions\MS_Micro.c lines 783–788 */
/* addr: 0x002721b0  size: 268 bytes */
void fn_vRemoveAllMicros(tdstIndexMicros_* hNextElement, tdstIndexMicros_* hMicro)
{
    /* line map: */
    /*   line 783 @ +0x000 */
    /*   line 783 @ +0x000 */
    /*   line 786 @ +0x000 */
    /*   line 788 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\Actions\MS_Micro.c lines 754–772 */
/* addr: 0x002722c0  size: 244 bytes */
void fn_vDeleteMicro(/* function pointer */ int _hEngObj, tdstIndexMicros_* hCurrentMicro, tdstIndexMicros_* hMicro)
{
    /* line map: */
    /*   line 754 @ +0x000 */
    /*   line 754 @ +0x000 */
    /*   line 757 @ +0x000 */
    /*   line 760 @ +0x000 */
    /*   line 763 @ +0x000 */
    /*   line 772 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\Actions\MS_Micro.c lines 733–741 */
/* addr: 0x002723c0  size: 312 bytes */
void fn_vAddMicro(/* function pointer */ int hEngObj, tdstIndexMicros_* hMicro)
{
    /* line map: */
    /*   line 733 @ +0x000 */
    /*   line 733 @ +0x000 */
    /*   line 733 @ +0x000 */
    /*   line 736 @ +0x000 */
    /*   line 738 @ +0x000 */
    /*   line 738 @ +0x000 */
    /*   line 741 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* addr: 0x00272500  size: 8 bytes */
int RetMicroSonoreFILTRE(void)
{
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\Actions\MS_Micro.c lines 712–714 */
/* addr: 0x00272510  size: 80 bytes */
int fn_rGetMicroTangentZ(int s32_ObjectId)
{
    _stVector st_Vector;
    int r_Answer;
    /* line map: */
    /*   line 712 @ +0x000 */
    /*   line 712 @ +0x000 */
    /*   line 714 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\Actions\MS_Micro.c lines 702–704 */
/* addr: 0x00272560  size: 80 bytes */
int fn_rGetMicroTangentY(int s32_ObjectId)
{
    _stVector st_Vector;
    int r_Answer;
    /* line map: */
    /*   line 702 @ +0x000 */
    /*   line 702 @ +0x000 */
    /*   line 704 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\Actions\MS_Micro.c lines 692–694 */
/* addr: 0x002725b0  size: 80 bytes */
int fn_rGetMicroTangentX(int s32_ObjectId)
{
    _stVector st_Vector;
    int r_Answer;
    /* line map: */
    /*   line 692 @ +0x000 */
    /*   line 692 @ +0x000 */
    /*   line 694 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\Actions\MS_Micro.c lines 641–684 */
/* addr: 0x00272600  size: 304 bytes */
int fn_bGetMicroTangent(int s32_ObjectId, _stVector* pst_Vector, /* function pointer */ int pMatrix2, tdstMicro_* h_MSMicro, /* function pointer */ int h_SuperObj)
{
    /* aggregate */ int stW3;
    /* aggregate */ int stW2;
    /* aggregate */ int stW1;
    /* aggregate */ int stV3;
    /* aggregate */ int stV2;
    /* aggregate */ int stV1;
    int b_Answer;
    /* line map: */
    /*   line 641 @ +0x000 */
    /*   line 645 @ +0x000 */
    /*   line 649 @ +0x000 */
    /*   line 653 @ +0x000 */
    /*   line 661 @ +0x000 */
    /*   line 668 @ +0x000 */
    /*   line 668 @ +0x000 */
    /*   line 676 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\Actions\MS_Micro.c lines 623–625 */
/* addr: 0x00272730  size: 80 bytes */
int fn_rGetMicroNormalZ(int s32_ObjectId)
{
    _stVector st_Vector;
    int r_Answer;
    /* line map: */
    /*   line 623 @ +0x000 */
    /*   line 623 @ +0x000 */
    /*   line 625 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\Actions\MS_Micro.c lines 613–615 */
/* addr: 0x00272780  size: 80 bytes */
int fn_rGetMicroNormalY(int s32_ObjectId)
{
    _stVector st_Vector;
    int r_Answer;
    /* line map: */
    /*   line 613 @ +0x000 */
    /*   line 613 @ +0x000 */
    /*   line 615 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\Actions\MS_Micro.c lines 603–605 */
/* addr: 0x002727d0  size: 80 bytes */
int fn_rGetMicroNormalX(int s32_ObjectId)
{
    _stVector st_Vector;
    int r_Answer;
    /* line map: */
    /*   line 603 @ +0x000 */
    /*   line 603 @ +0x000 */
    /*   line 605 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\Actions\MS_Micro.c lines 553–595 */
/* addr: 0x00272820  size: 304 bytes */
int fn_bGetMicroNormal(int s32_ObjectId, _stVector* pst_Vector, /* function pointer */ int pMatrix2, tdstMicro_* h_MSMicro, /* function pointer */ int h_SuperObj)
{
    /* aggregate */ int stW3;
    /* aggregate */ int stW2;
    /* aggregate */ int stW1;
    /* aggregate */ int stV3;
    /* aggregate */ int stV2;
    /* aggregate */ int stV1;
    int b_Answer;
    /* line map: */
    /*   line 553 @ +0x000 */
    /*   line 557 @ +0x000 */
    /*   line 561 @ +0x000 */
    /*   line 565 @ +0x000 */
    /*   line 573 @ +0x000 */
    /*   line 579 @ +0x000 */
    /*   line 579 @ +0x000 */
    /*   line 587 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\Actions\MS_Micro.c lines 535–537 */
/* addr: 0x00272950  size: 80 bytes */
int fn_rGetMicroVelocityZ(int s32_ObjectId)
{
    _stVector st_Vector;
    int r_Answer;
    /* line map: */
    /*   line 535 @ +0x000 */
    /*   line 535 @ +0x000 */
    /*   line 537 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\Actions\MS_Micro.c lines 525–527 */
/* addr: 0x002729a0  size: 80 bytes */
int fn_rGetMicroVelocityY(int s32_ObjectId)
{
    _stVector st_Vector;
    int r_Answer;
    /* line map: */
    /*   line 525 @ +0x000 */
    /*   line 525 @ +0x000 */
    /*   line 527 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\Actions\MS_Micro.c lines 515–517 */
/* addr: 0x002729f0  size: 80 bytes */
int fn_rGetMicroVelocityX(int s32_ObjectId)
{
    _stVector st_Vector;
    int r_Answer;
    /* line map: */
    /*   line 515 @ +0x000 */
    /*   line 515 @ +0x000 */
    /*   line 517 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\Actions\MS_Micro.c lines 458–508 */
/* addr: 0x00272a40  size: 420 bytes */
int fn_bGetMicroVelocity(int s32_ObjectId, _stVector* pst_Vector, /* function pointer */ int param2, DNM_stDynamics* p_stDynamics, tdstDynam_* h_Dynam, /* function pointer */ int h_SuperObj)
{
    float xInvDTInSecond;
    /* aggregate */ int st_Clamped;
    /* aggregate */ int st_Velocity;
    int b_Answer;
    /* line map: */
    /*   line 458 @ +0x000 */
    /*   line 462 @ +0x000 */
    /*   line 466 @ +0x000 */
    /*   line 470 @ +0x000 */
    /*   line 474 @ +0x000 */
    /*   line 485 @ +0x000 */
    /*   line 487 @ +0x000 */
    /*   line 489 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* addr: 0x00272bf0  size: 8 bytes */
float fn_rClampValue(float r_Value)
{
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\Actions\MS_Micro.c lines 406–411 */
/* addr: 0x00272c00  size: 224 bytes */
int fn_rGetMicroCoordinateZ(int s32_ObjectId)
{
    _stVector st_Vector;
    int r_Answer;
    /* line map: */
    /*   line 407 @ +0x000 */
    /*   line 406 @ +0x000 */
    /*   line 408 @ +0x000 */
    /*   line 411 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\Actions\MS_Micro.c lines 395–400 */
/* addr: 0x00272ce0  size: 224 bytes */
int fn_rGetMicroCoordinateY(int s32_ObjectId)
{
    _stVector st_Vector;
    int r_Answer;
    /* line map: */
    /*   line 396 @ +0x000 */
    /*   line 395 @ +0x000 */
    /*   line 397 @ +0x000 */
    /*   line 400 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\Actions\MS_Micro.c lines 384–389 */
/* addr: 0x00272dc0  size: 224 bytes */
int fn_rGetMicroCoordinateX(int s32_ObjectId)
{
    _stVector st_Vector;
    int r_Answer;
    /* line map: */
    /*   line 385 @ +0x000 */
    /*   line 384 @ +0x000 */
    /*   line 386 @ +0x000 */
    /*   line 389 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\Actions\MS_Micro.c lines 358–378 */
/* addr: 0x00272ea0  size: 188 bytes */
int fn_bGetMicroPosition(int s32_ObjectId, _stVector* pst_Vector, /* function pointer */ int h_SuperObj)
{
    /* aggregate */ int st_Vertex;
    int b_Answer;
    /* line map: */
    /*   line 358 @ +0x000 */
    /*   line 362 @ +0x000 */
    /*   line 366 @ +0x000 */
    /*   line 373 @ +0x000 */
    /*   line 370 @ +0x000 */
    /*   line 370 @ +0x000 */
    /*   line 372 @ +0x000 */
    /*   line 378 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\Actions\MS_Micro.c lines 339–343 */
/* addr: 0x00272f60  size: 60 bytes */
void fn_hReturnHandleMicroFromIndex(int lIndex, tdstIndexMicros_* hMicro)
{
    /* line map: */
    /*   line 339 @ +0x000 */
    /*   line 341 @ +0x000 */
    /*   line 343 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\Actions\MS_Micro.c lines 311–325 */
/* addr: 0x00272fa0  size: 100 bytes */
void fn_vMicroSetActivationFlag(/* function pointer */ int hEngObj, tdstMicro_* h_MS_Micro, unsigned char _bActive)
{
    /* line map: */
    /*   line 311 @ +0x000 */
    /*   line 315 @ +0x000 */
    /*   line 320 @ +0x000 */
    /*   line 325 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* addr: 0x00273010  size: 16 bytes */
void fn_vMicroCopyClone(/* function pointer */ int _p_stObjectDest, /* function pointer */ int _p_stObjectSrc)
{
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\Actions\MS_Micro.c lines 258–276 */
/* addr: 0x00273020  size: 140 bytes */
void fn_vMicroDesinit(/* function pointer */ int p_stObject)
{
    /* line map: */
    /*   line 258 @ +0x000 */
    /*   line 261 @ +0x000 */
    /*   line 276 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\Actions\MS_Micro.c lines 223–236 */
/* addr: 0x002730b0  size: 208 bytes */
void fn_vMicroInit(/* function pointer */ int p_stObject, /* aggregate */ int eObjectInit)
{
    /* line map: */
    /*   line 223 @ +0x000 */
    /*   line 226 @ +0x000 */
    /*   line 229 @ +0x000 */
    /*   line 236 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\Actions\MS_Micro.c lines 198–208 */
/* addr: 0x00273180  size: 140 bytes */
void fn_vMicroFree(/* function pointer */ int p_stObject)
{
    /* line map: */
    /*   line 198 @ +0x000 */
    /*   line 201 @ +0x000 */
    /*   line 208 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\Actions\MS_Micro.c lines 149–173 */
/* addr: 0x00273210  size: 284 bytes */
void fn_vMicroAlloc(/* function pointer */ int p_stObject)
{
    /* aggregate */ int stK;
    /* aggregate */ int stJ;
    /* aggregate */ int stI;
    /* line map: */
    /*   line 149 @ +0x000 */
    /*   line 152 @ +0x000 */
    /*   line 156 @ +0x000 */
    /*   line 156 @ +0x000 */
    /*   line 161 @ +0x000 */
    /*   line 161 @ +0x000 */
    /*   line 165 @ +0x000 */
    /*   line 170 @ +0x000 */
    /* TODO: decompile from asm/... */
}
