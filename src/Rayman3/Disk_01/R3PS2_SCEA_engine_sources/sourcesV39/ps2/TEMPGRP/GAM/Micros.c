/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\Micros.c */
/* Language: C */
/* Compiler: MW MIPS C Compiler */

#include <stddef.h>

/* Recovered aggregate layouts from MWCC debug type records. */
typedef struct DNM_stDynamics DNM_stDynamics;
typedef struct tdstElement3d_ tdstElement3d_;
typedef struct CINE_tdstCine_ CINE_tdstCine_;
typedef struct DNM_stReport DNM_stReport;
typedef struct tdstEvent_ tdstEvent_;
typedef struct stMorphData stMorphData;
typedef union _SND_tduRefEvt _SND_tduRefEvt;
typedef struct DNM_stObstacle DNM_stObstacle;
typedef struct tdstAnim3d_ tdstAnim3d_;
typedef struct stMACDPID stMACDPID;
typedef struct tdstFrame3d_ tdstFrame3d_;
typedef struct _stVector _stVector;
typedef struct SCT_tdstListOfSoundEvent_ SCT_tdstListOfSoundEvent_;
typedef struct tdstSubAnim_ tdstSubAnim_;
typedef struct _RollOffParam _RollOffParam;
typedef struct tdst3dData_ tdst3dData_;
typedef struct SECT_tdstListOfDNMLights_ SECT_tdstListOfDNMLights_;
typedef struct tdstBrain_ tdstBrain_;
typedef struct tdstAChannel_ tdstAChannel_;
typedef struct anon_0 anon_0;
typedef struct anon_1 anon_1;
typedef struct tdstMSSound_ tdstMSSound_;
typedef struct SECT_tdstSector_ SECT_tdstSector_;
typedef struct GEO_tdstEdge_ GEO_tdstEdge_;
typedef struct tdstCouple_ tdstCouple_;
typedef struct MTH_stRotation MTH_stRotation;
typedef struct AI_tdstMind_ AI_tdstMind_;
typedef struct MTH_stMove MTH_stMove;

struct DNM_stDynamics {
    /* aggregate */ int m_tdstDynamicsBaseBlock; /* +0x0 */
    /* aggregate */ int m_tdstDynamicsAdvancedBlock; /* +0x170 */
    /* aggregate */ int m_tdstDynamicsComplexBlock; /* +0x200 */
};

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

struct _stVector {
    float f32x; /* +0x0 */
    float f32y; /* +0x4 */
    float f32z; /* +0x8 */
};

struct SCT_tdstListOfSoundEvent_ {
    int hPointerOfSectorSO; /* +0x0 */
    _SND_tduRefEvt uSoundEvent; /* +0x4 */
};

struct tdstSubAnim_ {
    int p_stSubAnim; /* +0x0 */
};

struct _RollOffParam {
    int rDistSatur; /* +0x0 */
    int rDistBackGround; /* +0x4 */
    unsigned char ucBackgroundVol; /* +0x8 */
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

struct SECT_tdstListOfDNMLights_ {
    int hDNMLights; /* +0x0 */
    int hNextBrotherDyn; /* +0x4 */
    int hPrevBrotherDyn; /* +0x8 */
    int hFatherDyn; /* +0xc */
};

struct tdstBrain_ {
    int p_stMind; /* +0x0 */
    int hLastCollidedGoThroughMaterial; /* +0x4 */
    unsigned char bWarnMechanicsFlag; /* +0x8 */
    unsigned char bActiveDuringTransition; /* +0x9 */
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

struct anon_0 {
    float m_xAngle; /* +0x0 */
    /* aggregate */ int m_stAxis; /* +0x4 */
};

struct anon_1 {
    float m_xAngle; /* +0x0 */
    /* aggregate */ int m_stAxis; /* +0x4 */
};

struct tdstMSSound_ {
    _RollOffParam stRollOff; /* +0x0 */
    int hMechaCharacter; /* +0xc */
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

struct GEO_tdstEdge_ {
    short xPoints[2]; /* +0x0 */
    /* array */ int st_VectorPoints[2]; /* +0x4 */
};

struct tdstCouple_ {
    unsigned short wChild; /* +0x0 */
    unsigned short wFather; /* +0x2 */
};

struct MTH_stRotation {
    float m_xAngle; /* +0x0 */
    /* aggregate */ int m_stAxis; /* +0x4 */
};

struct AI_tdstMind_ {
    int p_stAIModel; /* +0x0 */
    int p_stIntelligence; /* +0x4 */
    int p_stReflex; /* +0x8 */
    int p_stDsgMem; /* +0xc */
    unsigned char bDoingIntel; /* +0x10 */
};

struct MTH_stMove {
    /* aggregate */ int m_stLinear; /* +0x0 */
    MTH_stRotation m_stAngular; /* +0xc */
};

int g_lSoundObjectTypeAnim;
int g_lSoundObjectTypeVoice;
int g_lSoundObjectTypeMenu;
int g_lSoundObjectTypeMusic;
int g_lSoundObjectTypeAmbiance;
int g_lSoundVolumeLineVoices;
int g_lSoundVolumeLineSound;
int g_lSoundVolumeLineMusic;
int g_lSoundVolumeLineAmbiance;
int g_lSoundVolumeLineMenu;
/* aggregate */ int ga_pstBlockEventSlotMemory;

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\Micros.c lines 69–73 */
/* addr: 0x00265510  size: 60 bytes */
unsigned char MC_fn_ucIsCharacterInMainCharacterList(/* function pointer */ int hCharacter, /* function pointer */ int hMainCharNode)
{
    /* line map: */
    /*   line 69 @ +0x000 */
    /*   line 71 @ +0x000 */
    /*   line 73 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\Micros.c lines 765–765 */
/* addr: 0x00265550  size: 24 bytes */
void GAM_p_stGetBlockEventSlotMemory(int s32_Index)
{
    /* line map: */
    /*   line 765 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\Micros.c lines 752–752 */
/* addr: 0x00265570  size: 24 bytes */
void GAM_fn_vSaveBlockEventSlotMemory(/* function pointer */ int pst_BlockEvent, int s32_Index)
{
    /* line map: */
    /*   line 752 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\Micros.c lines 630–739 */
/* addr: 0x00265590  size: 448 bytes */
int GAM_fn_bInitSoundTypes(void)
{
    /* aggregate */ int st_IObjectTypeAmbiance;
    /* aggregate */ int st_IObjectTypeMusic;
    /* aggregate */ int st_IObjectTypeVoice;
    /* aggregate */ int st_IObjectTypeAnimation;
    /* line map: */
    /*   line 630 @ +0x000 */
    /*   line 630 @ +0x000 */
    /*   line 630 @ +0x000 */
    /*   line 630 @ +0x000 */
    /*   line 630 @ +0x000 */
    /*   line 664 @ +0x000 */
    /*   line 630 @ +0x000 */
    /*   line 664 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\Micros.c lines 604–605 */
/* addr: 0x00265750  size: 48 bytes */
int fn_bObjectTypeAmbianceInfo(int s32_ObjectId, char* pch_Buffer)
{
    /* line map: */
    /*   line 604 @ +0x000 */
    /*   line 604 @ +0x000 */
    /*   line 605 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\Micros.c lines 581–582 */
/* addr: 0x00265780  size: 48 bytes */
int fn_bObjectTypeMusicInfo(int s32_ObjectId, char* pch_String)
{
    /* line map: */
    /*   line 581 @ +0x000 */
    /*   line 581 @ +0x000 */
    /*   line 582 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\Micros.c lines 534–560 */
/* addr: 0x002657b0  size: 292 bytes */
int fn_bObjectTypeVoiceInfo(int s32_ObjectId, char* pch_String, int s32_Size)
{
    char* pch_StringToCat;
    /* aggregate */ int h_LinkedObj;
    int b_Answer;
    /* line map: */
    /*   line 534 @ +0x000 */
    /*   line 534 @ +0x000 */
    /*   line 538 @ +0x000 */
    /*   line 542 @ +0x000 */
    /*   line 547 @ +0x000 */
    /*   line 547 @ +0x000 */
    /*   line 550 @ +0x000 */
    /*   line 557 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\Micros.c lines 457–508 */
/* addr: 0x002658e0  size: 332 bytes */
int fn_bObjectTypeAnimationInfo(int s32_ObjectId, char* pch_String, int s32_Size)
{
    char* pch_PersoName;
    /* aggregate */ int h_Link;
    int b_Answer;
    /* line map: */
    /*   line 457 @ +0x000 */
    /*   line 457 @ +0x000 */
    /*   line 467 @ +0x000 */
    /*   line 470 @ +0x000 */
    /*   line 473 @ +0x000 */
    /*   line 478 @ +0x000 */
    /*   line 481 @ +0x000 */
    /*   line 501 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\Micros.c lines 449–449 */
/* addr: 0x00265a30  size: 116 bytes */
int fn_bObjectTypeAnimationRollOff(int s32_ObjectId, _RollOffParam* pst_RollOff)
{
    /* line map: */
    /*   line 449 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* addr: 0x00265ab0  size: 8 bytes */
int fn_bObjectTypeAnimationLinkBis(int s32_ObjectId, int s32_MicroId)
{
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\Micros.c lines 375–415 */
/* addr: 0x00265ac0  size: 328 bytes */
int fn_bObjectTypeAnimationLink(int objet, int micro, /* function pointer */ int hParent, /* function pointer */ int hMainActor, /* function pointer */ int hMCN, /* function pointer */ int param5, /* function pointer */ int hSuperObj, /* function pointer */ int hMicroSector, /* function pointer */ int hObjectSector)
{
    unsigned int ulI;
    /* line map: */
    /*   line 375 @ +0x000 */
    /*   line 375 @ +0x000 */
    /*   line 379 @ +0x000 */
    /*   line 382 @ +0x000 */
    /*   line 388 @ +0x000 */
    /*   line 392 @ +0x000 */
    /*   line 396 @ +0x000 */
    /*   line 399 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\Micros.c lines 285–363 */
/* addr: 0x00265c10  size: 328 bytes */
int fn_s32ObjectTypeAnimationSwitch(int s32_ObjectId, int s32_InfoId, /* function pointer */ int h_GMT, DNM_stObstacle* pst_Obstacle, DNM_stReport* pst_Report, DNM_stDynamics* pst_Dynamics, /* function pointer */ int h_Tmp, tdstDynam_* h_Dynamic, tdstMSSound_* h_MSSound, /* function pointer */ int h_Object)
{
    int s32_Tmp;
    unsigned int u32_State;
    /* aggregate */ int e_TypeId;
    int s32_Answer;
    /* line map: */
    /*   line 286 @ +0x000 */
    /*   line 285 @ +0x000 */
    /*   line 289 @ +0x000 */
    /*   line 295 @ +0x000 */
    /*   line 295 @ +0x000 */
    /*   line 299 @ +0x000 */
    /*   line 301 @ +0x000 */
    /*   line 304 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\Micros.c lines 208–277 */
/* addr: 0x00265d60  size: 484 bytes */
void fn_s32ObjectTypeAnimationExtraCoef(int s32_ObjectId, int* pitch, int* pan, int* vol, /* function pointer */ int hParent, DNM_stDynamics* p_stDynamics)
{
    int rTmpPan;
    int rTmpVol;
    int rTmpPitch;
    /* aggregate */ int stVertex;
    /* line map: */
    /*   line 208 @ +0x000 */
    /*   line 212 @ +0x000 */
    /*   line 216 @ +0x000 */
    /*   line 219 @ +0x000 */
    /*   line 226 @ +0x000 */
    /*   line 231 @ +0x000 */
    /*   line 236 @ +0x000 */
    /*   line 240 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\Micros.c lines 192–194 */
/* addr: 0x00265f50  size: 72 bytes */
int fn_s32ObjectTypeAnimationVZ(int s32_ObjectId)
{
    _stVector st_Answer;
    /* line map: */
    /*   line 193 @ +0x000 */
    /*   line 193 @ +0x000 */
    /*   line 192 @ +0x000 */
    /*   line 194 @ +0x000 */
    /*   line 194 @ +0x000 */
    /*   line 194 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\Micros.c lines 184–186 */
/* addr: 0x00265fa0  size: 72 bytes */
int fn_s32ObjectTypeAnimationVY(int s32_ObjectId)
{
    _stVector st_Answer;
    /* line map: */
    /*   line 185 @ +0x000 */
    /*   line 185 @ +0x000 */
    /*   line 184 @ +0x000 */
    /*   line 186 @ +0x000 */
    /*   line 186 @ +0x000 */
    /*   line 186 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\Micros.c lines 177–179 */
/* addr: 0x00265ff0  size: 60 bytes */
int fn_s32ObjectTypeAnimationVX(int s32_ObjectId)
{
    _stVector st_Answer;
    /* line map: */
    /*   line 177 @ +0x000 */
    /*   line 177 @ +0x000 */
    /*   line 179 @ +0x000 */
    /*   line 179 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\Micros.c lines 168–170 */
/* addr: 0x00266030  size: 176 bytes */
int fn_s32ObjectTypeAnimationZ(int s32_ObjectId)
{
    _stVector st_Answer;
    /* line map: */
    /*   line 169 @ +0x000 */
    /*   line 168 @ +0x000 */
    /*   line 170 @ +0x000 */
    /*   line 170 @ +0x000 */
    /*   line 170 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\Micros.c lines 160–162 */
/* addr: 0x002660e0  size: 176 bytes */
int fn_s32ObjectTypeAnimationY(int s32_ObjectId)
{
    _stVector st_Answer;
    /* line map: */
    /*   line 161 @ +0x000 */
    /*   line 160 @ +0x000 */
    /*   line 162 @ +0x000 */
    /*   line 162 @ +0x000 */
    /*   line 162 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\Micros.c lines 153–155 */
/* addr: 0x00266190  size: 164 bytes */
int fn_s32ObjectTypeAnimationX(int s32_ObjectId)
{
    _stVector st_Answer;
    /* line map: */
    /*   line 153 @ +0x000 */
    /*   line 153 @ +0x000 */
    /*   line 155 @ +0x000 */
    /*   line 155 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\Micros.c lines 118–146 */
/* addr: 0x00266240  size: 280 bytes */
int fn_bObjectTypeAnimationVelocity(int s32_ObjectId, int s32_ChannelId, _stVector* pst_Vector, DNM_stDynamics* pst_Dynamics, tdstDynam_* h_Dynamic, /* function pointer */ int h_Object)
{
    /* aggregate */ int st_Vertex;
    int b_Answer;
    /* line map: */
    /*   line 118 @ +0x000 */
    /*   line 122 @ +0x000 */
    /*   line 127 @ +0x000 */
    /*   line 129 @ +0x000 */
    /*   line 133 @ +0x000 */
    /*   line 137 @ +0x000 */
    /*   line 137 @ +0x000 */
    /*   line 137 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\Micros.c lines 88–112 */
/* addr: 0x00266360  size: 220 bytes */
int fn_bObjectTypeAnimationPosition(int s32_ObjectId, int s32_ChannelId, _stVector* pst_Vector, /* function pointer */ int h_Object)
{
    /* aggregate */ int st_Vertex;
    int b_Answer;
    /* line map: */
    /*   line 88 @ +0x000 */
    /*   line 92 @ +0x000 */
    /*   line 97 @ +0x000 */
    /*   line 99 @ +0x000 */
    /*   line 103 @ +0x000 */
    /*   line 103 @ +0x000 */
    /*   line 103 @ +0x000 */
    /*   line 105 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\Micros.c lines 72–80 */
/* addr: 0x00266440  size: 72 bytes */
void fn_hGetSuperObjectActorHandle(int s32_ObjectId, /* function pointer */ int h_Object, /* function pointer */ int h_Answer)
{
    /* line map: */
    /*   line 72 @ +0x000 */
    /*   line 77 @ +0x000 */
    /*   line 80 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\Micros.c lines 53–54 */
/* addr: 0x00266490  size: 28 bytes */
int fn_bRetObjectRollOffNull(_RollOffParam* pst_RollOff)
{
    int b_Answer;
    /* line map: */
    /*   line 53 @ +0x000 */
    /*   line 54 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* addr: 0x002664b0  size: 8 bytes */
int fn_bRetObjectLinkBisNull(void)
{
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\Micros.c lines 40–46 */
/* addr: 0x002664c0  size: 32 bytes */
int fn_bObjectPositionNull(_stVector* pst_Vector)
{
    int b_Answer;
    /* line map: */
    /*   line 40 @ +0x000 */
    /*   line 41 @ +0x000 */
    /*   line 46 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* addr: 0x002664e0  size: 8 bytes */
int fn_bRetObjectLinkNull(void)
{
    /* TODO: decompile from asm/... */
}

/* addr: 0x002664f0  size: 8 bytes */
int fn_s32RetObjectSwitchNull(void)
{
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\Micros.c lines 27–31 */
/* addr: 0x00266500  size: 44 bytes */
void fn_vRetObjectExtraCoefNull(int* pr_Pitch, int* pr_Pan, int* pr_Vol)
{
    /* line map: */
    /*   line 27 @ +0x000 */
    /*   line 29 @ +0x000 */
    /*   line 31 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* addr: 0x00266530  size: 8 bytes */
unsigned char fn_u8RetObjectReverbNull(void)
{
    /* TODO: decompile from asm/... */
}
