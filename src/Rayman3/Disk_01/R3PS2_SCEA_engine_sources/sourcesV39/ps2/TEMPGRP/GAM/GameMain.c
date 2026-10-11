/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\GameMain.c */
/* Language: C */
/* Compiler: MW MIPS C Compiler */

#include <stddef.h>

/* Recovered aggregate layouts from MWCC debug type records. */
typedef struct tdstCouple_ tdstCouple_;
typedef struct tdstBrain_ tdstBrain_;
typedef struct AI_tdstMind_ AI_tdstMind_;
typedef struct DNM_stReport DNM_stReport;
typedef struct tdstAlways_ tdstAlways_;
typedef struct CINE_tdstCine_ CINE_tdstCine_;
typedef struct tdstAChannel_ tdstAChannel_;
typedef struct SECT_tdstListOfDNMLights_ SECT_tdstListOfDNMLights_;
typedef struct WP_tdstGraph_ WP_tdstGraph_;
typedef struct tdst3dData_ tdst3dData_;
typedef struct _stTimerCount _stTimerCount;
typedef struct tdstSubAnim_ tdstSubAnim_;
typedef struct stMorphData stMorphData;
typedef struct stMACDPID stMACDPID;
typedef struct MTH3D_tdstVector_ MTH3D_tdstVector_;
typedef struct GMT_tdstGameMaterial_ GMT_tdstGameMaterial_;
typedef struct HIE_tdstSuperObject_ HIE_tdstSuperObject_;
typedef union _SND_tduRefEvt _SND_tduRefEvt;
typedef struct GEO_tdstEdge_ GEO_tdstEdge_;
typedef struct anon_0 anon_0;
typedef struct tdstEngineTimerStructure_ tdstEngineTimerStructure_;
typedef struct anon_1 anon_1;
typedef struct tdstElement3d_ tdstElement3d_;
typedef struct MTH_stRotation MTH_stRotation;
typedef struct tdstEvent_ tdstEvent_;
typedef struct CINE_Manager_ CINE_Manager_;
typedef struct tdstAnim3d_ tdstAnim3d_;
typedef struct DNM_stDynamics DNM_stDynamics;
typedef struct SCT_tdstListOfSoundEvent_ SCT_tdstListOfSoundEvent_;
typedef struct tdstFrame3d_ tdstFrame3d_;
typedef struct tdstGraphChainedListNode_ tdstGraphChainedListNode_;
typedef struct DNM_stObstacle DNM_stObstacle;
typedef struct MTH_stMove MTH_stMove;
typedef struct SECT_tdstSector_ SECT_tdstSector_;

struct MTH3D_tdstVector_ {
    float xX; /* +0x0 */
    float xY; /* +0x4 */
    float xZ; /* +0x8 */
};

struct anon_0 {
    float m_xAngle; /* +0x0 */
    int m_stAxis; /* +0x4 */
};

struct anon_1 {
    float m_xAngle; /* +0x0 */
    int m_stAxis; /* +0x4 */
};

struct tdstFrame3d_ {
    int p_stArrayOfElts3d; /* +0x0 */
    int p_stAngularSpeedMatrix; /* +0x4 */
    int p_stLinearSpeedVector; /* +0x8 */
    int stHierarchy; /* +0xc */
    unsigned char _extractor_padding_00[4]; /* explicit retail gap; +0x10..0x13 */
    int stDeformation; /* +0x14 */
    unsigned char _extractor_padding_01[4]; /* explicit retail gap; +0x18..0x1b */
    int p_stAnim; /* +0x1c */
    unsigned short uwFrameNumber; /* +0x20 */
    unsigned char ucMatrixUpdated; /* +0x22 */
    unsigned char ucCacheEntry; /* +0x23 */
};

struct DNM_stObstacle {
    float m_xRate; /* +0x0 */
    MTH3D_tdstVector_ m_stNorm; /* +0x4 */
    MTH3D_tdstVector_ m_stContact; /* +0x10 */
    GMT_tdstGameMaterial_* hMyMaterial; /* +0x1c */
    GMT_tdstGameMaterial_* hCollidedMaterial; /* +0x20 */
    HIE_tdstSuperObject_* mp_stSupObj; /* +0x24 */
};

struct MTH_stRotation {
    float m_xAngle; /* +0x0 */
    MTH3D_tdstVector_ m_stAxis; /* +0x4 */
};

struct MTH_stMove {
    MTH3D_tdstVector_ m_stLinear; /* +0x0 */
    MTH_stRotation m_stAngular; /* +0xc */
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

struct tdstCouple_ {
    unsigned short wChild; /* +0x0 */
    unsigned short wFather; /* +0x2 */
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

struct tdstAlways_ {
    unsigned int ulMaxNumberOfAlways; /* +0x0 */
    /* aggregate */ int ALW_h_LstAlwaysModel; /* +0x4 */
    int d_stAlwaysSuperObject; /* +0x10 */
    int d_stAlwaysEngineObjectInit; /* +0x14 */
    int d_hAlwaysGenerator; /* +0x18 */
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

struct SECT_tdstListOfDNMLights_ {
    int hDNMLights; /* +0x0 */
    int hNextBrotherDyn; /* +0x4 */
    int hPrevBrotherDyn; /* +0x8 */
    int hFatherDyn; /* +0xc */
};

struct WP_tdstGraph_ {
    /* aggregate */ int m_hListOfNode; /* +0x0 */
};

struct tdst3dData_ {
    int h_InitialState; /* +0x0 */
    struct tdstState_* h_CurrentState; /* +0x4 */
    int h_FirstStateOfAction; /* +0x8 */
    int h_InitialObjectsTable; /* +0xc */
    int h_CurrentObjectsTable; /* +0x10 */
    int h_Family; /* +0x14 */
    unsigned char _extractor_padding_g0[0x8]; /* retail gap; +0x18..0x1f */
    unsigned char stGLIObjectMatrix[0x60]; /* +0x20 (aggregate) */
    int p_stGLIObjectAbsoluteMatrix; /* +0x80 */
    float xCurrentFrame; /* +0x84 */
    unsigned char ucRepeatAnimation; /* +0x88 */
    unsigned char ucNextEvent; /* +0x89 */
    unsigned char _extractor_padding_g1[0x2]; /* retail gap; +0x8a..0x8b */
    int d_ucEventActivation; /* +0x8c */
    int p_stCurrentHieCouples; /* +0x90 */
    unsigned short wCurrentHieNbCouples; /* +0x94 */
    unsigned short wSizeOfArrayOfElts3d; /* +0x96 */
    int h_StateInLastFrame; /* +0x98 */
    int h_WantedState; /* +0x9c */
    float xForcedFrame; /* +0xa0 */
    unsigned char ucFlagEndState; /* +0xa4 */
    unsigned char ucFlagEndOfAnim; /* +0xa5 */
    unsigned char _extractor_padding_g2[0x2]; /* retail gap; +0xa6..0xa7 */
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
    unsigned char _extractor_padding_g3[0x2]; /* retail gap; +0xee..0xef */
    int p_stShadowVisualMaterial; /* +0xf0 */
    int p_stShadowTexture; /* +0xf4 */
    float xShadowScaleX; /* +0xf8 */
    float xShadowScaleY; /* +0xfc */
    short xShadowQuality; /* +0x100 */
    unsigned short uwNbEngineFrameSinceLastMechEvent; /* +0x102 */
    unsigned char ucFrameRate; /* +0x104 */
    unsigned char ucFlagModifState; /* +0x105 */
    unsigned char _extractor_padding_g4[0x2]; /* retail gap; +0x106..0x107 */
    int lDrawMaskInit; /* +0x108 */
    int lDrawMask; /* +0x10c */
    int lLastComputeFrame; /* +0x110 */
    unsigned char _extractor_padding_g5[0xc]; /* retail gap; +0x114..0x11f */
    unsigned char stLastEventGlobalPosition[0x60]; /* +0x120 (aggregate) */
    unsigned char bAnimMatrixChanged; /* +0x180 */
    unsigned char ucUserEventFlags; /* +0x181 */
    unsigned char ucBrainComputationFrequency; /* +0x182 */
    char cBrainCounter; /* +0x183 */
    unsigned short uwBrainMainCounter; /* +0x184 */
    unsigned char ucTransparency; /* +0x186 */
    unsigned char bDiscreetSpeed; /* +0x187 */
    unsigned char stLightDirForDynamicShadow[0xc]; /* +0x188 (aggregate) */
    unsigned char ucIsShadowClosed; /* +0x194 */
    unsigned char ucShadowRecLevel; /* +0x195 */
    unsigned char ucLightComputationFrequency; /* +0x196 */
    char cLightCounter; /* +0x197 */
    unsigned char stSHWDeformationVector[0xc]; /* +0x198 (aggregate) */
    float xSHWHeight; /* +0x1a4 */
    float xDistNoInterpol; /* +0x1a8 */
    float xDistNoMorphing; /* +0x1ac */
    float xDistNoDEnv; /* +0x1b0 */
    unsigned char hForSubAnimInUseArray[0xc]; /* +0x1b4 (aggregate) */
    struct CINE_tdstCineActor_* h_CurrentCineActor; /* +0x1c0 */
    unsigned char hSkinMaterial[0x10]; /* +0x1c4 (aggregate) */
    unsigned int NbSkinMaterials; /* +0x1d4 */
    short xSkinIndex[4]; /* +0x1d8 */
};

struct _stTimerCount {
    unsigned long m_ulLowPart; /* +0x0 */
    unsigned long m_ulHighPart; /* +0x8 */
};

struct tdstSubAnim_ {
    int p_stSubAnim; /* +0x0 */
};

struct stMorphData {
    unsigned short uwChannelNumber; /* +0x0 */
    unsigned short uwFrameNumber; /* +0x2 */
    unsigned char ucNbTarget; /* +0x4 */
    unsigned char ucAlign[3]; /* +0x5 */
    short a_xIndexTargetMT[10]; /* +0x8 */
    unsigned char a_ucMorphingAmountMT[10]; /* +0x1c */
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

typedef struct DNM_stDynamicsBaseBlock DNM_stDynamicsBaseBlock;
typedef struct DNM_stDynamicsAdvancedBlock DNM_stDynamicsAdvancedBlock;

struct DNM_stDynamicsBaseBlock {
    int m_lObjectType; /* +0x0 */
    int m_pCurrentIdCard; /* +0x4 */
    unsigned int ulFlags; /* +0x8 */
    unsigned int ulEndFlags; /* +0xc */
    unsigned char _pad_10[0x170 - 0x10];
};

struct DNM_stDynamicsAdvancedBlock {
    unsigned char _pad_00[0x84];
    char m_cCollideCounter; /* +0x84 */
};

struct DNM_stDynamics {
    DNM_stDynamicsBaseBlock m_tdstDynamicsBaseBlock; /* +0x0 */
    DNM_stDynamicsAdvancedBlock m_tdstDynamicsAdvancedBlock; /* +0x170 */
};

struct SCT_tdstListOfSoundEvent_ {
    int hPointerOfSectorSO; /* +0x0 */
    _SND_tduRefEvt uSoundEvent; /* +0x4 */
};

struct tdstGraphChainedListNode_ {
    int GraphChainedListNodeInfo; /* +0x0 */
    int p_NextGraphChainedListNode; /* +0x4 */
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

/* Layouts below are taken from the matched PS2MC_Messages.cpp/sndvolume.cpp
 * debug records; only the members this file touches are spelled out. */
typedef struct tdstState_ tdstState_;
typedef struct CINE_tdstCineActor_ CINE_tdstCineActor_;
typedef struct tdstEngineObject_ tdstEngineObject_;
typedef struct tdstStandardGame_ tdstStandardGame_;
typedef struct tdstDynam_ tdstDynam_;
typedef struct tdstCineinfo_ tdstCineinfo_;
typedef struct tdstInternalStructurCineinfo_ tdstInternalStructurCineinfo_;
typedef struct tdstSectInfo_ tdstSectInfo_;
typedef struct tdstNodeMainCharacter_ tdstNodeMainCharacter_;
typedef struct MAT_tdstTransformation_ MAT_tdstTransformation_;
typedef struct tdstEngineStructure_ tdstEngineStructure_;

struct tdstState_ {
    tdstAnim3d_* p_stAnim; /* +0x0 */
};

struct CINE_tdstCineActor_ {
    unsigned char _pad_00[0x128];
    unsigned char bPlayingAnim; /* +0x128 */
};

struct tdstEngineObject_ {
    tdst3dData_* h_3dData; /* +0x0 */
    tdstStandardGame_* h_StandardGame; /* +0x4 */
    tdstDynam_* h_Dynam; /* +0x8 */
    tdstBrain_* h_Brain; /* +0xc */
    tdstCineinfo_* h_Cineinfo; /* +0x10 */
    int h_CollSet; /* +0x14 */
    int h_MSWay; /* +0x18 */
    int h_MSLight; /* +0x1c */
    tdstSectInfo_* h_SectInfo; /* +0x20 */
    int h_Micro; /* +0x24 */
    int h_MSSound; /* +0x28 */
};

struct tdstStandardGame_ {
    int otObjectFamilyType; /* +0x0 */
    int otObjectModelType; /* +0x4 */
    int otObjectPersonalType; /* +0x8 */
    HIE_tdstSuperObject_* h_SuperObject; /* +0xc */
    unsigned char eInitFlagWhenOutOfZone; /* +0x10 */
    unsigned char eInitFlagWhenDeadOrTaken; /* +0x11 */
    unsigned int ulLastTrame; /* +0x14 */
    unsigned int ubf32Capabilities; /* +0x18 */
    unsigned char ucTractionFactor; /* +0x1c */
    unsigned char ucHitPoints; /* +0x1d */
    unsigned char ucHitPointsMax; /* +0x1e */
    unsigned char ucHitPointsMaxMax; /* +0x1f */
    unsigned int ulCustomBits; /* +0x20 */
    unsigned int ulAICustomBits; /* +0x24 */
    unsigned char ucPlatFormType; /* +0x28 */
    unsigned char ucMiscFlags; /* +0x29 */
};

struct tdstInternalStructurCineinfo_ {
    unsigned char _pad_00[0x70];
    unsigned short uwDNMFlags; /* +0x70 */
};

struct tdstCineinfo_ {
    tdstInternalStructurCineinfo_* hInit; /* +0x0 */
    tdstInternalStructurCineinfo_* hCurrent; /* +0x4 */
    tdstInternalStructurCineinfo_* hVisibility; /* +0x8 */
    tdstInternalStructurCineinfo_* hWork; /* +0xc */
};

struct MAT_tdstTransformation_ {
    int eType; /* +0x0 */
    unsigned char _extractor_padding_00[12]; /* +0x4..0xf */
    float stCol_0[4]; /* +0x10 */
    float stCol_1[4]; /* +0x20 */
    float stCol_2[4]; /* +0x30 */
    MTH3D_tdstVector_ stCol_3; /* +0x40 */
};

struct HIE_tdstSuperObject_ {
    unsigned int ulTypeOfLinkedObject; /* +0x0 */
    tdstEngineObject_* hLinkedObject; /* +0x4 */
    HIE_tdstSuperObject_* hFirstElementDyn; /* +0x8 */
    HIE_tdstSuperObject_* hLastElementDyn; /* +0xc */
    int lNumberOfElementsDyn; /* +0x10 */
    HIE_tdstSuperObject_* hNextBrotherDyn; /* +0x14 */
    HIE_tdstSuperObject_* hPrevBrotherDyn; /* +0x18 */
    HIE_tdstSuperObject_* hFatherDyn; /* +0x1c */
    MAT_tdstTransformation_* hLocalMatrix; /* +0x20 */
    MAT_tdstTransformation_* hGlobalMatrix; /* +0x24 */
    int lLastComputeFrame; /* +0x28 */
    int lDrawModeMask; /* +0x2c */
    unsigned int ulFlags; /* +0x30 */
};

struct tdstEngineStructure_ {
    unsigned char _pad_00[0x68];
    tdstEngineTimerStructure_ stEngineTimer; /* +0x68 */
    unsigned char _pad_01[0x1b76 - 0xf0];
    char cCameraMode; /* +0x1b76 */
};

/* array */ int g_a_stStructureHandleFunction[12];
unsigned char g_ucGameModuleId;
unsigned int g_SCR_a9MemTable[9];
tdstAlways_ g_stAlways;
short hDevice;
/* aggregate */ int g_stDisplayVignetteDuringPlaying;
char g_cChooseLevel;
/* aggregate */ int g_st_3DOS_EntryActions;
/* aggregate */ int g_a_pfnDynamicFunction;
_SND_tduRefEvt g_stBeginMapSoundEvent;
int gp_lBeginMapSoundEventID;
int g_hStaticCollisionGeoObj;
int g_hCollisionGeoObj;
/* aggregate */ int g_stObjectTypes;
/* aggregate */ int g_a_hSOCurrentMainSector;
int gp_stLight;
unsigned char g_ucIsEdInGhostMode;
extern unsigned short g_DEMO_KeybTest;
int gp_stNewInactiveDynamicWorld;
int SECT_hNewFatherSector;
int gp_stNewDynamicWorld;
int gp_stNewActualWorld;
int gp_stInactiveDynamicWorld;
int SECT_hFatherSector;
int gp_stDynamicWorld;
int gp_stActualWorld;
char g_cIsLevelOk;
tdstEngineStructure_ g_stEngineStructure;
/* aggregate */ int g_st3DOSLinkTable;

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\GameMain.c lines 376–584 */
/* addr: 0x00261f70  size: 1040 bytes */
/* Debug signature and locals from the HitPts.c debug copy (GameMain.c
 * lines 371-592 were compiled into that object). */
unsigned char MC_fn_ucIsCharacterInMainCharacterList(HIE_tdstSuperObject_* hCharacter);
tdstAnim3d_* fn_p_stGetAnimInState(tdstState_* h_State);
unsigned char PLA_fn_bSkipCurrentFrame(HIE_tdstSuperObject_* p_stSuperObject);
void CINE_CheckEndCineActor(CINE_tdstCineActor_* hCineActor);
int fn_bSubAnimRunning(HIE_tdstSuperObject_* _hCharacter);
unsigned char PLA_fn_bDoAnimPlayerForCharacter(HIE_tdstSuperObject_* p_stSuperObject, unsigned char bNoDisplay, unsigned char _bHandleSkippedEventsIfRelevant);
void PLA_fn_vRefreshFrameNumber(HIE_tdstSuperObject_* p_stSuperObject);
void fn_vMakeCharacterReact(HIE_tdstSuperObject_* p_stSuperObj);
void DEMO_fn_vGetACompleteCharacterPosition(HIE_tdstSuperObject_* hSO);
void fn_vUpdateLight(HIE_tdstSuperObject_* hSupObject);
int CAM_fn_bSuperObjectIsACamera(HIE_tdstSuperObject_* _h_SprObj);
tdstNodeMainCharacter_* MC_fn_hGetFirstMainCharNode(void);
HIE_tdstSuperObject_* MC_fn_hGetCharacterInMainCharacterNode(tdstNodeMainCharacter_* hMainCharNode);
HIE_tdstSuperObject_* fn_h_SectInfoGetCurrentSector(tdstSectInfo_* h_SectInfo);
void fn_vSectInfoSetCurrentSector(tdstSectInfo_* h_SectInfo, HIE_tdstSuperObject_* hCurrentSector);
void fn_vInsertObjectInSectorList(HIE_tdstSuperObject_* hSector, HIE_tdstSuperObject_* hCharacter);
DNM_stDynamics* fn_p_stDynamGetDynamics(tdstDynam_* h_Dynam);
unsigned char fn_bIsTransitionInProgress(void);
void GAM_fn_vSectInfoTestChangeSectorForCharacter(HIE_tdstSuperObject_* _hCharacter);

/* The target clears COP0 register 24 (mtc0 zero, $24) around the anim
 * player; C cannot express the COP0 write.  As in ShadDraw.c, the closing
 * write carries the hazard nop and the opening one does not. */
inline void GAM_vClearCop0Register24(void)
{
    asm {
    .set noreorder
    mtc0 zero, $24
    }
}
inline void GAM_vClearCop0Register24Sync(void)
{
    asm { mtbpc zero }
}

#define MTH3D_M_vCopyVector(VectDest, VectSrc) \
    { (VectDest)->xX = (VectSrc)->xX; (VectDest)->xY = (VectSrc)->xY; (VectDest)->xZ = (VectSrc)->xZ; }

inline int DNM_bIsEnd(DNM_stDynamics* p) { int b = 0; if (p->m_tdstDynamicsBaseBlock.ulEndFlags & 2) b = 1; return b; }
inline int DNM_bIsFlag(DNM_stDynamics* p) { int b = 0; if (p->m_tdstDynamicsBaseBlock.ulFlags & 2) b = 1; return b; }

void fn_vTreatCharactersInSector(HIE_tdstSuperObject_* hCharacter)
{
    unsigned char bSectorChange = 1;
    tdst3dData_* h_Current3dData;
    unsigned int ulCurrentBits;
    unsigned char bNoDisplay;
    tdstAnim3d_* p_stCurrentAnim;
    tdstState_* p_stCurrentState;
    unsigned char bSkip;
    DNM_stDynamics* p_stDynamic;
    tdstDynam_* h_Dynam;
    volatile unsigned int stOldV[3];
    tdstSectInfo_* h_MainSectInfo;
    tdstEngineObject_* h_EngineObject;

    hCharacter->hLinkedObject->h_StandardGame->ulLastTrame = g_stEngineStructure.stEngineTimer.ulTrameNumber;
    stOldV[0] = ((unsigned int*)&hCharacter->hGlobalMatrix->stCol_3)[0];
    stOldV[1] = ((unsigned int*)&hCharacter->hGlobalMatrix->stCol_3)[1];
    stOldV[2] = ((unsigned int*)&hCharacter->hGlobalMatrix->stCol_3)[2];

    if (MC_fn_ucIsCharacterInMainCharacterList(hCharacter) && g_ucIsEdInGhostMode)
        return;

    if (g_DEMO_KeybTest != 2) {
        h_Current3dData = hCharacter->hLinkedObject->h_3dData;
        if (h_Current3dData != NULL) {
            p_stCurrentState = h_Current3dData->h_CurrentState;
            ulCurrentBits = hCharacter->hLinkedObject->h_StandardGame->ulCustomBits;
            p_stCurrentAnim = p_stCurrentState ? fn_p_stGetAnimInState(p_stCurrentState) : NULL;
            {
                int r3, r2, r1, t;
                r1 = r2 = r3 = 1;
                if (p_stCurrentAnim != NULL) {
                    t = 0;
                    if (ulCurrentBits & 0x2000) if (hCharacter->lNumberOfElementsDyn > 0) t = 1;
                    if (!t) r1 = 0;
                }
                if (!r1) {
                    t = 0;
                    if (ulCurrentBits & 0x800) if (ulCurrentBits & 0x1001) t = 1;
                    if (!t) r2 = 0;
                }
                if (!r2) {
                    t = 0;
                    if (ulCurrentBits & 0x40000) { int m = 0; if (hCharacter->hLinkedObject->h_StandardGame->ucMiscFlags & 0x80) m = 1; if (m & 0xff) { t = 1; } }
                    if (!t) r3 = 0;
                }
                bNoDisplay = r3;
            }
            if (h_Current3dData->h_CurrentCineActor != NULL)
                bNoDisplay = 0;

            if (!bNoDisplay || (ulCurrentBits & 0x800000)) {
                GAM_vClearCop0Register24();
                bSkip = PLA_fn_bSkipCurrentFrame(hCharacter);
                bSkip &= !h_Current3dData->bAnimMatrixChanged;
                bSkip |= h_Current3dData->ucFlagEndState;
                if (h_Current3dData->h_CurrentCineActor != NULL && h_Current3dData->h_CurrentCineActor->bPlayingAnim)
                    CINE_CheckEndCineActor(h_Current3dData->h_CurrentCineActor);
                bSkip &= !fn_bSubAnimRunning(hCharacter);
                if (!bSkip && h_Current3dData->ucFlagEndState)
                    h_Current3dData->xCurrentFrame = (unsigned short)(h_Current3dData->h_CurrentState->p_stAnim->uwNumberOfFrames - 1);
                if (!bSkip)
                    PLA_fn_bDoAnimPlayerForCharacter(hCharacter, bNoDisplay, 0);
                else
                    PLA_fn_vRefreshFrameNumber(hCharacter);
                GAM_vClearCop0Register24Sync();
            }
            fn_vMakeCharacterReact(hCharacter);
            if (hCharacter->hLinkedObject->h_StandardGame == NULL)
                goto end;
        }
    } else {
        DEMO_fn_vGetACompleteCharacterPosition(hCharacter);
    }

    fn_vUpdateLight(hCharacter);

    if (g_ucIsEdInGhostMode && CAM_fn_bSuperObjectIsACamera(hCharacter)) {
        h_MainSectInfo = MC_fn_hGetCharacterInMainCharacterNode(MC_fn_hGetFirstMainCharNode())->hLinkedObject->h_SectInfo;
        h_EngineObject = hCharacter->hLinkedObject;
        fn_vSectInfoSetCurrentSector(h_EngineObject->h_SectInfo, fn_h_SectInfoGetCurrentSector(h_MainSectInfo));
        fn_vInsertObjectInSectorList(fn_h_SectInfoGetCurrentSector(hCharacter->hLinkedObject->h_SectInfo), hCharacter);
        return;
    }

    if ((unsigned char)(hCharacter->ulFlags & 0x20))
        return;
    if (CAM_fn_bSuperObjectIsACamera(hCharacter) && g_stEngineStructure.cCameraMode == 1
        && (hCharacter->hLinkedObject->h_Cineinfo->hWork->uwDNMFlags & 0x40))
        return;

    h_Dynam = hCharacter->hLinkedObject->h_Dynam;
    if (h_Dynam != NULL) {
        p_stDynamic = fn_p_stDynamGetDynamics(h_Dynam);
        if (p_stDynamic != NULL) {
            if (DNM_bIsEnd(p_stDynamic) && DNM_bIsFlag(p_stDynamic))
                bSectorChange = p_stDynamic->m_tdstDynamicsAdvancedBlock.m_cCollideCounter == 0;
            else
                bSectorChange = 1;
        }
    }
    if (!fn_bIsTransitionInProgress() && bSectorChange)
        GAM_fn_vSectInfoTestChangeSectorForCharacter(hCharacter);
end:
    return;
}
