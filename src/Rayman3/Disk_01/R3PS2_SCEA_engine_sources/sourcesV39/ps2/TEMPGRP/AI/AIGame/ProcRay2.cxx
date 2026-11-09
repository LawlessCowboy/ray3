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
} __attribute__((aligned(16)));

struct MTH4D_tdstMatrix_ {
    MTH4D_tdstVector_ stCol_0; /* +0x0 */
    MTH4D_tdstVector_ stCol_1; /* +0x10 */
    MTH4D_tdstVector_ stCol_2; /* +0x20 */
    MTH4D_tdstVector_ stCol_3; /* +0x30 */
};

struct MAT_tdstTransformation_ {
    MAT_tdeTranformationType_ eType; /* +0x0 */
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
struct COL_tdstCollideObject_ {
    short xNbPoints; /* +0x0 */
    short xNbElements; /* +0x2 */
    short xNbParallelBoxes; /* +0x4 */
    MTH3D_tdstVector_* d_stListOfPoints; /* +0x8 */
    short* d_xListOfElementsTypes; /* +0xc */
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

/* Word-wise vector copy: the retail code moves MTH vectors through int
   lvalues, which CodeWarrior lowers to interleaved lw/sw pairs. */
#define MTH3D_M_vCopyVector(_d, _s) { *(int*)&(_d)->xX = *(int*)&(_s)->xX; *(int*)&(_d)->xY = *(int*)&(_s)->xY; *(int*)&(_d)->xZ = *(int*)&(_s)->xZ; }

/* Word-wise view of a 3D vector, used for the retail's bit-exact copies. */
typedef union tduVectorWords_ {
    MTH3D_tdstVector_ stVector;
    unsigned int auWords[3];
} tduVectorWords_;

/* Squared length of a 3D vector, computed with the R5900 accumulator ops. */
#define MTH_SQR3_TO(_result, _x, _y, _z) \
    asm { mula.s _x, _x } \
    asm { madda.s _y, _y } \
    asm { madd.s _result, _z, _z }

/* Square root of a scalar. */
#define MTH_SQRT_TO(_result, _value) \
    asm { sqrt.s _result, _value }

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
extern "C" COL_tdstCollideObject_* fn_hGetCollideZdxOfTypeAtIndex(unsigned char, unsigned short, HIE_tdstSuperObject_*);
extern "C" void COL_vSetRadiusOfIndexedSphere(COL_tdstCollideObject_*, short, short, float);
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
extern "C" unsigned int g_bNoInterpolationForThisSPOMove;
extern "C" void GLIPS2_vSetNoInterpolationForSPO(HIE_tdstSuperObject_*);
extern "C" void GAM_fn_vAddMovedOneToTable(HIE_tdstSuperObject_*, MTH3D_tdstVector_*);
extern "C" void HIE_fn_vUpdateGlobalMatrix(HIE_tdstSuperObject_*);
extern "C" void MAT_fn_vCompose(MAT_tdstTransformation_*, MAT_tdstTransformation_*, MAT_tdstTransformation_*);
extern "C" void MAT_fn_vNormalize(MAT_tdstTransformation_*);
extern "C" void fn_vComputeRotationMatrix(int, float, MTH3D_tdstVector_*, MAT_tdstTransformation_*);
extern "C" tdstNodeInterpret_* fn_v_RotateObjectsLinkedToSpos(HIE_tdstSuperObject_*, tdstNodeInterpret_*, tdstGetSetParam_*, MAT_tdstTransformation_*, HIE_tdstSuperObject_*, unsigned char);
extern "C" tdstNodeInterpret_* fn_v_TranslateObjectsLinkedToSpos(HIE_tdstSuperObject_* p_SuperObjPerso, tdstNodeInterpret_* p_stTree, tdstGetSetParam_* p_stParam, MTH3D_tdstVector_* _p_stTranslation, HIE_tdstSuperObject_* _hSpo, unsigned char _ucNbArrays);
extern "C" void fn_vMSLightSetOnOff(tdstMSLight_*, unsigned char);
struct GLD_tdstViewportAttributes_;
struct tdstEngineStructureFade_ {
    char _pad_00[0x360];
    char stViewport[0xc];
    unsigned int ulWidth;
    char _pad_370[0x528 - 0x370];
    unsigned int ulViewportWidth; /* +0x528 */
    unsigned int ulViewportHeight; /* +0x52c */
    unsigned int ulViewportX; /* +0x530 */
    unsigned int _pad_534; /* +0x534 */
    unsigned int ulViewportY; /* +0x538 */
};
extern "C" tdstEngineStructureFade_ g_stEngineStructure;
extern "C" void HIE_fn_SO_vSetSuperimposedFlag(HIE_tdstSuperObject_*);
extern "C" void fn_vRemoveObjectInSectorList(HIE_tdstSuperObject_*);
extern "C" void MAT_fn_vScale(MAT_tdstTransformation_*, MTH3D_tdstVector_*);
extern "C" void GLI_vGet3DVertexFromScreenPos(GLD_tdstViewportAttributes_*, MTH3D_tdstVector_*, float, float, float);
extern "C" void GLI_xSetMaterialTextureScrollingCoef(GLI_tdstMaterial_*, int, int, float, float);
extern "C" void GLI_xSetMaterialTextureScrollingOnOff(GLI_tdstMaterial_*, int);
extern "C" void GLI_xSetMaterialTextureDecalage(GLI_tdstMaterial_*, float, float, int, int);
extern "C" void* fn_hMSLightGetLightNodeInSector(tdstMSLight_*);
extern "C" void SECT_fn_vIsolateDNMLightsListNode(void*);
extern "C" void SECT_fn_vAddTailDNMLightsListNode(HIE_tdstSuperObject_*, void*);
extern "C" HIE_tdstSuperObject_* GAM_fn_hGetCurrentSector(HIE_tdstSuperObject_*);
extern "C" void fn_vMSLightSetLocalLight(tdstMSLight_*, unsigned char);
extern "C" void fn_vMSLightSetOnlyLocalLight(tdstMSLight_*, unsigned char);
extern "C" void GLI_xSetLightState(GLI_tdstLight_*, unsigned char);
extern "C" void GLI_vSetLightNearFar(GLI_tdstLight_*, float, float);
extern "C" void GLI_xSetLightColor(GLI_tdstLight_*, GEO_tdstColor_*);
extern "C" void fn_vMSLightSetRLIParameter(tdstMSLight_*, int, int, int, int);
extern "C" unsigned char fn_ucGetProcedureUltraOperator(tdeProcedureId_);
extern "C" void fn_vGetUltraOperatorPerso(unsigned char, HIE_tdstSuperObject_*, HIE_tdstSuperObject_**);
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
extern "C" size_t strlen(const char*);
extern "C" void TFMT_vChangeLetter(HIE_tdstSuperObject_*, unsigned char, unsigned char);
extern "C" int fni_CompareFloatLess(void*, void*);
extern "C" int fni_CompareFloatGreater(void*, void*);
extern "C" int fni_CompareIntegerLess(void*, void*);
extern "C" int fni_CompareIntegerGreater(void*, void*);
extern "C" void qsort(void*, size_t, size_t, int (*)(void*, void*));
extern "C" void HIE_fn_SO_vSetOutLineMode(HIE_tdstSuperObject_*, unsigned char, unsigned int);
extern "C" void fn_vSetCapabilities(tdstEngineObject_*, unsigned int);
extern "C" void fn_vAddCapabilities(tdstEngineObject_*, unsigned int);
extern "C" void fn_vSubCapabilities(tdstEngineObject_*, unsigned int);
extern "C" void fn_vChangeCapabilities(tdstEngineObject_*, unsigned int, int);
extern "C" tdstNodeInterpret_* fn_p_stOperatorGetPerso(HIE_tdstSuperObject_*, tdstNodeInterpret_*, HIE_tdstSuperObject_**);
extern "C" unsigned char fn_ucGetDsgVarComport(void*, void*, tdstGetSetParam_*);
extern "C" tdstNodeInterpret_* fn_p_stEvalSubRoutine(HIE_tdstSuperObject_*, tdstNodeInterpret_*, tdstGetSetParam_*, tdstMacro_*);

/* The functions below are in their original source-line order (retail
 * emits them in reverse); these prototypes keep earlier calls valid. */
extern "C" tdstNodeInterpret_* fn_p_stSetCinemascopeRatio(HIE_tdstSuperObject_* p_SuperObjPerso, tdstNodeInterpret_* p_stTree);
extern "C" tdstNodeInterpret_* fn_p_stToggleCinemascope(HIE_tdstSuperObject_* p_SuperObjPerso, tdstNodeInterpret_* p_stTree);
extern "C" tdstNodeInterpret_* fn_p_stCode4InternalLights(HIE_tdstSuperObject_* p_SuperObjPerso, tdstNodeInterpret_* p_stTree);
extern "C" tdstNodeInterpret_* fn_p_stCallSubRoutine(HIE_tdstSuperObject_* p_SuperObjPerso, tdstNodeInterpret_* p_stTree);
extern "C" tdstNodeInterpret_* fn_p_stSetDiscreetSpeed(HIE_tdstSuperObject_* p_SuperObjPerso, tdstNodeInterpret_* p_stTree);
extern "C" tdstNodeInterpret_* fn_p_stPS2SetLanguageProc(HIE_tdstSuperObject_* p_SuperObjPerso, tdstNodeInterpret_* p_stTree);
extern "C" tdstNodeInterpret_* fn_p_stSHWSetDynShadow(HIE_tdstSuperObject_* p_SuperObjPerso, tdstNodeInterpret_* p_stTree);
extern "C" tdstNodeInterpret_* fn_p_stSetOutlineMode(HIE_tdstSuperObject_* p_SuperObjPerso, tdstNodeInterpret_* p_stTree);
extern "C" tdstNodeInterpret_* fn_p_stSetCharacterMaskedForResearch(HIE_tdstSuperObject_* p_SuperObjPerso, tdstNodeInterpret_* p_stTree);
extern "C" tdstNodeInterpret_* fn_p_stSOLEdit(HIE_tdstSuperObject_* p_SuperObjPerso, tdstNodeInterpret_* p_stTree);
extern "C" tdstNodeInterpret_* fn_p_stSubAnimProc(HIE_tdstSuperObject_* p_SuperObjPerso, tdstNodeInterpret_* p_stTree);
extern "C" tdstNodeInterpret_* fn_p_stSetSOLCoordinates_SOLParam(HIE_tdstSuperObject_* p_SuperObjPerso, tdstNodeInterpret_* p_stTree);
extern "C" tdstNodeInterpret_* fn_p_stSetSOLCoordinates_SPOParam(HIE_tdstSuperObject_* p_SuperObjPerso, tdstNodeInterpret_* p_stTree);
extern "C" void fn_v_TranslateSOL_FromWhere(tdstSuperObjectLinks_* _hSOL, MTH3D_tdstVector_* _p_stCoordinatesAfter, tdeProcedureId_ _eProcId);
extern "C" tdstNodeInterpret_* fn_p_stSPOChangeSighting(HIE_tdstSuperObject_* p_SuperObjPerso, tdstNodeInterpret_* p_stTree);
extern "C" tdstNodeInterpret_* fn_p_stSPORotateToIdentity(HIE_tdstSuperObject_* p_SuperObjPerso, tdstNodeInterpret_* p_stTree);
extern "C" tdstNodeInterpret_* fn_p_stSPORotate(HIE_tdstSuperObject_* p_SuperObjPerso, tdstNodeInterpret_* p_stTree);
extern "C" void fn_vComputeRotationMatrix(int iProcId, float xRelativeAngle, MTH3D_tdstVector_* pstAxis, MAT_tdstTransformation_* hRotationMatrix);
extern "C" tdstNodeInterpret_* fn_p_stSetSPOCoordinates(HIE_tdstSuperObject_* p_SuperObjPerso, tdstNodeInterpret_* p_stTree);
extern "C" tdstNodeInterpret_* fn_v_RotateObjectsLinkedToSpos(HIE_tdstSuperObject_* p_SuperObjPerso, tdstNodeInterpret_* p_stTree, tdstGetSetParam_* p_stParam, MAT_tdstTransformation_* p_stLocalSPORotation, HIE_tdstSuperObject_* _hSpo, unsigned char _ucNbArrays);
extern "C" tdstNodeInterpret_* fn_v_TranslateObjectsLinkedToSpos(HIE_tdstSuperObject_* p_SuperObjPerso, tdstNodeInterpret_* p_stTree, tdstGetSetParam_* p_stParam, MTH3D_tdstVector_* _p_stTranslation, HIE_tdstSuperObject_* _hSpo, unsigned char _ucNbArrays);
extern "C" tdstNodeInterpret_* fn_p_stSaveSinusEffectContext(HIE_tdstSuperObject_* p_SuperObjPerso, tdstNodeInterpret_* p_stTree);
extern "C" tdstNodeInterpret_* fn_p_stBaseFrequenceForMenu(HIE_tdstSuperObject_* p_SuperObjPerso, tdstNodeInterpret_* p_stTree);
extern "C" tdstNodeInterpret_* fn_p_stSetTransparencyZone(HIE_tdstSuperObject_* p_SuperObjPerso, tdstNodeInterpret_* p_stTree);
extern "C" tdstNodeInterpret_* fn_p_stSetTooFarLimit(HIE_tdstSuperObject_* p_SuperObjPerso, tdstNodeInterpret_* p_stTree);
extern "C" tdstNodeInterpret_* fn_p_stPlayDemo(HIE_tdstSuperObject_* p_SuperObjPerso, tdstNodeInterpret_* p_stTree);
extern "C" tdstNodeInterpret_* fn_p_stPlayAutoDemo(HIE_tdstSuperObject_* p_SuperObjPerso, tdstNodeInterpret_* p_stTree);
extern "C" tdstNodeInterpret_* fn_p_stSetZDxSize(HIE_tdstSuperObject_* p_SuperObjPerso, tdstNodeInterpret_* p_stTree);
extern "C" tdstNodeInterpret_* fn_p_stActiveJoystickAnal(HIE_tdstSuperObject_* p_SuperObjPerso, tdstNodeInterpret_* p_stTree);
extern "C" tdstNodeInterpret_* fn_p_stSortArray(HIE_tdstSuperObject_* p_SuperObjPerso, tdstNodeInterpret_* p_stTree);
extern "C" int fni_CompareFloatLess(void* _pv_Elem1, void* _pv_Elem2);
extern "C" int fni_CompareFloatGreater(void* _pv_Elem1, void* _pv_Elem2);
extern "C" int fni_CompareIntegerGreater(void* _pv_Elem1, void* _pv_Elem2);
extern "C" int fni_CompareIntegerLess(void* _pv_Elem1, void* _pv_Elem2);
extern "C" tdstNodeInterpret_* fn_p_stFixePositionFade(HIE_tdstSuperObject_* p_SuperObjPerso, tdstNodeInterpret_* p_stTree);
extern "C" tdstNodeInterpret_* fn_p_stFreezeAnim(HIE_tdstSuperObject_* p_SuperObjPerso, tdstNodeInterpret_* p_stTree);
extern "C" tdstNodeInterpret_* fn_p_stTurnToPosition(HIE_tdstSuperObject_* p_SuperObjPerso, tdstNodeInterpret_* p_stTree);
extern "C" tdstNodeInterpret_* fn_p_stTractionFactorProcedure(HIE_tdstSuperObject_* p_SuperObjPerso, tdstNodeInterpret_* p_stTree);
extern "C" tdstNodeInterpret_* fn_p_stMiscProcOnTypeOfWP(HIE_tdstSuperObject_* p_SuperObjPerso, tdstNodeInterpret_* p_stTree);
extern "C" tdstNodeInterpret_* fn_p_stWPSetRangeValue(HIE_tdstSuperObject_* p_SuperObjPerso, tdstNodeInterpret_* p_stTree);
extern "C" tdstNodeInterpret_* fn_p_stACTSetRangeValue(HIE_tdstSuperObject_* p_SuperObjPerso, tdstNodeInterpret_* p_stTree);
extern "C" tdstNodeInterpret_* fn_p_stSetCoordWP(HIE_tdstSuperObject_* p_SuperObjPerso, tdstNodeInterpret_* p_stTree);
extern "C" tdstNodeInterpret_* fn_p_stSetRadiusWP(HIE_tdstSuperObject_* p_SuperObjPerso, tdstNodeInterpret_* p_stTree);
extern "C" tdstNodeInterpret_* fn_p_stSPOSuperimpoed(HIE_tdstSuperObject_* p_SuperObjPerso, tdstNodeInterpret_* p_stTree);
extern "C" tdstNodeInterpret_* fn_p_stManageFrame(HIE_tdstSuperObject_* p_SuperObjPerso, tdstNodeInterpret_* p_stTree);
extern "C" tdstNodeInterpret_* fn_p_stRLIProcedure(HIE_tdstSuperObject_* p_SuperObjPerso, tdstNodeInterpret_* p_stTree);
extern "C" tdstNodeInterpret_* fn_p_stSetScrollSpeed(HIE_tdstSuperObject_* p_SuperObjPerso, tdstNodeInterpret_* p_stTree);
extern "C" tdstNodeInterpret_* fn_p_stReinitGraphProcedure(HIE_tdstSuperObject_* p_SuperObjPerso, tdstNodeInterpret_* p_stTree);
extern "C" tdstNodeInterpret_* fn_p_stCapabilityProcedure(HIE_tdstSuperObject_* p_SuperObjPerso, tdstNodeInterpret_* p_stTree);
extern "C" tdstNodeInterpret_* fn_p_stSetLight(HIE_tdstSuperObject_* p_SuperObjPerso, tdstNodeInterpret_* p_stTree);
extern "C" tdstNodeInterpret_* fn_p_stSetLocalLightOnOff(HIE_tdstSuperObject_* p_SuperObjPerso, tdstNodeInterpret_* p_stTree);
extern "C" tdstNodeInterpret_* fn_p_stSetLocalLight(HIE_tdstSuperObject_* p_SuperObjPerso, tdstNodeInterpret_* p_stTree);
extern "C" tdstNodeInterpret_* fn_p_stCode4MagicPointsProcedures(HIE_tdstSuperObject_* p_SuperObjPerso, tdstNodeInterpret_* p_stTree);
extern "C" tdstNodeInterpret_* fn_p_stCode4AirPointsProcedures(HIE_tdstSuperObject_* p_SuperObjPerso, tdstNodeInterpret_* p_stTree);
extern "C" tdstNodeInterpret_* fn_p_stCode4ChangeCaractere(HIE_tdstSuperObject_* p_SuperObjPerso, tdstNodeInterpret_* p_stTree);
extern "C" tdstNodeInterpret_* fn_p_stCode4FormateTexte(HIE_tdstSuperObject_* p_SuperObjPerso, tdstNodeInterpret_* p_stTree);
extern "C" tdstNodeInterpret_* fn_p_stTextRealParameter(HIE_tdstSuperObject_* p_SuperObjPerso, tdstNodeInterpret_* p_stTree);
extern "C" tdstNodeInterpret_* fn_p_stTextIntegerParameter(HIE_tdstSuperObject_* p_SuperObjPerso, tdstNodeInterpret_* p_stTree);
extern "C" tdstNodeInterpret_* fn_p_stTextSuperImposed(HIE_tdstSuperObject_* p_SuperObjPerso, tdstNodeInterpret_* p_stTree);

/* The tree is passed in a1; debug recovery omitted the unused a0 character. */

#define DSG_VAR_INFO_FIELD(mind, id, field, type) \
    (*(type*)((int)&(*(mind)->p_stDsgMem->p_p_stDsgVar)->p_stDsgVarInfo->field + (id) * (int)sizeof(tdstDsgVarInfo_)))

struct tdstSuperObjectLinks_ {
    HIE_tdstSuperObject_* h_SPORef; /* +0x0 */
    unsigned char _extractor_padding_00[12]; /* +0x4..0xf */
    MAT_tdstTransformation_ POS_SPO_Init; /* +0x10 */
    unsigned int ulNbLinkedObjects; /* +0x70 */
    unsigned int ulNbLinksAllocated; /* +0x74 */
    int LinkedObj; /* +0x78 */
    void* eTypeOfLinkedObj; /* +0x7c */
    MAT_tdstTransformation_* POS_InitOfLinkedObj; /* +0x80 */
    int* ePersistenceOfLinkedObj; /* +0x84 */
};
extern "C" void MAT_fn_vSetIdentity(MAT_tdstTransformation_*);
extern "C" void GAM_fn_vAddObjetToSOLinks(tdstSuperObjectLinks_*, void*, int, MAT_tdstTransformation_*, int);
extern "C" unsigned int GAM_AlreadyReferencedInSOLinks(tdstSuperObjectLinks_*, void*);
extern "C" void GAM_fn_vDeleteObjetFromSOLinks(tdstSuperObjectLinks_*, unsigned int);

inline void AI_vCopyVectorFloats(MTH3D_tdstVector_* _p_stDst, MTH3D_tdstVector_* _p_stSrc)
{
    float _xX = _p_stSrc->xX;
    float _xY = _p_stSrc->xY;
    float _xZ = _p_stSrc->xZ;
    _p_stDst->xX = _xX;
    _p_stDst->xY = _xY;
    _p_stDst->xZ = _xZ;
}

/* Whole-quadword copy of a transformation: C++ copies its fields one by one. */
struct AI_tdstRawMatrix_ { MTH4D_tdstVector_ a_stRow[6]; };

extern "C" void fn_vAddSubAnimation(HIE_tdstSuperObject_*, unsigned int, unsigned char, unsigned int, unsigned char, float);
extern "C" void fn_vRemoveSubAnimation(HIE_tdstSuperObject_*, unsigned int);
extern "C" void fn_vStopSubAnimationAtEnd(HIE_tdstSuperObject_*, unsigned int);
extern "C" void fn_vSetCustombitSubAnim(HIE_tdstSuperObject_*, unsigned int, unsigned int, int);

extern "C" void fn_vReinitSOL(tdstSuperObjectLinks_*);
extern "C" void fn_v_TranslateSOL(tdstSuperObjectLinks_*, MTH3D_tdstVector_*);

extern "C" void MAT_fn_vGetRotationVectorBaseI(MAT_tdstTransformation_*, MTH3D_tdstVector_*);
extern "C" void MAT_fn_vGetRotationVectorBaseJ(MAT_tdstTransformation_*, MTH3D_tdstVector_*);
extern "C" void MAT_fn_vGetRotationVectorBaseK(MAT_tdstTransformation_*, MTH3D_tdstVector_*);
extern "C" void MAT_fn_vInvert(MAT_tdstTransformation_* _hDest, MAT_tdstTransformation_* _hSrc);
extern "C" void MAT_fn_vSetIdentity(MAT_tdstTransformation_*);
extern "C" void HIE_fn_vComputeNewRelativeMatrix(HIE_tdstSuperObject_*);

inline float SPO_xAbs(float _xValue)
{
    float _xResult;
    asm { abs.s _xResult, _xValue }
    return _xResult;
}

inline float SPO_xCross(float _xA, float _xB, float _xC, float _xD)
{
    float _xResult;
    asm { mula.s _xA, _xB }
    asm { msub.s _xResult, _xC, _xD }
    return _xResult;
}

#define AI_M_vCopyWords(_d, _s) \
    { \
        int _iZ, _iY, _iX; \
        _iX = ((int*)(_s))[0]; \
        _iY = ((int*)(_s))[1]; \
        _iZ = ((int*)(_s))[2]; \
        ((int*)(_d))[2] = _iZ; \
        ((int*)(_d))[0] = _iX; \
        ((int*)(_d))[1] = _iY; \
    }

/* The retail object exports this symbol unmangled, so give the definition C
   linkage; the .line_ section name then matches the retail's as well. */

extern "C" float cosf(float);
extern "C" float sinf(float);
extern "C" void MAT_fn_vSetIdentity(MAT_tdstTransformation_*);
extern "C" void MAT_fn_vInvert(MAT_tdstTransformation_* _hDest, MAT_tdstTransformation_* _hSrc);

inline float AI_xAbs(float _xValue)
{
    float _xResult;
    asm { abs.s _xResult, _xValue }
    return _xResult;
}

inline float AI_xSqr2(float _xA, float _xB)
{
    float _xResult;
    asm { mula.s _xA, _xA }
    asm { madd.s _xResult, _xB, _xB }
    return _xResult;
}

extern "C" unsigned char fn_ucGetDsgVar(unsigned char, unsigned char, AI_tdstMind_*, tdstGetSetParam_*);
extern "C" unsigned char fn_b_ObjectAlreadyTreatedWithSPO(int, int*, void*);
extern "C" int WPG_fn_lNumberOfWaypointOfGraph(WP_tdstGraph_*);
extern "C" WP_tdstWayPoint_* WPG_fn_hGetWaypointOfGraph(WP_tdstGraph_*, int, int*);
extern "C" void fn_v_TranslateOneSpoImmediateTeleportation(HIE_tdstSuperObject_*, MTH3D_tdstVector_*);
extern "C" void fn_v_TranslateOneWaypointImmediateTeleportation(WP_tdstWayPoint_*, MTH3D_tdstVector_*);
extern "C" void fn_v_TranslateOneCharacterImmediateTeleportation(HIE_tdstSuperObject_*, MTH3D_tdstVector_*);
extern "C" void fn_v_RotateOneSpoLinkedToOneSPO(HIE_tdstSuperObject_*, MAT_tdstTransformation_*);
extern "C" void fn_v_RotateOneWayPointLinkedToOneSPO(WP_tdstWayPoint_*, MAT_tdstTransformation_*);
extern "C" void fn_v_RotateOneCharacterLinkedToOneSPO(HIE_tdstSuperObject_*, MAT_tdstTransformation_*);

extern "C" char* fn_szGetStringFromTextOrStringParam(tdstGetSetParam_*);
extern "C" int fn_lGetSubMapNumber(void);
extern "C" char* fn_p_szGetLevelName(void);
extern "C" char* Strchr(const char*, int);
extern "C" char* strcpy(char*, const char*);
extern "C" int strcasecmp(const char*, const char*);
extern "C" long atol(const char*);
extern "C" int sprintf(char*, const char*, ...);
extern "C" void DEMO_fn_vAllocateMemory(void);
extern "C" void DEMO_fn_vLoadFromFile(char*);
extern "C" void DEMO_fn_vSetTestInputDuringDemo(int);
extern "C" void DEMO_fn_vSetMapToLoadWhenDemoFinished(char*);
extern "C" void DEMO_fn_vPrepareForRead(int);

/* The tree is passed in a1; debug recovery omitted the unused a0 character. */

extern "C" float acosf(float);
extern "C" unsigned char fn_ucInternalTurn(HIE_tdstSuperObject_*, float);
extern "C" void fn_vSetProcedureActionReturn(unsigned char);
void MAT_fn_vApplyOnVertex(MTH3D_tdstVector_* VectDest, MAT_tdstTransformation_* _hTransform, MTH3D_tdstVector_* VectA);

inline float AI_xMin(float _xA, float _xB)
{
    float _xResult;
    asm { min.s _xResult, _xA, _xB }
    return _xResult;
}

inline float AI_xCrossComponent(float _xA, float _xB, float _xC, float _xD)
{
    float _xResult;
    asm { mula.s _xA, _xB }
    asm { msub.s _xResult, _xC, _xD }
    return _xResult;
}

inline float AI_xNorm3(float _xX, float _xY, float _xZ)
{
    float _xResult;
    MTH_SQR3_TO(_xResult, _xX, _xY, _xZ);
    MTH_SQRT_TO(_xResult, _xResult);
    return _xResult;
}

inline float AI_xDot3(float _xAX, float _xBX, float _xAY, float _xBY, float _xAZ, float _xBZ)
{
    float _xResult;
    asm { mula.s _xAX, _xBX }
    asm { madda.s _xAY, _xBY }
    asm { madd.s _xResult, _xAZ, _xBZ }
    return _xResult;
}

struct WP_tdstGraphNode_ {
    WP_tdstGraphNode_* hNextBrotherDyn; /* +0x0 */
    WP_tdstGraphNode_* hPrevBrotherDyn; /* +0x4 */
    void* hFatherDyn; /* +0x8 */
    WP_tdstWayPoint_* m_hWayPoint; /* +0xc */
    int m_lTypeOfWP; /* +0x10 */
    int m_lTypeOfWPInit; /* +0x14 */
    void* m_hListOfArc; /* +0x18 */
};

struct WP_tdstGraph_ {
    WP_tdstGraphNode_* m_hFirstNode; /* +0x0, m_hListOfNode.hFirstElementDyn */
};

struct WP_tdstWayPoint_ {
    MTH3D_tdstVector_ m_stVertex; /* +0x0 */
    float m_xRadius; /* +0xc */
    HIE_tdstSuperObject_* m_hSuperObject; /* +0x10 */
};
extern "C" unsigned char WP_fnb_WayPoint_IsDynamic(WP_tdstWayPoint_* _hWayPoint);
extern "C" void WP_fnv_WayPoint_SetVertex(WP_tdstWayPoint_* _hWayPoint, MTH3D_tdstVector_* _p_stVertex);
extern "C" void MAT_fn_vInvert(MAT_tdstTransformation_* _hDest, MAT_tdstTransformation_* _hSrc);

/* MatSp.h inline (as in WPWayPt.c): the VU0 macro-mode instructions have no C form. */
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
    ((unsigned int*)VectDest)[0] = *(unsigned int*)&Vtmp.xX; ((unsigned int*)VectDest)[1] = *(unsigned int*)&Vtmp.xY; ((unsigned int*)VectDest)[2] = *(unsigned int*)&Vtmp.xZ;
}

extern "C" void HIE_fn_SO_vClearSuperimposedFlag(HIE_tdstSuperObject_*);
extern "C" void* MC_fn_hGetFirstMainCharNode(void);
extern "C" HIE_tdstSuperObject_* MC_fn_hGetCharacterInMainCharacterNode(void*);
extern "C" void* fn_h_SectInfoGetCurrentSector(void*);
extern "C" void fn_vSectInfoSetCurrentSector(void*, void*);
extern "C" void fn_vInsertObjectInSectorList(void*, HIE_tdstSuperObject_*);
extern "C" void HIE_fn_SO_SwitchSuperImposedTab(int);
extern "C" void HIE_fn_SO_SetSuperImposedClipping(HIE_tdstSuperObject_*, int, int, int, int);
extern "C" void HIE_fn_SO_UnsetSuperImposedClipping(HIE_tdstSuperObject_*);
extern "C" void MEC_vInitTranslation(DNM_stDynamics*, HIE_tdstSuperObject_*, MTH3D_tdstVector_*);
extern "C" void HIE_fn_vComputeNewRelativeMatrix(HIE_tdstSuperObject_*);
extern "C" DNM_stDynamics* fn_p_stDynamGetDynamics(tdstDynam_*);

extern "C" char* fn_szGetStringFromTextOrStringParam(tdstGetSetParam_*);
extern "C" char* strcpy(char*, const char*);
extern "C" int strcasecmp(const char*, const char*);
extern "C" int sprintf(char*, const char*, ...);
extern "C" char* Strcat(char*, const char*);

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
    tdstGetSetParam_ stParam;
    tdeProcedureId_ eProcedureId;
    char* p_szStringFormat;
    char* p_szStringDestination;
    char* p_szStringModif;
    char szTempString[5];
    unsigned int ulTimeInMilli;
    unsigned int ulTimeInSec;
    unsigned int ulHour;
    unsigned int ulMinute;
    unsigned int ulSecond;
    unsigned int ulMilliSecond;
    unsigned int ulComplexDate;
    unsigned int ulYear;
    unsigned int ulMounth;
    unsigned int ulDay;
    char* pszStringFormat;
    char* pszStringSource;
    char* pszStringDestination;
    char szTmpString[255];

    eProcedureId = (p_stTree - 1)->uDummy.uId.eProcedureId;
    switch ((int)eProcedureId)
    {
    case 0x217:
        p_stTree = fn_p_stEvalTree(p_SuperObjPerso, p_stTree, &stParam);
        p_szStringModif = fn_szGetStringFromTextOrStringParam(&stParam);
        p_stTree = fn_p_stEvalTree(p_SuperObjPerso, p_stTree, &stParam);
        ulComplexDate = stParam.uParam.ulValue;
        ulTimeInSec = ulComplexDate / 1000;
        p_stTree = fn_p_stEvalTree(p_SuperObjPerso, p_stTree, &stParam);
        p_szStringFormat = fn_szGetStringFromTextOrStringParam(&stParam);
        strcpy(p_szStringFormat, p_szStringModif);
        ulHour = ulTimeInSec / 3600;
        ulMinute = (ulTimeInSec % 3600) / 60;
        ulSecond = ulTimeInSec % 60;
        ulMilliSecond = ulComplexDate % 1000;
        ulYear = ulComplexDate / 372;
        ulMounth = (ulComplexDate / 31) % 12;
        ulDay = ulComplexDate % 31;
        while (*p_szStringFormat != 0)
        {
            if (*p_szStringFormat == '%')
            {
                if (((p_szStringFormat[1] == 'y') || (p_szStringFormat[1] == 'Y')) && ((p_szStringFormat[2] == 'y') || (p_szStringFormat[2] == 'Y')) && ((p_szStringFormat[3] == 'y') || (p_szStringFormat[3] == 'Y')))
                {
                    sprintf(szTempString, "%04d", ulYear);
                    p_szStringFormat[0] = szTempString[0];
                    p_szStringFormat[1] = szTempString[1];
                    p_szStringFormat[2] = szTempString[2];
                    p_szStringFormat[3] = szTempString[3];
                }
                if ((p_szStringFormat[1] == 'y') || (p_szStringFormat[1] == 'Y'))
                {
                    sprintf(szTempString, "%04d", ulYear);
                    p_szStringFormat[0] = szTempString[2];
                    p_szStringFormat[1] = szTempString[3];
                }
                else if ((p_szStringFormat[1] == 'n') || (p_szStringFormat[1] == 'N'))
                {
                    sprintf(szTempString, "%02d", ulMounth);
                    p_szStringFormat[0] = szTempString[0];
                    p_szStringFormat[1] = szTempString[1];
                }
                else if ((p_szStringFormat[1] == 'd') || (p_szStringFormat[1] == 'D'))
                {
                    sprintf(szTempString, "%02d", ulDay);
                    p_szStringFormat[0] = szTempString[0];
                    p_szStringFormat[1] = szTempString[1];
                }
                else if ((p_szStringFormat[1] == 'h') || (p_szStringFormat[1] == 'H'))
                {
                    sprintf(szTempString, "%02d", ulHour);
                    p_szStringFormat[0] = szTempString[0];
                    p_szStringFormat[1] = szTempString[1];
                }
                else if ((p_szStringFormat[1] == 'm') || (p_szStringFormat[1] == 'M'))
                {
                    sprintf(szTempString, "%02d", ulMinute);
                    p_szStringFormat[0] = szTempString[0];
                    p_szStringFormat[1] = szTempString[1];
                }
                else if ((p_szStringFormat[1] == 's') || (p_szStringFormat[1] == 'S'))
                {
                    sprintf(szTempString, "%02d", ulSecond);
                    p_szStringFormat[0] = szTempString[0];
                    p_szStringFormat[1] = szTempString[1];
                }
                else
                {
                    if (((p_szStringFormat[1] == 'i') || (p_szStringFormat[1] == 'I')) && ((p_szStringFormat[2] == 'i') || (p_szStringFormat[2] == 'I')))
                    {
                        sprintf(szTempString, "%03d", ulMilliSecond);
                        p_szStringFormat[0] = szTempString[0];
                        p_szStringFormat[1] = szTempString[1];
                        p_szStringFormat[2] = szTempString[2];
                    }
                    else if ((p_szStringFormat[1] == 'i') || (p_szStringFormat[1] == 'I'))
                    {
                        sprintf(szTempString, "%02d", ulMilliSecond);
                        p_szStringFormat[0] = szTempString[0];
                        p_szStringFormat[1] = szTempString[1];
                    }
                }
            }
            p_szStringFormat++;
        }
        break;
    case 0x216:
        p_stTree = fn_p_stEvalTree(p_SuperObjPerso, p_stTree, &stParam);
        pszStringSource = fn_szGetStringFromTextOrStringParam(&stParam);
        p_stTree = fn_p_stEvalTree(p_SuperObjPerso, p_stTree, &stParam);
        pszStringFormat = fn_szGetStringFromTextOrStringParam(&stParam);
        p_stTree = fn_p_stEvalTree(p_SuperObjPerso, p_stTree, &stParam);
        pszStringDestination = fn_szGetStringFromTextOrStringParam(&stParam);
        strcpy(szTmpString, pszStringSource);
        if (strcasecmp(pszStringFormat, "\\0") != 0)
            Strcat(szTmpString, pszStringFormat);
        strcpy(pszStringDestination, szTmpString);
        break;
    }
    return p_stTree;
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
    eProcedureId = (p_stTree - 1)->uDummy.uId.eProcedureId;
    p_stTree = fn_p_stEvalTree(p_SuperObjPerso, p_stTree, &stParam);
    p_stEngineObject = (tdstEngineObject_*)stParam.uParam.pValue;
    p_stTree = fn_p_stEvalTree(p_SuperObjPerso, p_stTree, &stParam);
    pszString = fn_szGetStringFromTextOrStringParam(&stParam);
    p_stTree = fn_p_stEvalTree(p_SuperObjPerso, p_stTree, &stParam);
    ucPosLetter = (unsigned char)stParam.uParam.ulValue;
    p_stTree = fn_p_stEvalTree(p_SuperObjPerso, p_stTree, &stParam);
    ucLetter = (unsigned char)stParam.uParam.ulValue;
    if (eProcedureId != 0x215)
        return p_stTree;
    {
        if (pszString) {
            iCpt = 0;
            iStrLen = strlen(pszString);
            while (pszString[iCpt++] == '/')
                while (pszString[iCpt++] != ':')
                    ;
            iTrueLetterPos = ucPosLetter + iCpt - 1;
            if (iStrLen < iTrueLetterPos)
                (pszString - 1)[iStrLen] = ucLetter;
            else
                pszString[iTrueLetterPos] = ucLetter;
            TFMT_vChangeLetter(fn_h_StandardGameGetSuperObject(p_stEngineObject->h_StandardGame), ucPosLetter, ucLetter);
        }
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
    xSign = 1.0f;
    eProcedureId = (p_stTree - 1)->uDummy.uId.eProcedureId;
    p_stTree = fn_p_stEvalTree(p_SuperObjPerso, p_stTree, &stParam);
    xAirPoints = stParam.uParam.xValue;
    switch (eProcedureId) {
    case 0x1a5:
    case 0x1a7:
        stExtendDatas4Ray.xAirPoints4Ray = xAirPoints;
        return p_stTree;
    case 0x1a6:
    case 0x1a8:
        stExtendDatas4Ray.xAirPointsMax4Ray = xAirPoints;
        return p_stTree;
    case 0x1ab:
        xSign = -1.0f;
    case 0x1a9:
        stExtendDatas4Ray.xAirPoints4Ray += xSign * xAirPoints; xAirPoints = stExtendDatas4Ray.xAirPoints4Ray;
        if (xAirPoints > stExtendDatas4Ray.xAirPointsMax4Ray)
            stExtendDatas4Ray.xAirPoints4Ray = stExtendDatas4Ray.xAirPointsMax4Ray;
        else if (xAirPoints < 0.0f)
            stExtendDatas4Ray.xAirPoints4Ray = 0.0f;
        return p_stTree;
    case 0x1ac:
        xSign = -1.0f;
    case 0x1aa:
        xAirPoints = stExtendDatas4Ray.xAirPointsMax4Ray + xSign * xAirPoints; stExtendDatas4Ray.xAirPointsMax4Ray = xAirPoints;
        if (xAirPoints < 0.0f)
            stExtendDatas4Ray.xAirPointsMax4Ray = 0.0f;
        if (stExtendDatas4Ray.xAirPoints4Ray > stExtendDatas4Ray.xAirPointsMax4Ray)
            stExtendDatas4Ray.xAirPoints4Ray = stExtendDatas4Ray.xAirPointsMax4Ray;
        return p_stTree;
    }
    return p_stTree;
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
    tdstGetSetParam_ stParam;
    tdeProcedureId_ eProcedureId;
    tdstMSLight_* hMSLight;
    HIE_tdstSuperObject_* p_SuperObjPersoTreated;
    unsigned char bLocalLight;
    unsigned char bOnlyLocalLight;
    HIE_tdstSuperObject_* hSector;
    eProcedureId = (p_stTree - 1)->uDummy.uId.eProcedureId;
    if (eProcedureId == 0x1ae) {
        p_stTree = fn_p_stEvalTree(p_SuperObjPerso, p_stTree, &stParam);
        p_SuperObjPersoTreated = fn_h_StandardGameGetSuperObject(((tdstEngineObject_*)stParam.uParam.pValue)->h_StandardGame);
        p_stTree = fn_p_stEvalTree(p_SuperObjPerso, p_stTree, &stParam);
        bLocalLight = (unsigned char)stParam.uParam.lValue;
        p_stTree = fn_p_stEvalTree(p_SuperObjPerso, p_stTree, &stParam);
        bOnlyLocalLight = (unsigned char)stParam.uParam.lValue;
        hMSLight = p_SuperObjPersoTreated->hLinkedObject.p_stCharacter->h_MSLight;
        if (!hMSLight)
            return p_stTree;
        if (bLocalLight) {
            SECT_fn_vIsolateDNMLightsListNode(fn_hMSLightGetLightNodeInSector(hMSLight));
            if (bOnlyLocalLight)
                p_SuperObjPersoTreated->ulFlags |= 0x20000;
            else
                p_SuperObjPersoTreated->ulFlags &= ~0x20000;
            fn_vMSLightSetLocalLight(hMSLight, 1);
            fn_vMSLightSetOnlyLocalLight(hMSLight, bOnlyLocalLight);
        } else {
        hSector = GAM_fn_hGetCurrentSector(p_SuperObjPersoTreated);
        if (bOnlyLocalLight)
            p_SuperObjPersoTreated->ulFlags |= 0x20000;
        else
            p_SuperObjPersoTreated->ulFlags &= ~0x20000;
        if (hSector) {
            SECT_fn_vIsolateDNMLightsListNode(fn_hMSLightGetLightNodeInSector(hMSLight));
            SECT_fn_vAddTailDNMLightsListNode(hSector, fn_hMSLightGetLightNodeInSector(hMSLight));
        }
        fn_vMSLightSetLocalLight(hMSLight, 0);
        fn_vMSLightSetOnlyLocalLight(hMSLight, bOnlyLocalLight);
        }
        return p_stTree;
    }
    return p_stTree;
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
    tdstGetSetParam_ stParam;
    tdeProcedureId_ eProcedureId;
    GLI_tdstLight_* hLight;
    float xNear;
    GEO_tdstColor_ stColor;
    eProcedureId = (p_stTree - 1)->uDummy.uId.eProcedureId;
    hLight = 0;
    if (eProcedureId != 0x1b3 && eProcedureId != 0x1b4) {
        p_stTree = fn_p_stEvalTree(p_SuperObjPerso, p_stTree, &stParam);
        hLight = (GLI_tdstLight_*)stParam.uParam.pValue;
    }
    switch (eProcedureId) {
    case 0x1b0:
        p_stTree = fn_p_stEvalTree(p_SuperObjPerso, p_stTree, &stParam);
        GLI_xSetLightState(hLight, (unsigned char)stParam.uParam.ulValue);
        return p_stTree;
    case 0x1b1:
        p_stTree = fn_p_stEvalTree(p_SuperObjPerso, p_stTree, &stParam);
        xNear = stParam.uParam.xValue;
        p_stTree = fn_p_stEvalTree(p_SuperObjPerso, p_stTree, &stParam);
        GLI_vSetLightNearFar(hLight, xNear, stParam.uParam.xValue);
        return p_stTree;
    case 0x1b2:
        p_stTree = fn_p_stEvalTree(p_SuperObjPerso, p_stTree, &stParam);
        stColor.xR = stParam.uParam.xValue;
        p_stTree = fn_p_stEvalTree(p_SuperObjPerso, p_stTree, &stParam);
        stColor.xG = stParam.uParam.xValue;
        p_stTree = fn_p_stEvalTree(p_SuperObjPerso, p_stTree, &stParam);
        stColor.xB = stParam.uParam.xValue;
        p_stTree = fn_p_stEvalTree(p_SuperObjPerso, p_stTree, &stParam);
        stColor.xA = stParam.uParam.xValue;
        GLI_xSetLightColor(hLight, &stColor);
        return p_stTree;
    case 0x1b3:
        return p_stTree;
    case 0x1b4:
        return p_stTree;
    }
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
    tdstGetSetParam_ stParam;
    float xU;
    float xV;
    tdeProcedureId_ eProcedureId = (p_stTree - 1)->uDummy.uId.eProcedureId;
    p_stTree = fn_p_stEvalTree(p_SuperObjPerso, p_stTree, &stParam);
    GLI_tdstMaterial_* hVisualMaterial = (GLI_tdstMaterial_*)stParam.uParam.pValue;
    if (eProcedureId == 0x1c2) {
        p_stTree = fn_p_stEvalTree(p_SuperObjPerso, p_stTree, &stParam);
        xU = stParam.uParam.xValue;
        xU = xU / 100.0f;
        p_stTree = fn_p_stEvalTree(p_SuperObjPerso, p_stTree, &stParam);
        xV = stParam.uParam.xValue;
        xV = xV / 100.0f;
        GLI_xSetMaterialTextureScrollingCoef(hVisualMaterial, 0, 1, xU, xV);
        return p_stTree;
    }
    if (eProcedureId == 0x1c3) {
        p_stTree = fn_p_stEvalTree(p_SuperObjPerso, p_stTree, &stParam);
        GLI_xSetMaterialTextureScrollingOnOff(hVisualMaterial, (unsigned char)stParam.uParam.ulValue);
        return p_stTree;
    }
    if (eProcedureId == 0x1c4) {
        p_stTree = fn_p_stEvalTree(p_SuperObjPerso, p_stTree, &stParam);
        xU = stParam.uParam.xValue;
        xU = xU / 100.0f;
        p_stTree = fn_p_stEvalTree(p_SuperObjPerso, p_stTree, &stParam);
        xV = stParam.uParam.xValue;
        xV = xV / 100.0f;
        GLI_xSetMaterialTextureDecalage(hVisualMaterial, xU, xV, 0, 2);
        return p_stTree;
    }
    if (eProcedureId == 0x1c5) {
        p_stTree = fn_p_stEvalTree(p_SuperObjPerso, p_stTree, &stParam);
        GLI_xSetMaterialTextureScrollingOnOff(hVisualMaterial, (unsigned char)stParam.uParam.ulValue ? 3 : 1);
        return p_stTree;
    }
    fn_vOnAIErm_M_UpdateLastError(39, 0);
    return p_stTree;
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
    tdeProcedureId_ eProcedureId;
    tdstMSLight_* hMSLight;
    tdstGetSetParam_ stParam;
    int lIndex1;
    int lIndex2;
    int lNbRLI;
    int lPercent;
    HIE_tdstSuperObject_* hNewSuperObjPerso;
    eProcedureId = (p_stTree - 1)->uDummy.uId.eProcedureId;
    lIndex1 = -1;
    lIndex2 = lIndex1;
    lNbRLI = lIndex1;
    lPercent = lIndex1;
    fn_vGetUltraOperatorPerso(fn_ucGetProcedureUltraOperator(eProcedureId), p_SuperObjPerso, &hNewSuperObjPerso);
    hMSLight = hNewSuperObjPerso->hLinkedObject.p_stCharacter->h_MSLight;
    switch (eProcedureId) {
    case 0x1b5:
        lNbRLI = 0;
        lIndex1 = 0;
        lIndex2 = 0;
        lPercent = 0;
        break;
    case 0x1b6:
        lNbRLI = 1;
        p_stTree = fn_p_stEvalTree(p_SuperObjPerso, p_stTree, &stParam);
        lIndex1 = stParam.uParam.lValue;
        lIndex2 = 0;
        lPercent = 0;
        break;
    case 0x1b7:
        lNbRLI = 2;
        p_stTree = fn_p_stEvalTree(p_SuperObjPerso, p_stTree, &stParam);
        lIndex1 = stParam.uParam.lValue;
        p_stTree = fn_p_stEvalTree(p_SuperObjPerso, p_stTree, &stParam);
        lIndex2 = stParam.uParam.lValue;
        p_stTree = fn_p_stEvalTree(p_SuperObjPerso, p_stTree, &stParam);
        lPercent = stParam.uParam.lValue;
        break;
    }
    fn_vMSLightSetRLIParameter(hMSLight, lNbRLI, lIndex1, lIndex2, lPercent);
    return p_stTree;
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
    tdeProcedureId_ eProcedureId;
    tdstGetSetParam_ stParam;
    unsigned char DestinationViewport;
    unsigned char ViewportIndex;
    HIE_tdstSuperObject_* hNewSuperObjPerso;
    int lX;
    int lY;
    MTH3D_tdstVector_ stVertex;
    tdstDynam_* h_Dynam;
    DNM_stDynamics* p_stDynamics;
    int lTop;
    int lLeft;
    int lBottom;
    float fRate;
    MAT_tdstTransformation_* hMatrix;
    MTH3D_tdstVector_ stLocalVertex;

    DestinationViewport = 0xff;
    ViewportIndex = 4;
    eProcedureId = (p_stTree - 1)->uDummy.uId.eProcedureId;
    fn_vGetUltraOperatorPerso(fn_ucGetProcedureUltraOperator(eProcedureId), p_SuperObjPerso, &hNewSuperObjPerso);
    switch ((int)eProcedureId)
    {
    case 0x1ce:
        HIE_fn_SO_vClearSuperimposedFlag(hNewSuperObjPerso);
        {
            HIE_tdstSuperObject_* hMain = MC_fn_hGetCharacterInMainCharacterNode(MC_fn_hGetFirstMainCharNode());
            char* pOwner = (char*)hNewSuperObjPerso->hLinkedObject.p_stCharacter;
            void* hSector = fn_h_SectInfoGetCurrentSector(*(void**)((char*)hMain->hLinkedObject.p_stCharacter + 0x20));
            fn_vSectInfoSetCurrentSector(*(void**)(pOwner + 0x20), hSector);
        }
        fn_vInsertObjectInSectorList(fn_h_SectInfoGetCurrentSector(*(void**)((char*)hNewSuperObjPerso->hLinkedObject.p_stCharacter + 0x20)), hNewSuperObjPerso);
        return p_stTree;
    case 0x1cc:
        p_stTree = fn_p_stEvalTree(p_SuperObjPerso, p_stTree, &stParam);
        if (*(unsigned char*)&stParam.uParam.lValue == 0)
        {
            DestinationViewport = 0xff;
            ViewportIndex = 4;
        }
        else
        {
            DestinationViewport = *(unsigned char*)&stParam.uParam.lValue - 1;
            if (DestinationViewport >= 4)
                DestinationViewport = 0;
            ViewportIndex = DestinationViewport;
        }
    case 0x1cb:
        h_Dynam = hNewSuperObjPerso->hLinkedObject.p_stCharacter->h_Dynam;
        HIE_fn_SO_vSetSuperimposedFlag(hNewSuperObjPerso);
        *((unsigned char*)p_SuperObjPerso + 0x7c) = DestinationViewport;
        *((unsigned char*)hNewSuperObjPerso + 0x7c) = DestinationViewport;
        fn_vRemoveObjectInSectorList(hNewSuperObjPerso);
        hMatrix = hNewSuperObjPerso->hGlobalMatrix;
        p_stTree = fn_p_stEvalTree(p_SuperObjPerso, p_stTree, &stParam);
        lX = stParam.uParam.lValue;
        p_stTree = fn_p_stEvalTree(p_SuperObjPerso, p_stTree, &stParam);
        lY = stParam.uParam.lValue;
        p_stTree = fn_p_stEvalTree(p_SuperObjPerso, p_stTree, &stParam);
        {
            float xX = (float)lX / 1000.0f;
            float xY = (float)lY / 1000.0f;
            GLI_vGet3DVertexFromScreenPos((GLD_tdstViewportAttributes_*)((char*)&g_stEngineStructure + ViewportIndex * 0x70 + 0x360), &stVertex, xX, xY, (float)stParam.uParam.lValue / 1000.0f);
        }
        if (hMatrix->eType == MAT_eTransform_Identity)
            hMatrix->eType = MAT_eTransform_Translation;
        *(int*)&hMatrix->stTransformMatrix.stCol_3.xX = ((int*)&stVertex)[0];
        *(int*)&hMatrix->stTransformMatrix.stCol_3.xY = ((int*)&stVertex)[1];
        *(int*)&hMatrix->stTransformMatrix.stCol_3.xZ = ((int*)&stVertex)[2];
        hMatrix->stTransformMatrix.stCol_3.xW = 1.0f;
        if ((h_Dynam != NULL) && ((p_stDynamics = fn_p_stDynamGetDynamics(h_Dynam)) != NULL))
            MEC_vInitTranslation(p_stDynamics, hNewSuperObjPerso, &stVertex);
        HIE_fn_vComputeNewRelativeMatrix(hNewSuperObjPerso);
        return p_stTree;
    case 0x1cd:
        {
        tdstDynam_* h_D2;
        MAT_tdstTransformation_* hM2;
        h_D2 = hNewSuperObjPerso->hLinkedObject.p_stCharacter->h_Dynam;
        HIE_fn_SO_vSetSuperimposedFlag(hNewSuperObjPerso);
        fn_vRemoveObjectInSectorList(hNewSuperObjPerso);
        hM2 = hNewSuperObjPerso->hGlobalMatrix;
        p_stTree = fn_p_stEvalTree(p_SuperObjPerso, p_stTree, &stParam);
        stLocalVertex.xX = stParam.uParam.xValue;
        p_stTree = fn_p_stEvalTree(p_SuperObjPerso, p_stTree, &stParam);
        stLocalVertex.xY = stParam.uParam.xValue;
        p_stTree = fn_p_stEvalTree(p_SuperObjPerso, p_stTree, &stParam);
        stLocalVertex.xZ = stParam.uParam.xValue;
        if (hM2->eType == MAT_eTransform_Identity)
            hM2->eType = MAT_eTransform_Translation;
        *(int*)&hM2->stTransformMatrix.stCol_3.xX = ((int*)&stLocalVertex)[0];
        *(int*)&hM2->stTransformMatrix.stCol_3.xY = ((int*)&stLocalVertex)[1];
        *(int*)&hM2->stTransformMatrix.stCol_3.xZ = ((int*)&stLocalVertex)[2];
        hM2->stTransformMatrix.stCol_3.xW = 1.0f;
        if ((h_D2 != NULL) && ((p_stDynamics = fn_p_stDynamGetDynamics(h_D2)) != NULL))
            MEC_vInitTranslation(p_stDynamics, hNewSuperObjPerso, &stLocalVertex);
        HIE_fn_vComputeNewRelativeMatrix(hNewSuperObjPerso);
        return p_stTree;
        }
    case 0x1ed:
        p_stTree = fn_p_stEvalTree(p_SuperObjPerso, p_stTree, &stParam);
        HIE_fn_SO_SwitchSuperImposedTab(stParam.uParam.lValue);
        return p_stTree;
    case 0x1cf:
        p_stTree = fn_p_stEvalTree(p_SuperObjPerso, p_stTree, &stParam);
        lLeft = stParam.uParam.lValue;
        p_stTree = fn_p_stEvalTree(p_SuperObjPerso, p_stTree, &stParam);
        lTop = stParam.uParam.lValue;
        p_stTree = fn_p_stEvalTree(p_SuperObjPerso, p_stTree, &stParam);
        lBottom = stParam.uParam.lValue;
        p_stTree = fn_p_stEvalTree(p_SuperObjPerso, p_stTree, &stParam);
        fRate = (float)lLeft / 1000.0f;
        lLeft = (int)((float)g_stEngineStructure.ulViewportX + (float)g_stEngineStructure.ulViewportWidth * fRate);
        fRate = (float)lBottom / 1000.0f;
        lBottom = (int)((float)g_stEngineStructure.ulViewportX + (float)g_stEngineStructure.ulViewportWidth * fRate);
        lTop = (int)((float)g_stEngineStructure.ulViewportHeight * ((float)lTop / 1000.0f) + (float)g_stEngineStructure.ulViewportY);
        fRate = (float)stParam.uParam.lValue / 1000.0f;
        HIE_fn_SO_SetSuperImposedClipping(hNewSuperObjPerso, lLeft, lTop, lBottom, (int)((float)g_stEngineStructure.ulViewportY + (float)g_stEngineStructure.ulViewportHeight * fRate));
        return p_stTree;
    case 0x1d0:
        HIE_fn_SO_UnsetSuperImposedClipping(hNewSuperObjPerso);
        return p_stTree;
    default:
        fn_vOnAIErm_M_UpdateLastError(39, 0);
    }
    return p_stTree;
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

    p_stTree = fn_p_stEvalTree(p_SuperObjPerso, p_stTree, &stParam1);
    p_stTree = fn_p_stEvalTree(p_SuperObjPerso, p_stTree, &stParam2);

    hWP = (WP_tdstWayPoint_*)stParam1.uParam.pValue;
    stV = stParam2.uParam.stVectorValue;

    if (WP_fnb_WayPoint_IsDynamic(hWP))
    {
        eProcedureId = (p_stTree - 1)->uDummy.uId.eProcedureId;
        switch (eProcedureId)
        {
        case 0x1ba:
            WP_fnv_WayPoint_SetVertex(hWP, &stV);
            break;

        case 0x1b9:
            MAT_fn_vInvert(hWP->m_hSuperObject->hGlobalMatrix, hWP->m_hSuperObject->hGlobalMatrix);
            MAT_fn_vApplyOnVertex(&stV, hWP->m_hSuperObject->hGlobalMatrix, &stV);
            hWP->m_stVertex = stV;
            break;
        }
    }
    else
    {
        WP_fnv_WayPoint_SetVertex(hWP, &stV);
    }

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
    tdstGetSetParam_ stParam;
    int lTypeOfWP;
    WP_tdstGraph_* hGraph;
    WP_tdstWayPoint_* hWayPoint;
    WP_tdstGraphNode_* param0;
    WP_tdstGraphNode_* hTheNode;
    int lValue;

    p_stTree = fn_p_stEvalTree(p_SuperObjPerso, p_stTree, &stParam);
    hGraph = (WP_tdstGraph_*)stParam.uParam.pValue;
    p_stTree = fn_p_stEvalTree(p_SuperObjPerso, p_stTree, &stParam);
    hWayPoint = (WP_tdstWayPoint_*)stParam.uParam.pValue;
    p_stTree = fn_p_stEvalTree(p_SuperObjPerso, p_stTree, &stParam);
    lTypeOfWP = stParam.uParam.lValue;
    p_stTree = fn_p_stEvalTree(p_SuperObjPerso, p_stTree, &stParam);
    lValue = *(unsigned char*)&stParam.uParam.lValue;

    hTheNode = NULL;
    for (param0 = hGraph->m_hFirstNode; param0 != NULL; param0 = param0->hNextBrotherDyn)
    {
        if (param0->m_hWayPoint == hWayPoint)
        {
            hTheNode = param0;
            break;
        }
    }
    if (lValue == 2)
    {
        for (param0 = hGraph->m_hFirstNode; param0 != NULL; param0 = param0->hNextBrotherDyn)
            param0->m_lTypeOfWP &= ~lTypeOfWP;
    }
    if (lValue == 3)
    {
        for (param0 = hGraph->m_hFirstNode; param0 != NULL; param0 = param0->hNextBrotherDyn)
            param0->m_lTypeOfWP = 0;
    }
    if (hTheNode == NULL)
        return p_stTree;
    switch (lValue)
    {
        case 0:
        case 2:
            hTheNode->m_lTypeOfWP |= lTypeOfWP;
            break;
        case 1:
        case 3:
            hTheNode->m_lTypeOfWP = lTypeOfWP;
            break;
        case 4:
            hTheNode->m_lTypeOfWP &= ~lTypeOfWP;
            break;
        case 5:
            hTheNode->m_lTypeOfWP = 0;
            break;
    }
    return p_stTree;
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
    unsigned char ucTractionFactor;
    HIE_tdstSuperObject_* hNewSuperObjPerso;
    tdstEngineObject_* hCharacter;
    tdeProcedureId_ eProcedureId = p_stTree[-1].uDummy.uId.eProcedureId;
    fn_vGetUltraOperatorPerso(fn_ucGetProcedureUltraOperator(eProcedureId), p_SuperObjPerso, &hNewSuperObjPerso);
    /* Not original source: empty test found by the permuter (changes scheduling only). */
    if (!hNewSuperObjPerso->ulTypeOfLinkedObject && !hNewSuperObjPerso->ulTypeOfLinkedObject && !hNewSuperObjPerso->ulTypeOfLinkedObject)
    {
    }
    hCharacter = hNewSuperObjPerso->ulTypeOfLinkedObject != 2 ? 0 : hNewSuperObjPerso->hLinkedObject.p_stCharacter;
    p_stTree = fn_p_stEvalTree(p_SuperObjPerso, p_stTree, &stParam);
    ucTractionFactor = (unsigned char)stParam.uParam.ulValue;
    switch (eProcedureId) {
    case 0x20d:
        hCharacter->h_StandardGame->ucTractionFactor = ucTractionFactor;
        return p_stTree;
    }
    return p_stTree;
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
    tdeProcedureId_ eProcId;
    tdstGetSetParam_ stParam;
    MTH3D_tdstVector_ stPosition;
    MTH3D_tdstVector_ stLocalPosition;
    float xMaxAngle;
    float xAngle;
    MAT_tdstTransformation_ mGlobalToPerso;
    HIE_tdstSuperObject_* hNewSuperObjPerso;
    float xRefX;
    float xRefY;

    eProcId = (p_stTree - 1)->uDummy.uId.eProcedureId;
    fn_vGetUltraOperatorPerso(fn_ucGetProcedureUltraOperator(eProcId), p_SuperObjPerso, &hNewSuperObjPerso);
    p_stTree = fn_p_stEvalTree(p_SuperObjPerso, p_stTree, &stParam);
    { unsigned long long* pSrc = (unsigned long long*)&stParam.uParam; unsigned long long* pDst = (unsigned long long*)&stPosition; float z = ((float*)pSrc)[2]; *pDst = *pSrc; ((float*)pDst)[2] = z; }
    p_stTree = fn_p_stEvalTree(p_SuperObjPerso, p_stTree, &stParam);
    xMaxAngle = stParam.eType == 8 ? stParam.uParam.xValue : (float)stParam.uParam.lValue;
    xMaxAngle = 0.017453292f * AI_xAbs(xMaxAngle);
    MAT_fn_vInvert(&mGlobalToPerso, hNewSuperObjPerso->hGlobalMatrix);
    MAT_fn_vApplyOnVertex(&stLocalPosition, &mGlobalToPerso, &stPosition);
    xRefX = 0.0f;
    if ((xRefX == stLocalPosition.xX) && (xRefX == stLocalPosition.xY) && (xRefX == stLocalPosition.xZ))
        return p_stTree;
    stLocalPosition.xZ = 0.0f;
    xRefY = -1.0f;
    {
        float xX = stLocalPosition.xX;
        float xY = stLocalPosition.xY;
        float xZ = stLocalPosition.xZ;
        float xSq;
        float xDot = AI_xDot3(xRefX, xX, xRefY, xY, xRefX, xZ);
        xSq = AI_xNorm3(xX, xY, xZ);
        xDot = xDot / xSq; { float xA = acosf(xDot); xAngle = xA; }
    }
    if ((int)eProcId == 0x20F)
        { float xK; float xK2; xK = xK2 = 0.001f; xMaxAngle = xMaxAngle * (xK * (float)*(unsigned int*)((char*)&g_stEngineStructure + 0xb8)); }
    xAngle = AI_xMin(xAngle, xMaxAngle);
    {
        float xZ;
        AI_xCrossComponent(xRefY, stLocalPosition.xZ, xRefX, stLocalPosition.xY);
        AI_xCrossComponent(xRefX, stLocalPosition.xX, xRefX, stLocalPosition.xZ);
        xZ = AI_xCrossComponent(xRefX, stLocalPosition.xY, xRefY, stLocalPosition.xX);
        if (xZ < 0.0f)
            xAngle = -xAngle;
    }
    if (!fn_ucInternalTurn(hNewSuperObjPerso, xAngle))
        fn_vSetProcedureActionReturn(1);
    return p_stTree;
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
    int lX;
    int lY;
    float xX;
    float xY;
    MTH3D_tdstVector_ stVertex;
    MTH3D_tdstVector_ stScale;
    HIE_tdstSuperObject_* hSpo;
    tdstGetSetParam_ stParam;
    p_stTree = fn_p_stEvalTree(p_SuperObjPerso, p_stTree, &stParam);
    hSpo = (HIE_tdstSuperObject_*)stParam.uParam.pValue;
    /* Permuter match: rereading the parameter keeps hSpo out of a0 across the load. */
    HIE_fn_SO_vSetSuperimposedFlag((HIE_tdstSuperObject_*)stParam.uParam.pValue);
    fn_vRemoveObjectInSectorList(hSpo);
    MAT_tdstTransformation_* hMatrix = hSpo->hLocalMatrix;
    p_stTree = fn_p_stEvalTree(p_SuperObjPerso, p_stTree, &stParam);
    lX = stParam.uParam.lValue;
    p_stTree = fn_p_stEvalTree(p_SuperObjPerso, p_stTree, &stParam);
    lY = stParam.uParam.lValue;
    p_stTree = fn_p_stEvalTree(p_SuperObjPerso, p_stTree, &stParam);
    xX = (float)lX / 100.0f;
    xY = (float)lY / 100.0f;
    GLI_vGet3DVertexFromScreenPos((GLD_tdstViewportAttributes_*)g_stEngineStructure.stViewport, &stVertex, xX, xY, (float)stParam.uParam.lValue / 1000.0f);
    if (hMatrix->eType == MAT_eTransform_Identity)
        hMatrix->eType = MAT_eTransform_Translation;
    /* Not original source: retail copies the vertex as three integer words. */
    ((int*)&hMatrix->stTransformMatrix.stCol_3)[0] = ((int*)&stVertex)[0];
    ((int*)&hMatrix->stTransformMatrix.stCol_3)[1] = ((int*)&stVertex)[1];
    ((int*)&hMatrix->stTransformMatrix.stCol_3)[2] = ((int*)&stVertex)[2];
    hMatrix->stTransformMatrix.stCol_3.xW = 1.0f;
    xX = (float)g_stEngineStructure.ulWidth / 640.0f;
    stScale.xX = xX;
    stScale.xY = 1.0f;
    stScale.xZ = xX;
    MAT_fn_vScale(hMatrix, &stScale);
    return p_stTree;
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
    tdstGetSetParam_ stParam;
    int lZoneNumber;
    COL_tdstCollideObject_* hGeoObj;
    tdeProcedureId_ eProcedureId;
    HIE_tdstSuperObject_* hNewSuperObjPerso;
    eProcedureId = (p_stTree - 1)->uDummy.uId.eProcedureId;
    fn_vGetUltraOperatorPerso(fn_ucGetProcedureUltraOperator(eProcedureId), p_SuperObjPerso, &hNewSuperObjPerso);
    p_stTree = fn_p_stEvalTree(p_SuperObjPerso, p_stTree, &stParam);
    lZoneNumber = stParam.uParam.lValue;
    switch (eProcedureId) {
    case 0x213:
        hGeoObj = fn_hGetCollideZdxOfTypeAtIndex(1, (unsigned short)(lZoneNumber - 1), hNewSuperObjPerso);
        break;
    case 0x214:
        hGeoObj = fn_hGetCollideZdxOfTypeAtIndex(0, (unsigned short)(lZoneNumber - 1), hNewSuperObjPerso);
        break;
    default:
        fn_vOnAIErm_M_UpdateLastError(40, 0);
        return p_stTree;
    }
    if (hGeoObj) {
        switch (eProcedureId) {
        case 0x213:
            if (*hGeoObj->d_xListOfElementsTypes == 7) {
                p_stTree = fn_p_stEvalTree(p_SuperObjPerso, p_stTree, &stParam);
                COL_vSetRadiusOfIndexedSphere(hGeoObj, 0, 0, stParam.uParam.xValue);
            }
            return p_stTree;
        case 0x214:
            fn_vOnAIErm_M_UpdateLastError(39, 0);
            return p_stTree;
        default:
            break;
        }
    }
    return p_stTree;
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
    tdstGetSetParam_ stParam;
    char szMapName[40];
    char* szDemoFileName;
    int bTestInput;
    char szNextMapName[40];
    char szDemoCompleteFileName[40];
    char* p_cDelimiter;
    char* p_cNextMapName;
    int lSubMapNumber;
    char* p_cMapName;
    int lCurrentSubMapNumber;
    char szName[40];

    p_stTree = fn_p_stEvalTree(p_SuperObjPerso, p_stTree, &stParam);
    p_cMapName = fn_szGetStringFromTextOrStringParam(&stParam);
    lCurrentSubMapNumber = fn_lGetSubMapNumber();
    if (*p_cMapName == '*')
    {
        strcpy(szMapName, fn_p_szGetLevelName());
        p_cDelimiter = Strchr(p_cMapName, '$');
        if ((p_cDelimiter == NULL) || (p_cDelimiter[1] == '*'))
            lSubMapNumber = lCurrentSubMapNumber;
        else
            lSubMapNumber = (int)atol(p_cDelimiter + 1);
    }
    else
    {
        strcpy(szMapName, p_cMapName);
        p_cDelimiter = Strchr(szMapName, '$');
        if (p_cDelimiter == NULL)
            lSubMapNumber = 0;
        else
        {
            *p_cDelimiter = 0;
            if (p_cDelimiter[1] == '*')
                lSubMapNumber = lCurrentSubMapNumber;
            else
                lSubMapNumber = (int)atol(p_cDelimiter + 1);
        }
    }
    p_stTree = fn_p_stEvalTree(p_SuperObjPerso, p_stTree, &stParam);
    szDemoFileName = fn_szGetStringFromTextOrStringParam(&stParam);
    p_stTree = fn_p_stEvalTree(p_SuperObjPerso, p_stTree, &stParam);
    bTestInput = *(unsigned char*)&stParam.uParam.lValue;
    p_stTree = fn_p_stEvalTree(p_SuperObjPerso, p_stTree, &stParam);
    p_cNextMapName = fn_szGetStringFromTextOrStringParam(&stParam);
    if (*p_cNextMapName == '*')
    {
        p_cDelimiter = Strchr(p_cNextMapName, '$');
        if ((p_cDelimiter == NULL) || (p_cDelimiter[1] == '*'))
        {
            if (lCurrentSubMapNumber != 0)
                sprintf(szNextMapName, "%s$%02d", fn_p_szGetLevelName(), lCurrentSubMapNumber);
            else
                strcpy(szNextMapName, fn_p_szGetLevelName());
        }
        else
            sprintf(szNextMapName, "%s%s", fn_p_szGetLevelName(), p_cDelimiter);
    }
    else
    {
        strcpy(szNextMapName, p_cNextMapName);
        p_cDelimiter = Strchr(szNextMapName, '$');
        if ((p_cDelimiter != NULL) && (p_cDelimiter[1] == '*'))
        {
            if (lCurrentSubMapNumber != 0)
                sprintf(p_cDelimiter + 1, "%02d", lCurrentSubMapNumber);
            else
                *p_cDelimiter = 0;
        }
    }
    if ((strcasecmp(szMapName, fn_p_szGetLevelName()) != 0) || (lSubMapNumber != lCurrentSubMapNumber))
    {
        if (lSubMapNumber != 0)
            sprintf(szName, "%s$%02d", szMapName, lSubMapNumber);
        else
            strcpy(szName, szMapName);
        GAM_fn_vAskToChangeLevel(szName, 1);
    }
    if (lSubMapNumber == 0)
        sprintf(szDemoCompleteFileName, "Demos\\%s\\%s", szMapName, szDemoFileName);
    else
        sprintf(szDemoCompleteFileName, "Demos\\%s\\%02d\\%s", szMapName, lSubMapNumber, szDemoFileName);
    DEMO_fn_vAllocateMemory();
    DEMO_fn_vLoadFromFile(szDemoCompleteFileName);
    DEMO_fn_vSetTestInputDuringDemo(bTestInput);
    DEMO_fn_vSetMapToLoadWhenDemoFinished(szNextMapName);
    DEMO_fn_vPrepareForRead(2);
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

/* The unused character argument is omitted by debug recovery: the target
 * reads and returns the tree from a1, not a0. */

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
    int TreatedObjects[1020];
    int NbOfTreatedObjects;
    tdstArray_* p_stArray;
    unsigned char ucVarId;
    unsigned int ulMyVarSize;
    unsigned int ul;
    unsigned char uc;
    tdeDsgVarTypeId_ eDsgVarTypeId;
    HIE_tdstSuperObject_* hLinkedSpo;
    WP_tdstGraph_* hGraph;
    int ulNumberOfWP;
    int nb;
    int TypeOfWP;
    WP_tdstWayPoint_* hWP;
    HIE_tdstSuperObject_* hPerso;

    NbOfTreatedObjects = 0;
    TreatedObjects[NbOfTreatedObjects] = (int)_hSpo;
    NbOfTreatedObjects++;
    for (uc = 0; uc < _ucNbArrays; uc++)
    {
        ucVarId = p_stTree->uDummy.uParam.ucValue;
        p_stTree++;
        {
            AI_tdstMind_* p_stMind = p_SuperObjPerso->hLinkedObject.p_stCharacter->h_Brain->p_stMind;
            p_stArray = (tdstArray_*)((char*)p_stMind->p_stDsgMem->p_cDsgMemBuffer + DSG_VAR_INFO_FIELD(p_stMind, ucVarId, ulOffsetInDsgMem, unsigned int));
        }
        ulMyVarSize = p_stArray->ucMaxSize;
        eDsgVarTypeId = p_stArray->eType;
        for (ul = 0; ul < ulMyVarSize; ul++)
        {
            if (fn_ucGetDsgVar(ucVarId, (unsigned char)ul, p_SuperObjPerso->hLinkedObject.p_stCharacter->h_Brain->p_stMind, p_stParam) == 1)
            {
                switch ((int)eDsgVarTypeId)
                {
                case 0x16:
                    hLinkedSpo = (HIE_tdstSuperObject_*)p_stParam->uParam.pValue;
                    if ((hLinkedSpo != NULL) && !fn_b_ObjectAlreadyTreatedWithSPO(NbOfTreatedObjects, TreatedObjects, hLinkedSpo))
                    {
                        TreatedObjects[NbOfTreatedObjects] = (int)hLinkedSpo;
                        NbOfTreatedObjects++;
                        fn_v_TranslateOneSpoImmediateTeleportation(hLinkedSpo, _p_stTranslation);
                    }
                    break;
                case 0x13:
                    hWP = (WP_tdstWayPoint_*)p_stParam->uParam.pValue;
                    if ((hWP != NULL) && !fn_b_ObjectAlreadyTreatedWithSPO(NbOfTreatedObjects, TreatedObjects, hWP))
                    {
                        TreatedObjects[NbOfTreatedObjects] = (int)hWP;
                        NbOfTreatedObjects++;
                        fn_v_TranslateOneWaypointImmediateTeleportation(hWP, _p_stTranslation);
                    }
                    break;
                case 0x14:
                    hGraph = (WP_tdstGraph_*)p_stParam->uParam.pValue;
                    if ((hGraph != NULL) && !fn_b_ObjectAlreadyTreatedWithSPO(NbOfTreatedObjects, TreatedObjects, hGraph))
                    {
                        TreatedObjects[NbOfTreatedObjects] = (int)hGraph;
                        NbOfTreatedObjects++;
                        ulNumberOfWP = WPG_fn_lNumberOfWaypointOfGraph(hGraph);
                        for (nb = 0; nb < ulNumberOfWP; nb++)
                        {
                            hWP = WPG_fn_hGetWaypointOfGraph(hGraph, nb, &TypeOfWP);
                            if (hWP != NULL)
                                fn_v_TranslateOneWaypointImmediateTeleportation(hWP, _p_stTranslation);
                        }
                    }
                    break;
                case 0x12:
                    hPerso = fn_h_StandardGameGetSuperObject(((tdstEngineObject_*)p_stParam->uParam.pValue)->h_StandardGame);
                    if ((hPerso != NULL) && !fn_b_ObjectAlreadyTreatedWithSPO(NbOfTreatedObjects, TreatedObjects, hPerso))
                    {
                        TreatedObjects[NbOfTreatedObjects] = (int)hPerso;
                        NbOfTreatedObjects++;
                        fn_v_TranslateOneCharacterImmediateTeleportation(hPerso, _p_stTranslation);
                    }
                    break;
                }
            }
        }
    }
    return p_stTree;
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
    int TreatedObjects[1020];
    int NbOfTreatedObjects;
    tdstArray_* p_stArray;
    unsigned char ucVarId;
    unsigned int ulMyVarSize;
    unsigned int ul;
    unsigned char uc;
    tdeDsgVarTypeId_ eDsgVarTypeId;
    MAT_tdstTransformation_ Transformation;
    HIE_tdstSuperObject_* hLinkedSpo;
    WP_tdstGraph_* hGraph;
    int ulNumberOfWP;
    int nb;
    int TypeOfWP;
    WP_tdstWayPoint_* hWP;
    HIE_tdstSuperObject_* hPerso;

    {
        MAT_tdstTransformation_* hGlobal = _hSpo->hGlobalMatrix;
        MAT_fn_vNormalize(hGlobal);
        MAT_fn_vInvert(&Transformation, hGlobal);
        MAT_fn_vCompose(&Transformation, p_stLocalSPORotation, &Transformation);
        MAT_fn_vCompose(&Transformation, hGlobal, &Transformation);
        MAT_fn_vNormalize(&Transformation);
    }
    NbOfTreatedObjects = 0;
    TreatedObjects[NbOfTreatedObjects] = (int)_hSpo;
    NbOfTreatedObjects++;
    for (uc = 0; uc < _ucNbArrays; uc++)
    {
        ucVarId = p_stTree->uDummy.uParam.ucValue;
        p_stTree++;
        {
            AI_tdstMind_* p_stMind = p_SuperObjPerso->hLinkedObject.p_stCharacter->h_Brain->p_stMind;
            p_stArray = (tdstArray_*)((char*)p_stMind->p_stDsgMem->p_cDsgMemBuffer + DSG_VAR_INFO_FIELD(p_stMind, ucVarId, ulOffsetInDsgMem, unsigned int));
        }
        ulMyVarSize = p_stArray->ucMaxSize;
        eDsgVarTypeId = p_stArray->eType;
        for (ul = 0; ul < ulMyVarSize; ul++)
        {
            if (fn_ucGetDsgVar(ucVarId, (unsigned char)ul, p_SuperObjPerso->hLinkedObject.p_stCharacter->h_Brain->p_stMind, p_stParam) == 1)
            {
                switch ((int)eDsgVarTypeId)
                {
                case 0x16:
                    hLinkedSpo = (HIE_tdstSuperObject_*)p_stParam->uParam.pValue;
                    if ((hLinkedSpo != NULL) && !fn_b_ObjectAlreadyTreatedWithSPO(NbOfTreatedObjects, TreatedObjects, hLinkedSpo))
                    {
                        TreatedObjects[NbOfTreatedObjects] = (int)hLinkedSpo;
                        NbOfTreatedObjects++;
                        fn_v_RotateOneSpoLinkedToOneSPO(hLinkedSpo, &Transformation);
                    }
                    break;
                case 0x13:
                    hWP = (WP_tdstWayPoint_*)p_stParam->uParam.pValue;
                    if ((hWP != NULL) && !fn_b_ObjectAlreadyTreatedWithSPO(NbOfTreatedObjects, TreatedObjects, hWP))
                    {
                        TreatedObjects[NbOfTreatedObjects] = (int)hWP;
                        NbOfTreatedObjects++;
                        fn_v_RotateOneWayPointLinkedToOneSPO(hWP, &Transformation);
                    }
                    break;
                case 0x14:
                    hGraph = (WP_tdstGraph_*)p_stParam->uParam.pValue;
                    if ((hGraph != NULL) && !fn_b_ObjectAlreadyTreatedWithSPO(NbOfTreatedObjects, TreatedObjects, hGraph))
                    {
                        TreatedObjects[NbOfTreatedObjects] = (int)hGraph;
                        NbOfTreatedObjects++;
                        ulNumberOfWP = WPG_fn_lNumberOfWaypointOfGraph(hGraph);
                        for (nb = 0; nb < ulNumberOfWP; nb++)
                        {
                            hWP = WPG_fn_hGetWaypointOfGraph(hGraph, nb, &TypeOfWP);
                            if (hWP != NULL)
                                fn_v_RotateOneWayPointLinkedToOneSPO(hWP, &Transformation);
                        }
                    }
                    break;
                case 0x12:
                    hPerso = fn_h_StandardGameGetSuperObject(((tdstEngineObject_*)p_stParam->uParam.pValue)->h_StandardGame);
                    if ((hPerso != NULL) && !fn_b_ObjectAlreadyTreatedWithSPO(NbOfTreatedObjects, TreatedObjects, hPerso))
                    {
                        TreatedObjects[NbOfTreatedObjects] = (int)hPerso;
                        NbOfTreatedObjects++;
                        fn_v_RotateOneCharacterLinkedToOneSPO(hPerso, &Transformation);
                    }
                    break;
                }
            }
        }
    }
    return p_stTree;
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
    tdeProcedureId_ eProcId;
    tdstGetSetParam_ stParam;
    HIE_tdstSuperObject_* hSpo;
    tduVectorWords_ stCoordinatesBefore;
    MTH3D_tdstVector_* p_stCoordinatesAfter;
    MTH3D_tdstVector_ stTranslation;
    unsigned char ucNbArrays;
    eProcId = (p_stTree - 1)->uDummy.uId.eProcedureId;
    p_stTree = fn_p_stEvalTree(p_SuperObjPerso, p_stTree, &stParam);
    hSpo = (HIE_tdstSuperObject_*)stParam.uParam.pValue;
    p_stTree = fn_p_stEvalTree(p_SuperObjPerso, p_stTree, &stParam);
    { MAT_tdstTransformation_* pMatrix = hSpo->hGlobalMatrix; stCoordinatesBefore.auWords[0] = ((tduVectorWords_*)&pMatrix->stTransformMatrix.stCol_3)->auWords[0]; stCoordinatesBefore.auWords[1] = ((tduVectorWords_*)&pMatrix->stTransformMatrix.stCol_3)->auWords[1]; stCoordinatesBefore.auWords[2] = ((tduVectorWords_*)&pMatrix->stTransformMatrix.stCol_3)->auWords[2]; }
    stTranslation.xX = stParam.uParam.stVectorValue.xX - stCoordinatesBefore.stVector.xX; stTranslation.xY = stParam.uParam.stVectorValue.xY - stCoordinatesBefore.stVector.xY; stTranslation.xZ = stParam.uParam.stVectorValue.xZ - stCoordinatesBefore.stVector.xZ;
    { MAT_tdstTransformation_* pMatrix = hSpo->hGlobalMatrix; p_stCoordinatesAfter = (MTH3D_tdstVector_*)&stParam.uParam.stVectorValue; if (pMatrix->eType == MAT_eTransform_Identity) pMatrix->eType = MAT_eTransform_Translation; MTH3D_M_vCopyVector((MTH3D_tdstVector_*)&pMatrix->stTransformMatrix.stCol_3, p_stCoordinatesAfter); pMatrix->stTransformMatrix.stCol_3.xW = 1.0f; }
    hSpo->lLastComputeFrame = HIE_gs_lCurrentFrame;
    HIE_fn_vComputeNewRelativeMatrix(hSpo);
    GAM_fn_vAddMovedOneToTable(hSpo, &stTranslation);
    if ((eProcId - 0x1D8) <= 3u || eProcId == 0x1DC) {
        g_bNoInterpolationForThisSPOMove = 1;
        GLIPS2_vSetNoInterpolationForSPO(hSpo);
    } else {
        g_bNoInterpolationForThisSPOMove = 0;
    }
    switch (eProcId) {
    case 0x1D3:
    case 0x1D8:
        return p_stTree;
    case 0x1D4:
    case 0x1D9:
        ucNbArrays = 1;
        break;
    case 0x1D5:
    case 0x1DA:
        ucNbArrays = 2;
        break;
    case 0x1D6:
    case 0x1DB:
        ucNbArrays = 3;
        break;
    case 0x1D7:
    case 0x1DC:
        ucNbArrays = 4;
        break;
    default:
        fn_vOnAIErm_M_UpdateLastError(39, 0);
        return p_stTree;
    }
    if (ucNbArrays > 4) {
        ucNbArrays = 4;
    }
    fn_v_TranslateObjectsLinkedToSpos(p_SuperObjPerso, p_stTree, &stParam, &stTranslation, hSpo, ucNbArrays);
    g_bNoInterpolationForThisSPOMove = 0;
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
    float xCos;
    float xSin;
    MTH3D_tdstVector_ stV1;
    MTH3D_tdstVector_ stV2;
    MTH3D_tdstVector_ stV3;
    float a;
    float b;
    float c;
    MTH3D_tdstVector_ stAxis2;
    MTH3D_tdstVector_ stAxis3;
    MAT_tdstTransformation_ stLocalToAxisMatrix;
    MAT_tdstTransformation_ stAxisToLocalMatrix;
    MAT_tdstTransformation_ stAxisRotationMatrix;

    xCos = cosf(xRelativeAngle);
    xSin = sinf(xRelativeAngle);
    switch (iProcId)
    {
    case 0x1EE: case 0x1EF: case 0x1F0: case 0x1F1: case 0x1F2:
        stV1.xX = 1.0f; stV1.xY = 0.0f; stV1.xZ = 0.0f;
        stV2.xX = 0.0f; stV2.xY = xCos; stV2.xZ = xSin;
        stV3.xX = 0.0f; stV3.xY = -xSin; stV3.xZ = xCos;
        MAT_fn_vSetIdentity(hRotationMatrix);
        MAT_fn_vSetRotationVectors(hRotationMatrix, &stV1, &stV2, &stV3);
        break;
    case 0x1F3: case 0x1F4: case 0x1F5: case 0x1F6: case 0x1F7:
        stV1.xX = xCos; stV1.xY = 0.0f; stV1.xZ = -xSin;
        stV2.xX = 0.0f; stV2.xY = 1.0f; stV2.xZ = 0.0f;
        stV3.xX = xSin; stV3.xY = 0.0f; stV3.xZ = xCos;
        MAT_fn_vSetIdentity(hRotationMatrix);
        MAT_fn_vSetRotationVectors(hRotationMatrix, &stV1, &stV2, &stV3);
        break;
    case 0x1F8: case 0x1F9: case 0x1FA: case 0x1FB: case 0x1FC:
        stV1.xX = xCos; stV1.xY = xSin; stV1.xZ = 0.0f;
        stV2.xX = -xSin; stV2.xY = xCos; stV2.xZ = 0.0f;
        stV3.xX = 0.0f; stV3.xY = 0.0f; stV3.xZ = 1.0f;
        MAT_fn_vSetIdentity(hRotationMatrix);
        MAT_fn_vSetRotationVectors(hRotationMatrix, &stV1, &stV2, &stV3);
        break;
    case 0x1FD: case 0x1FE: case 0x1FF: case 0x200: case 0x201:
        a = pstAxis->xX;
        b = pstAxis->xY;
        c = pstAxis->xZ;
        if ((AI_xAbs(a) < 0.001f) && (AI_xAbs(b) < 0.001f))
        {
            if (c > 0.0f)
            {
                stV1.xX = xCos; stV1.xY = xSin; stV1.xZ = 0.0f;
                stV2.xX = -xSin; stV2.xY = xCos; stV2.xZ = 0.0f;
                stV3.xX = 0.0f; stV3.xY = 0.0f; stV3.xZ = 1.0f;
            }
            else
            {
                stV1.xX = xCos; stV1.xY = -xSin; stV1.xZ = 0.0f;
                stV2.xX = xSin; stV2.xY = xCos; stV2.xZ = 0.0f;
                stV3.xX = 0.0f; stV3.xY = 0.0f; stV3.xZ = 1.0f;
            }
            MAT_fn_vSetIdentity(hRotationMatrix);
            MAT_fn_vSetRotationVectors(hRotationMatrix, &stV1, &stV2, &stV3);
        }
        else
        {
            { float xN = -a; float xS = AI_xSqr2(a, b); stAxis2.xX = b; stAxis2.xY = xN; stAxis2.xZ = 0.0f;
            stAxis3.xX = a * c; stAxis3.xY = b * c; stAxis3.xZ = -xS; }
            MAT_fn_vSetIdentity(&stAxisToLocalMatrix);
            MAT_fn_vSetRotationVectors(&stAxisToLocalMatrix, &stAxis2, &stAxis3, pstAxis);
            MAT_fn_vNormalize(&stAxisToLocalMatrix);
            MAT_fn_vSetIdentity(&stLocalToAxisMatrix);
            MAT_fn_vInvert(&stLocalToAxisMatrix, &stAxisToLocalMatrix);
            stV1.xX = xCos; stV1.xY = xSin; stV1.xZ = 0.0f;
            stV2.xX = -xSin; stV2.xY = xCos; stV2.xZ = 0.0f;
            stV3.xX = 0.0f; stV3.xY = 0.0f; stV3.xZ = 1.0f;
            MAT_fn_vSetIdentity(&stAxisRotationMatrix);
            MAT_fn_vSetRotationVectors(&stAxisRotationMatrix, &stV1, &stV2, &stV3);
            MAT_fn_vSetIdentity(hRotationMatrix);
            MAT_fn_vCompose(hRotationMatrix, &stAxisRotationMatrix, &stLocalToAxisMatrix);
            MAT_fn_vCompose(hRotationMatrix, &stAxisToLocalMatrix, hRotationMatrix);
            MAT_fn_vNormalize(hRotationMatrix);
        }
        break;
    }
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
extern "C" tdstNodeInterpret_* fn_p_stSPORotate(HIE_tdstSuperObject_* p_SuperObjPerso, tdstNodeInterpret_* p_stTree)
{
    tdeProcedureId_ eProcId;
    tdstGetSetParam_ stParam;
    HIE_tdstSuperObject_* hSpo;
    MAT_tdstTransformation_ stRotationMatrix;
    unsigned char ucNbArrays;
    float xRelativeAngle;
    MTH3D_tdstVector_ stAxis;
    float xNorm;
    eProcId = (p_stTree - 1)->uDummy.uId.eProcedureId;
    p_stTree = fn_p_stEvalTree(p_SuperObjPerso, p_stTree, &stParam);
    hSpo = (HIE_tdstSuperObject_*)stParam.uParam.pValue;
    p_stTree = fn_p_stEvalTree(p_SuperObjPerso, p_stTree, &stParam);
    xRelativeAngle = 0.017453292f * (stParam.eType == 8 ? stParam.uParam.xValue : (float)stParam.uParam.lValue);
    HIE_fn_vUpdateGlobalMatrix(hSpo);
    { MAT_tdstTransformation_* pMatrix = hSpo->hGlobalMatrix;
    switch (eProcId) {
    case 0x1FD:
    case 0x1FE:
    case 0x1FF:
    case 0x200:
    case 0x201:
        p_stTree = fn_p_stEvalTree(p_SuperObjPerso, p_stTree, &stParam);
        { unsigned long long* pSrc = (unsigned long long*)&stParam.uParam; unsigned long long* pDst = (unsigned long long*)&stAxis; float z = ((float*)pSrc)[2]; *pDst = *pSrc; ((float*)pDst)[2] = z; }
        { float x = stAxis.xX; float y = stAxis.xY; float z = stAxis.xZ; float xS; MTH_SQR3_TO(xS, x, y, z); MTH_SQRT_TO(xNorm, xS); if (xNorm != 0.0f) { xNorm = 1.0f / xNorm; stAxis.xX = xNorm * stAxis.xX; stAxis.xY = xNorm * stAxis.xY; stAxis.xZ = xNorm * stAxis.xZ; } }
        break;
    }
    fn_vComputeRotationMatrix(eProcId, xRelativeAngle, &stAxis, &stRotationMatrix);
    MAT_fn_vCompose(pMatrix, pMatrix, &stRotationMatrix);
    MAT_fn_vNormalize(pMatrix);
    }
    hSpo->lLastComputeFrame = HIE_gs_lCurrentFrame;
    HIE_fn_vComputeNewRelativeMatrix(hSpo);
    switch (eProcId) {
    case 0x1EE:
    case 0x1F3:
    case 0x1F8:
    case 0x1FD:
        return p_stTree;
    case 0x1EF:
    case 0x1F4:
    case 0x1F9:
    case 0x1FE:
        ucNbArrays = 1;
        break;
    case 0x1F0:
    case 0x1F5:
    case 0x1FA:
    case 0x1FF:
        ucNbArrays = 2;
        break;
    case 0x1F1:
    case 0x1F6:
    case 0x1FB:
    case 0x200:
        ucNbArrays = 3;
        break;
    case 0x1F2:
    case 0x1F7:
    case 0x1FC:
    case 0x201:
        ucNbArrays = 4;
        break;
    default:
        fn_vOnAIErm_M_UpdateLastError(39, 0);
        return p_stTree;
    }
    if (ucNbArrays > 4) {
        ucNbArrays = 4;
    }
    fn_v_RotateObjectsLinkedToSpos(p_SuperObjPerso, p_stTree, &stParam, &stRotationMatrix, hSpo, ucNbArrays);
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
    tdstGetSetParam_ stParam;
    HIE_tdstSuperObject_* hSpo;
    MTH3D_tdstVector_ stSightVector;
    MTH3D_tdstVector_ stV1;
    MTH3D_tdstVector_ stV2;
    MTH3D_tdstVector_ stV3;
    MAT_tdstTransformation_ stRotationMatrix;
    MAT_tdstTransformation_ stMatrixBefore;
    unsigned char ucNbArrays;
    tdeProcedureId_ eProcedureId;
    MTH3D_tdstVector_ stTmpVector1;
    MTH3D_tdstVector_ stTmpVector2;
    MTH3D_tdstVector_ stTmpVector3;
    float xNorm;
    MAT_tdstTransformation_* hMatrix;

    eProcedureId = (p_stTree - 1)->uDummy.uId.eProcedureId;
    p_stTree = fn_p_stEvalTree(p_SuperObjPerso, p_stTree, &stParam);
    hSpo = (HIE_tdstSuperObject_*)stParam.uParam.pValue;
    p_stTree = fn_p_stEvalTree(p_SuperObjPerso, p_stTree, &stParam);
    { unsigned long long* pDst = (unsigned long long*)&stSightVector; unsigned long long* pSrc = (unsigned long long*)&stParam.uParam; *pDst = *pSrc; ((float*)pDst)[2] = ((float*)pSrc)[2]; }
    hMatrix = hSpo->hGlobalMatrix;
    MAT_fn_vGetRotationVectorBaseI(hMatrix, &stV1);
    MAT_fn_vGetRotationVectorBaseJ(hMatrix, &stV2);
    MAT_fn_vGetRotationVectorBaseK(hMatrix, &stV3);
    *(AI_tdstRawMatrix_*)&stMatrixBefore = *(AI_tdstRawMatrix_*)hMatrix;
    switch ((int)eProcedureId)
    {
    case 0x203: case 0x204: case 0x205: case 0x206: case 0x207:
        stSightVector.xZ = 0.0f;
        if ((stSightVector.xX == 0.0f) && (stSightVector.xY == 0.0f) && (stSightVector.xZ == 0.0f))
        {
            stSightVector.xX = -stV2.xX;
            stSightVector.xY = -stV2.xY;
            stSightVector.xZ = -stV2.xZ;
            stSightVector.xZ = 0.0f;
            if ((stSightVector.xX == 0.0f) && (stSightVector.xY == 0.0f) && (stSightVector.xZ == 0.0f))
                AI_M_vCopyWords(&stSightVector, &stV3);
        }
        {
            float xSq;
            float xX = stSightVector.xX;
            float xY = stSightVector.xY;
            float xZ = stSightVector.xZ;
            MTH_SQR3_TO(xSq, xX, xY, xZ);
            MTH_SQRT_TO(xNorm, xSq);
            if (xNorm != 0.0f)
            {
                xNorm = 1.0f / xNorm;
                stSightVector.xX = xNorm * xX;
                stSightVector.xY = xNorm * stSightVector.xY;
                stSightVector.xZ = xNorm * stSightVector.xZ;
            }
        }
        stV1.xX = -stSightVector.xY;
        stV1.xY = stSightVector.xX;
        stV1.xZ = 0.0f;
        stV2.xX = -stSightVector.xX;
        stV2.xY = -stSightVector.xY;
        stV2.xZ = 0.0f;
        stV3.xX = 0.0f;
        stV3.xY = 0.0f;
        stV3.xZ = 1.0f;
        MAT_fn_vSetRotationVectors(hMatrix, &stV1, &stV2, &stV3);
        hSpo->lLastComputeFrame = HIE_gs_lCurrentFrame;
        HIE_fn_vComputeNewRelativeMatrix(hSpo);
        break;
    case 0x208: case 0x209: case 0x20a: case 0x20b: case 0x20c:
        if ((stSightVector.xX == 0.0f) && (stSightVector.xY == 0.0f) && (stSightVector.xZ == 0.0f))
        {
            stSightVector.xX = -stV2.xX;
            stSightVector.xY = -stV2.xY;
            stSightVector.xZ = -stV2.xZ;
        }
        {
            float xSq;
            float xX = stSightVector.xX;
            float xY = stSightVector.xY;
            float xZ = stSightVector.xZ;
            MTH_SQR3_TO(xSq, xX, xY, xZ);
            MTH_SQRT_TO(xNorm, xSq);
            if (xNorm != 0.0f)
            {
                xNorm = 1.0f / xNorm;
                stSightVector.xX = xNorm * xX;
                stSightVector.xY = xNorm * stSightVector.xY;
                stSightVector.xZ = xNorm * stSightVector.xZ;
            }
        }
        if ((SPO_xAbs(stSightVector.xX) < 0.001f) && (SPO_xAbs(stSightVector.xY) < 0.001f))
        {
            stTmpVector1.xX = -stV2.xX;
            stTmpVector1.xY = -stV2.xY;
            stTmpVector1.xZ = -stV2.xZ;
            if ((SPO_xAbs(stTmpVector1.xX) < 0.001f) && (SPO_xAbs(stTmpVector1.xY) < 0.001f))
                AI_M_vCopyWords(&stTmpVector1, &stV3);
        }
        else
        {
            stTmpVector1.xX = 0.0f;
            stTmpVector1.xY = 0.0f;
            stTmpVector1.xZ = 1.0f;
        }
        stTmpVector2.xX = SPO_xCross(stTmpVector1.xY, stSightVector.xZ, stTmpVector1.xZ, stSightVector.xY);
        stTmpVector2.xY = SPO_xCross(stTmpVector1.xZ, stSightVector.xX, stTmpVector1.xX, stSightVector.xZ);
        stTmpVector2.xZ = SPO_xCross(stTmpVector1.xX, stSightVector.xY, stTmpVector1.xY, stSightVector.xX);
        stTmpVector2.xZ = 0.0f;
        stTmpVector3.xX = SPO_xCross(stSightVector.xY, stTmpVector2.xZ, stSightVector.xZ, stTmpVector2.xY);
        stTmpVector3.xY = SPO_xCross(stSightVector.xZ, stTmpVector2.xX, stSightVector.xX, stTmpVector2.xZ);
        stTmpVector3.xZ = SPO_xCross(stSightVector.xX, stTmpVector2.xY, stSightVector.xY, stTmpVector2.xX);
        if (stV3.xX * stTmpVector3.xX + stV3.xY * stTmpVector3.xY + stV3.xZ * stTmpVector3.xZ < 0.0f)
        {
            stV1.xX = -stTmpVector2.xX;
            stV1.xY = -stTmpVector2.xY;
            stV1.xZ = -stTmpVector2.xZ;
            stV2.xX = -stSightVector.xX;
            stV2.xY = -stSightVector.xY;
            stV2.xZ = -stSightVector.xZ;
            stV3.xX = -stTmpVector3.xX;
            stV3.xY = -stTmpVector3.xY;
            stV3.xZ = -stTmpVector3.xZ;
        }
        else
        {
            AI_M_vCopyWords(&stV1, &stTmpVector2);
            stV2.xX = -stSightVector.xX;
            stV2.xY = -stSightVector.xY;
            stV2.xZ = -stSightVector.xZ;
            AI_M_vCopyWords(&stV3, &stTmpVector3);
        }
        {
            float xSq;
            float xX = stV1.xX;
            float xY = stV1.xY;
            float xZ = stV1.xZ;
            MTH_SQR3_TO(xSq, xX, xY, xZ);
            MTH_SQRT_TO(xNorm, xSq);
            if (xNorm != 0.0f)
            {
                xNorm = 1.0f / xNorm;
                stV1.xX = xNorm * xX;
                stV1.xY = xNorm * stV1.xY;
                stV1.xZ = xNorm * stV1.xZ;
            }
        }
        {
            float xSq;
            float xX = stV2.xX;
            float xY = stV2.xY;
            float xZ = stV2.xZ;
            MTH_SQR3_TO(xSq, xX, xY, xZ);
            MTH_SQRT_TO(xNorm, xSq);
            if (xNorm != 0.0f)
            {
                xNorm = 1.0f / xNorm;
                stV2.xX = xNorm * xX;
                stV2.xY = xNorm * stV2.xY;
                stV2.xZ = xNorm * stV2.xZ;
            }
        }
        {
            float xSq;
            float xX = stV3.xX;
            float xY = stV3.xY;
            float xZ = stV3.xZ;
            MTH_SQR3_TO(xSq, xX, xY, xZ);
            MTH_SQRT_TO(xNorm, xSq);
            if (xNorm != 0.0f)
            {
                xNorm = 1.0f / xNorm;
                stV3.xX = xNorm * xX;
                stV3.xY = xNorm * stV3.xY;
                stV3.xZ = xNorm * stV3.xZ;
            }
        }
        MAT_fn_vSetRotationVectors(hMatrix, &stV1, &stV2, &stV3);
        MAT_fn_vNormalize(hMatrix);
        hSpo->lLastComputeFrame = HIE_gs_lCurrentFrame;
        HIE_fn_vComputeNewRelativeMatrix(hSpo);
        break;
    }
    MAT_fn_vInvert(&stMatrixBefore, &stMatrixBefore);
    MAT_fn_vCompose(&stMatrixBefore, &stMatrixBefore, hMatrix);
    MAT_fn_vNormalize(&stMatrixBefore);
    MAT_fn_vGetRotationVectorBaseI(&stMatrixBefore, &stV1);
    MAT_fn_vGetRotationVectorBaseJ(&stMatrixBefore, &stV2);
    MAT_fn_vGetRotationVectorBaseK(&stMatrixBefore, &stV3);
    MAT_fn_vSetIdentity(&stRotationMatrix);
    MAT_fn_vSetRotationVectors(&stRotationMatrix, &stV1, &stV2, &stV3);
    ucNbArrays = 0;
    switch ((int)eProcedureId)
    {
    case 0x203: case 0x208:
        return p_stTree;
    case 0x204: case 0x209:
        ucNbArrays = 1;
        break;
    case 0x205: case 0x20a:
        ucNbArrays = 2;
        break;
    case 0x206: case 0x20b:
        ucNbArrays = 3;
        break;
    case 0x207: case 0x20c:
        ucNbArrays = 4;
        break;
    }
    if (ucNbArrays > 4)
        ucNbArrays = 4;
    return fn_v_RotateObjectsLinkedToSpos(p_SuperObjPerso, p_stTree, &stParam, &stRotationMatrix, hSpo, ucNbArrays);
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
    MTH3D_tdstVector_ stRealTranslation;
    MTH3D_tdstVector_ stPosition;

    MAT_tdstTransformation_* hMatrix = _hSOL->h_SPORef->hGlobalMatrix;
    ((int*)&stPosition)[0] = ((int*)&hMatrix->stTransformMatrix.stCol_3)[0];
    ((int*)&stPosition)[1] = ((int*)&hMatrix->stTransformMatrix.stCol_3)[1];
    ((int*)&stPosition)[2] = ((int*)&hMatrix->stTransformMatrix.stCol_3)[2];
    switch ((int)_eProcId)
    {
    case 0x1dd:
    case 0x1e2:
        stRealTranslation.xX = _p_stCoordinatesAfter->xX - stPosition.xX;
        stRealTranslation.xY = _p_stCoordinatesAfter->xY - stPosition.xY;
        stRealTranslation.xZ = _p_stCoordinatesAfter->xZ - stPosition.xZ;
        break;
    case 0x1de:
    case 0x1e3:
        ((int*)&stRealTranslation)[0] = ((int*)&_hSOL->POS_SPO_Init.stTransformMatrix.stCol_3)[0];
        ((int*)&stRealTranslation)[1] = ((int*)&_hSOL->POS_SPO_Init.stTransformMatrix.stCol_3)[1];
        ((int*)&stRealTranslation)[2] = ((int*)&_hSOL->POS_SPO_Init.stTransformMatrix.stCol_3)[2];
        stRealTranslation.xX = stRealTranslation.xX + _p_stCoordinatesAfter->xX;
        stRealTranslation.xY = *(&stRealTranslation.xY) + _p_stCoordinatesAfter->xY;
        stRealTranslation.xZ = *(&stRealTranslation.xZ) + _p_stCoordinatesAfter->xZ;
        stRealTranslation.xX = stRealTranslation.xX - stPosition.xX;
        stRealTranslation.xY = *(&stRealTranslation.xY) - stPosition.xY;
        stRealTranslation.xZ = *(&stRealTranslation.xZ) - stPosition.xZ;
        break;
    case 0x1df:
    case 0x1e4:
        ((int*)&stRealTranslation)[0] = ((int*)_p_stCoordinatesAfter)[0];
        ((int*)&stRealTranslation)[1] = ((int*)_p_stCoordinatesAfter)[1];
        ((int*)&stRealTranslation)[2] = ((int*)_p_stCoordinatesAfter)[2];
        break;
    case 0x1e0:
    case 0x1e5:
        ((int*)&stRealTranslation)[0] = ((int*)&_hSOL->POS_SPO_Init.stTransformMatrix.stCol_3)[0];
        ((int*)&stRealTranslation)[1] = ((int*)&_hSOL->POS_SPO_Init.stTransformMatrix.stCol_3)[1];
        ((int*)&stRealTranslation)[2] = ((int*)&_hSOL->POS_SPO_Init.stTransformMatrix.stCol_3)[2];
        stRealTranslation.xX = stRealTranslation.xX - stPosition.xX;
        stRealTranslation.xY = *(&stRealTranslation.xY) - stPosition.xY;
        stRealTranslation.xZ = *(&stRealTranslation.xZ) - stPosition.xZ;
        break;
    case 0x1e1:
    case 0x1e6:
        fn_vReinitSOL(_hSOL);
        return;
    default:
        return;
    }
    fn_v_TranslateSOL(_hSOL, &stRealTranslation);
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
    tdeProcedureId_ eProcedureId;
    tdstGetSetParam_ stParam;
    HIE_tdstSuperObject_* hNewSuperObjPerso;
    unsigned int ulSubAnimNumber;
    unsigned int ulLoopNb;
    unsigned int ulBitNumber;

    eProcedureId = (p_stTree - 1)->uDummy.uId.eProcedureId;
    fn_vGetUltraOperatorPerso(fn_ucGetProcedureUltraOperator(eProcedureId), p_SuperObjPerso, &hNewSuperObjPerso);
    p_stTree = fn_p_stEvalTree(p_SuperObjPerso, p_stTree, &stParam);
    ulSubAnimNumber = stParam.uParam.ulValue;
    switch ((int)eProcedureId)
    {
    case 0x226:
        p_stTree = fn_p_stEvalTree(p_SuperObjPerso, p_stTree, &stParam);
        ulLoopNb = stParam.uParam.lValue ? 1 : 0;
        p_stTree = fn_p_stEvalTree(p_SuperObjPerso, p_stTree, &stParam);
        fn_vAddSubAnimation(hNewSuperObjPerso, ulSubAnimNumber, (unsigned char)ulLoopNb, stParam.uParam.ulValue, 0, 0.0f);
        return p_stTree;
    case 0x228:
        p_stTree = fn_p_stEvalTree(p_SuperObjPerso, p_stTree, &stParam);
        ulBitNumber = stParam.uParam.lValue ? 1 : 0;
        p_stTree = fn_p_stEvalTree(p_SuperObjPerso, p_stTree, &stParam);
        ulLoopNb = stParam.uParam.ulValue;
        p_stTree = fn_p_stEvalTree(p_SuperObjPerso, p_stTree, &stParam);
        fn_vAddSubAnimation(hNewSuperObjPerso, ulSubAnimNumber, (unsigned char)ulBitNumber, ulLoopNb, *(unsigned char*)&stParam.uParam.lValue, 0.0f);
        return p_stTree;
    case 0x227:
        p_stTree = fn_p_stEvalTree(p_SuperObjPerso, p_stTree, &stParam);
        ulBitNumber = stParam.uParam.lValue ? 1 : 0;
        p_stTree = fn_p_stEvalTree(p_SuperObjPerso, p_stTree, &stParam);
        ulLoopNb = stParam.uParam.ulValue;
        p_stTree = fn_p_stEvalTree(p_SuperObjPerso, p_stTree, &stParam);
        fn_vAddSubAnimation(hNewSuperObjPerso, ulSubAnimNumber, (unsigned char)ulBitNumber, ulLoopNb, 0, stParam.uParam.xValue);
        return p_stTree;
    case 0x229:
        p_stTree = fn_p_stEvalTree(p_SuperObjPerso, p_stTree, &stParam);
        ulBitNumber = stParam.uParam.lValue ? 1 : 0;
        p_stTree = fn_p_stEvalTree(p_SuperObjPerso, p_stTree, &stParam);
        ulLoopNb = stParam.uParam.ulValue;
        p_stTree = fn_p_stEvalTree(p_SuperObjPerso, p_stTree, &stParam);
        fn_vAddSubAnimation(hNewSuperObjPerso, ulSubAnimNumber, (unsigned char)ulBitNumber, ulLoopNb, 3, stParam.uParam.xValue);
        return p_stTree;
    case 0x22a:
        fn_vRemoveSubAnimation(hNewSuperObjPerso, ulSubAnimNumber);
        return p_stTree;
    case 0x22c:
        fn_vStopSubAnimationAtEnd(hNewSuperObjPerso, ulSubAnimNumber);
        return p_stTree;
    case 0x22b:
        p_stTree = fn_p_stEvalTree(p_SuperObjPerso, p_stTree, &stParam);
        ulBitNumber = stParam.uParam.ulValue;
        p_stTree = fn_p_stEvalTree(p_SuperObjPerso, p_stTree, &stParam);
        fn_vSetCustombitSubAnim(hNewSuperObjPerso, ulSubAnimNumber, ulBitNumber, stParam.uParam.lValue);
        return p_stTree;
    default:
        fn_vOnAIErm_M_UpdateLastError(39, 0);
        break;
    }
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
    tdeProcedureId_ eProcId;
    tdstGetSetParam_ stParam;
    tdstSuperObjectLinks_* hSOL;
    MAT_tdstTransformation_ MatrixInit;
    unsigned int ulRef;
    MTH3D_tdstVector_ Vect;
    WP_tdstWayPoint_* hWP;
    HIE_tdstSuperObject_* hPerso;

    eProcId = (p_stTree - 1)->uDummy.uId.eProcedureId;
    p_stTree = fn_p_stEvalTree(p_SuperObjPerso, p_stTree, &stParam);
    hSOL = (tdstSuperObjectLinks_*)stParam.uParam.pValue;
    switch ((int)eProcId)
    {
    case 0x1e7:
        p_stTree = fn_p_stEvalTree(p_SuperObjPerso, p_stTree, &stParam);
        hPerso = fn_h_StandardGameGetSuperObject(((tdstEngineObject_*)stParam.uParam.pValue)->h_StandardGame);
        *(AI_tdstRawMatrix_*)&MatrixInit = *(AI_tdstRawMatrix_*)hPerso->hLocalMatrix;
        GAM_fn_vAddObjetToSOLinks(hSOL, (void*)hPerso->hLinkedObject.p_stCharacter, 2, &MatrixInit, 2);
        return p_stTree;
    case 0x1e8:
        p_stTree = fn_p_stEvalTree(p_SuperObjPerso, p_stTree, &stParam);
        hWP = (WP_tdstWayPoint_*)stParam.uParam.pValue;
        AI_vCopyVectorFloats(&Vect, (MTH3D_tdstVector_*)hWP); /* m_stVertex, +0x0 */
        MAT_fn_vSetIdentity(&MatrixInit);
        if (MatrixInit.eType == MAT_eTransform_Identity)
            MatrixInit.eType = MAT_eTransform_Translation;
        {
            int* piCol = (int*)&MatrixInit.stTransformMatrix.stCol_3;
            piCol[0] = ((int*)&Vect)[0];
            piCol[1] = ((int*)&Vect)[1];
            piCol[2] = ((int*)&Vect)[2];
        }
        MatrixInit.stTransformMatrix.stCol_3.xW = 1.0f;
        GAM_fn_vAddObjetToSOLinks(hSOL, hWP, 3, &MatrixInit, 2);
        break;
    case 0x1e9:
        p_stTree = fn_p_stEvalTree(p_SuperObjPerso, p_stTree, &stParam);
        hPerso = (HIE_tdstSuperObject_*)stParam.uParam.pValue;
        *(AI_tdstRawMatrix_*)&MatrixInit = *(AI_tdstRawMatrix_*)hPerso->hLocalMatrix;
        GAM_fn_vAddObjetToSOLinks(hSOL, hPerso, 1, &MatrixInit, 2);
        break;
    case 0x1ea:
        p_stTree = fn_p_stEvalTree(p_SuperObjPerso, p_stTree, &stParam);
        hPerso = fn_h_StandardGameGetSuperObject(((tdstEngineObject_*)stParam.uParam.pValue)->h_StandardGame);
        ulRef = GAM_AlreadyReferencedInSOLinks(hSOL, (void*)hPerso->hLinkedObject.p_stCharacter);
        if ((ulRef != 0) && (*(int*)((int)hSOL->ePersistenceOfLinkedObj - 4 + ulRef * 4) == 2))
            GAM_fn_vDeleteObjetFromSOLinks(hSOL, ulRef);
        break;
    case 0x1eb:
        p_stTree = fn_p_stEvalTree(p_SuperObjPerso, p_stTree, &stParam);
        ulRef = GAM_AlreadyReferencedInSOLinks(hSOL, stParam.uParam.pValue);
        if ((ulRef != 0) && (*(int*)((int)hSOL->ePersistenceOfLinkedObj - 4 + ulRef * 4) == 2))
            GAM_fn_vDeleteObjetFromSOLinks(hSOL, ulRef);
        break;
    case 0x1ec:
        p_stTree = fn_p_stEvalTree(p_SuperObjPerso, p_stTree, &stParam);
        ulRef = GAM_AlreadyReferencedInSOLinks(hSOL, stParam.uParam.pValue);
        if ((ulRef != 0) && (*(int*)((int)hSOL->ePersistenceOfLinkedObj - 4 + ulRef * 4) == 2))
            GAM_fn_vDeleteObjetFromSOLinks(hSOL, ulRef);
        break;
    }
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
    else {
        return p_stTree + 2;
    }
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
