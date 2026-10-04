/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\MEC\MECTools.c */
/* Language: C */
/* Compiler: MW MIPS C Compiler */

#include <stddef.h>

/* Recovered aggregate layouts from MWCC debug type records. */
typedef struct AI_tdstMind_ AI_tdstMind_;
typedef struct FIL_tdstFileNameList_ FIL_tdstFileNameList_;
typedef struct GLI_tdstLight_ GLI_tdstLight_;
typedef struct GLI_tdstMaterial_ GLI_tdstMaterial_;
typedef struct GLI_tdstTexture_ GLI_tdstTexture_;
typedef struct IPO_tdstInstanciatedPhysicalObject_ IPO_tdstInstanciatedPhysicalObject_;
typedef struct PO_tdstPhysicalObject_ PO_tdstPhysicalObject_;
typedef struct WP_tdstListOfArc_ WP_tdstListOfArc_;
typedef struct WP_tdstWayPoint_ WP_tdstWayPoint_;
typedef struct _SND_tdstBlockEvent _SND_tdstBlockEvent;
typedef struct tdstAlwaysActiveCharacter_ tdstAlwaysActiveCharacter_;
typedef struct tdstCineinfo_ tdstCineinfo_;
typedef struct tdstCollSet_ tdstCollSet_;
typedef struct tdstComport_ tdstComport_;
typedef struct tdstDynam_ tdstDynam_;
typedef struct tdstMSLight_ tdstMSLight_;
typedef struct tdstMSSound_ tdstMSSound_;
typedef struct tdstMSWay_ tdstMSWay_;
typedef struct tdstMicro_ tdstMicro_;
typedef struct tdstNodeMainCharacter_ tdstNodeMainCharacter_;
typedef struct tdstObjectsTablesList_ tdstObjectsTablesList_;
typedef struct tdstSectInfo_ tdstSectInfo_;
typedef struct tdstState_ tdstState_;
typedef struct tdstSuperObjectLinks_ tdstSuperObjectLinks_;
typedef union HIE_tduLinkedObject_ HIE_tduLinkedObject_;
typedef struct MTH3D_tdstVector_ MTH3D_tdstVector_;
typedef struct HIE_tdstSuperObject_ HIE_tdstSuperObject_;
typedef struct tdstSubAnimInUse_ tdstSubAnimInUse_;
typedef struct stInterpolatedPosition stInterpolatedPosition;
typedef struct tdstAChannel_ tdstAChannel_;
typedef struct DNM_stObstacle DNM_stObstacle;
typedef struct MTH_stRotation MTH_stRotation;
typedef struct MTH_stMove MTH_stMove;
typedef struct DNM_stReport DNM_stReport;
typedef struct MTH4D_tdstVector_ MTH4D_tdstVector_;
typedef struct MTH4D_tdstMatrix_ MTH4D_tdstMatrix_;
typedef struct MAT_tdstTransformation_ MAT_tdstTransformation_;
typedef struct MTH3D_tdstMatrix_ MTH3D_tdstMatrix_;
typedef struct DNM_stDynamicsBaseBlock DNM_stDynamicsBaseBlock;
typedef struct DNM_stDynamicsAdvancedBlock DNM_stDynamicsAdvancedBlock;
typedef struct anon_0 anon_0;
typedef struct anon_1 anon_1;
typedef struct stMACDPID stMACDPID;
typedef struct DNM_stDynamicsComplexBlock DNM_stDynamicsComplexBlock;
typedef struct DNM_stDynamics DNM_stDynamics;
typedef struct DNM_stMecMatCharacteristics DNM_stMecMatCharacteristics;
typedef struct DNM_stMecObstacle DNM_stMecObstacle;
typedef struct tdstPLA_DeformationLink_ tdstPLA_DeformationLink_;
typedef struct SECT_tdstListOfDNMLights_ SECT_tdstListOfDNMLights_;
typedef struct LST2_tdstAnchorToCINE_tdxHandleToCineActorDyn LST2_tdstAnchorToCINE_tdxHandleToCineActorDyn;
typedef struct CINE_tdstCine_ CINE_tdstCine_;
typedef struct CINE_tdstChannelLink_ CINE_tdstChannelLink_;
typedef struct tdstGraphChainedListNode_ tdstGraphChainedListNode_;
typedef struct LST2_tdstAnchorToWP_tdhGraphNodeDyn LST2_tdstAnchorToWP_tdhGraphNodeDyn;
typedef struct WP_tdstGraph_ WP_tdstGraph_;
typedef struct LST2_tdstAnchorToCINE_tdxHandleToChannelLinkDyn LST2_tdstAnchorToCINE_tdxHandleToChannelLinkDyn;
typedef struct LST2_tdstAnchorToCHN_tdxHandleToMorphElementDyn LST2_tdstAnchorToCHN_tdxHandleToMorphElementDyn;
typedef struct tdstSubAnim_ tdstSubAnim_;
typedef struct CINE_tdstCineActor_ CINE_tdstCineActor_;
typedef struct GEO_tdstDoubledIndex_ GEO_tdstDoubledIndex_;
typedef struct LST2_tdstAnchorToSECT_tdxHandleOfElementLstCharacterDyn LST2_tdstAnchorToSECT_tdxHandleOfElementLstCharacterDyn;
typedef struct LST2_tdstAnchorToSECT_tdxHandleOfElementLstStaticLightsOpt LST2_tdstAnchorToSECT_tdxHandleOfElementLstStaticLightsOpt;
typedef struct LST2_tdstAnchorToSECT_tdxHandleOfElementLstDNMLightsDyn LST2_tdstAnchorToSECT_tdxHandleOfElementLstDNMLightsDyn;
typedef struct LST2_tdstAnchorToSECT_tdxHandleOfElementLstGraphicInteractionOpt LST2_tdstAnchorToSECT_tdxHandleOfElementLstGraphicInteractionOpt;
typedef struct LST2_tdstAnchorToSECT_tdxHandleOfElementLstCollisionInteractionOpt LST2_tdstAnchorToSECT_tdxHandleOfElementLstCollisionInteractionOpt;
typedef struct LST2_tdstAnchorToSECT_tdxHandleOfElementLstActivityInteractionOpt LST2_tdstAnchorToSECT_tdxHandleOfElementLstActivityInteractionOpt;
typedef struct LST2_tdstAnchorToSECT_tdxHandleOfElementLstSoundInteractionOpt LST2_tdstAnchorToSECT_tdxHandleOfElementLstSoundInteractionOpt;
typedef struct LST2_tdstAnchorToSCT_tdxHandleOfLstSoundEventOpt LST2_tdstAnchorToSCT_tdxHandleOfLstSoundEventOpt;
typedef union _SND_tduRefEvt _SND_tduRefEvt;
typedef struct SECT_tdstSector_ SECT_tdstSector_;
typedef struct tdstPLA_Deformation_ tdstPLA_Deformation_;
typedef struct tdstEngineObject_ tdstEngineObject_;
typedef struct HIE_tdstModifierObject_ HIE_tdstModifierObject_;
typedef struct SECT_tdstListOfSOCharacters_ SECT_tdstListOfSOCharacters_;
typedef struct LST2_tdstAnchorTotdxHandleToFamilyListDyn LST2_tdstAnchorTotdxHandleToFamilyListDyn;
typedef struct WP_tdstGraphNode_ WP_tdstGraphNode_;
typedef struct SECT_tdstListOfStaticLights_ SECT_tdstListOfStaticLights_;
typedef struct LST2_tdstAnchorTotdxHandleToStateOpt LST2_tdstAnchorTotdxHandleToStateOpt;
typedef struct LST2_tdstAnchorTotdxHandleToSubAnimOpt LST2_tdstAnchorTotdxHandleToSubAnimOpt;
typedef struct LST2_tdstAnchorTotdxHandleToObjectsTablesListOpt LST2_tdstAnchorTotdxHandleToObjectsTablesListOpt;
typedef struct tdstFamilyList_ tdstFamilyList_;
typedef struct LST2_tdstAnchorToCINE_tdxHandleToCineDyn LST2_tdstAnchorToCINE_tdxHandleToCineDyn;
typedef struct CINE_Manager_ CINE_Manager_;
typedef struct tdstPLA_Hierarchy_ tdstPLA_Hierarchy_;
typedef struct tdstFrame3d_ tdstFrame3d_;
typedef struct LST2_tdstAnchorTotdxHandleToSubAnimInUseDyn LST2_tdstAnchorTotdxHandleToSubAnimInUseDyn;
typedef struct tdst3dData_ tdst3dData_;
typedef struct SECT_tdstListOfSOSectorsInSoundInteraction_ SECT_tdstListOfSOSectorsInSoundInteraction_;
typedef struct tdstMorphChannelList_ tdstMorphChannelList_;
typedef struct _stTimerCount _stTimerCount;
typedef struct tdstEngineTimerStructure_ tdstEngineTimerStructure_;
typedef struct GLD_tdstViewportAttributes_ GLD_tdstViewportAttributes_;
typedef struct GLI_tdstSpecificAttributesFor3D_ GLI_tdstSpecificAttributesFor3D_;
typedef struct LST2_tdstAnchorTotdxHandleToNodeCameraDyn LST2_tdstAnchorTotdxHandleToNodeCameraDyn;
typedef struct LST2_tdstAnchorTotdxHandleToAlwaysActiveCharacterNodeDyn LST2_tdstAnchorTotdxHandleToAlwaysActiveCharacterNodeDyn;
typedef struct LST2_tdstAnchorToMC_tdxHandleToMainCharacterNodeDyn LST2_tdstAnchorToMC_tdxHandleToMainCharacterNodeDyn;
typedef struct tdstEngineStructure_ tdstEngineStructure_;
typedef struct SECT_tdstListOfSOSectorsInActivityInteraction_ SECT_tdstListOfSOSectorsInActivityInteraction_;
typedef struct stMorphData stMorphData;
typedef struct GLI_tdst2DVertex_ GLI_tdst2DVertex_;
typedef struct GLI_tdstCamera_ GLI_tdstCamera_;
typedef struct SECT_tdstListOfSOSectorsInCollisionInteraction_ SECT_tdstListOfSOSectorsInCollisionInteraction_;
typedef struct tdstLipsSynchValue_ tdstLipsSynchValue_;
typedef struct GMT_tdstCollideMaterial_ GMT_tdstCollideMaterial_;
typedef struct tdstElement3d_ tdstElement3d_;
typedef struct SECT_tdstListOfSOSectorsInGraphicInteraction_ SECT_tdstListOfSOSectorsInGraphicInteraction_;
typedef struct GEO_tdstParallelBox_ GEO_tdstParallelBox_;
typedef struct tdstViewportManagement_ tdstViewportManagement_;
typedef struct SCT_tdstListOfSoundEvent_ SCT_tdstListOfSoundEvent_;
typedef struct tdstEventInTable_ tdstEventInTable_;
typedef struct tdstEvent_ tdstEvent_;
typedef struct tdstAnim3d_ tdstAnim3d_;
typedef struct COL_tdstBoundingSphere_ COL_tdstBoundingSphere_;
typedef struct tdstBrain_ tdstBrain_;
typedef struct tdstNodeCamera_ tdstNodeCamera_;
typedef struct GMT_tdstGameMaterial_ GMT_tdstGameMaterial_;
typedef struct GEO_tdstEdge_ GEO_tdstEdge_;
typedef struct tdstStandardGame_ tdstStandardGame_;
typedef struct GEO_tdstGeometricObject_ GEO_tdstGeometricObject_;
typedef struct tdstLanguageStructure_ tdstLanguageStructure_;
typedef struct tdstCouple_ tdstCouple_;

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

typedef enum anon_enum_00be88f4 {
    DNM_ObsType_Nothing = 0,
    DNM_ObsType_Scenery = 1,
    DNM_ObsType_Mobile = 2,
    DNM_ObsType_DoubleEdge = 4,
    DNM_ObsType_MobileWall = 9,
    DNM_Dummy_For_Align = 2147483647,
} anon_enum_00be88f4;

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

struct MTH3D_tdstVector_ {
    float xX; /* +0x0 */
    float xY; /* +0x4 */
    float xZ; /* +0x8 */
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
    DNM_stDynamicsComplexBlock m_tdstDynamicsComplexBlock; /* +0x200 */
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
    anon_enum_00be88f4 m_eType; /* +0x28 */
    short m_xMyEntity; /* +0x2c */
    short m_xCollidedEntity; /* +0x2e */
    MTH3D_tdstVector_ m_stTranslation; /* +0x30 */
    MTH3D_tdstVector_ m_stZoneMove; /* +0x3c */
    MTH3D_tdstVector_ m_stZonePosition; /* +0x48 */
    float m_xZoneRadius; /* +0x54 */
    DNM_stMecMatCharacteristics m_stProperties; /* +0x58 */
    DNM_stMecMatCharacteristics m_stMyProperties; /* +0x60 */
};

struct tdstPLA_DeformationLink_ {
    unsigned short wChannel1; /* +0x0 */
    unsigned short wBorder1; /* +0x2 */
    unsigned short wChannel2; /* +0x4 */
    unsigned short wBorder2; /* +0x6 */
};

struct SECT_tdstListOfDNMLights_ {
    GLI_tdstLight_* hDNMLights; /* +0x0 */
    SECT_tdstListOfDNMLights_* hNextBrotherDyn; /* +0x4 */
    SECT_tdstListOfDNMLights_* hPrevBrotherDyn; /* +0x8 */
    LST2_tdstAnchorToSECT_tdxHandleOfElementLstDNMLightsDyn* hFatherDyn; /* +0xc */
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

struct CINE_tdstChannelLink_ {
    HIE_tdstSuperObject_* hSPOLinked; /* +0x0 */
    int lIndexOfChannel; /* +0x4 */
    CINE_tdstChannelLink_* hNextBrotherDyn; /* +0x8 */
    CINE_tdstChannelLink_* hPrevBrotherDyn; /* +0xc */
    LST2_tdstAnchorToCINE_tdxHandleToChannelLinkDyn* hFatherDyn; /* +0x10 */
};

struct tdstGraphChainedListNode_ {
    WP_tdstGraph_* GraphChainedListNodeInfo; /* +0x0 */
    tdstGraphChainedListNode_* p_NextGraphChainedListNode; /* +0x4 */
};

struct LST2_tdstAnchorToWP_tdhGraphNodeDyn {
    WP_tdstGraphNode_* hFirstElementDyn; /* +0x0 */
    WP_tdstGraphNode_* hLastElementDyn; /* +0x4 */
    int lNumberOfElementsDyn; /* +0x8 */
};

struct WP_tdstGraph_ {
    LST2_tdstAnchorToWP_tdhGraphNodeDyn m_hListOfNode; /* +0x0 */
};

struct LST2_tdstAnchorToCINE_tdxHandleToChannelLinkDyn {
    CINE_tdstChannelLink_* hFirstElementDyn; /* +0x0 */
    CINE_tdstChannelLink_* hLastElementDyn; /* +0x4 */
    int lNumberOfElementsDyn; /* +0x8 */
};

struct LST2_tdstAnchorToCHN_tdxHandleToMorphElementDyn {
    tdstMorphChannelList_* hFirstElementDyn; /* +0x0 */
    tdstMorphChannelList_* hLastElementDyn; /* +0x4 */
    int lNumberOfElementsDyn; /* +0x8 */
};

struct tdstSubAnim_ {
    tdstAnim3d_* p_stSubAnim; /* +0x0 */
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

struct GEO_tdstDoubledIndex_ {
    short a2_xIndex[2]; /* +0x0 */
};

struct LST2_tdstAnchorToSECT_tdxHandleOfElementLstCharacterDyn {
    SECT_tdstListOfSOCharacters_* hFirstElementDyn; /* +0x0 */
    SECT_tdstListOfSOCharacters_* hLastElementDyn; /* +0x4 */
    int lNumberOfElementsDyn; /* +0x8 */
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

union _SND_tduRefEvt {
    unsigned int Id; /* +0x0 */
    _SND_tdstBlockEvent* pstPtr; /* +0x0 */
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

struct tdstPLA_Deformation_ {
    unsigned int ulNbOfDeformationLinks; /* +0x0 */
    tdstPLA_DeformationLink_* d_stDeformationLinks; /* +0x4 */
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

struct HIE_tdstModifierObject_ {
    GEO_tdstGeometricObject_* p_stGeometricObject; /* +0x0 */
    int lMulIntensity; /* +0x4 */
    int lAddIntensity; /* +0x8 */
};

struct SECT_tdstListOfSOCharacters_ {
    HIE_tdstSuperObject_* hPointerOfCharacter; /* +0x0 */
    SECT_tdstListOfSOCharacters_* hNextBrotherDyn; /* +0x4 */
    SECT_tdstListOfSOCharacters_* hPrevBrotherDyn; /* +0x8 */
    LST2_tdstAnchorToSECT_tdxHandleOfElementLstCharacterDyn* hFatherDyn; /* +0xc */
};

struct LST2_tdstAnchorTotdxHandleToFamilyListDyn {
    tdstFamilyList_* hFirstElementDyn; /* +0x0 */
    tdstFamilyList_* hLastElementDyn; /* +0x4 */
    int lNumberOfElementsDyn; /* +0x8 */
};

struct WP_tdstGraphNode_ {
    WP_tdstGraphNode_* hNextBrotherDyn; /* +0x0 */
    WP_tdstGraphNode_* hPrevBrotherDyn; /* +0x4 */
    LST2_tdstAnchorToWP_tdhGraphNodeDyn* hFatherDyn; /* +0x8 */
    WP_tdstWayPoint_* m_hWayPoint; /* +0xc */
    int m_lTypeOfWP; /* +0x10 */
    int m_lTypeOfWPInit; /* +0x14 */
    WP_tdstListOfArc_* m_hListOfArc; /* +0x18 */
};

struct SECT_tdstListOfStaticLights_ {
    GLI_tdstLight_* hStaticLights; /* +0x0 */
};

struct LST2_tdstAnchorTotdxHandleToStateOpt {
    tdstState_* hFirstElementOpt; /* +0x0 */
    int lNumberOfElementsOpt; /* +0x4 */
};

struct LST2_tdstAnchorTotdxHandleToSubAnimOpt {
    tdstSubAnim_* hFirstElementOpt; /* +0x0 */
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

struct LST2_tdstAnchorToCINE_tdxHandleToCineDyn {
    CINE_tdstCine_* hFirstElementDyn; /* +0x0 */
    CINE_tdstCine_* hLastElementDyn; /* +0x4 */
    int lNumberOfElementsDyn; /* +0x8 */
};

struct CINE_Manager_ {
    LST2_tdstAnchorToCINE_tdxHandleToCineDyn hCineList; /* +0x0 */
    MAT_tdstTransformation_ gp_stFixedCameraMatrix; /* +0x10 */
    HIE_tdstSuperObject_* gp_stSPOHandleCamera; /* +0x70 */
};

struct tdstPLA_Hierarchy_ {
    unsigned int ulNbOfCouples; /* +0x0 */
    tdstCouple_* d_stCouples; /* +0x4 */
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

struct SECT_tdstListOfSOSectorsInSoundInteraction_ {
    HIE_tdstSuperObject_* hPointerOfSectorSO; /* +0x0 */
    int lVolume; /* +0x4 */
};

struct tdstMorphChannelList_ {
    tdstMorphChannelList_* hNextBrotherDyn; /* +0x0 */
    tdstMorphChannelList_* hPrevBrotherDyn; /* +0x4 */
    LST2_tdstAnchorToCHN_tdxHandleToMorphElementDyn* hFatherDyn; /* +0x8 */
    unsigned short uwChannelNumber; /* +0xc */
    short MorphListIndex; /* +0xe */
};

struct _stTimerCount {
    unsigned long m_ulLowPart; /* +0x0 */
    unsigned long m_ulHighPart; /* +0x8 */
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
    unsigned char _extractor_padding_00[4]; /* implicitly added by extractor; +0x5c..0x5f */
    _stTimerCount stRealTimeCount; /* +0x60 */
    _stTimerCount stPauseTime; /* +0x70 */
    unsigned int ulTickPerMS; /* +0x80 */
};

struct GLD_tdstViewportAttributes_ {
    unsigned int dwInitialHeight; /* +0x0 */
    unsigned int dwInitialWidth; /* +0x4 */
    unsigned int dwHeight; /* +0x8 */
    unsigned int dwWidth; /* +0xc */
    unsigned int dwTopInPix; /* +0x10 */
    unsigned int dwBottomInPix; /* +0x14 */
    unsigned int dwLeftInPix; /* +0x18 */
    unsigned int dwRightInPix; /* +0x1c */
    unsigned int dwTopInPixForClip; /* +0x20 */
    unsigned int dwBottomInPixForClip; /* +0x24 */
    unsigned int dwLeftInPixForClip; /* +0x28 */
    unsigned int dwRightInPixForClip; /* +0x2c */
    unsigned int dwWidthInPercent; /* +0x30 */
    unsigned int dwHeightInPercent; /* +0x34 */
    unsigned int dwClipTopInPix; /* +0x38 */
    unsigned int dwClipBottomInPix; /* +0x3c */
    unsigned int dwClipLeftInPix; /* +0x40 */
    unsigned int dwClipRightInPix; /* +0x44 */
    unsigned int dwClipTopInPerMille; /* +0x48 */
    unsigned int dwClipBottomInPerMille; /* +0x4c */
    unsigned int dwClipLeftInPerMille; /* +0x50 */
    unsigned int dwClipRightInPerMille; /* +0x54 */
    int iOffsetPosX; /* +0x58 */
    int iOffsetPosY; /* +0x5c */
    int p_cVirtualScreen; /* +0x60 */
    int lPitch; /* +0x64 */
    int p_vSpecificToXD; /* +0x68 */
    short hDevice; /* +0x6c */
    short hViewport; /* +0x6e */
};

struct GLI_tdstSpecificAttributesFor3D_ {
    GLI_tdstCamera_* p_stCam; /* +0x0 */
    float xNear; /* +0x4 */
};

struct LST2_tdstAnchorTotdxHandleToNodeCameraDyn {
    tdstNodeCamera_* hFirstElementDyn; /* +0x0 */
    tdstNodeCamera_* hLastElementDyn; /* +0x4 */
    int lNumberOfElementsDyn; /* +0x8 */
};

struct LST2_tdstAnchorTotdxHandleToAlwaysActiveCharacterNodeDyn {
    tdstAlwaysActiveCharacter_* hFirstElementDyn; /* +0x0 */
    tdstAlwaysActiveCharacter_* hLastElementDyn; /* +0x4 */
    int lNumberOfElementsDyn; /* +0x8 */
};

struct LST2_tdstAnchorToMC_tdxHandleToMainCharacterNodeDyn {
    tdstNodeMainCharacter_* hFirstElementDyn; /* +0x0 */
    tdstNodeMainCharacter_* hLastElementDyn; /* +0x4 */
    int lNumberOfElementsDyn; /* +0x8 */
};

struct tdstEngineStructure_ {
    unsigned char eEngineMode; /* +0x0 */
    char szLevelName[30]; /* +0x1 */
    char szNextLevelName[30]; /* +0x1f */
    char szFirstLevelName[30]; /* +0x3d */
    unsigned char eInputMode; /* +0x5b */
    unsigned char eDisplayFixMode; /* +0x5c */
    unsigned int ulDisplayMode; /* +0x60 */
    unsigned char _extractor_padding_00[4]; /* implicitly added by extractor; +0x64..0x67 */
    tdstEngineTimerStructure_ stEngineTimer; /* +0x68 */
    unsigned char ucNumberOfPlayersInMultiMode; /* +0xf0 */
    unsigned char ucNumberOfColumnsInMultiMode; /* +0xf1 */
    unsigned char ucMiniScreenRatioInMultiMode; /* +0xf2 */
    int a_hSO_CurrentMainPlayers[4]; /* +0xf4 */
    short hGLDDevice; /* +0x104 */
    short a_hGLDViewport[5]; /* +0x106 */
    GLD_tdstViewportAttributes_ a_stViewportAttr[5]; /* +0x110 */
    int a_p_stGameViewportCamera[5]; /* +0x340 */
    short a_hGLDFixViewport[5]; /* +0x354 */
    GLD_tdstViewportAttributes_ a_stFixViewportAttr[5]; /* +0x360 */
    GLI_tdstSpecificAttributesFor3D_ a_stFixAttributes3D[5]; /* +0x590 */
    int a_p_stFixCamera[5]; /* +0x5b8 */
    GLI_tdstSpecificAttributesFor3D_ a_stGameAttributes3D[5]; /* +0x5cc */
    tdstViewportManagement_* a_hViewportArray; /* +0x5f4 */
    LST2_tdstAnchorTotdxHandleToNodeCameraDyn hCameraList; /* +0x5f8 */
    int hDrawSem; /* +0x604 */
    LST2_tdstAnchorTotdxHandleToFamilyListDyn hFamilyList; /* +0x608 */
    LST2_tdstAnchorTotdxHandleToAlwaysActiveCharacterNodeDyn hAlwaysActiveCharactersList; /* +0x614 */
    LST2_tdstAnchorToMC_tdxHandleToMainCharacterNodeDyn hMainCharacterList; /* +0x620 */
    HIE_tdstSuperObject_* h_StdCamCaracter; /* +0x62c */
    HIE_tdstSuperObject_* h_DbgCamCharacter; /* +0x630 */
    tdstLanguageStructure_* p_stLanguageTable; /* +0x634 */
    FIL_tdstFileNameList_* hLevelNameList; /* +0x638 */
    unsigned char _extractor_padding_01[4]; /* implicitly added by extractor; +0x63c..0x63f */
    MAT_tdstTransformation_ stMainCharacterPosition; /* +0x640 */
    MAT_tdstTransformation_ stMainCameraPosition; /* +0x6a0 */
    int lSubMapNumber; /* +0x700 */
    unsigned char bEngineIsInPaused; /* +0x704 */
    unsigned char bEngineHasInPaused; /* +0x705 */
    unsigned char bEngineIsInSaveGamePart; /* +0x706 */
    char a_szLevelName[150][30]; /* +0x707 */
    char a_szDemoName[30][12]; /* +0x189b */
    char a_szDemoLevelName[30][12]; /* +0x1a03 */
    unsigned char ucNumberOfDemos; /* +0x1b6b */
    unsigned char ucNumberOfLevels; /* +0x1b6c */
    unsigned char ucCurrentLevel; /* +0x1b6d */
    unsigned char ucPreviousLevel; /* +0x1b6e */
    unsigned char ucExitIdToQuitPrevLevel; /* +0x1b6f */
    unsigned char ucLevelGlobalCounter; /* +0x1b70 */
    unsigned char xDemoMode; /* +0x1b71 */
    unsigned char ucCurrentLanguage; /* +0x1b72 */
    unsigned char ucNbLanguages; /* +0x1b73 */
    unsigned char bEngineFrozen; /* +0x1b74 */
    unsigned char bResurection; /* +0x1b75 */
    char cCameraMode; /* +0x1b76 */
    unsigned char ucCurrentImportance; /* +0x1b77 */
    unsigned int ulNumberOfSOLAllocated; /* +0x1b78 */
    unsigned int ulNumberOfSOLLoaded; /* +0x1b7c */
    unsigned int ulNumberOfNonPersitentLinksPerSOL; /* +0x1b80 */
    tdstSuperObjectLinks_** p_hSOL; /* +0x1b84 */
    tdstGraphChainedListNode_* p_GraphChainedList; /* +0x1b88 */
    CINE_Manager_* stCineManager; /* +0x1b8c */
};

struct SECT_tdstListOfSOSectorsInActivityInteraction_ {
    HIE_tdstSuperObject_* hPointerOfSectorSO; /* +0x0 */
};

struct stMorphData {
    unsigned short uwChannelNumber; /* +0x0 */
    unsigned short uwFrameNumber; /* +0x2 */
    unsigned char ucNbTarget; /* +0x4 */
    unsigned char ucAlign[3]; /* +0x5 */
    short a_xIndexTargetMT[10]; /* +0x8 */
    unsigned char a_ucMorphingAmountMT[10]; /* +0x1c */
};

struct GLI_tdst2DVertex_ {
    float xX; /* +0x0 */
    float xY; /* +0x4 */
    float xOoZ; /* +0x8 */
};

struct GLI_tdstCamera_ {
    int lCameraMode; /* +0x0 */
    unsigned char _extractor_padding_00[12]; /* implicitly added by extractor; +0x4..0xf */
    MAT_tdstTransformation_ stMatrix; /* +0x10 */
    float xAlphaX; /* +0x70 */
    float xAlphaY; /* +0x74 */
    float xNear; /* +0x78 */
    float xFar; /* +0x7c */
    float xScreen; /* +0x80 */
    GLI_tdst2DVertex_ stScale; /* +0x84 */
    GLI_tdst2DVertex_ stTrans; /* +0x90 */
    float xXProjectionRatio; /* +0x9c */
    float xYProjectionRatio; /* +0xa0 */
    MTH3D_tdstVector_ stNormPlaneLeft; /* +0xa4 */
    float xDistPlaneLeft; /* +0xb0 */
    MTH3D_tdstVector_ stNormPlaneRight; /* +0xb4 */
    float xDistPlaneRight; /* +0xc0 */
    MTH3D_tdstVector_ stNormPlaneUp; /* +0xc4 */
    float xDistPlaneUp; /* +0xd0 */
    MTH3D_tdstVector_ stNormPlaneDown; /* +0xd4 */
    float xDistPlaneDown; /* +0xe0 */
    float xRatio; /* +0xe4 */
    unsigned char ucCameraTransparency; /* +0xe8 */
    float xTranspDist; /* +0xec */
    unsigned char bCameraIsMirrored; /* +0xf0 */
};

struct SECT_tdstListOfSOSectorsInCollisionInteraction_ {
    HIE_tdstSuperObject_* hPointerOfSectorSO; /* +0x0 */
};

struct tdstLipsSynchValue_ {
    char cCode; /* +0x0 */
    float xX; /* +0x4 */
    float xY; /* +0x8 */
    float xZ; /* +0xc */
};

struct GMT_tdstCollideMaterial_ {
    short wTypeOfZone; /* +0x0 */
    unsigned short xIdentifier; /* +0x2 */
    MTH3D_tdstVector_ stDirection; /* +0x4 */
    float xCoeff; /* +0x10 */
    unsigned short wTypeForAi; /* +0x14 */
};

struct tdstElement3d_ {
    unsigned short wElement : 15; /* bit 0, byte +0x0 */
    unsigned short bf1ActiveStatus : 1; /* bit 15, byte +0x0 */
    unsigned char ucChannelNumber; /* +0x2 */
    unsigned char eTypeOfElement; /* +0x3 */
    unsigned char ucTransparency; /* +0x4 */
    unsigned char ucAnimLevel; /* +0x5 */
};

struct SECT_tdstListOfSOSectorsInGraphicInteraction_ {
    short wLevelOfDetail; /* +0x0 */
    char cDisplayMode; /* +0x2 */
    HIE_tdstSuperObject_* hPointerOfSectorSO; /* +0x4 */
};

struct GEO_tdstParallelBox_ {
    MTH4D_tdstVector_ stMinPoint; /* +0x0 */
    MTH4D_tdstVector_ stMaxPoint; /* +0x10 */
};

struct tdstViewportManagement_ {
    HIE_tdstSuperObject_* hCamera; /* +0x0 */
    HIE_tdstSuperObject_* hTempCamera; /* +0x4 */
    GLI_tdstCamera_* p_stCamera; /* +0x8 */
    unsigned char bValid; /* +0xc */
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

struct COL_tdstBoundingSphere_ {
    MTH4D_tdstVector_ stCenterPoint; /* +0x0 */
    float xRadius; /* +0x10 */
};

struct tdstBrain_ {
    AI_tdstMind_* p_stMind; /* +0x0 */
    GMT_tdstGameMaterial_* hLastCollidedGoThroughMaterial; /* +0x4 */
    unsigned char bWarnMechanicsFlag; /* +0x8 */
    unsigned char bActiveDuringTransition; /* +0x9 */
};

struct tdstNodeCamera_ {
    HIE_tdstSuperObject_* p_stSuperObjectCamera; /* +0x0 */
    tdstNodeCamera_* hNextBrotherDyn; /* +0x4 */
    tdstNodeCamera_* hPrevBrotherDyn; /* +0x8 */
    LST2_tdstAnchorTotdxHandleToNodeCameraDyn* hFatherDyn; /* +0xc */
};

struct GMT_tdstGameMaterial_ {
    int hSoundMaterial; /* +0x0 */
    GMT_tdstCollideMaterial_* hCollideMaterial; /* +0x4 */
};

struct GEO_tdstEdge_ {
    short xPoints[2]; /* +0x0 */
    MTH3D_tdstVector_ st_VectorPoints[2]; /* +0x4 */
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

struct tdstLanguageStructure_ {
    char szLanguageCode[20]; /* +0x0 */
    char szLanguageText[20]; /* +0x14 */
};

struct tdstCouple_ {
    unsigned short wChild; /* +0x0 */
    unsigned short wFather; /* +0x2 */
};

tdstEngineStructure_ g_stEngineStructure;
int g_NbTrameSinceLastCanFall;
MTH3D_tdstVector_ g_stPersoMoveForCollision;
int COL_g_lMaxNumberOfCollisions;

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\MEC\MECTools.c lines 70–125 */
/* addr: 0x00310ea0  size: 500 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 70
 *   +0x001c -> line 76
 *   +0x0050 -> line 78
 *   +0x0064 -> line 85
 *   +0x0068 -> line 80
 *   +0x0070 -> line 85
 *   +0x0084 -> line 87
 *   +0x009c -> line 89
 *   +0x00b0 -> line 91
 *   +0x00cc -> line 93
 *   +0x00e8 -> line 96
 *   +0x00f0 -> line 99
 *   +0x00fc -> line 101
 *   +0x0104 -> line 103
 *   +0x0114 -> line 105
 *   +0x012c -> line 106
 *   +0x013c -> line 108
 *   +0x014c -> line 109
 *   +0x0174 -> line 110
 *   +0x0184 -> line 111
 *   +0x018c -> line 113
 *   +0x0198 -> line 114
 *   +0x01a0 -> line 119
 *   +0x01b0 -> line 121
 *   +0x01d8 -> line 122
 *   +0x01dc -> line 125
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
unsigned char MEC_fn_vBasePlatformManagement(DNM_stDynamics* p_stDynamic, HIE_tdstSuperObject_* hSupObj)
{
    HIE_tdstSuperObject_* hObstacleSuperObject;
    HIE_tdstSuperObject_* hGeomSuperObject;
    DNM_stMecObstacle* p_stObstacle;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\MEC\MECTools.c lines 37–67 */
/* addr: 0x003110a0  size: 184 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 37
 *   +0x0018 -> line 43
 *   +0x001c -> line 37
 *   +0x0024 -> line 45
 *   +0x0030 -> line 50
 *   +0x0040 -> line 54
 *   +0x004c -> line 55
 *   +0x0054 -> line 57
 *   +0x0058 -> line 59
 *   +0x0060 -> line 61
 *   +0x0074 -> line 62
 *   +0x0088 -> line 66
 *   +0x0098 -> line 67
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void MEC_fn_vUpdatePlatform(DNM_stDynamics* p_stDynamic, HIE_tdstSuperObject_* hSupObj, MAT_tdstTransformation_* hPreviousReferenceMatrix, MAT_tdstTransformation_* hInvPreviousReferenceMatrix)
{
    DNM_stDynamics* p_stChildDynamic;
    void* hIdCard;
    HIE_tdstSuperObject_* hChild;
    MAT_tdstTransformation_* hCurrentMatrix;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\MEC\MECTools.c lines 1489–1502 */
/* addr: 0x00311160  size: 144 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1489
 *   +0x0004 -> line 1494
 *   +0x0008 -> line 1489
 *   +0x000c -> line 1500
 *   +0x0010 -> line 1499
 *   +0x0014 -> line 1495
 *   +0x0018 -> line 1499
 *   +0x0044 -> line 1500
 *   +0x005c -> line 1501
 *   +0x0060 -> line 1500
 *   +0x0064 -> line 1501
 *   +0x0068 -> line 1500
 *   +0x007c -> line 1501
 *   +0x0084 -> line 1502
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void MEC_fn_vRepeatMove(DNM_stDynamics* p_stDynamic)
{
    MTH3D_tdstVector_ stVector;
    MAT_tdstTransformation_* hCurrentMatrix;
    MAT_tdstTransformation_* hPreviousMatrix;

    hCurrentMatrix = &p_stDynamic->m_tdstDynamicsBaseBlock.m_stCurrentMatrix;
    hPreviousMatrix = &p_stDynamic->m_tdstDynamicsBaseBlock.m_stPreviousMatrix;
    stVector.xX = hCurrentMatrix->stTransformMatrix.stCol_3.xX - hPreviousMatrix->stTransformMatrix.stCol_3.xX;
    stVector.xY = hCurrentMatrix->stTransformMatrix.stCol_3.xY - hPreviousMatrix->stTransformMatrix.stCol_3.xY;
    stVector.xZ = hCurrentMatrix->stTransformMatrix.stCol_3.xZ - hPreviousMatrix->stTransformMatrix.stCol_3.xZ;
    {
        MTH3D_tdstVector_* p_stTranslation = (MTH3D_tdstVector_*)&hCurrentMatrix->stTransformMatrix.stCol_3;
        if (hPreviousMatrix->eType == MAT_eTransform_Identity)
            hPreviousMatrix->eType = MAT_eTransform_Translation;
        *(int*)&hPreviousMatrix->stTransformMatrix.stCol_3.xX = *(int*)&p_stTranslation->xX;
        *(int*)&hPreviousMatrix->stTransformMatrix.stCol_3.xY = *(int*)&p_stTranslation->xY;
        *(int*)&hPreviousMatrix->stTransformMatrix.stCol_3.xZ = *(int*)&p_stTranslation->xZ;
        hPreviousMatrix->stTransformMatrix.stCol_3.xW = 1.0f;
    }
    MAT_fn_vTranslate(hCurrentMatrix, &stVector);
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\MEC\MECTools.c lines 1467–1486 */
/* addr: 0x003111f0  size: 200 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1480
 *   +0x0004 -> line 1467
 *   +0x0008 -> line 1479
 *   +0x000c -> line 1481
 *   +0x0010 -> line 1480
 *   +0x0014 -> line 1479
 *   +0x0030 -> line 1480
 *   +0x0034 -> line 1481
 *   +0x0038 -> line 1479
 *   +0x003c -> line 1481
 *   +0x0040 -> line 1480
 *   +0x0044 -> line 1481
 *   +0x0048 -> line 1480
 *   +0x004c -> line 1481
 *   +0x0074 -> line 1485
 *   +0x0078 -> line 1481
 *   +0x0080 -> line 1485
 *   +0x0084 -> line 1481
 *   +0x009c -> line 1485
 *   +0x00c0 -> line 1486
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void MEC_fn_vNormalMode(DNM_stDynamics* p_stDynamic, int lMode)
{
    MTH3D_tdstVector_ stVector;
    MTH3D_tdstVector_* p_stSpeed;
    MAT_tdstTransformation_* hCurrentMatrix;
    MAT_tdstTransformation_* hPreviousMatrix;

    p_stSpeed = &p_stDynamic->m_tdstDynamicsBaseBlock.m_stPreviousSpeed;
    hCurrentMatrix = &p_stDynamic->m_tdstDynamicsBaseBlock.m_stCurrentMatrix;
    hPreviousMatrix = &p_stDynamic->m_tdstDynamicsBaseBlock.m_stPreviousMatrix;
    stVector.xX = hCurrentMatrix->stTransformMatrix.stCol_3.xX - (float)lMode * (hCurrentMatrix->stTransformMatrix.stCol_3.xX - hPreviousMatrix->stTransformMatrix.stCol_3.xX);
    stVector.xY = hCurrentMatrix->stTransformMatrix.stCol_3.xY - (float)lMode * (hCurrentMatrix->stTransformMatrix.stCol_3.xY - hPreviousMatrix->stTransformMatrix.stCol_3.xY);
    stVector.xZ = hCurrentMatrix->stTransformMatrix.stCol_3.xZ - (float)lMode * (hCurrentMatrix->stTransformMatrix.stCol_3.xZ - hPreviousMatrix->stTransformMatrix.stCol_3.xZ);
    if (hPreviousMatrix->eType == MAT_eTransform_Identity)
        hPreviousMatrix->eType = MAT_eTransform_Translation;
    *(MTH3D_tdstVector_*)((char*)hPreviousMatrix + 0x40) = stVector;
    hPreviousMatrix->stTransformMatrix.stCol_3.xW = 1.0f;
    p_stSpeed->xX *= (float)lMode;
    p_stSpeed->xY *= (float)lMode;
    p_stSpeed->xZ *= (float)lMode;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\MEC\MECTools.c lines 1442–1463 */
/* addr: 0x003112c0  size: 204 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1453
 *   +0x000c -> line 1442
 *   +0x0010 -> line 1453
 *   +0x0014 -> line 1458
 *   +0x0018 -> line 1453
 *   +0x001c -> line 1456
 *   +0x003c -> line 1457
 *   +0x0040 -> line 1458
 *   +0x0044 -> line 1456
 *   +0x0048 -> line 1458
 *   +0x0050 -> line 1457
 *   +0x0054 -> line 1458
 *   +0x0060 -> line 1457
 *   +0x0064 -> line 1458
 *   +0x00a0 -> line 1462
 *   +0x00c4 -> line 1463
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void MEC_fn_vSlowMode(DNM_stDynamics* p_stDynamic, int lMode)
{
    float xInvMode;
    MTH3D_tdstVector_ stVector;
    MTH3D_tdstVector_* p_stSpeed;
    MAT_tdstTransformation_* hCurrentMatrix;
    MAT_tdstTransformation_* hPreviousMatrix;

    xInvMode = 1.0f / (float)lMode;
    p_stSpeed = &p_stDynamic->m_tdstDynamicsBaseBlock.m_stPreviousSpeed;
    hCurrentMatrix = &p_stDynamic->m_tdstDynamicsBaseBlock.m_stCurrentMatrix;
    hPreviousMatrix = &p_stDynamic->m_tdstDynamicsBaseBlock.m_stPreviousMatrix;
    stVector.xX = hPreviousMatrix->stTransformMatrix.stCol_3.xX + xInvMode * (hCurrentMatrix->stTransformMatrix.stCol_3.xX - hPreviousMatrix->stTransformMatrix.stCol_3.xX);
    stVector.xY = hPreviousMatrix->stTransformMatrix.stCol_3.xY + xInvMode * (hCurrentMatrix->stTransformMatrix.stCol_3.xY - hPreviousMatrix->stTransformMatrix.stCol_3.xY);
    stVector.xZ = hPreviousMatrix->stTransformMatrix.stCol_3.xZ + xInvMode * (hCurrentMatrix->stTransformMatrix.stCol_3.xZ - hPreviousMatrix->stTransformMatrix.stCol_3.xZ);
    if (hCurrentMatrix->eType == MAT_eTransform_Identity)
        hCurrentMatrix->eType = MAT_eTransform_Translation;
    *(MTH3D_tdstVector_*)((char*)hCurrentMatrix + 0x40) = stVector;
    hCurrentMatrix->stTransformMatrix.stCol_3.xW = 1.0f;
    p_stSpeed->xX *= xInvMode;
    p_stSpeed->xY *= xInvMode;
    p_stSpeed->xZ *= xInvMode;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\MEC\MECTools.c lines 1378–1399 */
/* addr: 0x00311390  size: 408 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1378
 *   +0x0050 -> line 1379
 *   +0x0070 -> line 1380
 *   +0x0088 -> line 1381
 *   +0x00a8 -> line 1382
 *   +0x00c4 -> line 1383
 *   +0x00e0 -> line 1385
 *   +0x00f8 -> line 1387
 *   +0x0114 -> line 1388
 *   +0x0128 -> line 1389
 *   +0x0140 -> line 1390
 *   +0x0160 -> line 1393
 *   +0x0174 -> line 1395
 *   +0x018c -> line 1398
 *   +0x0190 -> line 1399
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
unsigned char MEC_fn_bNoMove(DNM_stDynamics* p_stDynamic)
{
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\MEC\MECTools.c lines 1363–1366 */
/* addr: 0x00311530  size: 44 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1363
 *   +0x0008 -> line 1365
 *   +0x0010 -> line 1366
 *   +0x0014 -> line 1365
 *   +0x0024 -> line 1366
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
unsigned char MEC_fn_bMainActor(HIE_tdstSuperObject_* hSupObj)
{
    return (((fn_ulStandardGameGetCustomBitsSO(hSupObj) & 0x80000000) ^ 0x80000000) < 1);
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\MEC\MECTools.c lines 1335–1347 */
/* addr: 0x00311560  size: 224 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1340
 *   +0x000c -> line 1335
 *   +0x0010 -> line 1340
 *   +0x0024 -> line 1341
 *   +0x0028 -> line 1340
 *   +0x002c -> line 1341
 *   +0x0090 -> line 1344
 *   +0x00c0 -> line 1346
 *   +0x00d8 -> line 1347
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void MEC_fn_vComputeInertiaTranslation(DNM_stDynamics* p_stDynamic, float xDT)
{
    unsigned char bSlide;
    MTH3D_tdstVector_ stVector;

    bSlide = p_stDynamic->m_tdstDynamicsAdvancedBlock.m_xStreamPrority != 1.0f;
    stVector.xX = xDT * p_stDynamic->m_tdstDynamicsAdvancedBlock.m_xStreamFactor * p_stDynamic->m_tdstDynamicsAdvancedBlock.m_stStreamSpeed.xX;
    stVector.xY = xDT * p_stDynamic->m_tdstDynamicsAdvancedBlock.m_xStreamFactor * p_stDynamic->m_tdstDynamicsAdvancedBlock.m_stStreamSpeed.xY;
    stVector.xZ = xDT * p_stDynamic->m_tdstDynamicsAdvancedBlock.m_xStreamFactor * p_stDynamic->m_tdstDynamicsAdvancedBlock.m_stStreamSpeed.xZ;
    if (bSlide) {
        stVector.xX *= p_stDynamic->m_tdstDynamicsAdvancedBlock.m_xPreviousSlide;
        stVector.xY *= p_stDynamic->m_tdstDynamicsAdvancedBlock.m_xPreviousSlide;
        stVector.xZ *= p_stDynamic->m_tdstDynamicsAdvancedBlock.m_xPreviousSlide;
    }
    stVector.xX += p_stDynamic->m_tdstDynamicsBaseBlock.m_stAddTranslation.xX;
    stVector.xY += p_stDynamic->m_tdstDynamicsBaseBlock.m_stAddTranslation.xY;
    stVector.xZ += p_stDynamic->m_tdstDynamicsBaseBlock.m_stAddTranslation.xZ;
    p_stDynamic->m_tdstDynamicsAdvancedBlock.m_stInertiaTranslation = stVector;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\MEC\MECTools.c lines 1329–1332 */
/* addr: 0x00311640  size: 104 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1329
 *   +0x0004 -> line 1330
 *   +0x0008 -> line 1329
 *   +0x000c -> line 1330
 *   +0x0028 -> line 1331
 *   +0x0060 -> line 1332
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void MEC_fn_vComputeStream(MTH3D_tdstVector_* p_stStream, DNM_stDynamics* p_stDynamic, float xDT, unsigned char bSlide)
{
    float xMultFactor;

    xMultFactor = xDT * p_stDynamic->m_tdstDynamicsAdvancedBlock.m_xStreamFactor;
    p_stStream->xX = xMultFactor * p_stDynamic->m_tdstDynamicsAdvancedBlock.m_stStreamSpeed.xX;
    p_stStream->xY = xMultFactor * p_stDynamic->m_tdstDynamicsAdvancedBlock.m_stStreamSpeed.xY;
    p_stStream->xZ = xMultFactor * p_stDynamic->m_tdstDynamicsAdvancedBlock.m_stStreamSpeed.xZ;
    if (bSlide)
    {
        p_stStream->xX = p_stDynamic->m_tdstDynamicsAdvancedBlock.m_xPreviousSlide * p_stStream->xX;
        p_stStream->xY = p_stDynamic->m_tdstDynamicsAdvancedBlock.m_xPreviousSlide * p_stStream->xY;
        p_stStream->xZ = p_stDynamic->m_tdstDynamicsAdvancedBlock.m_xPreviousSlide * p_stStream->xZ;
    }
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\MEC\MECTools.c lines 1321–1321 */
/* addr: 0x003116b0  size: 8 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1321
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void MEC_fn_vSetInitialFrameTranslation(DNM_stDynamics* p_stDynamic, MTH3D_tdstVector_* p_stVector)
{
    MAT_fn_vTranslate((MAT_tdstTransformation_*)((unsigned char*)p_stDynamic + 0xE0), p_stVector);
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\MEC\MECTools.c lines 1283–1289 */
/* addr: 0x003116c0  size: 56 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1283
 *   +0x0008 -> line 1285
 *   +0x000c -> line 1286
 *   +0x001c -> line 1287
 *   +0x002c -> line 1288
 *   +0x0030 -> line 1289
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
HIE_tdstSuperObject_* MEC_fn_hGetFatherActor(HIE_tdstSuperObject_* hSupObj)
{
    HIE_tdstSuperObject_* hActor;

    for (hActor = hSupObj; hActor->ulTypeOfLinkedObject != 2; )
    {
        hActor = hActor->hFatherDyn;
        if (hActor == NULL)
            return hActor;
    }
    return hActor;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\MEC\MECTools.c lines 1263–1269 */
/* addr: 0x00311700  size: 200 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1263
 *   +0x0010 -> line 1266
 *   +0x0014 -> line 1267
 *   +0x0018 -> line 1266
 *   +0x0020 -> line 1265
 *   +0x0024 -> line 1266
 *   +0x00ac -> line 1267
 *   +0x00b0 -> line 1268
 *   +0x00c0 -> line 1269
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void MEC_fn_vDeleteNullTranslationObstacle(int lObstacle, DNM_stMecObstacle* a_stObstacle)
{
    DNM_stMecObstacle* p_stTmpObstacle;
    int lCounter;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\MEC\MECTools.c lines 1188–1234 */
/* addr: 0x003117d0  size: 488 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1189
 *   +0x0004 -> line 1193
 *   +0x0008 -> line 1189
 *   +0x000c -> line 1188
 *   +0x0010 -> line 1189
 *   +0x0014 -> line 1193
 *   +0x0020 -> line 1195
 *   +0x0024 -> line 1196
 *   +0x005c -> line 1198
 *   +0x0070 -> line 1200
 *   +0x0074 -> line 1201
 *   +0x0078 -> line 1204
 *   +0x0088 -> line 1209
 *   +0x00b4 -> line 1211
 *   +0x00c4 -> line 1216
 *   +0x00c8 -> line 1231
 *   +0x00cc -> line 1216
 *   +0x00d0 -> line 1221
 *   +0x00dc -> line 1213
 *   +0x00e0 -> line 1214
 *   +0x00f4 -> line 1216
 *   +0x014c -> line 1218
 *   +0x0154 -> line 1220
 *   +0x016c -> line 1221
 *   +0x0170 -> line 1220
 *   +0x0174 -> line 1221
 *   +0x017c -> line 1220
 *   +0x0184 -> line 1221
 *   +0x01a0 -> line 1223
 *   +0x01a8 -> line 1226
 *   +0x01bc -> line 1229
 *   +0x01c8 -> line 1231
 *   +0x01cc -> line 1232
 *   +0x01d0 -> line 1233
 *   +0x01e0 -> line 1234
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void MEC_fn_vDeleteHangingObstacle(int lObstacle, DNM_stMecObstacle* p_stObstacle, DNM_stDynamics* p_stDynamic)
{
    float xHandZPosition;
    float xZ;
    DNM_stMecObstacle* p_stGroundObstacle;
    DNM_stMecObstacle* p_stTmpObstacle;
    int lCounter;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\MEC\MECTools.c lines 1167–1180 */
/* addr: 0x003119c0  size: 160 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1167
 *   +0x0010 -> line 1176
 *   +0x0014 -> line 1169
 *   +0x0018 -> line 1171
 *   +0x002c -> line 1173
 *   +0x0050 -> line 1175
 *   +0x0084 -> line 1176
 *   +0x0088 -> line 1179
 *   +0x0098 -> line 1180
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void MEC_fn_vDeleteNoCollidedGroundFace(int lObstacle, DNM_stMecObstacle* p_stObstacle, DNM_stDynamics* p_stDynamic)
{
    DNM_stMecObstacle* p_stCurrentObstacle;
    int lCounter;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\MEC\MECTools.c lines 1105–1156 */
/* addr: 0x00311a60  size: 1164 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1105
 *   +0x0018 -> line 1109
 *   +0x001c -> line 1105
 *   +0x0030 -> line 1109
 *   +0x003c -> line 1111
 *   +0x0040 -> line 1113
 *   +0x00cc -> line 1117
 *   +0x00e0 -> line 1118
 *   +0x0120 -> line 1120
 *   +0x01bc -> line 1121
 *   +0x0238 -> line 1123
 *   +0x0248 -> line 1124
 *   +0x0274 -> line 1126
 *   +0x0294 -> line 1127
 *   +0x02a0 -> line 1128
 *   +0x02bc -> line 1130
 *   +0x02d8 -> line 1131
 *   +0x02e0 -> line 1134
 *   +0x0320 -> line 1138
 *   +0x0350 -> line 1139
 *   +0x037c -> line 1140
 *   +0x03e0 -> line 1141
 *   +0x03f8 -> line 1143
 *   +0x0450 -> line 1150
 *   +0x0458 -> line 1155
 *   +0x0468 -> line 1156
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void MEC_fn_vDeleteBaseBackFace(int lObstacle, DNM_stMecObstacle* p_stObstacle, DNM_stDynamics* p_stDynamic)
{
    float xNorm;
    MTH3D_tdstVector_ stTmp;
    DNM_stMecObstacle* p_stCurrentObstacle;
    int lCounter;
    MTH3D_tdstVector_ stVector;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\MEC\MECTools.c lines 1061–1099 */
/* addr: 0x00311ef0  size: 440 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1061
 *   +0x0020 -> line 1065
 *   +0x0024 -> line 1061
 *   +0x0038 -> line 1065
 *   +0x0044 -> line 1067
 *   +0x0048 -> line 1069
 *   +0x005c -> line 1075
 *   +0x0064 -> line 1077
 *   +0x0088 -> line 1079
 *   +0x00f0 -> line 1081
 *   +0x0110 -> line 1083
 *   +0x0118 -> line 1086
 *   +0x0138 -> line 1087
 *   +0x0140 -> line 1090
 *   +0x0158 -> line 1092
 *   +0x0178 -> line 1093
 *   +0x017c -> line 1097
 *   +0x0180 -> line 1098
 *   +0x0190 -> line 1099
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void MEC_fn_vDeleteClimbBackFace(int lObstacle, DNM_stMecObstacle* p_stObstacle, DNM_stDynamics* p_stDynamic, MTH3D_tdstVector_* p_stVector)
{
    MTH3D_tdstVector_ stY;
    DNM_stMecObstacle* p_stCurrentObstacle;
    int lCounter;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\MEC\MECTools.c lines 1030–1058 */
/* addr: 0x003120b0  size: 408 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1030
 *   +0x0004 -> line 1032
 *   +0x0014 -> line 1041
 *   +0x0018 -> line 1039
 *   +0x001c -> line 1041
 *   +0x0020 -> line 1054
 *   +0x0024 -> line 1034
 *   +0x0028 -> line 1036
 *   +0x003c -> line 1039
 *   +0x00a0 -> line 1041
 *   +0x00b8 -> line 1043
 *   +0x00c8 -> line 1045
 *   +0x00d0 -> line 1046
 *   +0x00fc -> line 1049
 *   +0x0108 -> line 1050
 *   +0x0148 -> line 1052
 *   +0x0168 -> line 1053
 *   +0x0178 -> line 1054
 *   +0x017c -> line 1056
 *   +0x0180 -> line 1057
 *   +0x0190 -> line 1058
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void MEC_fn_vDeleteGiBackFace(int lObstacle, DNM_stMecObstacle* p_stObstacle, DNM_stDynamics* p_stDynamic, MTH3D_tdstVector_* p_stVector)
{
    DNM_stMecObstacle* p_stCurrentObstacle;
    int lCounter;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\MEC\MECTools.c lines 988–1022 */
/* addr: 0x00312250  size: 440 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 988
 *   +0x0010 -> line 1016
 *   +0x0014 -> line 1017
 *   +0x0018 -> line 1016
 *   +0x001c -> line 997
 *   +0x0020 -> line 1016
 *   +0x0024 -> line 990
 *   +0x0028 -> line 992
 *   +0x003c -> line 994
 *   +0x0080 -> line 996
 *   +0x00a0 -> line 997
 *   +0x00b0 -> line 999
 *   +0x00b8 -> line 1001
 *   +0x00c0 -> line 999
 *   +0x00d0 -> line 1001
 *   +0x00d8 -> line 999
 *   +0x00dc -> line 1001
 *   +0x00e4 -> line 999
 *   +0x00e8 -> line 1001
 *   +0x00ec -> line 999
 *   +0x00f0 -> line 1001
 *   +0x00fc -> line 1003
 *   +0x0108 -> line 1005
 *   +0x0118 -> line 1007
 *   +0x0120 -> line 1009
 *   +0x0128 -> line 1010
 *   +0x0144 -> line 1012
 *   +0x014c -> line 1014
 *   +0x0164 -> line 1015
 *   +0x0168 -> line 1014
 *   +0x0170 -> line 1015
 *   +0x0178 -> line 1014
 *   +0x017c -> line 1015
 *   +0x0188 -> line 1016
 *   +0x0198 -> line 1017
 *   +0x019c -> line 1020
 *   +0x01a0 -> line 1021
 *   +0x01b0 -> line 1022
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void MEC_fn_vDeleteOnGroundBackFace(int lObstacle, DNM_stMecObstacle* p_stObstacle, DNM_stDynamics* p_stDynamic, MTH3D_tdstVector_* p_stVector, DNM_stMecObstacle* p_stGroundObstacle)
{
    DNM_stMecObstacle* p_stCurrentObstacle;
    int lCounter;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\MEC\MECTools.c lines 897–921 */
/* addr: 0x00312410  size: 184 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 902
 *   +0x0004 -> line 897
 *   +0x0008 -> line 902
 *   +0x0028 -> line 905
 *   +0x0040 -> line 907
 *   +0x0044 -> line 908
 *   +0x0048 -> line 909
 *   +0x004c -> line 911
 *   +0x0054 -> line 913
 *   +0x0058 -> line 917
 *   +0x0098 -> line 918
 *   +0x00a8 -> line 921
 *   +0x00ac -> line 920
 *   +0x00b0 -> line 921
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
float MEC_fn_xConvertScale(float xValue, unsigned char bAdjust)
{
    float xTmpValue;
    /* TODO: decompile from asm/... */
}

/* Truncation through the engine's $f30 conversion: retail keeps the integer
 * in $f30 and converts it straight back ("cvt.w.s $f30, x; mfc1 r, $f30;
 * cvt.s.w y, $f30"), which only hand-written asm produces. */
inline float MTH_M_xTruncate(float _xValue)
{
    long _lResult;
    float _xResult;
    asm
    {
        cvt.w.s f30, _xValue
        mfc1 _lResult, f30
        cvt.s.w _xResult, f30
    }
    return _xResult;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\MEC\MECTools.c lines 888–892 */
/* addr: 0x003124d0  size: 104 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 888
 *   +0x0008 -> line 889
 *   +0x0024 -> line 890
 *   +0x0040 -> line 891
 *   +0x005c -> line 892
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void MEC_fn_vRoundVector(MTH3D_tdstVector_* p_stVector, float xEpsilon)
{
    float xTmp;
    xTmp = MTH_M_xTruncate(p_stVector->xX / xEpsilon); p_stVector->xX = xTmp * xEpsilon;
    xTmp = MTH_M_xTruncate(p_stVector->xY / xEpsilon); p_stVector->xY = xTmp * xEpsilon;
    xTmp = MTH_M_xTruncate(p_stVector->xZ / xEpsilon); p_stVector->xZ = xTmp * xEpsilon;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\MEC\MECTools.c lines 849–868 */
/* addr: 0x00312540  size: 508 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 860
 *   +0x0004 -> line 849
 *   +0x0008 -> line 860
 *   +0x000c -> line 861
 *   +0x0014 -> line 860
 *   +0x001c -> line 855
 *   +0x0020 -> line 861
 *   +0x0024 -> line 858
 *   +0x0028 -> line 860
 *   +0x0050 -> line 861
 *   +0x0140 -> line 862
 *   +0x014c -> line 864
 *   +0x0170 -> line 867
 *   +0x0174 -> line 865
 *   +0x0198 -> line 867
 *   +0x01f4 -> line 868
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void MEC_fn_vAdjustSpeed(DNM_stDynamics* p_stDynamic, float xDT)
{
    float xNorm;
    MTH3D_tdstVector_ stTranslation;
    MAT_tdstTransformation_* hCurrentMatrix;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\MEC\MECTools.c lines 843–846 */
/* addr: 0x00312740  size: 52 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 843
 *   +0x0010 -> line 844
 *   +0x0020 -> line 845
 *   +0x002c -> line 846
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void MEC_fn_vAdjustScaleVector(DNM_stDynamics* p_stDynamic, MTH3D_tdstVector_* p_stVector)
{
    p_stVector->xX *= *(float*)((char*)p_stDynamic + 0x48);
    p_stVector->xY *= *(float*)((char*)p_stDynamic + 0x4C);
    p_stVector->xZ *= *(float*)((char*)p_stDynamic + 0x50);
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\MEC\MECTools.c lines 784–784 */
/* addr: 0x00312780  size: 8 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 784
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void MEC_fn_vTranslateMatrixOff(DNM_stDynamics* p_stDynamic, MTH3D_tdstVector_* p_stMatrixTranslation)
{
    MAT_fn_vTranslate((MAT_tdstTransformation_*)((unsigned char*)p_stDynamic + 0xE0), p_stMatrixTranslation);
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\MEC\MECTools.c lines 759–780 */
/* addr: 0x00312790  size: 300 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 759
 *   +0x0004 -> line 765
 *   +0x0008 -> line 759
 *   +0x000c -> line 764
 *   +0x0010 -> line 770
 *   +0x0014 -> line 768
 *   +0x0018 -> line 770
 *   +0x0020 -> line 771
 *   +0x002c -> line 772
 *   +0x0038 -> line 774
 *   +0x003c -> line 775
 *   +0x0040 -> line 778
 *   +0x0044 -> line 774
 *   +0x0048 -> line 775
 *   +0x004c -> line 774
 *   +0x0050 -> line 775
 *   +0x0054 -> line 776
 *   +0x005c -> line 778
 *   +0x00a4 -> line 779
 *   +0x00a8 -> line 778
 *   +0x00c0 -> line 779
 *   +0x0120 -> line 780
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void MEC_fn_vTranslateMatrixOn(DNM_stDynamics* p_stDynamic, MTH3D_tdstVector_* p_stMatrixTranslation)
{
    MAT_tdstTransformation_* hPreviousMatrix;
    MAT_tdstTransformation_* hCurrentMatrix;
    /* TODO: decompile from asm/... */
}

void MAT_fn_vNormalize(MAT_tdstTransformation_* _hTransform);
void MAT_fn_vSetScale(MAT_tdstTransformation_* _hTransform, MTH3D_tdstVector_* _p_stScale);

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\MEC\MECTools.c lines 750–755 */
/* addr: 0x003128c0  size: 64 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 750
 *   +0x0018 -> line 752
 *   +0x0020 -> line 754
 *   +0x002c -> line 755
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void MEC_fn_vCorrectMatrix(DNM_stDynamics* p_stDynamic, MAT_tdstTransformation_* hMatrix)
{
    MAT_fn_vNormalize(hMatrix);
    MAT_fn_vSetScale(hMatrix, &p_stDynamic->m_tdstDynamicsBaseBlock.m_stScale);
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\MEC\MECTools.c lines 731–745 */
/* addr: 0x00312900  size: 176 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 735
 *   +0x0008 -> line 731
 *   +0x000c -> line 735
 *   +0x001c -> line 739
 *   +0x004c -> line 740
 *   +0x007c -> line 744
 *   +0x00a8 -> line 745
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void MEC_fn_vInitMatrix(DNM_stDynamics* p_stDynamic)
{
    MAT_tdstTransformation_* hCurrentMatrix;
    MAT_tdstTransformation_* hPreviousMatrix;

    hCurrentMatrix = &p_stDynamic->m_tdstDynamicsBaseBlock.m_stCurrentMatrix;
    hPreviousMatrix = &p_stDynamic->m_tdstDynamicsBaseBlock.m_stPreviousMatrix;
    if ((p_stDynamic->m_tdstDynamicsBaseBlock.ulEndFlags & 0x4) ? 1 : 0)
    {
        p_stDynamic->m_tdstDynamicsComplexBlock.m_stPrevPreviousMatrix = *hPreviousMatrix;
        p_stDynamic->m_tdstDynamicsComplexBlock.m_stAbsolutePreviousMatrix = *hCurrentMatrix;
    }
    *hPreviousMatrix = *hCurrentMatrix;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\MEC\MECTools.c lines 703–718 */
/* addr: 0x003129b0  size: 128 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 715
 *   +0x0004 -> line 703
 *   +0x0008 -> line 715
 *   +0x003c -> line 716
 *   +0x0060 -> line 717
 *   +0x0078 -> line 718
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void MEC_fn_vComputeSpeed(DNM_stDynamics* p_stDynamic, float xDT)
{
    union { MTH3D_tdstVector_ stSpeed; unsigned int a3_ulWord[3]; } uSpeed;

    uSpeed.stSpeed.xX = p_stDynamic->m_tdstDynamicsBaseBlock.m_stCurrentMatrix.stTransformMatrix.stCol_3.xX - p_stDynamic->m_tdstDynamicsBaseBlock.m_stPreviousMatrix.stTransformMatrix.stCol_3.xX;
    uSpeed.stSpeed.xY = p_stDynamic->m_tdstDynamicsBaseBlock.m_stCurrentMatrix.stTransformMatrix.stCol_3.xY - p_stDynamic->m_tdstDynamicsBaseBlock.m_stPreviousMatrix.stTransformMatrix.stCol_3.xY;
    uSpeed.stSpeed.xZ = p_stDynamic->m_tdstDynamicsBaseBlock.m_stCurrentMatrix.stTransformMatrix.stCol_3.xZ - p_stDynamic->m_tdstDynamicsBaseBlock.m_stPreviousMatrix.stTransformMatrix.stCol_3.xZ;
    uSpeed.stSpeed.xX /= xDT;
    uSpeed.stSpeed.xY /= xDT;
    uSpeed.stSpeed.xZ /= xDT;
    ((unsigned int*)&p_stDynamic->m_tdstDynamicsBaseBlock.m_stPreviousSpeed)[0] = uSpeed.a3_ulWord[0];
    ((unsigned int*)&p_stDynamic->m_tdstDynamicsBaseBlock.m_stPreviousSpeed)[1] = uSpeed.a3_ulWord[1];
    ((unsigned int*)&p_stDynamic->m_tdstDynamicsBaseBlock.m_stPreviousSpeed)[2] = uSpeed.a3_ulWord[2];
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\MEC\MECTools.c lines 648–692 */
/* addr: 0x00312a30  size: 512 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 655
 *   +0x0004 -> line 648
 *   +0x0008 -> line 649
 *   +0x000c -> line 655
 *   +0x0030 -> line 656
 *   +0x0038 -> line 658
 *   +0x0044 -> line 680
 *   +0x0054 -> line 660
 *   +0x0058 -> line 662
 *   +0x006c -> line 664
 *   +0x0074 -> line 665
 *   +0x0080 -> line 667
 *   +0x00c8 -> line 670
 *   +0x00d0 -> line 669
 *   +0x00e0 -> line 670
 *   +0x00e4 -> line 669
 *   +0x00e8 -> line 670
 *   +0x0118 -> line 672
 *   +0x0138 -> line 673
 *   +0x0148 -> line 676
 *   +0x0150 -> line 677
 *   +0x016c -> line 679
 *   +0x018c -> line 680
 *   +0x01d0 -> line 682
 *   +0x01e0 -> line 684
 *   +0x01e4 -> line 685
 *   +0x01e8 -> line 690
 *   +0x01f8 -> line 692
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
unsigned char MEC_fn_bDetectStep(DNM_stDynamics* p_stDynamic, int lObstacle, DNM_stMecObstacle* p_stObstacle, DNM_stMecObstacle* p_stGroundObstacle, MTH3D_tdstVector_* p_stMoveDirection)
{
    DNM_stMecObstacle* p_stTmpObstacle;
    unsigned char bFindGround;
    unsigned char bStepCandidate;
    unsigned char bStep;
    int lCounter;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\MEC\MECTools.c lines 568–640 */
/* addr: 0x00312c30  size: 500 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 578
 *   +0x0004 -> line 582
 *   +0x0008 -> line 569
 *   +0x000c -> line 568
 *   +0x0010 -> line 578
 *   +0x0014 -> line 582
 *   +0x0020 -> line 619
 *   +0x0024 -> line 601
 *   +0x0028 -> line 619
 *   +0x002c -> line 613
 *   +0x0030 -> line 594
 *   +0x0034 -> line 605
 *   +0x0040 -> line 613
 *   +0x0044 -> line 601
 *   +0x004c -> line 584
 *   +0x0050 -> line 586
 *   +0x0064 -> line 588
 *   +0x008c -> line 590
 *   +0x0094 -> line 594
 *   +0x00d0 -> line 595
 *   +0x00d8 -> line 596
 *   +0x00e0 -> line 597
 *   +0x00e8 -> line 600
 *   +0x00f4 -> line 601
 *   +0x0104 -> line 603
 *   +0x0124 -> line 605
 *   +0x0134 -> line 607
 *   +0x0144 -> line 608
 *   +0x0148 -> line 609
 *   +0x015c -> line 613
 *   +0x0184 -> line 615
 *   +0x019c -> line 617
 *   +0x01ac -> line 619
 *   +0x01b8 -> line 620
 *   +0x01c8 -> line 622
 *   +0x01cc -> line 624
 *   +0x01d0 -> line 623
 *   +0x01d4 -> line 636
 *   +0x01d8 -> line 637
 *   +0x01e8 -> line 639
 *   +0x01ec -> line 640
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
DNM_stMecObstacle* MEC_fn_pSelectGround(DNM_stDynamics* p_stDynamic, int lObstacle, DNM_stMecObstacle* p_stObstacle, MTH3D_tdstVector_* p_stTangentMove, unsigned char* bFirstGround)
{
    int lCounter;
    float xCos;
    float xGroundDeltaRate;
    DNM_stMecObstacle* p_stGroundObstacle;
    DNM_stMecObstacle* p_stTmpObstacle;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\MEC\MECTools.c lines 401–561 */
/* addr: 0x00312e30  size: 1696 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 401
 *   +0x0010 -> line 404
 *   +0x0014 -> line 401
 *   +0x0038 -> line 409
 *   +0x003c -> line 402
 *   +0x0040 -> line 409
 *   +0x0044 -> line 410
 *   +0x004c -> line 411
 *   +0x0054 -> line 414
 *   +0x00ac -> line 419
 *   +0x00b0 -> line 420
 *   +0x00b8 -> line 428
 *   +0x00d0 -> line 432
 *   +0x00dc -> line 434
 *   +0x00e0 -> line 436
 *   +0x0104 -> line 440
 *   +0x0110 -> line 442
 *   +0x0128 -> line 446
 *   +0x012c -> line 447
 *   +0x0130 -> line 448
 *   +0x0140 -> line 452
 *   +0x0150 -> line 454
 *   +0x015c -> line 455
 *   +0x0168 -> line 456
 *   +0x0184 -> line 457
 *   +0x0190 -> line 458
 *   +0x0198 -> line 462
 *   +0x01a4 -> line 464
 *   +0x01a8 -> line 465
 *   +0x0228 -> line 470
 *   +0x0230 -> line 471
 *   +0x0240 -> line 476
 *   +0x0254 -> line 478
 *   +0x0268 -> line 479
 *   +0x0278 -> line 481
 *   +0x0290 -> line 482
 *   +0x02f8 -> line 486
 *   +0x0310 -> line 488
 *   +0x0330 -> line 491
 *   +0x0334 -> line 490
 *   +0x0338 -> line 491
 *   +0x033c -> line 490
 *   +0x0354 -> line 491
 *   +0x03e0 -> line 497
 *   +0x03f0 -> line 499
 *   +0x0400 -> line 501
 *   +0x0404 -> line 499
 *   +0x042c -> line 501
 *   +0x0458 -> line 503
 *   +0x045c -> line 504
 *   +0x0464 -> line 503
 *   +0x0478 -> line 504
 *   +0x047c -> line 506
 *   +0x04ac -> line 508
 *   +0x04ec -> line 511
 *   +0x04f0 -> line 512
 *   +0x04f8 -> line 516
 *   +0x0534 -> line 519
 *   +0x0538 -> line 520
 *   +0x0540 -> line 524
 *   +0x0548 -> line 525
 *   +0x054c -> line 526
 *   +0x0554 -> line 533
 *   +0x0558 -> line 534
 *   +0x0570 -> line 535
 *   +0x0578 -> line 537
 *   +0x057c -> line 538
 *   +0x0590 -> line 540
 *   +0x05a4 -> line 541
 *   +0x05a8 -> line 542
 *   +0x05ac -> line 541
 *   +0x05c4 -> line 542
 *   +0x05e4 -> line 544
 *   +0x05f4 -> line 545
 *   +0x05fc -> line 546
 *   +0x0600 -> line 547
 *   +0x0618 -> line 548
 *   +0x0620 -> line 554
 *   +0x0628 -> line 555
 *   +0x0634 -> line 556
 *   +0x0648 -> line 557
 *   +0x0654 -> line 558
 *   +0x0658 -> line 559
 *   +0x0670 -> line 560
 *   +0x0674 -> line 561
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
unsigned char MEC_fn_EdgeAnalysisForCliff(DNM_stDynamics* p_stDynamic, int lObstacle, DNM_stMecObstacle* p_stObstacle)
{
    unsigned short xM;
    int j;
    int i;
    int Ind;
    DNM_stMecObstacle* param0;
    DNM_stMecObstacle* p_stTmpObstacle;
    MTH3D_tdstVector_ V2;
    MTH3D_tdstVector_ V1;
    int IndWallGround;
    int lCounter;
    unsigned char bThereIsAWallGround;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\MEC\MECTools.c lines 367–382 */
/* addr: 0x003134d0  size: 512 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 367
 *   +0x0008 -> line 372
 *   +0x000c -> line 367
 *   +0x0010 -> line 372
 *   +0x0020 -> line 373
 *   +0x0034 -> line 374
 *   +0x01e0 -> line 379
 *   +0x01ec -> line 381
 *   +0x01f0 -> line 382
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
unsigned char fn_bIsOneEdgeInCommon(int i1, int i2)
{
    MTH3D_tdstVector_ V22;
    MTH3D_tdstVector_ V21;
    MTH3D_tdstVector_ V12;
    MTH3D_tdstVector_ V11;
    int Ind;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\MEC\MECTools.c lines 354–364 */
/* addr: 0x003136d0  size: 472 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 354
 *   +0x0018 -> line 357
 *   +0x0024 -> line 358
 *   +0x01b4 -> line 361
 *   +0x01c0 -> line 363
 *   +0x01c4 -> line 364
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
unsigned char fn_bIsTheSameCollidedEdge(int i, MTH3D_tdstVector_* pV1, MTH3D_tdstVector_* pV2, int* Ind)
{
    MTH3D_tdstVector_ V2;
    MTH3D_tdstVector_ V1;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\MEC\MECTools.c lines 300–341 */
/* addr: 0x003138b0  size: 472 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 300
 *   +0x0008 -> line 302
 *   +0x000c -> line 303
 *   +0x0018 -> line 307
 *   +0x002c -> line 309
 *   +0x008c -> line 315
 *   +0x0094 -> line 317
 *   +0x00b0 -> line 321
 *   +0x00f8 -> line 324
 *   +0x010c -> line 336
 *   +0x0110 -> line 337
 *   +0x0114 -> line 326
 *   +0x0118 -> line 328
 *   +0x012c -> line 331
 *   +0x0170 -> line 333
 *   +0x0188 -> line 334
 *   +0x018c -> line 333
 *   +0x0190 -> line 334
 *   +0x0198 -> line 333
 *   +0x01a0 -> line 334
 *   +0x01ac -> line 336
 *   +0x01bc -> line 337
 *   +0x01c0 -> line 340
 *   +0x01d0 -> line 341
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void MEC_fn_vDeleteUnderGroundWall(int lObstacle, DNM_stMecObstacle* p_stObstacle, DNM_stDynamics* p_stDynamic, DNM_stMecObstacle* p_stGroundObstacle)
{
    MTH3D_tdstVector_ stContact;
    MTH3D_tdstVector_* p_stNormal;
    DNM_stMecObstacle* p_stGroundEdge;
    DNM_stMecObstacle* p_stTmpObstacle;
    int lCounter;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\MEC\MECTools.c lines 248–288 */
/* addr: 0x00313a90  size: 496 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 251
 *   +0x0004 -> line 248
 *   +0x0008 -> line 251
 *   +0x0014 -> line 273
 *   +0x0018 -> line 282
 *   +0x001c -> line 273
 *   +0x0020 -> line 259
 *   +0x0024 -> line 273
 *   +0x0028 -> line 253
 *   +0x002c -> line 255
 *   +0x0040 -> line 257
 *   +0x0088 -> line 259
 *   +0x0090 -> line 261
 *   +0x00a8 -> line 263
 *   +0x00b4 -> line 270
 *   +0x00b8 -> line 265
 *   +0x00c0 -> line 268
 *   +0x00d4 -> line 270
 *   +0x0130 -> line 272
 *   +0x0134 -> line 273
 *   +0x0138 -> line 272
 *   +0x0154 -> line 273
 *   +0x01b4 -> line 275
 *   +0x01b8 -> line 279
 *   +0x01c8 -> line 281
 *   +0x01d0 -> line 282
 *   +0x01d4 -> line 286
 *   +0x01d8 -> line 287
 *   +0x01e8 -> line 288
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void MEC_fn_vDeleteWallEdge(int lObstacle, DNM_stMecObstacle* p_stObstacle, DNM_stDynamics* p_stDynamic)
{
    unsigned char bRemoveEdge;
    DNM_stMecObstacle* p_stTmpObstacle1;
    DNM_stMecObstacle* p_stTmpObstacle;
    int lCounter1;
    int lCounter;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\MEC\MECTools.c lines 213–239 */
/* addr: 0x00313c80  size: 440 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 219
 *   +0x0004 -> line 213
 *   +0x0008 -> line 219
 *   +0x0014 -> line 225
 *   +0x0018 -> line 230
 *   +0x0020 -> line 231
 *   +0x0024 -> line 225
 *   +0x0028 -> line 231
 *   +0x002c -> line 221
 *   +0x0030 -> line 222
 *   +0x0044 -> line 224
 *   +0x0048 -> line 225
 *   +0x0058 -> line 227
 *   +0x005c -> line 230
 *   +0x00d8 -> line 231
 *   +0x0108 -> line 232
 *   +0x0138 -> line 233
 *   +0x014c -> line 234
 *   +0x0158 -> line 235
 *   +0x0168 -> line 236
 *   +0x019c -> line 237
 *   +0x01a0 -> line 238
 *   +0x01b0 -> line 239
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void MEC_fn_vComputeCollisionTranslation(int lObstacle, DNM_stMecObstacle* p_stObstacle, MTH3D_tdstVector_* p_stMove)
{
    float xNorm;
    MTH3D_tdstVector_ stVector;
    DNM_stMecObstacle* p_stTmpObstacle;
    float xRate;
    int lCounter;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\MEC\MECTools.c lines 201–209 */
/* addr: 0x00313e40  size: 64 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 201
 *   +0x0014 -> line 206
 *   +0x001c -> line 203
 *   +0x0020 -> line 206
 *   +0x0038 -> line 209
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
float MEC_fn_xGetRebound(DNM_stDynamics* p_stDynamic, DNM_stMecObstacle* p_stObstacle)
{
    float xRebound;

    if (p_stObstacle == NULL)
        return 0.0f;

    xRebound = 0.0f;
    if ((p_stDynamic->m_tdstDynamicsBaseBlock.ulFlags & 0x80) ? 1 : 0)
        xRebound = p_stDynamic->m_tdstDynamicsBaseBlock.m_xRebound;
    return xRebound;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\MEC\MECTools.c lines 186–194 */
/* addr: 0x00313e80  size: 64 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 186
 *   +0x0014 -> line 191
 *   +0x001c -> line 188
 *   +0x0020 -> line 191
 *   +0x0038 -> line 194
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
float MEC_fn_xGetSlide(DNM_stDynamics* p_stDynamic, DNM_stMecObstacle* p_stObstacle)
{
    float xSlide;

    if (p_stObstacle == NULL)
        return 0.0f;

    xSlide = 0.0f;
    if ((p_stDynamic->m_tdstDynamicsBaseBlock.ulFlags & 0x80) ? 1 : 0)
        xSlide = p_stDynamic->m_tdstDynamicsBaseBlock.m_xSlide;
    return xSlide;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\MEC\MECTools.c lines 172–178 */
/* addr: 0x00313ec0  size: 44 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0004 -> line 172
 *   +0x000c -> line 177
 *   +0x0018 -> line 178
 *   +0x001c -> line 177
 *   +0x0024 -> line 178
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
int MEC_fn_bDynamicsNeedCollide(DNM_stDynamics* p_stDynamic)
{
    return !MAT_fn_bAreEquivalent(&p_stDynamic->m_tdstDynamicsBaseBlock.m_stCurrentMatrix, &p_stDynamic->m_tdstDynamicsBaseBlock.m_stPreviousMatrix);
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\MEC\MECTools.c lines 152–159 */
/* addr: 0x00313ef0  size: 112 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 152
 *   +0x0008 -> line 155
 *   +0x000c -> line 156
 *   +0x001c -> line 157
 *   +0x0050 -> line 158
 *   +0x0064 -> line 159
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
unsigned char MEC_fn_bCanCrashActor(DNM_stMecObstacle* p_stCollideObstacle)
{
    HIE_tdstSuperObject_* hSupObj;

    hSupObj = p_stCollideObstacle->mp_stSupObj;
    if (hSupObj == NULL)
        return 0;
    if (hSupObj->ulTypeOfLinkedObject != 2) {
        do {
            hSupObj = hSupObj->hFatherDyn;
            if (hSupObj == NULL)
                break;
        } while (hSupObj->ulTypeOfLinkedObject != 2);
    }
    return ((fn_ulStandardGameGetCustomBitsSO(hSupObj) & 0x40) ^ 0x40) != 0;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\MEC\MECTools.c lines 84–87 */
/* addr: 0x00313f60  size: 40 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 84
 *   +0x0004 -> line 85
 *   +0x0008 -> line 84
 *   +0x000c -> line 85
 *   +0x0020 -> line 87
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
int MEC_fn_bCeilObstacle(DNM_stDynamics* p_stDynamic, DNM_stMecObstacle* p_stObstacle)
{
    float xLimit;
    float xNegCos = -p_stDynamic->m_tdstDynamicsBaseBlock.m_xCosSlope;
    xLimit = xNegCos;
    if (p_stObstacle->m_stNorm.xZ < xLimit)
        return 1;
    return 0;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\MEC\MECTools.c lines 60–62 */
/* addr: 0x00313f90  size: 36 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 60
 *   +0x001c -> line 62
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
int MEC_fn_bGroundNormal(DNM_stDynamics* p_stDynamic, MTH3D_tdstVector_* p_stNormal)
{
    return p_stNormal->xZ >= *(float*)((char*)p_stDynamic + 0x18);
}
