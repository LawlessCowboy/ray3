/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\FuncRay2.cxx */
/* Language: C */
/* Compiler: MW MIPS C Compiler */

#include <stddef.h>

/* Recovered aggregate layouts from MWCC debug type records. */
typedef struct CINE_tdstCine_ CINE_tdstCine_;
typedef struct COL_tdstCollideObject_ COL_tdstCollideObject_;
typedef struct DNM_stDynamics DNM_stDynamics;
typedef struct HIE_tdstSuperObject_ HIE_tdstSuperObject_;
typedef struct MAT_tdstTransformation_ MAT_tdstTransformation_;
typedef struct MTH3D_tdstVector_ MTH3D_tdstVector_;
typedef struct SECT_tdstListOfSOCharacters_ SECT_tdstListOfSOCharacters_;
typedef struct SECT_tdstListOfSOSectorsInGraphicInteraction_ SECT_tdstListOfSOSectorsInGraphicInteraction_;
typedef struct WP_tdstArc_ WP_tdstArc_;
typedef struct WP_tdstGraphNode_ WP_tdstGraphNode_;
typedef struct WP_tdstGraph_ WP_tdstGraph_;
typedef struct WP_tdstListOfArc_ WP_tdstListOfArc_;
typedef struct WP_tdstWayPoint_ WP_tdstWayPoint_;
typedef struct tdstAChannel_ tdstAChannel_;
typedef struct tdstDynam_ tdstDynam_;
typedef struct tdstEngineObject_ tdstEngineObject_;
typedef struct tdstFamilyList_ tdstFamilyList_;
typedef struct tdstGetSetParam_ tdstGetSetParam_;
typedef struct tdstMSWay_ tdstMSWay_;
typedef struct tdstNodeInterpret_ tdstNodeInterpret_;
typedef struct tdstPhysicalCollSet_ tdstPhysicalCollSet_;
typedef struct tdstStandardGame_ tdstStandardGame_;
typedef struct tdstSectInfo_ tdstSectInfo_;

typedef enum tdeFuncId_ { eFunc_Dummy = 0 } tdeFuncId_;
typedef enum tdeVariableType_ { eVariableType_Dummy = 0 } tdeVariableType_;
struct MTH3D_tdstVector_ { float xX; float xY; float xZ; };
struct MTH4D_tdstVector_ { float xX; float xY; float xZ; float xW; } __attribute__((aligned(16)));
struct MTH4D_tdstMatrix_ { MTH4D_tdstVector_ stCol_0; MTH4D_tdstVector_ stCol_1; MTH4D_tdstVector_ stCol_2; MTH4D_tdstVector_ stCol_3; };
struct MAT_tdstTransformation_ { int eType; MTH4D_tdstMatrix_ stTransformMatrix; MTH4D_tdstVector_ stScaleVector; };
typedef union tduGetSetParam_ { int lValue; float xValue; MTH3D_tdstVector_ stVectorValue; void* pValue; } tduGetSetParam_;
struct tdstGetSetParam_ { tduGetSetParam_ uParam; tdeVariableType_ eType; };
typedef struct stTfmtStatus_ { unsigned char data[48]; } stTfmtStatus_;

/* Recovered WP layouts, as in WParc.c. */
struct LST2_tdstAnchorToWP_tdhGraphNodeDyn {
    WP_tdstGraphNode_* hFirstElementDyn;
    WP_tdstGraphNode_* hLastElementDyn;
    int lNumberOfElementsDyn;
};
struct WP_tdstGraphNode_ {
    WP_tdstGraphNode_* hNextBrotherDyn;
    WP_tdstGraphNode_* hPrevBrotherDyn;
    LST2_tdstAnchorToWP_tdhGraphNodeDyn* hFatherDyn;
    WP_tdstWayPoint_* m_hWayPoint;
    int m_lTypeOfWP;
    int m_lTypeOfWPInit;
    WP_tdstListOfArc_* m_hListOfArc;
};
struct WP_tdstGraph_ {
    LST2_tdstAnchorToWP_tdhGraphNodeDyn m_hListOfNode;
};

/* Recovered HIE layouts, as in MECTools.c. */
struct GEO_tdstGeometricObject_;
struct PO_tdstPhysicalObject_;
struct IPO_tdstInstanciatedPhysicalObject_;
struct SECT_tdstSector_;
struct GLI_tdstLight_;
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

/* Recovered CINE layouts also present in MECTools.c. */
struct CINE_tdstCineActor_;
struct LST2_tdstAnchorToCINE_tdxHandleToCineDyn;
struct LST2_tdstAnchorToCINE_tdxHandleToCineActorDyn {
    CINE_tdstCineActor_* hFirstElementDyn;
    CINE_tdstCineActor_* hLastElementDyn;
    int lNumberOfElementsDyn;
};
struct CINE_tdstCine_ {
    LST2_tdstAnchorToCINE_tdxHandleToCineActorDyn hActorList;
    CINE_tdstCine_* hNextBrotherDyn;
    CINE_tdstCine_* hPrevBrotherDyn;
    LST2_tdstAnchorToCINE_tdxHandleToCineDyn* hFatherDyn;
    unsigned char bPlaying;
    int lGenerateEvent;
    char szName[255];
};

struct tdstStandardGame_ {
    unsigned char _pad_00[0x1c];
    unsigned char ucTractionFactor; /* +0x1c */
    unsigned char _pad_1d[3];
    unsigned int ulCustomBits; /* +0x20 */
    unsigned int ulAICustomBits; /* +0x24 */
    unsigned char _pad_28;
    unsigned char ucMiscFlags; /* +0x29 */
};
struct SECT_tdstListOfSOCharacters_ {
    HIE_tdstSuperObject_* hPointerOfCharacter; /* +0x0 */
    SECT_tdstListOfSOCharacters_* hNextBrotherDyn; /* +0x4 */
};
/* Recovered AI "extended datas" layout, as in ProcRay2.cxx. */
struct tdstExtendDatas4Ray_ {
    int iMagicPoints4Ray;
    int iMagicPointsMax4Ray;
    float xAirPoints4Ray; /* +0x8 */
    float xAirPointsMax4Ray; /* +0xc */
};
extern "C" tdstExtendDatas4Ray_ stExtendDatas4Ray;
struct tdstEngineObject_ {
    void* h_3dData; /* +0x0 */
    tdstStandardGame_* h_StandardGame; /* +0x4 */
    tdstDynam_* h_Dynam; /* +0x8 */
    unsigned char _pad_0c[0xc];
    tdstMSWay_* h_MSWay; /* +0x18 */
    unsigned char _pad_1c[4];
    tdstSectInfo_* h_SectInfo; /* +0x20 */
};

struct COL_tdstCollideObject_ {
    short xNbPoints; /* +0x0 */
    short xNbElements; /* +0x2 */
    short xNbParallelBoxes; /* +0x4 */
    MTH3D_tdstVector_* d_stListOfPoints; /* +0x8 */
    short* d_xListOfElementsTypes; /* +0xc */
};
extern "C" void COL_fn_vGetInfoFromGeometricSphere(MTH3D_tdstVector_*, float*, COL_tdstCollideObject_*);
extern "C" void COL_vGetMinMaxPointOfIndexedAlignedBox(COL_tdstCollideObject_*, short, short, short*, short*);
extern "C" void COL_vGetPointOfObject(COL_tdstCollideObject_*, MTH3D_tdstVector_*, short);
inline void MTH3D_M_vAddVector(MTH3D_tdstVector_* R, MTH3D_tdstVector_* A, MTH3D_tdstVector_* B)
{
    R->xX = A->xX + B->xX;
    R->xY = A->xY + B->xY;
    R->xZ = A->xZ + B->xZ;
}
inline void MTH3D_M_vSubVector(MTH3D_tdstVector_* R, MTH3D_tdstVector_* A, MTH3D_tdstVector_* B)
{
    R->xX = A->xX - B->xX;
    R->xY = A->xY - B->xY;
    R->xZ = A->xZ - B->xZ;
}
inline void MTH3D_M_vMulScalar(MTH3D_tdstVector_* R, MTH3D_tdstVector_* A, float k)
{
    R->xX = k * A->xX;
    R->xY = k * A->xY;
    R->xZ = k * A->xZ;
}

extern "C" HIE_tdstSuperObject_* fn_h_StandardGameGetSuperObject(tdstStandardGame_*);
extern "C" void fn_vInternGetZDxCenter(HIE_tdstSuperObject_* _hCharacter, unsigned short _xMask, unsigned char _ucZoneType, unsigned char _bInGlobalCoordinates, MTH3D_tdstVector_* _p_stReturnVector);
inline void MTH3D_M_vNegVector(MTH3D_tdstVector_* R, MTH3D_tdstVector_* A)
{
    R->xX = -A->xX;
    R->xY = -A->xY;
    R->xZ = -A->xZ;
}
static HIE_tdstSuperObject_* g_hCharacterMaskedForResearch;
unsigned char g_ucAIModuleId;
float g_DistanceWaypointMin;
float g_DistanceWaypointMax;
extern float g_DistanceActMin;
extern float g_DistanceActMax;

extern "C" tdstNodeInterpret_* fn_p_stEvalTree(HIE_tdstSuperObject_* p_SuperObjPerso,
                                                 tdstNodeInterpret_* p_stTree,
                                                 tdstGetSetParam_* p_stValue);
extern "C" unsigned int TMR_fn_ulFastGetInternalCounter(void);
extern "C" int GAM_fn_lGetNbPersoActive(void);
extern "C" void fn_vOnAIErm_M_UpdateLastError(int FatalErrorNum, char* szMsg);
extern "C" char* fn_szGetStringFromTextOrStringParam(tdstGetSetParam_* p_stValue);
extern "C" CINE_tdstCine_* CINE_fn_pFindCine(char* szName);
extern "C" unsigned char fn_ucGetFunctionUltraOperator(tdeFuncId_ eFuncId);
extern "C" void fn_vGetUltraOperatorPerso(unsigned char bYouHaveRightToUseThisFunction, HIE_tdstSuperObject_* hCurrentSuperObjPerso, HIE_tdstSuperObject_** hNewSuperObjPerso);
extern "C" unsigned int fn_ulGetCapabilities(tdstEngineObject_* _p_stObject);
extern "C" WP_tdstGraph_* WPG_fn_hGetNearestGraph(MTH3D_tdstVector_* p_stPos);
extern "C" unsigned short PLA_fn_uwGetNbFrameInCurrAnim(HIE_tdstSuperObject_* hSuperObject);
extern "C" int strcasecmp(const char*, const char*);
extern "C" HIE_tdstSuperObject_* fn_h_SectInfoGetCurrentSector(tdstSectInfo_* p_stSectInfo);
extern "C" HIE_tdstSuperObject_* fn_hGetNearestActorInSectorWithAnyCustombit(HIE_tdstSuperObject_* _hMe, HIE_tdstSuperObject_* _hSector, unsigned int _ulFilterCustomBits, tdeFuncId_ _eFuncId);
extern "C" void fn_vGetScrollSpeedMatCollided(HIE_tdstSuperObject_* p_stSuperObj, MTH3D_tdstVector_* p_stVector, unsigned int ulObstacleType, int ulMTIndex);
extern "C" int WPG_fn_lGetLinkWeight(WP_tdstGraph_* hGraph, WP_tdstWayPoint_* hSrcWayPoint, WP_tdstWayPoint_* hDstWayPoint, int* p_lWeight);
extern "C" int WPG_fn_lChangeLinkWeight(WP_tdstGraph_* hGraph, WP_tdstWayPoint_* hSrcWayPoint, WP_tdstWayPoint_* hDstWayPoint, int lWeight);
extern "C" int WPG_fn_lGetLinkCapabilities(WP_tdstGraph_* hGraph, WP_tdstWayPoint_* hSrcWayPoint, WP_tdstWayPoint_* hDstWayPoint, unsigned int* p_ulCapability);
extern "C" int WPG_fn_lChangeLinkCapabilities(WP_tdstGraph_* hGraph, WP_tdstWayPoint_* hSrcWayPoint, WP_tdstWayPoint_* hDstWayPoint, unsigned int ulCapability, int lValue);

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\FuncRay2.cxx lines 4091–4099 */
/* addr: 0x0021b6e0  size: 44 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 4091
 *   +0x0004 -> line 4094
 *   +0x0010 -> line 4096
 *   +0x0020 -> line 4098
 *   +0x0024 -> line 4099
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */

/* The functions below are in their original source-line order (retail
 * emits them in reverse); these prototypes keep earlier calls valid. */
extern "C" tdstNodeInterpret_* fn_p_stEmptyText(HIE_tdstSuperObject_* p_SuperObjPerso, tdstNodeInterpret_* p_stTree, tdstGetSetParam_* p_stValue);
extern "C" tdstNodeInterpret_* fn_p_stTextComparison(HIE_tdstSuperObject_* p_SuperObjPerso, tdstNodeInterpret_* p_stTree, tdstGetSetParam_* p_stValue);
extern "C" tdstNodeInterpret_* fn_p_stSAV2_DoVarsNeedToBeSet(HIE_tdstSuperObject_* p_SuperObjPerso, tdstNodeInterpret_* p_stTree, tdstGetSetParam_* p_stValue);
extern "C" tdstNodeInterpret_* fn_p_stFunctPS2(HIE_tdstSuperObject_* p_SuperObjPerso, tdstNodeInterpret_* p_stTree, tdstGetSetParam_* p_stValue);
extern "C" tdstNodeInterpret_* fn_p_stFunctTurnToPosition(HIE_tdstSuperObject_* p_SuperObjPerso, tdstNodeInterpret_* p_stTree, tdstGetSetParam_* p_stValue);
extern "C" tdstNodeInterpret_* fn_p_stGetCPUCounter(HIE_tdstSuperObject_* p_SuperObjPerso, tdstNodeInterpret_* p_stTree, tdstGetSetParam_* p_stValue);
extern "C" tdstNodeInterpret_* fn_p_stDotProduct(HIE_tdstSuperObject_* p_SuperObjPerso, tdstNodeInterpret_* p_stTree, tdstGetSetParam_* p_stValue);
extern "C" tdstNodeInterpret_* fn_p_stGetNearestActorInCurrentSector(HIE_tdstSuperObject_* p_SuperObjPerso, tdstNodeInterpret_* p_stTree, tdstGetSetParam_* p_stValue);
extern "C" HIE_tdstSuperObject_* fn_hGetNearestActorInSectorWithAnyCustombit(HIE_tdstSuperObject_* _hMe, HIE_tdstSuperObject_* _hSector, unsigned int _ulFilterCustomBits, tdeFuncId_ _eFuncId);
extern "C" tdstNodeInterpret_* fn_p_stGetZDxCenter(HIE_tdstSuperObject_* p_SuperObjPerso, tdstNodeInterpret_* p_stTree, tdstGetSetParam_* p_stValue);
extern "C" tdstNodeInterpret_* fn_p_stTractionFactorFunction(HIE_tdstSuperObject_* p_SuperObjPerso, tdstNodeInterpret_* p_stTree, tdstGetSetParam_* p_stValue);
extern "C" tdstNodeInterpret_* fn_p_stCINEGetGenerateEvent(HIE_tdstSuperObject_* p_SuperObjPerso, tdstNodeInterpret_* p_stTree, tdstGetSetParam_* p_stValue);
extern "C" tdstNodeInterpret_* fn_p_stGetNbActivePerso(HIE_tdstSuperObject_* p_SuperObjPerso, tdstNodeInterpret_* p_stTree, tdstGetSetParam_* p_stValue);
extern "C" tdstNodeInterpret_* fn_p_stGetSPOCoordinates(HIE_tdstSuperObject_* p_SuperObjPerso, tdstNodeInterpret_* p_stTree, tdstGetSetParam_* p_stValue);
extern "C" tdstNodeInterpret_* fn_p_stVectorOperations(HIE_tdstSuperObject_* p_SuperObjPerso, tdstNodeInterpret_* p_stTree, tdstGetSetParam_* p_stValue);
extern "C" tdstNodeInterpret_* fn_p_stGetNbFrame(HIE_tdstSuperObject_* p_SuperObjPerso, tdstNodeInterpret_* p_stTree, tdstGetSetParam_* p_stValue);
extern "C" tdstNodeInterpret_* fn_p_stMTGetScrollSpeed(HIE_tdstSuperObject_* p_SuperObjPerso, tdstNodeInterpret_* p_stTree, tdstGetSetParam_* p_stValue);
extern "C" tdstNodeInterpret_* fn_p_stGetScrollSpeed(HIE_tdstSuperObject_* p_SuperObjPerso, tdstNodeInterpret_* p_stTree, tdstGetSetParam_* p_stValue);
extern "C" tdstNodeInterpret_* fn_p_stCapabilityFunction(HIE_tdstSuperObject_* p_SuperObjPerso, tdstNodeInterpret_* p_stTree, tdstGetSetParam_* p_stValue);
extern "C" tdstNodeInterpret_* fn_p_stPersoCapabilityFunction(HIE_tdstSuperObject_* p_SuperObjPerso, tdstNodeInterpret_* p_stTree, tdstGetSetParam_* p_stValue);
extern "C" tdstNodeInterpret_* fn_p_stGetSituationOnRail(HIE_tdstSuperObject_* p_SuperObjPerso, tdstNodeInterpret_* p_stTree, tdstGetSetParam_* p_stValue);
extern "C" tdstNodeInterpret_* fn_p_stMiscFuncOnTypeOfWP(HIE_tdstSuperObject_* p_SuperObjPerso, tdstNodeInterpret_* p_stTree, tdstGetSetParam_* p_stValue);
extern "C" tdstNodeInterpret_* fn_p_stTravelOnAGraph(HIE_tdstSuperObject_* p_SuperObjPerso, tdstNodeInterpret_* p_stTree, tdstGetSetParam_* p_stValue);
extern "C" tdstNodeInterpret_* fn_p_stCloserWPInGraph(HIE_tdstSuperObject_* p_SuperObjPerso, tdstNodeInterpret_* p_stTree, tdstGetSetParam_* p_stValue);
extern "C" tdstNodeInterpret_* fn_p_stCloserAndCollisionWPInGraph(HIE_tdstSuperObject_* p_SuperObjPerso, tdstNodeInterpret_* p_stTree, tdstGetSetParam_* p_stValue);
extern "C" tdstNodeInterpret_* fn_p_stGetCloserNetwork(HIE_tdstSuperObject_* p_SuperObjPerso, tdstNodeInterpret_* p_stTree, tdstGetSetParam_* p_stValue);
extern "C" tdstNodeInterpret_* fn_p_stWayFunction(HIE_tdstSuperObject_* p_SuperObjPerso, tdstNodeInterpret_* p_stTree, tdstGetSetParam_* p_stValue);
extern "C" tdstNodeInterpret_* fn_p_stGraphToWayFunction(HIE_tdstSuperObject_* p_SuperObjPerso, tdstNodeInterpret_* p_stTree, tdstGetSetParam_* p_stValue);
extern "C" tdstNodeInterpret_* fn_p_stGraphFunction(HIE_tdstSuperObject_* p_SuperObjPerso, tdstNodeInterpret_* p_stTree, tdstGetSetParam_* p_stValue);
extern "C" tdstNodeInterpret_* fn_p_stCode4PersoLePlusProche(HIE_tdstSuperObject_* p_SuperObjPerso, tdstNodeInterpret_* p_stTree, tdstGetSetParam_* p_stValue);
extern "C" HIE_tdstSuperObject_* fn_hGetClosestPersoInSector(HIE_tdstSuperObject_* _hCloserSO, float* _p_xBestDist, float* _p_xPrevWeight, HIE_tdstSuperObject_* _hMe, MTH3D_tdstVector_* _p_stMyVector, MTH3D_tdstVector_* _p_stActorSighting, MAT_tdstTransformation_* _p_stGlobToPerso, HIE_tdstSuperObject_* _hSector, unsigned int _ulFilterCustomBits, unsigned int _ulUnused, float _xXWeight, float _x2DWeight, float _x3DWeight, float _xCosXoY, float _xCosYoZ, tdstFamilyList_* _hFamily, tdeFuncId_ _eFuncId);
extern "C" void fn_vSetCharacterMaskedForResearch(HIE_tdstSuperObject_* hCharacter);
extern "C" void fn_vInitRecherchePerso(void);
extern "C" void fn_vInternGetZDxCenter(HIE_tdstSuperObject_* _hCharacter, unsigned short _xMask, unsigned char _ucZoneType, unsigned char _bInGlobalCoordinates, MTH3D_tdstVector_* _p_stReturnVector);
extern "C" unsigned char fn_vGetZoneCenter(COL_tdstCollideObject_* _hGeoObj, MTH3D_tdstVector_* _hZoneCenter);
extern "C" tdstNodeInterpret_* fn_p_stCode4PointsDeMagie(HIE_tdstSuperObject_* p_SuperObjPerso, tdstNodeInterpret_* p_stTree, tdstGetSetParam_* p_stValue);
extern "C" tdstNodeInterpret_* fn_p_stCode4PointsDair(HIE_tdstSuperObject_* p_SuperObjPerso, tdstNodeInterpret_* p_stTree, tdstGetSetParam_* p_stValue);
extern "C" tdstNodeInterpret_* fn_p_stCode4TextAffiche(HIE_tdstSuperObject_* p_SuperObjPerso, tdstNodeInterpret_* p_stTree, tdstGetSetParam_* p_stValue);
extern "C" void fn_vSetDistanceActMax(float xDistACT);
extern "C" void fn_vSetDistanceActMin(float xDistACT);
extern "C" void fn_vInitDistanceAct(void);

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\FuncRay2.cxx lines 4063–4082 */
/* addr: 0x0021b710  size: 152 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 4063
 *   +0x0004 -> line 4068
 *   +0x0008 -> line 4063
 *   +0x000c -> line 4065
 *   +0x0010 -> line 4063
 *   +0x0024 -> line 4064
 *   +0x0028 -> line 4068
 *   +0x0030 -> line 4071
 *   +0x003c -> line 4072
 *   +0x0044 -> line 4075
 *   +0x004c -> line 4072
 *   +0x0050 -> line 4075
 *   +0x005c -> line 4076
 *   +0x0064 -> line 4078
 *   +0x0070 -> line 4080
 *   +0x007c -> line 4081
 *   +0x0080 -> line 4082
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\FuncRay2.cxx lines 4042–4054 */
/* addr: 0x0021b7b0  size: 44 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 4042
 *   +0x0004 -> line 4046
 *   +0x0010 -> line 4048
 *   +0x0014 -> line 4049
 *   +0x0018 -> line 4052
 *   +0x0020 -> line 4053
 *   +0x0024 -> line 4054
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\FuncRay2.cxx lines 3649–4032 */
/* addr: 0x0021b7e0  size: 452 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 3649
 *   +0x0004 -> line 3654
 *   +0x0008 -> line 3649
 *   +0x0024 -> line 3652
 *   +0x0028 -> line 3654
 *   +0x0058 -> line 3659
 *   +0x0060 -> line 3662
 *   +0x006c -> line 3666
 *   +0x0074 -> line 3670
 *   +0x0080 -> line 3677
 *   +0x0088 -> line 3683
 *   +0x0090 -> line 3684
 *   +0x0094 -> line 3683
 *   +0x0098 -> line 3685
 *   +0x00a8 -> line 3687
 *   +0x00b8 -> line 3692
 *   +0x00cc -> line 3703
 *   +0x00d4 -> line 3708
 *   +0x0124 -> line 3713
 *   +0x0128 -> line 3716
 *   +0x0130 -> line 3721
 *   +0x0138 -> line 3726
 *   +0x0140 -> line 3890
 *   +0x0148 -> line 3892
 *   +0x0150 -> line 3950
 *   +0x0158 -> line 3956
 *   +0x0160 -> line 3958
 *   +0x0168 -> line 3963
 *   +0x0170 -> line 3965
 *   +0x0178 -> line 3970
 *   +0x0180 -> line 3972
 *   +0x0188 -> line 4021
 *   +0x0190 -> line 4027
 *   +0x0198 -> line 4030
 *   +0x01a0 -> line 4031
 *   +0x01a4 -> line 4030
 *   +0x01a8 -> line 4032
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
extern "C" int fn_bAutoSaveFinished(void);
extern "C" unsigned char SHW_bDidCharacterHaveAShadowLastFrame(HIE_tdstSuperObject_* _hHandleOfCharacter);
extern "C" void M2D_fn_vForbidExitFromMenu(void);
extern "C" unsigned int M2D_fn_ulGetRevisitEnvironmentNumber(void);
extern "C" void M2D_fn_vDisplayEndOfGameRecapPage(void);
extern "C" int COLANTIBUG_hHandleOfCharacter;

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\FuncRay2.cxx lines 3463–3588 */
/* addr: 0x0021b9b0  size: 940 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 3463
 *   +0x0034 -> line 3477
 *   +0x0050 -> line 3487
 *   +0x0054 -> line 3488
 *   +0x0058 -> line 3487
 *   +0x005c -> line 3488
 *   +0x0064 -> line 3490
 *   +0x0068 -> line 3493
 *   +0x0070 -> line 3490
 *   +0x0078 -> line 3493
 *   +0x0084 -> line 3494
 *   +0x0094 -> line 3496
 *   +0x009c -> line 3494
 *   +0x00a0 -> line 3496
 *   +0x00ac -> line 3508
 *   +0x00b0 -> line 3497
 *   +0x00b4 -> line 3504
 *   +0x00b8 -> line 3497
 *   +0x00bc -> line 3504
 *   +0x00c0 -> line 3497
 *   +0x00c4 -> line 3507
 *   +0x00c8 -> line 3497
 *   +0x00cc -> line 3507
 *   +0x00d0 -> line 3504
 *   +0x00d4 -> line 3508
 *   +0x00d8 -> line 3504
 *   +0x00dc -> line 3507
 *   +0x00e0 -> line 3506
 *   +0x00e4 -> line 3507
 *   +0x00e8 -> line 3504
 *   +0x00ec -> line 3508
 *   +0x00f0 -> line 3497
 *   +0x00f4 -> line 3506
 *   +0x00fc -> line 3507
 *   +0x0100 -> line 3506
 *   +0x0104 -> line 3507
 *   +0x0108 -> line 3506
 *   +0x010c -> line 3507
 *   +0x0110 -> line 3506
 *   +0x0114 -> line 3507
 *   +0x012c -> line 3508
 *   +0x0134 -> line 3509
 *   +0x013c -> line 3510
 *   +0x0198 -> line 3513
 *   +0x01b8 -> line 3515
 *   +0x01d4 -> line 3516
 *   +0x01dc -> line 3517
 *   +0x01ec -> line 3518
 *   +0x01f0 -> line 3520
 *   +0x0200 -> line 3524
 *   +0x022c -> line 3525
 *   +0x0230 -> line 3527
 *   +0x0240 -> line 3530
 *   +0x024c -> line 3531
 *   +0x0254 -> line 3532
 *   +0x0264 -> line 3535
 *   +0x0270 -> line 3537
 *   +0x0278 -> line 3541
 *   +0x027c -> line 3543
 *   +0x0280 -> line 3540
 *   +0x0284 -> line 3543
 *   +0x0288 -> line 3541
 *   +0x028c -> line 3543
 *   +0x0290 -> line 3540
 *   +0x0298 -> line 3541
 *   +0x029c -> line 3543
 *   +0x02a4 -> line 3544
 *   +0x02b4 -> line 3545
 *   +0x02c4 -> line 3548
 *   +0x02d8 -> line 3551
 *   +0x02e4 -> line 3553
 *   +0x02ec -> line 3558
 *   +0x0328 -> line 3576
 *   +0x0330 -> line 3580
 *   +0x0348 -> line 3582
 *   +0x035c -> line 3585
 *   +0x0360 -> line 3587
 *   +0x0364 -> line 3585
 *   +0x037c -> line 3588
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
inline float MTH_xSqr3(float _x, float _y, float _z) { float _r; asm { mula.s _x, _x } asm { madda.s _y, _y } asm { madd.s _r, _z, _z } return _r; }
inline float MTH_xAbs(float _x) { float _r; asm { abs.s _r, _x } return _r; }
inline float MTH_xSqrt(float _x) { float _r; asm { sqrt.s _r, _x } return _r; }
inline float MTH_xCross(float _a, float _b, float _c, float _d) { float _r; asm { mula.s _a, _b } asm { msub.s _r, _c, _d } return _r; }
extern "C" void MAT_fn_vInvertRotation(MAT_tdstTransformation_* _hDest, MAT_tdstTransformation_* _hSource);
extern "C" void MAT_fn_vApplyOnVector(MTH3D_tdstVector_* _p_stDest, MAT_tdstTransformation_* _hTransform, MTH3D_tdstVector_* _p_stSource);
extern "C" void MAT_fn_vRotateVector(MTH3D_tdstVector_* _p_stDest, MAT_tdstTransformation_* _hTransform, MTH3D_tdstVector_* _p_stSource);
extern "C" void MAT_fn_vSetRotationVectors(MAT_tdstTransformation_* _hTransform, MTH3D_tdstVector_* _p_stVecI, MTH3D_tdstVector_* _p_stVecJ, MTH3D_tdstVector_* _p_stVecK);
extern "C" void HIE_fn_vComputeNewRelativeMatrix(HIE_tdstSuperObject_* hSprObj);
extern "C" void HIE_fn_vRefreshHierarchy(HIE_tdstSuperObject_* hSprObj);
extern "C" unsigned int fn_ulStandardGameGetCustomBitsSO(HIE_tdstSuperObject_* hSupObj);
extern "C" DNM_stDynamics* fn_p_stDynamGetDynamics(tdstDynam_* h_Dynam);
extern "C" void MEC_vImposeRotationMatrix(DNM_stDynamics* p_stDynamic, MAT_tdstTransformation_* hRotationMatrix);
extern "C" int HIE_gs_lCurrentFrame;
extern "C" float acosf(float x);
extern "C" float cosf(float x);
extern "C" float sinf(float x);
inline float MTH_xDot3(float _ax, float _bx, float _ay, float _by, float _az, float _bz) { float _r; asm { mula.s _ax, _bx } asm { madda.s _ay, _by } asm { madd.s _r, _az, _bz } return _r; }

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\FuncRay2.cxx lines 3446–3453 */
/* addr: 0x0021bd60  size: 64 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 3446
 *   +0x0014 -> line 3449
 *   +0x001c -> line 3451
 *   +0x0028 -> line 3452
 *   +0x002c -> line 3453
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\FuncRay2.cxx lines 3418–3435 */
/* addr: 0x0021bda0  size: 140 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 3418
 *   +0x0014 -> line 3425
 *   +0x001c -> line 3426
 *   +0x0020 -> line 3425
 *   +0x0024 -> line 3426
 *   +0x0030 -> line 3428
 *   +0x0038 -> line 3426
 *   +0x0040 -> line 3428
 *   +0x0048 -> line 3430
 *   +0x006c -> line 3433
 *   +0x0078 -> line 3435
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
/* Target +0x60..0x68 uses the R5900 accumulator MTH dot-product idiom,
 * which MWCC cannot emit from a C arithmetic expression. */
inline float MTH_xDotProduct(MTH3D_tdstVector_* left, MTH3D_tdstVector_* right)
{
    float rz, lz, ry, ly, rx, lx;
    rx = right->xX; lx = left->xX;
    ry = right->xY; ly = left->xY;
    rz = right->xZ; lz = left->xZ;
    float dot;
    asm { mula.s lx, rx }
    asm { madda.s ly, ry }
    asm { madd.s dot, lz, rz }
    return dot;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\FuncRay2.cxx lines 3372–3406 */
/* addr: 0x0021be30  size: 264 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 3372
 *   +0x0028 -> line 3377
 *   +0x002c -> line 3383
 *   +0x0044 -> line 3387
 *   +0x0054 -> line 3390
 *   +0x0058 -> line 3387
 *   +0x005c -> line 3390
 *   +0x0084 -> line 3393
 *   +0x0094 -> line 3395
 *   +0x00a8 -> line 3403
 *   +0x00e4 -> line 3404
 *   +0x00e8 -> line 3406
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
inline int MTH_M_xRealToLong(float xValue)
{
    int lResult;
    asm
    {
        cvt.w.s f30, xValue
        mfc1 lResult, f30
    }
    return lResult;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\FuncRay2.cxx lines 3317–3369 */
/* addr: 0x0021bf40  size: 368 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 3327
 *   +0x0004 -> line 3321
 *   +0x000c -> line 3317
 *   +0x0010 -> line 3321
 *   +0x0014 -> line 3327
 *   +0x002c -> line 3330
 *   +0x003c -> line 3356
 *   +0x0048 -> line 3334
 *   +0x004c -> line 3355
 *   +0x0050 -> line 3356
 *   +0x0054 -> line 3355
 *   +0x0058 -> line 3339
 *   +0x005c -> line 3355
 *   +0x0060 -> line 3356
 *   +0x006c -> line 3332
 *   +0x0070 -> line 3334
 *   +0x0080 -> line 3339
 *   +0x0090 -> line 3342
 *   +0x0098 -> line 3343
 *   +0x00a0 -> line 3345
 *   +0x00b0 -> line 3350
 *   +0x00bc -> line 3353
 *   +0x00c8 -> line 3355
 *   +0x00cc -> line 3353
 *   +0x00d0 -> line 3355
 *   +0x00d4 -> line 3353
 *   +0x00dc -> line 3355
 *   +0x00e0 -> line 3353
 *   +0x00e4 -> line 3355
 *   +0x00fc -> line 3356
 *   +0x0150 -> line 3362
 *   +0x0154 -> line 3361
 *   +0x0158 -> line 3367
 *   +0x0168 -> line 3369
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
/* Not original source, needs cleaning up: retail copies these position vectors
 * as three direct-sp lw/sw words; a word-array union view is the only form found
 * that reproduces it (same workaround as CAM_tduVectorCopy_ in DNMCame.c). */
typedef union tduVectorCopy_ {
    MTH3D_tdstVector_ stVector;
    unsigned int auWords[3];
} tduVectorCopy_;

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\FuncRay2.cxx lines 3242–3295 */
/* addr: 0x0021c0b0  size: 232 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 3242
 *   +0x001c -> line 3243
 *   +0x0020 -> line 3250
 *   +0x002c -> line 3251
 *   +0x0038 -> line 3255
 *   +0x0040 -> line 3251
 *   +0x0044 -> line 3255
 *   +0x004c -> line 3256
 *   +0x0050 -> line 3255
 *   +0x0054 -> line 3262
 *   +0x0058 -> line 3259
 *   +0x0060 -> line 3262
 *   +0x0094 -> line 3266
 *   +0x009c -> line 3271
 *   +0x00a4 -> line 3275
 *   +0x00ac -> line 3278
 *   +0x00b0 -> line 3291
 *   +0x00b4 -> line 3292
 *   +0x00b8 -> line 3291
 *   +0x00bc -> line 3292
 *   +0x00c8 -> line 3294
 *   +0x00cc -> line 3295
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\FuncRay2.cxx lines 3194–3226 */
/* addr: 0x0021c1a0  size: 188 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 3194
 *   +0x0018 -> line 3196
 *   +0x001c -> line 3194
 *   +0x0028 -> line 3195
 *   +0x0030 -> line 3204
 *   +0x0048 -> line 3206
 *   +0x006c -> line 3208
 *   +0x0080 -> line 3211
 *   +0x008c -> line 3222
 *   +0x0090 -> line 3223
 *   +0x0098 -> line 3225
 *   +0x009c -> line 3226
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\FuncRay2.cxx lines 3152–3183 */
/* addr: 0x0021c260  size: 136 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 3152
 *   +0x0004 -> line 3160
 *   +0x0008 -> line 3152
 *   +0x0018 -> line 3158
 *   +0x001c -> line 3160
 *   +0x0024 -> line 3163
 *   +0x0030 -> line 3164
 *   +0x0038 -> line 3166
 *   +0x0040 -> line 3167
 *   +0x0048 -> line 3169
 *   +0x004c -> line 3170
 *   +0x0050 -> line 3176
 *   +0x0054 -> line 3178
 *   +0x0058 -> line 3176
 *   +0x005c -> line 3178
 *   +0x0064 -> line 3181
 *   +0x0070 -> line 3182
 *   +0x0074 -> line 3183
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\FuncRay2.cxx lines 3128–3140 */
/* addr: 0x0021c2f0  size: 100 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 3128
 *   +0x0004 -> line 3131
 *   +0x0008 -> line 3128
 *   +0x0018 -> line 3129
 *   +0x001c -> line 3131
 *   +0x0024 -> line 3133
 *   +0x0038 -> line 3135
 *   +0x0040 -> line 3138
 *   +0x004c -> line 3139
 *   +0x0050 -> line 3140
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\FuncRay2.cxx lines 3074–3113 */
/* addr: 0x0021c360  size: 348 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 3074
 *   +0x0018 -> line 3075
 *   +0x001c -> line 3081
 *   +0x0024 -> line 3082
 *   +0x0028 -> line 3083
 *   +0x0034 -> line 3081
 *   +0x0038 -> line 3083
 *   +0x003c -> line 3086
 *   +0x0044 -> line 3088
 *   +0x0074 -> line 3091
 *   +0x008c -> line 3092
 *   +0x0094 -> line 3094
 *   +0x00a4 -> line 3095
 *   +0x00a8 -> line 3094
 *   +0x00ac -> line 3095
 *   +0x00b0 -> line 3094
 *   +0x00b8 -> line 3095
 *   +0x00d0 -> line 3096
 *   +0x00d8 -> line 3098
 *   +0x00f0 -> line 3099
 *   +0x00f8 -> line 3101
 *   +0x0110 -> line 3102
 *   +0x0118 -> line 3105
 *   +0x0120 -> line 3110
 *   +0x0128 -> line 3112
 *   +0x012c -> line 3110
 *   +0x0144 -> line 3113
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\FuncRay2.cxx lines 3018–3063 */
/* addr: 0x0021c4c0  size: 452 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 3018
 *   +0x001c -> line 3019
 *   +0x0020 -> line 3023
 *   +0x002c -> line 3025
 *   +0x004c -> line 3031
 *   +0x0058 -> line 3034
 *   +0x005c -> line 3031
 *   +0x0060 -> line 3034
 *   +0x0068 -> line 3031
 *   +0x0070 -> line 3034
 *   +0x0078 -> line 3035
 *   +0x0094 -> line 3037
 *   +0x00d4 -> line 3040
 *   +0x00dc -> line 3045
 *   +0x0130 -> line 3051
 *   +0x0190 -> line 3054
 *   +0x019c -> line 3061
 *   +0x01a4 -> line 3062
 *   +0x01a8 -> line 3063
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\FuncRay2.cxx lines 2987–3005 */
/* addr: 0x0021c690  size: 148 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 2987
 *   +0x0024 -> line 2988
 *   +0x0028 -> line 2994
 *   +0x0040 -> line 2997
 *   +0x004c -> line 2999
 *   +0x0060 -> line 3000
 *   +0x006c -> line 3003
 *   +0x0074 -> line 3004
 *   +0x0078 -> line 3005
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\FuncRay2.cxx lines 2952–2977 */
/* addr: 0x0021c730  size: 188 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 2952
 *   +0x0004 -> line 2956
 *   +0x0008 -> line 2952
 *   +0x0024 -> line 2953
 *   +0x0028 -> line 2956
 *   +0x0030 -> line 2963
 *   +0x0038 -> line 2964
 *   +0x003c -> line 2963
 *   +0x0040 -> line 2965
 *   +0x0050 -> line 2968
 *   +0x0054 -> line 2965
 *   +0x0058 -> line 2968
 *   +0x0068 -> line 2971
 *   +0x0070 -> line 2972
 *   +0x0074 -> line 2971
 *   +0x0088 -> line 2972
 *   +0x0090 -> line 2975
 *   +0x009c -> line 2976
 *   +0x00a0 -> line 2977
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\FuncRay2.cxx lines 2921–2949 */
/* addr: 0x0021c7f0  size: 196 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 2921
 *   +0x0020 -> line 2922
 *   +0x0028 -> line 2929
 *   +0x0040 -> line 2932
 *   +0x004c -> line 2938
 *   +0x005c -> line 2940
 *   +0x0060 -> line 2938
 *   +0x0064 -> line 2940
 *   +0x0074 -> line 2943
 *   +0x007c -> line 2944
 *   +0x0080 -> line 2943
 *   +0x0094 -> line 2944
 *   +0x009c -> line 2947
 *   +0x00a4 -> line 2948
 *   +0x00a8 -> line 2949
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\FuncRay2.cxx lines 2886–2905 */
/* addr: 0x0021c8c0  size: 60 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 2886
 *   +0x000c -> line 2892
 *   +0x0018 -> line 2902
 *   +0x002c -> line 2905
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\FuncRay2.cxx lines 2855–2881 */
/* addr: 0x0021c900  size: 140 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 2855
 *   +0x001c -> line 2865
 *   +0x0038 -> line 2867
 *   +0x005c -> line 2876
 *   +0x0064 -> line 2878
 *   +0x0070 -> line 2880
 *   +0x0074 -> line 2881
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\FuncRay2.cxx lines 2764–2848 */
/* addr: 0x0021c990  size: 516 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 2764
 *   +0x0028 -> line 2781
 *   +0x0044 -> line 2784
 *   +0x0054 -> line 2787
 *   +0x0058 -> line 2785
 *   +0x005c -> line 2787
 *   +0x0064 -> line 2788
 *   +0x006c -> line 2790
 *   +0x0078 -> line 2791
 *   +0x0080 -> line 2795
 *   +0x008c -> line 2798
 *   +0x0094 -> line 2800
 *   +0x00a0 -> line 2804
 *   +0x00ac -> line 2805
 *   +0x00b4 -> line 2808
 *   +0x00bc -> line 2812
 *   +0x00c8 -> line 2813
 *   +0x00d0 -> line 2816
 *   +0x00d8 -> line 2817
 *   +0x00e4 -> line 2822
 *   +0x00fc -> line 2823
 *   +0x0108 -> line 2828
 *   +0x010c -> line 2832
 *   +0x0114 -> line 2828
 *   +0x012c -> line 2832
 *   +0x0134 -> line 2834
 *   +0x01c0 -> line 2840
 *   +0x01c8 -> line 2841
 *   +0x01d0 -> line 2844
 *   +0x01dc -> line 2847
 *   +0x01e0 -> line 2848
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
extern "C" int MSWay_fn_lGetNumberWayPointInPath(tdstMSWay_* hWay);
extern "C" int MSWay_fn_lGetCurrentIndexInPath(tdstMSWay_* hWay);
extern "C" WP_tdstWayPoint_* MSWay_fn_hGetWayPointOfPath(tdstMSWay_* hWay, int iIndex);
extern "C" float WP_fnx_WayPoint_GetRadius(WP_tdstWayPoint_* _hWayPoint);
extern "C" void WP_fnv_WayPoint_GetVertex(WP_tdstWayPoint_* _hWayPoint, MTH3D_tdstVector_* _pstVector);

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\FuncRay2.cxx lines 2701–2748 */
/* addr: 0x0021cba0  size: 144 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 2701
 *   +0x0014 -> line 2708
 *   +0x001c -> line 2723
 *   +0x0020 -> line 2708
 *   +0x0024 -> line 2712
 *   +0x0028 -> line 2723
 *   +0x0030 -> line 2731
 *   +0x0034 -> line 2724
 *   +0x0038 -> line 2731
 *   +0x0040 -> line 2732
 *   +0x004c -> line 2734
 *   +0x0054 -> line 2736
 *   +0x0060 -> line 2741
 *   +0x0068 -> line 2742
 *   +0x0070 -> line 2744
 *   +0x007c -> line 2748
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\FuncRay2.cxx lines 2457–2697 */
/* addr: 0x0021cc30  size: 1116 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 2457
 *   +0x0010 -> line 2468
 *   +0x0014 -> line 2457
 *   +0x001c -> line 2467
 *   +0x0020 -> line 2457
 *   +0x0024 -> line 2471
 *   +0x0028 -> line 2457
 *   +0x0034 -> line 2472
 *   +0x0038 -> line 2457
 *   +0x003c -> line 2461
 *   +0x0040 -> line 2457
 *   +0x0048 -> line 2458
 *   +0x004c -> line 2480
 *   +0x0058 -> line 2484
 *   +0x0060 -> line 2490
 *   +0x0078 -> line 2493
 *   +0x0084 -> line 2494
 *   +0x0088 -> line 2493
 *   +0x008c -> line 2501
 *   +0x009c -> line 2507
 *   +0x00c8 -> line 2510
 *   +0x00d8 -> line 2512
 *   +0x00e0 -> line 2511
 *   +0x00e4 -> line 2512
 *   +0x00f0 -> line 2514
 *   +0x00f8 -> line 2521
 *   +0x010c -> line 2523
 *   +0x0114 -> line 2526
 *   +0x0128 -> line 2527
 *   +0x0130 -> line 2535
 *   +0x0144 -> line 2538
 *   +0x0158 -> line 2542
 *   +0x0160 -> line 2551
 *   +0x0170 -> line 2553
 *   +0x017c -> line 2556
 *   +0x0184 -> line 2558
 *   +0x0190 -> line 2562
 *   +0x0198 -> line 2564
 *   +0x01a4 -> line 2567
 *   +0x01d0 -> line 2576
 *   +0x01d8 -> line 2585
 *   +0x01dc -> line 2582
 *   +0x01e4 -> line 2585
 *   +0x01ec -> line 2589
 *   +0x01f8 -> line 2610
 *   +0x01fc -> line 2589
 *   +0x0200 -> line 2587
 *   +0x0204 -> line 2589
 *   +0x0278 -> line 2606
 *   +0x027c -> line 2608
 *   +0x0288 -> line 2610
 *   +0x02b8 -> line 2620
 *   +0x02bc -> line 2621
 *   +0x02c0 -> line 2623
 *   +0x02cc -> line 2624
 *   +0x02d0 -> line 2625
 *   +0x02d8 -> line 2627
 *   +0x02e0 -> line 2636
 *   +0x02ec -> line 2638
 *   +0x02fc -> line 2640
 *   +0x0308 -> line 2641
 *   +0x031c -> line 2642
 *   +0x0320 -> line 2643
 *   +0x032c -> line 2645
 *   +0x033c -> line 2647
 *   +0x0340 -> line 2648
 *   +0x035c -> line 2649
 *   +0x0360 -> line 2651
 *   +0x0368 -> line 2655
 *   +0x0374 -> line 2662
 *   +0x037c -> line 2673
 *   +0x0380 -> line 2657
 *   +0x0384 -> line 2662
 *   +0x0388 -> line 2657
 *   +0x03a0 -> line 2662
 *   +0x03b8 -> line 2666
 *   +0x03c4 -> line 2667
 *   +0x03cc -> line 2669
 *   +0x03d0 -> line 2670
 *   +0x03d4 -> line 2671
 *   +0x03dc -> line 2672
 *   +0x03e0 -> line 2673
 *   +0x03ec -> line 2674
 *   +0x03f4 -> line 2675
 *   +0x03f8 -> line 2676
 *   +0x0400 -> line 2681
 *   +0x040c -> line 2682
 *   +0x0410 -> line 2683
 *   +0x0418 -> line 2686
 *   +0x0420 -> line 2691
 *   +0x0428 -> line 2696
 *   +0x042c -> line 2697
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
struct LST2_tdstAnchorToWP_tdHandleOfArcDyn {
    WP_tdstArc_* hFirstElementDyn;
    WP_tdstArc_* hLastElementDyn;
    int lNumberOfElementsDyn;
};
struct WP_tdstListOfArc_ {
    LST2_tdstAnchorToWP_tdHandleOfArcDyn m_hArc;
};
struct WP_tdstArc_ {
    WP_tdstArc_* hNextBrotherDyn;
    WP_tdstArc_* hPrevBrotherDyn;
    LST2_tdstAnchorToWP_tdHandleOfArcDyn* hFatherDyn;
    WP_tdstGraphNode_* m_hNode;
    unsigned int m_ulCapability;
    unsigned int m_ulCapabilityInit;
    int m_lWeight;
    int m_lWeightInit;
};
extern "C" WP_tdstListOfArc_* WPG_fn_hGetArcList(WP_tdstGraphNode_* hSrcNode);

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\FuncRay2.cxx lines 2046–2454 */
/* addr: 0x0021d090  size: 2460 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 2046
 *   +0x0004 -> line 2052
 *   +0x0008 -> line 2046
 *   +0x0018 -> line 2050
 *   +0x001c -> line 2046
 *   +0x0030 -> line 2048
 *   +0x0034 -> line 2046
 *   +0x0068 -> line 2047
 *   +0x006c -> line 2052
 *   +0x0070 -> line 2065
 *   +0x0074 -> line 2048
 *   +0x0078 -> line 2051
 *   +0x007c -> line 2065
 *   +0x0094 -> line 2068
 *   +0x009c -> line 2069
 *   +0x00a8 -> line 2072
 *   +0x00bc -> line 2076
 *   +0x00c4 -> line 2078
 *   +0x00d0 -> line 2080
 *   +0x00e0 -> line 2081
 *   +0x00e8 -> line 2085
 *   +0x00f4 -> line 2084
 *   +0x00f8 -> line 2085
 *   +0x00fc -> line 2087
 *   +0x0108 -> line 2090
 *   +0x0118 -> line 2091
 *   +0x011c -> line 2090
 *   +0x0120 -> line 2091
 *   +0x012c -> line 2092
 *   +0x0138 -> line 2091
 *   +0x0140 -> line 2092
 *   +0x0148 -> line 2093
 *   +0x0154 -> line 2095
 *   +0x0158 -> line 2093
 *   +0x015c -> line 2095
 *   +0x0164 -> line 2093
 *   +0x016c -> line 2095
 *   +0x0174 -> line 2097
 *   +0x0194 -> line 2099
 *   +0x01a4 -> line 2100
 *   +0x01a8 -> line 2104
 *   +0x01b8 -> line 2105
 *   +0x01bc -> line 2106
 *   +0x01d4 -> line 2107
 *   +0x01dc -> line 2113
 *   +0x01e8 -> line 2116
 *   +0x01f8 -> line 2117
 *   +0x01fc -> line 2116
 *   +0x0200 -> line 2118
 *   +0x0208 -> line 2120
 *   +0x020c -> line 2122
 *   +0x0238 -> line 2127
 *   +0x0248 -> line 2128
 *   +0x024c -> line 2134
 *   +0x025c -> line 2135
 *   +0x0260 -> line 2136
 *   +0x0278 -> line 2137
 *   +0x0280 -> line 2149
 *   +0x028c -> line 2151
 *   +0x0294 -> line 2152
 *   +0x02a0 -> line 2156
 *   +0x02c0 -> line 2158
 *   +0x02cc -> line 2160
 *   +0x02dc -> line 2162
 *   +0x02ec -> line 2164
 *   +0x0300 -> line 2165
 *   +0x0370 -> line 2204
 *   +0x037c -> line 2205
 *   +0x0390 -> line 2209
 *   +0x0394 -> line 2205
 *   +0x03b8 -> line 2207
 *   +0x03e0 -> line 2209
 *   +0x03e8 -> line 2212
 *   +0x0418 -> line 2219
 *   +0x0424 -> line 2223
 *   +0x043c -> line 2225
 *   +0x0468 -> line 2230
 *   +0x04a0 -> line 2238
 *   +0x04a8 -> line 2240
 *   +0x04b0 -> line 2243
 *   +0x04f0 -> line 2245
 *   +0x04fc -> line 2248
 *   +0x0514 -> line 2257
 *   +0x0530 -> line 2258
 *   +0x0534 -> line 2257
 *   +0x0540 -> line 2260
 *   +0x0548 -> line 2263
 *   +0x0564 -> line 2264
 *   +0x0568 -> line 2263
 *   +0x0574 -> line 2268
 *   +0x0580 -> line 2272
 *   +0x05b0 -> line 2279
 *   +0x05e8 -> line 2283
 *   +0x0610 -> line 2284
 *   +0x0624 -> line 2285
 *   +0x0628 -> line 2284
 *   +0x062c -> line 2285
 *   +0x0648 -> line 2286
 *   +0x0668 -> line 2288
 *   +0x0674 -> line 2289
 *   +0x0678 -> line 2288
 *   +0x067c -> line 2289
 *   +0x06a4 -> line 2292
 *   +0x06a8 -> line 2293
 *   +0x06ac -> line 2299
 *   +0x06b0 -> line 2300
 *   +0x06c8 -> line 2301
 *   +0x06d0 -> line 2302
 *   +0x06dc -> line 2309
 *   +0x06ec -> line 2310
 *   +0x06f0 -> line 2309
 *   +0x06f4 -> line 2344
 *   +0x0704 -> line 2345
 *   +0x0708 -> line 2346
 *   +0x071c -> line 2347
 *   +0x0720 -> line 2354
 *   +0x0734 -> line 2355
 *   +0x074c -> line 2357
 *   +0x0758 -> line 2359
 *   +0x0760 -> line 2360
 *   +0x0768 -> line 2365
 *   +0x0788 -> line 2368
 *   +0x0794 -> line 2370
 *   +0x07a4 -> line 2371
 *   +0x07a8 -> line 2373
 *   +0x07b4 -> line 2375
 *   +0x07c8 -> line 2377
 *   +0x07f8 -> line 2386
 *   +0x0804 -> line 2389
 *   +0x083c -> line 2401
 *   +0x0858 -> line 2403
 *   +0x0890 -> line 2409
 *   +0x08a8 -> line 2413
 *   +0x08ac -> line 2409
 *   +0x08b4 -> line 2413
 *   +0x08e0 -> line 2415
 *   +0x08ec -> line 2418
 *   +0x0900 -> line 2424
 *   +0x0904 -> line 2427
 *   +0x0910 -> line 2431
 *   +0x0914 -> line 2430
 *   +0x0918 -> line 2436
 *   +0x0928 -> line 2439
 *   +0x092c -> line 2440
 *   +0x0930 -> line 2439
 *   +0x0934 -> line 2440
 *   +0x093c -> line 2450
 *   +0x0944 -> line 2453
 *   +0x0948 -> line 2454
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\FuncRay2.cxx lines 1962–2042 */
/* addr: 0x0021da30  size: 604 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1962
 *   +0x0004 -> line 1968
 *   +0x0008 -> line 1962
 *   +0x002c -> line 1966
 *   +0x0030 -> line 1962
 *   +0x0050 -> line 1963
 *   +0x0054 -> line 1968
 *   +0x0058 -> line 1974
 *   +0x0060 -> line 1975
 *   +0x006c -> line 1978
 *   +0x007c -> line 1982
 *   +0x0080 -> line 1978
 *   +0x0084 -> line 1982
 *   +0x0090 -> line 1985
 *   +0x009c -> line 1982
 *   +0x00a4 -> line 1985
 *   +0x00ac -> line 1989
 *   +0x00b0 -> line 1991
 *   +0x00c4 -> line 1995
 *   +0x00cc -> line 1997
 *   +0x00d4 -> line 1998
 *   +0x00dc -> line 2002
 *   +0x00e8 -> line 2004
 *   +0x00f4 -> line 2006
 *   +0x0108 -> line 2007
 *   +0x0114 -> line 2008
 *   +0x0138 -> line 2010
 *   +0x0144 -> line 2013
 *   +0x0148 -> line 2010
 *   +0x0154 -> line 2013
 *   +0x016c -> line 2015
 *   +0x0198 -> line 2020
 *   +0x01d0 -> line 2024
 *   +0x01dc -> line 2025
 *   +0x01e0 -> line 2024
 *   +0x01e4 -> line 2028
 *   +0x01e8 -> line 2029
 *   +0x01f8 -> line 2030
 *   +0x0200 -> line 2031
 *   +0x020c -> line 2039
 *   +0x0214 -> line 2041
 *   +0x0218 -> line 2042
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
extern "C" float fn_xGetDistanceWaypointMax(void);
extern "C" float fn_xGetDistanceWaypointMin(void);
extern "C" int WPG_fn_lNumberOfWaypointOfGraph(WP_tdstGraph_* hGraph);
extern "C" WP_tdstWayPoint_* WPG_fn_hGetWaypointOfGraph(WP_tdstGraph_* hGraph, int iIndex, int* _plTypeOfWP);
extern "C" void WP_fnv_WayPoint_ComputeLocation(WP_tdstWayPoint_* _hWayPoint, MTH3D_tdstVector_* _p_stVertex);

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\FuncRay2.cxx lines 1930–1955 */
/* addr: 0x0021dc90  size: 144 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1930
 *   +0x0014 -> line 1931
 *   +0x0018 -> line 1936
 *   +0x0020 -> line 1940
 *   +0x0024 -> line 1936
 *   +0x0028 -> line 1940
 *   +0x0034 -> line 1942
 *   +0x0038 -> line 1940
 *   +0x0040 -> line 1942
 *   +0x0050 -> line 1945
 *   +0x0058 -> line 1946
 *   +0x0064 -> line 1947
 *   +0x006c -> line 1953
 *   +0x0074 -> line 1954
 *   +0x0078 -> line 1955
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\FuncRay2.cxx lines 1713–1926 */
/* addr: 0x0021dd20  size: 964 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1713
 *   +0x0028 -> line 1714
 *   +0x002c -> line 1724
 *   +0x0044 -> line 1726
 *   +0x0050 -> line 1728
 *   +0x0058 -> line 1730
 *   +0x0074 -> line 1733
 *   +0x007c -> line 1734
 *   +0x0084 -> line 1736
 *   +0x0090 -> line 1739
 *   +0x0094 -> line 1740
 *   +0x0098 -> line 1739
 *   +0x00a0 -> line 1740
 *   +0x00a8 -> line 1743
 *   +0x00d0 -> line 1748
 *   +0x00d8 -> line 1750
 *   +0x00e4 -> line 1751
 *   +0x00ec -> line 1758
 *   +0x00fc -> line 1759
 *   +0x010c -> line 1761
 *   +0x0118 -> line 1762
 *   +0x0120 -> line 1768
 *   +0x0128 -> line 1770
 *   +0x0134 -> line 1771
 *   +0x013c -> line 1777
 *   +0x0144 -> line 1779
 *   +0x0150 -> line 1780
 *   +0x0158 -> line 1786
 *   +0x0168 -> line 1787
 *   +0x0178 -> line 1790
 *   +0x0184 -> line 1791
 *   +0x018c -> line 1797
 *   +0x01a0 -> line 1798
 *   +0x01b0 -> line 1801
 *   +0x01bc -> line 1802
 *   +0x01c4 -> line 1810
 *   +0x01d4 -> line 1811
 *   +0x01e4 -> line 1814
 *   +0x01f0 -> line 1815
 *   +0x01f8 -> line 1821
 *   +0x0208 -> line 1824
 *   +0x0218 -> line 1827
 *   +0x0224 -> line 1828
 *   +0x022c -> line 1836
 *   +0x023c -> line 1837
 *   +0x0240 -> line 1838
 *   +0x0250 -> line 1839
 *   +0x0254 -> line 1840
 *   +0x0264 -> line 1841
 *   +0x0268 -> line 1843
 *   +0x027c -> line 1846
 *   +0x0288 -> line 1847
 *   +0x0290 -> line 1853
 *   +0x02a0 -> line 1856
 *   +0x02b0 -> line 1859
 *   +0x02bc -> line 1860
 *   +0x02c4 -> line 1866
 *   +0x02d4 -> line 1867
 *   +0x02d8 -> line 1868
 *   +0x02e8 -> line 1871
 *   +0x02fc -> line 1874
 *   +0x0308 -> line 1875
 *   +0x0310 -> line 1885
 *   +0x0320 -> line 1888
 *   +0x0330 -> line 1891
 *   +0x033c -> line 1892
 *   +0x0344 -> line 1902
 *   +0x0354 -> line 1905
 *   +0x0358 -> line 1902
 *   +0x035c -> line 1905
 *   +0x0364 -> line 1909
 *   +0x0384 -> line 1912
 *   +0x0390 -> line 1913
 *   +0x0398 -> line 1922
 *   +0x03a0 -> line 1925
 *   +0x03a4 -> line 1926
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
extern "C" int MSWay_fn_lChangeWeightForNextWayPointOfPath(tdstMSWay_* hWay, int iIndex, int lWeight);
extern "C" int MSWay_fn_lGetWeightForNextWayPointOfPath(tdstMSWay_* hWay, int iIndex);
extern "C" int MSWay_fn_lChangeCapsForNextWayPointOfPath(tdstMSWay_* hWay, int iIndex, unsigned int ulNewCaps, int lValue);
extern "C" unsigned int MSWay_fn_ulGetCapsForNextWayPointOfPath(tdstMSWay_* hWay, int iIndex);
extern "C" int MSWay_fn_lIncrementCurrentIndexInPath(tdstMSWay_* hWay, int iStep);
extern "C" int MSWay_fn_lLookForWPInMSWay(tdstMSWay_* _hWay, WP_tdstWayPoint_* _hWayPoint);
extern "C" int MSWay_fn_lSetCurrentIndexInPath(tdstMSWay_* hWay, int _lIndex);
extern "C" int MSWay_fn_lGetFirstIndexInPath(tdstMSWay_* hWay);
extern "C" int MSWay_fn_lGetLastIndexInPath(tdstMSWay_* hWay);

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\FuncRay2.cxx lines 1523–1709 */
/* addr: 0x0021e0f0  size: 864 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1523
 *   +0x002c -> line 1541
 *   +0x0030 -> line 1542
 *   +0x0048 -> line 1544
 *   +0x004c -> line 1547
 *   +0x0054 -> line 1544
 *   +0x005c -> line 1547
 *   +0x0068 -> line 1559
 *   +0x006c -> line 1551
 *   +0x0070 -> line 1559
 *   +0x0098 -> line 1564
 *   +0x00a8 -> line 1565
 *   +0x00ac -> line 1566
 *   +0x00bc -> line 1567
 *   +0x00c0 -> line 1569
 *   +0x00d0 -> line 1571
 *   +0x00d8 -> line 1572
 *   +0x00e4 -> line 1577
 *   +0x0108 -> line 1578
 *   +0x0110 -> line 1580
 *   +0x0128 -> line 1582
 *   +0x0130 -> line 1583
 *   +0x0140 -> line 1584
 *   +0x0148 -> line 1585
 *   +0x0150 -> line 1587
 *   +0x0158 -> line 1588
 *   +0x015c -> line 1592
 *   +0x0168 -> line 1593
 *   +0x0170 -> line 1598
 *   +0x0174 -> line 1602
 *   +0x0184 -> line 1603
 *   +0x0188 -> line 1605
 *   +0x0198 -> line 1607
 *   +0x01a0 -> line 1608
 *   +0x01ac -> line 1611
 *   +0x01c0 -> line 1613
 *   +0x01c8 -> line 1614
 *   +0x01d8 -> line 1615
 *   +0x01e0 -> line 1616
 *   +0x01e8 -> line 1618
 *   +0x01f0 -> line 1619
 *   +0x01f4 -> line 1623
 *   +0x0200 -> line 1624
 *   +0x0208 -> line 1628
 *   +0x020c -> line 1632
 *   +0x021c -> line 1633
 *   +0x0220 -> line 1635
 *   +0x0230 -> line 1637
 *   +0x0238 -> line 1638
 *   +0x0244 -> line 1641
 *   +0x0254 -> line 1643
 *   +0x025c -> line 1645
 *   +0x026c -> line 1646
 *   +0x0274 -> line 1647
 *   +0x027c -> line 1649
 *   +0x0284 -> line 1650
 *   +0x0288 -> line 1654
 *   +0x0294 -> line 1655
 *   +0x029c -> line 1661
 *   +0x02a0 -> line 1668
 *   +0x02b0 -> line 1670
 *   +0x02b8 -> line 1671
 *   +0x02c4 -> line 1679
 *   +0x02c8 -> line 1681
 *   +0x02e4 -> line 1683
 *   +0x02ec -> line 1684
 *   +0x02fc -> line 1685
 *   +0x0304 -> line 1686
 *   +0x030c -> line 1688
 *   +0x0314 -> line 1689
 *   +0x0318 -> line 1695
 *   +0x0324 -> line 1696
 *   +0x032c -> line 1705
 *   +0x0338 -> line 1708
 *   +0x033c -> line 1709
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
extern "C" WP_tdstGraph_* WPG_fn_lShortestPath(WP_tdstGraph_* hGraph, WP_tdstWayPoint_* hSrcWayPoint, WP_tdstWayPoint_* hDstWayPoint, unsigned int ulCapability);
extern "C" WP_tdstGraph_* WPG_fn_lBuildOrderedPath(WP_tdstGraph_* hGraph, WP_tdstWayPoint_* hStartWP, int bIsCircular, int bIsRandom);
extern "C" WP_tdstGraph_* WPG_fn_lBuildRandomPath(WP_tdstGraph_* _hGraph, WP_tdstWayPoint_* _hStartWP, int _bIsCircular);
extern "C" void MSWay_fn_vSetPath(tdstMSWay_* hWay, WP_tdstGraph_* hPath, char _bIsCircular);
extern "C" void MSWay_fn_vDesinitPath(tdstMSWay_* hWay);

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\FuncRay2.cxx lines 1424–1519 */
/* addr: 0x0021e450  size: 544 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1424
 *   +0x0028 -> line 1425
 *   +0x002c -> line 1433
 *   +0x0034 -> line 1437
 *   +0x0038 -> line 1433
 *   +0x003c -> line 1438
 *   +0x0048 -> line 1439
 *   +0x004c -> line 1440
 *   +0x005c -> line 1441
 *   +0x0060 -> line 1443
 *   +0x0068 -> line 1445
 *   +0x0074 -> line 1447
 *   +0x007c -> line 1448
 *   +0x0084 -> line 1451
 *   +0x0090 -> line 1453
 *   +0x0098 -> line 1456
 *   +0x00d0 -> line 1460
 *   +0x00ec -> line 1461
 *   +0x00f4 -> line 1462
 *   +0x00fc -> line 1463
 *   +0x010c -> line 1465
 *   +0x0114 -> line 1471
 *   +0x0120 -> line 1472
 *   +0x0124 -> line 1473
 *   +0x0138 -> line 1474
 *   +0x013c -> line 1476
 *   +0x0154 -> line 1479
 *   +0x0160 -> line 1480
 *   +0x0168 -> line 1487
 *   +0x0184 -> line 1488
 *   +0x018c -> line 1489
 *   +0x0194 -> line 1490
 *   +0x01a4 -> line 1492
 *   +0x01ac -> line 1498
 *   +0x01bc -> line 1501
 *   +0x01c0 -> line 1499
 *   +0x01c4 -> line 1501
 *   +0x01c8 -> line 1499
 *   +0x01cc -> line 1501
 *   +0x01d8 -> line 1504
 *   +0x01e4 -> line 1505
 *   +0x01ec -> line 1515
 *   +0x01f4 -> line 1518
 *   +0x01f8 -> line 1519
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\FuncRay2.cxx lines 1201–1420 */
/* addr: 0x0021e670  size: 1880 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1201
 *   +0x0004 -> line 1208
 *   +0x0008 -> line 1201
 *   +0x000c -> line 1211
 *   +0x0010 -> line 1201
 *   +0x0014 -> line 1208
 *   +0x0018 -> line 1201
 *   +0x001c -> line 1211
 *   +0x0020 -> line 1201
 *   +0x003c -> line 1215
 *   +0x0040 -> line 1201
 *   +0x0044 -> line 1213
 *   +0x0048 -> line 1201
 *   +0x0068 -> line 1211
 *   +0x006c -> line 1210
 *   +0x0070 -> line 1208
 *   +0x0074 -> line 1214
 *   +0x0078 -> line 1217
 *   +0x007c -> line 1214
 *   +0x0084 -> line 1210
 *   +0x008c -> line 1214
 *   +0x0090 -> line 1225
 *   +0x00a8 -> line 1229
 *   +0x00b8 -> line 1232
 *   +0x00bc -> line 1229
 *   +0x00c0 -> line 1232
 *   +0x00ec -> line 1234
 *   +0x0118 -> line 1241
 *   +0x0128 -> line 1242
 *   +0x012c -> line 1241
 *   +0x0130 -> line 1242
 *   +0x014c -> line 1245
 *   +0x015c -> line 1246
 *   +0x017c -> line 1249
 *   +0x018c -> line 1250
 *   +0x01ac -> line 1253
 *   +0x01c0 -> line 1254
 *   +0x01c8 -> line 1255
 *   +0x01cc -> line 1254
 *   +0x01d8 -> line 1258
 *   +0x01f0 -> line 1261
 *   +0x0200 -> line 1267
 *   +0x0204 -> line 1261
 *   +0x0208 -> line 1267
 *   +0x023c -> line 1269
 *   +0x024c -> line 1275
 *   +0x0250 -> line 1269
 *   +0x0254 -> line 1275
 *   +0x0288 -> line 1282
 *   +0x0290 -> line 1284
 *   +0x0294 -> line 1282
 *   +0x02c8 -> line 1284
 *   +0x0304 -> line 1285
 *   +0x0318 -> line 1289
 *   +0x0344 -> line 1290
 *   +0x03b8 -> line 1293
 *   +0x0418 -> line 1295
 *   +0x044c -> line 1297
 *   +0x0478 -> line 1298
 *   +0x0480 -> line 1302
 *   +0x04ac -> line 1304
 *   +0x04d8 -> line 1308
 *   +0x04ec -> line 1312
 *   +0x04f8 -> line 1314
 *   +0x0500 -> line 1320
 *   +0x051c -> line 1321
 *   +0x0524 -> line 1329
 *   +0x0534 -> line 1330
 *   +0x0538 -> line 1329
 *   +0x053c -> line 1340
 *   +0x0540 -> line 1342
 *   +0x0544 -> line 1340
 *   +0x0548 -> line 1341
 *   +0x054c -> line 1342
 *   +0x0550 -> line 1341
 *   +0x0560 -> line 1342
 *   +0x0568 -> line 1344
 *   +0x058c -> line 1351
 *   +0x059c -> line 1352
 *   +0x05a0 -> line 1351
 *   +0x05a4 -> line 1352
 *   +0x05b0 -> line 1353
 *   +0x05b8 -> line 1352
 *   +0x05bc -> line 1353
 *   +0x05c4 -> line 1354
 *   +0x05f8 -> line 1358
 *   +0x0600 -> line 1362
 *   +0x0608 -> line 1363
 *   +0x0610 -> line 1368
 *   +0x0620 -> line 1370
 *   +0x0624 -> line 1368
 *   +0x0628 -> line 1370
 *   +0x066c -> line 1391
 *   +0x067c -> line 1395
 *   +0x06c4 -> line 1414
 *   +0x06d0 -> line 1416
 *   +0x0708 -> line 1419
 *   +0x070c -> line 1416
 *   +0x0710 -> line 1420
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
struct LST2_tdstAnchorToSECT_tdxHandleOfElementLstGraphicInteractionOpt {
    SECT_tdstListOfSOSectorsInGraphicInteraction_* hFirstElementOpt; /* +0x0 */
    int lNumberOfElementsOpt; /* +0x4 */
};
struct SECT_tdstListOfSOSectorsInGraphicInteraction_ {
    short wLevelOfDetail; /* +0x0 */
    char cDisplayMode; /* +0x2 */
    HIE_tdstSuperObject_* hPointerOfSectorSO; /* +0x4 */
};
struct SECT_tdstSectorGraphicHead_ {
    unsigned char _pad_00[0x20];
    LST2_tdstAnchorToSECT_tdxHandleOfElementLstGraphicInteractionOpt stListOfSectorsInGraphicInteraction; /* +0x20 */
};
extern "C" HIE_tdstSuperObject_* fn_hGetClosestPersoInSector(HIE_tdstSuperObject_* _hCloserSO, float* _p_xBestDist, float* _p_xPrevWeight, HIE_tdstSuperObject_* _hMe, MTH3D_tdstVector_* _p_stMyVector, MTH3D_tdstVector_* _p_stActorSighting, MAT_tdstTransformation_* _p_stGlobToPerso, HIE_tdstSuperObject_* _hSector, unsigned int _ulFilterCustomBits, unsigned int _ulUnused, float _xXWeight, float _x2DWeight, float _x3DWeight, float _xCosXoY, float _xCosYoZ, tdstFamilyList_* _hFamily, tdeFuncId_ _eFuncId);
extern "C" void MAT_fn_vGetRotationVectors(MAT_tdstTransformation_* _hTransform, MTH3D_tdstVector_* _p_stVecI, MTH3D_tdstVector_* _p_stVecJ, MTH3D_tdstVector_* _p_stVecK);
extern "C" void MAT_fn_vGetRotationVectorBaseJ(MAT_tdstTransformation_* _hTransform, MTH3D_tdstVector_* _p_stVecJ);
inline void MTH3D_M_vNormalizeVector(MTH3D_tdstVector_* R, MTH3D_tdstVector_* A)
{
    float xNorm = MTH_xSqrt(MTH_xSqr3(A->xX, A->xY, A->xZ));
    if (xNorm != 0.0f) {
        float xInv = 1.0f / xNorm;
        R->xX = xInv * A->xX;
        R->xY = xInv * A->xY;
        R->xZ = xInv * A->xZ;
    } else {
        *R = *A;
    }
}
inline void MTH3D_M_vCrossProductVector(MTH3D_tdstVector_* R, MTH3D_tdstVector_* A, MTH3D_tdstVector_* B)
{
    R->xX = MTH_xCross(A->xY, B->xZ, A->xZ, B->xY);
    R->xY = MTH_xCross(A->xZ, B->xX, A->xX, B->xZ);
    R->xZ = MTH_xCross(A->xX, B->xY, A->xY, B->xX);
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\FuncRay2.cxx lines 985–1198 */
/* addr: 0x0021edd0  size: 1592 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 985
 *   +0x0004 -> line 1000
 *   +0x0008 -> line 985
 *   +0x0024 -> line 1000
 *   +0x0074 -> line 1009
 *   +0x0078 -> line 1015
 *   +0x0094 -> line 1025
 *   +0x009c -> line 1028
 *   +0x00a0 -> line 1032
 *   +0x00b0 -> line 1034
 *   +0x00b4 -> line 1036
 *   +0x00e4 -> line 1039
 *   +0x00e8 -> line 1049
 *   +0x00ec -> line 1050
 *   +0x00f4 -> line 1052
 *   +0x00fc -> line 1055
 *   +0x0108 -> line 1058
 *   +0x0110 -> line 1062
 *   +0x0140 -> line 1067
 *   +0x014c -> line 1076
 *   +0x0150 -> line 1067
 *   +0x0164 -> line 1076
 *   +0x0178 -> line 1080
 *   +0x01ac -> line 1081
 *   +0x01b0 -> line 1080
 *   +0x01b8 -> line 1081
 *   +0x0238 -> line 1087
 *   +0x023c -> line 1094
 *   +0x0248 -> line 1096
 *   +0x0250 -> line 1098
 *   +0x0280 -> line 1099
 *   +0x02e0 -> line 1100
 *   +0x0304 -> line 1101
 *   +0x0320 -> line 1103
 *   +0x0348 -> line 1104
 *   +0x034c -> line 1103
 *   +0x0354 -> line 1104
 *   +0x03d0 -> line 1110
 *   +0x03d4 -> line 1118
 *   +0x03e0 -> line 1128
 *   +0x043c -> line 1130
 *   +0x0444 -> line 1132
 *   +0x0448 -> line 1128
 *   +0x0450 -> line 1130
 *   +0x0454 -> line 1128
 *   +0x0460 -> line 1130
 *   +0x0468 -> line 1132
 *   +0x046c -> line 1133
 *   +0x0480 -> line 1134
 *   +0x0484 -> line 1133
 *   +0x0488 -> line 1136
 *   +0x048c -> line 1137
 *   +0x04a8 -> line 1141
 *   +0x04d4 -> line 1147
 *   +0x04ec -> line 1165
 *   +0x04f0 -> line 1147
 *   +0x04f4 -> line 1165
 *   +0x04f8 -> line 1164
 *   +0x04fc -> line 1165
 *   +0x0510 -> line 1169
 *   +0x0514 -> line 1168
 *   +0x051c -> line 1166
 *   +0x0520 -> line 1168
 *   +0x0528 -> line 1169
 *   +0x0548 -> line 1173
 *   +0x054c -> line 1170
 *   +0x0554 -> line 1173
 *   +0x0570 -> line 1174
 *   +0x0574 -> line 1177
 *   +0x0578 -> line 1174
 *   +0x0580 -> line 1177
 *   +0x0600 -> line 1185
 *   +0x0604 -> line 1184
 *   +0x0608 -> line 1196
 *   +0x0618 -> line 1198
 *   +0x0620 -> line 1197
 *   +0x0624 -> line 1198
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
struct tdstAChannel_ {
    HIE_tdstSuperObject_* hSupObject; /* +0x0 */
    HIE_tdstSuperObject_* hZoomSupObject; /* +0x4 */
    tdstAChannel_* p_stNextActiveChannel; /* +0x8 */
};
extern "C" COL_tdstCollideObject_* fn_hGetCollideZdxOfTypeAtIndex(unsigned char ucZoneType, unsigned short uwIndex, HIE_tdstSuperObject_* hSuperObj);
extern "C" int fn_lGetZdxListNumberOfElements(unsigned char ucZoneType, HIE_tdstSuperObject_* hSuperObj);
extern "C" COL_tdstCollideObject_* fn_hIsThisZoneActive(HIE_tdstSuperObject_* _hCharacter, unsigned char _ucZoneType, unsigned char _ucZoneNumber);
extern "C" void* fn_hIsTypeExistsInGeoObj(COL_tdstCollideObject_* _hGeoObj, unsigned short _wMaterialMask);
extern "C" unsigned char fn_vGetZoneCenter(COL_tdstCollideObject_* _hGeoObj, MTH3D_tdstVector_* _hZoneCenter);
extern "C" tdstPhysicalCollSet_* PO_fn_hGetCollideSet(PO_tdstPhysicalObject_* hPO);
extern "C" COL_tdstCollideObject_* PCS_fn_hGetZddGeoObjOfPhysicalCollSet(tdstPhysicalCollSet_* _hPhyCollSet);
extern "C" COL_tdstCollideObject_* PCS_fn_hGetZdeGeoObjOfPhysicalCollSet(tdstPhysicalCollSet_* _hPhyCollSet);
extern "C" COL_tdstCollideObject_* PCS_fn_hGetZdmGeoObjOfPhysicalCollSet(tdstPhysicalCollSet_* _hPhyCollSet);
extern "C" COL_tdstCollideObject_* PCS_fn_hGetZdrGeoObjOfPhysicalCollSet(tdstPhysicalCollSet_* _hPhyCollSet);
extern "C" void MAT_fn_vGetScale(MAT_tdstTransformation_* _hTransform, MTH3D_tdstVector_* _p_stScaleVector);
extern "C" void MAT_fn_vInvert(MAT_tdstTransformation_* _hDest, MAT_tdstTransformation_* _hSource);
/* MatSp.h inline: the VU0 macro-mode instructions have no C form. */
inline void MAT_fn_vApplyOnVertex(MTH3D_tdstVector_* VectDest, MAT_tdstTransformation_* _hTransform, MTH3D_tdstVector_* VectA)
{
    MTH4D_tdstVector_ Vtmp;
    MTH4D_tdstMatrix_* p_stMatrix;
    MTH4D_tdstVector_* p_stVtmp;

    p_stMatrix = &_hTransform->stTransformMatrix; p_stVtmp = &Vtmp;
    *(unsigned int*)&Vtmp.xX = ((unsigned int*)VectA)[0]; *(unsigned int*)&Vtmp.xY = ((unsigned int*)VectA)[1]; *(unsigned int*)&Vtmp.xZ = ((unsigned int*)VectA)[2];
    asm {
        lqc2 vf1, 0x0(p_stVtmp)
        lqc2 vf2, 0x0(p_stMatrix)
        lqc2 vf3, 0x10(p_stMatrix)
        lqc2 vf4, 0x20(p_stMatrix)
        lqc2 vf5, 0x30(p_stMatrix)
        vmulax.xyzw ACC, vf2, vf1x
        vmadday.xyzw ACC, vf3, vf1y
        vmaddaz.xyzw ACC, vf4, vf1z
        vmaddw.xyzw vf6, vf5, vf0w
        nop
        nop
        sqc2 vf6, 0x0(p_stVtmp)
    }
    *(unsigned int*)&VectDest->xX = *(unsigned int*)&Vtmp.xX; *(unsigned int*)&VectDest->xY = *(unsigned int*)&Vtmp.xY; *(unsigned int*)&VectDest->xZ = *(unsigned int*)&Vtmp.xZ;
}
inline unsigned char MAT_M_bTransformHasScale(MAT_tdstTransformation_* _hTransform)
{
    return _hTransform->eType == 4 || _hTransform->eType == 3 || _hTransform->eType == 7 || _hTransform->eType == 6 || _hTransform->eType == 8;
}
struct tdst3dData_ {
    unsigned char _pad_00[0x14];
    tdstFamilyList_* h_Family; /* +0x14 */
    unsigned char _pad_18[0x98];
    struct tdstAChannel_* hFirstActiveChannel; /* +0xb0 */
};
inline float MTH_xSqr2(float _x, float _y) { float _r; asm { mula.s _x, _x } asm { madd.s _r, _y, _y } return _r; }
inline unsigned char fn_ucIsMaskedMiscFlag(tdstStandardGame_* _hStdGame) { return (unsigned char)((_hStdGame->ucMiscFlags & 1) ? 1 : 0); }
#define MTH_M_xMax(a, b) ((a) > (b) ? (a) : (b))

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\FuncRay2.cxx lines 958–958 */
/* addr: 0x0021f410  size: 8 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 958
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\FuncRay2.cxx lines 952–952 */
/* addr: 0x0021f420  size: 8 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 952
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\FuncRay2.cxx lines 823–924 */
/* addr: 0x0021f430  size: 1056 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 823
 *   +0x0024 -> line 826
 *   +0x0028 -> line 823
 *   +0x0044 -> line 829
 *   +0x0054 -> line 830
 *   +0x0060 -> line 832
 *   +0x0074 -> line 833
 *   +0x00a0 -> line 835
 *   +0x00b4 -> line 837
 *   +0x00bc -> line 839
 *   +0x0134 -> line 840
 *   +0x013c -> line 844
 *   +0x0140 -> line 846
 *   +0x0198 -> line 848
 *   +0x01a0 -> line 849
 *   +0x01cc -> line 852
 *   +0x01d4 -> line 855
 *   +0x01e8 -> line 858
 *   +0x01f0 -> line 865
 *   +0x01fc -> line 866
 *   +0x0204 -> line 868
 *   +0x0208 -> line 869
 *   +0x0230 -> line 877
 *   +0x0238 -> line 878
 *   +0x026c -> line 880
 *   +0x0270 -> line 881
 *   +0x0278 -> line 882
 *   +0x0280 -> line 886
 *   +0x0288 -> line 887
 *   +0x0290 -> line 890
 *   +0x0298 -> line 891
 *   +0x02a0 -> line 894
 *   +0x02a8 -> line 895
 *   +0x02b0 -> line 899
 *   +0x02b4 -> line 901
 *   +0x02b8 -> line 902
 *   +0x02e4 -> line 911
 *   +0x035c -> line 912
 *   +0x0364 -> line 914
 *   +0x0370 -> line 915
 *   +0x03dc -> line 918
 *   +0x03e4 -> line 921
 *   +0x03e8 -> line 922
 *   +0x03f0 -> line 924
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\FuncRay2.cxx lines 772–813 */
/* addr: 0x0021f850  size: 248 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 772
 *   +0x0004 -> line 775
 *   +0x0008 -> line 772
 *   +0x0018 -> line 775
 *   +0x003c -> line 783
 *   +0x0048 -> line 787
 *   +0x0050 -> line 796
 *   +0x0064 -> line 797
 *   +0x0074 -> line 798
 *   +0x0084 -> line 801
 *   +0x0088 -> line 802
 *   +0x008c -> line 801
 *   +0x0090 -> line 802
 *   +0x0094 -> line 804
 *   +0x0098 -> line 801
 *   +0x00c0 -> line 802
 *   +0x00e4 -> line 813
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\FuncRay2.cxx lines 653–763 */
/* addr: 0x0021f950  size: 568 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 653
 *   +0x0010 -> line 657
 *   +0x0014 -> line 660
 *   +0x0040 -> line 664
 *   +0x0044 -> line 665
 *   +0x004c -> line 669
 *   +0x0050 -> line 670
 *   +0x0058 -> line 675
 *   +0x0060 -> line 678
 *   +0x0064 -> line 675
 *   +0x0068 -> line 678
 *   +0x0090 -> line 683
 *   +0x0098 -> line 686
 *   +0x009c -> line 683
 *   +0x00a0 -> line 686
 *   +0x00a4 -> line 683
 *   +0x00ac -> line 686
 *   +0x00c0 -> line 687
 *   +0x00c8 -> line 690
 *   +0x00cc -> line 692
 *   +0x00d4 -> line 697
 *   +0x00dc -> line 700
 *   +0x00e0 -> line 697
 *   +0x00e4 -> line 700
 *   +0x010c -> line 704
 *   +0x0120 -> line 707
 *   +0x0124 -> line 709
 *   +0x012c -> line 714
 *   +0x0134 -> line 717
 *   +0x0138 -> line 714
 *   +0x013c -> line 717
 *   +0x0164 -> line 721
 *   +0x0178 -> line 724
 *   +0x0188 -> line 725
 *   +0x0190 -> line 728
 *   +0x0194 -> line 730
 *   +0x019c -> line 735
 *   +0x01a4 -> line 738
 *   +0x01a8 -> line 735
 *   +0x01ac -> line 738
 *   +0x01d4 -> line 742
 *   +0x01e8 -> line 745
 *   +0x01f8 -> line 746
 *   +0x0200 -> line 748
 *   +0x0204 -> line 750
 *   +0x020c -> line 756
 *   +0x0214 -> line 761
 *   +0x021c -> line 762
 *   +0x0220 -> line 761
 *   +0x0224 -> line 763
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\FuncRay2.cxx lines 545–631 */
/* addr: 0x0021fb90  size: 416 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 545
 *   +0x0004 -> line 549
 *   +0x0008 -> line 545
 *   +0x0014 -> line 551
 *   +0x0018 -> line 549
 *   +0x001c -> line 554
 *   +0x0048 -> line 558
 *   +0x004c -> line 559
 *   +0x0054 -> line 563
 *   +0x0058 -> line 564
 *   +0x0060 -> line 567
 *   +0x0068 -> line 575
 *   +0x0070 -> line 580
 *   +0x0074 -> line 575
 *   +0x0078 -> line 580
 *   +0x00a0 -> line 583
 *   +0x00a8 -> line 580
 *   +0x00ac -> line 583
 *   +0x00bc -> line 584
 *   +0x00c4 -> line 585
 *   +0x00dc -> line 586
 *   +0x00e0 -> line 589
 *   +0x00e4 -> line 591
 *   +0x00ec -> line 595
 *   +0x00f4 -> line 601
 *   +0x00fc -> line 606
 *   +0x0100 -> line 601
 *   +0x0104 -> line 606
 *   +0x012c -> line 609
 *   +0x0130 -> line 606
 *   +0x0134 -> line 609
 *   +0x0144 -> line 610
 *   +0x0148 -> line 611
 *   +0x0160 -> line 612
 *   +0x0168 -> line 616
 *   +0x016c -> line 618
 *   +0x0174 -> line 625
 *   +0x017c -> line 629
 *   +0x0184 -> line 630
 *   +0x0188 -> line 629
 *   +0x018c -> line 631
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
#pragma opt_lifetimes off
#pragma opt_strength_reduction off

#pragma opt_lifetimes reset
#pragma opt_strength_reduction reset

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\FuncRay2.cxx lines 95–523 */
/* addr: 0x0021fd30  size: 2804 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 95
 *   +0x0004 -> line 122
 *   +0x0008 -> line 95
 *   +0x0018 -> line 125
 *   +0x001c -> line 95
 *   +0x0028 -> line 118
 *   +0x002c -> line 95
 *   +0x004c -> line 122
 *   +0x0050 -> line 120
 *   +0x0054 -> line 126
 *   +0x0058 -> line 124
 *   +0x005c -> line 126
 *   +0x0060 -> line 135
 *   +0x006c -> line 137
 *   +0x0078 -> line 138
 *   +0x007c -> line 140
 *   +0x0084 -> line 143
 *   +0x0088 -> line 144
 *   +0x0090 -> line 147
 *   +0x0098 -> line 148
 *   +0x00a4 -> line 150
 *   +0x00a8 -> line 151
 *   +0x00b0 -> line 154
 *   +0x00b4 -> line 160
 *   +0x00b8 -> line 161
 *   +0x00d0 -> line 162
 *   +0x00e8 -> line 170
 *   +0x00f8 -> line 174
 *   +0x00fc -> line 177
 *   +0x0110 -> line 178
 *   +0x0120 -> line 189
 *   +0x0128 -> line 178
 *   +0x0130 -> line 184
 *   +0x0134 -> line 183
 *   +0x013c -> line 184
 *   +0x0144 -> line 185
 *   +0x0148 -> line 184
 *   +0x014c -> line 185
 *   +0x0150 -> line 186
 *   +0x0154 -> line 185
 *   +0x0158 -> line 186
 *   +0x015c -> line 189
 *   +0x0168 -> line 190
 *   +0x0174 -> line 191
 *   +0x017c -> line 192
 *   +0x0184 -> line 199
 *   +0x01a4 -> line 206
 *   +0x01dc -> line 210
 *   +0x01e4 -> line 211
 *   +0x01ec -> line 215
 *   +0x01f4 -> line 219
 *   +0x01fc -> line 220
 *   +0x0210 -> line 224
 *   +0x021c -> line 234
 *   +0x0224 -> line 236
 *   +0x0234 -> line 238
 *   +0x0244 -> line 240
 *   +0x0278 -> line 245
 *   +0x0280 -> line 246
 *   +0x02a0 -> line 247
 *   +0x02ac -> line 248
 *   +0x02b8 -> line 249
 *   +0x02c0 -> line 250
 *   +0x02dc -> line 252
 *   +0x02e4 -> line 257
 *   +0x02e8 -> line 258
 *   +0x02f0 -> line 259
 *   +0x031c -> line 260
 *   +0x0328 -> line 261
 *   +0x0334 -> line 262
 *   +0x0340 -> line 263
 *   +0x035c -> line 265
 *   +0x0364 -> line 269
 *   +0x0368 -> line 270
 *   +0x0374 -> line 271
 *   +0x0384 -> line 272
 *   +0x0388 -> line 278
 *   +0x038c -> line 277
 *   +0x0390 -> line 278
 *   +0x0398 -> line 273
 *   +0x039c -> line 278
 *   +0x03a8 -> line 279
 *   +0x03ac -> line 281
 *   +0x03b4 -> line 284
 *   +0x03c0 -> line 287
 *   +0x03c8 -> line 289
 *   +0x03cc -> line 287
 *   +0x03d8 -> line 289
 *   +0x03dc -> line 287
 *   +0x03e0 -> line 290
 *   +0x03e4 -> line 287
 *   +0x03e8 -> line 290
 *   +0x03ec -> line 289
 *   +0x03f0 -> line 290
 *   +0x03f4 -> line 287
 *   +0x03f8 -> line 289
 *   +0x03fc -> line 293
 *   +0x0400 -> line 289
 *   +0x0404 -> line 290
 *   +0x0408 -> line 293
 *   +0x0424 -> line 296
 *   +0x042c -> line 297
 *   +0x0438 -> line 305
 *   +0x0440 -> line 307
 *   +0x0458 -> line 310
 *   +0x0464 -> line 312
 *   +0x0474 -> line 317
 *   +0x0480 -> line 322
 *   +0x0488 -> line 323
 *   +0x04a8 -> line 327
 *   +0x04b8 -> line 323
 *   +0x04d4 -> line 327
 *   +0x04e4 -> line 332
 *   +0x04ec -> line 334
 *   +0x04f0 -> line 339
 *   +0x04f4 -> line 336
 *   +0x04f8 -> line 339
 *   +0x0500 -> line 342
 *   +0x0508 -> line 346
 *   +0x050c -> line 342
 *   +0x0510 -> line 346
 *   +0x0520 -> line 349
 *   +0x0524 -> line 346
 *   +0x052c -> line 349
 *   +0x0530 -> line 346
 *   +0x0534 -> line 352
 *   +0x053c -> line 349
 *   +0x0540 -> line 346
 *   +0x0544 -> line 352
 *   +0x0548 -> line 349
 *   +0x0550 -> line 355
 *   +0x0584 -> line 356
 *   +0x0588 -> line 355
 *   +0x058c -> line 356
 *   +0x0590 -> line 355
 *   +0x0594 -> line 356
 *   +0x05a8 -> line 360
 *   +0x05b4 -> line 362
 *   +0x05b8 -> line 363
 *   +0x05bc -> line 362
 *   +0x05c0 -> line 363
 *   +0x05e0 -> line 364
 *   +0x05e8 -> line 365
 *   +0x05f0 -> line 368
 *   +0x0614 -> line 372
 *   +0x0620 -> line 374
 *   +0x0628 -> line 375
 *   +0x0634 -> line 377
 *   +0x0638 -> line 385
 *   +0x0644 -> line 387
 *   +0x0648 -> line 392
 *   +0x064c -> line 387
 *   +0x0650 -> line 392
 *   +0x0658 -> line 404
 *   +0x0700 -> line 406
 *   +0x0704 -> line 404
 *   +0x0718 -> line 406
 *   +0x0720 -> line 407
 *   +0x0724 -> line 409
 *   +0x072c -> line 407
 *   +0x0748 -> line 408
 *   +0x0764 -> line 409
 *   +0x076c -> line 412
 *   +0x078c -> line 413
 *   +0x079c -> line 414
 *   +0x07a0 -> line 413
 *   +0x07a8 -> line 414
 *   +0x07ac -> line 413
 *   +0x07b0 -> line 415
 *   +0x07b8 -> line 419
 *   +0x07f0 -> line 422
 *   +0x07fc -> line 423
 *   +0x0804 -> line 426
 *   +0x080c -> line 427
 *   +0x0810 -> line 428
 *   +0x0814 -> line 427
 *   +0x0818 -> line 428
 *   +0x081c -> line 429
 *   +0x0824 -> line 432
 *   +0x085c -> line 433
 *   +0x0864 -> line 435
 *   +0x086c -> line 436
 *   +0x0874 -> line 437
 *   +0x0884 -> line 440
 *   +0x0890 -> line 443
 *   +0x0898 -> line 449
 *   +0x08a0 -> line 456
 *   +0x08a8 -> line 460
 *   +0x08ac -> line 456
 *   +0x08b0 -> line 462
 *   +0x08b4 -> line 456
 *   +0x08c0 -> line 460
 *   +0x08c4 -> line 462
 *   +0x08c8 -> line 460
 *   +0x08cc -> line 456
 *   +0x08d0 -> line 460
 *   +0x08d4 -> line 462
 *   +0x08e8 -> line 464
 *   +0x0900 -> line 467
 *   +0x0908 -> line 469
 *   +0x0910 -> line 471
 *   +0x0934 -> line 472
 *   +0x0964 -> line 473
 *   +0x096c -> line 476
 *   +0x0994 -> line 478
 *   +0x09a0 -> line 481
 *   +0x09ac -> line 483
 *   +0x09b4 -> line 484
 *   +0x09bc -> line 486
 *   +0x09c4 -> line 489
 *   +0x09cc -> line 492
 *   +0x09d4 -> line 497
 *   +0x09d8 -> line 494
 *   +0x09dc -> line 497
 *   +0x09e0 -> line 494
 *   +0x09e4 -> line 497
 *   +0x09e8 -> line 494
 *   +0x09ec -> line 497
 *   +0x0a0c -> line 498
 *   +0x0a18 -> line 500
 *   +0x0a20 -> line 501
 *   +0x0a2c -> line 503
 *   +0x0a30 -> line 504
 *   +0x0a38 -> line 512
 *   +0x0a3c -> line 518
 *   +0x0a40 -> line 512
 *   +0x0a58 -> line 513
 *   +0x0a5c -> line 512
 *   +0x0a60 -> line 513
 *   +0x0a68 -> line 514
 *   +0x0a6c -> line 512
 *   +0x0a70 -> line 514
 *   +0x0a74 -> line 513
 *   +0x0a78 -> line 514
 *   +0x0a80 -> line 517
 *   +0x0a84 -> line 518
 *   +0x0a88 -> line 514
 *   +0x0a8c -> line 517
 *   +0x0a98 -> line 518
 *   +0x0aac -> line 521
 *   +0x0ab4 -> line 522
 *   +0x0ab8 -> line 521
 *   +0x0abc -> line 523
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\FuncRay2.cxx lines 74–74 */
/* addr: 0x00220830  size: 8 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 74
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\FuncRay2.cxx lines 70–70 */
/* addr: 0x00220840  size: 8 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 70
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\FuncRay2.cxx lines 64–66 */
/* addr: 0x00220850  size: 12 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 64
 *   +0x0004 -> line 66
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */

void fn_vInitDistanceAct(void)
{
    g_DistanceActMin = 0.0f;
    g_DistanceActMax = 0.0f;
}

void fn_vSetDistanceActMin(float xDistACT)
{
    g_DistanceActMin = xDistACT;
}

void fn_vSetDistanceActMax(float xDistACT)
{
    g_DistanceActMax = xDistACT;
}

tdstNodeInterpret_* fn_p_stCode4TextAffiche(HIE_tdstSuperObject_* p_SuperObjPerso, tdstNodeInterpret_* p_stTree, tdstGetSetParam_* p_stValue)
{
    unsigned int ulCptDelay;
    unsigned int ulTmpDelay;
    DNM_stDynamics* p_stDynamics;
    MTH3D_tdstVector_ stResolutionScale;
    MAT_tdstTransformation_ stMatrix;
    int i_Num;
    char asz_Num[20];
    char* psz_Copy;
    char* psz_Temp;
    char* param0;
    unsigned char ViewPortIndex;
    unsigned char DestinationViewport;
    tdeFuncId_ eFuncId;
    unsigned char bFirstTime;
    short wPositionInString;
    unsigned char ucDelayId;
    unsigned char ucNumberOfCurrentTextAffiche;
    unsigned char ucPersoId;
    char szCopy[600];
    char* p_szString;
    unsigned int ulDelay;
    unsigned int ulTimer;
    float xxPosZ;
    float xxPosY;
    int lPosZ;
    int lPosY;
    int lPosX;
    float xPosZ;
    float xPosY;
    MTH3D_tdstVector_ stTextPosition;
    MTH3D_tdstVector_ stVertex;
    stTfmtStatus_ stStatus;
    tdstDynam_* h_Dynam;
    HIE_tdstSuperObject_* p_SuperObjPersoTreated;
    HIE_tdstSuperObject_* p_SuperObjPersoGenerated;
    tdstEngineObject_* p_stEngineObject;
    int ulEvent;
    tdstGetSetParam_ stParam;
    /* TODO: decompile from asm/... */
}

#pragma opt_lifetimes off
#pragma opt_strength_reduction off
tdstNodeInterpret_* fn_p_stCode4PointsDair(HIE_tdstSuperObject_* p_SuperObjPerso, tdstNodeInterpret_* p_stTree, tdstGetSetParam_* p_stValue)
{
    tdeFuncId_ eFuncId;
    tdstGetSetParam_ stParam;
    float xSign;
    float xValue;
    eFuncId = *((tdeFuncId_*)p_stTree - 2);
    xSign = 1.0f;
    switch (eFuncId) {
    case 143:
        xValue = stExtendDatas4Ray.xAirPoints4Ray;
        break;
    case 144:
        xValue = stExtendDatas4Ray.xAirPointsMax4Ray;
        break;
    case 147:
        xSign = -1.0f;
    case 145:
        p_stTree = fn_p_stEvalTree(p_SuperObjPerso, p_stTree, &stParam);
        xValue = xSign * ((stParam.eType == 8) ? stParam.uParam.xValue : (float)stParam.uParam.lValue);
        xValue = stExtendDatas4Ray.xAirPoints4Ray + xValue;
        if (xValue > stExtendDatas4Ray.xAirPointsMax4Ray) {
            xValue = stExtendDatas4Ray.xAirPointsMax4Ray;
        } else if (xValue < 0.0f) {
            xValue = 0.0f;
        }
        stExtendDatas4Ray.xAirPoints4Ray = xValue;
        break;
    case 148:
        xSign = -1.0f;
    case 146:
        p_stTree = fn_p_stEvalTree(p_SuperObjPerso, p_stTree, &stParam);
        xValue = xSign * ((stParam.eType == 8) ? stParam.uParam.xValue : (float)stParam.uParam.lValue);
        xValue = stExtendDatas4Ray.xAirPointsMax4Ray + xValue;
        if (xValue < 0.0f) xValue = 0.0f;
        if (xValue < stExtendDatas4Ray.xAirPoints4Ray) {
            stExtendDatas4Ray.xAirPoints4Ray = xValue;
        }
        stExtendDatas4Ray.xAirPointsMax4Ray = xValue;
        break;
    default:
        return p_stTree;
    }
    p_stValue->uParam.xValue = xValue;
    p_stValue->eType = (tdeVariableType_)8;
    return p_stTree;
}
#pragma opt_strength_reduction reset
#pragma opt_lifetimes reset

tdstNodeInterpret_* fn_p_stCode4PointsDeMagie(HIE_tdstSuperObject_* p_SuperObjPerso, tdstNodeInterpret_* p_stTree, tdstGetSetParam_* p_stValue)
{
    tdeFuncId_ eFuncId;
    tdstGetSetParam_ stParam;
    int lValue;
    eFuncId = *((tdeFuncId_*)p_stTree - 2);
    switch (eFuncId) {
    case 137:
        lValue = stExtendDatas4Ray.iMagicPoints4Ray;
        break;
    case 138:
        lValue = stExtendDatas4Ray.iMagicPointsMax4Ray;
        break;
    case 139:
        p_stTree = fn_p_stEvalTree(p_SuperObjPerso, p_stTree, &stParam);
        if (stParam.eType == 8) {
            lValue = MTH_M_xRealToLong(stParam.uParam.xValue);
        } else {
            lValue = stParam.uParam.lValue;
        }
        stExtendDatas4Ray.iMagicPoints4Ray += lValue;
        if (stExtendDatas4Ray.iMagicPointsMax4Ray < stExtendDatas4Ray.iMagicPoints4Ray) {
            stExtendDatas4Ray.iMagicPoints4Ray = stExtendDatas4Ray.iMagicPointsMax4Ray;
        }
        lValue = stExtendDatas4Ray.iMagicPoints4Ray;
        break;
    case 140:
        p_stTree = fn_p_stEvalTree(p_SuperObjPerso, p_stTree, &stParam);
        if (stParam.eType == 8) {
            lValue = MTH_M_xRealToLong(stParam.uParam.xValue);
        } else {
            lValue = stParam.uParam.lValue;
        }
        stExtendDatas4Ray.iMagicPointsMax4Ray += lValue;
        lValue = stExtendDatas4Ray.iMagicPointsMax4Ray;
        break;
    case 141:
        p_stTree = fn_p_stEvalTree(p_SuperObjPerso, p_stTree, &stParam);
        if (stParam.eType == 8) {
            lValue = MTH_M_xRealToLong(stParam.uParam.xValue);
        } else {
            lValue = stParam.uParam.lValue;
        }
        stExtendDatas4Ray.iMagicPoints4Ray -= lValue;
        if (stExtendDatas4Ray.iMagicPoints4Ray < 0) {
            stExtendDatas4Ray.iMagicPoints4Ray = 0;
        }
        lValue = stExtendDatas4Ray.iMagicPoints4Ray;
        break;
    case 142:
        p_stTree = fn_p_stEvalTree(p_SuperObjPerso, p_stTree, &stParam);
        if (stParam.eType == 8) {
            lValue = MTH_M_xRealToLong(stParam.uParam.xValue);
        } else {
            lValue = stParam.uParam.lValue;
        }
        stExtendDatas4Ray.iMagicPointsMax4Ray -= lValue;
        if (stExtendDatas4Ray.iMagicPointsMax4Ray < 0) {
            stExtendDatas4Ray.iMagicPointsMax4Ray = 0;
        }
        lValue = stExtendDatas4Ray.iMagicPointsMax4Ray;
        break;
    default:
        return p_stTree;
    }
    p_stValue->uParam.lValue = lValue;
    p_stValue->eType = (tdeVariableType_)6;
    return p_stTree;
}

unsigned char fn_vGetZoneCenter(COL_tdstCollideObject_* _hGeoObj, MTH3D_tdstVector_* _hZoneCenter)
{
    unsigned char bZoneIsValid;
    float xRadius;
    short xMin;
    short xMax;
    MTH3D_tdstVector_ stMin;
    MTH3D_tdstVector_ stMax;
    switch (*_hGeoObj->d_xListOfElementsTypes) {
    case 7:
        COL_fn_vGetInfoFromGeometricSphere(_hZoneCenter, &xRadius, _hGeoObj);
        bZoneIsValid = 1;
        break;
    case 8:
        COL_vGetMinMaxPointOfIndexedAlignedBox(_hGeoObj, 0, 0, &xMin, &xMax);
        COL_vGetPointOfObject(_hGeoObj, &stMin, xMin);
        COL_vGetPointOfObject(_hGeoObj, &stMax, xMax);
        MTH3D_M_vAddVector(_hZoneCenter, &stMin, &stMax);
        MTH3D_M_vMulScalar(_hZoneCenter, _hZoneCenter, 0.5f);
        bZoneIsValid = 1;
        break;
    default:
        bZoneIsValid = 0;
        break;
    }
    return bZoneIsValid;
}

void fn_vInternGetZDxCenter(HIE_tdstSuperObject_* _hCharacter, unsigned short _xMask, unsigned char _ucZoneType, unsigned char _bInGlobalCoordinates, MTH3D_tdstVector_* _p_stReturnVector)
{
    MAT_tdstTransformation_ stGlobToPerso;
    HIE_tdstSuperObject_* hModule;
    tdstAChannel_* hChannel;
    tdstPhysicalCollSet_* hPhysicalCollideSet;
    MTH3D_tdstVector_ stScale;
    unsigned char bFoundOne;
    COL_tdstCollideObject_* hGeoObj;
    int lMax;
    int lI;
    bFoundOne = 0;
    lMax = fn_lGetZdxListNumberOfElements(_ucZoneType, _hCharacter);
    for (lI = 0; lI < lMax; lI++) {
        hGeoObj = fn_hGetCollideZdxOfTypeAtIndex(_ucZoneType, (unsigned short)lI, _hCharacter);
        if (hGeoObj != NULL && fn_hIsTypeExistsInGeoObj(hGeoObj, _xMask) != NULL
            && fn_hIsThisZoneActive(_hCharacter, _ucZoneType, (unsigned char)lI) != NULL
            && (bFoundOne = fn_vGetZoneCenter(hGeoObj, _p_stReturnVector)) != 0) {
            if (_bInGlobalCoordinates) {
                MAT_fn_vApplyOnVertex(_p_stReturnVector, _hCharacter->hGlobalMatrix, _p_stReturnVector);
            } else if (MAT_M_bTransformHasScale(_hCharacter->hGlobalMatrix)) {
                MAT_fn_vGetScale(_hCharacter->hGlobalMatrix, &stScale);
                _p_stReturnVector->xX = stScale.xX * _p_stReturnVector->xX;
                _p_stReturnVector->xY = stScale.xY * _p_stReturnVector->xY;
                _p_stReturnVector->xZ = stScale.xZ * _p_stReturnVector->xZ;
            }
            break;
        }
    }
    if (!bFoundOne) {
        for (hChannel = ((tdst3dData_*)_hCharacter->hLinkedObject.p_stCharacter->h_3dData)->hFirstActiveChannel; hChannel != NULL; hChannel = hChannel->p_stNextActiveChannel) {
            hModule = hChannel->hSupObject;
            if (hModule != NULL && (hModule->ulTypeOfLinkedObject & 0x18) && !(hModule->ulFlags & 2)) {
                hPhysicalCollideSet = PO_fn_hGetCollideSet(hModule->hLinkedObject.p_stPhysicalObject);
                switch (_ucZoneType) {
                case 2:
                    hGeoObj = PCS_fn_hGetZdeGeoObjOfPhysicalCollSet(hPhysicalCollideSet);
                    break;
                case 0:
                    hGeoObj = PCS_fn_hGetZddGeoObjOfPhysicalCollSet(hPhysicalCollideSet);
                    break;
                case 3:
                    hGeoObj = PCS_fn_hGetZdrGeoObjOfPhysicalCollSet(hPhysicalCollideSet);
                    break;
                case 1:
                    hGeoObj = PCS_fn_hGetZdmGeoObjOfPhysicalCollSet(hPhysicalCollideSet);
                    break;
                default:
                    hGeoObj = NULL;
                    break;
                }
                if (hGeoObj != NULL && fn_hIsTypeExistsInGeoObj(hGeoObj, _xMask) != NULL && fn_vGetZoneCenter(hGeoObj, _p_stReturnVector)) {
                    MAT_fn_vApplyOnVertex(_p_stReturnVector, hModule->hGlobalMatrix, _p_stReturnVector);
                    if (!_bInGlobalCoordinates) {
                        MAT_fn_vInvert(&stGlobToPerso, _hCharacter->hGlobalMatrix);
                        MAT_fn_vApplyOnVertex(_p_stReturnVector, &stGlobToPerso, _p_stReturnVector);
                    }
                    return;
                }
            }
        }
    }
}

void fn_vInitRecherchePerso(void)
{
    g_hCharacterMaskedForResearch = NULL;
}

void fn_vSetCharacterMaskedForResearch(HIE_tdstSuperObject_* hCharacter)
{
    g_hCharacterMaskedForResearch = hCharacter;
}

HIE_tdstSuperObject_* fn_hGetClosestPersoInSector(HIE_tdstSuperObject_* _hCloserSO, float* _p_xBestDist, float* _p_xPrevWeight, HIE_tdstSuperObject_* _hMe, MTH3D_tdstVector_* _p_stMyVector, MTH3D_tdstVector_* _p_stActorSighting, MAT_tdstTransformation_* _p_stGlobToPerso, HIE_tdstSuperObject_* _hSector, unsigned int _ulFilterCustomBits, unsigned int _ulUnused, float _xXWeight, float _x2DWeight, float _x3DWeight, float _xCosXoY, float _xCosYoZ, tdstFamilyList_* _hFamily, tdeFuncId_ _eFuncId)
{
    float xXYZ;
    float xXY;
    float nX;
    float xWeight;
    float xZ;
    float xY;
    float xX;
    MTH3D_tdstVector_ stTargetPosition;
    float xNorm;
    unsigned int ulStCustomBits;
    unsigned int bFoV;
    unsigned int GetCBitFromAI;
    tdstStandardGame_* hStdGame;
    MTH3D_tdstVector_ stVector;
    SECT_tdstListOfSOCharacters_* hCharacterElement;
    switch (_eFuncId) {
    case 150:
    case 154:
    case 158:
    case 156:
    case 160:
    case 163:
    case 165:
        GetCBitFromAI = 1;
        break;
    default:
        GetCBitFromAI = 0;
        break;
    }
    bFoV = 1;
    if ((unsigned int)(_eFuncId - 153) < 7 || _eFuncId == 160) {
    } else {
        bFoV = 0;
    }
    for (hCharacterElement = *(SECT_tdstListOfSOCharacters_**)_hSector->hLinkedObject.p_stSector; hCharacterElement != NULL; hCharacterElement = hCharacterElement->hNextBrotherDyn) {
        HIE_tdstSuperObject_* hChar = hCharacterElement->hPointerOfCharacter;
        if (hChar != _hMe
            && (_hFamily == NULL || _hFamily == ((tdst3dData_*)hChar->hLinkedObject.p_stCharacter->h_3dData)->h_Family)
            && g_hCharacterMaskedForResearch != hChar) {
            hStdGame = hChar->hLinkedObject.p_stCharacter->h_StandardGame;
            ulStCustomBits = 0;
            if (hStdGame != NULL) {
                ulStCustomBits = GetCBitFromAI ? hStdGame->ulAICustomBits : hStdGame->ulCustomBits;
            }
            if (hStdGame != NULL && !fn_ucIsMaskedMiscFlag(hStdGame) && (_ulFilterCustomBits & ulStCustomBits) == _ulFilterCustomBits) {
                *(unsigned int*)&stTargetPosition.xX = *(unsigned int*)&hChar->hGlobalMatrix->stTransformMatrix.stCol_3.xX; *(unsigned int*)&stTargetPosition.xY = *(unsigned int*)&hChar->hGlobalMatrix->stTransformMatrix.stCol_3.xY; *(unsigned int*)&stTargetPosition.xZ = *(unsigned int*)&hChar->hGlobalMatrix->stTransformMatrix.stCol_3.xZ;
                if (_eFuncId == 149 || _eFuncId == 150) {
                    xNorm = MTH_xSqrt(MTH_xSqr3(stTargetPosition.xX - _p_stMyVector->xX, stTargetPosition.xY - _p_stMyVector->xY, stTargetPosition.xZ - _p_stMyVector->xZ));
                    if (xNorm < *_p_xBestDist && (xNorm > g_DistanceActMin || MTH_xAbs(g_DistanceActMin) < 0.001f) && (xNorm < g_DistanceActMax || MTH_xAbs(g_DistanceActMax) < 0.001f)) {
                        _hCloserSO = hChar;
                        *_p_xBestDist = xNorm;
                    }
                } else if (bFoV) {
                    MTH3D_M_vSubVector(&stTargetPosition, _p_stMyVector, &stTargetPosition);
                    xNorm = MTH_xSqrt(MTH_xSqr3(stTargetPosition.xX, stTargetPosition.xY, stTargetPosition.xZ));
                    if (xNorm != 0.0f) {
                        MTH3D_M_vMulScalar(&stTargetPosition, &stTargetPosition, 1.0f / xNorm);
                    }
                    if (MTH_xDotProduct(_p_stActorSighting, &stTargetPosition) > 0.5f) {
                        xNorm = MTH_xSqrt(MTH_xSqr3(stTargetPosition.xX - _p_stMyVector->xX, stTargetPosition.xY - _p_stMyVector->xY, stTargetPosition.xZ - _p_stMyVector->xZ));
                        if (xNorm < *_p_xBestDist && (xNorm > g_DistanceActMin || MTH_xAbs(g_DistanceActMin) < 0.001f) && (xNorm < g_DistanceActMax || MTH_xAbs(g_DistanceActMax) < 0.001f)) {
                            _hCloserSO = hChar;
                            *_p_xBestDist = xNorm;
                        }
                    }
                } else {
                    MAT_fn_vApplyOnVertex(&stVector, _p_stGlobToPerso, &stTargetPosition);
                    xX = stVector.xX;
                    xY = stVector.xY;
                    xZ = stVector.xZ;
                    stVector.xZ = 0.0f;
                    xXY = MTH_xSqrt(MTH_xSqr3(stVector.xX, stVector.xY, stVector.xZ));
                    stVector.xZ = xZ;
                    stVector.xX = 0.0f;
                    nX = MTH_xSqrt(MTH_xSqr3(stVector.xX, stVector.xY, stVector.xZ));
                    stVector.xX = xX;
                    if (-xY > _xCosXoY * xXY && -xY > _xCosYoZ * nX) {
                        xXYZ = MTH_xSqrt(MTH_xSqr3(stVector.xX, stVector.xY, stVector.xZ));
                        xWeight = _xXWeight / MTH_M_xMax(MTH_xAbs(xX), 1.0f)
                                + _x2DWeight / MTH_M_xMax(MTH_xSqrt(MTH_xSqr2(xX, xY)), 1.0f)
                                + _x3DWeight / MTH_M_xMax(xXYZ, 1.0f);
                        if (xWeight > *_p_xPrevWeight && (xXYZ > g_DistanceActMin || MTH_xAbs(g_DistanceActMin) < 0.001f) && (xXYZ < g_DistanceActMax || MTH_xAbs(g_DistanceActMax) < 0.001f)) {
                            _hCloserSO = hChar;
                            *_p_xPrevWeight = xWeight;
                        }
                    }
                }
            }
        }
    }
    return _hCloserSO;
}

tdstNodeInterpret_* fn_p_stCode4PersoLePlusProche(HIE_tdstSuperObject_* p_SuperObjPerso, tdstNodeInterpret_* p_stTree, tdstGetSetParam_* p_stValue)
{
    MTH3D_tdstVector_ stOffSet;
    float xNorm;
    MAT_tdstTransformation_ stGlobPerso;
    MTH3D_tdstVector_ vK;
    MTH3D_tdstVector_ vJ;
    MTH3D_tdstVector_ vI;
    HIE_tdstSuperObject_* hNewSuperObjPerso;
    int i;
    tdeFuncId_ eFuncId;
    tdstFamilyList_* hFamily;
    float xCosYoZ;
    float xCosXoY;
    unsigned short xMask;
    MTH3D_tdstVector_ stActorSighting;
    float xPrevWeight;
    float x3DWeight;
    float x2DWeight;
    float xXWeight;
    unsigned int ulCustomBitValue;
    float xBestDist;
    MAT_tdstTransformation_ stGlobToPerso;
    MTH3D_tdstVector_ stMyVector;
    SECT_tdstListOfSOSectorsInGraphicInteraction_* hGraphicElement;
    HIE_tdstSuperObject_* hCloserSO;
    HIE_tdstSuperObject_* hCurrentSectorPerso;
    tdstGetSetParam_ stParam;
    unsigned int bWeighted;
    xBestDist = 3.402822e38f;
    xPrevWeight = -1.701411e38f;
    hFamily = NULL;
    bWeighted = 0;
    xXWeight = 0.0f;
    x2DWeight = 0.0f;
    x3DWeight = 0.0f;
    xCosXoY = 0.8944f;
    xCosYoZ = 0.8944f;
    eFuncId = *((tdeFuncId_*)p_stTree - 2);
    fn_vGetUltraOperatorPerso(fn_ucGetFunctionUltraOperator(eFuncId), p_SuperObjPerso, &hNewSuperObjPerso);
    p_stTree = fn_p_stEvalTree(p_SuperObjPerso, p_stTree, &stParam);
    if (stParam.eType == 8) {
        ulCustomBitValue = MTH_M_xRealToLong(stParam.uParam.xValue);
    } else {
        ulCustomBitValue = stParam.uParam.lValue;
    }
    switch (eFuncId) {
    case 162:
    case 163:
    case 164:
    case 165:
        p_stTree = fn_p_stEvalTree(p_SuperObjPerso, p_stTree, &stParam);
        if (stParam.eType == 8) {
            xXWeight = stParam.uParam.xValue;
        } else {
            xXWeight = (float)stParam.uParam.lValue;
        }
        p_stTree = fn_p_stEvalTree(p_SuperObjPerso, p_stTree, &stParam);
        if (stParam.eType == 8) {
            x2DWeight = stParam.uParam.xValue;
        } else {
            x2DWeight = (float)stParam.uParam.lValue;
        }
        p_stTree = fn_p_stEvalTree(p_SuperObjPerso, p_stTree, &stParam);
        if (stParam.eType == 8) {
            x3DWeight = stParam.uParam.xValue;
        } else {
            x3DWeight = (float)stParam.uParam.lValue;
        }
        p_stTree = fn_p_stEvalTree(p_SuperObjPerso, p_stTree, &stParam);
        MTH3D_tdstVector_ stDirection = stParam.uParam.stVectorValue;
        bWeighted = 1;
        if (eFuncId == 164 || eFuncId == 165) {
            p_stTree = fn_p_stEvalTree(p_SuperObjPerso, p_stTree, &stParam);
            if (stParam.eType == 8) {
                xCosXoY = stParam.uParam.xValue;
            } else {
                xCosXoY = (float)stParam.uParam.lValue;
            }
            xCosXoY = cosf(0.017453292f * xCosXoY);
            p_stTree = fn_p_stEvalTree(p_SuperObjPerso, p_stTree, &stParam);
            if (stParam.eType == 8) {
                xCosYoZ = stParam.uParam.xValue;
            } else {
                xCosYoZ = (float)stParam.uParam.lValue;
            }
            xCosYoZ = cosf(0.017453292f * xCosYoZ);
        }
        stGlobPerso = *hNewSuperObjPerso->hGlobalMatrix;
        if (stDirection.xX != 0.0f || stDirection.xY != 0.0f || stDirection.xZ != 0.0f) {
            MAT_fn_vGetRotationVectors(&stGlobPerso, &vI, &vJ, &vK);
            MTH3D_M_vNegVector(&stDirection, &stDirection);
            MTH3D_M_vNormalizeVector(&vJ, &stDirection);
            if (MTH_xAbs(MTH_xDotProduct(&vJ, &vK) - 1.0f) < 0.002f) {
                MTH3D_M_vCrossProductVector(&vK, &vI, &vJ);
                MTH3D_M_vCrossProductVector(&vI, &vJ, &vK);
            } else {
                MTH3D_M_vCrossProductVector(&vI, &vJ, &vK);
                MTH3D_M_vCrossProductVector(&vK, &vI, &vJ);
            }
            MAT_fn_vSetRotationVectors(&stGlobPerso, &vI, &vJ, &vK);
        }
        MAT_fn_vInvertRotation(&stGlobToPerso, &stGlobPerso);
        break;
    case 149:
    case 150:
        stMyVector = *(MTH3D_tdstVector_*)&hNewSuperObjPerso->hGlobalMatrix->stTransformMatrix.stCol_3;
        break;
    case 155:
    case 156:
    case 159:
    case 160:
        p_stTree = fn_p_stEvalTree(p_SuperObjPerso, p_stTree, &stParam);
        hFamily = (tdstFamilyList_*)stParam.uParam.pValue;
    case 153:
    case 154:
    case 157:
    case 158:
        {
            MAT_tdstTransformation_* hMatrix = hNewSuperObjPerso->hGlobalMatrix;
            stMyVector = *(MTH3D_tdstVector_*)&hMatrix->stTransformMatrix.stCol_3;
            MAT_fn_vGetRotationVectorBaseJ(hMatrix, &stActorSighting);
            if (eFuncId == 157 || eFuncId == 158 || eFuncId == 159 || eFuncId == 160) {
                p_stTree = fn_p_stEvalTree(p_SuperObjPerso, p_stTree, &stParam);
                stOffSet = stParam.uParam.stVectorValue;
                MAT_fn_vApplyOnVector(&stOffSet, hMatrix, &stOffSet);
                MTH3D_M_vAddVector(&stMyVector, &stMyVector, &stOffSet);
            }
        }
        break;
    default:
        fn_vOnAIErm_M_UpdateLastError(39, NULL);
        return p_stTree;
    }
    hCurrentSectorPerso = fn_h_SectInfoGetCurrentSector(hNewSuperObjPerso->hLinkedObject.p_stCharacter->h_SectInfo);
    hCloserSO = fn_hGetClosestPersoInSector(NULL, &xBestDist, &xPrevWeight, hNewSuperObjPerso, &stMyVector, &stActorSighting, &stGlobToPerso, hCurrentSectorPerso, ulCustomBitValue, bWeighted, xXWeight, x2DWeight, x3DWeight, xCosXoY, xCosYoZ, hFamily, eFuncId);
    {
        LST2_tdstAnchorToSECT_tdxHandleOfElementLstGraphicInteractionOpt* p_stList = &((SECT_tdstSectorGraphicHead_*)hCurrentSectorPerso->hLinkedObject.p_stSector)->stListOfSectorsInGraphicInteraction;
        for (i = 0, hGraphicElement = p_stList->hFirstElementOpt; i < p_stList->lNumberOfElementsOpt; i++, hGraphicElement++) {
            hCloserSO = fn_hGetClosestPersoInSector(hCloserSO, &xBestDist, &xPrevWeight, hNewSuperObjPerso, &stMyVector, &stActorSighting, &stGlobToPerso, hGraphicElement->hPointerOfSectorSO, ulCustomBitValue, bWeighted, xXWeight, x2DWeight, x3DWeight, xCosXoY, xCosYoZ, hFamily, eFuncId);
        }
    }
    p_stValue->uParam.pValue = (hCloserSO == NULL ? NULL : (hCloserSO->ulTypeOfLinkedObject != 2 ? NULL : hCloserSO->hLinkedObject.p_stCharacter));
    p_stValue->eType = (tdeVariableType_)11;
    return p_stTree;
}

tdstNodeInterpret_* fn_p_stGraphFunction(HIE_tdstSuperObject_* p_SuperObjPerso, tdstNodeInterpret_* p_stTree, tdstGetSetParam_* p_stValue)
{
    tdeFuncId_ eFuncId;
    WP_tdstGraph_* hGraph;
    WP_tdstWayPoint_* hWayPoint1;
    WP_tdstWayPoint_* hWayPoint2;
    unsigned int ulNewCaps;
    int lWeight;
    int lValue;
    unsigned int ulCaps;
    eFuncId = *((tdeFuncId_*)p_stTree - 2);
    p_stTree = fn_p_stEvalTree(p_SuperObjPerso, p_stTree, p_stValue);
    hGraph = (WP_tdstGraph_*)p_stValue->uParam.pValue;
    p_stTree = fn_p_stEvalTree(p_SuperObjPerso, p_stTree, p_stValue);
    hWayPoint1 = (WP_tdstWayPoint_*)p_stValue->uParam.pValue;
    p_stTree = fn_p_stEvalTree(p_SuperObjPerso, p_stTree, p_stValue);
    hWayPoint2 = (WP_tdstWayPoint_*)p_stValue->uParam.pValue;
    if (hGraph == NULL) {
        if (eFuncId == 204) {
            p_stValue->uParam.lValue = 0;
            p_stValue->eType = (tdeVariableType_)44;
        } else {
            p_stValue->uParam.lValue = -1;
            p_stValue->eType = (tdeVariableType_)6;
        }
        return p_stTree;
    }
    switch (eFuncId) {
    case 204:
        if (WPG_fn_lGetLinkCapabilities(hGraph, hWayPoint1, hWayPoint2, &ulCaps) == -1) {
            p_stValue->uParam.lValue = 0;
            p_stValue->eType = (tdeVariableType_)44;
        } else {
            p_stValue->uParam.lValue = ulCaps;
            p_stValue->eType = (tdeVariableType_)44;
        }
        return p_stTree;
    case 205:
        p_stTree = fn_p_stEvalTree(p_SuperObjPerso, p_stTree, p_stValue);
        ulCaps = p_stValue->uParam.lValue;
        p_stTree = fn_p_stEvalTree(p_SuperObjPerso, p_stTree, p_stValue);
        ulNewCaps = p_stValue->uParam.lValue;
        p_stValue->uParam.lValue = WPG_fn_lChangeLinkCapabilities(hGraph, hWayPoint1, hWayPoint2, ulCaps, ulNewCaps);
        p_stValue->eType = (tdeVariableType_)6;
        return p_stTree;
    case 206:
        if (WPG_fn_lGetLinkWeight(hGraph, hWayPoint1, hWayPoint2, &lWeight) == -1) {
            p_stValue->uParam.lValue = -1;
            p_stValue->eType = (tdeVariableType_)6;
        } else {
            p_stValue->uParam.lValue = lWeight;
            p_stValue->eType = (tdeVariableType_)6;
        }
        return p_stTree;
    case 207:
        p_stTree = fn_p_stEvalTree(p_SuperObjPerso, p_stTree, p_stValue);
        lWeight = p_stValue->uParam.lValue;
        p_stValue->uParam.lValue = WPG_fn_lChangeLinkWeight(hGraph, hWayPoint1, hWayPoint2, lWeight);
        p_stValue->eType = (tdeVariableType_)6;
        return p_stTree;
    default:
        fn_vOnAIErm_M_UpdateLastError(39, NULL);
        break;
    }
    return p_stTree;
}

tdstNodeInterpret_* fn_p_stGraphToWayFunction(HIE_tdstSuperObject_* p_SuperObjPerso, tdstNodeInterpret_* p_stTree, tdstGetSetParam_* p_stValue)
{
    tdeFuncId_ eFuncId;
    tdstMSWay_* h_MSWay;
    WP_tdstGraph_* hGraph;
    int lValue;
    char bIsCircular;
    WP_tdstGraph_* hPath;
    WP_tdstWayPoint_* hWayPoint1;
    WP_tdstWayPoint_* hWayPoint2;
    WP_tdstGraphNode_* hCurrentNode;
    unsigned int ulPersoCapability;
    HIE_tdstSuperObject_* hNewSuperObjPerso;
    eFuncId = *((tdeFuncId_*)p_stTree - 2);
    fn_vGetUltraOperatorPerso(fn_ucGetFunctionUltraOperator(eFuncId), p_SuperObjPerso, &hNewSuperObjPerso);
    h_MSWay = hNewSuperObjPerso->hLinkedObject.p_stCharacter->h_MSWay;
    p_stTree = fn_p_stEvalTree(p_SuperObjPerso, p_stTree, p_stValue);
    hGraph = (WP_tdstGraph_*)p_stValue->uParam.pValue;
    bIsCircular = 0;
    switch (eFuncId) {
    case 183:
        p_stTree = fn_p_stEvalTree(p_SuperObjPerso, p_stTree, p_stValue);
        hWayPoint1 = (WP_tdstWayPoint_*)p_stValue->uParam.pValue;
        p_stTree = fn_p_stEvalTree(p_SuperObjPerso, p_stTree, p_stValue);
        hWayPoint2 = (WP_tdstWayPoint_*)p_stValue->uParam.pValue;
        if (h_MSWay == NULL || hGraph == NULL) {
            p_stValue->uParam.lValue = 0;
            p_stValue->eType = (tdeVariableType_)6;
            return p_stTree;
        }
        ulPersoCapability = fn_ulGetCapabilities(hNewSuperObjPerso->ulTypeOfLinkedObject != 2 ? NULL : hNewSuperObjPerso->hLinkedObject.p_stCharacter);
        hPath = WPG_fn_lShortestPath(hGraph, hWayPoint1, hWayPoint2, ulPersoCapability);
        if (hPath != NULL) {
            MSWay_fn_vSetPath(h_MSWay, hPath, 0);
            lValue = WPG_fn_lNumberOfWaypointOfGraph(hPath);
        } else {
            MSWay_fn_vDesinitPath(h_MSWay);
            lValue = 0;
        }
        p_stValue->uParam.lValue = lValue;
        p_stValue->eType = (tdeVariableType_)6;
        return p_stTree;
    case 185:
        bIsCircular = 1;
    case 184:
        p_stTree = fn_p_stEvalTree(p_SuperObjPerso, p_stTree, p_stValue);
        hWayPoint1 = (WP_tdstWayPoint_*)p_stValue->uParam.pValue;
        if (h_MSWay == NULL || hGraph == NULL) {
            p_stValue->uParam.lValue = 0;
            p_stValue->eType = (tdeVariableType_)6;
            return p_stTree;
        }
        hPath = WPG_fn_lBuildOrderedPath(hGraph, hWayPoint1, bIsCircular, 0);
        if (hPath != NULL) {
            MSWay_fn_vSetPath(h_MSWay, hPath, bIsCircular);
            lValue = WPG_fn_lNumberOfWaypointOfGraph(hPath);
        } else {
            MSWay_fn_vDesinitPath(h_MSWay);
            lValue = 0;
        }
        p_stValue->uParam.lValue = lValue;
        p_stValue->eType = (tdeVariableType_)6;
        return p_stTree;
    case 189:
        bIsCircular = 1;
    case 188:
        p_stTree = fn_p_stEvalTree(p_SuperObjPerso, p_stTree, p_stValue);
        hWayPoint1 = (WP_tdstWayPoint_*)p_stValue->uParam.pValue;
        if (h_MSWay == NULL || hGraph == NULL) {
            p_stValue->uParam.lValue = 0;
            p_stValue->eType = (tdeVariableType_)6;
            return p_stTree;
        }
        hPath = WPG_fn_lBuildRandomPath(hGraph, hWayPoint1, bIsCircular);
        if (hPath != NULL) {
            MSWay_fn_vSetPath(h_MSWay, hPath, bIsCircular);
            lValue = WPG_fn_lNumberOfWaypointOfGraph(hPath);
        } else {
            MSWay_fn_vDesinitPath(h_MSWay);
            lValue = 0;
        }
        p_stValue->uParam.lValue = lValue;
        p_stValue->eType = (tdeVariableType_)6;
        return p_stTree;
    case 187:
        bIsCircular = 1;
    case 186:
        if (h_MSWay == NULL || hGraph == NULL) {
            p_stValue->uParam.lValue = 0;
            p_stValue->eType = (tdeVariableType_)6;
            return p_stTree;
        }
        hCurrentNode = hGraph->m_hListOfNode.hFirstElementDyn;
        hPath = WPG_fn_lBuildOrderedPath(hGraph, hCurrentNode->m_hWayPoint, bIsCircular, 0);
        if (hPath != NULL) {
            MSWay_fn_vSetPath(h_MSWay, hPath, bIsCircular);
            lValue = WPG_fn_lNumberOfWaypointOfGraph(hPath);
        } else {
            MSWay_fn_vDesinitPath(h_MSWay);
            lValue = 0;
        }
        p_stValue->uParam.lValue = lValue;
        p_stValue->eType = (tdeVariableType_)6;
        return p_stTree;
    default:
        fn_vOnAIErm_M_UpdateLastError(39, NULL);
        break;
    }
    return p_stTree;
}

tdstNodeInterpret_* fn_p_stWayFunction(HIE_tdstSuperObject_* p_SuperObjPerso, tdstNodeInterpret_* p_stTree, tdstGetSetParam_* p_stValue)
{
    int lIndex;
    WP_tdstWayPoint_* hWayPoint;
    HIE_tdstSuperObject_* hNewSuperObjPerso;
    unsigned int ulNewCaps;
    int lWeight;
    int lValue;
    tdeFuncId_ eFuncId;
    tdstMSWay_* h_MSWay;
    eFuncId = *((tdeFuncId_*)p_stTree - 2);
    fn_vGetUltraOperatorPerso(fn_ucGetFunctionUltraOperator(eFuncId), p_SuperObjPerso, &hNewSuperObjPerso);
    h_MSWay = hNewSuperObjPerso->hLinkedObject.p_stCharacter->h_MSWay;
    if (h_MSWay == NULL) {
        switch (eFuncId) {
        case 196:
            p_stValue->uParam.lValue = 0;
            p_stValue->eType = (tdeVariableType_)10;
            break;
        case 197:
            p_stValue->uParam.lValue = 0;
            p_stValue->eType = (tdeVariableType_)44;
            break;
        }
        p_stValue->uParam.lValue = -1;
        p_stValue->eType = (tdeVariableType_)6;
        return p_stTree;
    }
    switch (eFuncId) {
    case 190:
        p_stValue->uParam.lValue = MSWay_fn_lGetCurrentIndexInPath(h_MSWay);
        p_stValue->eType = (tdeVariableType_)6;
        return p_stTree;
    case 191:
        p_stTree = fn_p_stEvalTree(p_SuperObjPerso, p_stTree, p_stValue);
        p_stValue->uParam.lValue = MSWay_fn_lSetCurrentIndexInPath(h_MSWay, p_stValue->uParam.lValue);
        p_stValue->eType = (tdeVariableType_)6;
        return p_stTree;
    case 192:
        p_stValue->uParam.lValue = MSWay_fn_lGetFirstIndexInPath(h_MSWay);
        p_stValue->eType = (tdeVariableType_)6;
        return p_stTree;
    case 193:
        p_stValue->uParam.lValue = MSWay_fn_lGetLastIndexInPath(h_MSWay);
        p_stValue->eType = (tdeVariableType_)6;
        return p_stTree;
    case 194:
        p_stTree = fn_p_stEvalTree(p_SuperObjPerso, p_stTree, p_stValue);
        p_stValue->uParam.lValue = MSWay_fn_lIncrementCurrentIndexInPath(h_MSWay, p_stValue->uParam.lValue);
        p_stValue->eType = (tdeVariableType_)6;
        return p_stTree;
    case 195:
        p_stTree = fn_p_stEvalTree(p_SuperObjPerso, p_stTree, p_stValue);
        p_stValue->uParam.lValue = MSWay_fn_lIncrementCurrentIndexInPath(h_MSWay, -p_stValue->uParam.lValue);
        p_stValue->eType = (tdeVariableType_)6;
        return p_stTree;
    case 196:
        p_stTree = fn_p_stEvalTree(p_SuperObjPerso, p_stTree, p_stValue);
        p_stValue->uParam.pValue = MSWay_fn_hGetWayPointOfPath(h_MSWay, p_stValue->uParam.lValue);
        p_stValue->eType = (tdeVariableType_)10;
        return p_stTree;
    case 197:
        p_stTree = fn_p_stEvalTree(p_SuperObjPerso, p_stTree, p_stValue);
        p_stValue->uParam.lValue = MSWay_fn_ulGetCapsForNextWayPointOfPath(h_MSWay, p_stValue->uParam.lValue);
        p_stValue->eType = (tdeVariableType_)44;
        return p_stTree;
    case 198:
        p_stTree = fn_p_stEvalTree(p_SuperObjPerso, p_stTree, p_stValue);
        lIndex = p_stValue->uParam.lValue;
        p_stTree = fn_p_stEvalTree(p_SuperObjPerso, p_stTree, p_stValue);
        ulNewCaps = p_stValue->uParam.lValue;
        p_stTree = fn_p_stEvalTree(p_SuperObjPerso, p_stTree, p_stValue);
        lValue = p_stValue->uParam.lValue;
        p_stValue->uParam.lValue = MSWay_fn_lChangeCapsForNextWayPointOfPath(h_MSWay, lIndex, ulNewCaps, lValue);
        p_stValue->eType = (tdeVariableType_)6;
        return p_stTree;
    case 199:
        p_stTree = fn_p_stEvalTree(p_SuperObjPerso, p_stTree, p_stValue);
        p_stValue->uParam.lValue = MSWay_fn_lGetWeightForNextWayPointOfPath(h_MSWay, p_stValue->uParam.lValue);
        p_stValue->eType = (tdeVariableType_)6;
        return p_stTree;
    case 200:
        p_stTree = fn_p_stEvalTree(p_SuperObjPerso, p_stTree, p_stValue);
        lIndex = p_stValue->uParam.lValue;
        p_stTree = fn_p_stEvalTree(p_SuperObjPerso, p_stTree, p_stValue);
        lWeight = p_stValue->uParam.lValue;
        p_stValue->uParam.lValue = MSWay_fn_lChangeWeightForNextWayPointOfPath(h_MSWay, lIndex, lWeight);
        p_stValue->eType = (tdeVariableType_)6;
        return p_stTree;
    case 201:
        p_stTree = fn_p_stEvalTree(p_SuperObjPerso, p_stTree, p_stValue);
        p_stValue->uParam.lValue = MSWay_fn_lLookForWPInMSWay(h_MSWay, (WP_tdstWayPoint_*)p_stValue->uParam.pValue);
        p_stValue->eType = (tdeVariableType_)6;
        return p_stTree;
    case 202:
        p_stTree = fn_p_stEvalTree(p_SuperObjPerso, p_stTree, p_stValue);
        hWayPoint = (WP_tdstWayPoint_*)p_stValue->uParam.pValue;
        lIndex = MSWay_fn_lLookForWPInMSWay(h_MSWay, hWayPoint);
        if (lIndex != -1) {
            lValue = MSWay_fn_lSetCurrentIndexInPath(h_MSWay, lIndex);
        } else {
            lValue = -1;
        }
        p_stValue->uParam.lValue = lValue;
        p_stValue->eType = (tdeVariableType_)6;
        return p_stTree;
    default:
        fn_vOnAIErm_M_UpdateLastError(39, NULL);
        break;
    }
    return p_stTree;
}

tdstNodeInterpret_* fn_p_stGetCloserNetwork(HIE_tdstSuperObject_* p_SuperObjPerso, tdstNodeInterpret_* p_stTree, tdstGetSetParam_* p_stValue)
{
    WP_tdstGraph_* hGraph;
    tdeFuncId_ eFuncId;
    eFuncId = *((tdeFuncId_*)p_stTree - 2);
    p_stTree = fn_p_stEvalTree(p_SuperObjPerso, p_stTree, p_stValue);
    MTH3D_tdstVector_ stPos = p_stValue->uParam.stVectorValue;
    switch (eFuncId) {
    case 166:
        hGraph = WPG_fn_hGetNearestGraph(&stPos);
        p_stValue->uParam.pValue = hGraph; p_stValue->eType = (tdeVariableType_)45;
        return p_stTree;
    default:
        fn_vOnAIErm_M_UpdateLastError(39, NULL);
        break;
    }
    return p_stTree;
}

tdstNodeInterpret_* fn_p_stCloserAndCollisionWPInGraph(HIE_tdstSuperObject_* p_SuperObjPerso, tdstNodeInterpret_* p_stTree, tdstGetSetParam_* p_stValue)
{
    tdeFuncId_ eFuncId;
    int lIndex;
    int lNbWPInGraph;
    int lTypeOfWP;
    WP_tdstGraph_* hGraph;
    WP_tdstWayPoint_* hBestWP;
    WP_tdstWayPoint_* hWayPoint;
    MTH3D_tdstVector_ stCurrentWPVector;
    float xDistMin;
    float xDistMax;
    float xBestDist;
    hBestWP = NULL;
    eFuncId = *((tdeFuncId_*)p_stTree - 2);
    xBestDist = -1.0f;
    xDistMax = fn_xGetDistanceWaypointMax();
    xDistMin = fn_xGetDistanceWaypointMin();
    p_stTree = fn_p_stEvalTree(p_SuperObjPerso, p_stTree, p_stValue);
    MTH3D_tdstVector_ stVectPosition = p_stValue->uParam.stVectorValue;
    p_stTree = fn_p_stEvalTree(p_SuperObjPerso, p_stTree, p_stValue);
    hGraph = (WP_tdstGraph_*)p_stValue->uParam.pValue;
    switch (eFuncId) {
    case 167:
        if (hGraph == NULL) {
            p_stValue->uParam.lValue = 0;
            p_stValue->eType = (tdeVariableType_)10;
            return p_stTree;
        } else {
            lNbWPInGraph = WPG_fn_lNumberOfWaypointOfGraph(hGraph);
            for (lIndex = 0; lIndex < lNbWPInGraph; lIndex++) {
                float xDist;
                MTH3D_tdstVector_ stDiff;
                hWayPoint = WPG_fn_hGetWaypointOfGraph(hGraph, lIndex, &lTypeOfWP);
                WP_fnv_WayPoint_ComputeLocation(hWayPoint, &stCurrentWPVector);
                stDiff.xX = stCurrentWPVector.xX - stVectPosition.xX;
                stDiff.xY = stCurrentWPVector.xY - stVectPosition.xY;
                stDiff.xZ = stCurrentWPVector.xZ - stVectPosition.xZ;
                xDist = MTH_xSqrt(MTH_xSqr3(stDiff.xX, stDiff.xY, stDiff.xZ));
                if (xDist <= WP_fnx_WayPoint_GetRadius(hWayPoint)) {
                    if (xBestDist == -1.0f || xDist < xBestDist) {
                        if (xDistMax == 0.0f || (xDist <= xDistMax && xDist >= xDistMin)) {
                            xBestDist = MTH_xSqrt(MTH_xSqr3(stDiff.xX, stDiff.xY, stDiff.xZ));
                            hBestWP = hWayPoint;
                        }
                    }
                }
            }
            p_stValue->uParam.pValue = hBestWP;
            p_stValue->eType = (tdeVariableType_)10;
            return p_stTree;
        }
    default:
        fn_vOnAIErm_M_UpdateLastError(39, NULL);
        break;
    }
    return p_stTree;
}

tdstNodeInterpret_* fn_p_stCloserWPInGraph(HIE_tdstSuperObject_* p_SuperObjPerso, tdstNodeInterpret_* p_stTree, tdstGetSetParam_* p_stValue)
{
    tdstGetSetParam_ stParam;
    MTH3D_tdstVector_ stPersoWaypointVector;
    MTH3D_tdstVector_ stAxisVector;
    HIE_tdstSuperObject_* hNewSuperObjPerso;
    unsigned char bTestCollisionOk;
    float xZWeight;
    float xAngle;
    HIE_tdstSuperObject_* hCurrentSectorPerso;
    MTH3D_tdstVector_ stConeDir;
    MTH3D_tdstVector_ stConeTop;
    MTH3D_tdstVector_ stTempVector;
    MTH3D_tdstVector_ stPosPerso;
    MTH3D_tdstVector_ stCurrentWPVector;
    float xDistMax;
    float xDistMin;
    float xTmp;
    float xBestDist;
    WP_tdstWayPoint_* hWayPoint2;
    WP_tdstWayPoint_* hWayPoint1;
    WP_tdstWayPoint_* hWayPoint;
    WP_tdstWayPoint_* hBestWP;
    WP_tdstGraph_* hGraph;
    int lTypeOfWP;
    int lTypeOfWPToTest;
    int lNbWPInGraph;
    int lIndex;
    int lValue;
    tdeFuncId_ eFuncId;
    /* TODO: decompile from asm/... */
}

tdstNodeInterpret_* fn_p_stTravelOnAGraph(HIE_tdstSuperObject_* p_SuperObjPerso, tdstNodeInterpret_* p_stTree, tdstGetSetParam_* p_stValue)
{
    WP_tdstWayPoint_* hFirstWayPoint;
    WP_tdstWayPoint_* param0;
    int lValue;
    WP_tdstWayPoint_* hCurrentWayPoint;
    WP_tdstWayPoint_* hFoundFirstWayPoint;
    int lWeightToTest;
    WP_tdstGraphNode_* hCurrentNode;
    WP_tdstArc_* hElement;
    int lWeightMin;
    WP_tdstListOfArc_* hListOfArc;
    WP_tdstGraph_* hGraph;
    tdeFuncId_ eFuncId;
    unsigned int ulCapaToTest;
    int lWeightMax;
    int lTypeOfWPToTest;
    int lNbOfConnectedWP;
    int lWPTypeToAffect;
    eFuncId = *((tdeFuncId_*)p_stTree - 2);
    ulCapaToTest = 0;
    lTypeOfWPToTest = 0;
    lWPTypeToAffect = 0;
    lValue = 0;
    hListOfArc = NULL;
    lWeightToTest = 0;
    p_stTree = fn_p_stEvalTree(p_SuperObjPerso, p_stTree, p_stValue);
    hGraph = (WP_tdstGraph_*)p_stValue->uParam.pValue;
    if (eFuncId == 181 || eFuncId == 182) {
        p_stTree = fn_p_stEvalTree(p_SuperObjPerso, p_stTree, p_stValue);
        lValue = p_stValue->uParam.lValue;
    }
    p_stTree = fn_p_stEvalTree(p_SuperObjPerso, p_stTree, p_stValue);
    hFirstWayPoint = (WP_tdstWayPoint_*)p_stValue->uParam.pValue;
    switch (eFuncId) {
    case 178:
        p_stTree = fn_p_stEvalTree(p_SuperObjPerso, p_stTree, p_stValue);
        lWeightToTest = p_stValue->uParam.lValue;
        p_stTree = fn_p_stEvalTree(p_SuperObjPerso, p_stTree, p_stValue);
        ulCapaToTest = p_stValue->uParam.lValue;
        break;
    case 176:
    case 177:
    case 182:
        p_stTree = fn_p_stEvalTree(p_SuperObjPerso, p_stTree, p_stValue);
        ulCapaToTest = p_stValue->uParam.lValue;
        break;
    case 179:
    case 180:
        p_stTree = fn_p_stEvalTree(p_SuperObjPerso, p_stTree, p_stValue);
        lTypeOfWPToTest = p_stValue->uParam.lValue;
        break;
    }
    if (eFuncId == 181 || eFuncId == 182) {
        p_stTree = fn_p_stEvalTree(p_SuperObjPerso, p_stTree, p_stValue);
        lWPTypeToAffect = *(unsigned char*)&p_stValue->uParam.lValue;
    }
    hFoundFirstWayPoint = NULL;
    for (hCurrentNode = hGraph->m_hListOfNode.hFirstElementDyn; hCurrentNode != NULL; hCurrentNode = hCurrentNode->hNextBrotherDyn) {
        if (hCurrentNode->m_hWayPoint == hFirstWayPoint) {
            hFoundFirstWayPoint = hFirstWayPoint;
            break;
        }
    }
    if (hFoundFirstWayPoint != NULL) {
        hListOfArc = WPG_fn_hGetArcList(hCurrentNode);
    }
    switch (eFuncId) {
    case 176:
    case 177:
    case 178:
    case 179:
    case 180:
        hFoundFirstWayPoint = NULL;
        if (hListOfArc != NULL) {
            lWeightMin = 0x7FFFFFFF;
            lWeightMax = 0;
            for (hElement = hListOfArc->m_hArc.hFirstElementDyn; hElement != NULL; hElement = hElement->hNextBrotherDyn) {
                hCurrentWayPoint = hElement->m_hNode->m_hWayPoint;
                if (((eFuncId == 176 && (ulCapaToTest & hElement->m_ulCapability) == ulCapaToTest)
                     || (eFuncId == 177 && hElement->m_ulCapability == ulCapaToTest)
                     || (eFuncId == 179 && (lTypeOfWPToTest & hElement->m_hNode->m_lTypeOfWP) == lTypeOfWPToTest)
                     || (eFuncId == 180 && hElement->m_hNode->m_lTypeOfWP == lTypeOfWPToTest))
                    && hElement->m_lWeight < lWeightMin) {
                    lWeightMin = hElement->m_lWeight;
                    hFoundFirstWayPoint = hCurrentWayPoint;
                } else if (eFuncId == 178 && (ulCapaToTest & hElement->m_ulCapability) == ulCapaToTest
                           && hElement->m_lWeight <= lWeightToTest && hElement->m_lWeight >= lWeightMax) {
                    lWeightMax = hElement->m_lWeight;
                    hFoundFirstWayPoint = hCurrentWayPoint;
                }
            }
        }
        p_stValue->uParam.pValue = hFoundFirstWayPoint;
        p_stValue->eType = (tdeVariableType_)10;
        break;
    case 181:
    case 182:
        lNbOfConnectedWP = 0;
        if (lWPTypeToAffect == 2) {
            for (hCurrentNode = hGraph->m_hListOfNode.hFirstElementDyn; hCurrentNode != NULL; hCurrentNode = hCurrentNode->hNextBrotherDyn) {
                hCurrentNode->m_lTypeOfWP &= ~lValue;
            }
        }
        if (lWPTypeToAffect == 3) {
            for (hCurrentNode = hGraph->m_hListOfNode.hFirstElementDyn; hCurrentNode != NULL; hCurrentNode = hCurrentNode->hNextBrotherDyn) {
                hCurrentNode->m_lTypeOfWP = 0;
            }
        }
        if (hListOfArc != NULL) {
            for (hElement = hListOfArc->m_hArc.hFirstElementDyn; hElement != NULL; hElement = hElement->hNextBrotherDyn) {
                if (eFuncId != 182 || (ulCapaToTest & hElement->m_ulCapability) == ulCapaToTest) {
                    lNbOfConnectedWP++;
                    switch (lWPTypeToAffect) {
                    case 0:
                    case 2:
                        hElement->m_hNode->m_lTypeOfWP |= lValue;
                        break;
                    case 1:
                    case 3:
                        hElement->m_hNode->m_lTypeOfWP = lValue;
                        break;
                    case 4:
                        hElement->m_hNode->m_lTypeOfWP &= ~lValue;
                        break;
                    case 5:
                        hElement->m_hNode->m_lTypeOfWP = 0;
                        break;
                    }
                }
            }
        }
        p_stValue->uParam.lValue = lNbOfConnectedWP;
        p_stValue->eType = (tdeVariableType_)6;
        break;
    default:
        fn_vOnAIErm_M_UpdateLastError(39, NULL);
        break;
    }
    return p_stTree;
}

tdstNodeInterpret_* fn_p_stMiscFuncOnTypeOfWP(HIE_tdstSuperObject_* p_SuperObjPerso, tdstNodeInterpret_* p_stTree, tdstGetSetParam_* p_stValue)
{
    WP_tdstWayPoint_* param0;
    WP_tdstGraphNode_* hCurrentNode;
    WP_tdstGraphNode_* hTheNode;
    WP_tdstGraph_* hGraph;
    int lTypeOfWP;
    p_stTree = fn_p_stEvalTree(p_SuperObjPerso, p_stTree, p_stValue);
    hGraph = (WP_tdstGraph_*)p_stValue->uParam.pValue;
    p_stTree = fn_p_stEvalTree(p_SuperObjPerso, p_stTree, p_stValue);
    param0 = (WP_tdstWayPoint_*)p_stValue->uParam.pValue;
    hTheNode = NULL;
    hCurrentNode = hGraph->m_hListOfNode.hFirstElementDyn;
    if (hCurrentNode != NULL) {
        do {
            if (hCurrentNode->m_hWayPoint == param0) {
                hTheNode = hCurrentNode;
                break;
            }
            hCurrentNode = hCurrentNode->hNextBrotherDyn;
        } while (hCurrentNode != NULL);
    }
    lTypeOfWP = 0;
    if (hTheNode != NULL) lTypeOfWP = hTheNode->m_lTypeOfWP;
    p_stValue->uParam.lValue = lTypeOfWP; p_stValue->eType = (tdeVariableType_)44;
    return p_stTree;
}

tdstNodeInterpret_* fn_p_stGetSituationOnRail(HIE_tdstSuperObject_* p_SuperObjPerso, tdstNodeInterpret_* p_stTree, tdstGetSetParam_* p_stValue)
{
    MTH3D_tdstVector_ stWpPosition;
    tduVectorCopy_ stPersoPosition;
    int lValue;
    WP_tdstWayPoint_* hWayPoint;
    tdstMSWay_* h_MSWay;
    int lCurrentIndex;
    int lNbWp;
    float xDist;
    tdstGetSetParam_ stParam;
    HIE_tdstSuperObject_* hNewPerso;
    fn_vGetUltraOperatorPerso(fn_ucGetFunctionUltraOperator(*((tdeFuncId_*)p_stTree - 2)), p_SuperObjPerso, &hNewPerso);
    p_stTree = fn_p_stEvalTree(p_SuperObjPerso, p_stTree, &stParam);
    xDist = stParam.uParam.xValue;
    h_MSWay = hNewPerso->hLinkedObject.p_stCharacter->h_MSWay;
    if (h_MSWay == NULL) {
        p_stValue->uParam.lValue = -1;
        p_stValue->eType = (tdeVariableType_)6;
        return p_stTree;
    }
    lNbWp = MSWay_fn_lGetNumberWayPointInPath(h_MSWay);
    lCurrentIndex = MSWay_fn_lGetCurrentIndexInPath(h_MSWay);
    lValue = 1;
    if (lCurrentIndex == lValue) {
        hWayPoint = MSWay_fn_hGetWayPointOfPath(h_MSWay, 0);
    } else if (lCurrentIndex == lNbWp - 1) {
        lValue = 2;
        hWayPoint = MSWay_fn_hGetWayPointOfPath(h_MSWay, lCurrentIndex);
    } else {
        p_stValue->uParam.lValue = 0;
        p_stValue->eType = (tdeVariableType_)6;
        return p_stTree;
    }
    if (xDist == 0.0f) {
        xDist = WP_fnx_WayPoint_GetRadius(hWayPoint);
    }
    {
        tduVectorCopy_* p_stPos = (tduVectorCopy_*)((char*)hNewPerso->hLocalMatrix + 0x40);
        stPersoPosition.auWords[0] = p_stPos->auWords[0]; stPersoPosition.auWords[1] = p_stPos->auWords[1]; stPersoPosition.auWords[2] = p_stPos->auWords[2];
    }
    WP_fnv_WayPoint_GetVertex(hWayPoint, &stWpPosition);
    if ((stWpPosition.xX != stPersoPosition.stVector.xX || stWpPosition.xY != stPersoPosition.stVector.xY || stWpPosition.xZ != stPersoPosition.stVector.xZ) && MTH_xSqrt(MTH_xSqr3(stWpPosition.xX - stPersoPosition.stVector.xX, stWpPosition.xY - stPersoPosition.stVector.xY, stWpPosition.xZ - stPersoPosition.stVector.xZ)) < xDist) {
        p_stValue->uParam.lValue = lValue;
        p_stValue->eType = (tdeVariableType_)6;
    } else {
        p_stValue->uParam.lValue = 0;
        p_stValue->eType = (tdeVariableType_)6;
    }
    return p_stTree;
}

tdstNodeInterpret_* fn_p_stPersoCapabilityFunction(HIE_tdstSuperObject_* p_SuperObjPerso, tdstNodeInterpret_* p_stTree, tdstGetSetParam_* p_stValue)
{
    HIE_tdstSuperObject_* hNewSuperObjPerso;
    unsigned int ubf32Capabilities;
    fn_vGetUltraOperatorPerso(fn_ucGetFunctionUltraOperator(*((tdeFuncId_*)p_stTree - 2)), p_SuperObjPerso, &hNewSuperObjPerso);
    ubf32Capabilities = fn_ulGetCapabilities(hNewSuperObjPerso->ulTypeOfLinkedObject != 2 ? NULL : hNewSuperObjPerso->hLinkedObject.p_stCharacter);
    p_stValue->uParam.lValue = ubf32Capabilities;
    p_stValue->eType = (tdeVariableType_)44;
    return p_stTree;
}

tdstNodeInterpret_* fn_p_stCapabilityFunction(HIE_tdstSuperObject_* p_SuperObjPerso, tdstNodeInterpret_* p_stTree, tdstGetSetParam_* p_stValue)
{
    p_stTree = fn_p_stEvalTree(p_SuperObjPerso, p_stTree, p_stValue);
    p_stValue->uParam.lValue = 1 << *(unsigned char*)&p_stValue->uParam;
    p_stValue->eType = (tdeVariableType_)44;
    return p_stTree;
}

tdstNodeInterpret_* fn_p_stGetScrollSpeed(HIE_tdstSuperObject_* p_SuperObjPerso, tdstNodeInterpret_* p_stTree, tdstGetSetParam_* p_stValue)
{
    union { MTH3D_tdstVector_ stVector; unsigned int vectorBits[3]; };
    HIE_tdstSuperObject_* hNewSuperObjPerso;
    tdstGetSetParam_ stParam;
    tdeFuncId_ eFuncId;
    eFuncId = *((tdeFuncId_*)p_stTree - 2);
    fn_vGetUltraOperatorPerso(fn_ucGetFunctionUltraOperator(eFuncId), p_SuperObjPerso, &hNewSuperObjPerso);
    if (eFuncId == 211) {
        p_stTree = fn_p_stEvalTree(p_SuperObjPerso, p_stTree, &stParam);
        fn_vGetScrollSpeedMatCollided(hNewSuperObjPerso, &stVector, *(unsigned int*)&stParam, -1);
        ((unsigned int*)&p_stValue->uParam.stVectorValue)[0] = vectorBits[0]; ((unsigned int*)&p_stValue->uParam.stVectorValue)[1] = vectorBits[1]; ((unsigned int*)&p_stValue->uParam.stVectorValue)[2] = vectorBits[2]; p_stValue->eType = (tdeVariableType_)21;
        return p_stTree;
    }
    fn_vOnAIErm_M_UpdateLastError(39, NULL);
    return p_stTree;
}

tdstNodeInterpret_* fn_p_stMTGetScrollSpeed(HIE_tdstSuperObject_* p_SuperObjPerso, tdstNodeInterpret_* p_stTree, tdstGetSetParam_* p_stValue)
{
    unsigned int ulObstacleType;
    /* Integer view preserves the target's bitwise vector-result copy. */
    union { MTH3D_tdstVector_ stVector; unsigned int vectorBits[3]; };
    tdstGetSetParam_ stParam;
    tdeFuncId_ eFuncId;
    eFuncId = *((tdeFuncId_*)p_stTree - 2);
    if (eFuncId == 212) {
        p_stTree = fn_p_stEvalTree(p_SuperObjPerso, p_stTree, &stParam);
        ulObstacleType = stParam.uParam.lValue;
        p_stTree = fn_p_stEvalTree(p_SuperObjPerso, p_stTree, &stParam);
        fn_vGetScrollSpeedMatCollided(p_SuperObjPerso, &stVector, ulObstacleType, stParam.uParam.lValue);
        ((unsigned int*)&p_stValue->uParam.stVectorValue)[0] = vectorBits[0];
        ((unsigned int*)&p_stValue->uParam.stVectorValue)[1] = vectorBits[1];
        ((unsigned int*)&p_stValue->uParam.stVectorValue)[2] = vectorBits[2];
        p_stValue->eType = (tdeVariableType_)21;
        return p_stTree;
    }
    fn_vOnAIErm_M_UpdateLastError(39, NULL);
    return p_stTree;
}

tdstNodeInterpret_* fn_p_stGetNbFrame(HIE_tdstSuperObject_* p_SuperObjPerso, tdstNodeInterpret_* p_stTree, tdstGetSetParam_* p_stValue)
{
    HIE_tdstSuperObject_* hNewSuperObjPerso;
    tdeFuncId_ eFuncId;
    eFuncId = *((tdeFuncId_*)p_stTree - 2);
    fn_vGetUltraOperatorPerso(fn_ucGetFunctionUltraOperator(eFuncId), p_SuperObjPerso, &hNewSuperObjPerso);
    if (eFuncId == 213) {
        p_stValue->uParam.lValue = PLA_fn_uwGetNbFrameInCurrAnim(hNewSuperObjPerso);
        p_stValue->eType = (tdeVariableType_)6;
        return p_stTree;
    }
    fn_vOnAIErm_M_UpdateLastError(39, NULL);
    return p_stTree;
}

tdstNodeInterpret_* fn_p_stVectorOperations(HIE_tdstSuperObject_* p_SuperObjPerso, tdstNodeInterpret_* p_stTree, tdstGetSetParam_* p_stValue)
{
    float xNorm;
    tdeFuncId_ eFuncId;
    eFuncId = *((tdeFuncId_*)p_stTree - 2);
    p_stTree = fn_p_stEvalTree(p_SuperObjPerso, p_stTree, p_stValue);
    switch (eFuncId) {
    case 215:
    {
        MTH3D_tdstVector_ stV1 = p_stValue->uParam.stVectorValue;
        p_stTree = fn_p_stEvalTree(p_SuperObjPerso, p_stTree, p_stValue);
        MTH3D_tdstVector_ stV2 = p_stValue->uParam.stVectorValue;
        p_stValue->uParam.stVectorValue.xX = MTH_xCross(stV1.xY, stV2.xZ, stV1.xZ, stV2.xY);
        p_stValue->uParam.stVectorValue.xY = MTH_xCross(stV1.xZ, stV2.xX, stV1.xX, stV2.xZ);
        p_stValue->uParam.stVectorValue.xZ = MTH_xCross(stV1.xX, stV2.xY, stV1.xY, stV2.xX);
        return p_stTree;
    }
    case 216:
        if (!(MTH_xAbs(p_stValue->uParam.stVectorValue.xX) < 1.0e-9f && MTH_xAbs(p_stValue->uParam.stVectorValue.xY) < 1.0e-9f && MTH_xAbs(p_stValue->uParam.stVectorValue.xZ) < 1.0e-9f)) {
            xNorm = MTH_xSqrt(MTH_xSqr3(p_stValue->uParam.stVectorValue.xX, p_stValue->uParam.stVectorValue.xY, p_stValue->uParam.stVectorValue.xZ));
            if (xNorm != 0.0f) {
                xNorm = 1.0f / xNorm;
                p_stValue->uParam.stVectorValue.xX = xNorm * p_stValue->uParam.stVectorValue.xX;
                p_stValue->uParam.stVectorValue.xY = xNorm * p_stValue->uParam.stVectorValue.xY;
                p_stValue->uParam.stVectorValue.xZ = xNorm * p_stValue->uParam.stVectorValue.xZ;
            }
        }
        return p_stTree;
    default:
        fn_vOnAIErm_M_UpdateLastError(39, NULL);
        break;
    }
    return p_stTree;
}

tdstNodeInterpret_* fn_p_stGetSPOCoordinates(HIE_tdstSuperObject_* p_SuperObjPerso, tdstNodeInterpret_* p_stTree, tdstGetSetParam_* p_stValue)
{
    tdeFuncId_ eFuncId;
    tdstGetSetParam_ stParam;
    HIE_tdstSuperObject_* hSpo;
    union { MTH3D_tdstVector_ stResult; unsigned int resultBits[3]; };
    eFuncId = *((tdeFuncId_*)p_stTree - 2);
    p_stTree = fn_p_stEvalTree(p_SuperObjPerso, p_stTree, &stParam);
    hSpo = (HIE_tdstSuperObject_*)stParam.uParam.pValue;
    stResult.xX = 0;
    stResult.xY = 0;
    stResult.xZ = 0;
    if (hSpo != NULL) {
        switch (eFuncId) {
        case 217:
            resultBits[0] = ((unsigned int*)hSpo->hLocalMatrix)[0x40 / 4];
            resultBits[1] = ((unsigned int*)hSpo->hLocalMatrix)[0x44 / 4];
            resultBits[2] = ((unsigned int*)hSpo->hLocalMatrix)[0x48 / 4];
            break;
        case 218:
            resultBits[0] = ((unsigned int*)hSpo->hLocalMatrix)[0x20 / 4];
            resultBits[1] = ((unsigned int*)hSpo->hLocalMatrix)[0x24 / 4];
            resultBits[2] = ((unsigned int*)hSpo->hLocalMatrix)[0x28 / 4];
            MTH3D_M_vNegVector(&stResult, &stResult);
            break;
        case 219:
            resultBits[0] = ((unsigned int*)hSpo->hLocalMatrix)[0x10 / 4];
            resultBits[1] = ((unsigned int*)hSpo->hLocalMatrix)[0x14 / 4];
            resultBits[2] = ((unsigned int*)hSpo->hLocalMatrix)[0x18 / 4];
            break;
        case 220:
            resultBits[0] = ((unsigned int*)hSpo->hLocalMatrix)[0x30 / 4];
            resultBits[1] = ((unsigned int*)hSpo->hLocalMatrix)[0x34 / 4];
            resultBits[2] = ((unsigned int*)hSpo->hLocalMatrix)[0x38 / 4];
            break;
        default:
            fn_vOnAIErm_M_UpdateLastError(39, NULL);
            break;
        }
    }
    ((unsigned int*)&p_stValue->uParam.stVectorValue)[0] = resultBits[0];
    ((unsigned int*)&p_stValue->uParam.stVectorValue)[1] = resultBits[1];
    ((unsigned int*)&p_stValue->uParam.stVectorValue)[2] = resultBits[2];
    p_stValue->eType = (tdeVariableType_)21;
    return p_stTree;
}

/* Target a1/a2 retain the standard interpreter callback ABI. */
tdstNodeInterpret_* fn_p_stGetNbActivePerso(HIE_tdstSuperObject_* p_SuperObjPerso, tdstNodeInterpret_* p_stTree, tdstGetSetParam_* p_stValue)
{
    tdeFuncId_ eFuncId;
    eFuncId = *((tdeFuncId_*)p_stTree - 2);
    if (eFuncId == 161) {
        p_stValue->uParam.lValue = GAM_fn_lGetNbPersoActive();
        p_stValue->eType = (tdeVariableType_)6;
        return p_stTree;
    } else {
        fn_vOnAIErm_M_UpdateLastError(39, NULL);
    }
    return p_stTree;
}

tdstNodeInterpret_* fn_p_stCINEGetGenerateEvent(HIE_tdstSuperObject_* p_SuperObjPerso, tdstNodeInterpret_* p_stTree, tdstGetSetParam_* p_stValue)
{
    tdeFuncId_ eFuncId;
    int lLastEvent;
    char* p_szString;
    tdstGetSetParam_ stParam;
    CINE_tdstCine_* hCine;
    eFuncId = *((tdeFuncId_*)p_stTree - 2);
    if (eFuncId == 234) {
        p_stTree = fn_p_stEvalTree(p_SuperObjPerso, p_stTree, &stParam);
        p_szString = fn_szGetStringFromTextOrStringParam(&stParam);
        hCine = CINE_fn_pFindCine(p_szString);
        lLastEvent = 0;
        if (hCine != NULL) {
            lLastEvent = hCine->lGenerateEvent;
            hCine->lGenerateEvent = 0;
        }
        p_stValue->uParam.lValue = lLastEvent; p_stValue->eType = (tdeVariableType_)6;
        return p_stTree;
    } else {
        fn_vOnAIErm_M_UpdateLastError(39, NULL);
    }
    return p_stTree;
}

tdstNodeInterpret_* fn_p_stTractionFactorFunction(HIE_tdstSuperObject_* p_SuperObjPerso, tdstNodeInterpret_* p_stTree, tdstGetSetParam_* p_stValue)
{
    unsigned char ucTractionFactor;
    tdeFuncId_ eFuncId;
    tdstEngineObject_* p_stEngineObj;
    HIE_tdstSuperObject_* hNewSuperObjPerso;
    eFuncId = *((tdeFuncId_*)p_stTree - 2);
    ucTractionFactor = 0;
    fn_vGetUltraOperatorPerso(fn_ucGetFunctionUltraOperator(eFuncId), p_SuperObjPerso, &hNewSuperObjPerso);
    if (hNewSuperObjPerso->ulTypeOfLinkedObject != 2) { p_stEngineObj = NULL; } else { p_stEngineObj = hNewSuperObjPerso->hLinkedObject.p_stCharacter; }
    switch (eFuncId) {
    case 221:
        ucTractionFactor = p_stEngineObj->h_StandardGame->ucTractionFactor;
        break;
    }
    *(unsigned char*)&p_stValue->uParam.lValue = ucTractionFactor;
    p_stValue->eType = (tdeVariableType_)3;
    return p_stTree;
}

tdstNodeInterpret_* fn_p_stGetZDxCenter(HIE_tdstSuperObject_* p_SuperObjPerso, tdstNodeInterpret_* p_stTree, tdstGetSetParam_* p_stValue)
{
    tdeFuncId_ eFuncId;
    HIE_tdstSuperObject_* hCharacter;
    unsigned short xMask;
    unsigned char ucZoneType;
    eFuncId = *((tdeFuncId_*)p_stTree - 2);
    p_stTree = fn_p_stEvalTree(p_SuperObjPerso, p_stTree, p_stValue);
    hCharacter = fn_h_StandardGameGetSuperObject(((tdstEngineObject_*)p_stValue->uParam.pValue)->h_StandardGame);
    p_stTree = fn_p_stEvalTree(p_SuperObjPerso, p_stTree, p_stValue);
    xMask = (unsigned short)p_stValue->uParam.lValue;
    p_stValue->uParam.stVectorValue.xX = 0;
    p_stValue->uParam.stVectorValue.xY = 0;
    p_stValue->uParam.stVectorValue.xZ = 0;
    switch (eFuncId) {
    case 222:
        ucZoneType = 2;
        break;
    case 223:
        ucZoneType = 1;
        break;
    case 224:
        ucZoneType = 3;
        break;
    case 225:
        ucZoneType = 0;
        break;
    default:
        ucZoneType = 255;
        break;
    }
    p_stValue->eType = (tdeVariableType_)21;
    fn_vInternGetZDxCenter(hCharacter, xMask, ucZoneType, 0, &p_stValue->uParam.stVectorValue);
    return p_stTree;
}

HIE_tdstSuperObject_* fn_hGetNearestActorInSectorWithAnyCustombit(HIE_tdstSuperObject_* _hMe, HIE_tdstSuperObject_* _hSector, unsigned int _ulFilterCustomBits, tdeFuncId_ _eFuncId)
{
    tduVectorCopy_ stMyPosition;
    tduVectorCopy_ stActorsPosition;
    unsigned int ulStCustomBits;
    HIE_tdstSuperObject_* hSO;
    float xBestDist;
    HIE_tdstSuperObject_* hCloserSO;
    SECT_tdstListOfSOCharacters_* hCharacterElement;
    MTH3D_tdstVector_* p_stMyMatrixPos = (MTH3D_tdstVector_*)((char*)_hMe->hGlobalMatrix + 0x40);
    stMyPosition.auWords[0] = ((tduVectorCopy_*)p_stMyMatrixPos)->auWords[0]; stMyPosition.auWords[1] = ((tduVectorCopy_*)p_stMyMatrixPos)->auWords[1]; stMyPosition.auWords[2] = ((tduVectorCopy_*)p_stMyMatrixPos)->auWords[2];
    xBestDist = 3.402822e38f;
    hCloserSO = NULL;
    for (hCharacterElement = *(SECT_tdstListOfSOCharacters_**)_hSector->hLinkedObject.p_stSector; hCharacterElement != NULL; hCharacterElement = hCharacterElement->hNextBrotherDyn) {
        hSO = hCharacterElement->hPointerOfCharacter;
        if (hSO != _hMe && g_hCharacterMaskedForResearch != hSO) {
            switch (_eFuncId) {
            case 152:
                ulStCustomBits = hSO->hLinkedObject.p_stCharacter->h_StandardGame->ulAICustomBits;
                break;
            default:
                ulStCustomBits = hSO->hLinkedObject.p_stCharacter->h_StandardGame->ulCustomBits;
                break;
            }
            if (ulStCustomBits & _ulFilterCustomBits) {
                MTH3D_tdstVector_* p_stActorMatrixPos = (MTH3D_tdstVector_*)((char*)hSO->hGlobalMatrix + 0x40);
                float xDist;
                stActorsPosition.auWords[0] = ((tduVectorCopy_*)p_stActorMatrixPos)->auWords[0]; stActorsPosition.auWords[1] = ((tduVectorCopy_*)p_stActorMatrixPos)->auWords[1]; stActorsPosition.auWords[2] = ((tduVectorCopy_*)p_stActorMatrixPos)->auWords[2];
                xDist = MTH_xSqr3(stActorsPosition.stVector.xX - stMyPosition.stVector.xX, stActorsPosition.stVector.xY - stMyPosition.stVector.xY, stActorsPosition.stVector.xZ - stMyPosition.stVector.xZ);
                if (xDist < xBestDist && (xDist > g_DistanceActMin || MTH_xAbs(g_DistanceActMin) < 0.001f) && (xDist < g_DistanceActMax || MTH_xAbs(g_DistanceActMax) < 0.001f)) {
                    hCloserSO = hSO;
                    xBestDist = xDist;
                }
            }
        }
    }
    return hCloserSO;
}

tdstNodeInterpret_* fn_p_stGetNearestActorInCurrentSector(HIE_tdstSuperObject_* p_SuperObjPerso, tdstNodeInterpret_* p_stTree, tdstGetSetParam_* p_stValue)
{
    HIE_tdstSuperObject_* hNewSuperObjPerso;
    tdeFuncId_ eFuncId;
    HIE_tdstSuperObject_* hCloserSO;
    HIE_tdstSuperObject_* hCurrentSectorPerso;
    tdstGetSetParam_ stParam;
    unsigned int ulCustomBits;
    eFuncId = *((tdeFuncId_*)p_stTree - 2);
    fn_vGetUltraOperatorPerso(fn_ucGetFunctionUltraOperator(eFuncId), p_SuperObjPerso, &hNewSuperObjPerso);
    p_stTree = fn_p_stEvalTree(p_SuperObjPerso, p_stTree, &stParam);
    if (stParam.eType == 8) {
        ulCustomBits = MTH_M_xRealToLong(stParam.uParam.xValue);
    } else {
        ulCustomBits = (unsigned int)stParam.uParam.lValue;
    }
    hCurrentSectorPerso = fn_h_SectInfoGetCurrentSector(hNewSuperObjPerso->hLinkedObject.p_stCharacter->h_SectInfo);
    hCloserSO = fn_hGetNearestActorInSectorWithAnyCustombit(hNewSuperObjPerso, hCurrentSectorPerso, ulCustomBits, eFuncId);
    p_stValue->uParam.pValue = (hCloserSO == NULL ? NULL : (hCloserSO->ulTypeOfLinkedObject != 2 ? NULL : hCloserSO->hLinkedObject.p_stCharacter));
    p_stValue->eType = (tdeVariableType_)11;
    return p_stTree;
}

tdstNodeInterpret_* fn_p_stDotProduct(HIE_tdstSuperObject_* p_SuperObjPerso, tdstNodeInterpret_* p_stTree, tdstGetSetParam_* p_stValue)
{
    p_stTree = fn_p_stEvalTree(p_SuperObjPerso, p_stTree, p_stValue);
    MTH3D_tdstVector_ stV1 = p_stValue->uParam.stVectorValue;
    p_stTree = fn_p_stEvalTree(p_SuperObjPerso, p_stTree, p_stValue);
    p_stValue->uParam.xValue = MTH_xDotProduct(&stV1, &p_stValue->uParam.stVectorValue);
    p_stValue->eType = (tdeVariableType_)8;
    return p_stTree;
}

/* The target uses a1/a2 for tree/value, retaining the standard callback's
 * unused a0 superobject parameter omitted by the recovered debug signature. */
tdstNodeInterpret_* fn_p_stGetCPUCounter(HIE_tdstSuperObject_* p_SuperObjPerso, tdstNodeInterpret_* p_stTree, tdstGetSetParam_* p_stValue)
{
    unsigned int ulValue;
    ulValue = TMR_fn_ulFastGetInternalCounter();
    p_stValue->uParam.lValue = ulValue; p_stValue->eType = (tdeVariableType_)6;
    return p_stTree;
}

tdstNodeInterpret_* fn_p_stFunctTurnToPosition(HIE_tdstSuperObject_* p_SuperObjPerso, tdstNodeInterpret_* p_stTree, tdstGetSetParam_* p_stValue)
{
    MAT_tdstTransformation_* p_stMatrix;
    float xNorm;
    unsigned int ulCurrentBits;
    tdstDynam_* hDynam;
    MAT_tdstTransformation_ stInvMatrix;
    float xValue;
    float xSin;
    float xCos;
    float xAngle;
    MTH3D_tdstVector_ stZvect;
    MTH3D_tdstVector_ stYvect;
    MTH3D_tdstVector_ stXvect;
    MTH3D_tdstVector_ stTemp;
    HIE_tdstSuperObject_* hNewSuperObjPerso;
    tdstGetSetParam_ stParam;
    fn_vGetUltraOperatorPerso(fn_ucGetFunctionUltraOperator(*((tdeFuncId_*)p_stTree - 2)), p_SuperObjPerso, &hNewSuperObjPerso);
    p_stMatrix = hNewSuperObjPerso->hGlobalMatrix;
    MAT_fn_vInvertRotation(&stInvMatrix, p_stMatrix);
    hDynam = hNewSuperObjPerso->hLinkedObject.p_stCharacter->h_Dynam;
    p_stTree = fn_p_stEvalTree(p_SuperObjPerso, p_stTree, &stParam);
    MTH3D_tdstVector_ stVect = stParam.uParam.stVectorValue;
    p_stTree = fn_p_stEvalTree(p_SuperObjPerso, p_stTree, &stParam);
    xValue = 0.017453292f * stParam.uParam.xValue;
    stZvect.xX = 0.0f; stZvect.xY = 0.0f; stZvect.xZ = 1.0f;
    MTH3D_tdstVector_ stPosition = *(MTH3D_tdstVector_*)&p_stMatrix->stTransformMatrix.stCol_3;
    MTH3D_M_vSubVector(&stTemp, &stVect, &stPosition);
    MAT_fn_vApplyOnVector(&stTemp, &stInvMatrix, &stTemp);
    stTemp.xZ = 0.0f;
    xNorm = MTH_xSqrt(MTH_xSqr3(stTemp.xX, stTemp.xY, stTemp.xZ));
    if (xNorm != 0.0f) {
        MTH3D_M_vMulScalar(&stTemp, &stTemp, 1.0f / xNorm);
    }
    xCos = MTH_xDot3(0.0f, stTemp.xX, -1.0f, stTemp.xY, 0.0f, stTemp.xZ);
    if (xCos > 1.0f) {
        xCos = 1.0f;
    } else if (xCos < -1.0f) {
        xCos = -1.0f;
    }
    xAngle = acosf(xCos);
    if (MTH_xCross(0.0f, stTemp.xY, -1.0f, stTemp.xX) < 0.0f) {
        xAngle = -xAngle;
    }
    if (xAngle > xValue) {
        xAngle = xValue;
        xCos = cosf(xValue);
    } else if (xAngle < -xValue) {
        xAngle = -xValue;
        xCos = cosf(-xValue);
    }
    xSin = sinf(xAngle);
    stXvect.xX = xCos; stXvect.xY = xSin; stXvect.xZ = 0.0f;
    stYvect.xX = -xSin; stYvect.xY = xCos; stYvect.xZ = 0.0f;
    MAT_fn_vRotateVector(&stXvect, p_stMatrix, &stXvect);
    MAT_fn_vRotateVector(&stYvect, p_stMatrix, &stYvect);
    MAT_fn_vRotateVector(&stZvect, p_stMatrix, &stZvect);
    MAT_fn_vSetRotationVectors(p_stMatrix, &stXvect, &stYvect, &stZvect);
    hNewSuperObjPerso->lLastComputeFrame = HIE_gs_lCurrentFrame;
    HIE_fn_vComputeNewRelativeMatrix(hNewSuperObjPerso);
    if (hNewSuperObjPerso->ulTypeOfLinkedObject != 2
        || ((ulCurrentBits = fn_ulStandardGameGetCustomBitsSO(hNewSuperObjPerso)) & 2
            && (hDynam == NULL || ulCurrentBits & 0x8000))) {
        HIE_fn_vRefreshHierarchy(hNewSuperObjPerso);
    }
    if (hDynam != NULL) {
        if (fn_p_stDynamGetDynamics(hDynam) != NULL) {
            MEC_vImposeRotationMatrix(fn_p_stDynamGetDynamics(hDynam), p_stMatrix);
        }
    }
    p_stValue->uParam.xValue = 57.29578f * xAngle;
    p_stValue->eType = (tdeVariableType_)8;
    return p_stTree;
}

tdstNodeInterpret_* fn_p_stFunctPS2(HIE_tdstSuperObject_* p_SuperObjPerso, tdstNodeInterpret_* p_stTree, tdstGetSetParam_* p_stValue)
{
    unsigned int Val1;
    tdeFuncId_ eFuncId;
    unsigned int ulValue;
    static int SAV2_NotInitialized;
    eFuncId = *((tdeFuncId_*)p_stTree - 2);
    switch (eFuncId) {
    case 231:
        ulValue = 0;
        break;
    case 230:
        p_stTree = fn_p_stEvalTree(p_SuperObjPerso, p_stTree, p_stValue);
        ulValue = 0;
        break;
    case 435:
        p_stTree = fn_p_stEvalTree(p_SuperObjPerso, p_stTree, p_stValue);
        ulValue = 0;
        break;
    case 232:
        p_stTree = fn_p_stEvalTree(p_SuperObjPerso, p_stTree, p_stValue);
        Val1 = p_stValue->uParam.lValue;
        p_stTree = fn_p_stEvalTree(p_SuperObjPerso, p_stTree, p_stValue);
        p_stTree = fn_p_stEvalTree(p_SuperObjPerso, p_stTree, p_stValue);
        if (Val1 > 1807000) {
            ulValue = 0;
        } else {
            switch (Val1) {
            case 4000:
                ulValue = SAV2_NotInitialized;
                SAV2_NotInitialized = 0;
                break;
            case 4001:
                ulValue = fn_bAutoSaveFinished();
                break;
            case 1000:
                ulValue = SHW_bDidCharacterHaveAShadowLastFrame((HIE_tdstSuperObject_*)COLANTIBUG_hHandleOfCharacter);
                break;
            case 6000:
                ulValue = 0;
                break;
            case 6001:
                ulValue = 0;
                M2D_fn_vForbidExitFromMenu();
                break;
            case 6002:
                ulValue = M2D_fn_ulGetRevisitEnvironmentNumber();
                break;
            case 6003:
                ulValue = 0;
                M2D_fn_vDisplayEndOfGameRecapPage();
                break;
            default:
                ulValue = 0;
                break;
            }
        }
        break;
    default:
        return p_stTree;
    }
    p_stValue->uParam.lValue = ulValue;
    p_stValue->eType = (tdeVariableType_)6;
    return p_stTree;
}

tdstNodeInterpret_* fn_p_stSAV2_DoVarsNeedToBeSet(HIE_tdstSuperObject_* p_SuperObjPerso, tdstNodeInterpret_* p_stTree, tdstGetSetParam_* p_stValue)
{
    static int SAV2_NotInitialized;
    tdeFuncId_ eFuncId = *((tdeFuncId_*)p_stTree - 2);
    int lValue = 0;

    if (eFuncId == 233)
    {
        lValue = SAV2_NotInitialized;
        SAV2_NotInitialized = 0;
    }

    p_stValue->uParam.lValue = lValue;
    p_stValue->eType = (tdeVariableType_)6;
    return p_stTree;
}

tdstNodeInterpret_* fn_p_stTextComparison(HIE_tdstSuperObject_* p_SuperObjPerso, tdstNodeInterpret_* p_stTree, tdstGetSetParam_* p_stValue)
{
    char* szString2;
    char* szString1;
    int lValue;
    tdeFuncId_ eFuncId;
    eFuncId = *((tdeFuncId_*)p_stTree - 2);
    lValue = 0;
    if (eFuncId == 235) {
        p_stTree = fn_p_stEvalTree(p_SuperObjPerso, p_stTree, p_stValue);
        szString1 = fn_szGetStringFromTextOrStringParam(p_stValue);
        p_stTree = fn_p_stEvalTree(p_SuperObjPerso, p_stTree, p_stValue);
        szString2 = fn_szGetStringFromTextOrStringParam(p_stValue);
        lValue = strcasecmp(szString1, szString2);
    }
    p_stValue->uParam.lValue = lValue; p_stValue->eType = (tdeVariableType_)6;
    return p_stTree;
}

tdstNodeInterpret_* fn_p_stEmptyText(HIE_tdstSuperObject_* p_SuperObjPerso, tdstNodeInterpret_* p_stTree, tdstGetSetParam_* p_stValue)
{
    tdeFuncId_ eFuncId;
    static char szString[1];

    eFuncId = *((tdeFuncId_*)p_stTree - 2);
    if (eFuncId == 236) {
        p_stValue->uParam.pValue = szString;
        p_stValue->eType = (tdeVariableType_)9;
    }
    return p_stTree;
}
