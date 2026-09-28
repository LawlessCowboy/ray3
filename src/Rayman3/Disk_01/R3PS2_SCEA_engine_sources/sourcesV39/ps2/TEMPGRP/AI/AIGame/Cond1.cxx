/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\Cond1.cxx */
/* Language: C */
/* Compiler: MW MIPS C Compiler */

#include <stddef.h>

/* The retail null-vector test uses abs.s for each component. */
inline float MTH_xAbs(float xValue)
{
    float xResult;
    asm { abs.s xResult, xValue }
    return xResult;
}

/* Recovered aggregate layouts from MWCC debug type records. */
typedef struct DNM_stDynamics DNM_stDynamics;
typedef struct DNM_stReport DNM_stReport;
typedef struct HIE_tdstSuperObject_ HIE_tdstSuperObject_;
typedef struct MTH3D_tdstVector_ MTH3D_tdstVector_;
typedef struct WP_tdstWayPoint_ WP_tdstWayPoint_;
typedef struct tdstBrain_ tdstBrain_;
typedef struct tdstCollSet_ tdstCollSet_;
typedef struct tdstDynam_ tdstDynam_;
typedef struct tdstNodeInterpret_ tdstNodeInterpret_;
typedef struct tdstStandardGame_ tdstStandardGame_;
struct tdst3dData_;
struct tdstCineinfo_;
struct tdstMSWay_;
struct tdstMSLight_;
struct tdstSectInfo_;
struct tdstMicro_;
struct tdstMSSound_;
struct tdstEngineObject_ {
    tdst3dData_* h_3dData;
    tdstStandardGame_* h_StandardGame;
    tdstDynam_* h_Dynam;
    tdstBrain_* h_Brain;
    tdstCineinfo_* h_Cineinfo;
    tdstCollSet_* h_CollSet;
    tdstMSWay_* h_MSWay;
    tdstMSLight_* h_MSLight;
    tdstSectInfo_* h_SectInfo;
    tdstMicro_* h_Micro;
    tdstMSSound_* h_MSSound;
};

typedef int tdeCondId_;
union tduIdInterpret_ { tdeCondId_ eCondId; };
union tduGetSetParamForNode_ { int lValue; unsigned int ulValue; float xValue; void* pValue; unsigned char ucValue; };
union tduNodeDummy_ { tduIdInterpret_ uId; tduGetSetParamForNode_ uParam; };
struct tdstNodeInterpret_ {
    tduNodeDummy_ uDummy;
    unsigned short uwNodeToSkip;
    unsigned char ucDepth;
    unsigned char eType;
};
typedef struct {
    unsigned char pad[0x1b71];
    unsigned char xDemoMode;
} tdstEngineStructure_;
extern tdstEngineStructure_ g_stEngineStructure;
struct MTH3D_tdstVector_ {
    float xX;
    float xY;
    float xZ;
};
/* Recovered WPWayPt.c layout. */
struct WP_tdstWayPoint_ {
    MTH3D_tdstVector_ m_stVertex;
    float m_xRadius;
    HIE_tdstSuperObject_* m_hSuperObject;
};
extern "C" void WP_fnv_WayPoint_ComputeLocation(WP_tdstWayPoint_*, MTH3D_tdstVector_*);
struct GMT_tdstGameMaterial_;
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
/* Dynamics layouts recovered in MECTools.c, including debug block offsets. */
typedef enum MAT_tdeTranformationType_ {
    MAT_eTransform_Uninitialized = 0, MAT_eTransform_Identity = 1,
    MAT_eTransform_Translation = 2, MAT_eTransform_Zoom = 3,
    MAT_eTransform_Scale = 4, MAT_eTransform_Rotation = 5,
    MAT_eTransform_RotationZoom = 6, MAT_eTransform_RotationScale = 7,
    MAT_eTransform_ComplexRotationScale = 8, MAT_eTransform_Undefined = 9
} MAT_tdeTranformationType_;
struct MTH4D_tdstVector_ {
    float xX; /* +0x0 */
    float xY; /* +0x4 */
    float xZ; /* +0x8 */
    float xW; /* +0xc */
} __attribute__((aligned(16)));

struct MTH4D_tdstMatrix_ {
    MTH4D_tdstVector_ stCol_0; /* +0x0 */
    MTH4D_tdstVector_ stCol_1; /* +0x10 */
    MTH4D_tdstVector_ stCol_2; /* +0x20 */
    MTH4D_tdstVector_ stCol_3; /* +0x30 */
};

struct MAT_tdstTransformation_ {
    MAT_tdeTranformationType_ eType; /* +0x0 */
    unsigned char _extractor_padding_00[12]; /* implicitly added by extractor; +0x4..0xf */
    MTH4D_tdstMatrix_ stTransformMatrix; /* +0x10 */
    MTH4D_tdstVector_ stScaleVector; /* +0x50 */
};

struct MTH3D_tdstMatrix_ {
    MTH3D_tdstVector_ stCol_0; /* +0x0 */
    MTH3D_tdstVector_ stCol_1; /* +0xc */
    MTH3D_tdstVector_ stCol_2; /* +0x18 */
};

struct DNM_stDynamicsBaseBlock {
    int m_lObjectType; /* +0x0 */
    int m_pCurrentIdCard; /* +0x4 */
    unsigned int ulFlags; /* +0x8 */
    unsigned int ulEndFlags; /* +0xc */
    float m_xGravity; /* +0x10 */
    float m_xSlopeLimit; /* +0x14 */
    float m_xCosSlope; /* +0x18 */
    float m_xSlide; /* +0x1c */
    float m_xRebound; /* +0x20 */
    MTH3D_tdstVector_ m_stImposeSpeed; /* +0x24 */
    MTH3D_tdstVector_ m_stProposeSpeed; /* +0x30 */
    MTH3D_tdstVector_ m_stPreviousSpeed; /* +0x3c */
    MTH3D_tdstVector_ m_stScale; /* +0x48 */
    MTH3D_tdstVector_ m_stSpeedAnim; /* +0x54 */
    MTH3D_tdstVector_ m_stSafeTranslation; /* +0x60 */
    MTH3D_tdstVector_ m_stAddTranslation; /* +0x6c */
    unsigned char _extractor_padding_matrix_align[8]; /* implicitly added by extractor; +0x78..0x7f */
    MAT_tdstTransformation_ m_stPreviousMatrix; /* +0x80 */
    MAT_tdstTransformation_ m_stCurrentMatrix; /* +0xe0 */
    MTH3D_tdstMatrix_ m_stImposeRotationMatrix; /* +0x140 */
    unsigned char m_ucNbFrame; /* +0x164 */
    DNM_stReport* m_pstReport; /* +0x168 */
    unsigned char _extractor_padding_advanced_align[4]; /* implicitly added by extractor; +0x16c..0x16f */
};

struct DNM_stDynamicsAdvancedBlock {
    float m_xInertiaX; /* +0x0 */
    float m_xInertiaY; /* +0x4 */
    float m_xInertiaZ; /* +0x8 */
    float m_xStreamPrority; /* +0xc */
    float m_xStreamFactor; /* +0x10 */
    float m_xSlideFactorX; /* +0x14 */
    float m_xSlideFactorY; /* +0x18 */
    float m_xSlideFactorZ; /* +0x1c */
    float m_xPreviousSlide; /* +0x20 */
    MTH3D_tdstVector_ m_stMaxSpeed; /* +0x24 */
    MTH3D_tdstVector_ m_stStreamSpeed; /* +0x30 */
    MTH3D_tdstVector_ m_stAddSpeed; /* +0x3c */
    MTH3D_tdstVector_ m_stLimit; /* +0x48 */
    MTH3D_tdstVector_ m_stCollisionTranslation; /* +0x54 */
    MTH3D_tdstVector_ m_stInertiaTranslation; /* +0x60 */
    MTH3D_tdstVector_ m_stGroundNormal; /* +0x6c */
    MTH3D_tdstVector_ m_stWallNormal; /* +0x78 */
    char m_cCollideCounter; /* +0x84 */
};

struct anon_0 {
    float m_xAngle; /* +0x0 */
    MTH3D_tdstVector_ m_stAxis; /* +0x4 */
};

struct anon_1 {
    float m_xAngle; /* +0x0 */
    MTH3D_tdstVector_ m_stAxis; /* +0x4 */
};

struct stMACDPID {
    float m_xData0; /* +0x0 */
    MTH3D_tdstVector_ m_stData1; /* +0x4 */
    MTH3D_tdstVector_ m_stData2; /* +0x10 */
    MTH3D_tdstVector_ m_stData3; /* +0x1c */
    float m_xData3; /* +0x28 */
    float m_xData4; /* +0x2c */
    float m_xData5; /* +0x30 */
    anon_0 m_stData6; /* +0x34 */
    anon_1 m_stData7; /* +0x44 */
    char m_cData8; /* +0x54 */
    unsigned short m_uwData9; /* +0x56 */
    MTH3D_tdstVector_ m_stData10; /* +0x58 */
    float m_xData11; /* +0x64 */
    MTH3D_tdstVector_ m_stData12; /* +0x68 */
    float m_xData13; /* +0x74 */
    unsigned char m_bData14; /* +0x78 */
};

struct DNM_stDynamicsComplexBlock {
    float m_xTiltIntensity; /* +0x0 */
    float m_xTiltInertia; /* +0x4 */
    float m_xTiltOrigin; /* +0x8 */
    float m_xTiltAngle; /* +0xc */
    float m_xHangingLimit; /* +0x10 */
    MTH3D_tdstVector_ m_stContact; /* +0x14 */
    MTH3D_tdstVector_ m_stFallTranslation; /* +0x20 */
    stMACDPID m_stExternalDatas; /* +0x2c */
    HIE_tdstSuperObject_* m_hPlatform; /* +0xa8 */
    unsigned char _extractor_padding_00[4]; /* implicitly added by extractor; +0xac..0xaf */
    MAT_tdstTransformation_ m_stAbsolutePreviousMatrix; /* +0xb0 */
    MAT_tdstTransformation_ m_stPrevPreviousMatrix; /* +0x110 */
};

struct DNM_stDynamics {
    DNM_stDynamicsBaseBlock m_tdstDynamicsBaseBlock; /* +0x0 */
    DNM_stDynamicsAdvancedBlock m_tdstDynamicsAdvancedBlock; /* +0x170 */
    unsigned char _extractor_padding_complex_align[8]; /* +0x1f8..0x1ff */
    DNM_stDynamicsComplexBlock m_tdstDynamicsComplexBlock; /* +0x200 */
};
/* Shared AI parameter layout recovered in the adjacent interpreter sources. */
struct GLI_tdstLight_;
struct MAT_tdstTransformation_;
/* Recovered HIE layout, shared with Functio1.cxx and MECTools.c. */
struct GEO_tdstGeometricObject_;
struct PO_tdstPhysicalObject_;
struct IPO_tdstInstanciatedPhysicalObject_;
struct SECT_tdstSector_;
struct HIE_tdstModifierObject_;
union HIE_tduLinkedObject_ {
    HIE_tdstSuperObject_* p_stSuperObject;
    GEO_tdstGeometricObject_* p_stGeometricObject;
    PO_tdstPhysicalObject_* p_stPhysicalObject;
    IPO_tdstInstanciatedPhysicalObject_* p_stInstanciatedPhysicalObject;
    SECT_tdstSector_* p_stSector;
    tdstEngineObject_* p_stCharacter;
    GLI_tdstLight_* p_stLight;
    HIE_tdstModifierObject_* p_stModifierObject;
    int p_Void;
};
struct HIE_tdstSuperObject_ {
    unsigned int ulTypeOfLinkedObject;
    HIE_tduLinkedObject_ hLinkedObject;
    HIE_tdstSuperObject_* hFirstElementDyn;
    HIE_tdstSuperObject_* hLastElementDyn;
    int lNumberOfElementsDyn;
    HIE_tdstSuperObject_* hNextBrotherDyn;
    HIE_tdstSuperObject_* hPrevBrotherDyn;
    HIE_tdstSuperObject_* hFatherDyn;
    MAT_tdstTransformation_* hLocalMatrix;
    MAT_tdstTransformation_* hGlobalMatrix;
    int lLastComputeFrame;
    int lDrawModeMask;
    unsigned int ulFlags;
    int hVisualBoundingVolume;
    int hCollideBoundingVolume;
    MTH3D_tdstVector_ stSemiLookAtVector;
    float fTransparenceLevel;
    unsigned int ulOutlineColor;
    int lDisplayPrioriry;
    int lIL_Status;
    MTH3D_tdstVector_ stIL_AmbientColor;
    MTH3D_tdstVector_ stIL_ParallelDirection;
    MTH3D_tdstVector_ stIL_ParallelColor;
    unsigned char ucSuperImposedOnWhichViewport;
    unsigned char bIsSPO;
    unsigned char xTransition;
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
    unsigned char ucTransparencyZoneMin; /* +0x2a */
    unsigned char ucTransparencyZoneMax; /* +0x2b */
    unsigned int ulSaveCustomBits; /* +0x2c */
    unsigned int ulSaveAICustomBits; /* +0x30 */
    unsigned char ucSaveHitPoints; /* +0x34 */
    unsigned char ucSaveHitPointsMax; /* +0x35 */
    unsigned char ucSaveMiscFlags; /* +0x36 */
    unsigned char ucTooFarLimit; /* +0x37 */
    unsigned char ucImportance; /* +0x38 */
    unsigned char ucOptional; /* +0x39 */
    float a_xCustomFloats[2]; /* +0x3c */
    int a_lCustomLongs[2]; /* +0x44 */
    MTH3D_tdstVector_ a_stCustomVectors[2]; /* +0x4c */
};
typedef enum tdeVariableType_ { eVariableType_Dummy = 0 } tdeVariableType_;
typedef union tduGetSetParam_ {
    int lValue;
    unsigned int ulValue;
    float xValue;
    MTH3D_tdstVector_ stVectorValue;
    void* pValue;
} tduGetSetParam_;
typedef struct tdstGetSetParam_ {
    tduGetSetParam_ uParam;
    tdeVariableType_ eType;
} tdstGetSetParam_;
extern "C" tdstNodeInterpret_* fn_p_stEvalTree(HIE_tdstSuperObject_*, tdstNodeInterpret_*, tdstGetSetParam_*);
extern "C" int INO_fn_wIsJoyConnected(int JoyNb);
extern "C" unsigned char fn_bIsLoadInProgress(void);
extern "C" unsigned char IPT_fn_bAButtonPadJustPressed(void);
extern "C" unsigned char IPT_fn_bAKeyJustPressed(void);
extern "C" int SAV2_LastError(void);
struct GMT_tdstCollideMaterial_;
extern "C" int GMT_fn_b_ulIsValid(GMT_tdstGameMaterial_*);
extern "C" GMT_tdstCollideMaterial_* GMT_fn_hGetCollideMaterial(GMT_tdstGameMaterial_*);
extern "C" unsigned short GMT_fn_hGetCollideMaterialIdentifier(GMT_tdstCollideMaterial_*);
extern "C" DNM_stReport* fn_pstGetDNMReport(HIE_tdstSuperObject_*);
extern "C" unsigned int fn_ulGetCapabilities(tdstEngineObject_*);
extern "C" int fn_bTestSubAnim(HIE_tdstSuperObject_*, unsigned int);
extern "C" int fn_bTestSubAnimNearEnd(HIE_tdstSuperObject_*, unsigned int);
extern "C" DNM_stDynamics* fn_p_stDynamGetDynamics(tdstDynam_*);
extern "C" unsigned char fn_bCollSetGetCharacterNoCollisionWithMap(tdstCollSet_*);
extern "C" unsigned char fn_bCollSetGetCharacterNoCollisionWithProjectile(tdstCollSet_*);
extern "C" unsigned char fn_bCollSetGetCharacterNoCollisionWithSecondaryCharacter(tdstCollSet_*);
extern "C" unsigned char fn_bCollSetGetCharacterNoCollisionWithMainCharacter(tdstCollSet_*);
extern "C" unsigned char fn_bCollSetGetCharacterNoCollisionWithOtherSectors(tdstCollSet_*);
extern "C" int PLA_fn_bTestIfEndOfAnim(HIE_tdstSuperObject_*);
extern "C" int PLA_fn_bTestIfEndOfAction(HIE_tdstSuperObject_*);
struct tdstState_;
extern "C" unsigned char fn_ucGetStateCustomBits(tdstState_*);
struct tdstObjectsTablesList_;
struct tdstFamilyList_;
/* Recovered 3dData prefix through h_Family; only accessed through pointers. */
struct tdst3dData_ {
    tdstState_* h_InitialState;
    tdstState_* h_CurrentState;
    tdstState_* h_FirstStateOfAction;
    tdstObjectsTablesList_* h_InitialObjectsTable;
    tdstObjectsTablesList_* h_CurrentObjectsTable;
    tdstFamilyList_* h_Family;
};
struct AI_tdstAIModel_;
struct tdstIntelligence_;
struct tdstDsgMem_;
struct GMT_tdstGameMaterial_;
struct AI_tdstMind_ {
    AI_tdstAIModel_* p_stAIModel;
    tdstIntelligence_* p_stIntelligence;
    tdstIntelligence_* p_stReflex;
    tdstDsgMem_* p_stDsgMem;
    unsigned char bDoingIntel;
};
extern "C" unsigned char fn_ucSetDsgVar(unsigned char, unsigned char, AI_tdstMind_*, tdstGetSetParam_*);
extern "C" tdstNodeInterpret_* fn_p_stOperatorGetPerso(HIE_tdstSuperObject_*, tdstNodeInterpret_*, HIE_tdstSuperObject_**);
extern "C" tdstNodeInterpret_* fn_p_stSkipThisArgument(tdstNodeInterpret_*);
struct tdstBrain_ {
    AI_tdstMind_* p_stMind;
    GMT_tdstGameMaterial_* hLastCollidedGoThroughMaterial;
    unsigned char bWarnMechanicsFlag;
    unsigned char bActiveDuringTransition;
};
extern "C" int PLA_fn_bTestCurrentAction(HIE_tdstSuperObject_*, tdstState_*);
extern "C" int SAV2_CheckMCStatus(int port);
extern "C" void fn_vOnAIErm_M_UpdateLastError(int FatalErrorNum, char* szMsg);
extern "C" HIE_tdstSuperObject_* fn_h_StandardGameGetSuperObject(tdstStandardGame_*);
extern "C" unsigned char GAM_fn_bIsCharacterActive(HIE_tdstSuperObject_*);
extern "C" unsigned char fn_ucGetConditionUltraOperator(tdeCondId_);
extern "C" void fn_vGetUltraOperatorPerso(int, HIE_tdstSuperObject_*, HIE_tdstSuperObject_**);
extern "C" int PLA_fn_bTestIfActorIsInSmoothAnim(HIE_tdstSuperObject_*);
struct tdstNodeMainCharacter_;
extern "C" tdstNodeMainCharacter_* MC_fn_hGetFirstMainCharNode(void);
extern "C" HIE_tdstSuperObject_* MC_fn_hGetCharacterInMainCharacterNode(tdstNodeMainCharacter_*);
extern "C" int fn_bTestCustomBitSubAnim(HIE_tdstSuperObject_*, unsigned int, unsigned int);

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\Cond1.cxx lines 1085–1116 */
/* addr: 0x0020dc40  size: 108 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1085
 *   +0x0004 -> line 1095
 *   +0x0008 -> line 1085
 *   +0x0018 -> line 1086
 *   +0x001c -> line 1095
 *   +0x002c -> line 1101
 *   +0x0034 -> line 1104
 *   +0x0044 -> line 1106
 *   +0x004c -> line 1114
 *   +0x0054 -> line 1115
 *   +0x0058 -> line 1116
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
tdstNodeInterpret_* fn_p_stCheckMCStatus(HIE_tdstSuperObject_* p_SuperObjPerso, tdstNodeInterpret_* p_stTree, int* p_lValue)
{
    tdstGetSetParam_ stParam;
    tdeCondId_ eCondId;
    eCondId = (p_stTree - 1)->uDummy.uId.eCondId;
    switch (eCondId) {
    case 0x98:
        p_stTree = fn_p_stEvalTree(p_SuperObjPerso, p_stTree, &stParam);
        *p_lValue = SAV2_CheckMCStatus(stParam.uParam.lValue);
        return p_stTree;
    default:
        fn_vOnAIErm_M_UpdateLastError(43, 0);
        return p_stTree;
    }
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\Cond1.cxx lines 1054–1080 */
/* addr: 0x0020dcb0  size: 96 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1054
 *   +0x0004 -> line 1064
 *   +0x0008 -> line 1054
 *   +0x0018 -> line 1055
 *   +0x001c -> line 1064
 *   +0x002c -> line 1069
 *   +0x0038 -> line 1070
 *   +0x0040 -> line 1078
 *   +0x0048 -> line 1079
 *   +0x004c -> line 1080
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
/* Target callback uses a1/a2 for tree/result; debug omitted unused a0. */
tdstNodeInterpret_* fn_p_stCheckSAV2LastError(HIE_tdstSuperObject_* p_SuperObjPerso, tdstNodeInterpret_* p_stTree, int* p_lValue)
{
    tdeCondId_ eCondId;
    eCondId = (p_stTree - 1)->uDummy.uId.eCondId;
    switch (eCondId) {
    case 0x97:
        *p_lValue = SAV2_LastError();
        return p_stTree;
    default:
        fn_vOnAIErm_M_UpdateLastError(43, 0);
        return p_stTree;
    }
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\Cond1.cxx lines 1029–1046 */
/* addr: 0x0020dd10  size: 60 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1029
 *   +0x0014 -> line 1034
 *   +0x0024 -> line 1044
 *   +0x0028 -> line 1046
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
/* Target callback uses a1/a2 for tree/result; debug omitted unused a0. */
tdstNodeInterpret_* fn_p_stLoadInProgress(HIE_tdstSuperObject_* p_SuperObjPerso, tdstNodeInterpret_* p_stTree, int* p_lValue)
{
    *p_lValue = fn_bIsLoadInProgress();
    return p_stTree;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\Cond1.cxx lines 971–1005 */
/* addr: 0x0020dd50  size: 192 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 971
 *   +0x0024 -> line 972
 *   +0x0028 -> line 979
 *   +0x0040 -> line 981
 *   +0x0054 -> line 988
 *   +0x0060 -> line 989
 *   +0x0064 -> line 988
 *   +0x0068 -> line 991
 *   +0x0078 -> line 994
 *   +0x0090 -> line 995
 *   +0x0098 -> line 1003
 *   +0x00a0 -> line 1004
 *   +0x00a4 -> line 1005
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
tdstNodeInterpret_* fn_p_stCheckCustomBitSubAnim(HIE_tdstSuperObject_* p_SuperObjPerso, tdstNodeInterpret_* p_stTree, int* p_lValue)
{
    tdeCondId_ eCondId;
    HIE_tdstSuperObject_* hNewSuperObjPerso;
    tdstGetSetParam_ stParam;
    unsigned int ulSubAnimNumber;
    eCondId = (p_stTree - 1)->uDummy.uId.eCondId;
    fn_vGetUltraOperatorPerso(fn_ucGetConditionUltraOperator(eCondId), p_SuperObjPerso, &hNewSuperObjPerso);
    switch (eCondId) {
    case 0x8d:
        p_stTree = fn_p_stEvalTree(p_SuperObjPerso, p_stTree, &stParam);
        ulSubAnimNumber = stParam.uParam.ulValue;
        p_stTree = fn_p_stEvalTree(p_SuperObjPerso, p_stTree, &stParam);
        *p_lValue = fn_bTestCustomBitSubAnim(hNewSuperObjPerso, ulSubAnimNumber, stParam.uParam.lValue);
        return p_stTree;
    default:
        fn_vOnAIErm_M_UpdateLastError(43, 0);
        return p_stTree;
    }
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\Cond1.cxx lines 920–953 */
/* addr: 0x0020de10  size: 276 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 920
 *   +0x0024 -> line 921
 *   +0x0028 -> line 928
 *   +0x0040 -> line 930
 *   +0x006c -> line 933
 *   +0x0078 -> line 934
 *   +0x0090 -> line 935
 *   +0x009c -> line 938
 *   +0x00a8 -> line 939
 *   +0x00bc -> line 940
 *   +0x00c4 -> line 943
 *   +0x00d0 -> line 944
 *   +0x00e4 -> line 945
 *   +0x00ec -> line 951
 *   +0x00f4 -> line 952
 *   +0x00f8 -> line 953
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
tdstNodeInterpret_* fn_p_stCheckSubAnim(HIE_tdstSuperObject_* p_SuperObjPerso, tdstNodeInterpret_* p_stTree, int* p_lValue)
{
    tdeCondId_ eCondId;
    HIE_tdstSuperObject_* hNewSuperObjPerso;
    tdstGetSetParam_ stParam;
    eCondId = p_stTree[-1].uDummy.uId.eCondId;
    fn_vGetUltraOperatorPerso(fn_ucGetConditionUltraOperator(eCondId), p_SuperObjPerso, &hNewSuperObjPerso);
    switch (eCondId) {
    case 0x8c:
        p_stTree = fn_p_stEvalTree(p_SuperObjPerso, p_stTree, &stParam);
        *p_lValue = (fn_bTestSubAnim(hNewSuperObjPerso, stParam.uParam.lValue) != 0) ^ 1;
        return p_stTree;
    case 0x8e:
        p_stTree = fn_p_stEvalTree(p_SuperObjPerso, p_stTree, &stParam);
        *p_lValue = fn_bTestSubAnim(hNewSuperObjPerso, stParam.uParam.lValue);
        return p_stTree;
    case 0x8f:
        p_stTree = fn_p_stEvalTree(p_SuperObjPerso, p_stTree, &stParam);
        *p_lValue = fn_bTestSubAnimNearEnd(hNewSuperObjPerso, stParam.uParam.lValue);
        return p_stTree;
    default:
        fn_vOnAIErm_M_UpdateLastError(43, 0);
        return p_stTree;
    }
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\Cond1.cxx lines 868–902 */
/* addr: 0x0020df30  size: 184 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 868
 *   +0x001c -> line 876
 *   +0x0038 -> line 879
 *   +0x0050 -> line 882
 *   +0x0058 -> line 885
 *   +0x0060 -> line 886
 *   +0x0068 -> line 890
 *   +0x007c -> line 892
 *   +0x0090 -> line 893
 *   +0x0098 -> line 897
 *   +0x009c -> line 901
 *   +0x00a0 -> line 902
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
tdstNodeInterpret_* fn_p_stTooFarCondition(HIE_tdstSuperObject_* p_SuperObjPerso, tdstNodeInterpret_* p_stTree, int* p_lValue)
{
    tdstStandardGame_* param0;
    HIE_tdstSuperObject_* hNewSuperObjPerso;
    fn_vGetUltraOperatorPerso(fn_ucGetConditionUltraOperator((p_stTree - 1)->uDummy.uId.eCondId), p_SuperObjPerso, &hNewSuperObjPerso);
    if (hNewSuperObjPerso == MC_fn_hGetCharacterInMainCharacterNode(MC_fn_hGetFirstMainCharNode()))
        *p_lValue = 0;
    else {
        param0 = hNewSuperObjPerso->hLinkedObject.p_stCharacter->h_StandardGame;
        if (param0) {
            if (param0->ulCustomBits & 0x4c0000)
                *p_lValue = (unsigned char)((param0->ucMiscFlags & 0x80) ? 1 : 0);
            else
                *p_lValue = 0;
        }
    }
    return p_stTree;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\Cond1.cxx lines 823–825 */
/* addr: 0x0020dff0  size: 20 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 823
 *   +0x0004 -> line 824
 *   +0x0008 -> line 823
 *   +0x000c -> line 825
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
tdstNodeInterpret_* fn_p_stDemoCondition(void* p_unknown, tdstNodeInterpret_* p_stTree, int* p_lValue)
{
    *p_lValue = g_stEngineStructure.xDemoMode;
    return p_stTree;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\Cond1.cxx lines 812–816 */
/* addr: 0x0020e010  size: 60 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 812
 *   +0x0014 -> line 813
 *   +0x0024 -> line 814
 *   +0x0028 -> line 816
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
/* Target callback uses a1/a2 for tree/result; debug omitted unused a0. */
tdstNodeInterpret_* fn_p_stAButtonPadJustPressed(HIE_tdstSuperObject_* p_SuperObjPerso, tdstNodeInterpret_* p_stTree, int* p_lValue)
{
    *p_lValue = IPT_fn_bAButtonPadJustPressed();
    return p_stTree;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\Cond1.cxx lines 799–807 */
/* addr: 0x0020e050  size: 60 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 799
 *   +0x0014 -> line 801
 *   +0x0024 -> line 805
 *   +0x0028 -> line 807
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
/* Target callback uses a1/a2 for tree/result; debug omitted unused a0. */
tdstNodeInterpret_* fn_p_stAKeyJustPressed(HIE_tdstSuperObject_* p_SuperObjPerso, tdstNodeInterpret_* p_stTree, int* p_lValue)
{
    *p_lValue = IPT_fn_bAKeyJustPressed();
    return p_stTree;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\Cond1.cxx lines 777–792 */
/* addr: 0x0020e090  size: 68 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 777
 *   +0x0014 -> line 781
 *   +0x001c -> line 785
 *   +0x002c -> line 790
 *   +0x0030 -> line 792
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
tdstNodeInterpret_* fn_p_stAJoypadIsConnected(HIE_tdstSuperObject_* p_SuperObjPerso, tdstNodeInterpret_* p_stTree, int* p_lValue)
{
    tdstGetSetParam_ stParam;
    p_stTree = fn_p_stEvalTree(p_SuperObjPerso, p_stTree, &stParam);
    *p_lValue = INO_fn_wIsJoyConnected(stParam.uParam.lValue);
    return p_stTree;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\Cond1.cxx lines 720–757 */
/* addr: 0x0020e0e0  size: 244 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 720
 *   +0x0020 -> line 721
 *   +0x0028 -> line 728
 *   +0x0040 -> line 730
 *   +0x0050 -> line 731
 *   +0x0070 -> line 735
 *   +0x008c -> line 736
 *   +0x0094 -> line 741
 *   +0x00a0 -> line 742
 *   +0x00c4 -> line 747
 *   +0x00cc -> line 755
 *   +0x00d4 -> line 756
 *   +0x00d8 -> line 757
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
tdstNodeInterpret_* fn_p_stIsOf(HIE_tdstSuperObject_* p_SuperObjPerso, tdstNodeInterpret_* p_stTree, int* p_lValue)
{
    tdeCondId_ eCondId;
    HIE_tdstSuperObject_* hNewSuperObjPerso;
    tdstGetSetParam_ stParam;
    int bResult;
    tdstBrain_* hBrain;
    eCondId = p_stTree[-1].uDummy.uId.eCondId;
    fn_vGetUltraOperatorPerso(fn_ucGetConditionUltraOperator(eCondId), p_SuperObjPerso, &hNewSuperObjPerso);
    p_stTree = fn_p_stEvalTree(p_SuperObjPerso, p_stTree, &stParam);
    switch (eCondId) {
    case 0x84:
        *p_lValue = hNewSuperObjPerso->hLinkedObject.p_stCharacter->h_3dData->h_Family == stParam.uParam.pValue;
        return p_stTree;
    case 0x85:
        hBrain = hNewSuperObjPerso->hLinkedObject.p_stCharacter->h_Brain;
        {
            bResult = hBrain != 0;
            if (bResult)
                bResult = hBrain->p_stMind->p_stAIModel == stParam.uParam.pValue;
            *p_lValue = bResult;
        }
        return p_stTree;
    default:
        fn_vOnAIErm_M_UpdateLastError(43, 0);
        return p_stTree;
    }
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\Cond1.cxx lines 670–708 */
/* addr: 0x0020e1e0  size: 260 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 670
 *   +0x0024 -> line 672
 *   +0x0028 -> line 678
 *   +0x0040 -> line 680
 *   +0x0044 -> line 681
 *   +0x0048 -> line 680
 *   +0x004c -> line 681
 *   +0x0084 -> line 684
 *   +0x0090 -> line 685
 *   +0x0098 -> line 688
 *   +0x00a4 -> line 689
 *   +0x00ac -> line 692
 *   +0x00b8 -> line 693
 *   +0x00c0 -> line 696
 *   +0x00cc -> line 697
 *   +0x00d4 -> line 700
 *   +0x00e4 -> line 707
 *   +0x00e8 -> line 708
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
tdstNodeInterpret_* fn_p_stIsCollisionFlag(HIE_tdstSuperObject_* p_SuperObjPerso, tdstNodeInterpret_* p_stTree, int* p_lValue)
{
    tdstCollSet_* hCollSet;
    tdeCondId_ eCondId;
    HIE_tdstSuperObject_* hNewSuperObjPerso;
    eCondId = p_stTree[-1].uDummy.uId.eCondId;
    fn_vGetUltraOperatorPerso(fn_ucGetConditionUltraOperator(eCondId), p_SuperObjPerso, &hNewSuperObjPerso);
    hCollSet = hNewSuperObjPerso->hLinkedObject.p_stCharacter->h_CollSet;
    switch (eCondId) {
    case 0x7f:
        *p_lValue = fn_bCollSetGetCharacterNoCollisionWithMap(hCollSet);
        break;
    case 0x80:
        *p_lValue = fn_bCollSetGetCharacterNoCollisionWithProjectile(hCollSet);
        break;
    case 0x81:
        *p_lValue = fn_bCollSetGetCharacterNoCollisionWithSecondaryCharacter(hCollSet);
        break;
    case 0x82:
        *p_lValue = fn_bCollSetGetCharacterNoCollisionWithMainCharacter(hCollSet);
        break;
    case 0x83:
        *p_lValue = fn_bCollSetGetCharacterNoCollisionWithOtherSectors(hCollSet);
        break;
    }
    return p_stTree;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\Cond1.cxx lines 642–655 */
/* addr: 0x0020e2f0  size: 104 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 642
 *   +0x0014 -> line 644
 *   +0x0020 -> line 646
 *   +0x0030 -> line 648
 *   +0x0038 -> line 650
 *   +0x0044 -> line 651
 *   +0x004c -> line 653
 *   +0x0050 -> line 654
 *   +0x0054 -> line 655
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
tdstNodeInterpret_* fn_p_stIsPersoActive(HIE_tdstSuperObject_* p_SuperObjPerso, tdstNodeInterpret_* p_stTree, int* p_lValue)
{
    tdstGetSetParam_ stParam;
    p_stTree = fn_p_stEvalTree(p_SuperObjPerso, p_stTree, &stParam);
    if (((tdstEngineObject_*)stParam.uParam.pValue)->h_StandardGame)
        *p_lValue = GAM_fn_bIsCharacterActive(fn_h_StandardGameGetSuperObject(((tdstEngineObject_*)stParam.uParam.pValue)->h_StandardGame));
    else
        *p_lValue = 0;
    return p_stTree;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\Cond1.cxx lines 542–631 */
/* addr: 0x0020e360  size: 512 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 542
 *   +0x0028 -> line 547
 *   +0x002c -> line 542
 *   +0x0030 -> line 546
 *   +0x0034 -> line 543
 *   +0x0038 -> line 555
 *   +0x0050 -> line 559
 *   +0x007c -> line 566
 *   +0x008c -> line 567
 *   +0x0090 -> line 566
 *   +0x0094 -> line 569
 *   +0x00a4 -> line 570
 *   +0x00a8 -> line 571
 *   +0x00b0 -> line 575
 *   +0x00c0 -> line 576
 *   +0x00c4 -> line 578
 *   +0x00d4 -> line 581
 *   +0x00e4 -> line 583
 *   +0x00ec -> line 586
 *   +0x00f0 -> line 587
 *   +0x00f8 -> line 594
 *   +0x011c -> line 595
 *   +0x0124 -> line 597
 *   +0x012c -> line 595
 *   +0x0130 -> line 597
 *   +0x0138 -> line 598
 *   +0x013c -> line 599
 *   +0x0144 -> line 604
 *   +0x0168 -> line 605
 *   +0x0170 -> line 607
 *   +0x0178 -> line 605
 *   +0x017c -> line 607
 *   +0x0184 -> line 610
 *   +0x0194 -> line 612
 *   +0x019c -> line 615
 *   +0x01a4 -> line 624
 *   +0x01bc -> line 625
 *   +0x01cc -> line 628
 *   +0x01d8 -> line 630
 *   +0x01dc -> line 631
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
tdstNodeInterpret_* fn_p_stCheckCapabilities(HIE_tdstSuperObject_* p_SuperObjPerso, tdstNodeInterpret_* p_stTree, int* p_lValue)
{
    tdeCondId_ eCondId;
    HIE_tdstSuperObject_* hNewSuperObjPerso;
    tdstGetSetParam_ stParam;
    unsigned int ubf32CapabilityToTest = 0;
    unsigned int ubf32BitOfCapability = 0;
    eCondId = p_stTree[-1].uDummy.uId.eCondId;
    fn_vGetUltraOperatorPerso(fn_ucGetConditionUltraOperator(eCondId), p_SuperObjPerso, &hNewSuperObjPerso);
    *p_lValue = 0;
    switch (eCondId) {
    case 0x78:
    case 0x79:
        p_stTree = fn_p_stEvalTree(p_SuperObjPerso, p_stTree, &stParam);
        ubf32CapabilityToTest = stParam.uParam.ulValue;
        p_stTree = fn_p_stEvalTree(p_SuperObjPerso, p_stTree, &stParam);
        ubf32BitOfCapability = stParam.uParam.ulValue;
        break;
    case 0x7a:
        p_stTree = fn_p_stEvalTree(p_SuperObjPerso, p_stTree, &stParam);
        ubf32CapabilityToTest = stParam.uParam.ulValue;
        p_stTree = fn_p_stEvalTree(p_SuperObjPerso, p_stTree, &stParam);
        if ((unsigned char)stParam.uParam.lValue >= 32)
            return p_stTree;
        ubf32BitOfCapability = 1 << (unsigned char)stParam.uParam.lValue;
        break;
    case 0x7b:
    case 0x7c:
        ubf32CapabilityToTest = fn_ulGetCapabilities(hNewSuperObjPerso->ulTypeOfLinkedObject != 2 ? 0 : hNewSuperObjPerso->hLinkedObject.p_stCharacter);
        p_stTree = fn_p_stEvalTree(p_SuperObjPerso, p_stTree, &stParam);
        ubf32BitOfCapability = stParam.uParam.ulValue;
        break;
    case 0x7d:
        ubf32CapabilityToTest = fn_ulGetCapabilities(hNewSuperObjPerso->ulTypeOfLinkedObject != 2 ? 0 : hNewSuperObjPerso->hLinkedObject.p_stCharacter);
        p_stTree = fn_p_stEvalTree(p_SuperObjPerso, p_stTree, &stParam);
        if ((unsigned char)stParam.uParam.lValue >= 32)
            return p_stTree;
        ubf32BitOfCapability = 1 << (unsigned char)stParam.uParam.lValue;
        break;
    }
    if (eCondId == 0x79 || eCondId == 0x7c)
        *p_lValue = (ubf32CapabilityToTest & ubf32BitOfCapability) != 0;
    else
        *p_lValue = ubf32BitOfCapability == (ubf32BitOfCapability & ubf32CapabilityToTest);
    return p_stTree;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\Cond1.cxx lines 478–524 */
/* addr: 0x0020e560  size: 268 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 478
 *   +0x001c -> line 491
 *   +0x0038 -> line 494
 *   +0x0050 -> line 495
 *   +0x0060 -> line 499
 *   +0x006c -> line 500
 *   +0x0074 -> line 502
 *   +0x007c -> line 503
 *   +0x0084 -> line 505
 *   +0x009c -> line 507
 *   +0x00a8 -> line 508
 *   +0x00b0 -> line 509
 *   +0x00b8 -> line 514
 *   +0x00c4 -> line 516
 *   +0x00d4 -> line 518
 *   +0x00d8 -> line 519
 *   +0x00e4 -> line 521
 *   +0x00f0 -> line 523
 *   +0x00f4 -> line 524
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
tdstNodeInterpret_* fn_p_stHierarchySon(HIE_tdstSuperObject_* p_SuperObjPerso, tdstNodeInterpret_* p_stTree, int* p_lValue)
{
    tdstDynam_* h_Dynam;
    DNM_stDynamics* pstDynamic;
    HIE_tdstSuperObject_* hChild;
    HIE_tdstSuperObject_* hFather;
    HIE_tdstSuperObject_* hNewSuperObjPerso;
    tdstGetSetParam_ stParam;
    fn_vGetUltraOperatorPerso(fn_ucGetConditionUltraOperator(p_stTree[-1].uDummy.uId.eCondId), p_SuperObjPerso, &hNewSuperObjPerso);
    *p_lValue = 0;
    p_stTree = fn_p_stEvalTree(p_SuperObjPerso, p_stTree, &stParam);
    hFather = fn_h_StandardGameGetSuperObject(((tdstEngineObject_*)stParam.uParam.pValue)->h_StandardGame);
    h_Dynam = hNewSuperObjPerso->hLinkedObject.p_stCharacter->h_Dynam;
    if (h_Dynam) {
        pstDynamic = fn_p_stDynamGetDynamics(h_Dynam);
        if (pstDynamic) {
            if (pstDynamic->m_tdstDynamicsBaseBlock.ulEndFlags & 4 ? 1 : 0) {
                if (pstDynamic->m_tdstDynamicsComplexBlock.m_hPlatform == hFather) {
                    *p_lValue = 1;
                }
                return p_stTree;
            }
        }
    }
    hChild = hFather->hFirstElementDyn;
    if (hChild) {
        do {
            if (hChild == hNewSuperObjPerso) {
                *p_lValue = 1;
                return p_stTree;
            }
            hChild = hChild->hNextBrotherDyn;
        } while (hChild);
    }
    return p_stTree;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\Cond1.cxx lines 450–469 */
/* addr: 0x0020e670  size: 144 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 450
 *   +0x0024 -> line 451
 *   +0x0028 -> line 457
 *   +0x0040 -> line 459
 *   +0x0054 -> line 462
 *   +0x0060 -> line 463
 *   +0x0068 -> line 467
 *   +0x0070 -> line 468
 *   +0x0074 -> line 469
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
tdstNodeInterpret_* fn_p_stCheckAnimSmooth(HIE_tdstSuperObject_* p_SuperObjPerso, tdstNodeInterpret_* p_stTree, int* p_lValue)
{
    HIE_tdstSuperObject_* hNewSuperObjPerso;
    tdeCondId_ eCondId;
    eCondId = (p_stTree - 1)->uDummy.uId.eCondId;
    fn_vGetUltraOperatorPerso(fn_ucGetConditionUltraOperator(eCondId), p_SuperObjPerso, &hNewSuperObjPerso);
    switch (eCondId) {
    case 0x77:
        *p_lValue = PLA_fn_bTestIfActorIsInSmoothAnim(hNewSuperObjPerso);
        return p_stTree;
    default:
        fn_vOnAIErm_M_UpdateLastError(43, 0);
        return p_stTree;
    }
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\Cond1.cxx lines 407–439 */
/* addr: 0x0020e700  size: 224 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 407
 *   +0x0024 -> line 408
 *   +0x0028 -> line 415
 *   +0x0040 -> line 417
 *   +0x0068 -> line 420
 *   +0x0074 -> line 421
 *   +0x007c -> line 425
 *   +0x0088 -> line 426
 *   +0x0090 -> line 430
 *   +0x009c -> line 431
 *   +0x00b0 -> line 432
 *   +0x00b8 -> line 437
 *   +0x00c0 -> line 438
 *   +0x00c4 -> line 439
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
tdstNodeInterpret_* fn_p_stCheckAnimEnd(HIE_tdstSuperObject_* p_SuperObjPerso, tdstNodeInterpret_* p_stTree, int* p_lValue)
{
    tdeCondId_ eCondId;
    HIE_tdstSuperObject_* hNewSuperObjPerso;
    tdstGetSetParam_ stParam;
    eCondId = p_stTree[-1].uDummy.uId.eCondId;
    fn_vGetUltraOperatorPerso(fn_ucGetConditionUltraOperator(eCondId), p_SuperObjPerso, &hNewSuperObjPerso);
    switch (eCondId) {
    case 0x76:
        *p_lValue = PLA_fn_bTestIfEndOfAnim(hNewSuperObjPerso);
        return p_stTree;
    case 0x59:
        *p_lValue = PLA_fn_bTestIfEndOfAction(hNewSuperObjPerso);
        return p_stTree;
    case 0x52:
        p_stTree = fn_p_stEvalTree(p_SuperObjPerso, p_stTree, &stParam);
        *p_lValue = PLA_fn_bTestCurrentAction(hNewSuperObjPerso, (tdstState_*)stParam.uParam.pValue);
        return p_stTree;
    default:
        fn_vOnAIErm_M_UpdateLastError(43, 0);
        return p_stTree;
    }
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\Cond1.cxx lines 231–395 */
/* addr: 0x0020e7e0  size: 864 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 231
 *   +0x0024 -> line 237
 *   +0x002c -> line 242
 *   +0x0044 -> line 246
 *   +0x0050 -> line 247
 *   +0x0068 -> line 261
 *   +0x006c -> line 262
 *   +0x0074 -> line 264
 *   +0x0080 -> line 266
 *   +0x00a8 -> line 271
 *   +0x00b4 -> line 272
 *   +0x00bc -> line 275
 *   +0x00c8 -> line 276
 *   +0x00d0 -> line 279
 *   +0x00dc -> line 280
 *   +0x00e4 -> line 283
 *   +0x00f0 -> line 284
 *   +0x00f8 -> line 287
 *   +0x0104 -> line 288
 *   +0x010c -> line 291
 *   +0x0118 -> line 292
 *   +0x0120 -> line 295
 *   +0x012c -> line 296
 *   +0x0134 -> line 299
 *   +0x0140 -> line 300
 *   +0x0148 -> line 303
 *   +0x0154 -> line 304
 *   +0x015c -> line 307
 *   +0x0168 -> line 308
 *   +0x0170 -> line 311
 *   +0x0180 -> line 312
 *   +0x0188 -> line 315
 *   +0x0194 -> line 316
 *   +0x019c -> line 319
 *   +0x01a8 -> line 320
 *   +0x01b0 -> line 323
 *   +0x01bc -> line 324
 *   +0x01c4 -> line 327
 *   +0x01d0 -> line 328
 *   +0x01d8 -> line 332
 *   +0x01e4 -> line 333
 *   +0x01ec -> line 337
 *   +0x01f8 -> line 338
 *   +0x0200 -> line 341
 *   +0x020c -> line 342
 *   +0x0214 -> line 347
 *   +0x022c -> line 354
 *   +0x0258 -> line 357
 *   +0x025c -> line 354
 *   +0x0260 -> line 357
 *   +0x026c -> line 358
 *   +0x0270 -> line 359
 *   +0x0274 -> line 354
 *   +0x0284 -> line 357
 *   +0x0290 -> line 359
 *   +0x0298 -> line 361
 *   +0x02a0 -> line 363
 *   +0x02a8 -> line 364
 *   +0x02b0 -> line 368
 *   +0x02b4 -> line 369
 *   +0x02bc -> line 368
 *   +0x02c4 -> line 369
 *   +0x02c8 -> line 368
 *   +0x02cc -> line 369
 *   +0x02d0 -> line 368
 *   +0x02d4 -> line 370
 *   +0x02dc -> line 374
 *   +0x02e8 -> line 375
 *   +0x02f0 -> line 378
 *   +0x02f4 -> line 379
 *   +0x02f8 -> line 378
 *   +0x02fc -> line 379
 *   +0x0300 -> line 378
 *   +0x0304 -> line 379
 *   +0x0308 -> line 378
 *   +0x030c -> line 380
 *   +0x0314 -> line 384
 *   +0x0324 -> line 385
 *   +0x032c -> line 388
 *   +0x0330 -> line 392
 *   +0x0334 -> line 394
 *   +0x0338 -> line 392
 *   +0x0340 -> line 395
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
tdstNodeInterpret_* fn_p_stMechanicOption(HIE_tdstSuperObject_* p_SuperObjPerso, tdstNodeInterpret_* p_stTree, int* p_lValue)
{
    DNM_stDynamics* pstDynamic;
    tdstDynam_* h_Dynam;
    int bOption;
    tdeCondId_ eCondId;
    HIE_tdstSuperObject_* hNewSuperObjPerso;
    HIE_tdstSuperObject_* p_stResultOwnerPerso;
    tdstGetSetParam_ stParam;
    unsigned char ucVectorId;
    eCondId = p_stTree[-1].uDummy.uId.eCondId;
    fn_vGetUltraOperatorPerso(fn_ucGetConditionUltraOperator(eCondId), p_SuperObjPerso, &hNewSuperObjPerso);
    h_Dynam = hNewSuperObjPerso->hLinkedObject.p_stCharacter->h_Dynam;
    if (!h_Dynam || !fn_p_stDynamGetDynamics(h_Dynam)) {
        *p_lValue = 0;
        return p_stTree;
    }
    pstDynamic = fn_p_stDynamGetDynamics(h_Dynam);
    switch (eCondId) {
    case 0x5d:
        bOption = (pstDynamic->m_tdstDynamicsBaseBlock.ulFlags & 0x1) ? 1 : 0;
        break;
    case 0x5e:
        bOption = (pstDynamic->m_tdstDynamicsBaseBlock.ulFlags & 0x2) ? 1 : 0;
        break;
    case 0x5f:
        bOption = (pstDynamic->m_tdstDynamicsBaseBlock.ulFlags & 0x4) ? 1 : 0;
        break;
    case 0x60:
        bOption = (pstDynamic->m_tdstDynamicsBaseBlock.ulFlags & 0x8) ? 1 : 0;
        break;
    case 0x61:
        bOption = (pstDynamic->m_tdstDynamicsBaseBlock.ulFlags & 0x10) ? 1 : 0;
        break;
    case 0x62:
        bOption = (pstDynamic->m_tdstDynamicsBaseBlock.ulFlags & 0x40) ? 1 : 0;
        break;
    case 0x63:
        bOption = (pstDynamic->m_tdstDynamicsBaseBlock.ulFlags & 0x20) ? 1 : 0;
        break;
    case 0x64:
        bOption = (pstDynamic->m_tdstDynamicsBaseBlock.ulEndFlags & 0x100) ? 1 : 0;
        break;
    case 0x65:
        bOption = (pstDynamic->m_tdstDynamicsBaseBlock.ulEndFlags & 0x200) ? 1 : 0;
        break;
    case 0x66:
        bOption = (pstDynamic->m_tdstDynamicsBaseBlock.ulEndFlags & 0x200) ? 1 : 0;
        break;
    case 0x67:
        bOption = (pstDynamic->m_tdstDynamicsBaseBlock.ulEndFlags & 0x200000) ? 1 : 0;
        break;
    case 0x68:
        bOption = (pstDynamic->m_tdstDynamicsBaseBlock.ulFlags & 0x80) ? 1 : 0;
        break;
    case 0x69:
        bOption = (pstDynamic->m_tdstDynamicsBaseBlock.ulFlags & 0x100) ? 1 : 0;
        break;
    case 0x6a:
        bOption = (pstDynamic->m_tdstDynamicsBaseBlock.ulFlags & 0x200) ? 1 : 0;
        break;
    case 0x6b:
        bOption = (pstDynamic->m_tdstDynamicsBaseBlock.ulFlags & 0x400) ? 1 : 0;
        break;
    case 0x6c:
        bOption = (pstDynamic->m_tdstDynamicsBaseBlock.ulFlags & 0x800) ? 1 : 0;
        break;
    case 0x6d:
        bOption = (pstDynamic->m_tdstDynamicsBaseBlock.ulFlags & 0x1000) ? 1 : 0;
        break;
    case 0x6e:
        bOption = (pstDynamic->m_tdstDynamicsBaseBlock.ulEndFlags & 0x20) ? 1 : 0;
        break;
    case 0x71:
        bOption = (pstDynamic->m_tdstDynamicsBaseBlock.ulEndFlags & 0x40) ? 1 : 0;
        if (bOption) {
            if (p_stTree->eType == 2)
                p_stTree = fn_p_stOperatorGetPerso(p_SuperObjPerso, p_stTree + 1, &p_stResultOwnerPerso);
            else
                p_stResultOwnerPerso = p_SuperObjPerso;
            ucVectorId = p_stTree->uDummy.uParam.ucValue;
            p_stTree++;
            {
                MTH3D_tdstVector_* p_stVector = &stParam.uParam.stVectorValue;
                float xX = pstDynamic->m_tdstDynamicsComplexBlock.m_stFallTranslation.xX;
                float xY = pstDynamic->m_tdstDynamicsComplexBlock.m_stFallTranslation.xY;
                float xZ = pstDynamic->m_tdstDynamicsComplexBlock.m_stFallTranslation.xZ;
                p_stVector->xX = xX;
                p_stVector->xY = xY;
                p_stVector->xZ = xZ;
            }
            stParam.eType = (tdeVariableType_)0x15;
            fn_ucSetDsgVar(ucVectorId, 0, p_stResultOwnerPerso->hLinkedObject.p_stCharacter->h_Brain->p_stMind, &stParam);
        } else {
            p_stTree = fn_p_stSkipThisArgument(p_stTree);
        }
        break;
    case 0x5b:
    case 0x5c:
        {
            unsigned int ulFlags = pstDynamic->m_tdstDynamicsBaseBlock.ulEndFlags;
            bOption = (ulFlags & 0x10000) ? 1 : 0;
            ulFlags &= ~0x10000;
            pstDynamic->m_tdstDynamicsBaseBlock.ulEndFlags = ulFlags;
            pstDynamic->m_tdstDynamicsBaseBlock.ulEndFlags = ulFlags;
        }
        break;
    case 0x6f:
        bOption = (pstDynamic->m_tdstDynamicsBaseBlock.ulFlags & 0x2000) ? 1 : 0;
        break;
    case 0x70:
        {
            unsigned int ulFlags = pstDynamic->m_tdstDynamicsBaseBlock.ulEndFlags;
            bOption = (ulFlags & 0x2000) ? 1 : 0;
            ulFlags &= ~0x2000;
            pstDynamic->m_tdstDynamicsBaseBlock.ulEndFlags = ulFlags;
            pstDynamic->m_tdstDynamicsBaseBlock.ulEndFlags = ulFlags;
        }
        break;
    case 0x72:
        bOption = (pstDynamic->m_tdstDynamicsBaseBlock.ulEndFlags & 0x80000) ? 1 : 0;
        break;
    default:
        bOption = 0;
        break;
    }
    *p_lValue = bOption ? 1 : 0;
    return p_stTree;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\Cond1.cxx lines 209–221 */
/* addr: 0x0020eb40  size: 216 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 209
 *   +0x0010 -> line 214
 *   +0x0018 -> line 217
 *   +0x001c -> line 214
 *   +0x0020 -> line 217
 *   +0x0024 -> line 215
 *   +0x0028 -> line 217
 *   +0x00bc -> line 220
 *   +0x00c0 -> line 217
 *   +0x00c8 -> line 221
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
#pragma optimize_for_size off
inline int MTH_bIsNull(float xValue)
{
    int bResult = 1;
    if (!(MTH_xAbs(xValue) < 0.00001f))
        bResult = 0;
    return bResult;
}

tdstNodeInterpret_* fn_p_stNullVector(HIE_tdstSuperObject_* p_SuperObjPerso, tdstNodeInterpret_* p_stTree, int* p_lValue)
{
    MTH3D_tdstVector_* p_stVector;
    tdstGetSetParam_ stParam;
    p_stTree = fn_p_stEvalTree(p_SuperObjPerso, p_stTree, &stParam);
    p_stVector = &stParam.uParam.stVectorValue;
    {
        int bResult = MTH_bIsNull(p_stVector->xX);
        if (bResult)
            bResult = MTH_bIsNull(p_stVector->xY);
        bResult = bResult != 0;
        if (bResult)
            bResult = MTH_bIsNull(p_stVector->xZ);
        *p_lValue = bResult ? 1 : 0;
    }
    return p_stTree;
}
#pragma optimize_for_size reset

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\Cond1.cxx lines 150–193 */
/* addr: 0x0020ec20  size: 360 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 150
 *   +0x0018 -> line 158
 *   +0x002c -> line 159
 *   +0x0038 -> line 162
 *   +0x0040 -> line 159
 *   +0x0044 -> line 162
 *   +0x004c -> line 163
 *   +0x0050 -> line 166
 *   +0x0060 -> line 168
 *   +0x0064 -> line 169
 *   +0x006c -> line 174
 *   +0x0078 -> line 176
 *   +0x0080 -> line 178
 *   +0x00c0 -> line 179
 *   +0x00c8 -> line 182
 *   +0x0104 -> line 187
 *   +0x013c -> line 188
 *   +0x0144 -> line 190
 *   +0x0148 -> line 192
 *   +0x014c -> line 193
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
tdstNodeInterpret_* fn_p_stCollisionWP(HIE_tdstSuperObject_* p_SuperObjPerso, tdstNodeInterpret_* p_stTree, int* p_lValue)
{
    MTH3D_tdstVector_ stPosWP;
    HIE_tdstSuperObject_* hPerso;
    WP_tdstWayPoint_* hWP;
    tdstGetSetParam_ stParam;
    p_stTree = fn_p_stEvalTree(p_SuperObjPerso, p_stTree, &stParam);
    hPerso = fn_h_StandardGameGetSuperObject(((tdstEngineObject_*)stParam.uParam.pValue)->h_StandardGame);
    p_stTree = fn_p_stEvalTree(p_SuperObjPerso, p_stTree, &stParam);
    hWP = (WP_tdstWayPoint_*)stParam.uParam.pValue;
    if (!hPerso || !hWP) {
        *p_lValue = 0;
        return p_stTree;
    }
    if (hWP->m_hSuperObject) {
        WP_fnv_WayPoint_ComputeLocation(hWP, &stPosWP);
        stPosWP.xX = stPosWP.xX - hPerso->hGlobalMatrix->stTransformMatrix.stCol_3.xX;
        stPosWP.xY = stPosWP.xY - hPerso->hGlobalMatrix->stTransformMatrix.stCol_3.xY;
        stPosWP.xZ = stPosWP.xZ - hPerso->hGlobalMatrix->stTransformMatrix.stCol_3.xZ;
    } else {
        stPosWP.xX = hWP->m_stVertex.xX - hPerso->hGlobalMatrix->stTransformMatrix.stCol_3.xX;
        stPosWP.xY = hWP->m_stVertex.xY - hPerso->hGlobalMatrix->stTransformMatrix.stCol_3.xY;
        stPosWP.xZ = hWP->m_stVertex.xZ - hPerso->hGlobalMatrix->stTransformMatrix.stCol_3.xZ;
    }
    {
        float xResult;
        float xRadius;
        float xX = stPosWP.xX;
        float xY = stPosWP.xY;
        float xZ = stPosWP.xZ;
        xRadius = hWP->m_xRadius;
        /* Retail +0x114..0x120 uses this accumulator chain. */
        asm {
            mula.s xX, xX
            madda.s xY, xY
            madda.s xZ, xZ
            msub.s xResult, xRadius, xRadius
        }
        if (!(xResult <= 0.0f))
            *p_lValue = 0;
        else
            *p_lValue = 1;
    }
    return p_stTree;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\Cond1.cxx lines 85–137 */
/* addr: 0x0020ed90  size: 332 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 85
 *   +0x0024 -> line 88
 *   +0x0028 -> line 93
 *   +0x0040 -> line 96
 *   +0x0054 -> line 98
 *   +0x0074 -> line 103
 *   +0x0090 -> line 106
 *   +0x00b0 -> line 107
 *   +0x00b8 -> line 111
 *   +0x00dc -> line 114
 *   +0x00e4 -> line 126
 *   +0x00f4 -> line 127
 *   +0x012c -> line 136
 *   +0x0130 -> line 137
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
inline int TestStateCustomBits(tdstState_* hState, unsigned int ulMask)
{
    int bResult;
    if (hState) {
        if (!(ulMask & fn_ucGetStateCustomBits(hState)))
            bResult = 0;
        else
            bResult = 1;
    } else {
        bResult = 0;
    }
    return bResult;
}

tdstNodeInterpret_* fn_p_stCustomBitsCond(HIE_tdstSuperObject_* p_SuperObjPerso, tdstNodeInterpret_* p_stTree, int* p_lValue)
{
    unsigned int ulMask;
    tdeCondId_ eCondId;
    HIE_tdstSuperObject_* hNewSuperObjPerso;
    tdstGetSetParam_ stParam;
    eCondId = p_stTree[-1].uDummy.uId.eCondId;
    fn_vGetUltraOperatorPerso(fn_ucGetConditionUltraOperator(eCondId), p_SuperObjPerso, &hNewSuperObjPerso);
    p_stTree = fn_p_stEvalTree(p_SuperObjPerso, p_stTree, &stParam);
    switch (eCondId) {
    default:
        *p_lValue = 0;
        break;
    case 0x57:
        {
            int iBit = stParam.uParam.lValue - 1;
            iBit = (short)iBit;
            if (iBit < 32)
                *p_lValue = ((1 << iBit) & hNewSuperObjPerso->hLinkedObject.p_stCharacter->h_StandardGame->ulCustomBits) ? 1 : 0;
            else
                *p_lValue = ((1 << (iBit - 32)) & hNewSuperObjPerso->hLinkedObject.p_stCharacter->h_StandardGame->ulAICustomBits) ? 1 : 0;
        }
        break;
    case 0x5a:
        ulMask = stParam.uParam.ulValue;
        {
            tdstState_* hState = hNewSuperObjPerso->hLinkedObject.p_stCharacter->h_3dData->h_CurrentState;
            *p_lValue = TestStateCustomBits(hState, ulMask);
        }
        break;
    }
    return p_stTree;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\Cond1.cxx lines 14–69 */
/* addr: 0x0020eee0  size: 632 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 14
 *   +0x0024 -> line 20
 *   +0x002c -> line 27
 *   +0x0044 -> line 30
 *   +0x0054 -> line 32
 *   +0x0058 -> line 33
 *   +0x0060 -> line 36
 *   +0x0070 -> line 38
 *   +0x0074 -> line 36
 *   +0x0078 -> line 40
 *   +0x007c -> line 44
 *   +0x00b4 -> line 47
 *   +0x00bc -> line 48
 *   +0x0114 -> line 49
 *   +0x011c -> line 52
 *   +0x0124 -> line 53
 *   +0x017c -> line 54
 *   +0x0184 -> line 57
 *   +0x018c -> line 58
 *   +0x01e4 -> line 59
 *   +0x01ec -> line 62
 *   +0x01f8 -> line 63
 *   +0x0254 -> line 68
 *   +0x0258 -> line 69
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
inline unsigned char TestCollidedMaterial(GMT_tdstGameMaterial_* hMaterial, unsigned short xTestMask)
{
    GMT_tdstCollideMaterial_* hCollideMaterial;
    unsigned short xIdentifier;
    if (!GMT_fn_b_ulIsValid(hMaterial))
        return 0;
    hCollideMaterial = GMT_fn_hGetCollideMaterial(hMaterial);
    if (hCollideMaterial == (GMT_tdstCollideMaterial_*)-1)
        return 0;
    xIdentifier = GMT_fn_hGetCollideMaterialIdentifier(hCollideMaterial);
    return xTestMask == (xTestMask & xIdentifier);
}

tdstNodeInterpret_* fn_p_stZDMCollideWithObstacle(HIE_tdstSuperObject_* p_SuperObjPerso, tdstNodeInterpret_* p_stTree, int* p_lValue)
{
    unsigned short xTestMask;
    unsigned int ulSurfState;
    DNM_stReport* p_stDynamReport;
    tdeCondId_ eCondId;
    HIE_tdstSuperObject_* hNewSuperObjPerso;
    tdstGetSetParam_ stParam;
    eCondId = p_stTree[-1].uDummy.uId.eCondId;
    fn_vGetUltraOperatorPerso(fn_ucGetConditionUltraOperator(eCondId), p_SuperObjPerso, &hNewSuperObjPerso);
    if (!(p_stDynamReport = fn_pstGetDNMReport(hNewSuperObjPerso))) {
        *p_lValue = 0;
        return p_stTree;
    }
    p_stTree = fn_p_stEvalTree(p_SuperObjPerso, p_stTree, &stParam);
    ulSurfState = p_stDynamReport->m_ulCurrSurfaceState;
    xTestMask = (unsigned short)stParam.uParam.lValue;
    *p_lValue = 0;
    switch (eCondId) {
    case 0x49:
        if (ulSurfState)
            *p_lValue = TestCollidedMaterial(p_stDynamReport->m_stObstacle.hCollidedMaterial, xTestMask);
        break;
    case 0x4a:
        if (ulSurfState & 4)
            *p_lValue = TestCollidedMaterial(p_stDynamReport->m_stWall.hCollidedMaterial, xTestMask);
        break;
    case 0x4b:
        if (ulSurfState & 1)
            *p_lValue = TestCollidedMaterial(p_stDynamReport->m_stGround.hCollidedMaterial, xTestMask);
        break;
    case 0x4c:
        if (ulSurfState & 0x10)
            *p_lValue = TestCollidedMaterial(p_stDynamReport->m_stCeil.hCollidedMaterial, xTestMask);
        break;
    }
    return p_stTree;
}
