/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\MEC\MECBhv.c */
/* Language: C */
/* Compiler: MW MIPS C Compiler */

#include <stddef.h>

/* Recovered PS2 scalar/vector operations used by the original MTH macros. */
#define MTH_ABS_TO(_result, _value) \
    asm { abs.s _result, _value }
#define MTH_SQRT_TO(_result, _value) \
    asm { sqrt.s _result, _value }
#define MTH_SQR3_TO(_result, _x, _y, _z) \
    asm { mula.s _x, _x }                  \
    asm { madda.s _y, _y }                 \
    asm { madd.s _result, _z, _z }
#define MTH_SQR2_TO(_result, _x, _y) \
    asm { mula.s _x, _x }              \
    asm { madd.s _result, _y, _y }
#define MTH_DOT3_TO(_result, _x1, _x2, _y1, _y2, _z1, _z2) \
    asm { mula.s _x1, _x2 }                                  \
    asm { madda.s _y1, _y2 }                                 \
    asm { madd.s _result, _z1, _z2 }

/* Recovered aggregate layouts from MWCC debug type records. */
typedef struct AI_tdstMind_ AI_tdstMind_;
typedef struct GLI_tdstLight_ GLI_tdstLight_;
typedef struct GLI_tdstMaterial_ GLI_tdstMaterial_;
typedef struct GLI_tdstTexture_ GLI_tdstTexture_;
typedef struct IPO_tdstInstanciatedPhysicalObject_ IPO_tdstInstanciatedPhysicalObject_;
typedef struct PO_tdstPhysicalObject_ PO_tdstPhysicalObject_;
typedef struct _SND_tdstBlockEvent _SND_tdstBlockEvent;
typedef struct tdstCineinfo_ tdstCineinfo_;
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
typedef struct DNM_stMecMatCharacteristics DNM_stMecMatCharacteristics;
typedef struct DNM_stMecObstacle DNM_stMecObstacle;
typedef struct LST2_tdstAnchorToCINE_tdxHandleToCineActorDyn LST2_tdstAnchorToCINE_tdxHandleToCineActorDyn;
typedef struct CINE_tdstCine_ CINE_tdstCine_;
typedef struct LST2_tdstAnchorTotdxHandleToObjectsTablesListOpt LST2_tdstAnchorTotdxHandleToObjectsTablesListOpt;
typedef struct GEO_tdstDoubledIndex_ GEO_tdstDoubledIndex_;
typedef struct HIE_tdstModifierObject_ HIE_tdstModifierObject_;
typedef union _SND_tduRefEvt _SND_tduRefEvt;
typedef struct SCT_tdstListOfSoundEvent_ SCT_tdstListOfSoundEvent_;
typedef struct MTH4D_tdstVector_ MTH4D_tdstVector_;
typedef struct GEO_tdstGeometricObject_ GEO_tdstGeometricObject_;
typedef struct MTH4D_tdstMatrix_ MTH4D_tdstMatrix_;
typedef struct MAT_tdstTransformation_ MAT_tdstTransformation_;
typedef struct tdstElement3d_ tdstElement3d_;
typedef struct MTH3D_tdstMatrix_ MTH3D_tdstMatrix_;
typedef struct DNM_stDynamicsBaseBlock DNM_stDynamicsBaseBlock;
typedef struct DNM_stDynamicsAdvancedBlock DNM_stDynamicsAdvancedBlock;
typedef struct anon_0 anon_0;
typedef struct anon_1 anon_1;
typedef struct stMACDPID stMACDPID;
typedef struct DNM_stDynamicsComplexBlock DNM_stDynamicsComplexBlock;
typedef struct DNM_stDynamics DNM_stDynamics;
typedef struct LST2_tdstAnchorToCINE_tdxHandleToCineDyn LST2_tdstAnchorToCINE_tdxHandleToCineDyn;
typedef union HIE_tduLinkedObject_ HIE_tduLinkedObject_;
typedef struct tdstSubAnim_ tdstSubAnim_;
typedef struct HIE_tdstSuperObject_ HIE_tdstSuperObject_;
typedef struct SECT_tdstListOfSOCharacters_ SECT_tdstListOfSOCharacters_;
typedef struct tdstEventInTable_ tdstEventInTable_;
typedef struct tdstEvent_ tdstEvent_;
typedef struct DNM_stObstacle DNM_stObstacle;
typedef struct MTH_stRotation MTH_stRotation;
typedef struct MTH_stMove MTH_stMove;
typedef struct DNM_stReport DNM_stReport;
typedef struct LST2_tdstAnchorToSECT_tdxHandleOfElementLstCharacterDyn LST2_tdstAnchorToSECT_tdxHandleOfElementLstCharacterDyn;
typedef struct tdstSubAnimInUse_ tdstSubAnimInUse_;
typedef struct SECT_tdstListOfSOSectorsInGraphicInteraction_ SECT_tdstListOfSOSectorsInGraphicInteraction_;
typedef struct stMorphData stMorphData;
typedef struct tdstAnim3d_ tdstAnim3d_;
typedef struct LST2_tdstAnchorTotdxHandleToSubAnimInUseDyn LST2_tdstAnchorTotdxHandleToSubAnimInUseDyn;
typedef struct LST2_tdstAnchorToCINE_tdxHandleToChannelLinkDyn LST2_tdstAnchorToCINE_tdxHandleToChannelLinkDyn;
typedef struct CINE_tdstCineActor_ CINE_tdstCineActor_;
typedef struct tdstPLA_Hierarchy_ tdstPLA_Hierarchy_;
typedef struct tdstPLA_Deformation_ tdstPLA_Deformation_;
typedef struct tdstFrame3d_ tdstFrame3d_;
typedef struct SECT_tdstListOfSOSectorsInCollisionInteraction_ SECT_tdstListOfSOSectorsInCollisionInteraction_;
typedef struct LST2_tdstAnchorToSECT_tdxHandleOfElementLstStaticLightsOpt LST2_tdstAnchorToSECT_tdxHandleOfElementLstStaticLightsOpt;
typedef struct LST2_tdstAnchorToSECT_tdxHandleOfElementLstDNMLightsDyn LST2_tdstAnchorToSECT_tdxHandleOfElementLstDNMLightsDyn;
typedef struct LST2_tdstAnchorToSECT_tdxHandleOfElementLstGraphicInteractionOpt LST2_tdstAnchorToSECT_tdxHandleOfElementLstGraphicInteractionOpt;
typedef struct LST2_tdstAnchorToSECT_tdxHandleOfElementLstCollisionInteractionOpt LST2_tdstAnchorToSECT_tdxHandleOfElementLstCollisionInteractionOpt;
typedef struct LST2_tdstAnchorToSECT_tdxHandleOfElementLstActivityInteractionOpt LST2_tdstAnchorToSECT_tdxHandleOfElementLstActivityInteractionOpt;
typedef struct LST2_tdstAnchorToSECT_tdxHandleOfElementLstSoundInteractionOpt LST2_tdstAnchorToSECT_tdxHandleOfElementLstSoundInteractionOpt;
typedef struct LST2_tdstAnchorToSCT_tdxHandleOfLstSoundEventOpt LST2_tdstAnchorToSCT_tdxHandleOfLstSoundEventOpt;
typedef struct SECT_tdstSector_ SECT_tdstSector_;
typedef struct GMT_tdstGameMaterial_ GMT_tdstGameMaterial_;
typedef struct tdstLipsSynchValue_ tdstLipsSynchValue_;
typedef struct tdst3dData_ tdst3dData_;
typedef struct tdstStandardGame_ tdstStandardGame_;
typedef struct tdstEngineObject_ tdstEngineObject_;
typedef struct tdstBrain_ tdstBrain_;
typedef struct tdstMorphChannelList_ tdstMorphChannelList_;
typedef struct GMT_tdstCollideMaterial_ GMT_tdstCollideMaterial_;
typedef struct LST2_tdstAnchorTotdxHandleToStateOpt LST2_tdstAnchorTotdxHandleToStateOpt;
typedef struct LST2_tdstAnchorTotdxHandleToSubAnimOpt LST2_tdstAnchorTotdxHandleToSubAnimOpt;
typedef struct tdstFamilyList_ tdstFamilyList_;
typedef struct LST2_tdstAnchorToCHN_tdxHandleToMorphElementDyn LST2_tdstAnchorToCHN_tdxHandleToMorphElementDyn;
typedef struct COL_tdstBoundingSphere_ COL_tdstBoundingSphere_;
typedef struct SECT_tdstListOfSOSectorsInActivityInteraction_ SECT_tdstListOfSOSectorsInActivityInteraction_;
typedef struct LST2_tdstAnchorTotdxHandleToFamilyListDyn LST2_tdstAnchorTotdxHandleToFamilyListDyn;
typedef struct DNM_stMecReport DNM_stMecReport;
typedef struct SECT_tdstListOfSOSectorsInSoundInteraction_ SECT_tdstListOfSOSectorsInSoundInteraction_;
typedef struct CINE_tdstChannelLink_ CINE_tdstChannelLink_;
typedef struct SECT_tdstListOfDNMLights_ SECT_tdstListOfDNMLights_;
typedef struct tdstCouple_ tdstCouple_;
typedef struct SECT_tdstListOfStaticLights_ SECT_tdstListOfStaticLights_;
typedef struct stInterpolatedPosition stInterpolatedPosition;
typedef struct tdstAChannel_ tdstAChannel_;
typedef struct GEO_tdstParallelBox_ GEO_tdstParallelBox_;
typedef struct tdstPLA_DeformationLink_ tdstPLA_DeformationLink_;
typedef struct GEO_tdstEdge_ GEO_tdstEdge_;

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

typedef enum anon_enum_00bc525e {
    DNM_ObsType_Nothing = 0,
    DNM_ObsType_Scenery = 1,
    DNM_ObsType_Mobile = 2,
    DNM_ObsType_DoubleEdge = 4,
    DNM_ObsType_MobileWall = 9,
    DNM_Dummy_For_Align = 2147483647,
} anon_enum_00bc525e;

struct MTH3D_tdstVector_ {
    float xX; /* +0x0 */
    float xY; /* +0x4 */
    float xZ; /* +0x8 */
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
    anon_enum_00bc525e m_eType; /* +0x28 */
    short m_xMyEntity; /* +0x2c */
    short m_xCollidedEntity; /* +0x2e */
    MTH3D_tdstVector_ m_stTranslation; /* +0x30 */
    MTH3D_tdstVector_ m_stZoneMove; /* +0x3c */
    MTH3D_tdstVector_ m_stZonePosition; /* +0x48 */
    float m_xZoneRadius; /* +0x54 */
    DNM_stMecMatCharacteristics m_stProperties; /* +0x58 */
    DNM_stMecMatCharacteristics m_stMyProperties; /* +0x60 */
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

struct LST2_tdstAnchorTotdxHandleToObjectsTablesListOpt {
    tdstObjectsTablesList_* hFirstElementOpt; /* +0x0 */
    int lNumberOfElementsOpt; /* +0x4 */
};

struct GEO_tdstDoubledIndex_ {
    short a2_xIndex[2]; /* +0x0 */
};

struct HIE_tdstModifierObject_ {
    GEO_tdstGeometricObject_* p_stGeometricObject; /* +0x0 */
    int lMulIntensity; /* +0x4 */
    int lAddIntensity; /* +0x8 */
};

union _SND_tduRefEvt {
    unsigned int Id; /* +0x0 */
    _SND_tdstBlockEvent* pstPtr; /* +0x0 */
};

struct SCT_tdstListOfSoundEvent_ {
    HIE_tdstSuperObject_* hPointerOfSectorSO; /* +0x0 */
    _SND_tduRefEvt uSoundEvent; /* +0x4 */
};

struct MTH4D_tdstVector_ {
    float xX; /* +0x0 */
    float xY; /* +0x4 */
    float xZ; /* +0x8 */
    float xW; /* +0xc */
} __attribute__((aligned(16)));

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
} __attribute__((aligned(16)));

struct MTH4D_tdstMatrix_ {
    MTH4D_tdstVector_ stCol_0; /* +0x0 */
    MTH4D_tdstVector_ stCol_1; /* +0x10 */
    MTH4D_tdstVector_ stCol_2; /* +0x20 */
    MTH4D_tdstVector_ stCol_3; /* +0x30 */
} __attribute__((aligned(16)));

struct MAT_tdstTransformation_ {
    MAT_tdeTranformationType_ eType; /* +0x0 */
    unsigned char _extractor_padding_00[12]; /* implicitly added by extractor; +0x4..0xf */
    MTH4D_tdstMatrix_ stTransformMatrix; /* +0x10 */
    MTH4D_tdstVector_ stScaleVector; /* +0x50 */
} __attribute__((aligned(16)));

struct tdstElement3d_ {
    unsigned short wElement : 15; /* bit 0, byte +0x0 */
    unsigned short bf1ActiveStatus : 1; /* bit 15, byte +0x0 */
    unsigned char ucChannelNumber; /* +0x2 */
    unsigned char eTypeOfElement; /* +0x3 */
    unsigned char ucTransparency; /* +0x4 */
    unsigned char ucAnimLevel; /* +0x5 */
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
    unsigned char _extractor_padding_complex_align[8]; /* implicitly added by extractor; +0x1f8..0x1ff */
    DNM_stDynamicsComplexBlock m_tdstDynamicsComplexBlock; /* +0x200 */
};

struct LST2_tdstAnchorToCINE_tdxHandleToCineDyn {
    CINE_tdstCine_* hFirstElementDyn; /* +0x0 */
    CINE_tdstCine_* hLastElementDyn; /* +0x4 */
    int lNumberOfElementsDyn; /* +0x8 */
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

struct tdstSubAnim_ {
    tdstAnim3d_* p_stSubAnim; /* +0x0 */
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

struct SECT_tdstListOfSOCharacters_ {
    HIE_tdstSuperObject_* hPointerOfCharacter; /* +0x0 */
    SECT_tdstListOfSOCharacters_* hNextBrotherDyn; /* +0x4 */
    SECT_tdstListOfSOCharacters_* hPrevBrotherDyn; /* +0x8 */
    LST2_tdstAnchorToSECT_tdxHandleOfElementLstCharacterDyn* hFatherDyn; /* +0xc */
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

struct LST2_tdstAnchorToSECT_tdxHandleOfElementLstCharacterDyn {
    SECT_tdstListOfSOCharacters_* hFirstElementDyn; /* +0x0 */
    SECT_tdstListOfSOCharacters_* hLastElementDyn; /* +0x4 */
    int lNumberOfElementsDyn; /* +0x8 */
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

struct SECT_tdstListOfSOSectorsInGraphicInteraction_ {
    short wLevelOfDetail; /* +0x0 */
    char cDisplayMode; /* +0x2 */
    HIE_tdstSuperObject_* hPointerOfSectorSO; /* +0x4 */
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
    tdstEvent_* d_stAnimEvent; /* +0x4 */
    stMorphData* d_stMorphDataArray; /* +0x8 */
    unsigned short uwNumOfA3dGENERAL; /* +0xc */
    unsigned char ucNumberOfEvents; /* +0xe */
    unsigned char ucFlagMergeAnim; /* +0xf */
};

struct LST2_tdstAnchorTotdxHandleToSubAnimInUseDyn {
    tdstSubAnimInUse_* hFirstElementDyn; /* +0x0 */
    tdstSubAnimInUse_* hLastElementDyn; /* +0x4 */
    int lNumberOfElementsDyn; /* +0x8 */
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

struct SECT_tdstListOfSOSectorsInCollisionInteraction_ {
    HIE_tdstSuperObject_* hPointerOfSectorSO; /* +0x0 */
};

struct LST2_tdstAnchorToSECT_tdxHandleOfElementLstStaticLightsOpt {
    SECT_tdstListOfStaticLights_* hFirstElementOpt; /* +0x0 */
    int lNumberOfElementsOpt; /* +0x4 */
};

struct LST2_tdstAnchorToSECT_tdxHandleOfElementLstDNMLightsDyn {
    SECT_tdstListOfDNMLights_* hFirstElementDyn; /* +0x0 */
    SECT_tdstListOfDNMLights_* hLastElementDyn; /* +0x4 */
    int lNumberOfElementsDyn; /* +0x8 */
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

struct LST2_tdstAnchorToSCT_tdxHandleOfLstSoundEventOpt {
    SCT_tdstListOfSoundEvent_* hFirstElementOpt; /* +0x0 */
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

struct GMT_tdstGameMaterial_ {
    int hSoundMaterial; /* +0x0 */
    GMT_tdstCollideMaterial_* hCollideMaterial; /* +0x4 */
};

struct tdstLipsSynchValue_ {
    char cCode; /* +0x0 */
    float xX; /* +0x4 */
    float xY; /* +0x8 */
    float xZ; /* +0xc */
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

struct tdstBrain_ {
    AI_tdstMind_* p_stMind; /* +0x0 */
    GMT_tdstGameMaterial_* hLastCollidedGoThroughMaterial; /* +0x4 */
    unsigned char bWarnMechanicsFlag; /* +0x8 */
    unsigned char bActiveDuringTransition; /* +0x9 */
};

struct tdstMorphChannelList_ {
    tdstMorphChannelList_* hNextBrotherDyn; /* +0x0 */
    tdstMorphChannelList_* hPrevBrotherDyn; /* +0x4 */
    LST2_tdstAnchorToCHN_tdxHandleToMorphElementDyn* hFatherDyn; /* +0x8 */
    unsigned short uwChannelNumber; /* +0xc */
    short MorphListIndex; /* +0xe */
};

struct GMT_tdstCollideMaterial_ {
    short wTypeOfZone; /* +0x0 */
    unsigned short xIdentifier; /* +0x2 */
    MTH3D_tdstVector_ stDirection; /* +0x4 */
    float xCoeff; /* +0x10 */
    unsigned short wTypeForAi; /* +0x14 */
};

struct LST2_tdstAnchorTotdxHandleToStateOpt {
    tdstState_* hFirstElementOpt; /* +0x0 */
    int lNumberOfElementsOpt; /* +0x4 */
};

struct LST2_tdstAnchorTotdxHandleToSubAnimOpt {
    tdstSubAnim_* hFirstElementOpt; /* +0x0 */
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

struct LST2_tdstAnchorToCHN_tdxHandleToMorphElementDyn {
    tdstMorphChannelList_* hFirstElementDyn; /* +0x0 */
    tdstMorphChannelList_* hLastElementDyn; /* +0x4 */
    int lNumberOfElementsDyn; /* +0x8 */
};

struct COL_tdstBoundingSphere_ {
    MTH4D_tdstVector_ stCenterPoint; /* +0x0 */
    float xRadius; /* +0x10 */
};

struct SECT_tdstListOfSOSectorsInActivityInteraction_ {
    HIE_tdstSuperObject_* hPointerOfSectorSO; /* +0x0 */
};

struct LST2_tdstAnchorTotdxHandleToFamilyListDyn {
    tdstFamilyList_* hFirstElementDyn; /* +0x0 */
    tdstFamilyList_* hLastElementDyn; /* +0x4 */
    int lNumberOfElementsDyn; /* +0x8 */
};

struct DNM_stMecReport {
    unsigned int m_ulCurrSurfaceState; /* +0x0 */
    DNM_stMecObstacle m_stObstacle; /* +0x4 */
    DNM_stMecObstacle m_stGround; /* +0x6c */
    DNM_stMecObstacle m_stWall; /* +0xd4 */
    DNM_stMecObstacle m_stCharacter; /* +0x13c */
    DNM_stMecObstacle m_stWater; /* +0x1a4 */
    DNM_stMecObstacle m_stCeil; /* +0x20c */
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

struct SECT_tdstListOfDNMLights_ {
    GLI_tdstLight_* hDNMLights; /* +0x0 */
    SECT_tdstListOfDNMLights_* hNextBrotherDyn; /* +0x4 */
    SECT_tdstListOfDNMLights_* hPrevBrotherDyn; /* +0x8 */
    LST2_tdstAnchorToSECT_tdxHandleOfElementLstDNMLightsDyn* hFatherDyn; /* +0xc */
};

struct tdstCouple_ {
    unsigned short wChild; /* +0x0 */
    unsigned short wFather; /* +0x2 */
};

struct SECT_tdstListOfStaticLights_ {
    GLI_tdstLight_* hStaticLights; /* +0x0 */
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

struct GEO_tdstParallelBox_ {
    MTH4D_tdstVector_ stMinPoint; /* +0x0 */
    MTH4D_tdstVector_ stMaxPoint; /* +0x10 */
};

struct tdstPLA_DeformationLink_ {
    unsigned short wChannel1; /* +0x0 */
    unsigned short wBorder1; /* +0x2 */
    unsigned short wChannel2; /* +0x4 */
    unsigned short wBorder2; /* +0x6 */
};

struct GEO_tdstEdge_ {
    short xPoints[2]; /* +0x0 */
    MTH3D_tdstVector_ st_VectorPoints[2]; /* +0x4 */
};

int g_lCallCounter;
unsigned char g_bHighSpeed;
int NoTest;
int MEC_g_lCountObstacleForWallManagementForCorners;
float MEC_g_xRateForWallManagementForCorners;
MTH3D_tdstVector_ MEC_g_stTmpMov;
MTH3D_tdstVector_ g_stFirstMove;
float g_xZWater;
int lZWaterValidity;
DNM_stMecObstacle* g_a_stObstacle;
DNM_stMecReport g_stReport;
int COL_g_lMaxNumberOfCollisions;
int (*MEC_fn_iComp2ObstForCorners)(void*, void*);

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\MEC\MECBhv.c lines 64–91 */
/* addr: 0x003053d0  size: 312 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 64
 *   +0x0020 -> line 75
 *   +0x0044 -> line 78
 *   +0x0048 -> line 75
 *   +0x004c -> line 78
 *   +0x006c -> line 79
 *   +0x00b0 -> line 84
 *   +0x00d4 -> line 86
 *   +0x0110 -> line 87
 *   +0x0114 -> line 91
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
int MEC_fn_lComputeCall(DNM_stDynamics* p_stDynamic, HIE_tdstSuperObject_* hSupObj, float xDT, float xCoef)
{
    int lCall;
    int lNbFrame;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\MEC\MECBhv.c lines 2300–2605 */
/* addr: 0x00305510  size: 4012 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 2300
 *   +0x0034 -> line 2352
 *   +0x0038 -> line 2300
 *   +0x0058 -> line 2345
 *   +0x005c -> line 2354
 *   +0x0064 -> line 2307
 *   +0x0068 -> line 2345
 *   +0x006c -> line 2328
 *   +0x0070 -> line 2345
 *   +0x0074 -> line 2329
 *   +0x0078 -> line 2335
 *   +0x007c -> line 2341
 *   +0x0080 -> line 2354
 *   +0x0098 -> line 2357
 *   +0x009c -> line 2356
 *   +0x00a0 -> line 2357
 *   +0x00a4 -> line 2358
 *   +0x00a8 -> line 2357
 *   +0x00d0 -> line 2358
 *   +0x0100 -> line 2362
 *   +0x0138 -> line 2364
 *   +0x013c -> line 2366
 *   +0x015c -> line 2367
 *   +0x0160 -> line 2372
 *   +0x0164 -> line 2367
 *   +0x0168 -> line 2370
 *   +0x016c -> line 2368
 *   +0x0170 -> line 2371
 *   +0x0174 -> line 2372
 *   +0x0178 -> line 2373
 *   +0x017c -> line 2372
 *   +0x0180 -> line 2375
 *   +0x0190 -> line 2377
 *   +0x0198 -> line 2378
 *   +0x01ac -> line 2380
 *   +0x01bc -> line 2382
 *   +0x01c0 -> line 2383
 *   +0x01c4 -> line 2385
 *   +0x01c8 -> line 2383
 *   +0x01cc -> line 2386
 *   +0x01e8 -> line 2388
 *   +0x01f0 -> line 2393
 *   +0x0208 -> line 2395
 *   +0x0218 -> line 2396
 *   +0x022c -> line 2397
 *   +0x0234 -> line 2402
 *   +0x0238 -> line 2401
 *   +0x023c -> line 2402
 *   +0x0248 -> line 2406
 *   +0x025c -> line 2408
 *   +0x0260 -> line 2409
 *   +0x0264 -> line 2410
 *   +0x0268 -> line 2409
 *   +0x026c -> line 2411
 *   +0x0288 -> line 2413
 *   +0x029c -> line 2417
 *   +0x02d0 -> line 2418
 *   +0x02d8 -> line 2420
 *   +0x02ec -> line 2422
 *   +0x0354 -> line 2424
 *   +0x035c -> line 2425
 *   +0x0360 -> line 2428
 *   +0x0384 -> line 2429
 *   +0x0390 -> line 2431
 *   +0x039c -> line 2433
 *   +0x03ac -> line 2435
 *   +0x03b4 -> line 2438
 *   +0x03d0 -> line 2439
 *   +0x03d4 -> line 2441
 *   +0x03e4 -> line 2442
 *   +0x03e8 -> line 2444
 *   +0x03fc -> line 2446
 *   +0x0404 -> line 2447
 *   +0x040c -> line 2451
 *   +0x0418 -> line 2453
 *   +0x0420 -> line 2454
 *   +0x0434 -> line 2455
 *   +0x046c -> line 2456
 *   +0x0480 -> line 2458
 *   +0x04c4 -> line 2459
 *   +0x052c -> line 2461
 *   +0x0530 -> line 2464
 *   +0x0540 -> line 2465
 *   +0x054c -> line 2468
 *   +0x0560 -> line 2478
 *   +0x0570 -> line 2468
 *   +0x0574 -> line 2478
 *   +0x058c -> line 2479
 *   +0x059c -> line 2482
 *   +0x05b0 -> line 2483
 *   +0x05dc -> line 2484
 *   +0x05ec -> line 2489
 *   +0x05f0 -> line 2488
 *   +0x05f4 -> line 2489
 *   +0x05f8 -> line 2484
 *   +0x05fc -> line 2489
 *   +0x060c -> line 2484
 *   +0x0610 -> line 2488
 *   +0x0614 -> line 2489
 *   +0x0620 -> line 2488
 *   +0x0624 -> line 2490
 *   +0x063c -> line 2491
 *   +0x0648 -> line 2492
 *   +0x069c -> line 2493
 *   +0x0740 -> line 2495
 *   +0x0748 -> line 2497
 *   +0x0760 -> line 2498
 *   +0x0780 -> line 2500
 *   +0x07b4 -> line 2501
 *   +0x07bc -> line 2502
 *   +0x07c4 -> line 2509
 *   +0x07c8 -> line 2507
 *   +0x07cc -> line 2509
 *   +0x07e0 -> line 2511
 *   +0x0828 -> line 2513
 *   +0x0838 -> line 2515
 *   +0x0848 -> line 2516
 *   +0x084c -> line 2515
 *   +0x0850 -> line 2516
 *   +0x0860 -> line 2519
 *   +0x0864 -> line 2518
 *   +0x0868 -> line 2519
 *   +0x08dc -> line 2521
 *   +0x08f4 -> line 2522
 *   +0x0914 -> line 2524
 *   +0x0940 -> line 2525
 *   +0x0960 -> line 2527
 *   +0x0970 -> line 2528
 *   +0x09ac -> line 2530
 *   +0x09b8 -> line 2531
 *   +0x09c0 -> line 2533
 *   +0x09cc -> line 2535
 *   +0x09fc -> line 2542
 *   +0x0a20 -> line 2544
 *   +0x0a38 -> line 2546
 *   +0x0a50 -> line 2548
 *   +0x0a68 -> line 2549
 *   +0x0a6c -> line 2548
 *   +0x0a70 -> line 2550
 *   +0x0b10 -> line 2552
 *   +0x0b70 -> line 2553
 *   +0x0b94 -> line 2559
 *   +0x0b98 -> line 2562
 *   +0x0b9c -> line 2559
 *   +0x0ba0 -> line 2562
 *   +0x0ba4 -> line 2563
 *   +0x0ba8 -> line 2561
 *   +0x0bac -> line 2559
 *   +0x0bd4 -> line 2561
 *   +0x0bf4 -> line 2562
 *   +0x0c18 -> line 2563
 *   +0x0c3c -> line 2565
 *   +0x0c40 -> line 2563
 *   +0x0c58 -> line 2565
 *   +0x0cbc -> line 2567
 *   +0x0cd4 -> line 2569
 *   +0x0d08 -> line 2571
 *   +0x0d30 -> line 2573
 *   +0x0d38 -> line 2575
 *   +0x0dc0 -> line 2577
 *   +0x0df0 -> line 2578
 *   +0x0e64 -> line 2580
 *   +0x0ea0 -> line 2581
 *   +0x0ec4 -> line 2584
 *   +0x0ed8 -> line 2587
 *   +0x0ee4 -> line 2588
 *   +0x0eec -> line 2593
 *   +0x0f04 -> line 2595
 *   +0x0f14 -> line 2597
 *   +0x0f24 -> line 2598
 *   +0x0f28 -> line 2597
 *   +0x0f2c -> line 2598
 *   +0x0f3c -> line 2600
 *   +0x0f40 -> line 2601
 *   +0x0f44 -> line 2600
 *   +0x0f48 -> line 2601
 *   +0x0f4c -> line 2600
 *   +0x0f54 -> line 2601
 *   +0x0f5c -> line 2605
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void MEC_fn_vSwimObstacleManagement(DNM_stDynamics* p_stDynamic, HIE_tdstSuperObject_* hSupObj, float xDT)
{
    float xNorm;
    int lWaterObstacle;
    int lGroundObstacle;
    int lObstacleCounter;
    int lCounter;
    DNM_stMecObstacle* p_stGroundObstacle;
    DNM_stMecObstacle* p_stTmpObstacle;
    DNM_stMecObstacle* p_stObstacle;
    unsigned char bWaterBlock;
    float xRebound;
    float xSlide;
    unsigned char bWaterSurface;
    unsigned char bEdge;
    unsigned char bOnlyEdge;
    float xOneMinusRate;
    float xZWater;
    float xRate;
    MTH3D_tdstVector_* p_stNormal;
    MTH3D_tdstVector_ stNormalObstacle;
    MTH3D_tdstVector_ stNormalVector;
    volatile MTH3D_tdstVector_ stAdjustVector;
    MTH3D_tdstVector_ stExtremPosition;
    MTH3D_tdstVector_ stVector;
    MTH3D_tdstVector_ stPosition;
    MAT_tdstTransformation_* hAbsolutePreviousMatrix;
    MAT_tdstTransformation_* hPreviousMatrix;
    MAT_tdstTransformation_ stInitialMatrix;
    MAT_tdstTransformation_* hInitialMatrix;
    MAT_tdstTransformation_* hCurrentMatrix;
    int lObstacle;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\MEC\MECBhv.c lines 2273–2297 */
/* addr: 0x003064c0  size: 416 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 2273
 *   +0x0008 -> line 2281
 *   +0x0048 -> line 2288
 *   +0x004c -> line 2283
 *   +0x0050 -> line 2288
 *   +0x0054 -> line 2287
 *   +0x0058 -> line 2288
 *   +0x0068 -> line 2290
 *   +0x0070 -> line 2288
 *   +0x007c -> line 2290
 *   +0x0088 -> line 2291
 *   +0x00f8 -> line 2292
 *   +0x0104 -> line 2295
 *   +0x0108 -> line 2292
 *   +0x0128 -> line 2293
 *   +0x0138 -> line 2295
 *   +0x0144 -> line 2293
 *   +0x014c -> line 2295
 *   +0x018c -> line 2296
 *   +0x0194 -> line 2297
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void MEC_fn_vGroundGuess(DNM_stDynamics* p_stDynamic, float xDT)
{
    float xNorm;
    MTH3D_tdstVector_ stVector;
    MTH3D_tdstVector_* p_stNormal;
    MAT_tdstTransformation_* hCurrentMatrix;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\MEC\MECBhv.c lines 1550–2269 */
/* addr: 0x00306660  size: 8644 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1550
 *   +0x0004 -> line 1595
 *   +0x0008 -> line 1550
 *   +0x000c -> line 1595
 *   +0x0010 -> line 1550
 *   +0x0014 -> line 1612
 *   +0x0018 -> line 1550
 *   +0x0020 -> line 1560
 *   +0x0024 -> line 1550
 *   +0x0038 -> line 1618
 *   +0x003c -> line 1550
 *   +0x0044 -> line 1623
 *   +0x0048 -> line 1550
 *   +0x004c -> line 1622
 *   +0x0050 -> line 1550
 *   +0x0070 -> line 1595
 *   +0x0074 -> line 1610
 *   +0x0078 -> line 1626
 *   +0x0080 -> line 1612
 *   +0x0088 -> line 1613
 *   +0x008c -> line 1612
 *   +0x0090 -> line 1613
 *   +0x00a0 -> line 1626
 *   +0x00b4 -> line 1627
 *   +0x00bc -> line 1629
 *   +0x00c4 -> line 1635
 *   +0x00c8 -> line 1629
 *   +0x00f4 -> line 1630
 *   +0x0120 -> line 1635
 *   +0x0138 -> line 1638
 *   +0x013c -> line 1637
 *   +0x0140 -> line 1638
 *   +0x0144 -> line 1639
 *   +0x0148 -> line 1638
 *   +0x0170 -> line 1639
 *   +0x01a4 -> line 1643
 *   +0x01a8 -> line 1647
 *   +0x01ac -> line 1643
 *   +0x01b0 -> line 1645
 *   +0x01e8 -> line 1647
 *   +0x0208 -> line 1649
 *   +0x0230 -> line 1651
 *   +0x0240 -> line 1652
 *   +0x024c -> line 1653
 *   +0x0264 -> line 1654
 *   +0x0270 -> line 1659
 *   +0x027c -> line 1660
 *   +0x028c -> line 1662
 *   +0x0294 -> line 1664
 *   +0x02a8 -> line 1662
 *   +0x02b4 -> line 1664
 *   +0x02c8 -> line 1666
 *   +0x02d8 -> line 1667
 *   +0x02e4 -> line 1668
 *   +0x02fc -> line 1669
 *   +0x0308 -> line 1673
 *   +0x0340 -> line 1674
 *   +0x0348 -> line 1675
 *   +0x0350 -> line 1681
 *   +0x0354 -> line 1683
 *   +0x0374 -> line 1685
 *   +0x037c -> line 1686
 *   +0x03c0 -> line 1688
 *   +0x03c8 -> line 1693
 *   +0x0400 -> line 1695
 *   +0x0404 -> line 1694
 *   +0x0410 -> line 1695
 *   +0x042c -> line 1697
 *   +0x0444 -> line 1705
 *   +0x0448 -> line 1697
 *   +0x0454 -> line 1705
 *   +0x045c -> line 1707
 *   +0x04c4 -> line 1708
 *   +0x04d8 -> line 1709
 *   +0x04e0 -> line 1710
 *   +0x04ec -> line 1712
 *   +0x0508 -> line 1713
 *   +0x050c -> line 1716
 *   +0x0534 -> line 1718
 *   +0x0574 -> line 1719
 *   +0x059c -> line 1720
 *   +0x05c8 -> line 1721
 *   +0x05f4 -> line 1722
 *   +0x05fc -> line 1724
 *   +0x0614 -> line 1727
 *   +0x0698 -> line 1729
 *   +0x07b0 -> line 1731
 *   +0x07b8 -> line 1733
 *   +0x07bc -> line 1731
 *   +0x07c8 -> line 1733
 *   +0x07d8 -> line 1736
 *   +0x07e8 -> line 1737
 *   +0x0810 -> line 1740
 *   +0x0818 -> line 1770
 *   +0x081c -> line 1773
 *   +0x0828 -> line 1772
 *   +0x082c -> line 1773
 *   +0x0844 -> line 1775
 *   +0x085c -> line 1776
 *   +0x0870 -> line 1778
 *   +0x087c -> line 1780
 *   +0x08a4 -> line 1784
 *   +0x08a8 -> line 1780
 *   +0x08ac -> line 1784
 *   +0x08b0 -> line 1780
 *   +0x08d8 -> line 1781
 *   +0x0924 -> line 1783
 *   +0x0948 -> line 1784
 *   +0x0950 -> line 1786
 *   +0x0954 -> line 1791
 *   +0x09ac -> line 1793
 *   +0x09b4 -> line 1791
 *   +0x09b8 -> line 1793
 *   +0x09bc -> line 1791
 *   +0x09c0 -> line 1793
 *   +0x09cc -> line 1791
 *   +0x09e4 -> line 1793
 *   +0x09f8 -> line 1795
 *   +0x0a04 -> line 1797
 *   +0x0a0c -> line 1798
 *   +0x0a20 -> line 1800
 *   +0x0a34 -> line 1801
 *   +0x0a3c -> line 1802
 *   +0x0a40 -> line 1801
 *   +0x0a44 -> line 1803
 *   +0x0a58 -> line 1804
 *   +0x0a6c -> line 1808
 *   +0x0a70 -> line 1809
 *   +0x0a94 -> line 1812
 *   +0x0aec -> line 1814
 *   +0x0af4 -> line 1812
 *   +0x0b10 -> line 1813
 *   +0x0b34 -> line 1814
 *   +0x0b3c -> line 1819
 *   +0x0b44 -> line 1820
 *   +0x0b60 -> line 1819
 *   +0x0b64 -> line 1820
 *   +0x0b68 -> line 1819
 *   +0x0b6c -> line 1820
 *   +0x0b84 -> line 1822
 *   +0x0b88 -> line 1821
 *   +0x0b8c -> line 1822
 *   +0x0b90 -> line 1821
 *   +0x0b9c -> line 1824
 *   +0x0ba8 -> line 1826
 *   +0x0bdc -> line 1830
 *   +0x0c2c -> line 1834
 *   +0x0c78 -> line 1837
 *   +0x0c94 -> line 1838
 *   +0x0ca8 -> line 1840
 *   +0x0cc0 -> line 1843
 *   +0x0ce0 -> line 1844
 *   +0x0cf0 -> line 1852
 *   +0x0cf4 -> line 1848
 *   +0x0cf8 -> line 1849
 *   +0x0cfc -> line 1852
 *   +0x0d04 -> line 1854
 *   +0x0d10 -> line 1856
 *   +0x0d18 -> line 1857
 *   +0x0d2c -> line 1859
 *   +0x0d64 -> line 1861
 *   +0x0d68 -> line 1859
 *   +0x0d6c -> line 1862
 *   +0x0d80 -> line 1865
 *   +0x0d8c -> line 1867
 *   +0x0d94 -> line 1868
 *   +0x0da8 -> line 1870
 *   +0x0dbc -> line 1872
 *   +0x0dc4 -> line 1874
 *   +0x0dd0 -> line 1877
 *   +0x0df0 -> line 1879
 *   +0x0df4 -> line 1881
 *   +0x0e0c -> line 1883
 *   +0x0e14 -> line 1885
 *   +0x0e2c -> line 1887
 *   +0x0e40 -> line 1888
 *   +0x0e48 -> line 1890
 *   +0x0e6c -> line 1891
 *   +0x0e74 -> line 1894
 *   +0x0e78 -> line 1896
 *   +0x0e8c -> line 1898
 *   +0x0eb8 -> line 1900
 *   +0x0ebc -> line 1898
 *   +0x0ec4 -> line 1900
 *   +0x0ed0 -> line 1902
 *   +0x0ee0 -> line 1904
 *   +0x0ee4 -> line 1906
 *   +0x0ee8 -> line 1908
 *   +0x0ef0 -> line 1912
 *   +0x0efc -> line 1914
 *   +0x0f00 -> line 1915
 *   +0x0f04 -> line 1919
 *   +0x0f08 -> line 1915
 *   +0x0f0c -> line 1920
 *   +0x0f20 -> line 1923
 *   +0x0f54 -> line 1925
 *   +0x0f90 -> line 1927
 *   +0x0fe8 -> line 1928
 *   +0x0ff0 -> line 1927
 *   +0x1004 -> line 1928
 *   +0x100c -> line 1929
 *   +0x1014 -> line 1934
 *   +0x101c -> line 1936
 *   +0x1028 -> line 1937
 *   +0x1050 -> line 1939
 *   +0x105c -> line 1943
 *   +0x106c -> line 1944
 *   +0x1070 -> line 1943
 *   +0x10a0 -> line 1944
 *   +0x10c4 -> line 1953
 *   +0x10c8 -> line 1944
 *   +0x10e0 -> line 1952
 *   +0x1118 -> line 1953
 *   +0x1134 -> line 1955
 *   +0x1138 -> line 1953
 *   +0x1150 -> line 1955
 *   +0x1188 -> line 1956
 *   +0x1194 -> line 1958
 *   +0x119c -> line 1966
 *   +0x11b8 -> line 1968
 *   +0x11c0 -> line 1972
 *   +0x11d4 -> line 1971
 *   +0x11d8 -> line 1968
 *   +0x11e4 -> line 1969
 *   +0x11e8 -> line 1972
 *   +0x11ec -> line 1969
 *   +0x11fc -> line 1972
 *   +0x120c -> line 1974
 *   +0x121c -> line 1975
 *   +0x1228 -> line 1977
 *   +0x1240 -> line 1979
 *   +0x1244 -> line 1980
 *   +0x1258 -> line 1982
 *   +0x1268 -> line 1983
 *   +0x126c -> line 1984
 *   +0x1270 -> line 1983
 *   +0x1274 -> line 1985
 *   +0x1290 -> line 1988
 *   +0x1298 -> line 1990
 *   +0x12bc -> line 1991
 *   +0x12d4 -> line 1994
 *   +0x12d8 -> line 1991
 *   +0x12f0 -> line 1992
 *   +0x1320 -> line 1994
 *   +0x136c -> line 1996
 *   +0x1384 -> line 1994
 *   +0x13a0 -> line 1996
 *   +0x13b4 -> line 1998
 *   +0x13c4 -> line 1999
 *   +0x13d0 -> line 2001
 *   +0x13e8 -> line 2002
 *   +0x1448 -> line 2003
 *   +0x144c -> line 2002
 *   +0x1464 -> line 2003
 *   +0x14d0 -> line 2008
 *   +0x157c -> line 2009
 *   +0x158c -> line 2010
 *   +0x1594 -> line 2017
 *   +0x15dc -> line 2020
 *   +0x15f0 -> line 2023
 *   +0x15f8 -> line 2116
 *   +0x1600 -> line 2118
 *   +0x1604 -> line 2023
 *   +0x1610 -> line 2116
 *   +0x1630 -> line 2118
 *   +0x1644 -> line 2121
 *   +0x164c -> line 2118
 *   +0x1650 -> line 2121
 *   +0x1664 -> line 2118
 *   +0x166c -> line 2121
 *   +0x1670 -> line 2118
 *   +0x1688 -> line 2121
 *   +0x1690 -> line 2123
 *   +0x16b8 -> line 2126
 *   +0x16bc -> line 2127
 *   +0x16c0 -> line 2126
 *   +0x16c4 -> line 2127
 *   +0x16d0 -> line 2126
 *   +0x16e4 -> line 2127
 *   +0x16ec -> line 2126
 *   +0x1704 -> line 2127
 *   +0x1778 -> line 2128
 *   +0x1790 -> line 2132
 *   +0x17c4 -> line 2134
 *   +0x17cc -> line 2137
 *   +0x17f4 -> line 2139
 *   +0x1804 -> line 2140
 *   +0x1810 -> line 2143
 *   +0x181c -> line 2145
 *   +0x1824 -> line 2146
 *   +0x1838 -> line 2148
 *   +0x1858 -> line 2150
 *   +0x185c -> line 2152
 *   +0x1874 -> line 2154
 *   +0x187c -> line 2156
 *   +0x1894 -> line 2158
 *   +0x18a8 -> line 2159
 *   +0x18b4 -> line 2164
 *   +0x18c8 -> line 2167
 *   +0x18dc -> line 2168
 *   +0x18e8 -> line 2171
 *   +0x18f4 -> line 2172
 *   +0x18fc -> line 2183
 *   +0x1908 -> line 2189
 *   +0x1940 -> line 2190
 *   +0x194c -> line 2191
 *   +0x1968 -> line 2193
 *   +0x1974 -> line 2195
 *   +0x1ac4 -> line 2197
 *   +0x1af8 -> line 2198
 *   +0x1b00 -> line 2201
 *   +0x1b78 -> line 2202
 *   +0x1ba8 -> line 2203
 *   +0x1bd0 -> line 2205
 *   +0x1bf0 -> line 2206
 *   +0x1c24 -> line 2207
 *   +0x1c50 -> line 2211
 *   +0x1c60 -> line 2213
 *   +0x1c68 -> line 2217
 *   +0x1c6c -> line 2219
 *   +0x1c70 -> line 2211
 *   +0x1ca8 -> line 2214
 *   +0x1cac -> line 2211
 *   +0x1cb0 -> line 2213
 *   +0x1ce0 -> line 2214
 *   +0x1d14 -> line 2217
 *   +0x1d24 -> line 2219
 *   +0x1d38 -> line 2222
 *   +0x1d3c -> line 2219
 *   +0x1d40 -> line 2222
 *   +0x1d44 -> line 2219
 *   +0x1d4c -> line 2222
 *   +0x1d60 -> line 2219
 *   +0x1d68 -> line 2222
 *   +0x1d6c -> line 2219
 *   +0x1d84 -> line 2222
 *   +0x1d8c -> line 2224
 *   +0x1e30 -> line 2225
 *   +0x1e48 -> line 2227
 *   +0x1e7c -> line 2228
 *   +0x1e84 -> line 2231
 *   +0x1e98 -> line 2234
 *   +0x1ee0 -> line 2235
 *   +0x1f18 -> line 2238
 *   +0x1f34 -> line 2239
 *   +0x1fa4 -> line 2242
 *   +0x1fb4 -> line 2244
 *   +0x1fd4 -> line 2246
 *   +0x1fec -> line 2250
 *   +0x1ff8 -> line 2251
 *   +0x2000 -> line 2253
 *   +0x2014 -> line 2256
 *   +0x205c -> line 2257
 *   +0x2094 -> line 2260
 *   +0x20b0 -> line 2261
 *   +0x2120 -> line 2263
 *   +0x2130 -> line 2264
 *   +0x2150 -> line 2266
 *   +0x215c -> line 2267
 *   +0x2164 -> line 2266
 *   +0x216c -> line 2267
 *   +0x2174 -> line 2269
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void MEC_fn_vWallObstacleManagement(MTH3D_tdstVector_* pstResultMove,
                                    DNM_stDynamics* p_stDynamic,
                                    MTH3D_tdstVector_* pstMove,
                                    MTH3D_tdstVector_* pstGroundNormal,
                                    MTH3D_tdstVector_* pstWallNormal,
                                    unsigned char bAngleLimit,
                                    float xDT);
void MEC_fn_vComputeSpeed(DNM_stDynamics* p_stDynamic, float xDT);
void MEC_fn_vCollideBaseMechanic(DNM_stDynamics* p_stDynamic,
                                 HIE_tdstSuperObject_* hSupObj,
                                 int lObstacle,
                                 DNM_stMecObstacle* a_stObstacle,
                                 float xDT);
void MTH4D_fn_vCopy3DTo4DVector(MTH4D_tdstVector_* p_stDestination,
                                MTH3D_tdstVector_* p_stSource);

inline float MTH_xDot3(float _x1, float _x2, float _y1, float _y2, float _z1, float _z2) { float _r; asm { mula.s _x1, _x2 } asm { madda.s _y1, _y2 } asm { madd.s _r, _z1, _z2 } return _r; }
inline float MTH_xSqr3(float _x, float _y, float _z) { float _r; asm { mula.s _x, _x } asm { madda.s _y, _y } asm { madd.s _r, _z, _z } return _r; }
inline float MTH_xSqrt(float _x) { float _r; asm { sqrt.s _r, _x } return _r; }
inline float MTH_xSqr2(float _x, float _y) { float _r; asm { mula.s _x, _x } asm { madd.s _r, _y, _y } return _r; }
inline float MTH_xAbs(float _x) { float _r; asm { abs.s _r, _x } return _r; }
#define MTH3D_M_bIsNullVectorWithEps(_p, _eps) ((MTH_xAbs((_p)->xX) < (_eps)) && (MTH_xAbs((_p)->xY) < (_eps)) && (MTH_xAbs((_p)->xZ) < (_eps)))
#define MTH3D_M_vCopyVector(_d, _s) { *(int*)&(_d)->xX = *(int*)&(_s)->xX; *(int*)&(_d)->xY = *(int*)&(_s)->xY; *(int*)&(_d)->xZ = *(int*)&(_s)->xZ; }
#define DNM_M_vSetEndFlags(_p, _ulValue) { unsigned int _ulFlags = (_ulValue); (_p)->m_tdstDynamicsBaseBlock.ulEndFlags = _ulFlags; (_p)->m_tdstDynamicsBaseBlock.ulEndFlags = _ulFlags; }
#define MAT_M_vSetTranslation(_hMatrix, _p_stTrans) { if (((volatile MAT_tdstTransformation_*)(_hMatrix))->eType == MAT_eTransform_Identity) ((volatile MAT_tdstTransformation_*)(_hMatrix))->eType = MAT_eTransform_Translation; *(int*)&((volatile MAT_tdstTransformation_*)(_hMatrix))->stTransformMatrix.stCol_3.xX = *(int*)&((MTH3D_tdstVector_*)(_p_stTrans))->xX; *(int*)&((volatile MAT_tdstTransformation_*)(_hMatrix))->stTransformMatrix.stCol_3.xY = *(int*)&((MTH3D_tdstVector_*)(_p_stTrans))->xY; *(int*)&((volatile MAT_tdstTransformation_*)(_hMatrix))->stTransformMatrix.stCol_3.xZ = *(int*)&((MTH3D_tdstVector_*)(_p_stTrans))->xZ; ((volatile MAT_tdstTransformation_*)(_hMatrix))->stTransformMatrix.stCol_3.xW = 1.0f; }
#pragma optimize_for_size off
void MEC_fn_vGroundObstacleManagement(DNM_stDynamics* p_stDynamic, HIE_tdstSuperObject_* hSupObj, float xDT)
{
    int lObstacle;
    int lObstacle2;
    int lCounter;
    int lObstacleCounter;
    float xSlide;
    float xFactor;
    float xSpeedZ;
    MAT_tdstTransformation_ a2_stPosition[2];
    MAT_tdstTransformation_* p_stPOS_UpPosition;
    MAT_tdstTransformation_ stPreviousMatrix;
    MAT_tdstTransformation_* hCurrentMatrix;
    MAT_tdstTransformation_* hPreviousMatrix;
    MTH3D_tdstVector_ stVector;
    MTH3D_tdstVector_ stUpVector;
    volatile MTH3D_tdstVector_ stDownVector;
    MTH3D_tdstVector_ stMove;
    MTH3D_tdstVector_ stVertical;
    volatile MTH3D_tdstVector_ stTangentMove;
    volatile MTH3D_tdstVector_ stAbsoluteTangentMove;
    MTH3D_tdstVector_ stAdjustVector;
    MTH3D_tdstVector_ stAdjustVector1;
    MTH3D_tdstVector_ stWallMove;
    MTH3D_tdstVector_ stSafeTranslation;
    MTH3D_tdstVector_ stGroundNormal;
    MTH3D_tdstVector_* p_stNormal;
    unsigned char bStep;
    unsigned char bFirstGround;
    float xWallDistance;
    float xTmpReal;
    DNM_stMecObstacle* p_stGroundObstacle;
    DNM_stMecObstacle* p_stWallObstacle;
    DNM_stMecObstacle* p_stTmpObstacle;
    DNM_stMecObstacle* p_stMobileObstacle;
    DNM_stObstacle* p_stObstacle;
    HIE_tdstSuperObject_* hSupObjCol;
    float xNorm;
    MTH4D_tdstVector_* p_stPreviousPosition;
    MTH4D_tdstVector_* p_stCurrentPosition;
    volatile MTH3D_tdstVector_ stResult0;

    p_stObstacle = 0;
    p_stGroundObstacle = 0;
    lObstacle = 0;
    hPreviousMatrix = &p_stDynamic->m_tdstDynamicsBaseBlock.m_stPreviousMatrix;
    hCurrentMatrix = &p_stDynamic->m_tdstDynamicsBaseBlock.m_stCurrentMatrix;
    p_stPOS_UpPosition = 0;
    xWallDistance = 3.402822e38f;
    xSpeedZ = p_stDynamic->m_tdstDynamicsBaseBlock.m_xSlopeLimit;
    xFactor = -xSpeedZ;
    stVertical.xX = 0.0f;
    stVertical.xY = 0.0f;
    stVertical.xZ = 1.0f;
    stAdjustVector.xX = 0.0f;
    stAdjustVector.xY = 0.0f;
    stAdjustVector.xZ = 0.0f;

    if ((p_stDynamic->m_tdstDynamicsBaseBlock.ulEndFlags & 0x4000) ? 1 : 0) {
        p_stObstacle = &p_stDynamic->m_tdstDynamicsBaseBlock.m_pstReport->m_stGround;
    }

    stPreviousMatrix = *hCurrentMatrix;
    a2_stPosition[0] = *hPreviousMatrix;
    if (fn_ucCollSetGetCollComputeFrequencySO(hSupObj) >= 2) {
        a2_stPosition[1] = *hPreviousMatrix;
        MAT_M_vSetTranslation(&a2_stPosition[1], &p_stDynamic->m_tdstDynamicsAdvancedBlock.m_stCollisionTranslation);
        hPreviousMatrix = &a2_stPosition[1];
    }

    p_stCurrentPosition = &hCurrentMatrix->stTransformMatrix.stCol_3;
    stMove.xX = p_stCurrentPosition->xX -
                hPreviousMatrix->stTransformMatrix.stCol_3.xX;
    stMove.xY = p_stCurrentPosition->xY -
                hPreviousMatrix->stTransformMatrix.stCol_3.xY;
    stMove.xZ = p_stCurrentPosition->xZ -
                hPreviousMatrix->stTransformMatrix.stCol_3.xZ;
    p_stPreviousPosition = &hPreviousMatrix->stTransformMatrix.stCol_3;

    if (((p_stDynamic->m_tdstDynamicsBaseBlock.ulEndFlags & 0x10) ? 1 : 0) &&
        (g_lCallCounter == 0) &&
        MEC_fn_bCollision(&lObstacle, g_a_stObstacle, p_stDynamic, hSupObj,
                          hPreviousMatrix, hPreviousMatrix, 1)) {
        MEC_fn_vDeleteBaseBackFace(lObstacle, g_a_stObstacle, p_stDynamic);
        MEC_fn_vDeleteNullTranslationObstacle(lObstacle, g_a_stObstacle);
        MEC_fn_vComputeAdjustVector(&stAdjustVector, p_stDynamic, lObstacle,
                                    g_a_stObstacle, lObstacle);
        MAT_fn_vTranslate(hPreviousMatrix, &stAdjustVector);
    }

    g_lCallCounter++;
    if (g_lCallCounter >= 4) {
        DNM_M_vSetEndFlags(p_stDynamic, p_stDynamic->m_tdstDynamicsBaseBlock.ulEndFlags | 0x02000000);
        if (MEC_fn_bCollision(&lObstacle, g_a_stObstacle, p_stDynamic, hSupObj,
                              hPreviousMatrix, hPreviousMatrix, 1)) {
            MEC_fn_vDeleteBaseBackFace(lObstacle, g_a_stObstacle, p_stDynamic);
            MEC_fn_vDeleteNullTranslationObstacle(lObstacle, g_a_stObstacle);
            MEC_fn_vComputeAdjustVector(&stAdjustVector, p_stDynamic, lObstacle,
                                        g_a_stObstacle, lObstacle);
            MAT_fn_vTranslate(hPreviousMatrix, &stAdjustVector);
        }
        MAT_M_vSetTranslation(hCurrentMatrix, &hPreviousMatrix->stTransformMatrix.stCol_3);
        p_stDynamic->m_tdstDynamicsBaseBlock.m_stPreviousSpeed.xX = 0.0f;
        p_stDynamic->m_tdstDynamicsBaseBlock.m_stPreviousSpeed.xY = 0.0f;
        p_stDynamic->m_tdstDynamicsBaseBlock.m_stPreviousSpeed.xZ = 0.0f;
        return;
    }

    p_stNormal = (MTH3D_tdstVector_*)&stVertical;
    if ((p_stObstacle != 0) &&
        !((p_stDynamic->m_tdstDynamicsBaseBlock.ulEndFlags & 0x10) ? 1 : 0)) {
        p_stNormal = &p_stObstacle->m_stNorm;
        if ((p_stNormal->xX == 0.0f) && (p_stNormal->xY == 0.0f) && (p_stNormal->xZ == 0.0f)) {
            p_stNormal = (MTH3D_tdstVector_*)&stVertical;
        }
    }

    xSlide = MTH_xDot3(stMove.xX, p_stNormal->xX, stMove.xY, p_stNormal->xY, stMove.xZ, p_stNormal->xZ);
    stSafeTranslation.xX = xSlide * p_stNormal->xX;
    stSafeTranslation.xY = xSlide * p_stNormal->xY;
    stSafeTranslation.xZ = xSlide * p_stNormal->xZ;
    stTangentMove.xX = stMove.xX - stSafeTranslation.xX;
    stTangentMove.xY = stMove.xY - stSafeTranslation.xY;
    stTangentMove.xZ = stMove.xZ - stSafeTranslation.xZ;
    xNorm = MTH_xSqrt(MTH_xSqr3(stTangentMove.xX, stTangentMove.xY, stTangentMove.xZ));

    if (g_lCallCounter == 1) {
        g_bHighSpeed = (xNorm > 0.7f) || ((p_stDynamic->m_tdstDynamicsBaseBlock.ulEndFlags & 0x02000000) ? 1 : 0) || ((p_stDynamic->m_tdstDynamicsBaseBlock.ulEndFlags & 0x10) ? 1 : 0);
        DNM_M_vSetEndFlags(p_stDynamic, p_stDynamic->m_tdstDynamicsBaseBlock.ulEndFlags & 0xFDFFFFFF);
    } else if (!g_bHighSpeed && ((p_stDynamic->m_tdstDynamicsBaseBlock.ulEndFlags & 0x02000000) ? 1 : 0)) {
        g_bHighSpeed = 1;
    }

    if (((p_stDynamic->m_tdstDynamicsBaseBlock.ulEndFlags & 4) ? 1 : 0) &&
        ((unsigned char)(p_stDynamic->m_tdstDynamicsComplexBlock.m_hPlatform != 0))) {
        stAbsoluteTangentMove.xX = p_stCurrentPosition->xX - p_stDynamic->m_tdstDynamicsComplexBlock.m_stAbsolutePreviousMatrix.stTransformMatrix.stCol_3.xX;
        stAbsoluteTangentMove.xY = p_stCurrentPosition->xY - p_stDynamic->m_tdstDynamicsComplexBlock.m_stAbsolutePreviousMatrix.stTransformMatrix.stCol_3.xY;
        stAbsoluteTangentMove.xZ = p_stCurrentPosition->xZ - p_stDynamic->m_tdstDynamicsComplexBlock.m_stAbsolutePreviousMatrix.stTransformMatrix.stCol_3.xZ;
        xFactor = MTH_xDot3(stAbsoluteTangentMove.xX, p_stNormal->xX, stAbsoluteTangentMove.xY, p_stNormal->xY, stAbsoluteTangentMove.xZ, p_stNormal->xZ);
        stVector.xX = xFactor * p_stNormal->xX;
        stVector.xY = xFactor * p_stNormal->xY;
        stVector.xZ = xFactor * p_stNormal->xZ;
        stAbsoluteTangentMove.xX -= stVector.xX;
        stAbsoluteTangentMove.xY -= stVector.xY;
        stAbsoluteTangentMove.xZ -= stVector.xZ;
    } else {
        MTH3D_M_vCopyVector((MTH3D_tdstVector_*)&stAbsoluteTangentMove, (MTH3D_tdstVector_*)&stTangentMove);
    }

    if ((xNorm < 1e-10f) && (MTH_xSqrt(MTH_xSqr3(stSafeTranslation.xX, stSafeTranslation.xY, stSafeTranslation.xZ)) > 1e-10f) &&
        (!((p_stDynamic->m_tdstDynamicsBaseBlock.ulEndFlags & 4) ? 1 : 0) ||
         (!(unsigned char)(p_stDynamic->m_tdstDynamicsComplexBlock.m_hPlatform != 0))) &&
        !((p_stDynamic->m_tdstDynamicsBaseBlock.ulEndFlags & 0x10) ? 1 : 0)) {
        int lObstacle;
        DNM_M_vSetEndFlags(p_stDynamic, p_stDynamic->m_tdstDynamicsBaseBlock.ulEndFlags | 0x10);
        p_stPOS_UpPosition =
            &p_stDynamic->m_tdstDynamicsBaseBlock.m_stPreviousMatrix;
        if (fn_ucCollSetGetCollComputeFrequencySO(hSupObj) >= 2) {
            MAT_tdstTransformation_ stPOS_UpPosition;
            stPOS_UpPosition =
                p_stDynamic->m_tdstDynamicsBaseBlock.m_stPreviousMatrix;
            if (stPOS_UpPosition.eType == MAT_eTransform_Identity) {
                stPOS_UpPosition.eType = MAT_eTransform_Translation;
            }
            MTH4D_fn_vCopy3DTo4DVector(
                &stPOS_UpPosition.stTransformMatrix.stCol_3,
                &p_stDynamic->m_tdstDynamicsAdvancedBlock
                     .m_stCollisionTranslation);
            p_stPOS_UpPosition = &stPOS_UpPosition;
        }
        if (MEC_fn_bCollision(&lObstacle, g_a_stObstacle, p_stDynamic, hSupObj,
                              p_stPOS_UpPosition, hCurrentMatrix,
                              !((p_stDynamic->m_tdstDynamicsBaseBlock.ulEndFlags &
                                 0x400000) ? 1 : 0))) {
            MEC_fn_vEdgeAnalysis(p_stDynamic, lObstacle, g_a_stObstacle, 0);
            MEC_fn_vCollideBaseMechanic(p_stDynamic, hSupObj, lObstacle,
                                        g_a_stObstacle, xDT);
        } else {
            DNM_M_vSetEndFlags(p_stDynamic, p_stDynamic->m_tdstDynamicsBaseBlock.ulEndFlags & 0xFFFEFFFF);
        }
        DNM_M_vSetEndFlags(p_stDynamic, p_stDynamic->m_tdstDynamicsBaseBlock.ulEndFlags & ~0x10);
        if ((g_stReport.m_ulCurrSurfaceState & 1) &&
            (MEC_fn_xGetSlide(p_stDynamic, &g_stReport.m_stGround) == 0.0f)) {
            DNM_M_vSetEndFlags(p_stDynamic, p_stDynamic->m_tdstDynamicsBaseBlock.ulEndFlags | 0x8000);
        }
        return;
    } else {
        MTH4D_tdstVector_* p_stSavedPosition;
        volatile MTH3D_tdstVector_ stResult1;
        xTmpReal = p_stDynamic->m_tdstDynamicsBaseBlock.m_stPreviousSpeed.xZ * xDT;
        xFactor *= xNorm;
        if (xFactor > -0.35f) {
            xFactor = -0.35f;
        }
        if (((p_stDynamic->m_tdstDynamicsBaseBlock.ulEndFlags & 0x10) ? 1 : 0) &&
            (xFactor > xTmpReal)) {
            xFactor = xTmpReal;
        }

        p_stSavedPosition = &stPreviousMatrix.stTransformMatrix.stCol_3;
        MAT_M_vSetTranslation(&stPreviousMatrix, p_stPreviousPosition);
        p_stSavedPosition->xX = p_stSavedPosition->xX + stTangentMove.xX;
        p_stSavedPosition->xY = p_stSavedPosition->xY + stTangentMove.xY;
        p_stSavedPosition->xZ = p_stSavedPosition->xZ + stTangentMove.xZ;
        stDownVector.xX = xFactor * p_stNormal->xX;
        stDownVector.xY = xFactor * p_stNormal->xY;
        stDownVector.xZ = xFactor * p_stNormal->xZ;
        MAT_fn_vTranslate(&stPreviousMatrix, &stDownVector);

        lObstacle2 = 0;
        stResult0.xX = p_stPreviousPosition->xX + stTangentMove.xX;
        stResult0.xY = p_stPreviousPosition->xY + stTangentMove.xY;
        stResult0.xZ = p_stPreviousPosition->xZ + stTangentMove.xZ;
        MAT_M_vSetTranslation(&a2_stPosition[0], (MTH3D_tdstVector_*)&stResult0);

        if (MEC_fn_bCollision(&lObstacle2, g_a_stObstacle, p_stDynamic, hSupObj,
                              &a2_stPosition[0], &stPreviousMatrix, 1)) {
            for (lCounter = 0; lCounter < lObstacle2; lCounter++) {
                p_stWallObstacle = &(g_a_stObstacle)[lCounter];
                if ((unsigned char)((p_stWallObstacle->m_xCollidedEntity != 99)) &&
                    !MEC_fn_bWallNormal(p_stDynamic, &p_stWallObstacle->m_stNorm)) {
                    p_stWallObstacle->m_xCollidedEntity = 99;
                }
            }
            MEC_fn_vReportCollision(p_stDynamic, hSupObj, lObstacle2,
                                    g_a_stObstacle, 0);
        }

        xFactor = xSpeedZ * xNorm;
        if (xFactor < 0.35f) {
            xFactor = 0.35f;
        }
        stResult1.xX = p_stPreviousPosition->xX + stTangentMove.xX;
        stResult1.xY = p_stPreviousPosition->xY + stTangentMove.xY;
        stResult1.xZ = p_stPreviousPosition->xZ + stTangentMove.xZ;
        MAT_M_vSetTranslation(&a2_stPosition[0], (MTH3D_tdstVector_*)&stResult1);
        stUpVector.xX = xFactor * p_stNormal->xX;
        stUpVector.xY = xFactor * p_stNormal->xY;
        stUpVector.xZ = xFactor * p_stNormal->xZ;
        MAT_fn_vTranslate(&a2_stPosition[0], &stUpVector);

        COL_g_lMaxNumberOfCollisions = 75 - lObstacle2;
        MEC_fn_bCollision(&lObstacle, (g_a_stObstacle) + lObstacle2,
                          p_stDynamic, hSupObj, &stPreviousMatrix,
                          &a2_stPosition[0], 1);
        COL_g_lMaxNumberOfCollisions = 75;
        lObstacle += lObstacle2;

        if (lObstacle != 0) {
            p_stGroundObstacle = (DNM_stMecObstacle*)MEC_fn_pSelectGround(
                p_stDynamic, lObstacle - lObstacle2,
                (g_a_stObstacle) + lObstacle2, &stTangentMove, &bFirstGround);
            bStep = (p_stGroundObstacle != 0) ? MEC_fn_bDetectStep(p_stDynamic, lObstacle - lObstacle2, (g_a_stObstacle) + lObstacle2, p_stGroundObstacle, &stAbsoluteTangentMove) : 0;
            if (!bStep && (g_lCallCounter == 1)) {
                MEC_fn_vEdgeAnalysis(
                    p_stDynamic, lObstacle - lObstacle2,
                    (g_a_stObstacle) + lObstacle2, p_stGroundObstacle);
            }
            if (bFirstGround) {
                MEC_fn_vDeleteWallEdge(lObstacle, g_a_stObstacle, p_stDynamic);
            }
            MEC_fn_vDeleteUnderGroundWall(lObstacle, g_a_stObstacle,
                                          p_stDynamic, p_stGroundObstacle);
            MEC_fn_vDeleteOnGroundBackFace(lObstacle, g_a_stObstacle,
                                           p_stDynamic, &stAbsoluteTangentMove,
                                           p_stGroundObstacle);
            if (MEC_fn_bMainActor(hSupObj) && (g_lCallCounter == 1)) {
                MEC_fn_vCrashAnalysis(p_stDynamic, lObstacle, g_a_stObstacle);
            }

            p_stMobileObstacle = 0;
            p_stWallObstacle = 0;
            lObstacleCounter = 0;
            if (lObstacle2 != 0) {
                for (lCounter = 0; lCounter < lObstacle2; lCounter++) {
                    p_stTmpObstacle = &(g_a_stObstacle)[lCounter];
                    if ((unsigned char)((p_stTmpObstacle->m_xCollidedEntity != 99)) &&
                        (p_stTmpObstacle->m_xRate < 0.0f)) {
                        MEC_fn_bGroundNormal(p_stDynamic, &p_stTmpObstacle->m_stNorm);
                    }
                }
            }

            for (lCounter = 0; lCounter < lObstacle; lCounter++) {
                p_stTmpObstacle = &(g_a_stObstacle)[lCounter];
                if ((unsigned char)(p_stTmpObstacle->m_xCollidedEntity != 99)) {
                    if (MEC_fn_bGroundNormal(p_stDynamic,
                                             &p_stTmpObstacle->m_stNorm)) {
                        if (p_stGroundObstacle == p_stTmpObstacle) {
                            lObstacleCounter = lCounter;
                        }
                    } else {
                        if (((p_stTmpObstacle->m_eType & 2) == 2) &&
                            (p_stMobileObstacle == 0)) {
                            hSupObjCol = p_stTmpObstacle->mp_stSupObj;
                            if ((hSupObjCol != 0) && !MEC_fn_bMainActor(hSupObjCol) &&
                                ((fn_ulStandardGameGetCustomBitsSO(
                                      MEC_fn_hGetFatherActor(hSupObjCol)) &
                                  0x04000000) == 0x04000000)) {
                                if (!MEC_fn_bGroundNormal(
                                        p_stDynamic,
                                        &p_stTmpObstacle->m_stNorm)) {
                                    p_stMobileObstacle = p_stTmpObstacle;
                                }
                                if (MEC_fn_bCeilObstacle(
                                        p_stDynamic, p_stTmpObstacle) &&
                                    (g_lCallCounter == 1)) {
                                    p_stTmpObstacle->m_xCollidedEntity = 99;
                                }
                            }
                        }
                        if (MEC_fn_bWallNormal(
                                p_stDynamic,
                                &p_stTmpObstacle->m_stNorm)) {
                        stVector.xX = p_stTmpObstacle->m_stContact.xX -
                                      p_stPreviousPosition->xX;
                        stVector.xY = p_stTmpObstacle->m_stContact.xY -
                                      p_stPreviousPosition->xY;
                        stVector.xZ = p_stTmpObstacle->m_stContact.xZ -
                                      p_stPreviousPosition->xZ;
                        xTmpReal = MTH_xSqr2(stVector.xX, stVector.xY);
                        if (xTmpReal < xWallDistance) {
                            p_stWallObstacle = p_stTmpObstacle;
                            xWallDistance = xTmpReal;
                            lObstacleCounter = lCounter;
                        }
                        } else if (p_stWallObstacle == 0) {
                            p_stWallObstacle = p_stTmpObstacle;
                            lObstacleCounter = lCounter;
                        }
                    }
                }
            }

            MEC_fn_vReportCollision(
                p_stDynamic, hSupObj, lObstacle - lObstacle2,
                (g_a_stObstacle) + lObstacle2,
                lObstacleCounter);

            if (((p_stDynamic->m_tdstDynamicsBaseBlock.ulEndFlags & 0x40) ?
                     1 : 0) &&
                ((p_stDynamic->m_tdstDynamicsBaseBlock.ulEndFlags & 0x200000) ?
                     1 : 0) &&
                (p_stWallObstacle == 0)) {
                volatile MTH3D_tdstVector_ stResult2;
                stResult2.xX = p_stPreviousPosition->xX + stTangentMove.xX;
                stResult2.xY = p_stPreviousPosition->xY + stTangentMove.xY;
                stResult2.xZ = p_stPreviousPosition->xZ + stTangentMove.xZ;
                MAT_M_vSetTranslation(hCurrentMatrix, (MTH3D_tdstVector_*)&stResult2);
                MEC_fn_vComputeSpeed(p_stDynamic, xDT);
                return;
            }

            if (p_stGroundObstacle != 0) {
                if (MEC_fn_xGetSlide(p_stDynamic, p_stGroundObstacle) == 0.0f) {
                    DNM_M_vSetEndFlags(p_stDynamic, p_stDynamic->m_tdstDynamicsBaseBlock.ulEndFlags | 0x8000);
                }
                if (p_stWallObstacle == 0) {
                    stVector.xX = p_stSavedPosition->xX + p_stGroundObstacle->m_stTranslation.xX;
                    stVector.xY = p_stSavedPosition->xY + p_stGroundObstacle->m_stTranslation.xY;
                    stVector.xZ = p_stSavedPosition->xZ + p_stGroundObstacle->m_stTranslation.xZ;
                    MAT_M_vSetTranslation(hCurrentMatrix, &stVector);

                    stVector.xX = hCurrentMatrix->stTransformMatrix.stCol_3.xX - stTangentMove.xX;
                    stVector.xY = hCurrentMatrix->stTransformMatrix.stCol_3.xY - stTangentMove.xY;
                    stVector.xZ = hCurrentMatrix->stTransformMatrix.stCol_3.xZ - stTangentMove.xZ;
                    MAT_M_vSetTranslation(hPreviousMatrix, &stVector);

                    if ((g_lCallCounter == 1) &&
                        ((p_stDynamic->m_tdstDynamicsBaseBlock.ulEndFlags &
                          0x4000) ? 1 : 0) &&
                        !(p_stDynamic->m_tdstDynamicsBaseBlock.m_pstReport
                              ->m_ulPrevSurfaceState & 4)) {
                        DNM_M_vSetEndFlags(p_stDynamic, p_stDynamic->m_tdstDynamicsBaseBlock.ulEndFlags | 0x800000);
                    }
                } else if ((p_stMobileObstacle != 0) &&
                           (g_lCallCounter == 1)) {
                    DNM_M_vSetEndFlags(p_stDynamic, p_stDynamic->m_tdstDynamicsBaseBlock.ulEndFlags | 0x02000000);
                    MTH3D_M_vCopyVector((MTH3D_tdstVector_*)&stGroundNormal, (MTH3D_tdstVector_*)&p_stGroundObstacle->m_stNorm);
                    p_stWallObstacle = 0;
                    if (MEC_fn_bCollision(&lObstacle, g_a_stObstacle, p_stDynamic, hSupObj,
                                          hPreviousMatrix, hPreviousMatrix, 1)) {
                        MEC_fn_vDeleteBaseBackFace(lObstacle, g_a_stObstacle, p_stDynamic);
                        MEC_fn_vDeleteNullTranslationObstacle(lObstacle, g_a_stObstacle);
                        for (lCounter = 0; (lCounter < lObstacle) && (p_stWallObstacle == 0); lCounter++) {
                            p_stTmpObstacle = &(g_a_stObstacle)[lCounter];
                            if ((unsigned char)(p_stTmpObstacle->m_xCollidedEntity != 99)) {
                                if ((p_stTmpObstacle->m_eType & 2) == 2) {
                                    p_stWallObstacle = p_stTmpObstacle;
                                }
                            }
                        }
                        if (p_stWallObstacle != 0) {
                            volatile MTH3D_tdstVector_ stResult3;
                            xFactor = MTH_xDot3(p_stWallObstacle->m_stTranslation.xX, stGroundNormal.xX, p_stWallObstacle->m_stTranslation.xY, stGroundNormal.xY, p_stWallObstacle->m_stTranslation.xZ, stGroundNormal.xZ);
                            xFactor -= 0.001f;
                            stVector.xX = xFactor * stGroundNormal.xX;
                            stVector.xY = xFactor * stGroundNormal.xY;
                            stVector.xZ = xFactor * stGroundNormal.xZ;
                            stVector.xX = p_stWallObstacle->m_stTranslation.xX - stVector.xX;
                            stVector.xY = p_stWallObstacle->m_stTranslation.xY - stVector.xY;
                            stVector.xZ = p_stWallObstacle->m_stTranslation.xZ - stVector.xZ;
                            stResult3.xX = p_stPreviousPosition->xX + stVector.xX;
                            stResult3.xY = p_stPreviousPosition->xY + stVector.xY;
                            stResult3.xZ = p_stPreviousPosition->xZ + stVector.xZ;
                            MAT_M_vSetTranslation(hCurrentMatrix, (MTH3D_tdstVector_*)&stResult3);

                            if (MEC_fn_bCollision(&lObstacle, g_a_stObstacle, p_stDynamic, hSupObj,
                                                  hPreviousMatrix, hCurrentMatrix, 1)) {
                                volatile MTH3D_tdstVector_ stResult4;
                                volatile MTH3D_tdstVector_ stResult5;
                                MEC_fn_vDeleteBaseBackFace(lObstacle, g_a_stObstacle, p_stDynamic);
                                MEC_fn_vDeleteNullTranslationObstacle(lObstacle, g_a_stObstacle);
                                MEC_fn_vComputeAdjustVector(&stAdjustVector, p_stDynamic, lObstacle,
                                                            g_a_stObstacle, lObstacle);
                                stResult4.xX = p_stCurrentPosition->xX + stAdjustVector.xX;
                                stResult4.xY = p_stCurrentPosition->xY + stAdjustVector.xY;
                                stResult4.xZ = p_stCurrentPosition->xZ + stAdjustVector.xZ;
                                MAT_M_vSetTranslation(hPreviousMatrix, (MTH3D_tdstVector_*)&stResult4);
                                stResult5.xX = p_stPreviousPosition->xX + stMove.xX;
                                stResult5.xY = p_stPreviousPosition->xY + stMove.xY;
                                stResult5.xZ = p_stPreviousPosition->xZ + stMove.xZ;
                                MAT_M_vSetTranslation(hCurrentMatrix, (MTH3D_tdstVector_*)&stResult5);
                            }
                        }
                    }

                    bStep = MTH3D_M_bIsNullVectorWithEps(&stMove, 0.001f);
                    if (!bStep) {
                        MEC_fn_vGroundObstacleManagement(
                            p_stDynamic, hSupObj, xDT);
                    }
                } else {
                    bStep = (p_stDynamic->m_tdstDynamicsBaseBlock.ulEndFlags &
                             0x800000) ? 1 : 0;
                    if (bStep) {
                        bStep =
                            (p_stDynamic->m_tdstDynamicsBaseBlock.ulEndFlags &
                             0x4000) ? 1 : 0;
                        if (bStep &&
                            !(p_stDynamic->m_tdstDynamicsBaseBlock.m_pstReport
                                  ->m_ulPrevSurfaceState & 4)) {
                            DNM_M_vSetEndFlags(p_stDynamic, p_stDynamic->m_tdstDynamicsBaseBlock.ulEndFlags & 0xFF7FFFFF);
                        }
                    }
                    DNM_M_vSetEndFlags(p_stDynamic, p_stDynamic->m_tdstDynamicsBaseBlock.ulEndFlags | 0x02000000);
                    MTH3D_M_vCopyVector(&stSafeTranslation, (MTH3D_tdstVector_*)p_stPreviousPosition);
                    MAT_M_vSetTranslation(hCurrentMatrix, &stSafeTranslation);

                    MEC_fn_vWallObstacleManagement(
                        &stWallMove, p_stDynamic, &stMove,
                        &p_stGroundObstacle->m_stNorm,
                        &p_stWallObstacle->m_stNorm, 0, xDT);

                    bStep = (p_stDynamic->m_tdstDynamicsBaseBlock.ulEndFlags &
                             4) ? 1 : 0;
                    if (!bStep ||
                        (!(unsigned char)(p_stDynamic->m_tdstDynamicsComplexBlock.m_hPlatform != 0))) {
                        stAdjustVector.xX = stMove.xX - stWallMove.xX;
                        stAdjustVector.xY = stMove.xY - stWallMove.xY;
                        stAdjustVector.xZ = stMove.xZ - stWallMove.xZ;
                        bStep = MTH3D_M_bIsNullVectorWithEps(&stWallMove, 0.001f);
                        if (!bStep) {
                            MEC_fn_vGroundObstacleManagement(
                                p_stDynamic, hSupObj, xDT);
                        } else {
                            MAT_M_vSetTranslation(hCurrentMatrix, &stVector);
                        }
                    }

                    else if (MEC_fn_bCollision(&lObstacle, g_a_stObstacle,
                                          p_stDynamic, hSupObj,
                                          hCurrentMatrix, hCurrentMatrix, 1)) {
                        MEC_fn_vDeleteBaseBackFace(
                            lObstacle, g_a_stObstacle, p_stDynamic);
                        MEC_fn_vDeleteNullTranslationObstacle(
                            lObstacle, g_a_stObstacle);
                        for (lCounter = 0; lCounter < lObstacle; lCounter++) {
                            p_stTmpObstacle = &(g_a_stObstacle)[lCounter];
                            if ((unsigned char)((p_stTmpObstacle->m_xCollidedEntity != 99)) &&
                                ((p_stTmpObstacle->m_eType & 2) == 2) &&
                                (p_stMobileObstacle == 0)) {
                                hSupObjCol = p_stTmpObstacle->mp_stSupObj;
                                if ((hSupObjCol != 0) &&
                                    !MEC_fn_bMainActor(hSupObjCol) &&
                                    ((fn_ulStandardGameGetCustomBitsSO(
                                          MEC_fn_hGetFatherActor(hSupObjCol)) &
                                      0x04000000) == 0x04000000) &&
                                    MEC_fn_bCeilObstacle(
                                        p_stDynamic,
                                        p_stTmpObstacle)) {
                                    p_stTmpObstacle->m_xCollidedEntity = 99;
                                }
                            }
                        }
                        MEC_fn_vComputeAdjustVector(
                            &stAdjustVector, p_stDynamic, lObstacle,
                            g_a_stObstacle, lObstacle);
                        MAT_fn_vTranslate(hCurrentMatrix, &stAdjustVector);
                    }

                    MEC_fn_vComputeSpeed(p_stDynamic, xDT);
                    return;
                }
            } else if (p_stWallObstacle != 0) {
                MEC_fn_vComputeAdjustVector(
                    &stAdjustVector, p_stDynamic,
                    lObstacle - lObstacle2,
                    (g_a_stObstacle) + lObstacle2,
                    lObstacle - lObstacle2);
                if (lObstacle2 != 0) {
                    MEC_fn_vComputeAdjustVector(
                            &stAdjustVector1, p_stDynamic, lObstacle2,
                        g_a_stObstacle, lObstacle2);
                } else {
                    stAdjustVector1.xX = 0.0f;
                    stAdjustVector1.xY = 0.0f;
                    stAdjustVector1.xZ = 0.0f;
                }

                bStep = (lObstacle2 == 0) || MTH3D_M_bIsNullVectorWithEps((MTH3D_tdstVector_*)&stAdjustVector, 0.001f) || MTH3D_M_bIsNullVectorWithEps(&stAdjustVector1, 0.001f);
                if (bStep) {
                    stAdjustVector.xX += stAdjustVector1.xX;
                    stAdjustVector.xY += stAdjustVector1.xY;
                    stAdjustVector.xZ += stAdjustVector1.xZ;
                } else {
                    xNorm = MTH_xSqrt(MTH_xSqr3(stAdjustVector1.xX, stAdjustVector1.xY, stAdjustVector1.xZ));
                    if (xNorm != 0.0f) {
                        xNorm = 1.0f / xNorm;
                        stDownVector.xX = stAdjustVector1.xX * xNorm;
                        stDownVector.xY = stAdjustVector1.xY * xNorm;
                        stDownVector.xZ = stAdjustVector1.xZ * xNorm;
                    } else {
                        stDownVector = stAdjustVector1;
                    }
                    xFactor = MTH_xDot3(stAdjustVector.xX, stDownVector.xX, stAdjustVector.xY, stDownVector.xY, stAdjustVector.xZ, stDownVector.xZ);
                    xNorm = MTH_xSqrt(MTH_xSqr3(stAdjustVector.xX, stAdjustVector.xY, stAdjustVector.xZ));
                    if (xFactor < xNorm) {
                        stAdjustVector.xX -=
                            xFactor * stDownVector.xX;
                        stAdjustVector.xY -=
                            xFactor * stDownVector.xY;
                        stAdjustVector.xZ -=
                            xFactor * stDownVector.xZ;
                        stAdjustVector.xX += stAdjustVector1.xX;
                        stAdjustVector.xY += stAdjustVector1.xY;
                        stAdjustVector.xZ += stAdjustVector1.xZ;
                    }
                }

                stVector.xX =
                    p_stSavedPosition->xX +
                    stAdjustVector.xX;
                stVector.xY =
                    p_stSavedPosition->xY +
                    stAdjustVector.xY;
                stVector.xZ =
                    p_stSavedPosition->xZ +
                    stAdjustVector.xZ;
                stAdjustVector.xX = stVector.xX -
                    hPreviousMatrix->stTransformMatrix.stCol_3.xX;
                stAdjustVector.xY = stVector.xY -
                    hPreviousMatrix->stTransformMatrix.stCol_3.xY;
                stAdjustVector.xZ = stVector.xZ -
                    hPreviousMatrix->stTransformMatrix.stCol_3.xZ;
                stMove.xX -= stAdjustVector.xX;
                stMove.xY -= stAdjustVector.xY;
                stMove.xZ -= stAdjustVector.xZ;
                DNM_M_vSetEndFlags(p_stDynamic, p_stDynamic->m_tdstDynamicsBaseBlock.ulEndFlags | 0x02000000);
                MAT_M_vSetTranslation(hCurrentMatrix, &stVector);

                MEC_fn_vWallObstacleManagement(
                    &stWallMove, p_stDynamic, &stMove,
                    p_stNormal, &p_stWallObstacle->m_stNorm, 0, xDT);
                bStep = MTH3D_M_bIsNullVectorWithEps(&stWallMove, 0.001f);
                if (!bStep) {
                    MEC_fn_vGroundObstacleManagement(
                        p_stDynamic, hSupObj, xDT);
                } else {
                    MTH3D_M_vCopyVector((MTH3D_tdstVector_*)&hCurrentMatrix->stTransformMatrix.stCol_3, (MTH3D_tdstVector_*)&stVector);
                    hCurrentMatrix->stTransformMatrix.stCol_3.xW = 1.0f;
                }
            } else {
                DNM_M_vSetEndFlags(p_stDynamic, p_stDynamic->m_tdstDynamicsBaseBlock.ulEndFlags | 0x02000000);
                xNorm = MTH_xSqrt(MTH_xSqr3(stAbsoluteTangentMove.xX, stAbsoluteTangentMove.xY, stAbsoluteTangentMove.xZ));
                if ((xNorm > 0.7f) && (xTmpReal < 0.0f)) {
                    *hCurrentMatrix = stPreviousMatrix;
                }
                bStep = (p_stDynamic->m_tdstDynamicsBaseBlock.ulEndFlags &
                         0x200000) ? 1 : 0;
                if (bStep) {
                    volatile MTH3D_tdstVector_ stResult6;
                    stResult6.xX = hPreviousMatrix->stTransformMatrix.stCol_3.xX +
                                   stTangentMove.xX;
                    stResult6.xY = hPreviousMatrix->stTransformMatrix.stCol_3.xY +
                                   stTangentMove.xY;
                    stResult6.xZ = hPreviousMatrix->stTransformMatrix.stCol_3.xZ +
                                   stTangentMove.xZ;
                    MAT_M_vSetTranslation(hCurrentMatrix, (MTH3D_tdstVector_*)&stResult6);
                }
                if (g_lCallCounter >= 2) {
                    hCurrentMatrix->stTransformMatrix.stCol_3.xX =
                        hPreviousMatrix->stTransformMatrix.stCol_3.xX;
                    hCurrentMatrix->stTransformMatrix.stCol_3.xY =
                        hPreviousMatrix->stTransformMatrix.stCol_3.xY;
                    hCurrentMatrix->stTransformMatrix.stCol_3.xZ =
                        hPreviousMatrix->stTransformMatrix.stCol_3.xZ;
                    hCurrentMatrix->stTransformMatrix.stCol_3.xW =
                        hPreviousMatrix->stTransformMatrix.stCol_3.xW;
                }
                DNM_M_vSetEndFlags(p_stDynamic, p_stDynamic->m_tdstDynamicsBaseBlock.ulEndFlags & 0xFFFEFFFF);
            }
            MEC_fn_vComputeSpeed(p_stDynamic, xDT);
            return;
        } else {
        DNM_M_vSetEndFlags(p_stDynamic, p_stDynamic->m_tdstDynamicsBaseBlock.ulEndFlags | 0x02000000);
        xNorm = MTH_xSqrt(MTH_xSqr3(stAbsoluteTangentMove.xX, stAbsoluteTangentMove.xY, stAbsoluteTangentMove.xZ));
        if ((xNorm > 0.7f) && (xTmpReal < 0.0f)) {
            *hCurrentMatrix = stPreviousMatrix;
        }
        bStep = (p_stDynamic->m_tdstDynamicsBaseBlock.ulEndFlags &
                 0x200000) ? 1 : 0;
        if (bStep) {
            volatile MTH3D_tdstVector_ stResult7;
            stResult7.xX = hPreviousMatrix->stTransformMatrix.stCol_3.xX +
                           stTangentMove.xX;
            stResult7.xY = hPreviousMatrix->stTransformMatrix.stCol_3.xY +
                           stTangentMove.xY;
            stResult7.xZ = hPreviousMatrix->stTransformMatrix.stCol_3.xZ +
                           stTangentMove.xZ;
            MAT_M_vSetTranslation(hCurrentMatrix, (MTH3D_tdstVector_*)&stResult7);
        }
        if (g_lCallCounter >= 2) {
            hCurrentMatrix->stTransformMatrix.stCol_3.xX =
                hPreviousMatrix->stTransformMatrix.stCol_3.xX;
            hCurrentMatrix->stTransformMatrix.stCol_3.xY =
                hPreviousMatrix->stTransformMatrix.stCol_3.xY;
            hCurrentMatrix->stTransformMatrix.stCol_3.xZ =
                hPreviousMatrix->stTransformMatrix.stCol_3.xZ;
            hCurrentMatrix->stTransformMatrix.stCol_3.xW =
                hPreviousMatrix->stTransformMatrix.stCol_3.xW;
        }
        DNM_M_vSetEndFlags(p_stDynamic, p_stDynamic->m_tdstDynamicsBaseBlock.ulEndFlags & 0xFFFEFFFF);
        MEC_fn_vComputeSpeed(p_stDynamic, xDT);
        }
    }
}
#pragma optimize_for_size reset

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\MEC\MECBhv.c lines 1076–1458 */
/* addr: 0x00308830  size: 5960 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1076
 *   +0x0004 -> line 1115
 *   +0x0008 -> line 1076
 *   +0x000c -> line 1115
 *   +0x0010 -> line 1076
 *   +0x0018 -> line 1079
 *   +0x001c -> line 1076
 *   +0x0034 -> line 1112
 *   +0x0038 -> line 1076
 *   +0x0044 -> line 1111
 *   +0x0048 -> line 1076
 *   +0x0054 -> line 1115
 *   +0x0058 -> line 1087
 *   +0x005c -> line 1115
 *   +0x0064 -> line 1126
 *   +0x0068 -> line 1125
 *   +0x006c -> line 1126
 *   +0x0070 -> line 1130
 *   +0x0088 -> line 1133
 *   +0x00c8 -> line 1134
 *   +0x00d4 -> line 1142
 *   +0x00d8 -> line 1138
 *   +0x00e8 -> line 1142
 *   +0x00ec -> line 1145
 *   +0x00f8 -> line 1138
 *   +0x0118 -> line 1139
 *   +0x0148 -> line 1143
 *   +0x0188 -> line 1145
 *   +0x0224 -> line 1146
 *   +0x0240 -> line 1152
 *   +0x024c -> line 1153
 *   +0x025c -> line 1156
 *   +0x0294 -> line 1157
 *   +0x029c -> line 1158
 *   +0x02a4 -> line 1162
 *   +0x02b0 -> line 1163
 *   +0x02f4 -> line 1164
 *   +0x0300 -> line 1166
 *   +0x0304 -> line 1164
 *   +0x0324 -> line 1166
 *   +0x0330 -> line 1167
 *   +0x0354 -> line 1169
 *   +0x03f8 -> line 1170
 *   +0x0478 -> line 1172
 *   +0x0484 -> line 1174
 *   +0x04ac -> line 1175
 *   +0x04cc -> line 1177
 *   +0x04f0 -> line 1180
 *   +0x0500 -> line 1183
 *   +0x0504 -> line 1180
 *   +0x0524 -> line 1181
 *   +0x0528 -> line 1180
 *   +0x0530 -> line 1181
 *   +0x0558 -> line 1182
 *   +0x0590 -> line 1183
 *   +0x05a8 -> line 1185
 *   +0x05b0 -> line 1183
 *   +0x05bc -> line 1188
 *   +0x05c0 -> line 1183
 *   +0x05d8 -> line 1186
 *   +0x0604 -> line 1187
 *   +0x0608 -> line 1186
 *   +0x0610 -> line 1187
 *   +0x0644 -> line 1188
 *   +0x065c -> line 1196
 *   +0x0664 -> line 1188
 *   +0x0668 -> line 1193
 *   +0x066c -> line 1196
 *   +0x067c -> line 1190
 *   +0x0680 -> line 1188
 *   +0x0698 -> line 1196
 *   +0x06ac -> line 1199
 *   +0x06c0 -> line 1202
 *   +0x06cc -> line 1204
 *   +0x06d4 -> line 1205
 *   +0x06e8 -> line 1207
 *   +0x0764 -> line 1208
 *   +0x076c -> line 1210
 *   +0x0788 -> line 1213
 *   +0x0794 -> line 1215
 *   +0x079c -> line 1216
 *   +0x07b0 -> line 1218
 *   +0x07c4 -> line 1221
 *   +0x07e4 -> line 1224
 *   +0x0808 -> line 1226
 *   +0x0810 -> line 1229
 *   +0x0824 -> line 1228
 *   +0x0828 -> line 1229
 *   +0x083c -> line 1231
 *   +0x0844 -> line 1232
 *   +0x0858 -> line 1234
 *   +0x087c -> line 1235
 *   +0x088c -> line 1237
 *   +0x08c4 -> line 1238
 *   +0x08ec -> line 1239
 *   +0x08fc -> line 1241
 *   +0x0920 -> line 1243
 *   +0x0984 -> line 1249
 *   +0x0988 -> line 1252
 *   +0x0990 -> line 1253
 *   +0x09a0 -> line 1255
 *   +0x09a4 -> line 1256
 *   +0x09ac -> line 1261
 *   +0x09c4 -> line 1262
 *   +0x09c8 -> line 1265
 *   +0x0a4c -> line 1273
 *   +0x0a70 -> line 1274
 *   +0x0a88 -> line 1275
 *   +0x0a8c -> line 1279
 *   +0x0aec -> line 1287
 *   +0x0af8 -> line 1289
 *   +0x0b00 -> line 1290
 *   +0x0b14 -> line 1292
 *   +0x0b60 -> line 1298
 *   +0x0b78 -> line 1301
 *   +0x0b7c -> line 1298
 *   +0x0b84 -> line 1300
 *   +0x0b88 -> line 1301
 *   +0x0b8c -> line 1298
 *   +0x0ba4 -> line 1299
 *   +0x0bb0 -> line 1300
 *   +0x0bc0 -> line 1301
 *   +0x0bd0 -> line 1302
 *   +0x0bdc -> line 1305
 *   +0x0bf0 -> line 1308
 *   +0x0c08 -> line 1311
 *   +0x0c20 -> line 1314
 *   +0x0c28 -> line 1316
 *   +0x0c3c -> line 1318
 *   +0x0c44 -> line 1320
 *   +0x0c6c -> line 1322
 *   +0x0c74 -> line 1323
 *   +0x0c78 -> line 1322
 *   +0x0cb0 -> line 1323
 *   +0x0ce0 -> line 1324
 *   +0x0ce8 -> line 1328
 *   +0x0cf4 -> line 1330
 *   +0x0cfc -> line 1331
 *   +0x0d10 -> line 1333
 *   +0x0d4c -> line 1334
 *   +0x0d54 -> line 1336
 *   +0x0d70 -> line 1338
 *   +0x0d78 -> line 1340
 *   +0x0d80 -> line 1341
 *   +0x0d84 -> line 1340
 *   +0x0dbc -> line 1341
 *   +0x0dec -> line 1343
 *   +0x0df4 -> line 1346
 *   +0x0dfc -> line 1347
 *   +0x0e00 -> line 1346
 *   +0x0e38 -> line 1347
 *   +0x0e68 -> line 1350
 *   +0x0e70 -> line 1353
 *   +0x0ecc -> line 1355
 *   +0x0ee4 -> line 1357
 *   +0x0f10 -> line 1358
 *   +0x0f18 -> line 1362
 *   +0x0f20 -> line 1358
 *   +0x0f40 -> line 1359
 *   +0x0f78 -> line 1360
 *   +0x0fa8 -> line 1362
 *   +0x0fdc -> line 1363
 *   +0x0fe0 -> line 1362
 *   +0x0fe4 -> line 1363
 *   +0x1018 -> line 1364
 *   +0x105c -> line 1366
 *   +0x1064 -> line 1369
 *   +0x107c -> line 1371
 *   +0x1098 -> line 1374
 *   +0x109c -> line 1371
 *   +0x10a8 -> line 1374
 *   +0x10c0 -> line 1371
 *   +0x10dc -> line 1374
 *   +0x10e4 -> line 1376
 *   +0x1114 -> line 1379
 *   +0x11b8 -> line 1381
 *   +0x11c8 -> line 1382
 *   +0x11d4 -> line 1383
 *   +0x11dc -> line 1386
 *   +0x1210 -> line 1388
 *   +0x1218 -> line 1391
 *   +0x1220 -> line 1393
 *   +0x1238 -> line 1395
 *   +0x124c -> line 1399
 *   +0x1250 -> line 1395
 *   +0x1278 -> line 1396
 *   +0x127c -> line 1395
 *   +0x1280 -> line 1396
 *   +0x12b4 -> line 1397
 *   +0x12fc -> line 1399
 *   +0x1314 -> line 1401
 *   +0x1318 -> line 1399
 *   +0x1324 -> line 1401
 *   +0x133c -> line 1399
 *   +0x1358 -> line 1401
 *   +0x1360 -> line 1403
 *   +0x1390 -> line 1404
 *   +0x13a8 -> line 1407
 *   +0x13e0 -> line 1408
 *   +0x13e8 -> line 1409
 *   +0x13f0 -> line 1412
 *   +0x147c -> line 1414
 *   +0x148c -> line 1415
 *   +0x1498 -> line 1416
 *   +0x14a0 -> line 1419
 *   +0x14d4 -> line 1420
 *   +0x14dc -> line 1423
 *   +0x14e0 -> line 1425
 *   +0x14e4 -> line 1428
 *   +0x14e8 -> line 1423
 *   +0x151c -> line 1424
 *   +0x1528 -> line 1425
 *   +0x1538 -> line 1428
 *   +0x154c -> line 1429
 *   +0x1558 -> line 1430
 *   +0x1560 -> line 1435
 *   +0x1590 -> line 1438
 *   +0x1594 -> line 1439
 *   +0x1598 -> line 1438
 *   +0x159c -> line 1439
 *   +0x15a4 -> line 1437
 *   +0x15a8 -> line 1438
 *   +0x15d8 -> line 1439
 *   +0x1674 -> line 1440
 *   +0x167c -> line 1443
 *   +0x1688 -> line 1444
 *   +0x1690 -> line 1449
 *   +0x1694 -> line 1451
 *   +0x1698 -> line 1454
 *   +0x169c -> line 1449
 *   +0x16d0 -> line 1450
 *   +0x16dc -> line 1451
 *   +0x16ec -> line 1454
 *   +0x1700 -> line 1455
 *   +0x170c -> line 1458
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void MEC_fn_vClimbObstacleManagement(DNM_stDynamics* p_stDynamic, HIE_tdstSuperObject_* hSupObj, float xDT)
{
    float xNorm;
    MAT_tdstTransformation_* hPreviousMatrix;
    MAT_tdstTransformation_* hCurrentMatrix;
    MAT_tdstTransformation_* p_stPOS_FrontPosition;
    MAT_tdstTransformation_* p_stPOS_BackPosition;
    MAT_tdstTransformation_ a2_stPosition[2];
    DNM_stMecObstacle* p_stGroundObstacle;
    DNM_stMecObstacle* p_stSlideObstacle;
    DNM_stMecObstacle* p_stClimbObstacle;
    DNM_stMecObstacle* p_stTmpObstacle;
    MTH3D_tdstVector_ stTmpVector;
    MTH3D_tdstVector_ stNormTangentMove;
    MTH3D_tdstVector_ stSafeTranslation;
    MTH3D_tdstVector_ stSlideMove;
    MTH3D_tdstVector_ stTangentMove;
    MTH3D_tdstVector_ stMove;
    MTH3D_tdstVector_ stAdjustVector;
    MTH3D_tdstVector_ stVector;
    MTH3D_tdstVector_* p_stNormal;
    MTH3D_tdstVector_ stY;
    float xDotProdMin;
    float xSlope;
    float xNormalMove;
    unsigned char bStop;
    int lCounter2;
    int lCounter1;
    int lCounter;
    int lObstacle;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\MEC\MECBhv.c lines 792–1067 */
/* addr: 0x00309f80  size: 4200 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 792
 *   +0x0008 -> line 819
 *   +0x000c -> line 792
 *   +0x0010 -> line 818
 *   +0x0014 -> line 792
 *   +0x0030 -> line 832
 *   +0x0034 -> line 792
 *   +0x0038 -> line 833
 *   +0x003c -> line 792
 *   +0x0040 -> line 840
 *   +0x0044 -> line 792
 *   +0x0048 -> line 841
 *   +0x0050 -> line 796
 *   +0x0054 -> line 834
 *   +0x0058 -> line 797
 *   +0x005c -> line 822
 *   +0x0060 -> line 840
 *   +0x0064 -> line 834
 *   +0x0070 -> line 837
 *   +0x00a0 -> line 838
 *   +0x00d0 -> line 842
 *   +0x0108 -> line 845
 *   +0x0114 -> line 846
 *   +0x0124 -> line 849
 *   +0x015c -> line 850
 *   +0x0164 -> line 851
 *   +0x016c -> line 854
 *   +0x018c -> line 856
 *   +0x0190 -> line 854
 *   +0x0194 -> line 856
 *   +0x0198 -> line 854
 *   +0x019c -> line 856
 *   +0x01b8 -> line 860
 *   +0x01c0 -> line 861
 *   +0x01c8 -> line 863
 *   +0x01cc -> line 865
 *   +0x01d4 -> line 868
 *   +0x01d8 -> line 872
 *   +0x0208 -> line 874
 *   +0x020c -> line 873
 *   +0x0210 -> line 877
 *   +0x0218 -> line 879
 *   +0x021c -> line 873
 *   +0x0230 -> line 874
 *   +0x0254 -> line 877
 *   +0x0258 -> line 878
 *   +0x025c -> line 877
 *   +0x027c -> line 878
 *   +0x02b0 -> line 879
 *   +0x02c8 -> line 881
 *   +0x02d0 -> line 879
 *   +0x02dc -> line 884
 *   +0x02e0 -> line 879
 *   +0x02f8 -> line 883
 *   +0x02fc -> line 882
 *   +0x0320 -> line 883
 *   +0x0354 -> line 884
 *   +0x0370 -> line 892
 *   +0x0380 -> line 887
 *   +0x0384 -> line 884
 *   +0x039c -> line 892
 *   +0x03b0 -> line 894
 *   +0x03c4 -> line 897
 *   +0x03d0 -> line 899
 *   +0x03dc -> line 900
 *   +0x03f0 -> line 902
 *   +0x046c -> line 904
 *   +0x0474 -> line 905
 *   +0x0478 -> line 906
 *   +0x04a0 -> line 907
 *   +0x04b4 -> line 910
 *   +0x04e8 -> line 912
 *   +0x04f0 -> line 914
 *   +0x04f4 -> line 915
 *   +0x04f8 -> line 918
 *   +0x0520 -> line 920
 *   +0x0528 -> line 921
 *   +0x053c -> line 923
 *   +0x05a0 -> line 929
 *   +0x05c4 -> line 930
 *   +0x05d4 -> line 932
 *   +0x060c -> line 933
 *   +0x0634 -> line 934
 *   +0x0644 -> line 935
 *   +0x064c -> line 939
 *   +0x0668 -> line 941
 *   +0x0684 -> line 944
 *   +0x069c -> line 947
 *   +0x06e0 -> line 949
 *   +0x06f8 -> line 951
 *   +0x0700 -> line 953
 *   +0x0714 -> line 955
 *   +0x074c -> line 956
 *   +0x07cc -> line 957
 *   +0x07dc -> line 959
 *   +0x07f0 -> line 961
 *   +0x0818 -> line 964
 *   +0x083c -> line 965
 *   +0x085c -> line 969
 *   +0x0860 -> line 965
 *   +0x0878 -> line 966
 *   +0x0884 -> line 969
 *   +0x0898 -> line 970
 *   +0x08a4 -> line 971
 *   +0x08ac -> line 976
 *   +0x08b4 -> line 978
 *   +0x08bc -> line 980
 *   +0x08c4 -> line 981
 *   +0x08c8 -> line 980
 *   +0x0900 -> line 981
 *   +0x0930 -> line 982
 *   +0x0938 -> line 986
 *   +0x097c -> line 988
 *   +0x0994 -> line 989
 *   +0x09e8 -> line 993
 *   +0x09ec -> line 989
 *   +0x0a04 -> line 991
 *   +0x0a44 -> line 992
 *   +0x0a84 -> line 993
 *   +0x0ac0 -> line 994
 *   +0x0ac8 -> line 997
 *   +0x0b00 -> line 1000
 *   +0x0b20 -> line 1003
 *   +0x0bc4 -> line 1005
 *   +0x0bd4 -> line 1006
 *   +0x0be0 -> line 1007
 *   +0x0be8 -> line 1009
 *   +0x0c1c -> line 1011
 *   +0x0c24 -> line 1014
 *   +0x0c2c -> line 1017
 *   +0x0c60 -> line 1019
 *   +0x0c78 -> line 1020
 *   +0x0ccc -> line 1023
 *   +0x0cd0 -> line 1020
 *   +0x0ce8 -> line 1021
 *   +0x0d28 -> line 1022
 *   +0x0d68 -> line 1023
 *   +0x0da4 -> line 1024
 *   +0x0dac -> line 1027
 *   +0x0de4 -> line 1029
 *   +0x0e04 -> line 1031
 *   +0x0ea8 -> line 1033
 *   +0x0eb8 -> line 1034
 *   +0x0ec4 -> line 1035
 *   +0x0ecc -> line 1037
 *   +0x0f00 -> line 1038
 *   +0x0f08 -> line 1041
 *   +0x0f0c -> line 1043
 *   +0x0f10 -> line 1041
 *   +0x0f3c -> line 1042
 *   +0x0f48 -> line 1043
 *   +0x0f6c -> line 1046
 *   +0x0f84 -> line 1047
 *   +0x0f90 -> line 1048
 *   +0x0f98 -> line 1052
 *   +0x0fa4 -> line 1053
 *   +0x0fac -> line 1058
 *   +0x0fb0 -> line 1060
 *   +0x0fb4 -> line 1058
 *   +0x0fe0 -> line 1059
 *   +0x0fec -> line 1060
 *   +0x1010 -> line 1063
 *   +0x1028 -> line 1064
 *   +0x1034 -> line 1067
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void MEC_fn_vGiObstacleManagement(DNM_stDynamics* p_stDynamic, HIE_tdstSuperObject_* hSupObj, float xDT)
{
    MAT_tdstTransformation_* hPreviousMatrix;
    MAT_tdstTransformation_* hCurrentMatrix;
    MAT_tdstTransformation_* p_stPOS_UpPosition;
    MAT_tdstTransformation_* p_stPOS_DownPosition;
    MAT_tdstTransformation_ a2_stPosition[2];
    DNM_stObstacle* p_stPreviousCeilObstacle;
    DNM_stMecObstacle* p_stSlideObstacle;
    DNM_stMecObstacle* p_stGiObstacle;
    DNM_stMecObstacle* p_stTmpObstacle;
    MTH3D_tdstVector_ stAdjustVector;
    MTH3D_tdstVector_ stVerticalVector;
    MTH3D_tdstVector_ stSlideMove;
    MTH3D_tdstVector_ stMove;
    MTH3D_tdstVector_ stTmpVector;
    MTH3D_tdstVector_ stVector;
    MTH3D_tdstVector_* p_stGiContact;
    MTH3D_tdstVector_* p_stGiNormal;
    float xNormalMove;
    unsigned char bGiFace;
    int lFace;
    int lCounter1;
    int lCounter;
    int lObstacle;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\MEC\MECBhv.c lines 757–787 */
/* addr: 0x0030aff0  size: 344 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 757
 *   +0x0020 -> line 769
 *   +0x0024 -> line 770
 *   +0x0038 -> line 772
 *   +0x0050 -> line 775
 *   +0x0054 -> line 774
 *   +0x0058 -> line 775
 *   +0x005c -> line 776
 *   +0x0060 -> line 775
 *   +0x0088 -> line 776
 *   +0x00b8 -> line 780
 *   +0x00f0 -> line 782
 *   +0x0104 -> line 783
 *   +0x011c -> line 784
 *   +0x0124 -> line 786
 *   +0x013c -> line 787
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void MEC_fn_vBaseObstacleManagement(DNM_stDynamics* p_stDynamic, HIE_tdstSuperObject_* hSupObj, float xDT)
{
    MAT_tdstTransformation_ stInitialMatrix;
    MAT_tdstTransformation_* hInitialMatrix;
    MAT_tdstTransformation_* hCurrentMatrix;
    int lObstacle;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\MEC\MECBhv.c lines 723–752 */
/* addr: 0x0030b150  size: 496 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 723
 *   +0x0020 -> line 729
 *   +0x0028 -> line 734
 *   +0x0034 -> line 735
 *   +0x0040 -> line 737
 *   +0x0044 -> line 735
 *   +0x0054 -> line 738
 *   +0x005c -> line 735
 *   +0x0064 -> line 737
 *   +0x006c -> line 735
 *   +0x0070 -> line 737
 *   +0x0078 -> line 738
 *   +0x007c -> line 735
 *   +0x0080 -> line 737
 *   +0x0084 -> line 738
 *   +0x00b8 -> line 739
 *   +0x0114 -> line 740
 *   +0x0140 -> line 742
 *   +0x0144 -> line 740
 *   +0x0148 -> line 742
 *   +0x0158 -> line 744
 *   +0x0160 -> line 742
 *   +0x0184 -> line 743
 *   +0x01a4 -> line 744
 *   +0x01ac -> line 745
 *   +0x01c8 -> line 751
 *   +0x01d4 -> line 752
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void MEC_fn_vOrient(DNM_stDynamics* p_stDynamic, MTH3D_tdstVector_* p_stNormal)
{
    float xNorm;
    MTH3D_tdstVector_ stZ;
    MTH3D_tdstVector_ stY;
    MTH3D_tdstVector_ stX;
    MTH3D_tdstVector_ stVector;
    MAT_tdstTransformation_* hCurrentMatrix;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\MEC\MECBhv.c lines 479–527 */
/* addr: 0x0030b340  size: 1224 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 479
 *   +0x000c -> line 486
 *   +0x00ac -> line 488
 *   +0x00b4 -> line 489
 *   +0x00bc -> line 493
 *   +0x00c0 -> line 492
 *   +0x00c4 -> line 493
 *   +0x0104 -> line 495
 *   +0x01a4 -> line 497
 *   +0x01ac -> line 498
 *   +0x01b4 -> line 502
 *   +0x0214 -> line 503
 *   +0x0230 -> line 505
 *   +0x0248 -> line 507
 *   +0x02cc -> line 508
 *   +0x0340 -> line 510
 *   +0x034c -> line 512
 *   +0x0368 -> line 514
 *   +0x03cc -> line 515
 *   +0x03ec -> line 516
 *   +0x0414 -> line 521
 *   +0x042c -> line 523
 *   +0x0478 -> line 526
 *   +0x047c -> line 523
 *   +0x048c -> line 524
 *   +0x04b4 -> line 526
 *   +0x04bc -> line 527
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void MEC_fn_vWallObstacleManagement(MTH3D_tdstVector_* pstResultMove, DNM_stDynamics* p_stDynamic, MTH3D_tdstVector_* pstMove, MTH3D_tdstVector_* pstGroundNormal, MTH3D_tdstVector_* pstWallNormal, unsigned char bAngleLimit, float xDT)
{
    float xNorm;
    float xFactor;
    MAT_tdstTransformation_* hCurrentMatrix;
    MTH3D_tdstVector_ stVector;
    MTH3D_tdstVector_ stDirection;
    /* TODO: decompile from asm/... */
}
