/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\MEC\DNMCame.c */
/* Language: C */
/* Compiler: MW MIPS C Compiler */

#include <stddef.h>

/* Recovered PS2 MTH scalar helpers used by the original vector macros. */
#define MTH_ABS_TO(_result, _value) \
    asm { abs.s _result, _value }
#define MTH_SQRT_TO(_result, _value) \
    asm { sqrt.s _result, _value }
#define MTH_SQRT_TO_SYNC(_result, _value) \
    asm { sqrt.s _result, _value }          \
    asm { nop }
#define MTH_SQR3_TO(_result, _x, _y, _z) \
    asm { mula.s _x, _x }                  \
    asm { madda.s _y, _y }                 \
    asm { madd.s _result, _z, _z }
#define MTH_CROSS_TO(_result, _a, _b, _c, _d) \
    asm { mula.s _a, _b }                       \
    asm { msub.s _result, _c, _d }
#define MTH_CROSS_COMPONENT_TO(_destination, _leftA, _rightB, _leftC, _rightD) \
    do {                                                                        \
        float _mthLeftA;                                                        \
        float _mthRightB;                                                       \
        float _mthLeftC;                                                        \
        float _mthRightD;                                                       \
        float _mthResult;                                                       \
        _mthRightB = (_rightB);                                                 \
        _mthLeftA = (_leftA);                                                   \
        _mthRightD = (_rightD);                                                 \
        _mthLeftC = (_leftC);                                                   \
        MTH_CROSS_TO(_mthResult, _mthLeftA, _mthRightB, _mthLeftC, _mthRightD); \
        (_destination) = _mthResult;                                            \
    } while (0)
#define MTH_EPSILON_TO(_result)                 \
    do {                                        \
        unsigned long _mthBits;                 \
        asm { lui _mthBits, 0x3A83 }            \
        asm { ori _mthBits, _mthBits, 0x126F }  \
        asm { mtc1 _mthBits, _result }          \
    } while (0)
#define MTH_FLOAT_BITS_TO(_result, _bits)       \
    do {                                        \
        unsigned long _mthBits = (_bits);       \
        asm { mtc1 _mthBits, _result }          \
    } while (0)

/* Recovered aggregate layouts from MWCC debug type records. */
typedef struct AI_tdstMind_ AI_tdstMind_;
typedef struct GLI_tdstLight_ GLI_tdstLight_;
typedef struct GLI_tdstMaterial_ GLI_tdstMaterial_;
typedef struct GLI_tdstTexture_ GLI_tdstTexture_;
typedef struct IPO_tdstInstanciatedPhysicalObject_ IPO_tdstInstanciatedPhysicalObject_;
typedef struct PO_tdstPhysicalObject_ PO_tdstPhysicalObject_;
typedef struct _SND_tdstBlockEvent _SND_tdstBlockEvent;
typedef struct tdstCollSet_ tdstCollSet_;
typedef struct tdstComport_ tdstComport_;
typedef struct tdstDynam_ tdstDynam_;
typedef struct tdstMSLight_ tdstMSLight_;
typedef struct tdstMSSound_ tdstMSSound_;
typedef struct tdstMSWay_ tdstMSWay_;
typedef struct tdstMicro_ tdstMicro_;
typedef struct tdstObjectsTablesList_ tdstObjectsTablesList_;
typedef struct tdstSectInfo_ tdstSectInfo_;
typedef struct tdstState_ tdstState_;
typedef struct MTH3D_tdstVector_ MTH3D_tdstVector_;
typedef struct SECT_tdstListOfSOSectorsInGraphicInteraction_ SECT_tdstListOfSOSectorsInGraphicInteraction_;
typedef union HIE_tduLinkedObject_ HIE_tduLinkedObject_;
typedef struct HIE_tdstSuperObject_ HIE_tdstSuperObject_;
typedef struct tdstSubAnim_ tdstSubAnim_;
typedef struct LST2_tdstAnchorToCINE_tdxHandleToChannelLinkDyn LST2_tdstAnchorToCINE_tdxHandleToChannelLinkDyn;
typedef struct CINE_tdstCineActor_ CINE_tdstCineActor_;
typedef struct LST2_tdstAnchorToSCT_tdxHandleOfLstSoundEventOpt LST2_tdstAnchorToSCT_tdxHandleOfLstSoundEventOpt;
typedef struct MTH4D_tdstVector_ MTH4D_tdstVector_;
typedef struct MTH4D_tdstMatrix_ MTH4D_tdstMatrix_;
typedef struct MAT_tdstTransformation_ MAT_tdstTransformation_;
typedef struct MTH3D_tdstMatrix_ MTH3D_tdstMatrix_;
typedef struct DNM_stDynamicsBaseBlock DNM_stDynamicsBaseBlock;
typedef union _SND_tduRefEvt _SND_tduRefEvt;
typedef struct SCT_tdstListOfSoundEvent_ SCT_tdstListOfSoundEvent_;
typedef struct tdstEventInTable_ tdstEventInTable_;
typedef struct tdstEvent_ tdstEvent_;
typedef struct LST2_tdstAnchorTotdxHandleToSubAnimOpt LST2_tdstAnchorTotdxHandleToSubAnimOpt;
typedef struct stMorphData stMorphData;
typedef struct tdstAveragePosition_ tdstAveragePosition_;
typedef struct tdstAnim3d_ tdstAnim3d_;
typedef struct tdstPLA_Hierarchy_ tdstPLA_Hierarchy_;
typedef struct tdstPLA_Deformation_ tdstPLA_Deformation_;
typedef struct tdstFrame3d_ tdstFrame3d_;
typedef struct LST2_tdstAnchorTotdxHandleToSubAnimInUseDyn LST2_tdstAnchorTotdxHandleToSubAnimInUseDyn;
typedef struct tdst3dData_ tdst3dData_;
typedef struct DNM_stObstacle DNM_stObstacle;
typedef struct tdstStandardGame_ tdstStandardGame_;
typedef struct tdstSubAnimInUse_ tdstSubAnimInUse_;
typedef struct tdstBrain_ tdstBrain_;
typedef struct tdstSightAxisSystem_ tdstSightAxisSystem_;
typedef struct tdstTransparentSuperObjectForCamera_ tdstTransparentSuperObjectForCamera_;
typedef struct tdstCineinfo_ tdstCineinfo_;
typedef struct tdstElement3d_ tdstElement3d_;
typedef struct anon_0 anon_0;
typedef struct anon_1 anon_1;
typedef struct stMACDPID stMACDPID;
typedef struct GMT_tdstGameMaterial_ GMT_tdstGameMaterial_;
typedef struct SECT_tdstListOfSOCharacters_ SECT_tdstListOfSOCharacters_;
typedef struct GMT_tdstCollideMaterial_ GMT_tdstCollideMaterial_;
typedef struct tdstLipsSynchValue_ tdstLipsSynchValue_;
typedef struct MTH_stRotation MTH_stRotation;
typedef struct MTH_stMove MTH_stMove;
typedef struct DNM_stReport DNM_stReport;
typedef struct LST2_tdstAnchorToSECT_tdxHandleOfElementLstCharacterDyn LST2_tdstAnchorToSECT_tdxHandleOfElementLstCharacterDyn;
typedef struct GEO_tdstParallelBox_ GEO_tdstParallelBox_;
typedef struct DNM_stParsingDatas DNM_stParsingDatas;
typedef struct DNM_stMecMatCharacteristics DNM_stMecMatCharacteristics;
typedef struct DNM_stMecObstacle DNM_stMecObstacle;
typedef struct LST2_tdstAnchorTotdxHandleToStateOpt LST2_tdstAnchorTotdxHandleToStateOpt;
typedef struct LST2_tdstAnchorTotdxHandleToObjectsTablesListOpt LST2_tdstAnchorTotdxHandleToObjectsTablesListOpt;
typedef struct tdstFamilyList_ tdstFamilyList_;
typedef struct SECT_tdstListOfDNMLights_ SECT_tdstListOfDNMLights_;
typedef struct LST2_tdstAnchorTotdxHandleToFamilyListDyn LST2_tdstAnchorTotdxHandleToFamilyListDyn;
typedef struct LST2_tdstAnchorToSECT_tdxHandleOfElementLstDNMLightsDyn LST2_tdstAnchorToSECT_tdxHandleOfElementLstDNMLightsDyn;
typedef struct tdstMorphChannelList_ tdstMorphChannelList_;
typedef struct LST2_tdstAnchorToCHN_tdxHandleToMorphElementDyn LST2_tdstAnchorToCHN_tdxHandleToMorphElementDyn;
typedef struct SECT_tdstListOfSOSectorsInCollisionInteraction_ SECT_tdstListOfSOSectorsInCollisionInteraction_;
typedef struct COL_tdstBoundingSphere_ COL_tdstBoundingSphere_;
typedef struct DNM_stDynamicsAdvancedBlock DNM_stDynamicsAdvancedBlock;
typedef struct DNM_stDynamicsComplexBlock DNM_stDynamicsComplexBlock;
typedef struct DNM_stDynamics DNM_stDynamics;
typedef struct GEO_tdstEdge_ GEO_tdstEdge_;
typedef struct tdstCouple_ tdstCouple_;
typedef struct tdstInternalStructurCineinfo_ tdstInternalStructurCineinfo_;
typedef struct HIE_tdstModifierObject_ HIE_tdstModifierObject_;
typedef struct SECT_tdstListOfSOSectorsInActivityInteraction_ SECT_tdstListOfSOSectorsInActivityInteraction_;
typedef struct GEO_tdstGeometricObject_ GEO_tdstGeometricObject_;
typedef struct LST2_tdstAnchorToCINE_tdxHandleToCineActorDyn LST2_tdstAnchorToCINE_tdxHandleToCineActorDyn;
typedef struct CINE_tdstCine_ CINE_tdstCine_;
typedef struct stInterpolatedPosition stInterpolatedPosition;
typedef struct tdstAChannel_ tdstAChannel_;
typedef struct SECT_tdstListOfSOSectorsInSoundInteraction_ SECT_tdstListOfSOSectorsInSoundInteraction_;
typedef struct CINE_tdstChannelLink_ CINE_tdstChannelLink_;
typedef struct tdstEngineObject_ tdstEngineObject_;
typedef struct tdstPLA_DeformationLink_ tdstPLA_DeformationLink_;
typedef struct LST2_tdstAnchorToSECT_tdxHandleOfElementLstStaticLightsOpt LST2_tdstAnchorToSECT_tdxHandleOfElementLstStaticLightsOpt;
typedef struct LST2_tdstAnchorToSECT_tdxHandleOfElementLstGraphicInteractionOpt LST2_tdstAnchorToSECT_tdxHandleOfElementLstGraphicInteractionOpt;
typedef struct LST2_tdstAnchorToSECT_tdxHandleOfElementLstCollisionInteractionOpt LST2_tdstAnchorToSECT_tdxHandleOfElementLstCollisionInteractionOpt;
typedef struct LST2_tdstAnchorToSECT_tdxHandleOfElementLstActivityInteractionOpt LST2_tdstAnchorToSECT_tdxHandleOfElementLstActivityInteractionOpt;
typedef struct LST2_tdstAnchorToSECT_tdxHandleOfElementLstSoundInteractionOpt LST2_tdstAnchorToSECT_tdxHandleOfElementLstSoundInteractionOpt;
typedef struct SECT_tdstSector_ SECT_tdstSector_;
typedef struct SECT_tdstListOfStaticLights_ SECT_tdstListOfStaticLights_;
typedef struct GEO_tdstDoubledIndex_ GEO_tdstDoubledIndex_;
typedef struct LST2_tdstAnchorToCINE_tdxHandleToCineDyn LST2_tdstAnchorToCINE_tdxHandleToCineDyn;

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

typedef enum e_ucListViewport_ {
    CAM_e_NoViewport = -1,
} e_ucListViewport_;

typedef enum anon_enum_00baacfc {
    DNM_ObsType_Nothing = 0,
    DNM_ObsType_Scenery = 1,
    DNM_ObsType_Mobile = 2,
    DNM_ObsType_DoubleEdge = 4,
    DNM_ObsType_MobileWall = 9,
    DNM_Dummy_For_Align = 2147483647,
} anon_enum_00baacfc;

typedef enum e_ucCameraStates_ {
    CAM_e_State_GoToOptimal = 0,
    CAM_e_State_GoToComputedOptimal = 1,
    CAM_e_State_FailureVisibility = 2,
    CAM_e_State_FailureVisibilityWithoutCut = 3,
    CAM_e_TempState_GhostMode = 4,
    CAM_e_TempState_ApexMode = 5,
} e_ucCameraStates_;

struct MTH3D_tdstVector_ {
    float xX; /* +0x0 */
    float xY; /* +0x4 */
    float xZ; /* +0x8 */
};

typedef union CAM_tduVectorCopy_ {
    MTH3D_tdstVector_ stVector;
    unsigned int auWords[3];
} CAM_tduVectorCopy_;

struct SECT_tdstListOfSOSectorsInGraphicInteraction_ {
    short wLevelOfDetail; /* +0x0 */
    char cDisplayMode; /* +0x2 */
    HIE_tdstSuperObject_* hPointerOfSectorSO; /* +0x4 */
};

union HIE_tduLinkedObject_ {
    HIE_tdstSuperObject_* p_stSuperObject; /* +0x0 */
    GEO_tdstGeometricObject_* p_stGeometricObject; /* +0x0 */
    PO_tdstPhysicalObject_* p_stPhysicalObject; /* +0x0 */
    IPO_tdstInstanciatedPhysicalObject_* p_stInstanciatedPhysicalObject; /* +0x0 */
    SECT_tdstSector_* p_stSector; /* +0x0 */
    tdstEngineObject_* p_stCharacter; /* +0x0 */
    GLI_tdstLight_* p_stLight; /* +0x0 */
    HIE_tdstModifierObject_* p_stModifierObject; /* +0x0 */
    int p_Void; /* +0x0 */
};

struct HIE_tdstSuperObject_ {
    unsigned int ulTypeOfLinkedObject; /* +0x0 */
    HIE_tduLinkedObject_ hLinkedObject; /* +0x4 */
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
    int hVisualBoundingVolume; /* +0x34 */
    int hCollideBoundingVolume; /* +0x38 */
    MTH3D_tdstVector_ stSemiLookAtVector; /* +0x3c */
    float fTransparenceLevel; /* +0x48 */
    unsigned int ulOutlineColor; /* +0x4c */
    int lDisplayPrioriry; /* +0x50 */
    int lIL_Status; /* +0x54 */
    MTH3D_tdstVector_ stIL_AmbientColor; /* +0x58 */
    MTH3D_tdstVector_ stIL_ParallelDirection; /* +0x64 */
    MTH3D_tdstVector_ stIL_ParallelColor; /* +0x70 */
    unsigned char ucSuperImposedOnWhichViewport; /* +0x7c */
    unsigned char bIsSPO; /* +0x7d */
    unsigned char xTransition; /* +0x7e */
};

struct tdstSubAnim_ {
    tdstAnim3d_* p_stSubAnim; /* +0x0 */
};

struct LST2_tdstAnchorToCINE_tdxHandleToChannelLinkDyn {
    CINE_tdstChannelLink_* hFirstElementDyn; /* +0x0 */
    CINE_tdstChannelLink_* hLastElementDyn; /* +0x4 */
    int lNumberOfElementsDyn; /* +0x8 */
};

struct CINE_tdstCineActor_ {
    tdstSubAnim_ stSubAnim; /* +0x0 */
    tdstSubAnimInUse_* hSubAnimInUse; /* +0x4 */
    char szAnimation[255]; /* +0x8 */
    tdstEngineObject_* p_stActor; /* +0x108 */
    tdstState_* p_stStateAfterCine; /* +0x10c */
    tdstState_* p_stStateDuringCine; /* +0x110 */
    tdstState_* p_stTmpStateForActor; /* +0x114 */
    unsigned char bSkipIA; /* +0x118 */
    unsigned char bSkipMeca; /* +0x119 */
    unsigned char bPreviousIAState; /* +0x11a */
    unsigned char bPreviousMecaState; /* +0x11b */
    unsigned char ucRepeatAnimation; /* +0x11c */
    signed char scSpeedAnim; /* +0x11d */
    unsigned char bMoveActorAtTheBegin; /* +0x11e */
    HIE_tdstSuperObject_* hSPORef; /* +0x120 */
    unsigned char bMoveActorAtTheEnd; /* +0x124 */
    unsigned short usChannel; /* +0x126 */
    unsigned char bPlayingAnim; /* +0x128 */
    unsigned char bIsASubAnim; /* +0x129 */
    unsigned char bChangeComportBegin; /* +0x12a */
    tdstComport_* p_stIntelBegin; /* +0x12c */
    unsigned char bChangeReflexBegin; /* +0x130 */
    tdstComport_* p_stReflexBegin; /* +0x134 */
    unsigned char bChangeComportEnd; /* +0x138 */
    tdstComport_* p_stIntelEnd; /* +0x13c */
    unsigned char bChangeReflexEnd; /* +0x140 */
    tdstComport_* p_stReflexEnd; /* +0x144 */
    unsigned char bUseSoundRequestBegin; /* +0x148 */
    unsigned char bUseVoiceRequestBegin; /* +0x149 */
    unsigned char bUseMusicRequestBegin; /* +0x14a */
    unsigned char bUseAmbianceRequestBegin; /* +0x14b */
    _SND_tdstBlockEvent* pSoundRequestBegin; /* +0x14c */
    _SND_tdstBlockEvent* pVoiceRequestBegin; /* +0x150 */
    _SND_tdstBlockEvent* pMusicRequestBegin; /* +0x154 */
    _SND_tdstBlockEvent* pAmbianceRequestBegin; /* +0x158 */
    unsigned char bUseSoundRequestEnd; /* +0x15c */
    unsigned char bUseVoiceRequestEnd; /* +0x15d */
    unsigned char bUseMusicRequestEnd; /* +0x15e */
    unsigned char bUseAmbianceRequestEnd; /* +0x15f */
    _SND_tdstBlockEvent* pSoundRequestEnd; /* +0x160 */
    _SND_tdstBlockEvent* pVoiceRequestEnd; /* +0x164 */
    _SND_tdstBlockEvent* pMusicRequestEnd; /* +0x168 */
    _SND_tdstBlockEvent* pAmbianceRequestEnd; /* +0x16c */
    CINE_tdstCine_* pCine; /* +0x170 */
    LST2_tdstAnchorToCINE_tdxHandleToChannelLinkDyn hChannelLink; /* +0x174 */
    CINE_tdstCineActor_* hNextBrotherDyn; /* +0x180 */
    CINE_tdstCineActor_* hPrevBrotherDyn; /* +0x184 */
    LST2_tdstAnchorToCINE_tdxHandleToCineActorDyn* hFatherDyn; /* +0x188 */
};

struct LST2_tdstAnchorToSCT_tdxHandleOfLstSoundEventOpt {
    SCT_tdstListOfSoundEvent_* hFirstElementOpt; /* +0x0 */
    int lNumberOfElementsOpt; /* +0x4 */
};

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
    MAT_tdstTransformation_ m_stPreviousMatrix; /* +0x80 */
    MAT_tdstTransformation_ m_stCurrentMatrix; /* +0xe0 */
    MTH3D_tdstMatrix_ m_stImposeRotationMatrix; /* +0x140 */
    unsigned char m_ucNbFrame; /* +0x164 */
    DNM_stReport* m_pstReport; /* +0x168 */
};

union _SND_tduRefEvt {
    unsigned int Id; /* +0x0 */
    _SND_tdstBlockEvent* pstPtr; /* +0x0 */
};

struct SCT_tdstListOfSoundEvent_ {
    HIE_tdstSuperObject_* hPointerOfSectorSO; /* +0x0 */
    _SND_tduRefEvt uSoundEvent; /* +0x4 */
};

struct tdstEventInTable_ {
    int p_xEvent; /* +0x0 */
    unsigned char ucTypeOfEvent; /* +0x4 */
    unsigned char ucPriority; /* +0x5 */
    unsigned char ucFirstCall; /* +0x6 */
    unsigned char ucPeriod; /* +0x7 */
    unsigned int u32SemaphoreId; /* +0x8 */
};

struct tdstEvent_ {
    tdstEventInTable_* p_stfEventInTBL; /* +0x0 */
    unsigned short usEventNumberInTBL; /* +0x4 */
    unsigned short uwFrameNumber; /* +0x6 */
    unsigned short uwChannelNumber; /* +0x8 */
    unsigned short uwIsLocalized; /* +0xa */
};

struct LST2_tdstAnchorTotdxHandleToSubAnimOpt {
    tdstSubAnim_* hFirstElementOpt; /* +0x0 */
    int lNumberOfElementsOpt; /* +0x4 */
};

struct stMorphData {
    unsigned short uwChannelNumber; /* +0x0 */
    unsigned short uwFrameNumber; /* +0x2 */
    unsigned char ucNbTarget; /* +0x4 */
    unsigned char ucAlign[3]; /* +0x5 */
    short a_xIndexTargetMT[10]; /* +0x8 */
    unsigned char a_ucMorphingAmountMT[10]; /* +0x1c */
};

struct tdstAveragePosition_ {
    MTH3D_tdstVector_ a_CheckedSpeed[8]; /* +0x0 */
    MTH3D_tdstVector_ a_CheckedPos[8]; /* +0x60 */
    float a_CheckedTime[8]; /* +0xc0 */
};

struct tdstAnim3d_ {
    unsigned short uwNumberOfFrames; /* +0x0 */
    unsigned char ucFrameRate; /* +0x2 */
    unsigned char ucMaxNumberOfElements; /* +0x3 */
    tdstEvent_* d_stAnimEvent; /* +0x4 */
    stMorphData* d_stMorphDataArray; /* +0x8 */
    unsigned short uwNumOfA3dGENERAL; /* +0xc */
    unsigned char ucNumberOfEvents; /* +0xe */
    unsigned char ucFlagMergeAnim; /* +0xf */
};

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

struct DNM_stObstacle {
    float m_xRate; /* +0x0 */
    MTH3D_tdstVector_ m_stNorm; /* +0x4 */
    MTH3D_tdstVector_ m_stContact; /* +0x10 */
    GMT_tdstGameMaterial_* hMyMaterial; /* +0x1c */
    GMT_tdstGameMaterial_* hCollidedMaterial; /* +0x20 */
    HIE_tdstSuperObject_* mp_stSupObj; /* +0x24 */
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

struct tdstSubAnimInUse_ {
    tdstSubAnimInUse_* hNextBrotherDyn; /* +0x0 */
    tdstSubAnimInUse_* hPrevBrotherDyn; /* +0x4 */
    LST2_tdstAnchorTotdxHandleToSubAnimInUseDyn* hFatherDyn; /* +0x8 */
    tdstSubAnim_* p_stTheSubAnim; /* +0xc */
    int d_ucEventActivation; /* +0x10 */
    unsigned int ulStartFrame; /* +0x14 */
    unsigned int ulCustombit; /* +0x18 */
    unsigned int ulLoop; /* +0x1c */
    float xFrameNumber; /* +0x20 */
    unsigned char ucNextEvent; /* +0x24 */
    unsigned char bStop; /* +0x25 */
    unsigned char bMerge; /* +0x26 */
};

struct tdstBrain_ {
    AI_tdstMind_* p_stMind; /* +0x0 */
    GMT_tdstGameMaterial_* hLastCollidedGoThroughMaterial; /* +0x4 */
    unsigned char bWarnMechanicsFlag; /* +0x8 */
    unsigned char bActiveDuringTransition; /* +0x9 */
};

struct tdstSightAxisSystem_ {
    MTH3D_tdstVector_ SightAxis; /* +0x0 */
    MTH3D_tdstVector_ FirstComplementaryAxis; /* +0xc */
    MTH3D_tdstVector_ SecondComplementaryAxis; /* +0x18 */
};

struct tdstTransparentSuperObjectForCamera_ {
    HIE_tdstSuperObject_* hSuperObject; /* +0x0 */
    int lInitialDrawMask; /* +0x4 */
    float fInitialTransparenceLevel; /* +0x8 */
    float fCurrentTransparencyLevel; /* +0xc */
    unsigned char bIncrease; /* +0x10 */
};

struct tdstCineinfo_ {
    tdstInternalStructurCineinfo_* hInit; /* +0x0 */
    tdstInternalStructurCineinfo_* hCurrent; /* +0x4 */
    tdstInternalStructurCineinfo_* hVisibility; /* +0x8 */
    tdstInternalStructurCineinfo_* hWork; /* +0xc */
    MTH3D_tdstVector_ stLastFailedOrigin; /* +0x10 */
    MTH3D_tdstVector_ stLastFailedWanted; /* +0x1c */
    MTH3D_tdstVector_ stForceTarget; /* +0x28 */
    MTH3D_tdstVector_ stForcePosition; /* +0x34 */
    MTH3D_tdstVector_ stForceRefAxisY; /* +0x40 */
    MTH3D_tdstVector_ stForceRefAxisZ; /* +0x4c */
    float xApexRatio; /* +0x58 */
    float xLastDeltaCut; /* +0x5c */
    e_ucCameraStates_ eState; /* +0x60 */
    float xCounter1; /* +0x64 */
    float xCounter2; /* +0x68 */
    float xCounter3; /* +0x6c */
    float xCounter4; /* +0x70 */
    unsigned char ucVolIAFlags; /* +0x74 */
    unsigned char ucPerIAFlags; /* +0x75 */
    char cLastCutAngleSens; /* +0x76 */
    tdstAveragePosition_ AveragePosition; /* +0x78 */
    tdstSightAxisSystem_ stSightAxisSystem; /* +0x158 */
    unsigned char bCanDoBestPos; /* +0x17c */
    tdstTransparentSuperObjectForCamera_ a10_stTransparentSuperObjectForCamera[10]; /* +0x180 */
    short xNumberOfTransparentSuperObjectForCamera; /* +0x248 */
    float fTransparency; /* +0x24c */
    float fTransparencySpeed; /* +0x250 */
    unsigned char ucTransparencyFlag; /* +0x254 */
    unsigned char bCameraIsMirrored; /* +0x255 */
    unsigned char bLightComputation; /* +0x256 */
};

struct tdstElement3d_ {
    unsigned short wElement : 15; /* bit 0, byte +0x0 */
    unsigned short bf1ActiveStatus : 1; /* bit 15, byte +0x0 */
    unsigned char ucChannelNumber; /* +0x2 */
    unsigned char eTypeOfElement; /* +0x3 */
    unsigned char ucTransparency; /* +0x4 */
    unsigned char ucAnimLevel; /* +0x5 */
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

struct GMT_tdstGameMaterial_ {
    int hSoundMaterial; /* +0x0 */
    GMT_tdstCollideMaterial_* hCollideMaterial; /* +0x4 */
};

struct SECT_tdstListOfSOCharacters_ {
    HIE_tdstSuperObject_* hPointerOfCharacter; /* +0x0 */
    SECT_tdstListOfSOCharacters_* hNextBrotherDyn; /* +0x4 */
    SECT_tdstListOfSOCharacters_* hPrevBrotherDyn; /* +0x8 */
    LST2_tdstAnchorToSECT_tdxHandleOfElementLstCharacterDyn* hFatherDyn; /* +0xc */
};

struct GMT_tdstCollideMaterial_ {
    short wTypeOfZone; /* +0x0 */
    unsigned short xIdentifier; /* +0x2 */
    MTH3D_tdstVector_ stDirection; /* +0x4 */
    float xCoeff; /* +0x10 */
    unsigned short wTypeForAi; /* +0x14 */
};

struct tdstLipsSynchValue_ {
    char cCode; /* +0x0 */
    float xX; /* +0x4 */
    float xY; /* +0x8 */
    float xZ; /* +0xc */
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

struct LST2_tdstAnchorToSECT_tdxHandleOfElementLstCharacterDyn {
    SECT_tdstListOfSOCharacters_* hFirstElementDyn; /* +0x0 */
    SECT_tdstListOfSOCharacters_* hLastElementDyn; /* +0x4 */
    int lNumberOfElementsDyn; /* +0x8 */
};

struct GEO_tdstParallelBox_ {
    MTH4D_tdstVector_ stMinPoint; /* +0x0 */
    MTH4D_tdstVector_ stMaxPoint; /* +0x10 */
};

struct DNM_stParsingDatas {
    MTH3D_tdstVector_ stPosition; /* +0x0 */
    float xOutAlpha; /* +0xc */
    MTH3D_tdstVector_ stVector; /* +0x10 */
};

struct DNM_stMecMatCharacteristics {
    float m_xSlide; /* +0x0 */
    float m_xRebound; /* +0x4 */
};

struct DNM_stMecObstacle {
    float m_xRate; /* +0x0 */
    MTH3D_tdstVector_ m_stNorm; /* +0x4 */
    MTH3D_tdstVector_ m_stContact; /* +0x10 */
    GMT_tdstGameMaterial_* hMyMaterial; /* +0x1c */
    GMT_tdstGameMaterial_* hCollidedMaterial; /* +0x20 */
    HIE_tdstSuperObject_* mp_stSupObj; /* +0x24 */
    anon_enum_00baacfc m_eType; /* +0x28 */
    short m_xMyEntity; /* +0x2c */
    short m_xCollidedEntity; /* +0x2e */
    MTH3D_tdstVector_ m_stTranslation; /* +0x30 */
    MTH3D_tdstVector_ m_stZoneMove; /* +0x3c */
    MTH3D_tdstVector_ m_stZonePosition; /* +0x48 */
    float m_xZoneRadius; /* +0x54 */
    DNM_stMecMatCharacteristics m_stProperties; /* +0x58 */
    DNM_stMecMatCharacteristics m_stMyProperties; /* +0x60 */
};

struct LST2_tdstAnchorTotdxHandleToStateOpt {
    tdstState_* hFirstElementOpt; /* +0x0 */
    int lNumberOfElementsOpt; /* +0x4 */
};

struct LST2_tdstAnchorTotdxHandleToObjectsTablesListOpt {
    tdstObjectsTablesList_* hFirstElementOpt; /* +0x0 */
    int lNumberOfElementsOpt; /* +0x4 */
};

struct tdstFamilyList_ {
    tdstFamilyList_* hNextBrotherDyn; /* +0x0 */
    tdstFamilyList_* hPrevBrotherDyn; /* +0x4 */
    LST2_tdstAnchorTotdxHandleToFamilyListDyn* hFatherDyn; /* +0x8 */
    int otObjectFamilyType; /* +0xc */
    LST2_tdstAnchorTotdxHandleToStateOpt hForStateArray; /* +0x10 */
    LST2_tdstAnchorTotdxHandleToSubAnimOpt hForSubAnimArray; /* +0x18 */
    tdstObjectsTablesList_* h_DefaultObjectsTable; /* +0x20 */
    LST2_tdstAnchorTotdxHandleToObjectsTablesListOpt hForObjectsTablesList; /* +0x24 */
    COL_tdstBoundingSphere_* hBoundingSphere; /* +0x2c */
    tdstLipsSynchValue_* ax_stLipsSynchValues; /* +0x30 */
    unsigned int ulNumberLipSynchValues; /* +0x34 */
    unsigned int ulLipsChannel; /* +0x38 */
    unsigned int ulNumberOfChannels; /* +0x3c */
    unsigned char ucPriority; /* +0x40 */
    unsigned char ucOptimized; /* +0x41 */
    unsigned char ucStorageBank; /* +0x42 */
    unsigned char ucProperties; /* +0x43 */
};

struct SECT_tdstListOfDNMLights_ {
    GLI_tdstLight_* hDNMLights; /* +0x0 */
    SECT_tdstListOfDNMLights_* hNextBrotherDyn; /* +0x4 */
    SECT_tdstListOfDNMLights_* hPrevBrotherDyn; /* +0x8 */
    LST2_tdstAnchorToSECT_tdxHandleOfElementLstDNMLightsDyn* hFatherDyn; /* +0xc */
};

struct LST2_tdstAnchorTotdxHandleToFamilyListDyn {
    tdstFamilyList_* hFirstElementDyn; /* +0x0 */
    tdstFamilyList_* hLastElementDyn; /* +0x4 */
    int lNumberOfElementsDyn; /* +0x8 */
};

struct LST2_tdstAnchorToSECT_tdxHandleOfElementLstDNMLightsDyn {
    SECT_tdstListOfDNMLights_* hFirstElementDyn; /* +0x0 */
    SECT_tdstListOfDNMLights_* hLastElementDyn; /* +0x4 */
    int lNumberOfElementsDyn; /* +0x8 */
};

struct tdstMorphChannelList_ {
    tdstMorphChannelList_* hNextBrotherDyn; /* +0x0 */
    tdstMorphChannelList_* hPrevBrotherDyn; /* +0x4 */
    LST2_tdstAnchorToCHN_tdxHandleToMorphElementDyn* hFatherDyn; /* +0x8 */
    unsigned short uwChannelNumber; /* +0xc */
    short MorphListIndex; /* +0xe */
};

struct LST2_tdstAnchorToCHN_tdxHandleToMorphElementDyn {
    tdstMorphChannelList_* hFirstElementDyn; /* +0x0 */
    tdstMorphChannelList_* hLastElementDyn; /* +0x4 */
    int lNumberOfElementsDyn; /* +0x8 */
};

struct SECT_tdstListOfSOSectorsInCollisionInteraction_ {
    HIE_tdstSuperObject_* hPointerOfSectorSO; /* +0x0 */
};

struct COL_tdstBoundingSphere_ {
    MTH4D_tdstVector_ stCenterPoint; /* +0x0 */
    float xRadius; /* +0x10 */
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
    DNM_stDynamicsComplexBlock m_tdstDynamicsComplexBlock; /* +0x200 */
};

struct GEO_tdstEdge_ {
    short xPoints[2]; /* +0x0 */
    MTH3D_tdstVector_ st_VectorPoints[2]; /* +0x4 */
};

struct tdstCouple_ {
    unsigned short wChild; /* +0x0 */
    unsigned short wFather; /* +0x2 */
};

struct tdstInternalStructurCineinfo_ {
    MTH3D_tdstVector_ stShiftTarget; /* +0x0 */
    MTH3D_tdstVector_ stShiftPos; /* +0xc */
    float xDistMin; /* +0x18 */
    float xDistMax; /* +0x1c */
    float xBoundDistMin; /* +0x20 */
    float xBoundDistMax; /* +0x24 */
    float xAngleAlpha; /* +0x28 */
    float xAngleShiftAlpha; /* +0x2c */
    float xAngleTheta; /* +0x30 */
    float xAngleShiftTheta; /* +0x34 */
    float xLinearSpeed; /* +0x38 */
    float xLinearIncreaseSpeed; /* +0x3c */
    float xLinearDecreaseSpeed; /* +0x40 */
    float xAngularSpeed; /* +0x44 */
    float xAngularIncreaseSpeed; /* +0x48 */
    float xAngularDecreaseSpeed; /* +0x4c */
    float xTargetSpeed; /* +0x50 */
    float xTargetIncreaseSpeed; /* +0x54 */
    float xTargetDecreaseSpeed; /* +0x58 */
    float xFocal; /* +0x5c */
    float xZMin; /* +0x60 */
    float xZMax; /* +0x64 */
    HIE_tdstSuperObject_* hSuperObjectTargeted; /* +0x68 */
    HIE_tdstSuperObject_* hSecondSuperObjectTargeted; /* +0x6c */
    unsigned short uwDNMFlags; /* +0x70 */
    unsigned short uwIAFlags; /* +0x72 */
    e_ucListViewport_ eTypeOfViewport; /* +0x74 */
    char cChannel; /* +0x78 */
    unsigned char bIsActive; /* +0x79 */
    unsigned char bDebugCamera; /* +0x7a */
};

struct HIE_tdstModifierObject_ {
    GEO_tdstGeometricObject_* p_stGeometricObject; /* +0x0 */
    int lMulIntensity; /* +0x4 */
    int lAddIntensity; /* +0x8 */
};

struct SECT_tdstListOfSOSectorsInActivityInteraction_ {
    HIE_tdstSuperObject_* hPointerOfSectorSO; /* +0x0 */
};

struct GEO_tdstGeometricObject_ {
    MTH3D_tdstVector_* d_stListOfPoints; /* +0x0 */
    MTH3D_tdstVector_* d_stListOfPointsNormals; /* +0x4 */
    int d_dfVertexTransparency; /* +0x8 */
    int d_xListOfElementsTypes; /* +0xc */
    int d_stListOfElements; /* +0x10 */
    GEO_tdstEdge_* d_stListOfEdges; /* +0x14 */
    GEO_tdstParallelBox_* d_stListOfParallelBoxes; /* +0x18 */
    unsigned int ulType; /* +0x1c */
    short xNbPoints; /* +0x20 */
    short xNbElements; /* +0x22 */
    short xNbEdges; /* +0x24 */
    short xNbParallelBoxes; /* +0x26 */
    float xBoudingSphereRadius; /* +0x28 */
    unsigned char _extractor_padding_00[4]; /* implicitly added by extractor; +0x2c..0x2f */
    MTH4D_tdstVector_ xBoudingSphereCenter; /* +0x30 */
    GEO_tdstDoubledIndex_* d_stListOfEdgesDI; /* +0x40 */
    short xNbEdgesDI; /* +0x44 */
    short xNbOctreeEdges; /* +0x46 */
    int bUsedForShadowDrawing; /* +0x48 */
    int bUsedForShadowCreating; /* +0x4c */
    int pSDC_Data; /* +0x50 */
    unsigned int bIsStatic; /* +0x54 */
    unsigned int glDisplayList; /* +0x58 */
    unsigned char bVTForSinus; /* +0x5c */
};

struct LST2_tdstAnchorToCINE_tdxHandleToCineActorDyn {
    CINE_tdstCineActor_* hFirstElementDyn; /* +0x0 */
    CINE_tdstCineActor_* hLastElementDyn; /* +0x4 */
    int lNumberOfElementsDyn; /* +0x8 */
};

struct CINE_tdstCine_ {
    LST2_tdstAnchorToCINE_tdxHandleToCineActorDyn hActorList; /* +0x0 */
    CINE_tdstCine_* hNextBrotherDyn; /* +0xc */
    CINE_tdstCine_* hPrevBrotherDyn; /* +0x10 */
    LST2_tdstAnchorToCINE_tdxHandleToCineDyn* hFatherDyn; /* +0x14 */
    unsigned char bPlaying; /* +0x18 */
    int lGenerateEvent; /* +0x1c */
    char szName[255]; /* +0x20 */
};

struct stInterpolatedPosition {
    float stRot[4]; /* +0x0 */
    float stRotSca[4]; /* +0x10 */
    MTH3D_tdstVector_ stPos; /* +0x20 */
    MTH3D_tdstVector_ stVecSca; /* +0x2c */
    float xPercent; /* +0x38 */
};

struct tdstAChannel_ {
    HIE_tdstSuperObject_* hSupObject; /* +0x0 */
    HIE_tdstSuperObject_* hZoomSupObject; /* +0x4 */
    tdstAChannel_* p_stNextActiveChannel; /* +0x8 */
    tdstAChannel_* p_stFatherChannel; /* +0xc */
    stInterpolatedPosition ax_InterpolatedPositions[2]; /* +0x10 */
    unsigned char ucNbInterpolatedPositions; /* +0x88 */
    unsigned char bControlledChannel; /* +0x89 */
    unsigned char bLipsChannel; /* +0x8a */
    unsigned char bActiveChannel; /* +0x8b */
};

struct SECT_tdstListOfSOSectorsInSoundInteraction_ {
    HIE_tdstSuperObject_* hPointerOfSectorSO; /* +0x0 */
    int lVolume; /* +0x4 */
};

struct CINE_tdstChannelLink_ {
    HIE_tdstSuperObject_* hSPOLinked; /* +0x0 */
    int lIndexOfChannel; /* +0x4 */
    CINE_tdstChannelLink_* hNextBrotherDyn; /* +0x8 */
    CINE_tdstChannelLink_* hPrevBrotherDyn; /* +0xc */
    LST2_tdstAnchorToCINE_tdxHandleToChannelLinkDyn* hFatherDyn; /* +0x10 */
};

struct tdstEngineObject_ {
    tdst3dData_* h_3dData; /* +0x0 */
    tdstStandardGame_* h_StandardGame; /* +0x4 */
    tdstDynam_* h_Dynam; /* +0x8 */
    tdstBrain_* h_Brain; /* +0xc */
    tdstCineinfo_* h_Cineinfo; /* +0x10 */
    tdstCollSet_* h_CollSet; /* +0x14 */
    tdstMSWay_* h_MSWay; /* +0x18 */
    tdstMSLight_* h_MSLight; /* +0x1c */
    tdstSectInfo_* h_SectInfo; /* +0x20 */
    tdstMicro_* h_Micro; /* +0x24 */
    tdstMSSound_* h_MSSound; /* +0x28 */
};

struct tdstPLA_DeformationLink_ {
    unsigned short wChannel1; /* +0x0 */
    unsigned short wBorder1; /* +0x2 */
    unsigned short wChannel2; /* +0x4 */
    unsigned short wBorder2; /* +0x6 */
};

struct LST2_tdstAnchorToSECT_tdxHandleOfElementLstStaticLightsOpt {
    SECT_tdstListOfStaticLights_* hFirstElementOpt; /* +0x0 */
    int lNumberOfElementsOpt; /* +0x4 */
};

struct LST2_tdstAnchorToSECT_tdxHandleOfElementLstGraphicInteractionOpt {
    SECT_tdstListOfSOSectorsInGraphicInteraction_* hFirstElementOpt; /* +0x0 */
    int lNumberOfElementsOpt; /* +0x4 */
};

struct LST2_tdstAnchorToSECT_tdxHandleOfElementLstCollisionInteractionOpt {
    SECT_tdstListOfSOSectorsInCollisionInteraction_* hFirstElementOpt; /* +0x0 */
    int lNumberOfElementsOpt; /* +0x4 */
};

struct LST2_tdstAnchorToSECT_tdxHandleOfElementLstActivityInteractionOpt {
    SECT_tdstListOfSOSectorsInActivityInteraction_* hFirstElementOpt; /* +0x0 */
    int lNumberOfElementsOpt; /* +0x4 */
};

struct LST2_tdstAnchorToSECT_tdxHandleOfElementLstSoundInteractionOpt {
    SECT_tdstListOfSOSectorsInSoundInteraction_* hFirstElementOpt; /* +0x0 */
    int lNumberOfElementsOpt; /* +0x4 */
};

struct SECT_tdstSector_ {
    LST2_tdstAnchorToSECT_tdxHandleOfElementLstCharacterDyn stListOfCharacters; /* +0x0 */
    LST2_tdstAnchorToSECT_tdxHandleOfElementLstStaticLightsOpt stListOfStaticLights; /* +0xc */
    LST2_tdstAnchorToSECT_tdxHandleOfElementLstDNMLightsDyn stListOfDNMLights; /* +0x14 */
    LST2_tdstAnchorToSECT_tdxHandleOfElementLstGraphicInteractionOpt stListOfSectorsInGraphicInteraction; /* +0x20 */
    LST2_tdstAnchorToSECT_tdxHandleOfElementLstCollisionInteractionOpt stListOfSectorsInCollisionInteraction; /* +0x28 */
    LST2_tdstAnchorToSECT_tdxHandleOfElementLstActivityInteractionOpt stListOfSectorsInActivityInteraction; /* +0x30 */
    LST2_tdstAnchorToSECT_tdxHandleOfElementLstSoundInteractionOpt stListOfSectorsInSoundInteraction; /* +0x38 */
    LST2_tdstAnchorToSCT_tdxHandleOfLstSoundEventOpt stListOfSoundEvent; /* +0x40 */
    MTH3D_tdstVector_ stMinMaxPoints[2]; /* +0x48 */
    float xZFar; /* +0x60 */
    unsigned char xVirtual; /* +0x64 */
    char cCameraType; /* +0x65 */
    char cCounter; /* +0x66 */
    char cPriority; /* +0x67 */
    int pSkyVisualMaterial; /* +0x68 */
    unsigned char FogIntensity; /* +0x6c */
    HIE_tdstSuperObject_* h_PreviousSectorInList; /* +0x70 */
    HIE_tdstSuperObject_* h_NextSectorInList; /* +0x74 */
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

struct SECT_tdstListOfStaticLights_ {
    GLI_tdstLight_* hStaticLights; /* +0x0 */
};

struct GEO_tdstDoubledIndex_ {
    short a2_xIndex[2]; /* +0x0 */
};

struct LST2_tdstAnchorToCINE_tdxHandleToCineDyn {
    CINE_tdstCine_* hFirstElementDyn; /* +0x0 */
    CINE_tdstCine_* hLastElementDyn; /* +0x4 */
    int lNumberOfElementsDyn; /* +0x8 */
};

int g_a_stObstacle;

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\MEC\DNMCame.c lines 24–161 */
/* addr: 0x002fea00  size: 372 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 24
 *   +0x0004 -> line 25
 *   +0x0008 -> line 26
 *   +0x000c -> line 27
 *   +0x0010 -> line 29
 *   +0x0014 -> line 31
 *   +0x0018 -> line 32
 *   +0x001c -> line 33
 *   +0x0020 -> line 34
 *   +0x0024 -> line 36
 *   +0x0028 -> line 37
 *   +0x002c -> line 38
 *   +0x0030 -> line 39
 *   +0x0034 -> line 40
 *   +0x0038 -> line 41
 *   +0x003c -> line 42
 *   +0x0040 -> line 43
 *   +0x0044 -> line 44
 *   +0x0048 -> line 45
 *   +0x004c -> line 46
 *   +0x0050 -> line 47
 *   +0x0054 -> line 49
 *   +0x0058 -> line 50
 *   +0x005c -> line 52
 *   +0x0060 -> line 53
 *   +0x0064 -> line 54
 *   +0x0068 -> line 55
 *   +0x006c -> line 56
 *   +0x0070 -> line 57
 *   +0x0074 -> line 58
 *   +0x0078 -> line 59
 *   +0x007c -> line 60
 *   +0x0080 -> line 61
 *   +0x0084 -> line 62
 *   +0x0088 -> line 63
 *   +0x008c -> line 64
 *   +0x0090 -> line 65
 *   +0x0094 -> line 66
 *   +0x0098 -> line 67
 *   +0x009c -> line 69
 *   +0x00a0 -> line 70
 *   +0x00a4 -> line 71
 *   +0x00a8 -> line 72
 *   +0x00ac -> line 74
 *   +0x00b0 -> line 75
 *   +0x00b4 -> line 77
 *   +0x00b8 -> line 78
 *   +0x00bc -> line 86
 *   +0x00c0 -> line 87
 *   +0x00c4 -> line 88
 *   +0x00c8 -> line 89
 *   +0x00cc -> line 90
 *   +0x00d0 -> line 91
 *   +0x00d4 -> line 93
 *   +0x00d8 -> line 95
 *   +0x00dc -> line 96
 *   +0x00e0 -> line 97
 *   +0x00e4 -> line 98
 *   +0x00e8 -> line 99
 *   +0x00ec -> line 100
 *   +0x00f0 -> line 102
 *   +0x00f4 -> line 103
 *   +0x00f8 -> line 105
 *   +0x00fc -> line 106
 *   +0x0100 -> line 107
 *   +0x0104 -> line 108
 *   +0x0108 -> line 110
 *   +0x010c -> line 111
 *   +0x0110 -> line 112
 *   +0x0114 -> line 113
 *   +0x0118 -> line 115
 *   +0x011c -> line 116
 *   +0x0120 -> line 118
 *   +0x0124 -> line 119
 *   +0x0128 -> line 121
 *   +0x012c -> line 122
 *   +0x0130 -> line 130
 *   +0x0134 -> line 131
 *   +0x0138 -> line 135
 *   +0x013c -> line 136
 *   +0x0140 -> line 137
 *   +0x0144 -> line 138
 *   +0x0148 -> line 139
 *   +0x014c -> line 140
 *   +0x0150 -> line 141
 *   +0x0154 -> line 143
 *   +0x0158 -> line 145
 *   +0x015c -> line 146
 *   +0x0160 -> line 147
 *   +0x0164 -> line 148
 *   +0x0168 -> line 152
 *   +0x016c -> line 160
 *   +0x0170 -> line 161
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void MTH4D_fn_vSerialMul4DMatrix3DVertexTo4DAlignedDest_VU0(void)
{
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\MEC\DNMCame.c lines 1359–1432 */
/* addr: 0x002feb80  size: 520 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1359
 *   +0x003c -> line 1378
 *   +0x0044 -> line 1394
 *   +0x0050 -> line 1395
 *   +0x006c -> line 1394
 *   +0x0084 -> line 1395
 *   +0x0094 -> line 1408
 *   +0x009c -> line 1409
 *   +0x00a0 -> line 1415
 *   +0x00a8 -> line 1409
 *   +0x00bc -> line 1415
 *   +0x00dc -> line 1416
 *   +0x01a8 -> line 1428
 *   +0x01b0 -> line 1429
 *   +0x01b4 -> line 1431
 *   +0x01b8 -> line 1429
 *   +0x01d4 -> line 1432
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
DNM_stDynamics* DNM_p_stDynamicsCameraMechanics(DNM_stDynamics* _p_stDynamics, HIE_tdstSuperObject_* _hSupObj, DNM_stParsingDatas* _p_stParsingDatas, void* _h_MecIdCard, float _xDT)
{
    MTH3D_tdstVector_ stPosition1;
    MTH3D_tdstVector_ stTarget;
    MTH3D_tdstVector_ stPosition;
    DNM_stMecObstacle stObstacle;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\MEC\DNMCame.c lines 1236–1265 */
/* addr: 0x002fed90  size: 1016 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1236
 *   +0x0004 -> line 1245
 *   +0x0008 -> line 1236
 *   +0x000c -> line 1245
 *   +0x0010 -> line 1236
 *   +0x0014 -> line 1245
 *   +0x0018 -> line 1236
 *   +0x0030 -> line 1241
 *   +0x0064 -> line 1244
 *   +0x007c -> line 1245
 *   +0x0110 -> line 1246
 *   +0x0170 -> line 1249
 *   +0x0184 -> line 1251
 *   +0x01c0 -> line 1252
 *   +0x01cc -> line 1255
 *   +0x0220 -> line 1256
 *   +0x0264 -> line 1258
 *   +0x0270 -> line 1259
 *   +0x02c4 -> line 1261
 *   +0x0328 -> line 1263
 *   +0x037c -> line 1264
 *   +0x03dc -> line 1265
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void CAM_fn_vComputeCameraSystemAxis(DNM_stDynamics* _p_stDynamics, HIE_tdstSuperObject_* _h_SupObj, MTH3D_tdstVector_* _p_stNewPosition, MTH3D_tdstVector_* _p_stNewTarget, MTH3D_tdstVector_* _p_stAxisX, MTH3D_tdstVector_* _p_stAxisY, MTH3D_tdstVector_* _p_stAxisZ)
{
    float xYValue;
    float xZValue;
    float xAbsoluteValue;
    float xValue;
    float xSquaredNorm;
    float xEpsilon;
    float xLimit;
    float xFinalZ;
    int var_v1;
    int temp_v1;
    int var_v0;
    int var_v1_2;
    CAM_tduVectorCopy_ stYVector;
    MTH3D_tdstVector_* p_stAxisY;

    MTH_EPSILON_TO(xEpsilon);
    _p_stAxisY->xX = _p_stNewPosition->xX - _p_stNewTarget->xX;
    _p_stAxisY->xY = _p_stNewPosition->xY - _p_stNewTarget->xY;
    _p_stAxisY->xZ = _p_stNewPosition->xZ - _p_stNewTarget->xZ;

    stYVector.auWords[0] = ((CAM_tduVectorCopy_*)_p_stAxisY)->auWords[0];
    stYVector.auWords[1] = ((CAM_tduVectorCopy_*)_p_stAxisY)->auWords[1];
    stYVector.auWords[2] = ((CAM_tduVectorCopy_*)_p_stAxisY)->auWords[2];
    xValue = _p_stAxisY->xX;
    p_stAxisY = _p_stAxisY;
    MTH_ABS_TO(xAbsoluteValue, xValue);
    var_v1 = 1;
    if (!(xAbsoluteValue < xEpsilon)) {
        var_v1 = 0;
    }
    if (var_v1 != 0) {
        float xLocalEpsilon;
        var_v1 = 1;
        xAbsoluteValue = p_stAxisY->xY;
        MTH_EPSILON_TO(xLocalEpsilon);
        MTH_ABS_TO(xAbsoluteValue, xAbsoluteValue);
        if (!(xAbsoluteValue < xLocalEpsilon)) {
            var_v1 = 0;
        }
    }
    temp_v1 = var_v1 != 0;
    var_v0 = temp_v1 & 0xFF;
    if (temp_v1 != 0) {
        float xLocalEpsilon;
        var_v1_2 = 1;
        xAbsoluteValue = p_stAxisY->xZ;
        MTH_EPSILON_TO(xLocalEpsilon);
        MTH_ABS_TO(xAbsoluteValue, xAbsoluteValue);
        if (!(xAbsoluteValue < xLocalEpsilon)) {
            var_v1_2 = 0;
        }
        var_v0 = var_v1_2 & 0xFF;
    }
    if (var_v0 == 0) {
        xYValue = p_stAxisY->xY;
        xZValue = p_stAxisY->xZ;
        MTH_SQR3_TO(xSquaredNorm, xValue, xYValue, xZValue);
        MTH_SQRT_TO_SYNC(xZValue, xSquaredNorm);
        if (xZValue != 0.0f) {
            xZValue = 1.0f / xZValue;
            p_stAxisY->xX = xZValue * xValue;
            p_stAxisY->xY = xZValue * p_stAxisY->xY;
            p_stAxisY->xZ = xZValue * p_stAxisY->xZ;
        }
    }

    MTH_fn_vVectorPlaneProjection(&stYVector.stVector, &stYVector.stVector, _p_stAxisZ, _p_stAxisZ);
    {
        float xX = stYVector.stVector.xX;
        float xY = stYVector.stVector.xY;
        float xZ = stYVector.stVector.xZ;
        unsigned long ulLimitBits;
        MTH_SQR3_TO(xSquaredNorm, xX, xY, xZ);
        asm { lui ulLimitBits, 0x3E4C }
        MTH_SQRT_TO(xY, xSquaredNorm);
        asm { ori ulLimitBits, ulLimitBits, 0xCCCD }
        asm { mtc1 ulLimitBits, xLimit }
        if (xY < xLimit) {
            MAT_fn_vGetRotationVectorBaseK(_h_SupObj->hGlobalMatrix, _p_stAxisZ);
        }
    }

    MTH_CROSS_COMPONENT_TO(_p_stAxisX->xX, p_stAxisY->xY, _p_stAxisZ->xZ,
                          p_stAxisY->xZ, _p_stAxisZ->xY);
    MTH_CROSS_COMPONENT_TO(_p_stAxisX->xY, p_stAxisY->xZ, _p_stAxisZ->xX,
                          p_stAxisY->xX, _p_stAxisZ->xZ);
    MTH_CROSS_COMPONENT_TO(_p_stAxisX->xZ, p_stAxisY->xX, _p_stAxisZ->xY,
                          p_stAxisY->xY, _p_stAxisZ->xX);

    if ((_p_stAxisX->xX == 0.0f) && (_p_stAxisX->xY == 0.0f) && (_p_stAxisX->xZ == 0.0f)) {
        MAT_fn_vGetRotationVectorBaseK(_h_SupObj->hGlobalMatrix, _p_stAxisZ);
        MTH_CROSS_COMPONENT_TO(_p_stAxisX->xX, p_stAxisY->xY, _p_stAxisZ->xZ,
                              p_stAxisY->xZ, _p_stAxisZ->xY);
        MTH_CROSS_COMPONENT_TO(_p_stAxisX->xY, p_stAxisY->xZ, _p_stAxisZ->xX,
                              p_stAxisY->xX, _p_stAxisZ->xZ);
        MTH_CROSS_COMPONENT_TO(_p_stAxisX->xZ, p_stAxisY->xX, _p_stAxisZ->xY,
                              p_stAxisY->xY, _p_stAxisZ->xX);
    }

    {
        float xY = _p_stAxisX->xY;
        float xZ = _p_stAxisX->xZ;
        float xX = _p_stAxisX->xX;
        MTH_SQR3_TO(xSquaredNorm, xX, xY, xZ);
        MTH_SQRT_TO_SYNC(xZ, xSquaredNorm);
        if (xZ != 0.0f) {
            xZ = 1.0f / xZ;
            _p_stAxisX->xX = xZ * xX;
            _p_stAxisX->xY = xZ * _p_stAxisX->xY;
            _p_stAxisX->xZ = xZ * _p_stAxisX->xZ;
        }
    }

    MTH_CROSS_COMPONENT_TO(_p_stAxisZ->xX, _p_stAxisX->xY, p_stAxisY->xZ,
                          _p_stAxisX->xZ, p_stAxisY->xY);
    MTH_CROSS_COMPONENT_TO(_p_stAxisZ->xY, _p_stAxisX->xZ, p_stAxisY->xX,
                          _p_stAxisX->xX, p_stAxisY->xZ);
    {
        float xLeftA;
        float xRightB;
        float xLeftC;
        float xRightD;
        xRightB = p_stAxisY->xY;
        xLeftA = _p_stAxisX->xX;
        xRightD = p_stAxisY->xX;
        xLeftC = _p_stAxisX->xY;
        MTH_CROSS_TO(xFinalZ, xLeftA, xRightB, xLeftC, xRightD);
        _p_stAxisZ->xZ = xFinalZ;
    }

    {
        float xY = _p_stAxisZ->xY;
        float xZ = xFinalZ;
        float xX = _p_stAxisZ->xX;
        MTH_SQR3_TO(xSquaredNorm, xX, xY, xZ);
        MTH_SQRT_TO_SYNC(xZ, xSquaredNorm);
        if (xZ != 0.0f) {
            xZ = 1.0f / xZ;
            _p_stAxisZ->xX = xZ * xX;
            _p_stAxisZ->xY = xZ * _p_stAxisZ->xY;
            _p_stAxisZ->xZ = xZ * _p_stAxisZ->xZ;
        }
    }
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\MEC\DNMCame.c lines 829–1209 */
/* addr: 0x002ff190  size: 5772 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 829
 *   +0x0004 -> line 884
 *   +0x0008 -> line 829
 *   +0x0014 -> line 853
 *   +0x0018 -> line 829
 *   +0x001c -> line 855
 *   +0x0020 -> line 829
 *   +0x0024 -> line 860
 *   +0x0028 -> line 829
 *   +0x0034 -> line 889
 *   +0x0038 -> line 829
 *   +0x003c -> line 889
 *   +0x0040 -> line 829
 *   +0x0044 -> line 856
 *   +0x0048 -> line 829
 *   +0x004c -> line 852
 *   +0x0054 -> line 854
 *   +0x005c -> line 861
 *   +0x0064 -> line 889
 *   +0x006c -> line 848
 *   +0x0074 -> line 883
 *   +0x0078 -> line 884
 *   +0x007c -> line 889
 *   +0x0090 -> line 894
 *   +0x00a0 -> line 895
 *   +0x00d0 -> line 902
 *   +0x00d8 -> line 900
 *   +0x00e0 -> line 902
 *   +0x00e4 -> line 889
 *   +0x00f0 -> line 900
 *   +0x00f8 -> line 889
 *   +0x0108 -> line 894
 *   +0x0128 -> line 895
 *   +0x0144 -> line 900
 *   +0x0160 -> line 902
 *   +0x01fc -> line 903
 *   +0x0264 -> line 909
 *   +0x026c -> line 911
 *   +0x0270 -> line 909
 *   +0x0278 -> line 910
 *   +0x027c -> line 917
 *   +0x0290 -> line 919
 *   +0x02b8 -> line 920
 *   +0x02c0 -> line 923
 *   +0x02c8 -> line 924
 *   +0x02d0 -> line 927
 *   +0x03a0 -> line 937
 *   +0x03c4 -> line 938
 *   +0x03c8 -> line 937
 *   +0x03e4 -> line 938
 *   +0x0404 -> line 940
 *   +0x0408 -> line 938
 *   +0x040c -> line 940
 *   +0x0418 -> line 938
 *   +0x0434 -> line 940
 *   +0x043c -> line 951
 *   +0x0444 -> line 953
 *   +0x046c -> line 954
 *   +0x0474 -> line 965
 *   +0x0478 -> line 966
 *   +0x0488 -> line 965
 *   +0x049c -> line 966
 *   +0x04b4 -> line 973
 *   +0x04fc -> line 974
 *   +0x0510 -> line 976
 *   +0x0514 -> line 974
 *   +0x0518 -> line 976
 *   +0x0544 -> line 978
 *   +0x054c -> line 980
 *   +0x0570 -> line 981
 *   +0x0594 -> line 986
 *   +0x059c -> line 987
 *   +0x05a4 -> line 986
 *   +0x05ac -> line 987
 *   +0x05b0 -> line 986
 *   +0x05e8 -> line 987
 *   +0x060c -> line 988
 *   +0x0670 -> line 989
 *   +0x0694 -> line 990
 *   +0x06b4 -> line 991
 *   +0x06c0 -> line 996
 *   +0x06c4 -> line 997
 *   +0x06c8 -> line 1002
 *   +0x06cc -> line 996
 *   +0x06d4 -> line 997
 *   +0x06d8 -> line 1002
 *   +0x06ec -> line 1004
 *   +0x06f8 -> line 1005
 *   +0x0710 -> line 1006
 *   +0x0714 -> line 1005
 *   +0x0718 -> line 1007
 *   +0x0720 -> line 1009
 *   +0x0724 -> line 1006
 *   +0x0728 -> line 1007
 *   +0x072c -> line 1006
 *   +0x0734 -> line 1007
 *   +0x0738 -> line 1009
 *   +0x073c -> line 1008
 *   +0x0740 -> line 1009
 *   +0x0744 -> line 1006
 *   +0x0748 -> line 1009
 *   +0x0750 -> line 1008
 *   +0x0754 -> line 1009
 *   +0x0758 -> line 1006
 *   +0x075c -> line 1009
 *   +0x0764 -> line 1008
 *   +0x0768 -> line 1009
 *   +0x076c -> line 1010
 *   +0x0774 -> line 1016
 *   +0x07a4 -> line 1017
 *   +0x07d4 -> line 1018
 *   +0x0804 -> line 1023
 *   +0x0898 -> line 1024
 *   +0x08a4 -> line 1027
 *   +0x08b4 -> line 1029
 *   +0x08d8 -> line 1030
 *   +0x08e0 -> line 1034
 *   +0x08f0 -> line 1035
 *   +0x08fc -> line 1034
 *   +0x0924 -> line 1040
 *   +0x0954 -> line 1041
 *   +0x09b8 -> line 1047
 *   +0x09c8 -> line 1050
 *   +0x09ec -> line 1052
 *   +0x0a0c -> line 1053
 *   +0x0a10 -> line 1059
 *   +0x0a14 -> line 1058
 *   +0x0a18 -> line 1059
 *   +0x0a1c -> line 1058
 *   +0x0a20 -> line 1059
 *   +0x0a28 -> line 1058
 *   +0x0a50 -> line 1059
 *   +0x0ae4 -> line 1061
 *   +0x0af8 -> line 1062
 *   +0x0afc -> line 1061
 *   +0x0b00 -> line 1062
 *   +0x0b08 -> line 1063
 *   +0x0b10 -> line 1062
 *   +0x0b14 -> line 1063
 *   +0x0b24 -> line 1065
 *   +0x0b2c -> line 1066
 *   +0x0b38 -> line 1069
 *   +0x0b60 -> line 1071
 *   +0x0b8c -> line 1072
 *   +0x0bbc -> line 1073
 *   +0x0bc0 -> line 1079
 *   +0x0bc8 -> line 1084
 *   +0x0bd8 -> line 1079
 *   +0x0c08 -> line 1084
 *   +0x0c10 -> line 1091
 *   +0x0d5c -> line 1093
 *   +0x0dd8 -> line 1094
 *   +0x0de8 -> line 1096
 *   +0x0e0c -> line 1097
 *   +0x0e10 -> line 1104
 *   +0x0e28 -> line 1106
 *   +0x0ea0 -> line 1113
 *   +0x0ea8 -> line 1114
 *   +0x0eb0 -> line 1120
 *   +0x0eb8 -> line 1126
 *   +0x0ec0 -> line 1120
 *   +0x0ec4 -> line 1126
 *   +0x0ed8 -> line 1120
 *   +0x0ef0 -> line 1121
 *   +0x0f1c -> line 1126
 *   +0x0ff0 -> line 1127
 *   +0x1058 -> line 1132
 *   +0x10f0 -> line 1138
 *   +0x10fc -> line 1144
 *   +0x110c -> line 1138
 *   +0x1110 -> line 1139
 *   +0x111c -> line 1138
 *   +0x1138 -> line 1144
 *   +0x1140 -> line 1145
 *   +0x1170 -> line 1148
 *   +0x11b4 -> line 1150
 *   +0x11bc -> line 1151
 *   +0x11c8 -> line 1157
 *   +0x11f8 -> line 1162
 *   +0x1284 -> line 1163
 *   +0x1288 -> line 1166
 *   +0x133c -> line 1171
 *   +0x1340 -> line 1176
 *   +0x134c -> line 1186
 *   +0x1350 -> line 1188
 *   +0x1354 -> line 1176
 *   +0x1358 -> line 1188
 *   +0x1360 -> line 1176
 *   +0x1388 -> line 1181
 *   +0x13a8 -> line 1187
 *   +0x13ec -> line 1188
 *   +0x1478 -> line 1190
 *   +0x14d8 -> line 1192
 *   +0x14e8 -> line 1193
 *   +0x14f0 -> line 1192
 *   +0x14f4 -> line 1193
 *   +0x14f8 -> line 1192
 *   +0x1520 -> line 1193
 *   +0x15ac -> line 1195
 *   +0x1610 -> line 1196
 *   +0x161c -> line 1197
 *   +0x1624 -> line 1200
 *   +0x162c -> line 1206
 *   +0x1630 -> line 1208
 *   +0x1634 -> line 1206
 *   +0x165c -> line 1209
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
DNM_stMecObstacle* DNM_p_stObstacleCameraObstacle(DNM_stMecObstacle* _p_stObstacle, DNM_stDynamics* _p_stDynamics, DNM_stParsingDatas* _p_stExternData, HIE_tdstSuperObject_* _hSupObj, MTH3D_tdstVector_* _p_stWantedPosition, MTH3D_tdstVector_* _p_stNewPosition)
{
    float xNorm;
    MTH3D_tdstVector_ VectTmp;
    MAT_tdstTransformation_ stEndMatrix;
    MAT_tdstTransformation_ stBeginMatrix;
    MTH3D_tdstVector_* p_stProjectedVector;
    MTH3D_tdstVector_* p_stImpactVector;
    MTH3D_tdstVector_* p_stComputedCurrentPosition;
    MTH3D_tdstVector_* p_stTempVector1;
    MTH3D_tdstVector_* p_stTempVector;
    MTH3D_tdstVector_* p_stProjectionVector;
    MTH3D_tdstVector_* p_stObstacleNorm;
    MTH3D_tdstVector_ a_stVectors[11];
    char cWantSecond;
    unsigned int uiNumCross;
    unsigned int uiNumNormals;
    MTH3D_tdstVector_ a_stCross[5];
    MTH3D_tdstVector_ a_stNormals[5];
    float xAngle;
    int lNbCollisions;
    MTH_stRotation stRotation;
    stMACDPID* p_stMACDPID;
    DNM_stReport* p_stReport;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\MEC\DNMCame.c lines 691–757 */
/* addr: 0x00300820  size: 568 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 691
 *   +0x0014 -> line 700
 *   +0x0018 -> line 691
 *   +0x0030 -> line 695
 *   +0x0034 -> line 691
 *   +0x0038 -> line 703
 *   +0x003c -> line 706
 *   +0x0040 -> line 703
 *   +0x0054 -> line 704
 *   +0x0068 -> line 706
 *   +0x0074 -> line 708
 *   +0x0084 -> line 712
 *   +0x0088 -> line 710
 *   +0x008c -> line 712
 *   +0x0090 -> line 715
 *   +0x0094 -> line 716
 *   +0x00a4 -> line 718
 *   +0x00ac -> line 719
 *   +0x00b8 -> line 721
 *   +0x00c4 -> line 722
 *   +0x00cc -> line 724
 *   +0x00d0 -> line 726
 *   +0x00d8 -> line 728
 *   +0x0110 -> line 729
 *   +0x014c -> line 731
 *   +0x0160 -> line 733
 *   +0x0198 -> line 738
 *   +0x01b8 -> line 739
 *   +0x01c0 -> line 745
 *   +0x01c4 -> line 744
 *   +0x01c8 -> line 749
 *   +0x01d8 -> line 751
 *   +0x01e0 -> line 753
 *   +0x0204 -> line 754
 *   +0x0208 -> line 757
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
int CAM_lHaveITakeSThgIntoTheMug(DNM_stMecObstacle* _p_stResultObstacle, HIE_tdstSuperObject_* _p_stSupObj, MAT_tdstTransformation_* _p_stStartPosition, MAT_tdstTransformation_* _p_stEndPosition)
{
    MTH3D_tdstVector_ stTempVec;
    MTH3D_tdstVector_ stStartVec;
    char bLessDetected;
    unsigned char bWater;
    unsigned short xCollMask;
    GMT_tdstCollideMaterial_* hCollMat;
    GMT_tdstGameMaterial_* hGameMat;
    DNM_stMecObstacle* p_stReturnObstacle;
    DNM_stMecObstacle* p_stObstacle;
    int lCollision;
    int lCounter;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\MEC\DNMCame.c lines 444–666 */
/* addr: 0x00300a60  size: 1884 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 444
 *   +0x0028 -> line 502
 *   +0x002c -> line 444
 *   +0x0030 -> line 502
 *   +0x0034 -> line 444
 *   +0x0038 -> line 503
 *   +0x003c -> line 444
 *   +0x0040 -> line 503
 *   +0x0044 -> line 444
 *   +0x0048 -> line 478
 *   +0x004c -> line 444
 *   +0x0054 -> line 485
 *   +0x005c -> line 477
 *   +0x0060 -> line 486
 *   +0x0090 -> line 491
 *   +0x00a8 -> line 496
 *   +0x00ac -> line 502
 *   +0x00b4 -> line 497
 *   +0x00b8 -> line 502
 *   +0x00c8 -> line 503
 *   +0x00e8 -> line 505
 *   +0x013c -> line 519
 *   +0x015c -> line 525
 *   +0x016c -> line 536
 *   +0x0170 -> line 537
 *   +0x0174 -> line 536
 *   +0x0178 -> line 537
 *   +0x017c -> line 530
 *   +0x0180 -> line 537
 *   +0x0184 -> line 536
 *   +0x0188 -> line 537
 *   +0x0190 -> line 536
 *   +0x01b4 -> line 537
 *   +0x0248 -> line 539
 *   +0x02a8 -> line 542
 *   +0x02ac -> line 545
 *   +0x02b4 -> line 542
 *   +0x02d0 -> line 543
 *   +0x02d4 -> line 545
 *   +0x02d8 -> line 543
 *   +0x02e0 -> line 545
 *   +0x02e4 -> line 543
 *   +0x02e8 -> line 545
 *   +0x02ec -> line 543
 *   +0x02f0 -> line 545
 *   +0x02f4 -> line 543
 *   +0x02f8 -> line 545
 *   +0x0318 -> line 546
 *   +0x0334 -> line 547
 *   +0x034c -> line 549
 *   +0x0378 -> line 552
 *   +0x0388 -> line 558
 *   +0x03bc -> line 573
 *   +0x03d4 -> line 576
 *   +0x03dc -> line 575
 *   +0x03e0 -> line 576
 *   +0x03e8 -> line 579
 *   +0x040c -> line 580
 *   +0x0430 -> line 582
 *   +0x0460 -> line 586
 *   +0x0478 -> line 592
 *   +0x0488 -> line 593
 *   +0x048c -> line 592
 *   +0x04b4 -> line 593
 *   +0x04c0 -> line 594
 *   +0x04f0 -> line 605
 *   +0x0500 -> line 608
 *   +0x0508 -> line 609
 *   +0x0514 -> line 615
 *   +0x051c -> line 609
 *   +0x053c -> line 610
 *   +0x055c -> line 612
 *   +0x058c -> line 614
 *   +0x0594 -> line 615
 *   +0x059c -> line 614
 *   +0x05a0 -> line 615
 *   +0x05b0 -> line 616
 *   +0x05c4 -> line 617
 *   +0x05cc -> line 627
 *   +0x05d0 -> line 632
 *   +0x05d4 -> line 643
 *   +0x05dc -> line 627
 *   +0x05f8 -> line 632
 *   +0x062c -> line 637
 *   +0x0630 -> line 643
 *   +0x0638 -> line 638
 *   +0x063c -> line 643
 *   +0x064c -> line 644
 *   +0x066c -> line 645
 *   +0x06c0 -> line 660
 *   +0x06d0 -> line 661
 *   +0x0704 -> line 662
 *   +0x071c -> line 665
 *   +0x0720 -> line 666
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
DNM_stDynamics* DNM_p_stDynamicsCameraParsing(DNM_stDynamics* _p_stDynamics, HIE_tdstSuperObject_* _h_SupObj, DNM_stParsingDatas* _p_stExternData, float _xDT)
{
    float xNorm;
    MTH3D_tdstVector_ stDNMTempVector;
    MTH_stRotation stRotation;
    MTH3D_tdstVector_ stTempVector2;
    MTH3D_tdstVector_ stTempVector1;
    float xSpeed;
    MTH3D_tdstVector_ stYVector;
    MTH3D_tdstVector_ stTempVector;
    MTH3D_tdstVector_ stShiftingResult;
    MTH3D_tdstVector_ stShiftingSrc;
    MTH3D_tdstVector_ stPreviousPos;
    DNM_stReport* p_stReport;
    stMACDPID* p_stDNMMACDPID;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\MEC\DNMCame.c lines 380–417 */
/* addr: 0x003011c0  size: 184 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 380
 *   +0x0028 -> line 382
 *   +0x0034 -> line 391
 *   +0x0044 -> line 392
 *   +0x0048 -> line 398
 *   +0x0050 -> line 402
 *   +0x0060 -> line 404
 *   +0x0074 -> line 405
 *   +0x0084 -> line 406
 *   +0x0088 -> line 410
 *   +0x00ac -> line 412
 *   +0x00b0 -> line 417
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
float DNM_fn_xDynamicsCameraAngleParsing(float _xSpeed, float _xIncSpeed, float _xDecSpeed, float _xRequestAngle, float _xLastAngle, char _cIgnoreParsing, char _cIgnoreInertia)
{
    float xAngle;
    float xRetAngle;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\MEC\DNMCame.c lines 262–354 */
/* addr: 0x00301280  size: 552 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 274
 *   +0x0004 -> line 262
 *   +0x0008 -> line 274
 *   +0x0028 -> line 276
 *   +0x0050 -> line 278
 *   +0x007c -> line 279
 *   +0x0090 -> line 280
 *   +0x0098 -> line 286
 *   +0x00b0 -> line 288
 *   +0x00c8 -> line 289
 *   +0x00d0 -> line 290
 *   +0x00d8 -> line 298
 *   +0x00dc -> line 299
 *   +0x00e0 -> line 298
 *   +0x00f0 -> line 299
 *   +0x00f8 -> line 301
 *   +0x00fc -> line 302
 *   +0x0100 -> line 309
 *   +0x0108 -> line 315
 *   +0x0120 -> line 318
 *   +0x0130 -> line 320
 *   +0x013c -> line 321
 *   +0x016c -> line 324
 *   +0x0170 -> line 323
 *   +0x0174 -> line 332
 *   +0x018c -> line 336
 *   +0x01b0 -> line 339
 *   +0x01b4 -> line 338
 *   +0x01b8 -> line 344
 *   +0x01c0 -> line 346
 *   +0x01f0 -> line 353
 *   +0x0220 -> line 354
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void DNM_fn_vDynamicsCameraPositionParsing(float _xSpeed, float _xIncSpeed, float _xDecSpeed, float _xLastNorm, char _cIgnoreParsing, char _cIgnoreInertia, MTH3D_tdstVector_* _p_stActualPos, MTH3D_tdstVector_* _p_stShiftingSrc, MTH3D_tdstVector_* _p_stDestPos, MTH3D_tdstVector_* _p_stShiftingResult)
{
    unsigned char bNormWantedIsModified;
    float xNormWanted;
    float xTmpNorm;
    float xNormSrc;
    float xNorm;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\MEC\DNMCame.c lines 207–237 */
/* addr: 0x003014b0  size: 496 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 207
 *   +0x0004 -> line 214
 *   +0x0008 -> line 207
 *   +0x000c -> line 214
 *   +0x0010 -> line 207
 *   +0x0028 -> line 214
 *   +0x0038 -> line 217
 *   +0x0054 -> line 218
 *   +0x006c -> line 220
 *   +0x0070 -> line 218
 *   +0x0074 -> line 220
 *   +0x00b8 -> line 229
 *   +0x00c4 -> line 228
 *   +0x00cc -> line 230
 *   +0x00d4 -> line 228
 *   +0x00f8 -> line 229
 *   +0x0118 -> line 230
 *   +0x0124 -> line 232
 *   +0x0128 -> line 233
 *   +0x0134 -> line 232
 *   +0x0140 -> line 233
 *   +0x0148 -> line 234
 *   +0x01ac -> line 235
 *   +0x01d0 -> line 237
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void DNM_fn_vDynamicsTakeCareOfLastMove(MTH3D_tdstVector_* _p_stShiftingResult, MTH3D_tdstVector_* _p_stLastShifting, float _xCutAngleFactor)
{
    float xNorm;
    MTH_stRotation stRotation;
    MTH3D_tdstVector_ stTempVector1;
    MTH3D_tdstVector_ stTempVector;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\MEC\DNMCame.c lines 113–186 */
/* addr: 0x003016a0  size: 1256 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 113
 *   +0x0018 -> line 127
 *   +0x001c -> line 113
 *   +0x0020 -> line 127
 *   +0x0024 -> line 113
 *   +0x0028 -> line 125
 *   +0x002c -> line 113
 *   +0x0030 -> line 125
 *   +0x0034 -> line 113
 *   +0x0038 -> line 120
 *   +0x0050 -> line 125
 *   +0x0068 -> line 127
 *   +0x00b0 -> line 128
 *   +0x00bc -> line 131
 *   +0x00d0 -> line 134
 *   +0x0170 -> line 136
 *   +0x01d8 -> line 137
 *   +0x023c -> line 139
 *   +0x024c -> line 140
 *   +0x0250 -> line 143
 *   +0x0260 -> line 145
 *   +0x0284 -> line 147
 *   +0x028c -> line 150
 *   +0x0290 -> line 157
 *   +0x02a8 -> line 159
 *   +0x02e4 -> line 160
 *   +0x02ec -> line 163
 *   +0x02fc -> line 164
 *   +0x039c -> line 166
 *   +0x0404 -> line 167
 *   +0x0468 -> line 169
 *   +0x0478 -> line 170
 *   +0x047c -> line 173
 *   +0x048c -> line 175
 *   +0x04b0 -> line 177
 *   +0x04b8 -> line 180
 *   +0x04bc -> line 185
 *   +0x04c0 -> line 186
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
float CAM_fn_xComputeVerticalAngle(MTH3D_tdstVector_* _p_stOrgVector, MTH3D_tdstVector_* _p_stDestVector, MTH3D_tdstVector_* _p_stAxisZ)
{
    float xNorm;
    MTH_stRotation stRotation;
    float xDestAngle;
    float xOrgAngle;
    MTH3D_tdstVector_ stProj;
    MTH3D_tdstVector_ stAxisZ;
    MTH3D_tdstVector_ stVector;
    /* TODO: decompile from asm/... */
}
