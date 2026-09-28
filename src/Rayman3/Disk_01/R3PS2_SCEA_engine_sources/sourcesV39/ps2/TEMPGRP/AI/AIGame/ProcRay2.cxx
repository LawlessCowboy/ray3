/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\ProcRay2.cxx */
/* Language: C */
/* Compiler: MW MIPS C Compiler */

#include <stddef.h>

/* Recovered aggregate layouts from MWCC debug type records. */
typedef struct AI_tdstMind_ AI_tdstMind_;
typedef struct COL_tdstCollideObject_ COL_tdstCollideObject_;
typedef struct DNM_stDynamics DNM_stDynamics;
typedef struct GLI_tdstLight_ GLI_tdstLight_;
typedef struct GLI_tdstMaterial_ GLI_tdstMaterial_;
typedef struct HIE_tdstSuperObject_ HIE_tdstSuperObject_;
typedef struct MAT_tdstTransformation_ MAT_tdstTransformation_;
typedef struct MTH3D_tdstVector_ MTH3D_tdstVector_;
typedef struct WP_tdstGraphNode_ WP_tdstGraphNode_;
typedef struct WP_tdstGraph_ WP_tdstGraph_;
typedef struct WP_tdstWayPoint_ WP_tdstWayPoint_;
typedef struct tdst3dData_ tdst3dData_;
typedef struct tdstArray_ tdstArray_;
typedef struct tdstDynam_ tdstDynam_;
typedef struct tdstEngineObject_ tdstEngineObject_;
typedef struct tdstGetSetParam_ tdstGetSetParam_;
typedef struct tdstListOfMacro_ tdstListOfMacro_;
typedef struct tdstMSLight_ tdstMSLight_;
typedef struct tdstNodeInterpret_ tdstNodeInterpret_;
typedef struct tdstSuperObjectLinks_ tdstSuperObjectLinks_;

/* Shared debug records used as concrete local objects in this TU. */
typedef enum tdeProcedureId_ { eProcedureId_Dummy = 0 } tdeProcedureId_;
typedef enum tdeVariableType_ { eVariableType_Dummy = 0 } tdeVariableType_;
typedef enum tdeDsgVarTypeId_ { eDsgVarTypeId_Dummy = 0 } tdeDsgVarTypeId_;
struct MTH3D_tdstVector_ { float xX; float xY; float xZ; };
/* Concrete transformation layout recovered in 3dData.c. */
typedef enum MAT_tdeTranformationType_ {
    MAT_eTransform_Uninitialized = 0,
    MAT_eTransform_Identity = 1,
    MAT_eTransform_Translation = 2,
    MAT_eTransform_Zoom = 3,
    MAT_eTransform_Scale = 4,
    MAT_eTransform_Rotation = 5,
    MAT_eTransform_RotationZoom = 6,
    MAT_eTransform_RotationScale = 7,
    MAT_eTransform_ComplexRotationScale = 8,
    MAT_eTransform_Undefined = 9,
} MAT_tdeTranformationType_;
struct MTH4D_tdstVector_ {
    float xX; /* +0x0 */
    float xY; /* +0x4 */
    float xZ; /* +0x8 */
    float xW; /* +0xc */
};

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
typedef union tduGetSetParam_ {
    int lValue;
    unsigned int ulValue;
    float xValue;
    MTH3D_tdstVector_ stVectorValue;
    void* pValue;
} tduGetSetParam_;
struct tdstGetSetParam_ { tduGetSetParam_ uParam; tdeVariableType_ eType; };
struct GEO_tdstColor_ { float xR; float xG; float xB; float xA; };
/* Shared layout recovered in DataRay2.c. */
struct tdstExtendDatas4Ray_ {
    int iMagicPoints4Ray;
    int iMagicPointsMax4Ray;
    float xAirPoints4Ray;
    float xAirPointsMax4Ray;
};
extern "C" tdstExtendDatas4Ray_ stExtendDatas4Ray;
union tduIdInterpret_ { tdeProcedureId_ eProcedureId; };
union tduGetSetParamForNode_ { int lValue; unsigned int ulValue; float xValue; void* pValue; unsigned char ucValue; };
union tduNodeDummy_ { tduIdInterpret_ uId; tduGetSetParamForNode_ uParam; };
struct tdstNodeInterpret_ {
    tduNodeDummy_ uDummy;
    unsigned short uwNodeToSkip;
    unsigned char ucDepth;
    unsigned char eType;
};

/* Recovered engine-object layout, shared with StdGame.c. */
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
struct GMT_tdstGameMaterial_;
struct tdstBrain_ {
    AI_tdstMind_* p_stMind;
    GMT_tdstGameMaterial_* hLastCollidedGoThroughMaterial;
    unsigned char bWarnMechanicsFlag;
    unsigned char bActiveDuringTransition;
};
struct AI_tdstAIModel_;
struct tdstIntelligence_;
typedef enum tdeObjectTreeInit_ {
    OTI_WhenGameStart = 0, OTI_MapLoaded = 1, OTI_ReinitTheMap = 2,
    OTI_LoadSavedGame = 3, OTI_PlayerDead = 4, OTI_WhenGoOutOfZone = 4,
    OTI_Always = 4, OTI_AlwaysCreated = 5
} tdeObjectTreeInit_;
struct tdstDsgVarInfo_ {
    unsigned int ulOffsetInDsgMem;
    tdeDsgVarTypeId_ eDsgVarTypeId;
    unsigned short eSaveType;
    tdeObjectTreeInit_ eInitType;
};
struct tdstDsgVar_ {
    int p_cDsgMemDefaultInit;
    tdstDsgVarInfo_* p_stDsgVarInfo;
    unsigned int ulSize;
    unsigned char ucNbDsgVar;
};
struct tdstScriptAI_;
struct tdstTreeInterpret_;
struct tdstMacro_ {
    tdstTreeInterpret_* p_stInitTree;
    tdstTreeInterpret_* p_stCurrentTree;
};
struct tdstListOfMacro_ {
    tdstMacro_* p_stMacro;
    unsigned char ucNbMacro;
};
struct AI_tdstAIModel_ {
    tdstScriptAI_* p_stScriptAIIntell;
    tdstScriptAI_* p_stScriptAIReflex;
    tdstDsgVar_* p_stDsgVar;
    tdstListOfMacro_* p_stListOfMacro;
    unsigned char ucSecondPassDone;
};
struct tdstDsgMem_ {
    tdstDsgVar_** p_p_stDsgVar;
    int p_cDsgMemBufferInit;
    int p_cDsgMemBuffer;
};
struct AI_tdstMind_ {
    AI_tdstAIModel_* p_stAIModel;
    tdstIntelligence_* p_stIntelligence;
    tdstIntelligence_* p_stReflex;
    tdstDsgMem_* p_stDsgMem;
    unsigned char bDoingIntel;
};
struct tdstArray_ {
    tdeDsgVarTypeId_ eType;
    unsigned char ucMaxSize;
    tduGetSetParamForNode_ d_ArrayElement[255];
};
struct tdstCineinfo_;
struct tdstCollSet_;
struct tdstMSWay_;
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


/* Recovered animation layouts from 3dData.c. */
struct tdstState_;
struct tdstObjectsTablesList_;
struct tdstFamilyList_;
struct tdstCouple_;
struct tdstAChannel_;
struct tdstPLA_DeformationLink_;
struct tdstElement3d_;
struct MTH3D_tdstMatrix_;
struct tdstAnim3d_;
struct tdstSubAnimInUse_;
struct LST2_tdstAnchorToCHN_tdxHandleToMorphElementDyn;
struct GLI_tdstTexture_;
struct CINE_tdstCineActor_;
struct tdstPLA_Hierarchy_ {
    unsigned int ulNbOfCouples; /* +0x0 */
    tdstCouple_* d_stCouples; /* +0x4 */
};

struct tdstPLA_Deformation_ {
    unsigned int ulNbOfDeformationLinks; /* +0x0 */
    tdstPLA_DeformationLink_* d_stDeformationLinks; /* +0x4 */
};

struct tdstFrame3d_ {
    tdstElement3d_* p_stArrayOfElts3d; /* +0x0 */
    MTH3D_tdstMatrix_* p_stAngularSpeedMatrix; /* +0x4 */
    MTH3D_tdstVector_* p_stLinearSpeedVector; /* +0x8 */
    tdstPLA_Hierarchy_ stHierarchy; /* +0xc */
    tdstPLA_Deformation_ stDeformation; /* +0x14 */
    tdstAnim3d_* p_stAnim; /* +0x1c */
    unsigned short uwFrameNumber; /* +0x20 */
    unsigned char ucMatrixUpdated; /* +0x22 */
    unsigned char ucCacheEntry; /* +0x23 */
};
struct LST2_tdstAnchorTotdxHandleToSubAnimInUseDyn {
    tdstSubAnimInUse_* hFirstElementDyn; /* +0x0 */
    tdstSubAnimInUse_* hLastElementDyn; /* +0x4 */
    int lNumberOfElementsDyn; /* +0x8 */
};

struct tdst3dData_ {
    tdstState_* h_InitialState; /* +0x0 */
    tdstState_* h_CurrentState; /* +0x4 */
    tdstState_* h_FirstStateOfAction; /* +0x8 */
    tdstObjectsTablesList_* h_InitialObjectsTable; /* +0xc */
    tdstObjectsTablesList_* h_CurrentObjectsTable; /* +0x10 */
    tdstFamilyList_* h_Family; /* +0x14 */
    unsigned char _extractor_padding_00[8]; /* implicitly added by extractor; +0x18..0x1f */
    MAT_tdstTransformation_ stGLIObjectMatrix; /* +0x20 */
    MAT_tdstTransformation_* p_stGLIObjectAbsoluteMatrix; /* +0x80 */
    float xCurrentFrame; /* +0x84 */
    unsigned char ucRepeatAnimation; /* +0x88 */
    unsigned char ucNextEvent; /* +0x89 */
    int d_ucEventActivation; /* +0x8c */
    tdstCouple_* p_stCurrentHieCouples; /* +0x90 */
    unsigned short wCurrentHieNbCouples; /* +0x94 */
    unsigned short wSizeOfArrayOfElts3d; /* +0x96 */
    tdstState_* h_StateInLastFrame; /* +0x98 */
    tdstState_* h_WantedState; /* +0x9c */
    float xForcedFrame; /* +0xa0 */
    unsigned char ucFlagEndState; /* +0xa4 */
    unsigned char ucFlagEndOfAnim; /* +0xa5 */
    tdstAChannel_* hArrayOfChannels; /* +0xa8 */
    unsigned int ulNumberOfChannels; /* +0xac */
    tdstAChannel_* hFirstActiveChannel; /* +0xb0 */
    tdstFrame3d_ stFrame3d; /* +0xb4 */
    LST2_tdstAnchorToCHN_tdxHandleToMorphElementDyn* hMorphChannelList; /* +0xd8 */
    unsigned int ulStartTime; /* +0xdc */
    unsigned int ulTimeDelay; /* +0xe0 */
    unsigned int ulTimePreviousFrame; /* +0xe4 */
    float xLastFrame; /* +0xe8 */
    unsigned char bStateJustModified; /* +0xec */
    unsigned char bSkipCurrentFrame; /* +0xed */
    GLI_tdstMaterial_* p_stShadowVisualMaterial; /* +0xf0 */
    GLI_tdstTexture_* p_stShadowTexture; /* +0xf4 */
    float xShadowScaleX; /* +0xf8 */
    float xShadowScaleY; /* +0xfc */
    short xShadowQuality; /* +0x100 */
    unsigned short uwNbEngineFrameSinceLastMechEvent; /* +0x102 */
    unsigned char ucFrameRate; /* +0x104 */
    unsigned char ucFlagModifState; /* +0x105 */
    int lDrawMaskInit; /* +0x108 */
    int lDrawMask; /* +0x10c */
    int lLastComputeFrame; /* +0x110 */
    unsigned char _extractor_padding_01[12]; /* implicitly added by extractor; +0x114..0x11f */
    MAT_tdstTransformation_ stLastEventGlobalPosition; /* +0x120 */
    unsigned char bAnimMatrixChanged; /* +0x180 */
    unsigned char ucUserEventFlags; /* +0x181 */
    unsigned char ucBrainComputationFrequency; /* +0x182 */
    char cBrainCounter; /* +0x183 */
    unsigned short uwBrainMainCounter; /* +0x184 */
    unsigned char ucTransparency; /* +0x186 */
    unsigned char bDiscreetSpeed; /* +0x187 */
    MTH3D_tdstVector_ stLightDirForDynamicShadow; /* +0x188 */
    unsigned char ucIsShadowClosed; /* +0x194 */
    unsigned char ucShadowRecLevel; /* +0x195 */
    unsigned char ucLightComputationFrequency; /* +0x196 */
    char cLightCounter; /* +0x197 */
    MTH3D_tdstVector_ stSHWDeformationVector; /* +0x198 */
    float xSHWHeight; /* +0x1a4 */
    float xDistNoInterpol; /* +0x1a8 */
    float xDistNoMorphing; /* +0x1ac */
    float xDistNoDEnv; /* +0x1b0 */
    LST2_tdstAnchorTotdxHandleToSubAnimInUseDyn hForSubAnimInUseArray; /* +0x1b4 */
    CINE_tdstCineActor_* h_CurrentCineActor; /* +0x1c0 */
    int hSkinMaterial[4]; /* +0x1c4 */
    unsigned int NbSkinMaterials; /* +0x1d4 */
    short xSkinIndex[4]; /* +0x1d8 */
};


extern "C" tdstNodeInterpret_* fn_p_stEvalTree(HIE_tdstSuperObject_* p_SuperObjPerso,
                                                 tdstNodeInterpret_* p_stTree,
                                                 tdstGetSetParam_* p_stValue);
extern "C" char TEXT_gc_ViewportFixed;
extern "C" void GLI_vSetSinEffetBase(float);
extern "C" void WPG_fn_vReinitGraph(WP_tdstGraph_*);
extern "C" HIE_tdstSuperObject_* fn_h_StandardGameGetSuperObject(tdstStandardGame_*);
extern "C" void fn_vSetCharacterMaskedForResearch(HIE_tdstSuperObject_*);
extern "C" void GLI_vSaveSinusContext(void);
extern "C" void GLI_vRestoreSinusContext(void);
extern "C" void WP_fnv_WayPoint_SetRadius(WP_tdstWayPoint_*, float);
extern "C" void fn_vOnAIErm_M_UpdateLastError(int, char*);
extern "C" void fn_vSetDistanceWaypointMin(float);
extern "C" void fn_vSetDistanceWaypointMax(float);
extern "C" void fn_vSetDistanceActMin(float);
extern "C" void fn_vSetDistanceActMax(float);
extern "C" float TEXT_gaf_FloatParameters[10];
extern "C" int TEXT_gai_IntParameters[10];
extern "C" void fn_vSetCinemascopeRatio(unsigned int);
extern "C" void fn_vToggleCinemascope(int);
extern "C" void IPT_fn_vActiveJoystickControl(void);
extern "C" void IPT_fn_vDesactiveJoystickAndPadControl(void);
extern "C" void fn_v_TranslateSOL_FromWhere(tdstSuperObjectLinks_*, MTH3D_tdstVector_*, tdeProcedureId_);
extern "C" tdstSuperObjectLinks_* SOL_SearchSOLFromSPO(HIE_tdstSuperObject_*);
extern "C" void MAT_fn_vSetRotationVectors(MAT_tdstTransformation_*, MTH3D_tdstVector_*, MTH3D_tdstVector_*, MTH3D_tdstVector_*);
extern "C" void HIE_fn_vComputeNewRelativeMatrix(HIE_tdstSuperObject_*);
extern "C" int HIE_gs_lCurrentFrame;
extern "C" void fn_vMSLightSetOnOff(tdstMSLight_*, unsigned char);
extern "C" unsigned char fn_ucGetProcedureUltraOperator(tdeProcedureId_);
extern "C" void fn_vGetUltraOperatorPerso(int, HIE_tdstSuperObject_*, HIE_tdstSuperObject_**);
extern "C" void ANI_fn_vFreeze(HIE_tdstSuperObject_*);
extern "C" void ANI_fn_vUnFreeze(HIE_tdstSuperObject_*);
extern "C" void PLA_fn_vSetCurrFrame(HIE_tdstSuperObject_*, short);
extern "C" void DEMO_fn_vAskToLoadDemo(char*);
extern "C" void DEMO_fn_vPrepareForRead(int);
extern "C" void DEMO_fn_vSetMapToLoadWhenDemoFinished(char*);
extern "C" void DEMO_fn_vSetTestInputDuringDemo(int);
/* The caller supplies 1 in a1 at +0x90; debug recovery omitted the unused flag. */
extern "C" void GAM_fn_vAskToChangeLevel(char*, int);
extern "C" void GAM_fn_vGetRandomMapAndDemoName(char**, char**);
extern "C" char* fn_p_szGetLevelName(void);
extern "C" char* fn_szGetStringFromTextOrStringParam(tdstGetSetParam_*);
extern "C" int fni_CompareFloatLess(void*, void*);
extern "C" int fni_CompareFloatGreater(void*, void*);
extern "C" int fni_CompareIntegerLess(void*, void*);
extern "C" int fni_CompareIntegerGreater(void*, void*);
extern "C" void qsort(void*, size_t, size_t, int (*)(void*, void*));
extern "C" void HIE_fn_SO_vSetOutLineMode(HIE_tdstSuperObject_*, int, unsigned int);
extern "C" void fn_vSetCapabilities(tdstEngineObject_*, unsigned int);
extern "C" void fn_vAddCapabilities(tdstEngineObject_*, unsigned int);
extern "C" void fn_vSubCapabilities(tdstEngineObject_*, unsigned int);
extern "C" void fn_vChangeCapabilities(tdstEngineObject_*, unsigned int, int);
extern "C" tdstNodeInterpret_* fn_p_stOperatorGetPerso(HIE_tdstSuperObject_*, tdstNodeInterpret_*, HIE_tdstSuperObject_**);
extern "C" unsigned char fn_ucGetDsgVarComport(void*, void*, tdstGetSetParam_*);
extern "C" tdstNodeInterpret_* fn_p_stEvalSubRoutine(HIE_tdstSuperObject_*, tdstNodeInterpret_*, tdstGetSetParam_*, tdstMacro_*);

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\ProcRay2.cxx lines 4225–4241 */
/* addr: 0x0022a130  size: 96 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 4225
 *   +0x0010 -> line 4226
 *   +0x0014 -> line 4230
 *   +0x0020 -> line 4232
 *   +0x0034 -> line 4235
 *   +0x003c -> line 4237
 *   +0x0048 -> line 4240
 *   +0x004c -> line 4241
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
tdstNodeInterpret_* fn_p_stSetCinemascopeRatio(HIE_tdstSuperObject_* p_SuperObjPerso, tdstNodeInterpret_* p_stTree)
{
    tdstGetSetParam_ stParam;
    tdeProcedureId_ eProcedureId;
    eProcedureId = (p_stTree - 1)->uDummy.uId.eProcedureId;
    p_stTree = fn_p_stEvalTree(p_SuperObjPerso, p_stTree, &stParam);
    switch (eProcedureId) {
    case 0x237:
        fn_vSetCinemascopeRatio(stParam.uParam.lValue);
    default:
        fn_vOnAIErm_M_UpdateLastError(39, 0);
    }
    return p_stTree;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\ProcRay2.cxx lines 4187–4214 */
/* addr: 0x0022a190  size: 108 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 4187
 *   +0x0004 -> line 4190
 *   +0x0008 -> line 4187
 *   +0x0010 -> line 4188
 *   +0x0014 -> line 4190
 *   +0x0030 -> line 4194
 *   +0x0038 -> line 4198
 *   +0x0040 -> line 4202
 *   +0x0048 -> line 4206
 *   +0x0050 -> line 4210
 *   +0x0058 -> line 4213
 *   +0x005c -> line 4214
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
/* The tree is passed in a1; debug recovery omitted the unused a0 character. */
tdstNodeInterpret_* fn_p_stToggleCinemascope(HIE_tdstSuperObject_* p_SuperObjPerso, tdstNodeInterpret_* p_stTree)
{
    tdeProcedureId_ eProcedureId;
    eProcedureId = (p_stTree - 1)->uDummy.uId.eProcedureId;
    switch (eProcedureId) {
    case 0x235:
        fn_vToggleCinemascope(1);
        break;
    case 0x236:
        fn_vToggleCinemascope(0);
        break;
    default:
        fn_vOnAIErm_M_UpdateLastError(39, 0);
        break;
    }
    return p_stTree;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\ProcRay2.cxx lines 4123–4176 */
/* addr: 0x0022a200  size: 336 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 4123
 *   +0x0020 -> line 4124
 *   +0x0024 -> line 4132
 *   +0x003c -> line 4136
 *   +0x005c -> line 4141
 *   +0x006c -> line 4142
 *   +0x0074 -> line 4143
 *   +0x007c -> line 4150
 *   +0x008c -> line 4153
 *   +0x0090 -> line 4152
 *   +0x0098 -> line 4154
 *   +0x009c -> line 4156
 *   +0x00a8 -> line 4152
 *   +0x00ac -> line 4153
 *   +0x00b8 -> line 4154
 *   +0x00c0 -> line 4156
 *   +0x00c8 -> line 4158
 *   +0x00d0 -> line 4162
 *   +0x00dc -> line 4158
 *   +0x00e0 -> line 4159
 *   +0x00ec -> line 4160
 *   +0x00f4 -> line 4162
 *   +0x0100 -> line 4164
 *   +0x010c -> line 4165
 *   +0x0118 -> line 4166
 *   +0x0120 -> line 4168
 *   +0x0128 -> line 4172
 *   +0x0130 -> line 4175
 *   +0x0134 -> line 4176
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
tdstNodeInterpret_* fn_p_stCode4InternalLights(HIE_tdstSuperObject_* p_SuperObjPerso, tdstNodeInterpret_* p_stTree)
{
    tdeProcedureId_ eProcedureId;
    tdstGetSetParam_ stParam;
    HIE_tdstSuperObject_* hSuperObj;
    eProcedureId = (p_stTree - 1)->uDummy.uId.eProcedureId;
    fn_vGetUltraOperatorPerso(fn_ucGetProcedureUltraOperator(eProcedureId), p_SuperObjPerso, &hSuperObj);
    switch (eProcedureId) {
    case 0x233:
        p_stTree = fn_p_stEvalTree(p_SuperObjPerso, p_stTree, &stParam);
        hSuperObj->lIL_Status = (unsigned char)stParam.uParam.ulValue;
        break;
    case 0x234:
        p_stTree = fn_p_stEvalTree(p_SuperObjPerso, p_stTree, &stParam);
        hSuperObj->stIL_AmbientColor.xX = stParam.uParam.stVectorValue.xX;
        hSuperObj->stIL_AmbientColor.xY = stParam.uParam.stVectorValue.xY;
        hSuperObj->stIL_AmbientColor.xZ = stParam.uParam.stVectorValue.xZ;
        p_stTree = fn_p_stEvalTree(p_SuperObjPerso, p_stTree, &stParam);
        hSuperObj->stIL_ParallelDirection.xX = stParam.uParam.stVectorValue.xX;
        hSuperObj->stIL_ParallelDirection.xY = stParam.uParam.stVectorValue.xY;
        hSuperObj->stIL_ParallelDirection.xZ = stParam.uParam.stVectorValue.xZ;
        p_stTree = fn_p_stEvalTree(p_SuperObjPerso, p_stTree, &stParam);
        hSuperObj->stIL_ParallelColor.xX = stParam.uParam.stVectorValue.xX;
        hSuperObj->stIL_ParallelColor.xY = stParam.uParam.stVectorValue.xY;
        hSuperObj->stIL_ParallelColor.xZ = stParam.uParam.stVectorValue.xZ;
        break;
    default:
        fn_vOnAIErm_M_UpdateLastError(39, 0);
        break;
    }
    return p_stTree;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\ProcRay2.cxx lines 4045–4111 */
/* addr: 0x0022a350  size: 308 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 4045
 *   +0x0004 -> line 4047
 *   +0x0008 -> line 4045
 *   +0x0020 -> line 4047
 *   +0x0034 -> line 4054
 *   +0x0058 -> line 4056
 *   +0x005c -> line 4054
 *   +0x0064 -> line 4055
 *   +0x0068 -> line 4054
 *   +0x0070 -> line 4055
 *   +0x008c -> line 4056
 *   +0x0094 -> line 4064
 *   +0x00a0 -> line 4065
 *   +0x00a4 -> line 4064
 *   +0x00a8 -> line 4065
 *   +0x00b0 -> line 4068
 *   +0x00b4 -> line 4069
 *   +0x00b8 -> line 4066
 *   +0x00bc -> line 4068
 *   +0x00c0 -> line 4069
 *   +0x00cc -> line 4071
 *   +0x00dc -> line 4074
 *   +0x00f8 -> line 4076
 *   +0x0110 -> line 4085
 *   +0x0118 -> line 4111
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
#define DSG_VAR_INFO_FIELD(mind, id, field, type) \
    (*(type*)((char*)&(*(mind)->p_stDsgMem->p_p_stDsgVar)->p_stDsgVarInfo->field + (id) * (int)sizeof(tdstDsgVarInfo_)))
tdstNodeInterpret_* fn_p_stCallSubRoutine(HIE_tdstSuperObject_* p_SuperObjPerso, tdstNodeInterpret_* p_stTree)
{
    AI_tdstMind_* p_stMind;
    unsigned char ucVarId1;
    tdeDsgVarTypeId_ eDsgVarType;
    HIE_tdstSuperObject_* p_stResultOwnerPerso;
    void* pMyVarAddr;
    tdstGetSetParam_ stGetSetParam;
    void* p_stComportOrSubRoutine;
    tdstListOfMacro_* param0;
    unsigned char i;
    if (p_stTree->eType != 11)
        return p_stTree + 1;
    if (p_stTree->eType == 2)
        p_stTree = fn_p_stOperatorGetPerso(p_SuperObjPerso, p_stTree + 1, &p_stResultOwnerPerso);
    else
        p_stResultOwnerPerso = p_SuperObjPerso;
    p_stMind = p_stResultOwnerPerso->hLinkedObject.p_stCharacter->h_Brain->p_stMind;
    ucVarId1 = p_stTree->uDummy.uParam.ucValue;
    eDsgVarType = DSG_VAR_INFO_FIELD(p_stMind, ucVarId1, eDsgVarTypeId, tdeDsgVarTypeId_);
    if (eDsgVarType == 10) {
        pMyVarAddr = (char*)p_stMind->p_stDsgMem->p_cDsgMemBuffer + DSG_VAR_INFO_FIELD(p_stMind, ucVarId1, ulOffsetInDsgMem, unsigned int);
        fn_ucGetDsgVarComport(pMyVarAddr, (void*)ucVarId1, &stGetSetParam);
        p_stComportOrSubRoutine = *(void**)pMyVarAddr;
        param0 = p_stMind->p_stAIModel->p_stListOfMacro;
        i = 0;
        while (i < param0->ucNbMacro) {
            if (&param0->p_stMacro[i] == p_stComportOrSubRoutine)
                return fn_p_stEvalSubRoutine(p_SuperObjPerso, p_stTree, &stGetSetParam, (tdstMacro_*)p_stComportOrSubRoutine);
            ++i;
        }
        return p_stTree + 2;
    }
    return p_stTree + 2;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\ProcRay2.cxx lines 4011–4040 */
/* addr: 0x0022a490  size: 160 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 4011
 *   +0x001c -> line 4012
 *   +0x0024 -> line 4020
 *   +0x003c -> line 4022
 *   +0x0040 -> line 4024
 *   +0x0044 -> line 4022
 *   +0x0048 -> line 4024
 *   +0x0058 -> line 4030
 *   +0x006c -> line 4032
 *   +0x0070 -> line 4033
 *   +0x0078 -> line 4036
 *   +0x0080 -> line 4039
 *   +0x0084 -> line 4040
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
tdstNodeInterpret_* fn_p_stSetDiscreetSpeed(HIE_tdstSuperObject_* p_SuperObjPerso, tdstNodeInterpret_* p_stTree)
{
    tdeProcedureId_ eProcedureId;
    tdstGetSetParam_ stParam;
    HIE_tdstSuperObject_* hSuperObj;
    tdst3dData_* h_3dData;
    eProcedureId = (p_stTree - 1)->uDummy.uId.eProcedureId;
    fn_vGetUltraOperatorPerso(fn_ucGetProcedureUltraOperator(eProcedureId), p_SuperObjPerso, &hSuperObj);
    h_3dData = hSuperObj->hLinkedObject.p_stCharacter->h_3dData;
    switch (eProcedureId) {
    case 0x1ca:
        p_stTree = fn_p_stEvalTree(p_SuperObjPerso, p_stTree, &stParam);
        h_3dData->bDiscreetSpeed = (unsigned char)stParam.uParam.ulValue;
        break;
    default:
        fn_vOnAIErm_M_UpdateLastError(39, 0);
        break;
    }
    return p_stTree;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\ProcRay2.cxx lines 3980–3999 */
/* addr: 0x0022a530  size: 80 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 3980
 *   +0x0004 -> line 3984
 *   +0x0008 -> line 3980
 *   +0x0010 -> line 3981
 *   +0x0014 -> line 3984
 *   +0x0024 -> line 3989
 *   +0x002c -> line 3992
 *   +0x0034 -> line 3995
 *   +0x003c -> line 3996
 *   +0x0040 -> line 3999
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
tdstNodeInterpret_* fn_p_stPS2SetLanguageProc(HIE_tdstSuperObject_* p_SuperObjPerso, tdstNodeInterpret_* p_stTree)
{
    tdstGetSetParam_ stParam;
    tdeProcedureId_ eProcedureId;
    eProcedureId = (p_stTree - 1)->uDummy.uId.eProcedureId;
    switch (eProcedureId) {
    case 0x230:
        p_stTree = fn_p_stEvalTree(p_SuperObjPerso, p_stTree, &stParam);
        break;
    default:
        fn_vOnAIErm_M_UpdateLastError(39, 0);
        return p_stTree;
    }
    return p_stTree;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\ProcRay2.cxx lines 3929–3977 */
/* addr: 0x0022a580  size: 312 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 3929
 *   +0x0020 -> line 3930
 *   +0x0024 -> line 3935
 *   +0x003c -> line 3937
 *   +0x0040 -> line 3939
 *   +0x0044 -> line 3937
 *   +0x0048 -> line 3939
 *   +0x0070 -> line 3944
 *   +0x0080 -> line 3945
 *   +0x0084 -> line 3946
 *   +0x008c -> line 3947
 *   +0x0094 -> line 3949
 *   +0x0098 -> line 3950
 *   +0x00a0 -> line 3955
 *   +0x00b0 -> line 3957
 *   +0x00b4 -> line 3958
 *   +0x00bc -> line 3963
 *   +0x00d0 -> line 3965
 *   +0x00dc -> line 3966
 *   +0x00f0 -> line 3968
 *   +0x0100 -> line 3969
 *   +0x0108 -> line 3972
 *   +0x0110 -> line 3973
 *   +0x0118 -> line 3976
 *   +0x011c -> line 3977
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
tdstNodeInterpret_* fn_p_stSHWSetDynShadow(HIE_tdstSuperObject_* p_SuperObjPerso, tdstNodeInterpret_* p_stTree)
{
    tdeProcedureId_ eProcedureId;
    tdstGetSetParam_ stParam;
    HIE_tdstSuperObject_* hSuperObj;
    tdst3dData_* h_3dData;
    unsigned char ucLevel;
    eProcedureId = (p_stTree - 1)->uDummy.uId.eProcedureId;
    fn_vGetUltraOperatorPerso(fn_ucGetProcedureUltraOperator(eProcedureId), p_SuperObjPerso, &hSuperObj);
    h_3dData = hSuperObj->hLinkedObject.p_stCharacter->h_3dData;
    switch (eProcedureId) {
    case 0x22d:
        p_stTree = fn_p_stEvalTree(p_SuperObjPerso, p_stTree, &stParam);
        ucLevel = (unsigned char)stParam.uParam.ulValue;
        if (ucLevel > 0)
            h_3dData->ucShadowRecLevel = ucLevel;
        else
            h_3dData->ucShadowRecLevel = 1;
        break;
    case 0x22e:
        p_stTree = fn_p_stEvalTree(p_SuperObjPerso, p_stTree, &stParam);
        h_3dData->ucIsShadowClosed = (unsigned char)stParam.uParam.ulValue;
        break;
    case 0x22f:
        p_stTree = fn_p_stEvalTree(p_SuperObjPerso, p_stTree, &stParam);
        if ((unsigned char)stParam.uParam.ulValue)
            hSuperObj->lDrawModeMask |= 0x200;
        else
            hSuperObj->lDrawModeMask &= ~0x200;
        break;
    default:
        fn_vOnAIErm_M_UpdateLastError(39, 0);
        return p_stTree;
    }
    return p_stTree;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\ProcRay2.cxx lines 3873–3921 */
/* addr: 0x0022a6c0  size: 288 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 3873
 *   +0x0004 -> line 3886
 *   +0x0008 -> line 3873
 *   +0x0020 -> line 3874
 *   +0x0024 -> line 3886
 *   +0x0040 -> line 3890
 *   +0x0058 -> line 3891
 *   +0x0060 -> line 3896
 *   +0x0070 -> line 3897
 *   +0x0074 -> line 3898
 *   +0x007c -> line 3901
 *   +0x0084 -> line 3902
 *   +0x008c -> line 3905
 *   +0x009c -> line 3906
 *   +0x00a0 -> line 3905
 *   +0x00a4 -> line 3908
 *   +0x00b4 -> line 3909
 *   +0x00b8 -> line 3910
 *   +0x00c8 -> line 3911
 *   +0x00cc -> line 3912
 *   +0x00e0 -> line 3917
 *   +0x0100 -> line 3920
 *   +0x0104 -> line 3921
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
tdstNodeInterpret_* fn_p_stSetOutlineMode(HIE_tdstSuperObject_* p_SuperObjPerso, tdstNodeInterpret_* p_stTree)
{
    tdeProcedureId_ eProcedureId;
    tdstGetSetParam_ stParam;
    HIE_tdstSuperObject_* hSuperObj;
    unsigned int ulRed;
    unsigned int ulGreen;
    unsigned char bMode;
    eProcedureId = (p_stTree - 1)->uDummy.uId.eProcedureId;
    switch (eProcedureId) {
    case 0x1d1:
        fn_vGetUltraOperatorPerso(fn_ucGetProcedureUltraOperator(eProcedureId), p_SuperObjPerso, &hSuperObj);
        break;
    case 0x1d2:
        p_stTree = fn_p_stEvalTree(p_SuperObjPerso, p_stTree, &stParam);
        hSuperObj = (HIE_tdstSuperObject_*)stParam.uParam.pValue;
        break;
    default:
        fn_vOnAIErm_M_UpdateLastError(39, 0);
        return p_stTree;
    }
    p_stTree = fn_p_stEvalTree(p_SuperObjPerso, p_stTree, &stParam);
    bMode = (unsigned char)stParam.uParam.ulValue;
    p_stTree = fn_p_stEvalTree(p_SuperObjPerso, p_stTree, &stParam);
    ulRed = stParam.uParam.ulValue;
    p_stTree = fn_p_stEvalTree(p_SuperObjPerso, p_stTree, &stParam);
    ulGreen = stParam.uParam.ulValue;
    p_stTree = fn_p_stEvalTree(p_SuperObjPerso, p_stTree, &stParam);
    HIE_fn_SO_vSetOutLineMode(hSuperObj, bMode, stParam.uParam.ulValue | ((ulRed << 16) | (ulGreen << 8)));
    return p_stTree;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\ProcRay2.cxx lines 3852–3863 */
/* addr: 0x0022a7e0  size: 64 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 3852
 *   +0x0008 -> line 3856
 *   +0x0018 -> line 3857
 *   +0x0024 -> line 3859
 *   +0x002c -> line 3862
 *   +0x0030 -> line 3863
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
tdstNodeInterpret_* fn_p_stSetCharacterMaskedForResearch(HIE_tdstSuperObject_* p_SuperObjPerso, tdstNodeInterpret_* p_stTree)
{
    HIE_tdstSuperObject_* hCharacter;
    tdstGetSetParam_ stParam;
    p_stTree = fn_p_stEvalTree(p_SuperObjPerso, p_stTree, &stParam);
    hCharacter = fn_h_StandardGameGetSuperObject(((tdstEngineObject_*)stParam.uParam.pValue)->h_StandardGame);
    fn_vSetCharacterMaskedForResearch(hCharacter);
    return p_stTree;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\ProcRay2.cxx lines 3741–3839 */
/* addr: 0x0022a820  size: 748 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 3741
 *   +0x0008 -> line 3751
 *   +0x000c -> line 3741
 *   +0x0018 -> line 3742
 *   +0x001c -> line 3751
 *   +0x0028 -> line 3754
 *   +0x0054 -> line 3761
 *   +0x0068 -> line 3762
 *   +0x0074 -> line 3763
 *   +0x0078 -> line 3765
 *   +0x007c -> line 3763
 *   +0x0080 -> line 3765
 *   +0x0084 -> line 3763
 *   +0x00b4 -> line 3765
 *   +0x00c0 -> line 3767
 *   +0x00c8 -> line 3772
 *   +0x00d8 -> line 3773
 *   +0x00dc -> line 3772
 *   +0x00e0 -> line 3774
 *   +0x00e4 -> line 3775
 *   +0x00e8 -> line 3774
 *   +0x00fc -> line 3775
 *   +0x0104 -> line 3776
 *   +0x0124 -> line 3777
 *   +0x0138 -> line 3776
 *   +0x014c -> line 3777
 *   +0x0154 -> line 3779
 *   +0x015c -> line 3783
 *   +0x016c -> line 3786
 *   +0x0170 -> line 3783
 *   +0x0174 -> line 3786
 *   +0x0178 -> line 3787
 *   +0x0184 -> line 3786
 *   +0x01b4 -> line 3787
 *   +0x01bc -> line 3789
 *   +0x01c4 -> line 3794
 *   +0x01d8 -> line 3795
 *   +0x01e4 -> line 3797
 *   +0x01f0 -> line 3798
 *   +0x01f8 -> line 3800
 *   +0x0218 -> line 3802
 *   +0x0220 -> line 3806
 *   +0x0228 -> line 3810
 *   +0x0238 -> line 3812
 *   +0x023c -> line 3810
 *   +0x0240 -> line 3812
 *   +0x0248 -> line 3813
 *   +0x0250 -> line 3815
 *   +0x0270 -> line 3817
 *   +0x0278 -> line 3821
 *   +0x0280 -> line 3825
 *   +0x0290 -> line 3827
 *   +0x0294 -> line 3825
 *   +0x0298 -> line 3827
 *   +0x02a0 -> line 3828
 *   +0x02a8 -> line 3830
 *   +0x02c8 -> line 3832
 *   +0x02d0 -> line 3838
 *   +0x02d4 -> line 3839
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
tdstNodeInterpret_* fn_p_stSOLEdit(HIE_tdstSuperObject_* p_SuperObjPerso, tdstNodeInterpret_* p_stTree)
{
    HIE_tdstSuperObject_* hPerso;
    WP_tdstWayPoint_* hWP;
    MTH3D_tdstVector_ Vect;
    unsigned int ulRef;
    MAT_tdstTransformation_ MatrixInit;
    tdstSuperObjectLinks_* hSOL;
    tdstGetSetParam_ stParam;
    tdeProcedureId_ eProcId;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\ProcRay2.cxx lines 3586–3736 */
/* addr: 0x0022ab10  size: 676 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 3586
 *   +0x0020 -> line 3587
 *   +0x0024 -> line 3595
 *   +0x003c -> line 3598
 *   +0x0050 -> line 3601
 *   +0x007c -> line 3609
 *   +0x0090 -> line 3612
 *   +0x0094 -> line 3610
 *   +0x0098 -> line 3612
 *   +0x009c -> line 3610
 *   +0x00a0 -> line 3612
 *   +0x00ac -> line 3615
 *   +0x00b8 -> line 3612
 *   +0x00bc -> line 3615
 *   +0x00cc -> line 3619
 *   +0x00d4 -> line 3630
 *   +0x00e4 -> line 3631
 *   +0x00ec -> line 3633
 *   +0x0100 -> line 3634
 *   +0x0104 -> line 3636
 *   +0x0114 -> line 3639
 *   +0x0120 -> line 3636
 *   +0x0124 -> line 3639
 *   +0x0134 -> line 3643
 *   +0x013c -> line 3654
 *   +0x014c -> line 3655
 *   +0x0154 -> line 3657
 *   +0x0168 -> line 3658
 *   +0x016c -> line 3660
 *   +0x017c -> line 3663
 *   +0x0184 -> line 3660
 *   +0x0188 -> line 3663
 *   +0x019c -> line 3667
 *   +0x01a4 -> line 3678
 *   +0x01b4 -> line 3679
 *   +0x01bc -> line 3681
 *   +0x01d0 -> line 3682
 *   +0x01d4 -> line 3684
 *   +0x01e4 -> line 3687
 *   +0x01ec -> line 3684
 *   +0x01f0 -> line 3687
 *   +0x0204 -> line 3691
 *   +0x020c -> line 3697
 *   +0x0218 -> line 3701
 *   +0x0220 -> line 3706
 *   +0x022c -> line 3710
 *   +0x0234 -> line 3720
 *   +0x0244 -> line 3724
 *   +0x024c -> line 3721
 *   +0x0250 -> line 3724
 *   +0x0258 -> line 3727
 *   +0x025c -> line 3724
 *   +0x0260 -> line 3727
 *   +0x0270 -> line 3729
 *   +0x0278 -> line 3732
 *   +0x0284 -> line 3735
 *   +0x0288 -> line 3736
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
tdstNodeInterpret_* fn_p_stSubAnimProc(HIE_tdstSuperObject_* p_SuperObjPerso, tdstNodeInterpret_* p_stTree)
{
    unsigned int ulBitNumber;
    unsigned int ulLoopNb;
    unsigned int ulSubAnimNumber;
    HIE_tdstSuperObject_* hNewSuperObjPerso;
    tdstGetSetParam_ stParam;
    tdeProcedureId_ eProcedureId;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\ProcRay2.cxx lines 3548–3568 */
/* addr: 0x0022adc0  size: 116 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 3548
 *   +0x0008 -> line 3556
 *   +0x000c -> line 3548
 *   +0x0018 -> line 3550
 *   +0x001c -> line 3556
 *   +0x0024 -> line 3559
 *   +0x0028 -> line 3556
 *   +0x002c -> line 3557
 *   +0x0030 -> line 3559
 *   +0x003c -> line 3562
 *   +0x0044 -> line 3563
 *   +0x004c -> line 3565
 *   +0x0058 -> line 3567
 *   +0x005c -> line 3568
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
tdstNodeInterpret_* fn_p_stSetSOLCoordinates_SOLParam(HIE_tdstSuperObject_* p_SuperObjPerso, tdstNodeInterpret_* p_stTree)
{
    tdeProcedureId_ eProcId;
    tdstGetSetParam_ stParam;
    tdstSuperObjectLinks_* hSOL;
    MTH3D_tdstVector_* p_stCoordinatesAfter;
    eProcId = (p_stTree - 1)->uDummy.uId.eProcedureId;
    p_stTree = fn_p_stEvalTree(p_SuperObjPerso, p_stTree, &stParam);
    hSOL = (tdstSuperObjectLinks_*)stParam.uParam.pValue;
    p_stTree = fn_p_stEvalTree(p_SuperObjPerso, p_stTree, &stParam);
    p_stCoordinatesAfter = &stParam.uParam.stVectorValue;
    if (!hSOL)
        return p_stTree;
    fn_v_TranslateSOL_FromWhere(hSOL, p_stCoordinatesAfter, eProcId);
    return p_stTree;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\ProcRay2.cxx lines 3513–3535 */
/* addr: 0x0022ae40  size: 128 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 3513
 *   +0x0008 -> line 3522
 *   +0x000c -> line 3513
 *   +0x0018 -> line 3514
 *   +0x001c -> line 3522
 *   +0x0024 -> line 3525
 *   +0x0028 -> line 3522
 *   +0x002c -> line 3523
 *   +0x0030 -> line 3525
 *   +0x0038 -> line 3528
 *   +0x003c -> line 3525
 *   +0x0040 -> line 3528
 *   +0x0048 -> line 3529
 *   +0x0050 -> line 3530
 *   +0x0058 -> line 3532
 *   +0x0064 -> line 3534
 *   +0x0068 -> line 3535
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
tdstNodeInterpret_* fn_p_stSetSOLCoordinates_SPOParam(HIE_tdstSuperObject_* p_SuperObjPerso, tdstNodeInterpret_* p_stTree)
{
    tdeProcedureId_ eProcId;
    tdstGetSetParam_ stParam;
    HIE_tdstSuperObject_* hSpo;
    tdstSuperObjectLinks_* hSOL;
    MTH3D_tdstVector_* p_stCoordinatesAfter;
    eProcId = (p_stTree - 1)->uDummy.uId.eProcedureId;
    p_stTree = fn_p_stEvalTree(p_SuperObjPerso, p_stTree, &stParam);
    hSpo = (HIE_tdstSuperObject_*)stParam.uParam.pValue;
    p_stTree = fn_p_stEvalTree(p_SuperObjPerso, p_stTree, &stParam);
    p_stCoordinatesAfter = &stParam.uParam.stVectorValue;
    hSOL = SOL_SearchSOLFromSPO(hSpo);
    if (!hSOL)
        return p_stTree;
    fn_v_TranslateSOL_FromWhere(hSOL, p_stCoordinatesAfter, eProcId);
    return p_stTree;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\ProcRay2.cxx lines 3461–3498 */
/* addr: 0x0022aec0  size: 420 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 3461
 *   +0x0004 -> line 3467
 *   +0x0008 -> line 3461
 *   +0x000c -> line 3467
 *   +0x0010 -> line 3465
 *   +0x002c -> line 3467
 *   +0x0050 -> line 3471
 *   +0x007c -> line 3472
 *   +0x0084 -> line 3475
 *   +0x0088 -> line 3476
 *   +0x0090 -> line 3475
 *   +0x0098 -> line 3476
 *   +0x009c -> line 3475
 *   +0x00a8 -> line 3476
 *   +0x00d4 -> line 3477
 *   +0x0100 -> line 3478
 *   +0x0108 -> line 3481
 *   +0x011c -> line 3482
 *   +0x0124 -> line 3485
 *   +0x0128 -> line 3486
 *   +0x0138 -> line 3485
 *   +0x0140 -> line 3486
 *   +0x0144 -> line 3485
 *   +0x0148 -> line 3486
 *   +0x014c -> line 3485
 *   +0x0154 -> line 3486
 *   +0x0170 -> line 3487
 *   +0x0178 -> line 3490
 *   +0x0180 -> line 3492
 *   +0x0188 -> line 3495
 *   +0x0190 -> line 3497
 *   +0x0198 -> line 3498
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void fn_v_TranslateSOL_FromWhere(tdstSuperObjectLinks_* _hSOL, MTH3D_tdstVector_* _p_stCoordinatesAfter, tdeProcedureId_ _eProcId)
{
    MTH3D_tdstVector_ stPosition;
    MTH3D_tdstVector_ stRealTranslation;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\ProcRay2.cxx lines 3247–3443 */
/* addr: 0x0022b070  size: 2000 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 3247
 *   +0x0008 -> line 3258
 *   +0x000c -> line 3247
 *   +0x0020 -> line 3255
 *   +0x0024 -> line 3258
 *   +0x002c -> line 3259
 *   +0x0030 -> line 3258
 *   +0x0034 -> line 3262
 *   +0x0040 -> line 3263
 *   +0x0044 -> line 3262
 *   +0x0048 -> line 3263
 *   +0x0054 -> line 3271
 *   +0x0058 -> line 3263
 *   +0x0060 -> line 3270
 *   +0x0064 -> line 3271
 *   +0x006c -> line 3272
 *   +0x0078 -> line 3273
 *   +0x0084 -> line 3275
 *   +0x0088 -> line 3277
 *   +0x008c -> line 3275
 *   +0x0098 -> line 3277
 *   +0x009c -> line 3275
 *   +0x00bc -> line 3277
 *   +0x00e0 -> line 3285
 *   +0x00ec -> line 3286
 *   +0x012c -> line 3289
 *   +0x0150 -> line 3290
 *   +0x0154 -> line 3292
 *   +0x0190 -> line 3294
 *   +0x01a8 -> line 3297
 *   +0x0210 -> line 3302
 *   +0x0214 -> line 3310
 *   +0x0218 -> line 3302
 *   +0x021c -> line 3311
 *   +0x022c -> line 3302
 *   +0x0230 -> line 3310
 *   +0x0234 -> line 3306
 *   +0x0238 -> line 3302
 *   +0x0240 -> line 3306
 *   +0x0244 -> line 3302
 *   +0x0248 -> line 3310
 *   +0x024c -> line 3306
 *   +0x0250 -> line 3310
 *   +0x0254 -> line 3311
 *   +0x025c -> line 3313
 *   +0x0260 -> line 3314
 *   +0x026c -> line 3315
 *   +0x0274 -> line 3327
 *   +0x02bc -> line 3330
 *   +0x02e0 -> line 3332
 *   +0x034c -> line 3337
 *   +0x0388 -> line 3344
 *   +0x03a8 -> line 3345
 *   +0x03ac -> line 3344
 *   +0x03b4 -> line 3345
 *   +0x03e0 -> line 3352
 *   +0x03f4 -> line 3354
 *   +0x03fc -> line 3357
 *   +0x040c -> line 3360
 *   +0x0450 -> line 3361
 *   +0x0458 -> line 3363
 *   +0x0490 -> line 3371
 *   +0x04d0 -> line 3374
 *   +0x04e4 -> line 3375
 *   +0x04fc -> line 3376
 *   +0x0510 -> line 3377
 *   +0x0518 -> line 3382
 *   +0x051c -> line 3381
 *   +0x0528 -> line 3383
 *   +0x0530 -> line 3382
 *   +0x0534 -> line 3381
 *   +0x053c -> line 3382
 *   +0x0540 -> line 3381
 *   +0x0544 -> line 3382
 *   +0x0548 -> line 3383
 *   +0x054c -> line 3382
 *   +0x055c -> line 3383
 *   +0x0560 -> line 3382
 *   +0x0564 -> line 3383
 *   +0x056c -> line 3385
 *   +0x05d8 -> line 3386
 *   +0x0644 -> line 3387
 *   +0x06ac -> line 3388
 *   +0x06bc -> line 3390
 *   +0x06c4 -> line 3391
 *   +0x06c8 -> line 3392
 *   +0x06d4 -> line 3400
 *   +0x06e0 -> line 3401
 *   +0x06f0 -> line 3403
 *   +0x06f8 -> line 3405
 *   +0x0704 -> line 3406
 *   +0x0710 -> line 3407
 *   +0x071c -> line 3408
 *   +0x0724 -> line 3409
 *   +0x0738 -> line 3412
 *   +0x0764 -> line 3417
 *   +0x076c -> line 3422
 *   +0x0774 -> line 3426
 *   +0x077c -> line 3430
 *   +0x0784 -> line 3433
 *   +0x0788 -> line 3437
 *   +0x0798 -> line 3438
 *   +0x079c -> line 3440
 *   +0x07b0 -> line 3443
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
tdstNodeInterpret_* fn_p_stSPOChangeSighting(HIE_tdstSuperObject_* p_SuperObjPerso, tdstNodeInterpret_* p_stTree)
{
    float xNorm;
    MTH3D_tdstVector_ stTmpVector3;
    MTH3D_tdstVector_ stTmpVector2;
    MTH3D_tdstVector_ stTmpVector1;
    tdeProcedureId_ eProcedureId;
    unsigned char ucNbArrays;
    MAT_tdstTransformation_ stMatrixBefore;
    MAT_tdstTransformation_ stRotationMatrix;
    MTH3D_tdstVector_ stV3;
    MTH3D_tdstVector_ stV2;
    MTH3D_tdstVector_ stV1;
    MTH3D_tdstVector_ stSightVector;
    HIE_tdstSuperObject_* hSpo;
    tdstGetSetParam_ stParam;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\ProcRay2.cxx lines 3211–3235 */
/* addr: 0x0022b840  size: 136 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 3211
 *   +0x0008 -> line 3216
 *   +0x000c -> line 3211
 *   +0x0010 -> line 3216
 *   +0x0018 -> line 3217
 *   +0x001c -> line 3219
 *   +0x0024 -> line 3225
 *   +0x0028 -> line 3226
 *   +0x002c -> line 3229
 *   +0x0038 -> line 3226
 *   +0x003c -> line 3227
 *   +0x0040 -> line 3228
 *   +0x0044 -> line 3226
 *   +0x004c -> line 3227
 *   +0x0054 -> line 3228
 *   +0x0058 -> line 3229
 *   +0x0060 -> line 3231
 *   +0x0064 -> line 3232
 *   +0x0070 -> line 3234
 *   +0x0074 -> line 3235
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
tdstNodeInterpret_* fn_p_stSPORotateToIdentity(HIE_tdstSuperObject_* p_SuperObjPerso, tdstNodeInterpret_* p_stTree)
{
    tdstGetSetParam_ stParam;
    HIE_tdstSuperObject_* hSpo;
    MTH3D_tdstVector_ stV1;
    MTH3D_tdstVector_ stV2;
    MTH3D_tdstVector_ stV3;
    p_stTree = fn_p_stEvalTree(p_SuperObjPerso, p_stTree, &stParam);
    hSpo = (HIE_tdstSuperObject_*)stParam.uParam.pValue;
    if (hSpo) {
        MAT_tdstTransformation_* hMatrix = hSpo->hGlobalMatrix;
        stV1.xX = 1.0f; stV1.xY = 0.0f; stV1.xZ = 0.0f;
        stV2.xX = 0.0f; stV2.xY = 1.0f; stV2.xZ = 0.0f;
        stV3.xX = 0.0f; stV3.xY = 0.0f; stV3.xZ = 1.0f;
        MAT_fn_vSetRotationVectors(hMatrix, &stV1, &stV2, &stV3);
        hSpo->lLastComputeFrame = HIE_gs_lCurrentFrame;
        HIE_fn_vComputeNewRelativeMatrix(hSpo);
    }
    return p_stTree;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\ProcRay2.cxx lines 3089–3198 */
/* addr: 0x0022b8d0  size: 584 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 3089
 *   +0x0008 -> line 3100
 *   +0x000c -> line 3089
 *   +0x0024 -> line 3090
 *   +0x0028 -> line 3100
 *   +0x0030 -> line 3101
 *   +0x0034 -> line 3100
 *   +0x0038 -> line 3104
 *   +0x0044 -> line 3106
 *   +0x0048 -> line 3104
 *   +0x004c -> line 3106
 *   +0x006c -> line 3115
 *   +0x0070 -> line 3106
 *   +0x0078 -> line 3115
 *   +0x0080 -> line 3120
 *   +0x00c0 -> line 3128
 *   +0x00d0 -> line 3129
 *   +0x00d4 -> line 3128
 *   +0x00d8 -> line 3129
 *   +0x00e4 -> line 3130
 *   +0x00e8 -> line 3129
 *   +0x00ec -> line 3130
 *   +0x00f0 -> line 3129
 *   +0x00f4 -> line 3130
 *   +0x015c -> line 3141
 *   +0x0170 -> line 3144
 *   +0x0180 -> line 3145
 *   +0x0188 -> line 3147
 *   +0x018c -> line 3148
 *   +0x0198 -> line 3150
 *   +0x01c4 -> line 3157
 *   +0x01cc -> line 3164
 *   +0x01d4 -> line 3170
 *   +0x01dc -> line 3176
 *   +0x01e4 -> line 3182
 *   +0x01ec -> line 3186
 *   +0x01f4 -> line 3187
 *   +0x01fc -> line 3191
 *   +0x020c -> line 3192
 *   +0x0210 -> line 3195
 *   +0x0224 -> line 3198
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
tdstNodeInterpret_* fn_p_stSPORotate(HIE_tdstSuperObject_* p_SuperObjPerso, tdstNodeInterpret_* p_stTree)
{
    float xNorm;
    MTH3D_tdstVector_ stAxis;
    float xRelativeAngle;
    unsigned char ucNbArrays;
    MAT_tdstTransformation_ stRotationMatrix;
    HIE_tdstSuperObject_* hSpo;
    tdstGetSetParam_ stParam;
    tdeProcedureId_ eProcId;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\ProcRay2.cxx lines 2945–3085 */
/* addr: 0x0022bb20  size: 808 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 2945
 *   +0x0010 -> line 2946
 *   +0x0014 -> line 2945
 *   +0x0028 -> line 2953
 *   +0x0030 -> line 2954
 *   +0x003c -> line 2956
 *   +0x0068 -> line 2963
 *   +0x006c -> line 2967
 *   +0x0070 -> line 2965
 *   +0x0074 -> line 2963
 *   +0x0078 -> line 2965
 *   +0x007c -> line 2963
 *   +0x0080 -> line 2964
 *   +0x0084 -> line 2963
 *   +0x0088 -> line 2964
 *   +0x0090 -> line 2965
 *   +0x0094 -> line 2967
 *   +0x009c -> line 2968
 *   +0x00b0 -> line 2969
 *   +0x00b8 -> line 2976
 *   +0x00bc -> line 2977
 *   +0x00c0 -> line 2976
 *   +0x00c4 -> line 2977
 *   +0x00c8 -> line 2980
 *   +0x00cc -> line 2976
 *   +0x00d4 -> line 2977
 *   +0x00d8 -> line 2978
 *   +0x00dc -> line 2977
 *   +0x00e0 -> line 2978
 *   +0x00e4 -> line 2980
 *   +0x00ec -> line 2981
 *   +0x0100 -> line 2982
 *   +0x0108 -> line 2990
 *   +0x010c -> line 2991
 *   +0x0110 -> line 2990
 *   +0x0114 -> line 2993
 *   +0x0118 -> line 2991
 *   +0x011c -> line 2989
 *   +0x0128 -> line 2990
 *   +0x0130 -> line 2991
 *   +0x0134 -> line 2993
 *   +0x013c -> line 2994
 *   +0x0150 -> line 2995
 *   +0x0158 -> line 3005
 *   +0x015c -> line 3016
 *   +0x0164 -> line 3007
 *   +0x0168 -> line 3016
 *   +0x0194 -> line 3020
 *   +0x01ac -> line 3023
 *   +0x01b0 -> line 3024
 *   +0x01b4 -> line 3022
 *   +0x01b8 -> line 3024
 *   +0x01bc -> line 3022
 *   +0x01c0 -> line 3023
 *   +0x01c8 -> line 3022
 *   +0x01cc -> line 3023
 *   +0x01d0 -> line 3024
 *   +0x01d4 -> line 3025
 *   +0x01dc -> line 3031
 *   +0x01e0 -> line 3029
 *   +0x01e4 -> line 3031
 *   +0x01e8 -> line 3029
 *   +0x01ec -> line 3030
 *   +0x01f4 -> line 3029
 *   +0x01f8 -> line 3030
 *   +0x01fc -> line 3031
 *   +0x0204 -> line 3034
 *   +0x020c -> line 3035
 *   +0x0220 -> line 3037
 *   +0x0228 -> line 3048
 *   +0x022c -> line 3060
 *   +0x0230 -> line 3053
 *   +0x0234 -> line 3048
 *   +0x0238 -> line 3053
 *   +0x0244 -> line 3048
 *   +0x0248 -> line 3053
 *   +0x0254 -> line 3048
 *   +0x0258 -> line 3060
 *   +0x0260 -> line 3061
 *   +0x0274 -> line 3062
 *   +0x027c -> line 3064
 *   +0x0284 -> line 3065
 *   +0x0290 -> line 3069
 *   +0x0294 -> line 3070
 *   +0x0298 -> line 3069
 *   +0x029c -> line 3071
 *   +0x02a0 -> line 3070
 *   +0x02a4 -> line 3068
 *   +0x02b0 -> line 3069
 *   +0x02b8 -> line 3070
 *   +0x02bc -> line 3071
 *   +0x02c4 -> line 3072
 *   +0x02d8 -> line 3074
 *   +0x02e0 -> line 3075
 *   +0x02f0 -> line 3076
 *   +0x0300 -> line 3077
 *   +0x0308 -> line 3085
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void fn_vComputeRotationMatrix(int iProcId, float xRelativeAngle, MTH3D_tdstVector_* pstAxis, MAT_tdstTransformation_* hRotationMatrix)
{
    MAT_tdstTransformation_ stAxisRotationMatrix;
    MAT_tdstTransformation_ stAxisToLocalMatrix;
    MAT_tdstTransformation_ stLocalToAxisMatrix;
    MTH3D_tdstVector_ stAxis3;
    MTH3D_tdstVector_ stAxis2;
    float c;
    float b;
    float a;
    MTH3D_tdstVector_ stV3;
    MTH3D_tdstVector_ stV2;
    MTH3D_tdstVector_ stV1;
    float xSin;
    float xCos;
    tdeProcedureId_ eProcId;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\ProcRay2.cxx lines 2830–2930 */
/* addr: 0x0022be50  size: 456 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 2830
 *   +0x0008 -> line 2839
 *   +0x000c -> line 2830
 *   +0x001c -> line 2831
 *   +0x0020 -> line 2839
 *   +0x0028 -> line 2840
 *   +0x002c -> line 2839
 *   +0x0030 -> line 2841
 *   +0x003c -> line 2849
 *   +0x0040 -> line 2841
 *   +0x0044 -> line 2850
 *   +0x0048 -> line 2852
 *   +0x004c -> line 2850
 *   +0x0054 -> line 2849
 *   +0x005c -> line 2850
 *   +0x0060 -> line 2849
 *   +0x0064 -> line 2850
 *   +0x0068 -> line 2849
 *   +0x0070 -> line 2850
 *   +0x0074 -> line 2849
 *   +0x0078 -> line 2850
 *   +0x0090 -> line 2852
 *   +0x00b0 -> line 2854
 *   +0x00b4 -> line 2852
 *   +0x00cc -> line 2853
 *   +0x00d0 -> line 2854
 *   +0x00d8 -> line 2857
 *   +0x00e4 -> line 2867
 *   +0x0100 -> line 2873
 *   +0x0104 -> line 2874
 *   +0x0110 -> line 2875
 *   +0x0118 -> line 2878
 *   +0x011c -> line 2883
 *   +0x0148 -> line 2889
 *   +0x0150 -> line 2895
 *   +0x0158 -> line 2900
 *   +0x0160 -> line 2905
 *   +0x0168 -> line 2910
 *   +0x0170 -> line 2913
 *   +0x0178 -> line 2914
 *   +0x0180 -> line 2919
 *   +0x0190 -> line 2920
 *   +0x0194 -> line 2924
 *   +0x01a8 -> line 2927
 *   +0x01ac -> line 2930
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
tdstNodeInterpret_* fn_p_stSetSPOCoordinates(HIE_tdstSuperObject_* p_SuperObjPerso, tdstNodeInterpret_* p_stTree)
{
    unsigned char ucNbArrays;
    MTH3D_tdstVector_ stTranslation;
    MTH3D_tdstVector_* p_stCoordinatesAfter;
    MTH3D_tdstVector_ stCoordinatesBefore;
    HIE_tdstSuperObject_* hSpo;
    tdstGetSetParam_ stParam;
    tdeProcedureId_ eProcId;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\ProcRay2.cxx lines 2678–2802 */
/* addr: 0x0022c020  size: 796 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 2678
 *   +0x003c -> line 2680
 *   +0x0048 -> line 2689
 *   +0x004c -> line 2690
 *   +0x0054 -> line 2696
 *   +0x0060 -> line 2697
 *   +0x0070 -> line 2698
 *   +0x0080 -> line 2699
 *   +0x0088 -> line 2704
 *   +0x0090 -> line 2706
 *   +0x0098 -> line 2708
 *   +0x00a4 -> line 2709
 *   +0x00ac -> line 2708
 *   +0x00b8 -> line 2709
 *   +0x00e8 -> line 2710
 *   +0x00ec -> line 2711
 *   +0x00f0 -> line 2713
 *   +0x0100 -> line 2715
 *   +0x0130 -> line 2720
 *   +0x0160 -> line 2724
 *   +0x0164 -> line 2726
 *   +0x016c -> line 2728
 *   +0x0180 -> line 2730
 *   +0x0188 -> line 2731
 *   +0x018c -> line 2730
 *   +0x0190 -> line 2731
 *   +0x019c -> line 2735
 *   +0x01a4 -> line 2737
 *   +0x01a8 -> line 2739
 *   +0x01ac -> line 2741
 *   +0x01b4 -> line 2743
 *   +0x01c8 -> line 2745
 *   +0x01d0 -> line 2746
 *   +0x01d4 -> line 2745
 *   +0x01d8 -> line 2746
 *   +0x01e4 -> line 2750
 *   +0x01ec -> line 2751
 *   +0x01f0 -> line 2753
 *   +0x01f4 -> line 2755
 *   +0x01fc -> line 2757
 *   +0x0210 -> line 2762
 *   +0x0218 -> line 2763
 *   +0x021c -> line 2762
 *   +0x0220 -> line 2763
 *   +0x022c -> line 2764
 *   +0x0238 -> line 2767
 *   +0x0248 -> line 2768
 *   +0x0250 -> line 2770
 *   +0x0258 -> line 2772
 *   +0x0268 -> line 2776
 *   +0x0270 -> line 2780
 *   +0x0280 -> line 2781
 *   +0x0288 -> line 2783
 *   +0x029c -> line 2785
 *   +0x02a4 -> line 2786
 *   +0x02a8 -> line 2785
 *   +0x02ac -> line 2786
 *   +0x02b8 -> line 2799
 *   +0x02c8 -> line 2800
 *   +0x02e8 -> line 2801
 *   +0x02ec -> line 2802
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
tdstNodeInterpret_* fn_v_RotateObjectsLinkedToSpos(HIE_tdstSuperObject_* p_SuperObjPerso, tdstNodeInterpret_* p_stTree, tdstGetSetParam_* p_stParam, MAT_tdstTransformation_* p_stLocalSPORotation, HIE_tdstSuperObject_* _hSpo, unsigned char _ucNbArrays)
{
    HIE_tdstSuperObject_* hPerso;
    WP_tdstWayPoint_* hWP;
    int TypeOfWP;
    int nb;
    int ulNumberOfWP;
    WP_tdstGraph_* hGraph;
    HIE_tdstSuperObject_* hLinkedSpo;
    MAT_tdstTransformation_ Transformation;
    tdeDsgVarTypeId_ eDsgVarTypeId;
    unsigned char uc;
    unsigned int ul;
    unsigned int ulMyVarSize;
    unsigned char ucVarId;
    tdstArray_* p_stArray;
    int NbOfTreatedObjects;
    int TreatedObjects[1020];
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\ProcRay2.cxx lines 2550–2668 */
/* addr: 0x0022c340  size: 740 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 2550
 *   +0x0010 -> line 2561
 *   +0x0014 -> line 2550
 *   +0x0038 -> line 2552
 *   +0x003c -> line 2559
 *   +0x004c -> line 2561
 *   +0x0054 -> line 2563
 *   +0x0060 -> line 2564
 *   +0x0068 -> line 2563
 *   +0x0074 -> line 2564
 *   +0x00a4 -> line 2565
 *   +0x00ac -> line 2568
 *   +0x00b0 -> line 2566
 *   +0x00b4 -> line 2568
 *   +0x00c0 -> line 2570
 *   +0x00f0 -> line 2575
 *   +0x0120 -> line 2580
 *   +0x0124 -> line 2582
 *   +0x012c -> line 2584
 *   +0x0140 -> line 2586
 *   +0x0148 -> line 2587
 *   +0x014c -> line 2586
 *   +0x0150 -> line 2587
 *   +0x015c -> line 2591
 *   +0x0164 -> line 2593
 *   +0x0168 -> line 2595
 *   +0x016c -> line 2597
 *   +0x0174 -> line 2599
 *   +0x0188 -> line 2601
 *   +0x0190 -> line 2602
 *   +0x0194 -> line 2601
 *   +0x0198 -> line 2602
 *   +0x01a4 -> line 2606
 *   +0x01ac -> line 2608
 *   +0x01b0 -> line 2610
 *   +0x01b4 -> line 2612
 *   +0x01bc -> line 2614
 *   +0x01d0 -> line 2619
 *   +0x01d8 -> line 2620
 *   +0x01dc -> line 2619
 *   +0x01e0 -> line 2620
 *   +0x01ec -> line 2621
 *   +0x01f8 -> line 2624
 *   +0x0208 -> line 2625
 *   +0x0210 -> line 2627
 *   +0x0218 -> line 2629
 *   +0x0228 -> line 2633
 *   +0x0230 -> line 2638
 *   +0x0240 -> line 2639
 *   +0x0248 -> line 2641
 *   +0x025c -> line 2643
 *   +0x0264 -> line 2644
 *   +0x0268 -> line 2643
 *   +0x026c -> line 2644
 *   +0x0278 -> line 2665
 *   +0x0290 -> line 2666
 *   +0x02b0 -> line 2667
 *   +0x02b4 -> line 2668
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
tdstNodeInterpret_* fn_v_TranslateObjectsLinkedToSpos(HIE_tdstSuperObject_* p_SuperObjPerso, tdstNodeInterpret_* p_stTree, tdstGetSetParam_* p_stParam, MTH3D_tdstVector_* _p_stTranslation, HIE_tdstSuperObject_* _hSpo, unsigned char _ucNbArrays)
{
    HIE_tdstSuperObject_* hPerso;
    WP_tdstWayPoint_* hWP;
    int TypeOfWP;
    int nb;
    int ulNumberOfWP;
    WP_tdstGraph_* hGraph;
    HIE_tdstSuperObject_* hLinkedSpo;
    tdeDsgVarTypeId_ eDsgVarTypeId;
    unsigned char uc;
    unsigned int ul;
    unsigned int ulMyVarSize;
    unsigned char ucVarId;
    tdstArray_* p_stArray;
    int NbOfTreatedObjects;
    int TreatedObjects[1020];
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\ProcRay2.cxx lines 2504–2515 */
/* addr: 0x0022c630  size: 72 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 2504
 *   +0x0004 -> line 2507
 *   +0x0008 -> line 2504
 *   +0x0010 -> line 2505
 *   +0x0014 -> line 2507
 *   +0x001c -> line 2508
 *   +0x0024 -> line 2509
 *   +0x002c -> line 2511
 *   +0x0034 -> line 2514
 *   +0x0038 -> line 2515
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
/* The unused character argument is omitted by debug recovery: the target
 * reads and returns the tree from a1, not a0. */
tdstNodeInterpret_* fn_p_stSaveSinusEffectContext(HIE_tdstSuperObject_* p_SuperObjPerso, tdstNodeInterpret_* p_stTree)
{
    tdeProcedureId_ eProcedureId;
    eProcedureId = (p_stTree - 1)->uDummy.uId.eProcedureId;
    if (eProcedureId == 0x223) {
        GLI_vSaveSinusContext();
    } else {
        GLI_vRestoreSinusContext();
    }
    return p_stTree;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\ProcRay2.cxx lines 2482–2494 */
/* addr: 0x0022c680  size: 52 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 2482
 *   +0x0008 -> line 2485
 *   +0x0014 -> line 2491
 *   +0x0020 -> line 2493
 *   +0x0024 -> line 2494
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
tdstNodeInterpret_* fn_p_stBaseFrequenceForMenu(HIE_tdstSuperObject_* p_SuperObjPerso, tdstNodeInterpret_* p_stTree)
{
    tdstGetSetParam_ stParam;
    p_stTree = fn_p_stEvalTree(p_SuperObjPerso, p_stTree, &stParam);
    GLI_vSetSinEffetBase(stParam.uParam.xValue);
    return p_stTree;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\ProcRay2.cxx lines 2434–2472 */
/* addr: 0x0022c6c0  size: 184 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 2434
 *   +0x0018 -> line 2444
 *   +0x0034 -> line 2446
 *   +0x0058 -> line 2449
 *   +0x006c -> line 2456
 *   +0x0074 -> line 2453
 *   +0x0078 -> line 2456
 *   +0x0080 -> line 2466
 *   +0x0094 -> line 2468
 *   +0x0098 -> line 2469
 *   +0x00a0 -> line 2472
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
tdstNodeInterpret_* fn_p_stSetTransparencyZone(HIE_tdstSuperObject_* p_SuperObjPerso, tdstNodeInterpret_* p_stTree)
{
    HIE_tdstSuperObject_* hNewSuperObjPerso;
    int lValueMax;
    int lValueMin;
    tdstGetSetParam_ stParam;
    fn_vGetUltraOperatorPerso(fn_ucGetProcedureUltraOperator((p_stTree - 1)->uDummy.uId.eProcedureId), p_SuperObjPerso, &hNewSuperObjPerso);
    tdstEngineObject_* hCharacter = hNewSuperObjPerso->ulTypeOfLinkedObject != 2 ? 0 : hNewSuperObjPerso->hLinkedObject.p_stCharacter;
    p_stTree = fn_p_stEvalTree(p_SuperObjPerso, p_stTree, &stParam);
    lValueMin = stParam.uParam.lValue;
    p_stTree = fn_p_stEvalTree(p_SuperObjPerso, p_stTree, &stParam);
    lValueMax = stParam.uParam.lValue;
    if (hCharacter && hCharacter->h_StandardGame) {
        hCharacter->h_StandardGame->ucTransparencyZoneMin = (unsigned char)lValueMin;
        hCharacter->h_StandardGame->ucTransparencyZoneMax = (unsigned char)lValueMax;
    }
    return p_stTree;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\ProcRay2.cxx lines 2400–2425 */
/* addr: 0x0022c780  size: 160 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 2400
 *   +0x0018 -> line 2410
 *   +0x0034 -> line 2412
 *   +0x0058 -> line 2414
 *   +0x006c -> line 2420
 *   +0x0080 -> line 2422
 *   +0x0084 -> line 2424
 *   +0x0088 -> line 2425
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
tdstNodeInterpret_* fn_p_stSetTooFarLimit(HIE_tdstSuperObject_* p_SuperObjPerso, tdstNodeInterpret_* p_stTree)
{
    HIE_tdstSuperObject_* hNewSuperObjPerso;
    int lValue;
    tdstGetSetParam_ stParam;
    fn_vGetUltraOperatorPerso(fn_ucGetProcedureUltraOperator((p_stTree - 1)->uDummy.uId.eProcedureId), p_SuperObjPerso, &hNewSuperObjPerso);
    tdstEngineObject_* hCharacter = hNewSuperObjPerso->ulTypeOfLinkedObject != 2 ? 0 : hNewSuperObjPerso->hLinkedObject.p_stCharacter;
    p_stTree = fn_p_stEvalTree(p_SuperObjPerso, p_stTree, &stParam);
    lValue = stParam.uParam.lValue;
    if (hCharacter && hCharacter->h_StandardGame)
        hCharacter->h_StandardGame->ucTooFarLimit = (unsigned char)lValue;
    return p_stTree;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\ProcRay2.cxx lines 2235–2356 */
/* addr: 0x0022c820  size: 820 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 2235
 *   +0x0008 -> line 2251
 *   +0x000c -> line 2235
 *   +0x0024 -> line 2251
 *   +0x0030 -> line 2252
 *   +0x0038 -> line 2254
 *   +0x0040 -> line 2257
 *   +0x0044 -> line 2254
 *   +0x0048 -> line 2257
 *   +0x0054 -> line 2260
 *   +0x0068 -> line 2262
 *   +0x0074 -> line 2263
 *   +0x0094 -> line 2264
 *   +0x00a0 -> line 2265
 *   +0x00a8 -> line 2269
 *   +0x00b0 -> line 2271
 *   +0x00bc -> line 2272
 *   +0x00cc -> line 2275
 *   +0x00d0 -> line 2276
 *   +0x00e8 -> line 2277
 *   +0x00f8 -> line 2283
 *   +0x010c -> line 2284
 *   +0x0114 -> line 2287
 *   +0x011c -> line 2284
 *   +0x0120 -> line 2287
 *   +0x0128 -> line 2291
 *   +0x0130 -> line 2288
 *   +0x0134 -> line 2291
 *   +0x0140 -> line 2292
 *   +0x0148 -> line 2296
 *   +0x0158 -> line 2300
 *   +0x0168 -> line 2301
 *   +0x0180 -> line 2303
 *   +0x0188 -> line 2304
 *   +0x01b0 -> line 2306
 *   +0x01c4 -> line 2307
 *   +0x01cc -> line 2309
 *   +0x01ec -> line 2310
 *   +0x01f4 -> line 2314
 *   +0x01fc -> line 2316
 *   +0x0208 -> line 2317
 *   +0x0220 -> line 2319
 *   +0x0240 -> line 2320
 *   +0x0244 -> line 2325
 *   +0x0268 -> line 2329
 *   +0x0270 -> line 2330
 *   +0x0290 -> line 2332
 *   +0x0298 -> line 2334
 *   +0x02a4 -> line 2338
 *   +0x02ac -> line 2339
 *   +0x02cc -> line 2341
 *   +0x02e4 -> line 2343
 *   +0x02ec -> line 2344
 *   +0x02f4 -> line 2347
 *   +0x02fc -> line 2348
 *   +0x0304 -> line 2351
 *   +0x030c -> line 2355
 *   +0x0310 -> line 2356
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
tdstNodeInterpret_* fn_p_stPlayDemo(HIE_tdstSuperObject_* p_SuperObjPerso, tdstNodeInterpret_* p_stTree)
{
    char szName[40];
    int lCurrentSubMapNumber;
    char* p_cMapName;
    int lSubMapNumber;
    char* p_cNextMapName;
    char* p_cDelimiter;
    char szDemoCompleteFileName[40];
    char szNextMapName[40];
    int bTestInput;
    char* szDemoFileName;
    char szMapName[40];
    tdstGetSetParam_ stParam;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\ProcRay2.cxx lines 2179–2224 */
/* addr: 0x0022cb60  size: 204 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 2179
 *   +0x0008 -> line 2189
 *   +0x000c -> line 2179
 *   +0x0018 -> line 2184
 *   +0x001c -> line 2189
 *   +0x0024 -> line 2193
 *   +0x0030 -> line 2197
 *   +0x0044 -> line 2198
 *   +0x004c -> line 2200
 *   +0x005c -> line 2203
 *   +0x006c -> line 2204
 *   +0x0074 -> line 2206
 *   +0x007c -> line 2209
 *   +0x0088 -> line 2210
 *   +0x0094 -> line 2211
 *   +0x009c -> line 2215
 *   +0x00a4 -> line 2217
 *   +0x00ac -> line 2220
 *   +0x00b4 -> line 2223
 *   +0x00b8 -> line 2224
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
tdstNodeInterpret_* fn_p_stPlayAutoDemo(HIE_tdstSuperObject_* p_SuperObjPerso, tdstNodeInterpret_* p_stTree)
{
    tdstGetSetParam_ stParam;
    char* p_cMapName;
    char* p_cDemoName;
    char* p_cNextMapName;
    p_cDemoName = p_cMapName = 0;
    p_stTree = fn_p_stEvalTree(p_SuperObjPerso, p_stTree, &stParam);
    DEMO_fn_vSetTestInputDuringDemo((unsigned char)stParam.uParam.ulValue);
    p_stTree = fn_p_stEvalTree(p_SuperObjPerso, p_stTree, &stParam);
    p_cNextMapName = fn_szGetStringFromTextOrStringParam(&stParam);
    if (*p_cNextMapName == '*') {
        DEMO_fn_vSetMapToLoadWhenDemoFinished(fn_p_szGetLevelName());
    } else {
        DEMO_fn_vSetMapToLoadWhenDemoFinished(p_cNextMapName);
    }
    GAM_fn_vGetRandomMapAndDemoName(&p_cMapName, &p_cDemoName);
    if (!p_cMapName)
        return p_stTree;
    GAM_fn_vAskToChangeLevel(p_cMapName, 1);
    DEMO_fn_vAskToLoadDemo(p_cDemoName);
    DEMO_fn_vPrepareForRead(2);
    return p_stTree;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\ProcRay2.cxx lines 2096–2168 */
/* addr: 0x0022cc30  size: 344 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 2096
 *   +0x0020 -> line 2100
 *   +0x0024 -> line 2106
 *   +0x003c -> line 2110
 *   +0x0050 -> line 2114
 *   +0x0070 -> line 2117
 *   +0x0084 -> line 2118
 *   +0x008c -> line 2123
 *   +0x00a0 -> line 2124
 *   +0x00a8 -> line 2129
 *   +0x00b0 -> line 2130
 *   +0x00b8 -> line 2136
 *   +0x00c0 -> line 2138
 *   +0x00e0 -> line 2142
 *   +0x00f4 -> line 2147
 *   +0x0104 -> line 2151
 *   +0x0108 -> line 2147
 *   +0x010c -> line 2151
 *   +0x011c -> line 2153
 *   +0x0128 -> line 2158
 *   +0x0130 -> line 2159
 *   +0x0138 -> line 2167
 *   +0x013c -> line 2168
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
tdstNodeInterpret_* fn_p_stSetZDxSize(HIE_tdstSuperObject_* p_SuperObjPerso, tdstNodeInterpret_* p_stTree)
{
    HIE_tdstSuperObject_* hNewSuperObjPerso;
    tdeProcedureId_ eProcedureId;
    COL_tdstCollideObject_* hGeoObj;
    int lZoneNumber;
    tdstGetSetParam_ stParam;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\ProcRay2.cxx lines 2060–2086 */
/* addr: 0x0022cd90  size: 116 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 2060
 *   +0x0004 -> line 2063
 *   +0x0008 -> line 2060
 *   +0x0010 -> line 2061
 *   +0x0014 -> line 2063
 *   +0x0030 -> line 2067
 *   +0x0038 -> line 2068
 *   +0x0040 -> line 2069
 *   +0x0048 -> line 2075
 *   +0x0050 -> line 2076
 *   +0x0058 -> line 2084
 *   +0x0060 -> line 2085
 *   +0x0064 -> line 2086
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
/* The tree is passed in a1; debug recovery omitted the unused a0 character. */
tdstNodeInterpret_* fn_p_stActiveJoystickAnal(HIE_tdstSuperObject_* p_SuperObjPerso, tdstNodeInterpret_* p_stTree)
{
    tdeProcedureId_ eProcId;
    eProcId = (p_stTree - 1)->uDummy.uId.eProcedureId;
    switch (eProcId) {
    case 0x211:
        IPT_fn_vDesactiveJoystickAndPadControl();
        IPT_fn_vActiveJoystickControl();
        break;
    case 0x212:
        IPT_fn_vDesactiveJoystickAndPadControl();
        return p_stTree;
    default:
        fn_vOnAIErm_M_UpdateLastError(39, 0);
        break;
    }
    return p_stTree;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\ProcRay2.cxx lines 1997–2048 */
/* addr: 0x0022ce10  size: 272 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1997
 *   +0x0008 -> line 2010
 *   +0x000c -> line 1997
 *   +0x001c -> line 2008
 *   +0x002c -> line 2010
 *   +0x0030 -> line 2008
 *   +0x0050 -> line 2010
 *   +0x0058 -> line 2013
 *   +0x005c -> line 2010
 *   +0x0060 -> line 2011
 *   +0x0064 -> line 2013
 *   +0x0070 -> line 2016
 *   +0x0080 -> line 2017
 *   +0x0084 -> line 2019
 *   +0x00a4 -> line 2024
 *   +0x00ac -> line 2025
 *   +0x00b8 -> line 2028
 *   +0x00c0 -> line 2033
 *   +0x00c8 -> line 2034
 *   +0x00d4 -> line 2037
 *   +0x00dc -> line 2041
 *   +0x00e4 -> line 2046
 *   +0x00f4 -> line 2047
 *   +0x00f8 -> line 2048
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
tdstNodeInterpret_* fn_p_stSortArray(HIE_tdstSuperObject_* p_SuperObjPerso, tdstNodeInterpret_* p_stTree)
{
    tdstGetSetParam_ stParam;
    tdstArray_* p_stArray;
    int lNbElements;
    int lType;
    int (*p_fnCompare)(void*, void*);
    tdstDsgMem_* p_stDsgMem = p_SuperObjPerso->hLinkedObject.p_stCharacter->h_Brain->p_stMind->p_stDsgMem;
    p_stArray = (tdstArray_*)((char*)p_stDsgMem->p_cDsgMemBuffer + (*p_stDsgMem->p_p_stDsgVar)->p_stDsgVarInfo[p_stTree->uDummy.uParam.ucValue].ulOffsetInDsgMem);
    p_stTree = fn_p_stEvalTree(p_SuperObjPerso, p_stTree + 1, &stParam);
    lNbElements = stParam.uParam.lValue;
    p_stTree = fn_p_stEvalTree(p_SuperObjPerso, p_stTree, &stParam);
    lType = stParam.uParam.lValue;
    if (lNbElements > p_stArray->ucMaxSize)
        lNbElements = p_stArray->ucMaxSize;
    switch (p_stArray->eType) {
    case 5:
        if (lType)
            p_fnCompare = fni_CompareIntegerGreater;
        else
            p_fnCompare = fni_CompareIntegerLess;
        break;
    case 7:
        if (lType)
            p_fnCompare = fni_CompareFloatGreater;
        else
            p_fnCompare = fni_CompareFloatLess;
        break;
    default:
        return p_stTree;
    }
    qsort(p_stArray->d_ArrayElement, lNbElements, sizeof(tduGetSetParamForNode_), p_fnCompare);
    return p_stTree;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\ProcRay2.cxx lines 1991–1992 */
/* addr: 0x0022cf20  size: 64 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1991
 *   +0x0038 -> line 1992
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
int fni_CompareFloatLess(void* _pv_Elem1, void* _pv_Elem2)
{
    return *(float*)_pv_Elem2 < *(float*)_pv_Elem1 ? -1 : (*(float*)_pv_Elem2 == *(float*)_pv_Elem1 ? 0 : 1);
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\ProcRay2.cxx lines 1981–1982 */
/* addr: 0x0022cf60  size: 64 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1981
 *   +0x0038 -> line 1982
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
int fni_CompareFloatGreater(void* _pv_Elem1, void* _pv_Elem2)
{
    return *(float*)_pv_Elem2 > *(float*)_pv_Elem1 ? -1 : (*(float*)_pv_Elem2 == *(float*)_pv_Elem1 ? 0 : 1);
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\ProcRay2.cxx lines 1971–1972 */
/* addr: 0x0022cfa0  size: 56 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1971
 *   +0x0030 -> line 1972
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
int fni_CompareIntegerGreater(void* _pv_Elem1, void* _pv_Elem2)
{
    return *(int*)_pv_Elem2 > *(int*)_pv_Elem1 ? -1 : (*(int*)_pv_Elem2 == *(int*)_pv_Elem1 ? 0 : 1);
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\ProcRay2.cxx lines 1961–1962 */
/* addr: 0x0022cfe0  size: 56 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1961
 *   +0x0030 -> line 1962
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
int fni_CompareIntegerLess(void* _pv_Elem1, void* _pv_Elem2)
{
    return *(int*)_pv_Elem2 < *(int*)_pv_Elem1 ? -1 : (*(int*)_pv_Elem2 == *(int*)_pv_Elem1 ? 0 : 1);
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\ProcRay2.cxx lines 1904–1944 */
/* addr: 0x0022d020  size: 396 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1904
 *   +0x0008 -> line 1915
 *   +0x000c -> line 1904
 *   +0x001c -> line 1915
 *   +0x0024 -> line 1916
 *   +0x0028 -> line 1915
 *   +0x002c -> line 1919
 *   +0x0034 -> line 1921
 *   +0x003c -> line 1923
 *   +0x0040 -> line 1926
 *   +0x0050 -> line 1927
 *   +0x0054 -> line 1928
 *   +0x0064 -> line 1930
 *   +0x006c -> line 1929
 *   +0x0070 -> line 1930
 *   +0x0078 -> line 1933
 *   +0x007c -> line 1930
 *   +0x0080 -> line 1933
 *   +0x0084 -> line 1937
 *   +0x0088 -> line 1933
 *   +0x008c -> line 1937
 *   +0x0094 -> line 1933
 *   +0x0098 -> line 1937
 *   +0x009c -> line 1933
 *   +0x00a0 -> line 1937
 *   +0x00d8 -> line 1938
 *   +0x00f4 -> line 1939
 *   +0x00f8 -> line 1938
 *   +0x0110 -> line 1939
 *   +0x0144 -> line 1941
 *   +0x0148 -> line 1939
 *   +0x014c -> line 1941
 *   +0x0150 -> line 1939
 *   +0x0154 -> line 1940
 *   +0x015c -> line 1939
 *   +0x0160 -> line 1940
 *   +0x0164 -> line 1941
 *   +0x016c -> line 1943
 *   +0x0170 -> line 1944
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
tdstNodeInterpret_* fn_p_stFixePositionFade(HIE_tdstSuperObject_* p_SuperObjPerso, tdstNodeInterpret_* p_stTree)
{
    int lY;
    int lX;
    float xX;
    MTH3D_tdstVector_ stScale;
    MTH3D_tdstVector_ stVertex;
    HIE_tdstSuperObject_* hSpo;
    tdstGetSetParam_ stParam;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\ProcRay2.cxx lines 1861–1893 */
/* addr: 0x0022d1b0  size: 152 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1861
 *   +0x001c -> line 1862
 *   +0x0020 -> line 1868
 *   +0x0038 -> line 1871
 *   +0x0054 -> line 1875
 *   +0x005c -> line 1876
 *   +0x0064 -> line 1882
 *   +0x006c -> line 1883
 *   +0x0074 -> line 1891
 *   +0x007c -> line 1892
 *   +0x0080 -> line 1893
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
tdstNodeInterpret_* fn_p_stFreezeAnim(HIE_tdstSuperObject_* p_SuperObjPerso, tdstNodeInterpret_* p_stTree)
{
    HIE_tdstSuperObject_* hNewSuperObjPerso;
    tdeProcedureId_ eProcId;
    eProcId = (p_stTree - 1)->uDummy.uId.eProcedureId;
    fn_vGetUltraOperatorPerso(fn_ucGetProcedureUltraOperator(eProcId), p_SuperObjPerso, &hNewSuperObjPerso);
    switch (eProcId) {
    case 0x1c8:
        ANI_fn_vFreeze(hNewSuperObjPerso);
        return p_stTree;
    case 0x1c9:
        ANI_fn_vUnFreeze(hNewSuperObjPerso);
        return p_stTree;
    default:
        fn_vOnAIErm_M_UpdateLastError(39, 0);
        return p_stTree;
    }
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\ProcRay2.cxx lines 1792–1849 */
/* addr: 0x0022d250  size: 684 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1792
 *   +0x002c -> line 1793
 *   +0x0030 -> line 1803
 *   +0x0048 -> line 1807
 *   +0x005c -> line 1808
 *   +0x006c -> line 1810
 *   +0x0074 -> line 1808
 *   +0x0078 -> line 1810
 *   +0x0080 -> line 1812
 *   +0x0084 -> line 1810
 *   +0x0088 -> line 1812
 *   +0x00a4 -> line 1813
 *   +0x00a8 -> line 1816
 *   +0x00ac -> line 1813
 *   +0x00b0 -> line 1816
 *   +0x00b4 -> line 1813
 *   +0x00bc -> line 1816
 *   +0x00c8 -> line 1818
 *   +0x0124 -> line 1821
 *   +0x0128 -> line 1818
 *   +0x0130 -> line 1821
 *   +0x0134 -> line 1818
 *   +0x0138 -> line 1821
 *   +0x013c -> line 1818
 *   +0x0140 -> line 1821
 *   +0x0170 -> line 1822
 *   +0x0178 -> line 1824
 *   +0x017c -> line 1827
 *   +0x0180 -> line 1824
 *   +0x0184 -> line 1827
 *   +0x0194 -> line 1824
 *   +0x0198 -> line 1827
 *   +0x01a4 -> line 1828
 *   +0x01c8 -> line 1829
 *   +0x01d0 -> line 1832
 *   +0x01dc -> line 1833
 *   +0x0224 -> line 1837
 *   +0x0228 -> line 1840
 *   +0x024c -> line 1841
 *   +0x0264 -> line 1842
 *   +0x0268 -> line 1844
 *   +0x0278 -> line 1845
 *   +0x0280 -> line 1848
 *   +0x0284 -> line 1849
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
tdstNodeInterpret_* fn_p_stTurnToPosition(HIE_tdstSuperObject_* p_SuperObjPerso, tdstNodeInterpret_* p_stTree)
{
    HIE_tdstSuperObject_* hNewSuperObjPerso;
    MAT_tdstTransformation_ mGlobalToPerso;
    float xAngle;
    float xMaxAngle;
    MTH3D_tdstVector_ stLocalPosition;
    MTH3D_tdstVector_ stPosition;
    tdstGetSetParam_ stParam;
    tdeProcedureId_ eProcId;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\ProcRay2.cxx lines 1746–1780 */
/* addr: 0x0022d500  size: 168 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1746
 *   +0x001c -> line 1748
 *   +0x0024 -> line 1756
 *   +0x003c -> line 1758
 *   +0x0060 -> line 1760
 *   +0x0070 -> line 1766
 *   +0x0084 -> line 1769
 *   +0x008c -> line 1780
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
tdstNodeInterpret_* fn_p_stTractionFactorProcedure(HIE_tdstSuperObject_* p_SuperObjPerso, tdstNodeInterpret_* p_stTree)
{
    tdstGetSetParam_ stParam;
    tdeProcedureId_ eProcedureId;
    unsigned char ucTractionFactor;
    HIE_tdstSuperObject_* hNewSuperObjPerso;
    eProcedureId = (p_stTree - 1)->uDummy.uId.eProcedureId;
    fn_vGetUltraOperatorPerso(fn_ucGetProcedureUltraOperator(eProcedureId), p_SuperObjPerso, &hNewSuperObjPerso);
    tdstEngineObject_* hCharacter = hNewSuperObjPerso->ulTypeOfLinkedObject != 2 ? 0 : hNewSuperObjPerso->hLinkedObject.p_stCharacter;
    p_stTree = fn_p_stEvalTree(p_SuperObjPerso, p_stTree, &stParam);
    ucTractionFactor = (unsigned char)stParam.uParam.ulValue;
    switch (eProcedureId) {
    case 0x20d:
        hCharacter->h_StandardGame->ucTractionFactor = ucTractionFactor;
        break;
    }
    return p_stTree;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\ProcRay2.cxx lines 1649–1733 */
/* addr: 0x0022d5b0  size: 376 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1649
 *   +0x0008 -> line 1658
 *   +0x000c -> line 1649
 *   +0x0018 -> line 1658
 *   +0x0020 -> line 1662
 *   +0x0024 -> line 1658
 *   +0x0028 -> line 1665
 *   +0x0034 -> line 1666
 *   +0x0038 -> line 1670
 *   +0x0048 -> line 1674
 *   +0x0050 -> line 1671
 *   +0x0054 -> line 1674
 *   +0x005c -> line 1685
 *   +0x0060 -> line 1682
 *   +0x0064 -> line 1678
 *   +0x0068 -> line 1685
 *   +0x0070 -> line 1687
 *   +0x007c -> line 1690
 *   +0x0084 -> line 1692
 *   +0x0090 -> line 1694
 *   +0x009c -> line 1696
 *   +0x00a4 -> line 1698
 *   +0x00b0 -> line 1699
 *   +0x00c4 -> line 1700
 *   +0x00c8 -> line 1701
 *   +0x00d4 -> line 1703
 *   +0x00e0 -> line 1705
 *   +0x00e4 -> line 1706
 *   +0x0100 -> line 1709
 *   +0x0108 -> line 1710
 *   +0x0110 -> line 1712
 *   +0x0130 -> line 1716
 *   +0x0138 -> line 1717
 *   +0x0140 -> line 1722
 *   +0x0148 -> line 1725
 *   +0x0154 -> line 1726
 *   +0x015c -> line 1729
 *   +0x0160 -> line 1733
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
tdstNodeInterpret_* fn_p_stMiscProcOnTypeOfWP(HIE_tdstSuperObject_* p_SuperObjPerso, tdstNodeInterpret_* p_stTree)
{
    int lValue;
    WP_tdstGraphNode_* hTheNode;
    WP_tdstGraphNode_* param0;
    WP_tdstWayPoint_* hWayPoint;
    WP_tdstGraph_* hGraph;
    int lTypeOfWP;
    tdstGetSetParam_ stParam;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\ProcRay2.cxx lines 1626–1638 */
/* addr: 0x0022d730  size: 92 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1626
 *   +0x0008 -> line 1630
 *   +0x000c -> line 1626
 *   +0x0014 -> line 1630
 *   +0x001c -> line 1631
 *   +0x0028 -> line 1634
 *   +0x0038 -> line 1635
 *   +0x0044 -> line 1637
 *   +0x0048 -> line 1638
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
tdstNodeInterpret_* fn_p_stWPSetRangeValue(HIE_tdstSuperObject_* p_SuperObjPerso, tdstNodeInterpret_* p_stTree)
{
    tdstGetSetParam_ stParam;
    p_stTree = fn_p_stEvalTree(p_SuperObjPerso, p_stTree, &stParam);
    fn_vSetDistanceWaypointMin(stParam.uParam.xValue);
    p_stTree = fn_p_stEvalTree(p_SuperObjPerso, p_stTree, &stParam);
    fn_vSetDistanceWaypointMax(stParam.uParam.xValue);
    return p_stTree;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\ProcRay2.cxx lines 1611–1623 */
/* addr: 0x0022d790  size: 92 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1611
 *   +0x0008 -> line 1615
 *   +0x000c -> line 1611
 *   +0x0014 -> line 1615
 *   +0x001c -> line 1616
 *   +0x0028 -> line 1619
 *   +0x0038 -> line 1620
 *   +0x0044 -> line 1622
 *   +0x0048 -> line 1623
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
tdstNodeInterpret_* fn_p_stACTSetRangeValue(HIE_tdstSuperObject_* p_SuperObjPerso, tdstNodeInterpret_* p_stTree)
{
    tdstGetSetParam_ stParam;
    p_stTree = fn_p_stEvalTree(p_SuperObjPerso, p_stTree, &stParam);
    fn_vSetDistanceActMin(stParam.uParam.xValue);
    p_stTree = fn_p_stEvalTree(p_SuperObjPerso, p_stTree, &stParam);
    fn_vSetDistanceActMax(stParam.uParam.xValue);
    return p_stTree;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\ProcRay2.cxx lines 1567–1606 */
/* addr: 0x0022d7f0  size: 352 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1567
 *   +0x0008 -> line 1573
 *   +0x000c -> line 1567
 *   +0x0018 -> line 1573
 *   +0x0020 -> line 1576
 *   +0x0024 -> line 1573
 *   +0x0028 -> line 1576
 *   +0x0030 -> line 1579
 *   +0x0034 -> line 1576
 *   +0x0038 -> line 1578
 *   +0x003c -> line 1579
 *   +0x0048 -> line 1578
 *   +0x004c -> line 1579
 *   +0x0050 -> line 1581
 *   +0x0060 -> line 1583
 *   +0x0064 -> line 1584
 *   +0x0080 -> line 1587
 *   +0x0088 -> line 1588
 *   +0x0090 -> line 1591
 *   +0x0098 -> line 1592
 *   +0x00a4 -> line 1593
 *   +0x0108 -> line 1594
 *   +0x010c -> line 1593
 *   +0x0120 -> line 1594
 *   +0x0134 -> line 1598
 *   +0x013c -> line 1602
 *   +0x0144 -> line 1605
 *   +0x0148 -> line 1606
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
tdstNodeInterpret_* fn_p_stSetCoordWP(HIE_tdstSuperObject_* p_SuperObjPerso, tdstNodeInterpret_* p_stTree)
{
    tdeProcedureId_ eProcedureId;
    MTH3D_tdstVector_ stV;
    WP_tdstWayPoint_* hWP;
    tdstGetSetParam_ stParam2;
    tdstGetSetParam_ stParam1;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\ProcRay2.cxx lines 1552–1563 */
/* addr: 0x0022d950  size: 76 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1552
 *   +0x0008 -> line 1556
 *   +0x000c -> line 1552
 *   +0x0010 -> line 1556
 *   +0x0018 -> line 1559
 *   +0x001c -> line 1556
 *   +0x0020 -> line 1559
 *   +0x0028 -> line 1561
 *   +0x0038 -> line 1562
 *   +0x003c -> line 1563
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
tdstNodeInterpret_* fn_p_stSetRadiusWP(HIE_tdstSuperObject_* p_SuperObjPerso, tdstNodeInterpret_* p_stTree)
{
    tdstGetSetParam_ stParam1;
    tdstGetSetParam_ stParam2;
    p_stTree = fn_p_stEvalTree(p_SuperObjPerso, p_stTree, &stParam1);
    p_stTree = fn_p_stEvalTree(p_SuperObjPerso, p_stTree, &stParam2);
    WP_fnv_WayPoint_SetRadius((WP_tdstWayPoint_*)stParam1.uParam.pValue, stParam2.uParam.xValue);
    return p_stTree;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\ProcRay2.cxx lines 1351–1548 */
/* addr: 0x0022d9a0  size: 1632 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1351
 *   +0x0024 -> line 1355
 *   +0x0028 -> line 1351
 *   +0x002c -> line 1352
 *   +0x0030 -> line 1356
 *   +0x0034 -> line 1362
 *   +0x004c -> line 1365
 *   +0x00a0 -> line 1368
 *   +0x00a8 -> line 1370
 *   +0x00d8 -> line 1374
 *   +0x00f4 -> line 1375
 *   +0x00fc -> line 1380
 *   +0x010c -> line 1381
 *   +0x0110 -> line 1383
 *   +0x0118 -> line 1387
 *   +0x0120 -> line 1390
 *   +0x0128 -> line 1391
 *   +0x0134 -> line 1393
 *   +0x0138 -> line 1395
 *   +0x013c -> line 1411
 *   +0x0144 -> line 1412
 *   +0x014c -> line 1415
 *   +0x0150 -> line 1416
 *   +0x0158 -> line 1419
 *   +0x0160 -> line 1422
 *   +0x0164 -> line 1425
 *   +0x016c -> line 1422
 *   +0x0170 -> line 1425
 *   +0x0178 -> line 1426
 *   +0x017c -> line 1425
 *   +0x0180 -> line 1427
 *   +0x0190 -> line 1428
 *   +0x0194 -> line 1429
 *   +0x01a4 -> line 1436
 *   +0x01a8 -> line 1429
 *   +0x01ac -> line 1436
 *   +0x0214 -> line 1438
 *   +0x0244 -> line 1441
 *   +0x024c -> line 1443
 *   +0x0254 -> line 1444
 *   +0x025c -> line 1445
 *   +0x026c -> line 1447
 *   +0x0274 -> line 1449
 *   +0x027c -> line 1456
 *   +0x0284 -> line 1457
 *   +0x028c -> line 1459
 *   +0x0294 -> line 1462
 *   +0x0298 -> line 1464
 *   +0x02a0 -> line 1462
 *   +0x02a4 -> line 1464
 *   +0x02ac -> line 1465
 *   +0x02b0 -> line 1466
 *   +0x02c4 -> line 1467
 *   +0x02c8 -> line 1468
 *   +0x02dc -> line 1469
 *   +0x02e0 -> line 1468
 *   +0x02e4 -> line 1471
 *   +0x02e8 -> line 1469
 *   +0x02ec -> line 1471
 *   +0x031c -> line 1474
 *   +0x0324 -> line 1476
 *   +0x032c -> line 1477
 *   +0x0334 -> line 1478
 *   +0x0344 -> line 1480
 *   +0x034c -> line 1482
 *   +0x0354 -> line 1489
 *   +0x0360 -> line 1491
 *   +0x036c -> line 1493
 *   +0x0374 -> line 1503
 *   +0x0380 -> line 1504
 *   +0x0384 -> line 1505
 *   +0x0394 -> line 1506
 *   +0x0398 -> line 1507
 *   +0x03a8 -> line 1508
 *   +0x03ac -> line 1509
 *   +0x03bc -> line 1515
 *   +0x03c0 -> line 1509
 *   +0x03c4 -> line 1515
 *   +0x03c8 -> line 1516
 *   +0x03cc -> line 1515
 *   +0x03d0 -> line 1516
 *   +0x03d4 -> line 1515
 *   +0x03e8 -> line 1516
 *   +0x0450 -> line 1519
 *   +0x0454 -> line 1516
 *   +0x045c -> line 1519
 *   +0x0464 -> line 1516
 *   +0x0468 -> line 1519
 *   +0x0480 -> line 1520
 *   +0x04e0 -> line 1524
 *   +0x04e8 -> line 1520
 *   +0x04f4 -> line 1524
 *   +0x057c -> line 1531
 *   +0x0580 -> line 1524
 *   +0x0584 -> line 1531
 *   +0x0588 -> line 1524
 *   +0x058c -> line 1531
 *   +0x0618 -> line 1534
 *   +0x0620 -> line 1538
 *   +0x0628 -> line 1540
 *   +0x0630 -> line 1546
 *   +0x0638 -> line 1547
 *   +0x063c -> line 1548
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
tdstNodeInterpret_* fn_p_stSPOSuperimpoed(HIE_tdstSuperObject_* p_SuperObjPerso, tdstNodeInterpret_* p_stTree)
{
    float fRate;
    int lBottom;
    int lLeft;
    int lTop;
    DNM_stDynamics* p_stDynamics;
    tdstDynam_* h_Dynam;
    MTH3D_tdstVector_ stVertex;
    int lY;
    int lX;
    HIE_tdstSuperObject_* hNewSuperObjPerso;
    unsigned char ViewportIndex;
    unsigned char DestinationViewport;
    tdstGetSetParam_ stParam;
    tdeProcedureId_ eProcedureId;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\ProcRay2.cxx lines 1302–1340 */
/* addr: 0x0022e000  size: 200 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1302
 *   +0x001c -> line 1303
 *   +0x0020 -> line 1309
 *   +0x0038 -> line 1312
 *   +0x0054 -> line 1318
 *   +0x0060 -> line 1319
 *   +0x0064 -> line 1318
 *   +0x0068 -> line 1324
 *   +0x0088 -> line 1326
 *   +0x0090 -> line 1331
 *   +0x009c -> line 1332
 *   +0x00a4 -> line 1338
 *   +0x00ac -> line 1339
 *   +0x00b0 -> line 1340
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
tdstNodeInterpret_* fn_p_stManageFrame(HIE_tdstSuperObject_* p_SuperObjPerso, tdstNodeInterpret_* p_stTree)
{
    short wFrame;
    HIE_tdstSuperObject_* hNewSuperObjPerso;
    tdstGetSetParam_ stParam;
    tdeProcedureId_ eProcedureId;
    eProcedureId = (p_stTree - 1)->uDummy.uId.eProcedureId;
    fn_vGetUltraOperatorPerso(fn_ucGetProcedureUltraOperator(eProcedureId), p_SuperObjPerso, &hNewSuperObjPerso);
    switch (eProcedureId) {
    case 0x1c6:
        p_stTree = fn_p_stEvalTree(p_SuperObjPerso, p_stTree, &stParam);
        wFrame = (short)stParam.uParam.lValue;
        PLA_fn_vSetCurrFrame(hNewSuperObjPerso, wFrame == -32768 ? -1 : wFrame);
        return p_stTree;
    case 0x1c7:
        PLA_fn_vSetCurrFrame(hNewSuperObjPerso, -32768);
        return p_stTree;
    default:
        fn_vOnAIErm_M_UpdateLastError(39, 0);
        return p_stTree;
    }
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\ProcRay2.cxx lines 1241–1288 */
/* addr: 0x0022e0d0  size: 344 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1241
 *   +0x0030 -> line 1245
 *   +0x0034 -> line 1242
 *   +0x0038 -> line 1246
 *   +0x003c -> line 1247
 *   +0x0040 -> line 1248
 *   +0x0044 -> line 1253
 *   +0x005c -> line 1258
 *   +0x0060 -> line 1260
 *   +0x0064 -> line 1258
 *   +0x0068 -> line 1260
 *   +0x0090 -> line 1262
 *   +0x0094 -> line 1263
 *   +0x0098 -> line 1264
 *   +0x009c -> line 1266
 *   +0x00a4 -> line 1269
 *   +0x00b4 -> line 1270
 *   +0x00b8 -> line 1269
 *   +0x00bc -> line 1271
 *   +0x00c0 -> line 1273
 *   +0x00c8 -> line 1276
 *   +0x00dc -> line 1277
 *   +0x00e0 -> line 1276
 *   +0x00e4 -> line 1278
 *   +0x00f4 -> line 1279
 *   +0x00f8 -> line 1280
 *   +0x0108 -> line 1281
 *   +0x010c -> line 1280
 *   +0x0110 -> line 1286
 *   +0x0128 -> line 1287
 *   +0x012c -> line 1288
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
tdstNodeInterpret_* fn_p_stRLIProcedure(HIE_tdstSuperObject_* p_SuperObjPerso, tdstNodeInterpret_* p_stTree)
{
    HIE_tdstSuperObject_* hNewSuperObjPerso;
    int lPercent;
    int lNbRLI;
    int lIndex2;
    int lIndex1;
    tdstGetSetParam_ stParam;
    tdstMSLight_* hMSLight;
    tdeProcedureId_ eProcedureId;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\ProcRay2.cxx lines 1162–1229 */
/* addr: 0x0022e230  size: 464 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1162
 *   +0x0008 -> line 1168
 *   +0x000c -> line 1162
 *   +0x0020 -> line 1163
 *   +0x0024 -> line 1168
 *   +0x0030 -> line 1171
 *   +0x003c -> line 1176
 *   +0x004c -> line 1177
 *   +0x0050 -> line 1178
 *   +0x0058 -> line 1179
 *   +0x0064 -> line 1178
 *   +0x0070 -> line 1179
 *   +0x0078 -> line 1180
 *   +0x007c -> line 1179
 *   +0x0080 -> line 1181
 *   +0x0084 -> line 1183
 *   +0x0088 -> line 1181
 *   +0x008c -> line 1183
 *   +0x0098 -> line 1181
 *   +0x00a4 -> line 1183
 *   +0x00ac -> line 1185
 *   +0x00b4 -> line 1187
 *   +0x00c0 -> line 1191
 *   +0x00d0 -> line 1194
 *   +0x00d4 -> line 1191
 *   +0x00d8 -> line 1194
 *   +0x00e0 -> line 1196
 *   +0x00e8 -> line 1198
 *   +0x00f0 -> line 1203
 *   +0x00fc -> line 1204
 *   +0x0100 -> line 1205
 *   +0x0108 -> line 1206
 *   +0x0114 -> line 1205
 *   +0x0120 -> line 1206
 *   +0x0128 -> line 1207
 *   +0x012c -> line 1206
 *   +0x0130 -> line 1208
 *   +0x0134 -> line 1210
 *   +0x0138 -> line 1208
 *   +0x013c -> line 1210
 *   +0x0148 -> line 1208
 *   +0x0154 -> line 1210
 *   +0x015c -> line 1212
 *   +0x0164 -> line 1214
 *   +0x0170 -> line 1218
 *   +0x0180 -> line 1221
 *   +0x0184 -> line 1218
 *   +0x0188 -> line 1221
 *   +0x019c -> line 1223
 *   +0x01a4 -> line 1227
 *   +0x01ac -> line 1228
 *   +0x01b0 -> line 1229
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
tdstNodeInterpret_* fn_p_stSetScrollSpeed(HIE_tdstSuperObject_* p_SuperObjPerso, tdstNodeInterpret_* p_stTree)
{
    float xV;
    float xU;
    GLI_tdstMaterial_* hVisualMaterial;
    tdstGetSetParam_ stParam;
    tdeProcedureId_ eProcedureId;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\ProcRay2.cxx lines 1129–1142 */
/* addr: 0x0022e400  size: 52 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1129
 *   +0x0008 -> line 1134
 *   +0x0014 -> line 1140
 *   +0x0020 -> line 1141
 *   +0x0024 -> line 1142
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
tdstNodeInterpret_* fn_p_stReinitGraphProcedure(HIE_tdstSuperObject_* p_SuperObjPerso, tdstNodeInterpret_* p_stTree)
{
    tdstGetSetParam_ stParam;
    p_stTree = fn_p_stEvalTree(p_SuperObjPerso, p_stTree, &stParam);
    WPG_fn_vReinitGraph((WP_tdstGraph_*)stParam.uParam.pValue);
    return p_stTree;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\ProcRay2.cxx lines 1072–1126 */
/* addr: 0x0022e440  size: 296 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1072
 *   +0x0024 -> line 1074
 *   +0x0028 -> line 1083
 *   +0x0040 -> line 1085
 *   +0x0064 -> line 1087
 *   +0x0074 -> line 1091
 *   +0x0078 -> line 1093
 *   +0x00b0 -> line 1096
 *   +0x00b8 -> line 1097
 *   +0x00c0 -> line 1102
 *   +0x00c8 -> line 1103
 *   +0x00d0 -> line 1107
 *   +0x00d8 -> line 1108
 *   +0x00e0 -> line 1112
 *   +0x00f0 -> line 1114
 *   +0x00f4 -> line 1112
 *   +0x00f8 -> line 1114
 *   +0x0104 -> line 1115
 *   +0x0108 -> line 1126
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
tdstNodeInterpret_* fn_p_stCapabilityProcedure(HIE_tdstSuperObject_* p_SuperObjPerso, tdstNodeInterpret_* p_stTree)
{
    tdstGetSetParam_ stParam;
    tdeProcedureId_ eProcedureId;
    unsigned int ubf32Capabilities;
    HIE_tdstSuperObject_* hNewSuperObjPerso;
    eProcedureId = (p_stTree - 1)->uDummy.uId.eProcedureId;
    fn_vGetUltraOperatorPerso(fn_ucGetProcedureUltraOperator(eProcedureId), p_SuperObjPerso, &hNewSuperObjPerso);
    tdstEngineObject_* hCharacter = hNewSuperObjPerso->ulTypeOfLinkedObject != 2 ? 0 : hNewSuperObjPerso->hLinkedObject.p_stCharacter;
    p_stTree = fn_p_stEvalTree(p_SuperObjPerso, p_stTree, &stParam);
    ubf32Capabilities = stParam.uParam.ulValue;
    switch (eProcedureId) {
    case 0x1bc:
        fn_vSetCapabilities(hCharacter, ubf32Capabilities);
        return p_stTree;
    case 0x1bd:
        fn_vAddCapabilities(hCharacter, ubf32Capabilities);
        return p_stTree;
    case 0x1be:
        fn_vSubCapabilities(hCharacter, ubf32Capabilities);
        return p_stTree;
    case 0x1bf:
        p_stTree = fn_p_stEvalTree(p_SuperObjPerso, p_stTree, &stParam);
        fn_vChangeCapabilities(hCharacter, ubf32Capabilities, stParam.uParam.lValue);
        return p_stTree;
    }
    return p_stTree;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\ProcRay2.cxx lines 957–1060 */
/* addr: 0x0022e570  size: 400 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 957
 *   +0x0004 -> line 964
 *   +0x0008 -> line 957
 *   +0x0028 -> line 960
 *   +0x002c -> line 964
 *   +0x0040 -> line 968
 *   +0x0048 -> line 969
 *   +0x004c -> line 968
 *   +0x0050 -> line 974
 *   +0x0094 -> line 980
 *   +0x00a0 -> line 983
 *   +0x00a4 -> line 980
 *   +0x00a8 -> line 983
 *   +0x00b0 -> line 984
 *   +0x00b8 -> line 993
 *   +0x00c4 -> line 994
 *   +0x00c8 -> line 996
 *   +0x00d8 -> line 999
 *   +0x00dc -> line 996
 *   +0x00e0 -> line 999
 *   +0x00ec -> line 1000
 *   +0x00f4 -> line 1008
 *   +0x0100 -> line 1009
 *   +0x0104 -> line 1011
 *   +0x0118 -> line 1012
 *   +0x011c -> line 1014
 *   +0x0130 -> line 1015
 *   +0x0134 -> line 1017
 *   +0x0148 -> line 1018
 *   +0x014c -> line 1017
 *   +0x0150 -> line 1020
 *   +0x0160 -> line 1021
 *   +0x0168 -> line 1033
 *   +0x0170 -> line 1060
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
tdstNodeInterpret_* fn_p_stSetLight(HIE_tdstSuperObject_* p_SuperObjPerso, tdstNodeInterpret_* p_stTree)
{
    GEO_tdstColor_ stColor;
    float xNear;
    GLI_tdstLight_* hLight;
    tdeProcedureId_ eProcedureId;
    tdstGetSetParam_ stParam;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\ProcRay2.cxx lines 896–936 */
/* addr: 0x0022e700  size: 148 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 896
 *   +0x0004 -> line 902
 *   +0x0008 -> line 896
 *   +0x0018 -> line 898
 *   +0x001c -> line 902
 *   +0x0024 -> line 908
 *   +0x0030 -> line 909
 *   +0x003c -> line 912
 *   +0x0044 -> line 909
 *   +0x0048 -> line 912
 *   +0x0050 -> line 915
 *   +0x0054 -> line 913
 *   +0x0058 -> line 915
 *   +0x005c -> line 922
 *   +0x0064 -> line 923
 *   +0x006c -> line 925
 *   +0x0074 -> line 927
 *   +0x007c -> line 935
 *   +0x0080 -> line 936
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
tdstNodeInterpret_* fn_p_stSetLocalLightOnOff(HIE_tdstSuperObject_* p_SuperObjPerso, tdstNodeInterpret_* p_stTree)
{
    unsigned char bOnOff;
    HIE_tdstSuperObject_* p_SuperObjPersoTreated;
    tdstMSLight_* hMSLight;
    tdeProcedureId_ eProcedureId;
    tdstGetSetParam_ stParam;
    eProcedureId = (p_stTree - 1)->uDummy.uId.eProcedureId;
    if (eProcedureId == 0x1af) {
        p_stTree = fn_p_stEvalTree(p_SuperObjPerso, p_stTree, &stParam);
        p_SuperObjPersoTreated = fn_h_StandardGameGetSuperObject(((tdstEngineObject_*)stParam.uParam.pValue)->h_StandardGame);
        p_stTree = fn_p_stEvalTree(p_SuperObjPerso, p_stTree, &stParam);
        bOnOff = (unsigned char)stParam.uParam.lValue;
        hMSLight = p_SuperObjPersoTreated->hLinkedObject.p_stCharacter->h_MSLight;
        if (!hMSLight)
            return p_stTree;
        fn_vMSLightSetOnOff(hMSLight, bOnOff);
        return p_stTree;
    }
    return p_stTree;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\ProcRay2.cxx lines 814–884 */
/* addr: 0x0022e7a0  size: 416 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 814
 *   +0x0004 -> line 820
 *   +0x0008 -> line 814
 *   +0x0024 -> line 816
 *   +0x0028 -> line 820
 *   +0x0030 -> line 826
 *   +0x003c -> line 827
 *   +0x0048 -> line 830
 *   +0x004c -> line 827
 *   +0x0050 -> line 830
 *   +0x005c -> line 831
 *   +0x0060 -> line 833
 *   +0x0070 -> line 836
 *   +0x0074 -> line 834
 *   +0x0078 -> line 836
 *   +0x007c -> line 843
 *   +0x0084 -> line 844
 *   +0x008c -> line 847
 *   +0x0094 -> line 849
 *   +0x00a4 -> line 852
 *   +0x00d4 -> line 855
 *   +0x00e0 -> line 856
 *   +0x00ec -> line 857
 *   +0x00f4 -> line 859
 *   +0x00fc -> line 862
 *   +0x012c -> line 865
 *   +0x0134 -> line 866
 *   +0x0144 -> line 867
 *   +0x0158 -> line 871
 *   +0x0164 -> line 872
 *   +0x0170 -> line 875
 *   +0x017c -> line 883
 *   +0x0180 -> line 884
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
tdstNodeInterpret_* fn_p_stSetLocalLight(HIE_tdstSuperObject_* p_SuperObjPerso, tdstNodeInterpret_* p_stTree)
{
    HIE_tdstSuperObject_* hSector;
    unsigned char bOnlyLocalLight;
    unsigned char bLocalLight;
    HIE_tdstSuperObject_* p_SuperObjPersoTreated;
    tdstMSLight_* hMSLight;
    tdeProcedureId_ eProcedureId;
    tdstGetSetParam_ stParam;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\ProcRay2.cxx lines 712–801 */
/* addr: 0x0022e940  size: 332 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 712
 *   +0x000c -> line 714
 *   +0x0010 -> line 718
 *   +0x0018 -> line 721
 *   +0x001c -> line 724
 *   +0x0048 -> line 729
 *   +0x0050 -> line 730
 *   +0x0058 -> line 737
 *   +0x0060 -> line 738
 *   +0x0068 -> line 744
 *   +0x0074 -> line 747
 *   +0x0078 -> line 744
 *   +0x007c -> line 747
 *   +0x0080 -> line 744
 *   +0x0088 -> line 747
 *   +0x009c -> line 749
 *   +0x00a4 -> line 751
 *   +0x00ac -> line 757
 *   +0x00c4 -> line 760
 *   +0x00d4 -> line 762
 *   +0x00dc -> line 764
 *   +0x00e4 -> line 770
 *   +0x00f8 -> line 772
 *   +0x0100 -> line 778
 *   +0x0118 -> line 781
 *   +0x0128 -> line 783
 *   +0x0130 -> line 785
 *   +0x0138 -> line 799
 *   +0x013c -> line 801
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
tdstNodeInterpret_* fn_p_stCode4MagicPointsProcedures(HIE_tdstSuperObject_* p_SuperObjPerso, tdstNodeInterpret_* p_stTree)
{
    tdstGetSetParam_ stParam;
    tdeProcedureId_ eProcedureId;
    unsigned char iMagicPoints;
    eProcedureId = (p_stTree - 1)->uDummy.uId.eProcedureId;
    p_stTree = fn_p_stEvalTree(p_SuperObjPerso, p_stTree, &stParam);
    iMagicPoints = (unsigned char)stParam.uParam.ulValue;
    switch (eProcedureId) {
    case 0x19d:
    case 0x19f:
        stExtendDatas4Ray.iMagicPoints4Ray = iMagicPoints;
        return p_stTree;
    case 0x19e:
    case 0x1a0:
        stExtendDatas4Ray.iMagicPointsMax4Ray = iMagicPoints;
        return p_stTree;
    case 0x1a1:
        stExtendDatas4Ray.iMagicPoints4Ray += iMagicPoints;
        if (stExtendDatas4Ray.iMagicPoints4Ray > stExtendDatas4Ray.iMagicPointsMax4Ray)
            stExtendDatas4Ray.iMagicPoints4Ray = stExtendDatas4Ray.iMagicPointsMax4Ray;
        return p_stTree;
    case 0x1a3:
        stExtendDatas4Ray.iMagicPoints4Ray -= iMagicPoints;
        if (stExtendDatas4Ray.iMagicPoints4Ray < 0)
            stExtendDatas4Ray.iMagicPoints4Ray = 0;
        return p_stTree;
    case 0x1a2:
        stExtendDatas4Ray.iMagicPointsMax4Ray += iMagicPoints;
        return p_stTree;
    case 0x1a4:
        stExtendDatas4Ray.iMagicPointsMax4Ray -= iMagicPoints;
        if (stExtendDatas4Ray.iMagicPointsMax4Ray < 0)
            stExtendDatas4Ray.iMagicPointsMax4Ray = 0;
        return p_stTree;
    }
    return p_stTree;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\ProcRay2.cxx lines 611–682 */
/* addr: 0x0022ea90  size: 348 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 611
 *   +0x0004 -> line 616
 *   +0x0008 -> line 611
 *   +0x0014 -> line 614
 *   +0x0018 -> line 616
 *   +0x001c -> line 620
 *   +0x0024 -> line 621
 *   +0x0028 -> line 624
 *   +0x0054 -> line 628
 *   +0x0058 -> line 629
 *   +0x0060 -> line 637
 *   +0x0064 -> line 638
 *   +0x006c -> line 643
 *   +0x0074 -> line 647
 *   +0x0080 -> line 650
 *   +0x0088 -> line 647
 *   +0x008c -> line 650
 *   +0x0090 -> line 647
 *   +0x0094 -> line 650
 *   +0x009c -> line 651
 *   +0x00a8 -> line 652
 *   +0x00c0 -> line 653
 *   +0x00c8 -> line 654
 *   +0x00d4 -> line 659
 *   +0x00dc -> line 662
 *   +0x00f4 -> line 664
 *   +0x010c -> line 665
 *   +0x0114 -> line 666
 *   +0x0134 -> line 667
 *   +0x013c -> line 668
 *   +0x0144 -> line 681
 *   +0x0148 -> line 682
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
tdstNodeInterpret_* fn_p_stCode4AirPointsProcedures(HIE_tdstSuperObject_* p_SuperObjPerso, tdstNodeInterpret_* p_stTree)
{
    float xSign;
    float xAirPoints;
    tdeProcedureId_ eProcedureId;
    tdstGetSetParam_ stParam;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\ProcRay2.cxx lines 515–584 */
/* addr: 0x0022ebf0  size: 336 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 515
 *   +0x0008 -> line 525
 *   +0x000c -> line 515
 *   +0x0024 -> line 519
 *   +0x0028 -> line 525
 *   +0x0030 -> line 526
 *   +0x0034 -> line 525
 *   +0x0038 -> line 529
 *   +0x0048 -> line 530
 *   +0x0050 -> line 533
 *   +0x0054 -> line 530
 *   +0x0058 -> line 533
 *   +0x0064 -> line 537
 *   +0x006c -> line 534
 *   +0x0070 -> line 537
 *   +0x007c -> line 541
 *   +0x0090 -> line 545
 *   +0x0098 -> line 548
 *   +0x00a0 -> line 551
 *   +0x00ac -> line 553
 *   +0x00cc -> line 554
 *   +0x00e0 -> line 556
 *   +0x00ec -> line 559
 *   +0x00f8 -> line 561
 *   +0x0100 -> line 562
 *   +0x0108 -> line 565
 *   +0x0110 -> line 569
 *   +0x0128 -> line 583
 *   +0x012c -> line 584
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
tdstNodeInterpret_* fn_p_stCode4ChangeCaractere(HIE_tdstSuperObject_* p_SuperObjPerso, tdstNodeInterpret_* p_stTree)
{
    int iTrueLetterPos;
    int iStrLen;
    int iCpt;
    char* pszString;
    unsigned char ucLetter;
    unsigned char ucPosLetter;
    tdeProcedureId_ eProcedureId;
    tdstEngineObject_* p_stEngineObject;
    tdstGetSetParam_ stParam;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\ProcRay2.cxx lines 283–503 */
/* addr: 0x0022ed40  size: 1316 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 283
 *   +0x0004 -> line 287
 *   +0x0008 -> line 283
 *   +0x0034 -> line 285
 *   +0x0038 -> line 287
 *   +0x0054 -> line 299
 *   +0x0060 -> line 300
 *   +0x0068 -> line 303
 *   +0x006c -> line 300
 *   +0x0070 -> line 303
 *   +0x007c -> line 304
 *   +0x0080 -> line 305
 *   +0x0084 -> line 308
 *   +0x008c -> line 305
 *   +0x0090 -> line 308
 *   +0x0094 -> line 305
 *   +0x00a4 -> line 308
 *   +0x00b0 -> line 309
 *   +0x00bc -> line 311
 *   +0x00c8 -> line 312
 *   +0x00d4 -> line 313
 *   +0x00d8 -> line 312
 *   +0x00dc -> line 315
 *   +0x00e0 -> line 318
 *   +0x00e4 -> line 312
 *   +0x00e8 -> line 313
 *   +0x00f0 -> line 317
 *   +0x00f4 -> line 313
 *   +0x00f8 -> line 312
 *   +0x00fc -> line 317
 *   +0x0100 -> line 318
 *   +0x010c -> line 313
 *   +0x0120 -> line 314
 *   +0x0130 -> line 315
 *   +0x0140 -> line 317
 *   +0x0150 -> line 318
 *   +0x0154 -> line 317
 *   +0x015c -> line 318
 *   +0x0180 -> line 319
 *   +0x0190 -> line 321
 *   +0x0198 -> line 323
 *   +0x01a0 -> line 325
 *   +0x01e8 -> line 329
 *   +0x01fc -> line 330
 *   +0x0204 -> line 331
 *   +0x020c -> line 332
 *   +0x0214 -> line 333
 *   +0x021c -> line 334
 *   +0x0220 -> line 335
 *   +0x0238 -> line 337
 *   +0x024c -> line 338
 *   +0x0254 -> line 339
 *   +0x0258 -> line 340
 *   +0x0260 -> line 341
 *   +0x0278 -> line 343
 *   +0x028c -> line 344
 *   +0x0294 -> line 345
 *   +0x0298 -> line 346
 *   +0x02a0 -> line 347
 *   +0x02b8 -> line 349
 *   +0x02cc -> line 350
 *   +0x02d4 -> line 351
 *   +0x02d8 -> line 352
 *   +0x02e0 -> line 353
 *   +0x02f8 -> line 355
 *   +0x030c -> line 356
 *   +0x0314 -> line 357
 *   +0x0318 -> line 358
 *   +0x0320 -> line 359
 *   +0x0338 -> line 361
 *   +0x034c -> line 362
 *   +0x0354 -> line 363
 *   +0x0358 -> line 364
 *   +0x0360 -> line 365
 *   +0x0378 -> line 367
 *   +0x038c -> line 368
 *   +0x0394 -> line 369
 *   +0x0398 -> line 370
 *   +0x03a0 -> line 371
 *   +0x03d0 -> line 374
 *   +0x03e4 -> line 375
 *   +0x03ec -> line 376
 *   +0x03f4 -> line 377
 *   +0x03f8 -> line 378
 *   +0x0400 -> line 379
 *   +0x0418 -> line 381
 *   +0x042c -> line 382
 *   +0x0434 -> line 383
 *   +0x043c -> line 385
 *   +0x0440 -> line 386
 *   +0x0454 -> line 388
 *   +0x045c -> line 452
 *   +0x0468 -> line 453
 *   +0x0470 -> line 456
 *   +0x0478 -> line 453
 *   +0x047c -> line 456
 *   +0x0488 -> line 457
 *   +0x0490 -> line 460
 *   +0x0498 -> line 457
 *   +0x049c -> line 460
 *   +0x04a8 -> line 461
 *   +0x04b4 -> line 484
 *   +0x04c0 -> line 485
 *   +0x04d8 -> line 486
 *   +0x04e4 -> line 487
 *   +0x04f0 -> line 502
 *   +0x04f4 -> line 503
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
tdstNodeInterpret_* fn_p_stCode4FormateTexte(HIE_tdstSuperObject_* p_SuperObjPerso, tdstNodeInterpret_* p_stTree)
{
    char szTmpString[255];
    char* pszStringDestination;
    char* pszStringSource;
    char* pszStringFormat;
    unsigned int ulDay;
    unsigned int ulMounth;
    unsigned int ulYear;
    unsigned int ulComplexDate;
    unsigned int ulMilliSecond;
    unsigned int ulSecond;
    unsigned int ulMinute;
    unsigned int ulHour;
    unsigned int ulTimeInSec;
    unsigned int ulTimeInMilli;
    char szTempString[5];
    char* p_szStringModif;
    char* p_szStringDestination;
    char* p_szStringFormat;
    tdeProcedureId_ eProcedureId;
    tdstGetSetParam_ stParam;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\ProcRay2.cxx lines 252–271 */
/* addr: 0x0022f270  size: 96 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 252
 *   +0x0008 -> line 258
 *   +0x000c -> line 252
 *   +0x0010 -> line 258
 *   +0x0018 -> line 262
 *   +0x001c -> line 258
 *   +0x0020 -> line 259
 *   +0x0024 -> line 262
 *   +0x002c -> line 265
 *   +0x0038 -> line 266
 *   +0x003c -> line 268
 *   +0x0050 -> line 271
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
tdstNodeInterpret_* fn_p_stTextRealParameter(HIE_tdstSuperObject_* p_SuperObjPerso, tdstNodeInterpret_* p_stTree)
{
    float x_ValInt;
    int l_NumInt;
    tdstGetSetParam_ stParam;
    p_stTree = fn_p_stEvalTree(p_SuperObjPerso, p_stTree, &stParam);
    l_NumInt = stParam.uParam.lValue;
    p_stTree = fn_p_stEvalTree(p_SuperObjPerso, p_stTree, &stParam);
    x_ValInt = stParam.uParam.xValue;
    if (l_NumInt >= 10)
        l_NumInt = 9;
    TEXT_gaf_FloatParameters[l_NumInt] = x_ValInt;
    return p_stTree;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\ProcRay2.cxx lines 229–247 */
/* addr: 0x0022f2d0  size: 96 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 229
 *   +0x0008 -> line 234
 *   +0x000c -> line 229
 *   +0x0010 -> line 234
 *   +0x0018 -> line 238
 *   +0x001c -> line 234
 *   +0x0020 -> line 235
 *   +0x0024 -> line 238
 *   +0x002c -> line 241
 *   +0x0038 -> line 242
 *   +0x003c -> line 244
 *   +0x0050 -> line 247
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
tdstNodeInterpret_* fn_p_stTextIntegerParameter(HIE_tdstSuperObject_* p_SuperObjPerso, tdstNodeInterpret_* p_stTree)
{
    int l_ValInt;
    int l_NumInt;
    tdstGetSetParam_ stParam;
    p_stTree = fn_p_stEvalTree(p_SuperObjPerso, p_stTree, &stParam);
    l_NumInt = stParam.uParam.lValue;
    p_stTree = fn_p_stEvalTree(p_SuperObjPerso, p_stTree, &stParam);
    l_ValInt = stParam.uParam.lValue;
    if (l_NumInt >= 10)
        l_NumInt = 9;
    TEXT_gai_IntParameters[l_NumInt] = l_ValInt;
    return p_stTree;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\ProcRay2.cxx lines 61–66 */
/* addr: 0x0022f330  size: 36 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 61
 *   +0x0008 -> line 63
 *   +0x0010 -> line 64
 *   +0x0018 -> line 66
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
tdstNodeInterpret_* fn_p_stTextSuperImposed(HIE_tdstSuperObject_* p_SuperObjPerso, tdstNodeInterpret_* p_stTree)
{
    tdstGetSetParam_ stParam;
    fn_p_stEvalTree(p_SuperObjPerso, p_stTree, &stParam);
    TEXT_gc_ViewportFixed = stParam.uParam.lValue;
}
