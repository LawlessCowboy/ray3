/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ago\AGO3.cpp */
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
typedef struct MTH3D_tdstVector_ MTH3D_tdstVector_;
typedef struct AGO3_Chain AGO3_Chain;
typedef struct LST2_tdstAnchorToCHN_tdxHandleToMorphElementDyn LST2_tdstAnchorToCHN_tdxHandleToMorphElementDyn;
typedef struct AGO3_SR_SpriteData AGO3_SR_SpriteData;
typedef struct tdstViewportManagement_ tdstViewportManagement_;
typedef struct MTH4D_tdstVector_ MTH4D_tdstVector_;
typedef struct MTH4D_tdstMatrix_ MTH4D_tdstMatrix_;
typedef struct MAT_tdstTransformation_ MAT_tdstTransformation_;
typedef struct GLI_tdst2DVertex_ GLI_tdst2DVertex_;
typedef struct GLI_tdstCamera_ GLI_tdstCamera_;
typedef struct CINE_tdstChannelLink_ CINE_tdstChannelLink_;
typedef struct AGO3_LE_SpriteData AGO3_LE_SpriteData;
typedef struct AGO3_LightExplosion AGO3_LightExplosion;
typedef struct AGO3_SBS_tdstSnowPart_ AGO3_SBS_tdstSnowPart_;
typedef struct SECT_tdstListOfSOSectorsInActivityInteraction_ SECT_tdstListOfSOSectorsInActivityInteraction_;
typedef struct GLD_tdstViewportAttributes_ GLD_tdstViewportAttributes_;
typedef struct HIE_tdstModifierObject_ HIE_tdstModifierObject_;
typedef struct LST2_tdstAnchorTotdxHandleToStateOpt LST2_tdstAnchorTotdxHandleToStateOpt;
typedef struct LST2_tdstAnchorTotdxHandleToSubAnimOpt LST2_tdstAnchorTotdxHandleToSubAnimOpt;
typedef struct LST2_tdstAnchorTotdxHandleToObjectsTablesListOpt LST2_tdstAnchorTotdxHandleToObjectsTablesListOpt;
typedef struct tdstFamilyList_ tdstFamilyList_;
typedef struct AGO3_SimpleSparks AGO3_SimpleSparks;
typedef struct WP_tdstGraphNode_ WP_tdstGraphNode_;
typedef struct _stTimerCount _stTimerCount;
typedef struct tdstMorphChannelList_ tdstMorphChannelList_;
typedef struct AGO3_CR_SpriteData AGO3_CR_SpriteData;
typedef struct AGO3_CanRipple AGO3_CanRipple;
typedef struct AGO3_WEF_SpriteData AGO3_WEF_SpriteData;
typedef struct AGO3_WaveEnvelopedFist AGO3_WaveEnvelopedFist;
typedef union HIE_tduLinkedObject_ HIE_tduLinkedObject_;
typedef struct HIE_tdstSuperObject_ HIE_tdstSuperObject_;
typedef struct tdstCouple_ tdstCouple_;
typedef struct LST2_tdstAnchorToCINE_tdxHandleToChannelLinkDyn LST2_tdstAnchorToCINE_tdxHandleToChannelLinkDyn;
typedef struct tdstLipsSynchValue_ tdstLipsSynchValue_;
typedef struct C_Vector C_Vector;
typedef struct AGO3_FS_SpriteData AGO3_FS_SpriteData;
typedef struct AGO3Smoke_InternalData_ AGO3Smoke_InternalData_;
typedef struct AGO3_Smoke AGO3_Smoke;
typedef struct AGO3_ScoreDisplay AGO3_ScoreDisplay;
typedef struct AGO3_Part AGO3_Part;
typedef struct AGO3_LinkChainComputing AGO3_LinkChainComputing;
typedef struct AGO3_TFS_SpriteData AGO3_TFS_SpriteData;
typedef struct tdstNodeCamera_ tdstNodeCamera_;
typedef struct AGO3_HU_SpriteData AGO3_HU_SpriteData;
typedef struct AGO3_HurricaneUpper AGO3_HurricaneUpper;
typedef struct SECT_tdstListOfSOSectorsInSoundInteraction_ SECT_tdstListOfSOSectorsInSoundInteraction_;
typedef struct AGO3_Transition AGO3_Transition;
typedef struct MTH3D_tdstMatrix_ MTH3D_tdstMatrix_;
typedef struct AGO3_ShootSmoke AGO3_ShootSmoke;
typedef struct LST2_tdstAnchorToSECT_tdxHandleOfElementLstCollisionInteractionOpt LST2_tdstAnchorToSECT_tdxHandleOfElementLstCollisionInteractionOpt;
typedef struct AGO3_SB_SpriteData AGO3_SB_SpriteData;
typedef struct AGO3_SwirlingBubbles AGO3_SwirlingBubbles;
typedef struct GEO_tdstGeometricObject_ GEO_tdstGeometricObject_;
typedef struct AGO3_DigitalScoreDisplay AGO3_DigitalScoreDisplay;
typedef struct SECT_tdstListOfSOSectorsInCollisionInteraction_ SECT_tdstListOfSOSectorsInCollisionInteraction_;
typedef struct LST2_tdstAnchorToCINE_tdxHandleToCineDyn LST2_tdstAnchorToCINE_tdxHandleToCineDyn;
typedef struct tdstAnim3d_ tdstAnim3d_;
typedef struct AGO3_SpriteDurationFade AGO3_SpriteDurationFade;
typedef union _SND_tduRefEvt _SND_tduRefEvt;
typedef struct SCT_tdstListOfSoundEvent_ SCT_tdstListOfSoundEvent_;
typedef struct AGO3_SpriteZoom AGO3_SpriteZoom;
typedef struct AGO3_SMUV_Scroll_ AGO3_SMUV_Scroll_;
typedef struct LST2_tdstAnchorToCINE_tdxHandleToCineActorDyn LST2_tdstAnchorToCINE_tdxHandleToCineActorDyn;
typedef struct CINE_tdstCine_ CINE_tdstCine_;
typedef struct AGO3_WaveEnvelopedFist2 AGO3_WaveEnvelopedFist2;
typedef struct LST2_tdstAnchorTotdxHandleToNodeCameraDyn LST2_tdstAnchorTotdxHandleToNodeCameraDyn;
typedef struct stInterpolatedPosition stInterpolatedPosition;
typedef struct tdstAChannel_ tdstAChannel_;
typedef struct AGO3_GrowingUVAnimatedFireBall AGO3_GrowingUVAnimatedFireBall;
typedef struct tdstPLA_Hierarchy_ tdstPLA_Hierarchy_;
typedef struct stRECT stRECT;
typedef struct AGO3_OrientedTarget AGO3_OrientedTarget;
typedef struct AGO3_BeamWithUVs AGO3_BeamWithUVs;
typedef struct GEO_tdstEdge_ GEO_tdstEdge_;
typedef struct tdstSubAnim_ tdstSubAnim_;
typedef struct CINE_tdstCineActor_ CINE_tdstCineActor_;
typedef struct COL_tdstBoundingSphere_ COL_tdstBoundingSphere_;
typedef struct AGO3_CR2_SpriteData AGO3_CR2_SpriteData;
typedef struct tdstEngineTimerStructure_ tdstEngineTimerStructure_;
typedef struct GLI_tdstSpecificAttributesFor3D_ GLI_tdstSpecificAttributesFor3D_;
typedef struct LST2_tdstAnchorTotdxHandleToFamilyListDyn LST2_tdstAnchorTotdxHandleToFamilyListDyn;
typedef struct LST2_tdstAnchorTotdxHandleToAlwaysActiveCharacterNodeDyn LST2_tdstAnchorTotdxHandleToAlwaysActiveCharacterNodeDyn;
typedef struct LST2_tdstAnchorToMC_tdxHandleToMainCharacterNodeDyn LST2_tdstAnchorToMC_tdxHandleToMainCharacterNodeDyn;
typedef struct tdstEngineStructure_ tdstEngineStructure_;
typedef struct SECT_tdstListOfDNMLights_ SECT_tdstListOfDNMLights_;
typedef struct tdstPLA_Deformation_ tdstPLA_Deformation_;
typedef struct tdstFrame3d_ tdstFrame3d_;
typedef struct LST2_tdstAnchorTotdxHandleToSubAnimInUseDyn LST2_tdstAnchorTotdxHandleToSubAnimInUseDyn;
typedef struct tdst3dData_ tdst3dData_;
typedef struct AGO3_CustomRipple AGO3_CustomRipple;
typedef struct tdstSubAnimInUse_ tdstSubAnimInUse_;
typedef struct LST2_tdstAnchorToSECT_tdxHandleOfElementLstGraphicInteractionOpt LST2_tdstAnchorToSECT_tdxHandleOfElementLstGraphicInteractionOpt;
typedef struct AGO3_SpriteDurationFade2 AGO3_SpriteDurationFade2;
typedef struct LST2_tdstAnchorToSECT_tdxHandleOfElementLstCharacterDyn LST2_tdstAnchorToSECT_tdxHandleOfElementLstCharacterDyn;
typedef struct LST2_tdstAnchorToSECT_tdxHandleOfElementLstStaticLightsOpt LST2_tdstAnchorToSECT_tdxHandleOfElementLstStaticLightsOpt;
typedef struct LST2_tdstAnchorToSECT_tdxHandleOfElementLstDNMLightsDyn LST2_tdstAnchorToSECT_tdxHandleOfElementLstDNMLightsDyn;
typedef struct LST2_tdstAnchorToSECT_tdxHandleOfElementLstActivityInteractionOpt LST2_tdstAnchorToSECT_tdxHandleOfElementLstActivityInteractionOpt;
typedef struct LST2_tdstAnchorToSECT_tdxHandleOfElementLstSoundInteractionOpt LST2_tdstAnchorToSECT_tdxHandleOfElementLstSoundInteractionOpt;
typedef struct LST2_tdstAnchorToSCT_tdxHandleOfLstSoundEventOpt LST2_tdstAnchorToSCT_tdxHandleOfLstSoundEventOpt;
typedef struct SECT_tdstSector_ SECT_tdstSector_;
typedef struct AGO3_GrowingUVAnimatedFireBallMoving AGO3_GrowingUVAnimatedFireBallMoving;
typedef struct AGO3_FistSmoke AGO3_FistSmoke;
typedef struct SECT_tdstListOfSOSectorsInGraphicInteraction_ SECT_tdstListOfSOSectorsInGraphicInteraction_;
typedef struct tdstElement3d_ tdstElement3d_;
typedef struct _tdstBinarizedDataForMenu _tdstBinarizedDataForMenu;
typedef struct SECT_tdstListOfStaticLights_ SECT_tdstListOfStaticLights_;
typedef struct tdstEngineObject_ tdstEngineObject_;
typedef struct SECT_tdstListOfSOCharacters_ SECT_tdstListOfSOCharacters_;
typedef struct AGO3_SR_Scroll_ AGO3_SR_Scroll_;
typedef struct AGO3_SphericalRadiance AGO3_SphericalRadiance;
typedef struct tdstStandardGame_ tdstStandardGame_;
typedef struct tdstPLA_DeformationLink_ tdstPLA_DeformationLink_;
typedef struct tdstEventInTable_ tdstEventInTable_;
typedef struct AGO3_TurningFistSmoke AGO3_TurningFistSmoke;
typedef struct AGO3_ScrollMatUV AGO3_ScrollMatUV;
typedef struct stPOINT stPOINT;
typedef struct AGO3_Target AGO3_Target;
typedef struct AGO3_Snowboard_SnowEffect AGO3_Snowboard_SnowEffect;
typedef struct CINE_Manager_ CINE_Manager_;
typedef struct LST2_tdstAnchorToWP_tdhGraphNodeDyn LST2_tdstAnchorToWP_tdhGraphNodeDyn;
typedef struct tdstBrain_ tdstBrain_;
typedef struct GEO_tdstParallelBox_ GEO_tdstParallelBox_;
typedef struct GEO_tdstDoubledIndex_ GEO_tdstDoubledIndex_;
typedef struct tdstGraphChainedListNode_ tdstGraphChainedListNode_;
typedef struct tdstEvent_ tdstEvent_;
typedef struct stMorphData stMorphData;
typedef struct AGO3_GrowingFireBall AGO3_GrowingFireBall;
typedef struct tdstLanguageStructure_ tdstLanguageStructure_;
typedef struct GMT_tdstCollideMaterial_ GMT_tdstCollideMaterial_;
typedef struct GMT_tdstGameMaterial_ GMT_tdstGameMaterial_;
typedef struct GLD_tdstDeviceAttributes_ GLD_tdstDeviceAttributes_;
typedef struct WP_tdstGraph_ WP_tdstGraph_;

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

struct MTH3D_tdstVector_ {
    float xX; /* +0x0 */
    float xY; /* +0x4 */
    float xZ; /* +0x8 */
};

struct AGO3_Chain {
    /* C++ base AGO3_Part at +0x0. */
    MTH3D_tdstVector_ m_stPos; /* +0x30 */
    MTH3D_tdstVector_ m_stVector; /* +0x3c */
    MTH3D_tdstVector_ m_stIntermediateVector; /* +0x48 */
    MTH3D_tdstVector_ m_stDirection; /* +0x54 */
    MTH3D_tdstVector_ m_stIntermediateDirection; /* +0x60 */
    float m_fSize; /* +0x6c */
    float m_fIntermediateSize; /* +0x70 */
    float m_fLinkType; /* +0x74 */
    float m_fMainSize; /* +0x78 */
    void Display(GLD_tdstViewportAttributes_* hVp);
    void Init(MTH3D_tdstVector_* p_stStartingPosition, MTH3D_tdstVector_* p_stEndingPosition, GLI_tdstMaterial_* pMat1, float fLinkType);
    void Process(void);
};

struct LST2_tdstAnchorToCHN_tdxHandleToMorphElementDyn {
    tdstMorphChannelList_* hFirstElementDyn; /* +0x0 */
    tdstMorphChannelList_* hLastElementDyn; /* +0x4 */
    int lNumberOfElementsDyn; /* +0x8 */
};

struct AGO3_SR_SpriteData {
    MTH3D_tdstVector_ P3; /* +0x0 */
    MTH3D_tdstVector_ P4; /* +0xc */
    MTH3D_tdstVector_ P5; /* +0x18 */
    MTH3D_tdstVector_ P6; /* +0x24 */
};

struct tdstViewportManagement_ {
    HIE_tdstSuperObject_* hCamera; /* +0x0 */
    HIE_tdstSuperObject_* hTempCamera; /* +0x4 */
    GLI_tdstCamera_* p_stCamera; /* +0x8 */
    unsigned char bValid; /* +0xc */
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

struct CINE_tdstChannelLink_ {
    HIE_tdstSuperObject_* hSPOLinked; /* +0x0 */
    int lIndexOfChannel; /* +0x4 */
    CINE_tdstChannelLink_* hNextBrotherDyn; /* +0x8 */
    CINE_tdstChannelLink_* hPrevBrotherDyn; /* +0xc */
    LST2_tdstAnchorToCINE_tdxHandleToChannelLinkDyn* hFatherDyn; /* +0x10 */
};

struct AGO3_LE_SpriteData {
    float fSize; /* +0x0 */
    float fTransparency; /* +0x4 */
    float fAngle; /* +0x8 */
    MTH3D_tdstVector_ stPosition; /* +0xc */
    MTH3D_tdstVector_ stDirection; /* +0x18 */
};

struct AGO3_LightExplosion {
    /* C++ base AGO3_Part at +0x0. */
    int m_pLightMat; /* +0x30 */
    MTH3D_tdstVector_ m_stDirection; /* +0x34 */
    float m_fSize; /* +0x40 */
    float m_fDuration; /* +0x44 */
    int m_bInit; /* +0x48 */
    unsigned int m_ulCloudID; /* +0x4c */
    AGO3_LE_SpriteData m_a_stCloud[12]; /* +0x50 */
    AGO3_LE_SpriteData m_a_stParticle[20]; /* +0x200 */
    unsigned int m_a_ulParticleID[20]; /* +0x4d0 */
    void Display(GLD_tdstViewportAttributes_* hVp);
    void Process(void);
    void Init(MTH3D_tdstVector_* p_stPosition, MTH3D_tdstVector_* p_stDirection, GLI_tdstMaterial_* pMat1, float fSize);
    void DesInit(void);
};

struct AGO3_SBS_tdstSnowPart_ {
    MTH3D_tdstVector_ stPartPos; /* +0x0 */
    MTH3D_tdstVector_ stPartDir; /* +0xc */
    float fSize; /* +0x18 */
    float fAngle; /* +0x1c */
    float fAlpha; /* +0x20 */
};

struct SECT_tdstListOfSOSectorsInActivityInteraction_ {
    HIE_tdstSuperObject_* hPointerOfSectorSO; /* +0x0 */
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

struct HIE_tdstModifierObject_ {
    GEO_tdstGeometricObject_* p_stGeometricObject; /* +0x0 */
    int lMulIntensity; /* +0x4 */
    int lAddIntensity; /* +0x8 */
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

struct AGO3_SimpleSparks {
    /* C++ base AGO3_Part at +0x0. */
    unsigned int m_hArray; /* +0x30 */
    float m_fTransparency; /* +0x34 */
    unsigned int m_NbParticles; /* +0x38 */
    float m_fSize; /* +0x3c */
    void Display(GLD_tdstViewportAttributes_* hVp);
    void Process(void);
    void DesInit(void);
    void Init(MTH3D_tdstVector_* pPosition, GLI_tdstMaterial_* pMat1, float fParameter);
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

struct _stTimerCount {
    unsigned long m_ulLowPart; /* +0x0 */
    unsigned char _extractor_padding_00[4]; /* implicitly added by extractor; +0x4..0x7 */
    unsigned long m_ulHighPart; /* +0x8 */
};

struct tdstMorphChannelList_ {
    tdstMorphChannelList_* hNextBrotherDyn; /* +0x0 */
    tdstMorphChannelList_* hPrevBrotherDyn; /* +0x4 */
    LST2_tdstAnchorToCHN_tdxHandleToMorphElementDyn* hFatherDyn; /* +0x8 */
    unsigned short uwChannelNumber; /* +0xc */
    short MorphListIndex; /* +0xe */
};

struct AGO3_CR_SpriteData {
    float fSize; /* +0x0 */
    float fTransparency; /* +0x4 */
    float fPosition; /* +0x8 */
    unsigned int ulType; /* +0xc */
};

struct AGO3_CanRipple {
    /* C++ base AGO3_Part at +0x0. */
    float m_fMainSize; /* +0x30 */
    float m_fTime; /* +0x34 */
    float m_fTime2; /* +0x38 */
    AGO3_CR_SpriteData m_a_stSprite[4]; /* +0x3c */
    unsigned int m_ulDirection; /* +0x7c */
    unsigned int m_ulFirstSprite; /* +0x80 */
    MTH3D_tdstVector_ m_stInitialPosition; /* +0x84 */
    MTH3D_tdstVector_ m_stAdditionnalVector; /* +0x90 */
    int m_bRegeneration; /* +0x9c */
    void Display(GLD_tdstViewportAttributes_* hVp);
    void Process(void);
    void Init(MTH3D_tdstVector_* p_stStartingPosition, MTH3D_tdstVector_* p_stDirection, GLI_tdstMaterial_* pMat1, float fStartStop);
};

struct AGO3_WEF_SpriteData {
    float fSize; /* +0x0 */
    float fTransparency; /* +0x4 */
    MTH3D_tdstVector_ stPosition; /* +0x8 */
    MTH3D_tdstVector_ stInitialPosition; /* +0x14 */
    MTH3D_tdstVector_ stAdditionnalVector; /* +0x20 */
    unsigned int ulNbIntermediates; /* +0x2c */
    MTH3D_tdstVector_ a_stIntermediatePosition[10]; /* +0x30 */
};

struct AGO3_WaveEnvelopedFist {
    /* C++ base AGO3_Part at +0x0. */
    float m_fMainSize; /* +0x30 */
    MTH3D_tdstVector_ m_a_stPosition[2]; /* +0x34 */
    unsigned int m_a_ulNbAGOs[2]; /* +0x4c */
    unsigned int m_a_ulFirstFree[2]; /* +0x54 */
    unsigned int m_a_ulFirstSet[2]; /* +0x5c */
    unsigned int m_a_ulColor[2]; /* +0x64 */
    AGO3_WEF_SpriteData m_stSprite[2][64]; /* +0x6c */
    void Display(GLD_tdstViewportAttributes_* hVp);
    void Process(void);
    void Init(MTH3D_tdstVector_* pPosition, MTH3D_tdstVector_* pDirection, GLI_tdstMaterial_* pMat1, float fColor);
    void DesInit(void);
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

struct tdstCouple_ {
    unsigned short wChild; /* +0x0 */
    unsigned short wFather; /* +0x2 */
};

struct LST2_tdstAnchorToCINE_tdxHandleToChannelLinkDyn {
    CINE_tdstChannelLink_* hFirstElementDyn; /* +0x0 */
    CINE_tdstChannelLink_* hLastElementDyn; /* +0x4 */
    int lNumberOfElementsDyn; /* +0x8 */
};

struct tdstLipsSynchValue_ {
    char cCode; /* +0x0 */
    float xX; /* +0x4 */
    float xY; /* +0x8 */
    float xZ; /* +0xc */
};

struct C_Vector {
    float Vector[4]; /* +0x0 */
};

struct AGO3_FS_SpriteData {
    float fSize; /* +0x0 */
    float fTransparency; /* +0x4 */
    MTH3D_tdstVector_ stPosition; /* +0x8 */
    MTH3D_tdstVector_ a_stSpritePosition[6][6]; /* +0x14 */
    unsigned int a_ulType[6]; /* +0x1c4 */
    C_Vector a_stSpriteDirection[2]; /* +0x1e0 */
    unsigned int ulNbIntermediates; /* +0x200 */
};

struct AGO3Smoke_InternalData_ {
    C_Vector Position; /* +0x0 */
    C_Vector Direction; /* +0x10 */
    float fTransparency; /* +0x20 */
    float fRotationSpeed; /* +0x24 */
    float fCurrentAngle; /* +0x28 */
    float fSize; /* +0x2c */
    float fAnimationSpeed; /* +0x30 */
    float fCurrentAnimTime; /* +0x34 */
};

struct AGO3_Smoke {
    /* C++ base AGO3_Part at +0x0. */
    AGO3Smoke_InternalData_ m_Sprites[8]; /* +0x30 */
    void Display(GLD_tdstViewportAttributes_* hVp);
    void Process(void);
    void Init(MTH3D_tdstVector_* pPosition, GLI_tdstMaterial_* pMat1);
};

struct AGO3_ScoreDisplay {
    /* C++ base AGO3_Part at +0x0. */
    float m_fMainSize; /* +0x30 */
    float m_fDisplayDuration; /* +0x34 */
    float m_fFadeDuration; /* +0x38 */
    float m_fCurrentTime; /* +0x3c */
    float m_fTransparency; /* +0x40 */
    float m_fCurrentFadeTime; /* +0x44 */
    unsigned int m_dwScoreID; /* +0x48 */
    void Display(GLD_tdstViewportAttributes_* hVp);
    void Process(void);
    void Init(MTH3D_tdstVector_* pPosition, MTH3D_tdstVector_* pDirection, GLI_tdstMaterial_* pMat1, float fScore);
};

struct AGO3_Part {
    float m_fCreationTime; /* +0x0 */
    unsigned char _extractor_padding_00[12]; /* implicitly added by extractor; +0x4..0xf */
    C_Vector m_Position; /* +0x10 */
    GLI_tdstMaterial_* m_pMat1; /* +0x20 */
    unsigned char m_Finished; /* +0x24 */
    void Process(void);
    void Display(GLD_tdstViewportAttributes_* hVp);
};

struct AGO3_LinkChainComputing {
    /* C++ base AGO3_Part at +0x0. */
    MTH3D_tdstVector_ m_stInitialFistPosition[2]; /* +0x30 */
    int m_bInitWasDone; /* +0x48 */
    int m_bCanDisplay; /* +0x4c */
    int m_bLightning; /* +0x50 */
    GLI_tdstMaterial_* m_pLightningMat; /* +0x54 */
    MTH3D_tdstVector_ m_a_stLinkPos[100]; /* +0x58 */
    MTH3D_tdstVector_ m_a_stLLinkPos[50]; /* +0x508 */
    unsigned int m_ulNbLinks; /* +0x760 */
    unsigned int m_ulNbLightnings; /* +0x764 */
    float m_fImpulseDuration; /* +0x768 */
    float m_fImpulseTime; /* +0x76c */
    int m_bImpulse; /* +0x770 */
    void DesInit(void);
    void Display(GLD_tdstViewportAttributes_* hVp);
    void Process(void);
    void Init(MTH3D_tdstVector_* p_stStartingPosition, MTH3D_tdstVector_* p_stEndingDirection, GLI_tdstMaterial_* pMat1, float fFist);
};

struct AGO3_TFS_SpriteData {
    float fSize; /* +0x0 */
    float fTransparency; /* +0x4 */
    MTH3D_tdstVector_ stPosition; /* +0x8 */
    MTH3D_tdstVector_ a_stSpritePosition[6][6]; /* +0x14 */
    unsigned int a_ulType[6]; /* +0x1c4 */
    C_Vector a_stSpriteDirection[2]; /* +0x1e0 */
    unsigned int ulNbIntermediates; /* +0x200 */
    MTH3D_tdstVector_ a_stIntermediatePosition[5]; /* +0x204 */
};

struct tdstNodeCamera_ {
    HIE_tdstSuperObject_* p_stSuperObjectCamera; /* +0x0 */
    tdstNodeCamera_* hNextBrotherDyn; /* +0x4 */
    tdstNodeCamera_* hPrevBrotherDyn; /* +0x8 */
    LST2_tdstAnchorTotdxHandleToNodeCameraDyn* hFatherDyn; /* +0xc */
};

struct AGO3_HU_SpriteData {
    float fSize; /* +0x0 */
    float fTransparency; /* +0x4 */
    float fPositionZ; /* +0x8 */
    MTH3D_tdstVector_* pstInitialPosition; /* +0xc */
    MTH3D_tdstVector_* pstAdditionnalVector; /* +0x10 */
};

struct AGO3_HurricaneUpper {
    /* C++ base AGO3_Part at +0x0. */
    float m_fMainSize; /* +0x30 */
    float m_fMainRotation; /* +0x34 */
    AGO3_HU_SpriteData m_a_stSprite[25]; /* +0x38 */
    unsigned int m_ulFirstSprite; /* +0x22c */
    MTH3D_tdstVector_ m_a_stInitialPosition[25]; /* +0x230 */
    MTH3D_tdstVector_ m_a_stAdditionnalVector[25]; /* +0x35c */
    int m_bAlive; /* +0x488 */
    int m_bIsActive; /* +0x48c */
    MTH3D_tdstVector_ m_Position; /* +0x490 */
    float m_fTime; /* +0x49c */
    float m_fEndTime; /* +0x4a0 */
    AGO3_HurricaneUpper(void);
    void Display(GLD_tdstViewportAttributes_* hVp);
    void Process(void);
    void Init(MTH3D_tdstVector_* pPosition, MTH3D_tdstVector_* pDirection, GLI_tdstMaterial_* pMat1);
    int Kill_Enabled(void);
};

struct SECT_tdstListOfSOSectorsInSoundInteraction_ {
    HIE_tdstSuperObject_* hPointerOfSectorSO; /* +0x0 */
    int lVolume; /* +0x4 */
};

struct AGO3_Transition {
    /* C++ base AGO3_Part at +0x0. */
    float m_fFadeDelay; /* +0x30 */
    float m_fDelayBeforeMessage; /* +0x34 */
    float m_fTime; /* +0x38 */
    float m_fTimeSinceLoadingMessage; /* +0x3c */
    float m_fMessagePosition[2]; /* +0x40 */
    float m_fThreeDotsPosition[2]; /* +0x48 */
    char m_szLoadingMessage[28]; /* +0x50 */
    char m_szDots[12]; /* +0x6c */
    unsigned int m_dwNbDots; /* +0x78 */
    unsigned int m_dwNbDisplayedDots; /* +0x7c */
    void DisplayLoadingMessage(GLD_tdstViewportAttributes_* hVp);
    void Process(void);
    void DesInit(void);
    void Display(GLD_tdstViewportAttributes_* hVp);
};

struct MTH3D_tdstMatrix_ {
    MTH3D_tdstVector_ stCol_0; /* +0x0 */
    MTH3D_tdstVector_ stCol_1; /* +0xc */
    MTH3D_tdstVector_ stCol_2; /* +0x18 */
};

struct AGO3_ShootSmoke {
    /* C++ base AGO3_Part at +0x0. */
    float m_fLaps1; /* +0x30 */
    float m_fLaps2; /* +0x34 */
    unsigned int m_ulNumSprites; /* +0x38 */
    float m_fTime; /* +0x3c */
    MTH3D_tdstVector_ m_stInitialPosition; /* +0x40 */
    MTH3D_tdstVector_ m_stAdditionnalVector; /* +0x4c */
    MTH3D_tdstMatrix_ m_stAxes; /* +0x58 */
    float m_fTransparency; /* +0x7c */
    float m_fScale; /* +0x80 */
    float m_a_fXYNoise[14][3]; /* +0x84 */
    float m_a_fScale[14]; /* +0x12c */
    float m_a_fTransparency[14]; /* +0x164 */
    void Display(GLD_tdstViewportAttributes_* hVp);
    void Process(void);
    void Init(MTH3D_tdstVector_* pPosition, MTH3D_tdstVector_* pDirection, GLI_tdstMaterial_* pMat1);
};

struct LST2_tdstAnchorToSECT_tdxHandleOfElementLstCollisionInteractionOpt {
    SECT_tdstListOfSOSectorsInCollisionInteraction_* hFirstElementOpt; /* +0x0 */
    int lNumberOfElementsOpt; /* +0x4 */
};

struct AGO3_SB_SpriteData {
    MTH3D_tdstVector_ stPosition; /* +0x0 */
    MTH3D_tdstVector_ stDirection; /* +0xc */
    float fSize; /* +0x18 */
    float fDelay; /* +0x1c */
    float fTimeBeforeDeath; /* +0x20 */
};

struct AGO3_SwirlingBubbles {
    /* C++ base AGO3_Part at +0x0. */
    MTH3D_tdstVector_ m_stDirection; /* +0x30 */
    MTH3D_tdstVector_ m_stLastPos; /* +0x3c */
    float m_fAngle; /* +0x48 */
    unsigned int m_ulNbBubbles; /* +0x4c */
    unsigned int m_ulFirstFree; /* +0x50 */
    unsigned int m_ulFirstSet; /* +0x54 */
    int m_bAlive; /* +0x58 */
    int m_bGenerationInProgress; /* +0x5c */
    AGO3_SB_SpriteData m_stSprite[512]; /* +0x60 */
    void Display(GLD_tdstViewportAttributes_* hVp);
    void Process(void);
    void DesInit(void);
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

struct AGO3_DigitalScoreDisplay {
    /* C++ base AGO3_Part at +0x0. */
    int m_bFirstTime; /* +0x30 */
    unsigned int m_dwScore; /* +0x34 */
    float m_fScore; /* +0x38 */
    int m_a_dwDigitToAdd[5]; /* +0x3c */
    unsigned int m_dwCarryScoreUp; /* +0x50 */
    unsigned int m_dwCarryScoreDown; /* +0x54 */
    unsigned int m_dwVibrationType; /* +0x58 */
    float m_fInvCurrentVibrationFrequency; /* +0x5c */
    float m_fCurrentHalfFrequency; /* +0x60 */
    float m_fImpulse; /* +0x64 */
    unsigned int m_hHandleID; /* +0x68 */
    void DisplayScore(GLD_tdstViewportAttributes_* hVp);
    void Process(void);
    void Init(MTH3D_tdstVector_* pPosition, MTH3D_tdstVector_* pDirection, GLI_tdstMaterial_* pMat1, float fScoreToAdd);
    void DesInit(void);
    void SetSizes(float fContainerWidthPercentage);
    void Display(GLD_tdstViewportAttributes_* hVp);
};

struct SECT_tdstListOfSOSectorsInCollisionInteraction_ {
    HIE_tdstSuperObject_* hPointerOfSectorSO; /* +0x0 */
};

struct LST2_tdstAnchorToCINE_tdxHandleToCineDyn {
    CINE_tdstCine_* hFirstElementDyn; /* +0x0 */
    CINE_tdstCine_* hLastElementDyn; /* +0x4 */
    int lNumberOfElementsDyn; /* +0x8 */
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

struct AGO3_SpriteDurationFade {
    /* C++ base AGO3_Part at +0x0. */
    float m_fMainSize; /* +0x30 */
    float m_fDisplayDuration; /* +0x34 */
    float m_fFadeInDuration; /* +0x38 */
    float m_fFadeOutDuration; /* +0x3c */
    float m_fCurrentTime; /* +0x40 */
    float m_fTransparency; /* +0x44 */
    float m_fCurrentFadeInTime; /* +0x48 */
    float m_fCurrentFadeOutTime; /* +0x4c */
    float m_fInvFadeInDurationAlpha; /* +0x50 */
    float m_fInvFadeOutDurationAlpha; /* +0x54 */
    void Display(GLD_tdstViewportAttributes_* hVp);
    void Process(void);
};

union _SND_tduRefEvt {
    unsigned int Id; /* +0x0 */
    _SND_tdstBlockEvent* pstPtr; /* +0x0 */
};

struct SCT_tdstListOfSoundEvent_ {
    HIE_tdstSuperObject_* hPointerOfSectorSO; /* +0x0 */
    _SND_tduRefEvt uSoundEvent; /* +0x4 */
};

struct AGO3_SpriteZoom {
    /* C++ base AGO3_Part at +0x0. */
    float m_fMainSize; /* +0x30 */
    float m_fDisplayDuration; /* +0x34 */
    float m_fZoomPercentage; /* +0x38 */
    float m_fCurrentTime; /* +0x3c */
    float m_fCurrentZoom; /* +0x40 */
    float m_fCurrentSize; /* +0x44 */
    void Display(GLD_tdstViewportAttributes_* hVp);
    void Process(void);
};

struct AGO3_SMUV_Scroll_ {
    float fOriginalValue; /* +0x0 */
    float fFirstOffset; /* +0x4 */
    float fFinalOffset; /* +0x8 */
    float fAcceleration; /* +0xc */
    unsigned int ulAcceleratorType; /* +0x10 */
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

struct AGO3_WaveEnvelopedFist2 {
    /* C++ base AGO3_Part at +0x0. */
    float m_fMainSize; /* +0x30 */
    MTH3D_tdstVector_ m_a_stPosition[2]; /* +0x34 */
    unsigned int m_a_ulNbAGOs[2]; /* +0x4c */
    unsigned int m_a_ulFirstFree[2]; /* +0x54 */
    unsigned int m_a_ulFirstSet[2]; /* +0x5c */
    unsigned int m_a_ulColor[2]; /* +0x64 */
    AGO3_WEF_SpriteData m_stSprite[2][64]; /* +0x6c */
    void Display(GLD_tdstViewportAttributes_* hVp);
    void Process(void);
    void Init(MTH3D_tdstVector_* pPosition, GLI_tdstMaterial_* pMat1, float fColor);
    void DesInit(void);
};

struct LST2_tdstAnchorTotdxHandleToNodeCameraDyn {
    tdstNodeCamera_* hFirstElementDyn; /* +0x0 */
    tdstNodeCamera_* hLastElementDyn; /* +0x4 */
    int lNumberOfElementsDyn; /* +0x8 */
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

struct AGO3_GrowingUVAnimatedFireBall {
    /* C++ base AGO3_Part at +0x0. */
    float m_fSize; /* +0x30 */
    float m_fCurrentU; /* +0x34 */
    float m_fCurrentV; /* +0x38 */
    float m_fAnimationTime; /* +0x3c */
    float m_fAngleSpeed; /* +0x40 */
    void Display(GLD_tdstViewportAttributes_* hVp);
    void Process(void);
};

struct tdstPLA_Hierarchy_ {
    unsigned int ulNbOfCouples; /* +0x0 */
    tdstCouple_* d_stCouples; /* +0x4 */
};

struct stRECT {
    int left; /* +0x0 */
    int top; /* +0x4 */
    int right; /* +0x8 */
    int bottom; /* +0xc */
};

struct AGO3_OrientedTarget {
    /* C++ base AGO3_Part at +0x0. */
    MTH3D_tdstVector_ m_stDirection; /* +0x30 */
    float m_fTiltedAngle; /* +0x3c */
    float m_fSize; /* +0x40 */
    float m_a_fSpriteVertex[4][3]; /* +0x44 */
    void Display(GLD_tdstViewportAttributes_* hVp);
    void Process(void);
    void DesInit(void);
};

struct AGO3_BeamWithUVs {
    /* C++ base AGO3_Part at +0x0. */
    float m_fSize; /* +0x30 */
    float m_fRepetition; /* +0x34 */
    unsigned char _extractor_padding_00[8]; /* implicitly added by extractor; +0x38..0x3f */
    C_Vector m_Direction; /* +0x40 */
    void Display(GLD_tdstViewportAttributes_* hVp);
    void Process(void);
};

struct GEO_tdstEdge_ {
    short xPoints[2]; /* +0x0 */
    MTH3D_tdstVector_ st_VectorPoints[2]; /* +0x4 */
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

struct COL_tdstBoundingSphere_ {
    MTH4D_tdstVector_ stCenterPoint; /* +0x0 */
    float xRadius; /* +0x10 */
};

struct AGO3_CR2_SpriteData {
    float fSize; /* +0x0 */
    float fTransparency; /* +0x4 */
    float fPosition; /* +0x8 */
    MTH3D_tdstVector_ stPosition; /* +0xc */
    unsigned int ulType; /* +0x18 */
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

struct GLI_tdstSpecificAttributesFor3D_ {
    GLI_tdstCamera_* p_stCam; /* +0x0 */
    float xNear; /* +0x4 */
};

struct LST2_tdstAnchorTotdxHandleToFamilyListDyn {
    tdstFamilyList_* hFirstElementDyn; /* +0x0 */
    tdstFamilyList_* hLastElementDyn; /* +0x4 */
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

struct SECT_tdstListOfDNMLights_ {
    GLI_tdstLight_* hDNMLights; /* +0x0 */
    SECT_tdstListOfDNMLights_* hNextBrotherDyn; /* +0x4 */
    SECT_tdstListOfDNMLights_* hPrevBrotherDyn; /* +0x8 */
    LST2_tdstAnchorToSECT_tdxHandleOfElementLstDNMLightsDyn* hFatherDyn; /* +0xc */
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

struct AGO3_CustomRipple {
    /* C++ base AGO3_Part at +0x0. */
    float m_fMainSize; /* +0x30 */
    float m_fTime; /* +0x34 */
    float m_fTime2; /* +0x38 */
    float m_fGlobalTime; /* +0x3c */
    AGO3_CR2_SpriteData m_a_stSprite[64]; /* +0x40 */
    unsigned int m_ulFirstSprite; /* +0x740 */
    MTH3D_tdstVector_ m_stDirection; /* +0x744 */
    MTH3D_tdstVector_ m_stInitialPosition; /* +0x750 */
    MTH3D_tdstVector_ m_stAdditionnalVector; /* +0x75c */
    int m_bRegeneration; /* +0x768 */
    unsigned int m_dwNumRipples; /* +0x76c */
    float m_fRippleLength; /* +0x770 */
    int m_bFirstTime; /* +0x774 */
    float m_fSpaceBetweenTwoSprites; /* +0x778 */
    float m_fMaxSizePercentage; /* +0x77c */
    float m_fIntermediatePercentage; /* +0x780 */
    float m_fTimeToReachNextLevel; /* +0x784 */
    float m_fRippleFadeOutDistance; /* +0x788 */
    float m_fRippleFadeInDistance; /* +0x78c */
    float m_fInvRippleFadeInDistance; /* +0x790 */
    float m_fTotalDuration; /* +0x794 */
    float m_fStartEndRippleTime; /* +0x798 */
    unsigned int m_dwAutoStartStop; /* +0x79c */
    void Display(GLD_tdstViewportAttributes_* hVp);
    void Process(void);
    void Init(MTH3D_tdstVector_* p_stStartingPosition, MTH3D_tdstVector_* p_stDirection, GLI_tdstMaterial_* pMat1, float fStartStop);
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

struct LST2_tdstAnchorToSECT_tdxHandleOfElementLstGraphicInteractionOpt {
    SECT_tdstListOfSOSectorsInGraphicInteraction_* hFirstElementOpt; /* +0x0 */
    int lNumberOfElementsOpt; /* +0x4 */
};

struct AGO3_SpriteDurationFade2 {
    /* C++ base AGO3_Part at +0x0. */
    float m_fMainSize; /* +0x30 */
    float m_fDisplayDuration; /* +0x34 */
    float m_fFadeDuration; /* +0x38 */
    float m_fCurrentTime; /* +0x3c */
    float m_fTransparency; /* +0x40 */
    float m_fCurrentFadeTime; /* +0x44 */
    unsigned char _extractor_padding_00[8]; /* implicitly added by extractor; +0x48..0x4f */
    C_Vector m_BottomPos; /* +0x50 */
    void Display(GLD_tdstViewportAttributes_* hVp);
    void Process(void);
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

struct AGO3_GrowingUVAnimatedFireBallMoving {
    /* C++ base AGO3_Part at +0x0. */
    float m_fSize; /* +0x30 */
    float m_fCurrentU; /* +0x34 */
    float m_fCurrentV; /* +0x38 */
    float m_fAnimationTime; /* +0x3c */
    float m_fAngleSpeed; /* +0x40 */
    unsigned char _extractor_padding_00[12]; /* implicitly added by extractor; +0x44..0x4f */
    C_Vector m_Direction; /* +0x50 */
    void Display(GLD_tdstViewportAttributes_* hVp);
    void Process(void);
};

struct AGO3_FistSmoke {
    /* C++ base AGO3_Part at +0x0. */
    float m_fMainSize; /* +0x30 */
    unsigned int m_ulFist; /* +0x34 */
    unsigned int m_a_ulNbAGOs[2]; /* +0x38 */
    unsigned int m_a_ulFirstFree[2]; /* +0x40 */
    unsigned int m_a_ulFirstSet[2]; /* +0x48 */
    AGO3_FS_SpriteData m_stSprite[2][50]; /* +0x50 */
    void Display(GLD_tdstViewportAttributes_* hVp);
    void Process(void);
    void Init(MTH3D_tdstVector_* pPosition, MTH3D_tdstVector_* pDirection, GLI_tdstMaterial_* pMat1, float fForwardSpeed);
    void DesInit(void);
};

struct SECT_tdstListOfSOSectorsInGraphicInteraction_ {
    short wLevelOfDetail; /* +0x0 */
    char cDisplayMode; /* +0x2 */
    HIE_tdstSuperObject_* hPointerOfSectorSO; /* +0x4 */
};

struct tdstElement3d_ {
    unsigned short wElement : 15; /* bit 0, byte +0x0 */
    unsigned short bf1ActiveStatus : 1; /* bit 15, byte +0x0 */
    unsigned char ucChannelNumber; /* +0x2 */
    unsigned char eTypeOfElement; /* +0x3 */
    unsigned char ucTransparency; /* +0x4 */
    unsigned char ucAnimLevel; /* +0x5 */
};

struct _tdstBinarizedDataForMenu {
    int hText; /* +0x0 */
};

struct SECT_tdstListOfStaticLights_ {
    GLI_tdstLight_* hStaticLights; /* +0x0 */
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

struct SECT_tdstListOfSOCharacters_ {
    HIE_tdstSuperObject_* hPointerOfCharacter; /* +0x0 */
    SECT_tdstListOfSOCharacters_* hNextBrotherDyn; /* +0x4 */
    SECT_tdstListOfSOCharacters_* hPrevBrotherDyn; /* +0x8 */
    LST2_tdstAnchorToSECT_tdxHandleOfElementLstCharacterDyn* hFatherDyn; /* +0xc */
};

struct AGO3_SR_Scroll_ {
    float fFirstOffset; /* +0x0 */
    float fFinalOffset; /* +0x4 */
    float fAcceleration; /* +0x8 */
    unsigned int ulAcceleratorType; /* +0xc */
};

struct AGO3_SphericalRadiance {
    /* C++ base AGO3_Part at +0x0. */
    MTH3D_tdstVector_ m_P1; /* +0x30 */
    MTH3D_tdstVector_ m_P2; /* +0x3c */
    MTH3D_tdstVector_ m_Dir1; /* +0x48 */
    MTH3D_tdstVector_ m_Dir2; /* +0x54 */
    AGO3_SR_SpriteData m_a_stSprite[25]; /* +0x60 */
    AGO3_SR_Scroll_ m_a_stScroll[2]; /* +0x510 */
    float m_fCurrentTime; /* +0x530 */
    float m_fDuration; /* +0x534 */
    float m_fInverseOfDuration; /* +0x538 */
    float m_fFinalValue[2]; /* +0x53c */
    unsigned int m_ulNumRays; /* +0x544 */
    float m_fInnerRadius; /* +0x548 */
    float m_fOuterRadius; /* +0x54c */
    int m_bHalfSphere; /* +0x550 */
    unsigned int m_hHandleID; /* +0x554 */
    AGO3_SphericalRadiance(void);
    void DesInit(void);
    void Display(GLD_tdstViewportAttributes_* hVp);
    void Process(void);
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

struct tdstPLA_DeformationLink_ {
    unsigned short wChannel1; /* +0x0 */
    unsigned short wBorder1; /* +0x2 */
    unsigned short wChannel2; /* +0x4 */
    unsigned short wBorder2; /* +0x6 */
};

struct tdstEventInTable_ {
    int p_xEvent; /* +0x0 */
    unsigned char ucTypeOfEvent; /* +0x4 */
    unsigned char ucPriority; /* +0x5 */
    unsigned char ucFirstCall; /* +0x6 */
    unsigned char ucPeriod; /* +0x7 */
    unsigned int u32SemaphoreId; /* +0x8 */
};

struct AGO3_TurningFistSmoke {
    /* C++ base AGO3_Part at +0x0. */
    float m_fMainSize; /* +0x30 */
    unsigned int m_ulFist; /* +0x34 */
    unsigned int m_a_ulNbAGOs[2]; /* +0x38 */
    unsigned int m_a_ulFirstFree[2]; /* +0x40 */
    unsigned int m_a_ulFirstSet[2]; /* +0x48 */
    AGO3_TFS_SpriteData m_stSprite[2][50]; /* +0x50 */
    void Display(GLD_tdstViewportAttributes_* hVp);
    void Process(void);
    void Init(MTH3D_tdstVector_* pPosition, MTH3D_tdstVector_* pDirection, GLI_tdstMaterial_* pMat1, float fForwardSpeed);
};

struct AGO3_ScrollMatUV {
    /* C++ base AGO3_Part at +0x0. */
    float m_fCurrentTime; /* +0x30 */
    float m_fDuration; /* +0x34 */
    float m_fInverseOfDuration; /* +0x38 */
    AGO3_SMUV_Scroll_ m_a_stScroll[2]; /* +0x3c */
    void Display(GLD_tdstViewportAttributes_* hVp);
    void Process(void);
    void DesInit(void);
    void Init(MTH3D_tdstVector_* pPosition, MTH3D_tdstVector_* pDirection, GLI_tdstMaterial_* pMat1, float fDuration);
};

struct stPOINT {
    int x; /* +0x0 */
    int y; /* +0x4 */
};

struct AGO3_Target {
    /* C++ base AGO3_Part at +0x0. */
    float m_fSize; /* +0x30 */
    float m_fOrientation; /* +0x34 */
    void Display(GLD_tdstViewportAttributes_* hVp);
    void Process(void);
};

struct AGO3_Snowboard_SnowEffect {
    /* C++ base AGO3_Part at +0x0. */
    float m_fWidth; /* +0x30 */
    float m_fLength; /* +0x34 */
    float m_fMaxVerticalAngle; /* +0x38 */
    GLI_tdstMaterial_* m_pSnowParticleMat; /* +0x3c */
    MTH3D_tdstVector_ m_stDirection; /* +0x40 */
    MTH3D_tdstVector_ m_stDistanceVect; /* +0x4c */
    unsigned int m_dwEffectID; /* +0x58 */
    float m_fDistanceBelowSurf; /* +0x5c */
    float m_fVerticalAngle; /* +0x60 */
    AGO3_SBS_tdstSnowPart_ m_a_stSnowParticle[64]; /* +0x64 */
    unsigned int m_dwNumSnowParts; /* +0x964 */
    unsigned int m_dwFirstFreePart; /* +0x968 */
    unsigned int m_dwFirstUsedPart; /* +0x96c */
    int m_bOnAir; /* +0x970 */
    float m_fParameter; /* +0x974 */
    float m_fSide; /* +0x978 */
    MTH3D_tdstVector_ m_stLastPosition; /* +0x97c */
    int m_bFirstInit; /* +0x988 */
    float m_fDistance; /* +0x98c */
    float m_fVPosition; /* +0x990 */
    float m_fUPosition; /* +0x994 */
    void Display(GLD_tdstViewportAttributes_* hVp);
    void Process(void);
    void GeneratePartsOnLanding(void);
    void GeneratePartsOnAir(void);
    void GeneratePartsOnGround(void);
    void Init(MTH3D_tdstVector_* p_stPosition, MTH3D_tdstVector_* p_stDirection, GLI_tdstMaterial_* pMat1, float fParameter);
    void DesInit(void);
};

struct CINE_Manager_ {
    LST2_tdstAnchorToCINE_tdxHandleToCineDyn hCineList; /* +0x0 */
    MAT_tdstTransformation_ gp_stFixedCameraMatrix; /* +0x10 */
    HIE_tdstSuperObject_* gp_stSPOHandleCamera; /* +0x70 */
};

struct LST2_tdstAnchorToWP_tdhGraphNodeDyn {
    WP_tdstGraphNode_* hFirstElementDyn; /* +0x0 */
    WP_tdstGraphNode_* hLastElementDyn; /* +0x4 */
    int lNumberOfElementsDyn; /* +0x8 */
};

struct tdstBrain_ {
    AI_tdstMind_* p_stMind; /* +0x0 */
    GMT_tdstGameMaterial_* hLastCollidedGoThroughMaterial; /* +0x4 */
    unsigned char bWarnMechanicsFlag; /* +0x8 */
    unsigned char bActiveDuringTransition; /* +0x9 */
};

struct GEO_tdstParallelBox_ {
    MTH4D_tdstVector_ stMinPoint; /* +0x0 */
    MTH4D_tdstVector_ stMaxPoint; /* +0x10 */
};

struct GEO_tdstDoubledIndex_ {
    short a2_xIndex[2]; /* +0x0 */
};

struct tdstGraphChainedListNode_ {
    WP_tdstGraph_* GraphChainedListNodeInfo; /* +0x0 */
    tdstGraphChainedListNode_* p_NextGraphChainedListNode; /* +0x4 */
};

struct tdstEvent_ {
    tdstEventInTable_* p_stfEventInTBL; /* +0x0 */
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

struct AGO3_GrowingFireBall {
    /* C++ base AGO3_GrowingUVAnimatedFireBall at +0x0. */
    void Display(GLD_tdstViewportAttributes_* hVp);
};

struct tdstLanguageStructure_ {
    char szLanguageCode[20]; /* +0x0 */
    char szLanguageText[20]; /* +0x14 */
};

struct GMT_tdstCollideMaterial_ {
    short wTypeOfZone; /* +0x0 */
    unsigned short xIdentifier; /* +0x2 */
    MTH3D_tdstVector_ stDirection; /* +0x4 */
    float xCoeff; /* +0x10 */
    unsigned short wTypeForAi; /* +0x14 */
};

struct GMT_tdstGameMaterial_ {
    int hSoundMaterial; /* +0x0 */
    GMT_tdstCollideMaterial_* hCollideMaterial; /* +0x4 */
};

struct GLD_tdstDeviceAttributes_ {
    unsigned int dwHeight; /* +0x0 */
    unsigned int dwWidth; /* +0x4 */
    float xPixelDimensionX; /* +0x8 */
    float xPixelDimensionY; /* +0xc */
    int p_cVirtualScreen; /* +0x10 */
    int lPitch; /* +0x14 */
    int p_sZBuffer; /* +0x18 */
    unsigned int dwFullScreenModeX; /* +0x1c */
    unsigned int dwFullScreenModeY; /* +0x20 */
    unsigned int dwFullScreenModeBpp; /* +0x24 */
    int hFullScreenModeWnd; /* +0x28 */
    int hNormalModeWnd; /* +0x2c */
    int bFullScreen; /* +0x30 */
    unsigned int uiTypeDriver; /* +0x34 */
    stPOINT pClientOnPrimary; /* +0x38 */
    stRECT rtClientRect; /* +0x40 */
    stRECT rtWindowRect; /* +0x50 */
};

struct WP_tdstGraph_ {
    LST2_tdstAnchorToWP_tdhGraphNodeDyn m_hListOfNode; /* +0x0 */
};

int p_fCosTable;
unsigned int AGO3_g_Parts[2048];
unsigned int g_hLastAllocatedAGO3;
int g_bReInitAGO;
unsigned int g_dwAGOHandle;
unsigned int AGO_gProcessTrameCounter;
unsigned int g_ulNumberOfAgos3;
unsigned int AGO_g_WasDisplayedInMirror_DoNOT_Burry;
int AGO_g_WeirdAura;
float UpMul;
int AGO3_g_Impose_SUB_BlendingMode;
static int AGO3_C_WaveEnvelopedFistShape[51];

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ago\AGO3.cpp lines 51–66 */
/* addr: 0x001ea500  size: 180 bytes */
/* Debug signature rejected: type-record data leaked into it. */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 51
 *   +0x0010 -> line 54
 *   +0x001c -> line 56
 *   +0x0024 -> line 58
 *   +0x0078 -> line 59
 *   +0x0088 -> line 60
 *   +0x0094 -> line 63
 *   +0x0098 -> line 64
 *   +0x009c -> line 65
 *   +0x00a0 -> line 66
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void Toby_DestroyAll(void)
{
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ago\AGO3.cpp lines 7218–7218 */
/* addr: 0x001ea5c0  size: 16 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 7218
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void AGO3_LinkChainComputing::DesInit(void)
{
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ago\AGO3.cpp lines 8339–8354 */
/* addr: 0x001ea5e0  size: 132 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 8339
 *   +0x0004 -> line 8343
 *   +0x0008 -> line 8339
 *   +0x0010 -> line 8341
 *   +0x0014 -> line 8345
 *   +0x002c -> line 8348
 *   +0x0030 -> line 8347
 *   +0x0034 -> line 8349
 *   +0x0038 -> line 8347
 *   +0x003c -> line 8349
 *   +0x005c -> line 8351
 *   +0x0064 -> line 8353
 *   +0x0078 -> line 8354
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void AGO3_ReInit(unsigned int dwHandle, unsigned int dwPartNumber, MTH3D_tdstVector_* pPosition, MTH3D_tdstVector_* pDirection, GLI_tdstMaterial_* pMat1, float fParameter)
{
    int i;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ago\AGO3.cpp lines 8311–8326 */
/* addr: 0x001ea670  size: 136 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 8311
 *   +0x0004 -> line 8315
 *   +0x0008 -> line 8311
 *   +0x0014 -> line 8317
 *   +0x002c -> line 8319
 *   +0x0040 -> line 8320
 *   +0x0048 -> line 8321
 *   +0x0060 -> line 8323
 *   +0x0068 -> line 8325
 *   +0x0078 -> line 8326
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void AGO3_vKill(int iHandle)
{
    AGO3_Part* pPart;
    int i;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ago\AGO3.cpp lines 8303–8303 */
/* addr: 0x001ea700  size: 8 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 8303
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
unsigned int AGO3_dwGetLastHandle(void)
{
    return g_hLastAllocatedAGO3;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ago\AGO3.cpp lines 7682–8292 */
/* addr: 0x001ea710  size: 9840 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 7682
 *   +0x002c -> line 7687
 *   +0x0030 -> line 7682
 *   +0x003c -> line 7687
 *   +0x0040 -> line 7682
 *   +0x0044 -> line 7687
 *   +0x0090 -> line 7688
 *   +0x009c -> line 7690
 *   +0x0200 -> line 7694
 *   +0x0284 -> line 7696
 *   +0x02b0 -> line 7699
 *   +0x02b8 -> line 7703
 *   +0x0348 -> line 7705
 *   +0x035c -> line 7708
 *   +0x0364 -> line 7719
 *   +0x037c -> line 7723
 *   +0x0384 -> line 7727
 *   +0x0420 -> line 7729
 *   +0x04fc -> line 7732
 *   +0x0504 -> line 7736
 *   +0x0594 -> line 7738
 *   +0x0638 -> line 7741
 *   +0x0640 -> line 7750
 *   +0x0648 -> line 7839
 *   +0x0650 -> line 7843
 *   +0x0658 -> line 7850
 *   +0x065c -> line 7852
 *   +0x069c -> line 7853
 *   +0x06d8 -> line 7854
 *   +0x06ec -> line 7855
 *   +0x06f0 -> line 7854
 *   +0x06f8 -> line 7855
 *   +0x06fc -> line 7854
 *   +0x0708 -> line 7855
 *   +0x0710 -> line 7854
 *   +0x0714 -> line 7855
 *   +0x0718 -> line 7854
 *   +0x0720 -> line 7855
 *   +0x0724 -> line 7854
 *   +0x072c -> line 7855
 *   +0x0734 -> line 7856
 *   +0x0744 -> line 7868
 *   +0x074c -> line 7872
 *   +0x07dc -> line 7874
 *   +0x082c -> line 7877
 *   +0x0834 -> line 7882
 *   +0x08c4 -> line 7884
 *   +0x09bc -> line 7887
 *   +0x09c4 -> line 7895
 *   +0x09c8 -> line 7897
 *   +0x0a08 -> line 7898
 *   +0x0a44 -> line 7899
 *   +0x0a58 -> line 7900
 *   +0x0a5c -> line 7899
 *   +0x0a64 -> line 7900
 *   +0x0a68 -> line 7899
 *   +0x0a74 -> line 7900
 *   +0x0a7c -> line 7899
 *   +0x0a80 -> line 7900
 *   +0x0a84 -> line 7899
 *   +0x0a8c -> line 7900
 *   +0x0a90 -> line 7899
 *   +0x0a98 -> line 7900
 *   +0x0aa0 -> line 7901
 *   +0x0ab0 -> line 7903
 *   +0x0ab8 -> line 7910
 *   +0x0ac4 -> line 7912
 *   +0x0b98 -> line 7915
 *   +0x0bb0 -> line 7917
 *   +0x0bb8 -> line 7919
 *   +0x0bd8 -> line 7922
 *   +0x0be0 -> line 7927
 *   +0x0c70 -> line 7929
 *   +0x0c84 -> line 7932
 *   +0x0c8c -> line 7937
 *   +0x0c98 -> line 7939
 *   +0x0d6c -> line 7942
 *   +0x0d84 -> line 7944
 *   +0x0d8c -> line 7946
 *   +0x0dac -> line 7949
 *   +0x0db4 -> line 7956
 *   +0x0dc0 -> line 7958
 *   +0x0ec8 -> line 7960
 *   +0x0edc -> line 7962
 *   +0x0ee4 -> line 7963
 *   +0x0ef4 -> line 7965
 *   +0x0efc -> line 7971
 *   +0x0f08 -> line 7973
 *   +0x1014 -> line 7976
 *   +0x102c -> line 7978
 *   +0x1034 -> line 7980
 *   +0x1054 -> line 7983
 *   +0x105c -> line 7988
 *   +0x10ec -> line 7990
 *   +0x11c4 -> line 7993
 *   +0x11cc -> line 7999
 *   +0x125c -> line 8004
 *   +0x12ac -> line 8007
 *   +0x12b4 -> line 8012
 *   +0x1344 -> line 8014
 *   +0x1358 -> line 8017
 *   +0x1360 -> line 8022
 *   +0x13f0 -> line 8024
 *   +0x1404 -> line 8027
 *   +0x140c -> line 8032
 *   +0x14d0 -> line 8034
 *   +0x14e0 -> line 8037
 *   +0x14e8 -> line 8042
 *   +0x1570 -> line 8044
 *   +0x1584 -> line 8047
 *   +0x158c -> line 8052
 *   +0x1670 -> line 8054
 *   +0x1684 -> line 8057
 *   +0x168c -> line 8062
 *   +0x1698 -> line 8064
 *   +0x1750 -> line 8066
 *   +0x1754 -> line 8067
 *   +0x17c4 -> line 8069
 *   +0x17cc -> line 8071
 *   +0x1844 -> line 8074
 *   +0x184c -> line 8082
 *   +0x1854 -> line 8083
 *   +0x1860 -> line 8095
 *   +0x1894 -> line 8097
 *   +0x1920 -> line 8099
 *   +0x1940 -> line 8100
 *   +0x1944 -> line 8099
 *   +0x1948 -> line 8100
 *   +0x1a18 -> line 8102
 *   +0x1a20 -> line 8103
 *   +0x1a44 -> line 8104
 *   +0x1a4c -> line 8106
 *   +0x1a54 -> line 8108
 *   +0x1a74 -> line 8111
 *   +0x1b4c -> line 8133
 *   +0x1b54 -> line 8138
 *   +0x1bec -> line 8140
 *   +0x1c00 -> line 8143
 *   +0x1c08 -> line 8149
 *   +0x1c98 -> line 8151
 *   +0x1cac -> line 8159
 *   +0x1cb4 -> line 8164
 *   +0x1cc0 -> line 8166
 *   +0x1dd0 -> line 8168
 *   +0x1ddc -> line 8169
 *   +0x1df8 -> line 8171
 *   +0x1e00 -> line 8173
 *   +0x1e20 -> line 8176
 *   +0x1e28 -> line 8181
 *   +0x1e34 -> line 8183
 *   +0x1f44 -> line 8185
 *   +0x1f50 -> line 8186
 *   +0x1f54 -> line 8185
 *   +0x1f58 -> line 8186
 *   +0x1f5c -> line 8185
 *   +0x1f60 -> line 8186
 *   +0x1f74 -> line 8188
 *   +0x1f7c -> line 8190
 *   +0x1f9c -> line 8193
 *   +0x1fa4 -> line 8197
 *   +0x2078 -> line 8199
 *   +0x208c -> line 8215
 *   +0x2094 -> line 8220
 *   +0x2124 -> line 8222
 *   +0x2190 -> line 8225
 *   +0x2198 -> line 8233
 *   +0x227c -> line 8239
 *   +0x2290 -> line 8244
 *   +0x2298 -> line 8250
 *   +0x2334 -> line 8252
 *   +0x23a4 -> line 8255
 *   +0x23ac -> line 8261
 *   +0x23b8 -> line 8263
 *   +0x249c -> line 8266
 *   +0x24f0 -> line 8268
 *   +0x24f8 -> line 8270
 *   +0x2554 -> line 8273
 *   +0x255c -> line 8278
 *   +0x2568 -> line 8280
 *   +0x2600 -> line 8283
 *   +0x2618 -> line 8285
 *   +0x2620 -> line 8287
 *   +0x2640 -> line 8292
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void AGO3_vAddPart(unsigned int PartNumber, MTH3D_tdstVector_* pPosition, MTH3D_tdstVector_* pDirection, GLI_tdstMaterial_* pMat1, float fParam1, MTH3D_tdstVector_* V1)
{
    int iParam1;
    unsigned int i;
    MTH3D_tdstVector_ Pos2;
    AGO3_Part* p;
    unsigned int hParticle;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ago\AGO3.cpp lines 3940–3940 */
/* addr: 0x001ecd80  size: 36 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 3940
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void AGO3_SphericalRadiance::DesInit(void)
{
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ago\AGO3.cpp lines 7505–7643 */
/* addr: 0x001ecff0  size: 1016 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 7505
 *   +0x0050 -> line 7506
 *   +0x0068 -> line 7508
 *   +0x0080 -> line 7539
 *   +0x0094 -> line 7541
 *   +0x0098 -> line 7542
 *   +0x009c -> line 7543
 *   +0x00a0 -> line 7545
 *   +0x00a4 -> line 7546
 *   +0x00a8 -> line 7541
 *   +0x00ac -> line 7542
 *   +0x00b4 -> line 7543
 *   +0x00b8 -> line 7550
 *   +0x00c0 -> line 7553
 *   +0x00c4 -> line 7552
 *   +0x00c8 -> line 7554
 *   +0x00cc -> line 7552
 *   +0x00d4 -> line 7556
 *   +0x00d8 -> line 7552
 *   +0x00e0 -> line 7553
 *   +0x00e8 -> line 7554
 *   +0x00f0 -> line 7556
 *   +0x00fc -> line 7558
 *   +0x0130 -> line 7559
 *   +0x0138 -> line 7563
 *   +0x013c -> line 7564
 *   +0x0140 -> line 7563
 *   +0x0144 -> line 7565
 *   +0x0148 -> line 7567
 *   +0x0150 -> line 7563
 *   +0x0158 -> line 7564
 *   +0x0168 -> line 7565
 *   +0x0178 -> line 7567
 *   +0x01b4 -> line 7570
 *   +0x01bc -> line 7571
 *   +0x01c0 -> line 7573
 *   +0x01d8 -> line 7579
 *   +0x01dc -> line 7573
 *   +0x01e0 -> line 7579
 *   +0x01e8 -> line 7576
 *   +0x01ec -> line 7577
 *   +0x01f0 -> line 7579
 *   +0x01f4 -> line 7575
 *   +0x01fc -> line 7579
 *   +0x0200 -> line 7575
 *   +0x0204 -> line 7576
 *   +0x0208 -> line 7577
 *   +0x020c -> line 7579
 *   +0x0210 -> line 7575
 *   +0x0214 -> line 7576
 *   +0x0218 -> line 7579
 *   +0x0220 -> line 7581
 *   +0x0224 -> line 7600
 *   +0x0228 -> line 7581
 *   +0x022c -> line 7582
 *   +0x0234 -> line 7583
 *   +0x023c -> line 7584
 *   +0x0244 -> line 7585
 *   +0x024c -> line 7586
 *   +0x0250 -> line 7600
 *   +0x0258 -> line 7605
 *   +0x025c -> line 7613
 *   +0x0260 -> line 7609
 *   +0x0264 -> line 7605
 *   +0x0268 -> line 7606
 *   +0x026c -> line 7605
 *   +0x0270 -> line 7606
 *   +0x0274 -> line 7607
 *   +0x0278 -> line 7606
 *   +0x027c -> line 7607
 *   +0x0284 -> line 7609
 *   +0x0288 -> line 7610
 *   +0x028c -> line 7609
 *   +0x0290 -> line 7610
 *   +0x0294 -> line 7611
 *   +0x0298 -> line 7610
 *   +0x029c -> line 7611
 *   +0x02a0 -> line 7613
 *   +0x02a8 -> line 7616
 *   +0x02e8 -> line 7619
 *   +0x02ec -> line 7623
 *   +0x02f0 -> line 7619
 *   +0x02f4 -> line 7623
 *   +0x02f8 -> line 7620
 *   +0x02fc -> line 7624
 *   +0x0300 -> line 7620
 *   +0x0304 -> line 7624
 *   +0x0308 -> line 7621
 *   +0x030c -> line 7625
 *   +0x0310 -> line 7621
 *   +0x0314 -> line 7625
 *   +0x0318 -> line 7627
 *   +0x0324 -> line 7628
 *   +0x0330 -> line 7630
 *   +0x0338 -> line 7632
 *   +0x0378 -> line 7639
 *   +0x037c -> line 7635
 *   +0x0384 -> line 7636
 *   +0x038c -> line 7637
 *   +0x0394 -> line 7640
 *   +0x03a8 -> line 7643
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void AGO3_LinkChainComputing::Display(GLD_tdstViewportAttributes_* hVp)
{
    unsigned int ulLLink;
    unsigned int ulSpriteType;
    float x4[3];
    float x3[3];
    float x2[3];
    float x1[3];
    float direction[3];
    MAT_tdstTransformation_ TempMatrix;
    MTH3D_tdstVector_ v1;
    MTH3D_tdstVector_ v2;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ago\AGO3.cpp lines 7491–7499 */
/* addr: 0x001ed3f0  size: 76 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 7491
 *   +0x0008 -> line 7492
 *   +0x0014 -> line 7494
 *   +0x001c -> line 7495
 *   +0x0024 -> line 7494
 *   +0x0028 -> line 7495
 *   +0x0038 -> line 7496
 *   +0x0044 -> line 7499
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void AGO3_LinkChainComputing::Process(void)
{
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ago\AGO3.cpp lines 7234–7486 */
/* addr: 0x001ed440  size: 2464 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 7234
 *   +0x0038 -> line 7255
 *   +0x003c -> line 7234
 *   +0x005c -> line 7255
 *   +0x0060 -> line 7257
 *   +0x006c -> line 7260
 *   +0x0070 -> line 7262
 *   +0x0074 -> line 7263
 *   +0x0078 -> line 7260
 *   +0x007c -> line 7262
 *   +0x0080 -> line 7263
 *   +0x0098 -> line 7264
 *   +0x009c -> line 7265
 *   +0x00a4 -> line 7268
 *   +0x00a8 -> line 7269
 *   +0x00ac -> line 7270
 *   +0x00b0 -> line 7273
 *   +0x00cc -> line 7275
 *   +0x0110 -> line 7278
 *   +0x0128 -> line 7279
 *   +0x0130 -> line 7280
 *   +0x0134 -> line 7278
 *   +0x0138 -> line 7280
 *   +0x013c -> line 7279
 *   +0x0144 -> line 7280
 *   +0x0148 -> line 7281
 *   +0x0150 -> line 7310
 *   +0x0158 -> line 7309
 *   +0x015c -> line 7311
 *   +0x0164 -> line 7313
 *   +0x0168 -> line 7310
 *   +0x016c -> line 7311
 *   +0x0170 -> line 7309
 *   +0x0174 -> line 7312
 *   +0x0184 -> line 7313
 *   +0x0194 -> line 7314
 *   +0x01a0 -> line 7315
 *   +0x01ec -> line 7318
 *   +0x01f0 -> line 7315
 *   +0x01f4 -> line 7319
 *   +0x0200 -> line 7320
 *   +0x0208 -> line 7322
 *   +0x0238 -> line 7326
 *   +0x023c -> line 7334
 *   +0x0240 -> line 7326
 *   +0x024c -> line 7339
 *   +0x0250 -> line 7327
 *   +0x0254 -> line 7326
 *   +0x0258 -> line 7327
 *   +0x025c -> line 7341
 *   +0x0260 -> line 7328
 *   +0x0268 -> line 7330
 *   +0x026c -> line 7337
 *   +0x0270 -> line 7330
 *   +0x0274 -> line 7326
 *   +0x0278 -> line 7330
 *   +0x027c -> line 7338
 *   +0x0280 -> line 7334
 *   +0x0284 -> line 7326
 *   +0x0288 -> line 7334
 *   +0x028c -> line 7327
 *   +0x0294 -> line 7328
 *   +0x029c -> line 7326
 *   +0x02a0 -> line 7327
 *   +0x02a4 -> line 7328
 *   +0x02a8 -> line 7337
 *   +0x02ac -> line 7334
 *   +0x02b4 -> line 7341
 *   +0x02bc -> line 7343
 *   +0x02c0 -> line 7344
 *   +0x02c4 -> line 7343
 *   +0x02c8 -> line 7344
 *   +0x02d0 -> line 7345
 *   +0x02dc -> line 7346
 *   +0x02e0 -> line 7353
 *   +0x02e8 -> line 7355
 *   +0x02ec -> line 7363
 *   +0x02f0 -> line 7360
 *   +0x02f4 -> line 7363
 *   +0x02f8 -> line 7356
 *   +0x02fc -> line 7359
 *   +0x0300 -> line 7363
 *   +0x0304 -> line 7357
 *   +0x030c -> line 7358
 *   +0x0314 -> line 7359
 *   +0x031c -> line 7360
 *   +0x0324 -> line 7363
 *   +0x0328 -> line 7365
 *   +0x0334 -> line 7364
 *   +0x0338 -> line 7365
 *   +0x0348 -> line 7366
 *   +0x0364 -> line 7367
 *   +0x037c -> line 7370
 *   +0x03d0 -> line 7372
 *   +0x03dc -> line 7374
 *   +0x03e0 -> line 7375
 *   +0x03e4 -> line 7374
 *   +0x03e8 -> line 7375
 *   +0x03f0 -> line 7376
 *   +0x03f8 -> line 7377
 *   +0x03fc -> line 7378
 *   +0x0400 -> line 7386
 *   +0x0408 -> line 7390
 *   +0x040c -> line 7381
 *   +0x0410 -> line 7389
 *   +0x0414 -> line 7386
 *   +0x0418 -> line 7382
 *   +0x041c -> line 7381
 *   +0x0420 -> line 7382
 *   +0x042c -> line 7383
 *   +0x0434 -> line 7391
 *   +0x0440 -> line 7394
 *   +0x0444 -> line 7396
 *   +0x045c -> line 7409
 *   +0x0460 -> line 7410
 *   +0x0464 -> line 7413
 *   +0x0468 -> line 7409
 *   +0x0470 -> line 7410
 *   +0x047c -> line 7411
 *   +0x0488 -> line 7415
 *   +0x04e0 -> line 7417
 *   +0x04e8 -> line 7419
 *   +0x0540 -> line 7421
 *   +0x054c -> line 7420
 *   +0x0550 -> line 7426
 *   +0x0558 -> line 7427
 *   +0x0584 -> line 7428
 *   +0x05bc -> line 7429
 *   +0x05c0 -> line 7428
 *   +0x05c4 -> line 7429
 *   +0x05d0 -> line 7434
 *   +0x05d8 -> line 7435
 *   +0x05e0 -> line 7438
 *   +0x05f8 -> line 7439
 *   +0x05fc -> line 7438
 *   +0x0600 -> line 7439
 *   +0x0608 -> line 7440
 *   +0x0610 -> line 7438
 *   +0x0614 -> line 7440
 *   +0x0618 -> line 7438
 *   +0x0628 -> line 7439
 *   +0x0644 -> line 7440
 *   +0x065c -> line 7442
 *   +0x0664 -> line 7450
 *   +0x0670 -> line 7453
 *   +0x0674 -> line 7450
 *   +0x0678 -> line 7453
 *   +0x067c -> line 7450
 *   +0x069c -> line 7451
 *   +0x06a0 -> line 7452
 *   +0x06a4 -> line 7453
 *   +0x06a8 -> line 7450
 *   +0x06b0 -> line 7451
 *   +0x06c0 -> line 7452
 *   +0x06cc -> line 7453
 *   +0x06d4 -> line 7455
 *   +0x0748 -> line 7456
 *   +0x07bc -> line 7457
 *   +0x0830 -> line 7459
 *   +0x086c -> line 7461
 *   +0x0884 -> line 7463
 *   +0x088c -> line 7464
 *   +0x0890 -> line 7466
 *   +0x08cc -> line 7468
 *   +0x08e4 -> line 7470
 *   +0x08ec -> line 7474
 *   +0x08f4 -> line 7475
 *   +0x08f8 -> line 7482
 *   +0x0928 -> line 7483
 *   +0x093c -> line 7484
 *   +0x0950 -> line 7486
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void AGO3_LinkChainComputing::Init(MTH3D_tdstVector_* p_stStartingPosition, MTH3D_tdstVector_* p_stEndingDirection, GLI_tdstMaterial_* pMat1, float fFist)
{
    MTH3D_tdstVector_ v2;
    MTH3D_tdstVector_ v1;
    MTH3D_tdstVector_ v0;
    float fYProgression;
    float fXProgression;
    float fYCurrentBalance;
    float fXCurrentBalance;
    float fYBalance;
    float fXBalance;
    float fAverageLightningLength;
    unsigned int ulLLink;
    MTH3D_tdstVector_* pLinkPos;
    unsigned int ulNbLinks2;
    float fConst3;
    float fConst2;
    float fConst1;
    float fTemp;
    float fNbLinks;
    float fOneMinusCoef;
    float fCoef;
    float fLength;
    float fR;
    unsigned int ulFirst;
    unsigned int ulNbLinks;
    unsigned int ulFist;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ago\AGO3.cpp lines 7130–7167 */
/* addr: 0x001edde0  size: 596 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 7130
 *   +0x0018 -> line 7132
 *   +0x0030 -> line 7138
 *   +0x0040 -> line 7139
 *   +0x0054 -> line 7140
 *   +0x005c -> line 7146
 *   +0x0064 -> line 7147
 *   +0x00f8 -> line 7149
 *   +0x00fc -> line 7148
 *   +0x0100 -> line 7149
 *   +0x0104 -> line 7148
 *   +0x0108 -> line 7149
 *   +0x010c -> line 7148
 *   +0x0110 -> line 7147
 *   +0x0118 -> line 7148
 *   +0x011c -> line 7147
 *   +0x0120 -> line 7149
 *   +0x01b0 -> line 7150
 *   +0x01b4 -> line 7151
 *   +0x01b8 -> line 7160
 *   +0x01bc -> line 7151
 *   +0x01c0 -> line 7160
 *   +0x01c4 -> line 7151
 *   +0x01c8 -> line 7154
 *   +0x01cc -> line 7149
 *   +0x01d0 -> line 7154
 *   +0x01d4 -> line 7151
 *   +0x01d8 -> line 7149
 *   +0x01dc -> line 7154
 *   +0x01e0 -> line 7151
 *   +0x01e4 -> line 7154
 *   +0x01ec -> line 7149
 *   +0x01f0 -> line 7160
 *   +0x01f4 -> line 7154
 *   +0x01fc -> line 7155
 *   +0x0208 -> line 7156
 *   +0x0210 -> line 7160
 *   +0x0220 -> line 7163
 *   +0x023c -> line 7167
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void AGO3_Transition::DisplayLoadingMessage(GLD_tdstViewportAttributes_* hVp)
{
    float fThreeDotsLength;
    float fHeight;
    float fMessageLenght;
    char* p_szText;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ago\AGO3.cpp lines 7095–7126 */
/* addr: 0x001ee040  size: 260 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 7095
 *   +0x0008 -> line 7097
 *   +0x000c -> line 7095
 *   +0x0010 -> line 7097
 *   +0x0024 -> line 7101
 *   +0x0028 -> line 7103
 *   +0x002c -> line 7102
 *   +0x0030 -> line 7101
 *   +0x0034 -> line 7102
 *   +0x0038 -> line 7103
 *   +0x003c -> line 7102
 *   +0x0040 -> line 7103
 *   +0x0050 -> line 7106
 *   +0x0060 -> line 7111
 *   +0x0074 -> line 7113
 *   +0x0078 -> line 7114
 *   +0x007c -> line 7113
 *   +0x0080 -> line 7114
 *   +0x0088 -> line 7113
 *   +0x008c -> line 7114
 *   +0x009c -> line 7116
 *   +0x00a4 -> line 7117
 *   +0x00b0 -> line 7118
 *   +0x00c4 -> line 7119
 *   +0x00c8 -> line 7120
 *   +0x00d4 -> line 7122
 *   +0x00e4 -> line 7123
 *   +0x00f4 -> line 7126
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void AGO3_Transition::Process(void)
{
    MTH3D_tdstVector_ stColorVect;
    MTH3D_tdstVector_ stFadeVect;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ago\AGO3.cpp lines 7060–7068 */
/* addr: 0x001ee150  size: 72 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 7060
 *   +0x0010 -> line 7063
 *   +0x0014 -> line 7064
 *   +0x001c -> line 7065
 *   +0x0030 -> line 7067
 *   +0x0038 -> line 7068
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void AGO3_DisplayTransitionMessage(GLD_tdstViewportAttributes_* hVp)
{
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ago\AGO3.cpp lines 6849–6972 */
/* addr: 0x001ee1a0  size: 1004 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 6849
 *   +0x0028 -> line 6860
 *   +0x0038 -> line 6861
 *   +0x0044 -> line 6862
 *   +0x0048 -> line 6865
 *   +0x004c -> line 6862
 *   +0x0060 -> line 6865
 *   +0x0068 -> line 6868
 *   +0x0070 -> line 6869
 *   +0x0074 -> line 6868
 *   +0x0078 -> line 6869
 *   +0x007c -> line 6868
 *   +0x0080 -> line 6869
 *   +0x0084 -> line 6868
 *   +0x0088 -> line 6869
 *   +0x0098 -> line 6868
 *   +0x009c -> line 6874
 *   +0x00fc -> line 6876
 *   +0x010c -> line 6879
 *   +0x0110 -> line 6880
 *   +0x0114 -> line 6881
 *   +0x0118 -> line 6883
 *   +0x011c -> line 6884
 *   +0x0120 -> line 6885
 *   +0x0138 -> line 6879
 *   +0x0140 -> line 6880
 *   +0x014c -> line 6881
 *   +0x0158 -> line 6882
 *   +0x0164 -> line 6883
 *   +0x0170 -> line 6884
 *   +0x0178 -> line 6885
 *   +0x0180 -> line 6889
 *   +0x019c -> line 6898
 *   +0x01a0 -> line 6899
 *   +0x01a4 -> line 6898
 *   +0x01a8 -> line 6899
 *   +0x01b8 -> line 6901
 *   +0x01c4 -> line 6902
 *   +0x01cc -> line 6903
 *   +0x01dc -> line 6906
 *   +0x01e8 -> line 6908
 *   +0x01f0 -> line 6907
 *   +0x0200 -> line 6908
 *   +0x0204 -> line 6907
 *   +0x020c -> line 6908
 *   +0x021c -> line 6909
 *   +0x0224 -> line 6910
 *   +0x0240 -> line 6911
 *   +0x0254 -> line 6913
 *   +0x025c -> line 6917
 *   +0x0278 -> line 6918
 *   +0x027c -> line 6920
 *   +0x0288 -> line 6930
 *   +0x028c -> line 6951
 *   +0x0290 -> line 6930
 *   +0x0294 -> line 6933
 *   +0x0298 -> line 6931
 *   +0x029c -> line 6932
 *   +0x02a0 -> line 6934
 *   +0x02a4 -> line 6935
 *   +0x02a8 -> line 6930
 *   +0x02ac -> line 6937
 *   +0x02b0 -> line 6933
 *   +0x02b4 -> line 6937
 *   +0x02c0 -> line 6938
 *   +0x02c4 -> line 6932
 *   +0x02c8 -> line 6938
 *   +0x02d4 -> line 6939
 *   +0x02d8 -> line 6935
 *   +0x02dc -> line 6939
 *   +0x02e8 -> line 6940
 *   +0x02ec -> line 6931
 *   +0x02f0 -> line 6940
 *   +0x02fc -> line 6941
 *   +0x0300 -> line 6934
 *   +0x0304 -> line 6941
 *   +0x0310 -> line 6942
 *   +0x0314 -> line 6951
 *   +0x0318 -> line 6942
 *   +0x0324 -> line 6943
 *   +0x0334 -> line 6944
 *   +0x0344 -> line 6946
 *   +0x0354 -> line 6947
 *   +0x0364 -> line 6948
 *   +0x0374 -> line 6949
 *   +0x0380 -> line 6951
 *   +0x0388 -> line 6954
 *   +0x0390 -> line 6958
 *   +0x03c0 -> line 6969
 *   +0x03c8 -> line 6972
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void AGO3_OrientedTarget::Display(GLD_tdstViewportAttributes_* hVp)
{
    float fCos;
    float fZAngle;
    float fLength2;
    float fLength1;
    float xNorm;
    MTH3D_tdstVector_ v2;
    MTH3D_tdstVector_ v1;
    MTH3D_tdstVector_ v0;
    MAT_tdstTransformation_ stCameraMatrix;
    MAT_tdstTransformation_ stInvCameraMatrix;
    MAT_tdstTransformation_ stTargetTransMat;
    MTH3D_tdstVector_ stCameraPosition;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ago\AGO3.cpp lines 6840–6843 */
/* addr: 0x001ee590  size: 28 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 6840
 *   +0x0010 -> line 6842
 *   +0x0014 -> line 6843
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void AGO3_OrientedTarget::Process(void)
{
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ago\AGO3.cpp lines 6761–6777 */
/* addr: 0x001ee5b0  size: 208 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 6761
 *   +0x0024 -> line 6766
 *   +0x0028 -> line 6768
 *   +0x002c -> line 6766
 *   +0x003c -> line 6768
 *   +0x0044 -> line 6770
 *   +0x004c -> line 6771
 *   +0x0070 -> line 6773
 *   +0x0074 -> line 6772
 *   +0x0078 -> line 6773
 *   +0x0080 -> line 6774
 *   +0x0088 -> line 6775
 *   +0x0090 -> line 6776
 *   +0x0094 -> line 6775
 *   +0x00a0 -> line 6776
 *   +0x00b0 -> line 6777
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void AGO3_CustomRipple::Display(GLD_tdstViewportAttributes_* hVp)
{
    unsigned int ulSprite2;
    unsigned int ulSprite;
    AGO3_CR2_SpriteData* pSpriteData;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ago\AGO3.cpp lines 6646–6757 */
/* addr: 0x001ee680  size: 1052 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 6646
 *   +0x0010 -> line 6647
 *   +0x0020 -> line 6650
 *   +0x003c -> line 6653
 *   +0x0058 -> line 6655
 *   +0x0070 -> line 6656
 *   +0x0074 -> line 6657
 *   +0x0084 -> line 6659
 *   +0x0088 -> line 6660
 *   +0x0090 -> line 6665
 *   +0x00a4 -> line 6667
 *   +0x00b0 -> line 6669
 *   +0x00b8 -> line 6673
 *   +0x00c0 -> line 6669
 *   +0x00c4 -> line 6673
 *   +0x0134 -> line 6674
 *   +0x0148 -> line 6675
 *   +0x014c -> line 6680
 *   +0x0154 -> line 6687
 *   +0x0158 -> line 6683
 *   +0x015c -> line 6680
 *   +0x0160 -> line 6687
 *   +0x0164 -> line 6681
 *   +0x0168 -> line 6687
 *   +0x0174 -> line 6680
 *   +0x0178 -> line 6684
 *   +0x0188 -> line 6680
 *   +0x018c -> line 6684
 *   +0x0190 -> line 6687
 *   +0x0198 -> line 6689
 *   +0x01a4 -> line 6691
 *   +0x01ac -> line 6692
 *   +0x01b0 -> line 6695
 *   +0x01bc -> line 6698
 *   +0x01d0 -> line 6699
 *   +0x01e8 -> line 6701
 *   +0x01fc -> line 6702
 *   +0x0218 -> line 6704
 *   +0x021c -> line 6705
 *   +0x0220 -> line 6717
 *   +0x0224 -> line 6708
 *   +0x0230 -> line 6709
 *   +0x0234 -> line 6710
 *   +0x0248 -> line 6711
 *   +0x025c -> line 6712
 *   +0x0270 -> line 6715
 *   +0x0274 -> line 6718
 *   +0x0278 -> line 6716
 *   +0x027c -> line 6715
 *   +0x0280 -> line 6718
 *   +0x0288 -> line 6719
 *   +0x0290 -> line 6720
 *   +0x0298 -> line 6721
 *   +0x029c -> line 6720
 *   +0x02a8 -> line 6721
 *   +0x02b8 -> line 6723
 *   +0x02c0 -> line 6725
 *   +0x02c4 -> line 6727
 *   +0x02c8 -> line 6725
 *   +0x02d4 -> line 6727
 *   +0x02e0 -> line 6728
 *   +0x02ec -> line 6729
 *   +0x02f8 -> line 6730
 *   +0x02fc -> line 6732
 *   +0x0300 -> line 6730
 *   +0x0310 -> line 6732
 *   +0x0318 -> line 6735
 *   +0x031c -> line 6737
 *   +0x0320 -> line 6735
 *   +0x0324 -> line 6737
 *   +0x0330 -> line 6735
 *   +0x0334 -> line 6737
 *   +0x0344 -> line 6738
 *   +0x0350 -> line 6740
 *   +0x0364 -> line 6741
 *   +0x0378 -> line 6742
 *   +0x038c -> line 6743
 *   +0x0390 -> line 6744
 *   +0x03a4 -> line 6745
 *   +0x03c4 -> line 6747
 *   +0x03d8 -> line 6748
 *   +0x0400 -> line 6751
 *   +0x0408 -> line 6753
 *   +0x040c -> line 6754
 *   +0x0414 -> line 6757
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void AGO3_CustomRipple::Process(void)
{
    int bGenerateNewSprite;
    unsigned int ulSpriteLimit;
    unsigned int ulSprite2;
    float fMultiplier;
    float fPercentage;
    float fPosition;
    unsigned int ulSprite;
    AGO3_CR2_SpriteData* pSpriteData;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ago\AGO3.cpp lines 6530–6630 */
/* addr: 0x001eeaa0  size: 1196 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 6530
 *   +0x0004 -> line 6533
 *   +0x0008 -> line 6530
 *   +0x000c -> line 6536
 *   +0x0010 -> line 6530
 *   +0x0014 -> line 6533
 *   +0x0018 -> line 6530
 *   +0x0020 -> line 6533
 *   +0x002c -> line 6536
 *   +0x0030 -> line 6533
 *   +0x0050 -> line 6536
 *   +0x0058 -> line 6538
 *   +0x005c -> line 6539
 *   +0x0060 -> line 6540
 *   +0x0068 -> line 6541
 *   +0x0078 -> line 6543
 *   +0x007c -> line 6546
 *   +0x0088 -> line 6558
 *   +0x0094 -> line 6560
 *   +0x0098 -> line 6562
 *   +0x00a0 -> line 6560
 *   +0x00a4 -> line 6561
 *   +0x00ac -> line 6562
 *   +0x00bc -> line 6563
 *   +0x00c8 -> line 6564
 *   +0x00d0 -> line 6565
 *   +0x00e8 -> line 6566
 *   +0x00f4 -> line 6567
 *   +0x00f8 -> line 6571
 *   +0x00fc -> line 6567
 *   +0x0100 -> line 6569
 *   +0x0104 -> line 6571
 *   +0x010c -> line 6567
 *   +0x0114 -> line 6569
 *   +0x011c -> line 6570
 *   +0x0128 -> line 6571
 *   +0x0168 -> line 6575
 *   +0x0174 -> line 6576
 *   +0x0178 -> line 6575
 *   +0x0188 -> line 6576
 *   +0x0198 -> line 6577
 *   +0x01a8 -> line 6580
 *   +0x0208 -> line 6581
 *   +0x0218 -> line 6582
 *   +0x021c -> line 6583
 *   +0x0280 -> line 6585
 *   +0x0284 -> line 6589
 *   +0x028c -> line 6585
 *   +0x0294 -> line 6587
 *   +0x02a0 -> line 6588
 *   +0x02b0 -> line 6589
 *   +0x02c4 -> line 6590
 *   +0x02d4 -> line 6592
 *   +0x02e0 -> line 6594
 *   +0x02f8 -> line 6600
 *   +0x0324 -> line 6603
 *   +0x0364 -> line 6606
 *   +0x03a0 -> line 6609
 *   +0x0414 -> line 6611
 *   +0x0424 -> line 6612
 *   +0x042c -> line 6613
 *   +0x0430 -> line 6614
 *   +0x0438 -> line 6618
 *   +0x0450 -> line 6623
 *   +0x0454 -> line 6624
 *   +0x045c -> line 6623
 *   +0x046c -> line 6624
 *   +0x0474 -> line 6626
 *   +0x047c -> line 6628
 *   +0x0480 -> line 6627
 *   +0x0484 -> line 6628
 *   +0x0498 -> line 6630
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void AGO3_CustomRipple::Init(MTH3D_tdstVector_* p_stStartingPosition, MTH3D_tdstVector_* p_stDirection, GLI_tdstMaterial_* pMat1, float fStartStop)
{
    unsigned int ulSprite;
    AGO3_CR2_SpriteData* pSpriteData;
    float xNorm;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ago\AGO3.cpp lines 6399–6411 */
/* addr: 0x001eef50  size: 132 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 6399
 *   +0x0008 -> line 6400
 *   +0x000c -> line 6399
 *   +0x0018 -> line 6400
 *   +0x002c -> line 6406
 *   +0x0034 -> line 6407
 *   +0x0060 -> line 6408
 *   +0x0068 -> line 6410
 *   +0x0070 -> line 6411
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void AGO3_SpriteDurationFade2::Display(GLD_tdstViewportAttributes_* hVp)
{
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ago\AGO3.cpp lines 6388–6395 */
/* addr: 0x001eefe0  size: 96 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 6388
 *   +0x0018 -> line 6391
 *   +0x001c -> line 6392
 *   +0x0020 -> line 6391
 *   +0x0024 -> line 6392
 *   +0x002c -> line 6391
 *   +0x0034 -> line 6392
 *   +0x004c -> line 6394
 *   +0x0058 -> line 6395
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void AGO3_SpriteDurationFade2::Process(void)
{
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ago\AGO3.cpp lines 6296–6330 */
/* addr: 0x001ef040  size: 188 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 6296
 *   +0x001c -> line 6317
 *   +0x0028 -> line 6321
 *   +0x002c -> line 6322
 *   +0x0030 -> line 6321
 *   +0x0040 -> line 6322
 *   +0x0048 -> line 6324
 *   +0x0050 -> line 6326
 *   +0x0084 -> line 6327
 *   +0x0088 -> line 6328
 *   +0x00a0 -> line 6330
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void AGO3_Snowboard_SnowEffect::Display(GLD_tdstViewportAttributes_* hVp)
{
    unsigned int iPart;
    AGO3_SBS_tdstSnowPart_* pPart;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ago\AGO3.cpp lines 6279–6292 */
/* addr: 0x001ef100  size: 116 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 6279
 *   +0x0008 -> line 6280
 *   +0x0014 -> line 6282
 *   +0x0024 -> line 6283
 *   +0x002c -> line 6285
 *   +0x003c -> line 6286
 *   +0x0048 -> line 6288
 *   +0x0058 -> line 6289
 *   +0x0060 -> line 6291
 *   +0x0068 -> line 6292
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void AGO3_Snowboard_SnowEffect::Process(void)
{
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ago\AGO3.cpp lines 6246–6275 */
/* addr: 0x001ef180  size: 420 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 6246
 *   +0x0018 -> line 6259
 *   +0x001c -> line 6251
 *   +0x0020 -> line 6258
 *   +0x0024 -> line 6261
 *   +0x0064 -> line 6262
 *   +0x00a0 -> line 6263
 *   +0x00c4 -> line 6266
 *   +0x00c8 -> line 6263
 *   +0x00dc -> line 6264
 *   +0x00e0 -> line 6265
 *   +0x00e4 -> line 6267
 *   +0x0134 -> line 6268
 *   +0x0148 -> line 6271
 *   +0x014c -> line 6268
 *   +0x0154 -> line 6269
 *   +0x0158 -> line 6271
 *   +0x015c -> line 6268
 *   +0x0174 -> line 6269
 *   +0x0178 -> line 6271
 *   +0x0180 -> line 6273
 *   +0x0188 -> line 6274
 *   +0x018c -> line 6275
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void AGO3_Snowboard_SnowEffect::GeneratePartsOnLanding(void)
{
    unsigned int iPart;
    AGO3_SBS_tdstSnowPart_* pPart;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ago\AGO3.cpp lines 6177–6242 */
/* addr: 0x001ef330  size: 840 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 6177
 *   +0x0014 -> line 6184
 *   +0x0020 -> line 6186
 *   +0x0024 -> line 6187
 *   +0x0028 -> line 6186
 *   +0x002c -> line 6188
 *   +0x0034 -> line 6191
 *   +0x0050 -> line 6195
 *   +0x0054 -> line 6196
 *   +0x0058 -> line 6195
 *   +0x0068 -> line 6196
 *   +0x0070 -> line 6198
 *   +0x00bc -> line 6199
 *   +0x00d0 -> line 6203
 *   +0x00d4 -> line 6199
 *   +0x0110 -> line 6200
 *   +0x0120 -> line 6201
 *   +0x0134 -> line 6202
 *   +0x0138 -> line 6203
 *   +0x0148 -> line 6213
 *   +0x014c -> line 6215
 *   +0x0160 -> line 6216
 *   +0x01a8 -> line 6217
 *   +0x01f0 -> line 6218
 *   +0x0214 -> line 6220
 *   +0x0218 -> line 6218
 *   +0x0240 -> line 6220
 *   +0x0254 -> line 6221
 *   +0x0260 -> line 6222
 *   +0x0268 -> line 6223
 *   +0x02b8 -> line 6224
 *   +0x02cc -> line 6228
 *   +0x02d0 -> line 6224
 *   +0x02d8 -> line 6228
 *   +0x02dc -> line 6224
 *   +0x02f4 -> line 6225
 *   +0x02fc -> line 6226
 *   +0x030c -> line 6227
 *   +0x0314 -> line 6228
 *   +0x031c -> line 6229
 *   +0x032c -> line 6230
 *   +0x0330 -> line 6242
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void AGO3_Snowboard_SnowEffect::GeneratePartsOnAir(void)
{
    unsigned int iPart;
    AGO3_SBS_tdstSnowPart_* pPart;
    float fSizeMult;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ago\AGO3.cpp lines 6061–6173 */
/* addr: 0x001ef680  size: 916 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 6106
 *   +0x0004 -> line 6061
 *   +0x0008 -> line 6106
 *   +0x000c -> line 6061
 *   +0x0014 -> line 6106
 *   +0x0018 -> line 6061
 *   +0x001c -> line 6106
 *   +0x0020 -> line 6061
 *   +0x002c -> line 6106
 *   +0x0064 -> line 6112
 *   +0x0070 -> line 6115
 *   +0x0084 -> line 6134
 *   +0x00cc -> line 6135
 *   +0x0114 -> line 6136
 *   +0x0138 -> line 6142
 *   +0x013c -> line 6136
 *   +0x0164 -> line 6142
 *   +0x0178 -> line 6143
 *   +0x0184 -> line 6144
 *   +0x018c -> line 6145
 *   +0x01dc -> line 6148
 *   +0x01f8 -> line 6149
 *   +0x01fc -> line 6154
 *   +0x0200 -> line 6148
 *   +0x0218 -> line 6149
 *   +0x021c -> line 6150
 *   +0x022c -> line 6151
 *   +0x0238 -> line 6154
 *   +0x0244 -> line 6156
 *   +0x0258 -> line 6159
 *   +0x0268 -> line 6160
 *   +0x026c -> line 6163
 *   +0x0270 -> line 6164
 *   +0x0274 -> line 6163
 *   +0x0284 -> line 6164
 *   +0x028c -> line 6166
 *   +0x02d8 -> line 6167
 *   +0x02fc -> line 6171
 *   +0x0300 -> line 6169
 *   +0x0308 -> line 6167
 *   +0x0330 -> line 6169
 *   +0x0334 -> line 6167
 *   +0x033c -> line 6168
 *   +0x034c -> line 6169
 *   +0x0360 -> line 6170
 *   +0x0364 -> line 6171
 *   +0x0378 -> line 6173
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void AGO3_Snowboard_SnowEffect::GeneratePartsOnGround(void)
{
    unsigned int iNumPartsPerCall;
    unsigned int iPart;
    AGO3_SBS_tdstSnowPart_* pPart;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ago\AGO3.cpp lines 5924–6057 */
/* addr: 0x001efa20  size: 1220 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 5924
 *   +0x000c -> line 5927
 *   +0x0014 -> line 5930
 *   +0x0020 -> line 5934
 *   +0x0030 -> line 5935
 *   +0x0040 -> line 5936
 *   +0x0050 -> line 5938
 *   +0x0064 -> line 5939
 *   +0x0068 -> line 5938
 *   +0x006c -> line 5939
 *   +0x0070 -> line 5940
 *   +0x0074 -> line 5938
 *   +0x0078 -> line 5939
 *   +0x0084 -> line 5940
 *   +0x008c -> line 5939
 *   +0x0094 -> line 5940
 *   +0x00a4 -> line 5941
 *   +0x0120 -> line 5943
 *   +0x013c -> line 5944
 *   +0x0140 -> line 5943
 *   +0x0150 -> line 5944
 *   +0x0168 -> line 5945
 *   +0x01e4 -> line 5946
 *   +0x0204 -> line 5947
 *   +0x0288 -> line 5950
 *   +0x02a8 -> line 5953
 *   +0x02b0 -> line 5954
 *   +0x02b4 -> line 5956
 *   +0x02e8 -> line 5959
 *   +0x02f0 -> line 5960
 *   +0x02f8 -> line 5961
 *   +0x0300 -> line 5963
 *   +0x037c -> line 5967
 *   +0x0398 -> line 5972
 *   +0x039c -> line 5976
 *   +0x03a0 -> line 5972
 *   +0x03a4 -> line 5976
 *   +0x03a8 -> line 5974
 *   +0x03ac -> line 5976
 *   +0x03bc -> line 5974
 *   +0x03c0 -> line 5975
 *   +0x03c8 -> line 5976
 *   +0x03dc -> line 5977
 *   +0x03e4 -> line 5978
 *   +0x0420 -> line 5980
 *   +0x0428 -> line 5981
 *   +0x042c -> line 5982
 *   +0x0440 -> line 5983
 *   +0x046c -> line 5984
 *   +0x0474 -> line 5987
 *   +0x04bc -> line 6057
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void AGO3_Snowboard_SnowEffect::Init(MTH3D_tdstVector_* p_stPosition, MTH3D_tdstVector_* p_stDirection, GLI_tdstMaterial_* pMat1, float fParameter)
{
    float xNorm;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ago\AGO3.cpp lines 5598–5765 */
/* addr: 0x001efef0  size: 1548 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 5598
 *   +0x0004 -> line 5606
 *   +0x0008 -> line 5598
 *   +0x0048 -> line 5606
 *   +0x0060 -> line 5611
 *   +0x0064 -> line 5609
 *   +0x0068 -> line 5611
 *   +0x0074 -> line 5613
 *   +0x0084 -> line 5614
 *   +0x00d0 -> line 5617
 *   +0x00ec -> line 5621
 *   +0x00fc -> line 5622
 *   +0x0108 -> line 5624
 *   +0x0110 -> line 5625
 *   +0x0118 -> line 5626
 *   +0x011c -> line 5625
 *   +0x0120 -> line 5626
 *   +0x0140 -> line 5629
 *   +0x0150 -> line 5632
 *   +0x0158 -> line 5643
 *   +0x015c -> line 5632
 *   +0x0160 -> line 5643
 *   +0x0164 -> line 5632
 *   +0x0168 -> line 5643
 *   +0x0170 -> line 5632
 *   +0x0174 -> line 5643
 *   +0x01f0 -> line 5644
 *   +0x0214 -> line 5645
 *   +0x0220 -> line 5648
 *   +0x0230 -> line 5654
 *   +0x023c -> line 5655
 *   +0x0240 -> line 5654
 *   +0x0254 -> line 5655
 *   +0x0264 -> line 5656
 *   +0x0270 -> line 5657
 *   +0x02b4 -> line 5658
 *   +0x02e0 -> line 5659
 *   +0x02ec -> line 5661
 *   +0x02f0 -> line 5674
 *   +0x02f4 -> line 5661
 *   +0x02f8 -> line 5674
 *   +0x0304 -> line 5663
 *   +0x0310 -> line 5674
 *   +0x0320 -> line 5661
 *   +0x0324 -> line 5663
 *   +0x032c -> line 5674
 *   +0x037c -> line 5675
 *   +0x0388 -> line 5682
 *   +0x038c -> line 5697
 *   +0x0394 -> line 5682
 *   +0x0398 -> line 5697
 *   +0x039c -> line 5682
 *   +0x03ac -> line 5683
 *   +0x03b4 -> line 5697
 *   +0x03b8 -> line 5683
 *   +0x03bc -> line 5686
 *   +0x03c0 -> line 5697
 *   +0x03c4 -> line 5686
 *   +0x03c8 -> line 5682
 *   +0x03cc -> line 5686
 *   +0x03d4 -> line 5683
 *   +0x03d8 -> line 5686
 *   +0x03dc -> line 5683
 *   +0x03e0 -> line 5697
 *   +0x03ec -> line 5683
 *   +0x03f0 -> line 5697
 *   +0x0408 -> line 5683
 *   +0x040c -> line 5697
 *   +0x0434 -> line 5710
 *   +0x0494 -> line 5711
 *   +0x0498 -> line 5710
 *   +0x04a0 -> line 5712
 *   +0x04a4 -> line 5710
 *   +0x04ac -> line 5712
 *   +0x04cc -> line 5713
 *   +0x04d0 -> line 5716
 *   +0x04e0 -> line 5731
 *   +0x04e4 -> line 5718
 *   +0x04e8 -> line 5731
 *   +0x04ec -> line 5719
 *   +0x04f0 -> line 5731
 *   +0x0500 -> line 5719
 *   +0x0504 -> line 5731
 *   +0x0508 -> line 5719
 *   +0x050c -> line 5718
 *   +0x0510 -> line 5731
 *   +0x051c -> line 5719
 *   +0x0524 -> line 5731
 *   +0x0544 -> line 5732
 *   +0x0548 -> line 5731
 *   +0x055c -> line 5733
 *   +0x0574 -> line 5750
 *   +0x0584 -> line 5736
 *   +0x0588 -> line 5750
 *   +0x0594 -> line 5736
 *   +0x0598 -> line 5750
 *   +0x05c8 -> line 5765
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void AGO3_DigitalScoreDisplay::DisplayScore(GLD_tdstViewportAttributes_* hVp)
{
    float fY;
    float fPercentage;
    float fV;
    float fDigit;
    unsigned int dwDigit;
    float* param0;
    float fY2;
    float fX2;
    float fY1;
    float fX;
    int iScoreID;
    unsigned int i;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ago\AGO3.cpp lines 5378–5579 */
/* addr: 0x001f0500  size: 2608 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 5378
 *   +0x000c -> line 5383
 *   +0x001c -> line 5385
 *   +0x0028 -> line 5387
 *   +0x0030 -> line 5388
 *   +0x0034 -> line 5387
 *   +0x0038 -> line 5388
 *   +0x0048 -> line 5390
 *   +0x004c -> line 5391
 *   +0x0050 -> line 5390
 *   +0x0054 -> line 5394
 *   +0x0058 -> line 5395
 *   +0x005c -> line 5394
 *   +0x0060 -> line 5395
 *   +0x0070 -> line 5394
 *   +0x0074 -> line 5395
 *   +0x008c -> line 5396
 *   +0x0094 -> line 5397
 *   +0x00a0 -> line 5399
 *   +0x00a8 -> line 5400
 *   +0x00ac -> line 5399
 *   +0x00b0 -> line 5400
 *   +0x00c0 -> line 5403
 *   +0x00c4 -> line 5402
 *   +0x00c8 -> line 5404
 *   +0x00cc -> line 5407
 *   +0x00d0 -> line 5408
 *   +0x00d4 -> line 5407
 *   +0x00d8 -> line 5408
 *   +0x00e8 -> line 5407
 *   +0x00ec -> line 5408
 *   +0x0104 -> line 5409
 *   +0x010c -> line 5411
 *   +0x0110 -> line 5414
 *   +0x0138 -> line 5418
 *   +0x0144 -> line 5419
 *   +0x0164 -> line 5423
 *   +0x0168 -> line 5428
 *   +0x016c -> line 5425
 *   +0x0170 -> line 5429
 *   +0x0178 -> line 5425
 *   +0x0180 -> line 5428
 *   +0x0184 -> line 5429
 *   +0x018c -> line 5434
 *   +0x0190 -> line 5425
 *   +0x01ac -> line 5428
 *   +0x01c4 -> line 5429
 *   +0x01ec -> line 5428
 *   +0x01f0 -> line 5429
 *   +0x01f4 -> line 5428
 *   +0x01f8 -> line 5429
 *   +0x0228 -> line 5428
 *   +0x022c -> line 5429
 *   +0x0230 -> line 5428
 *   +0x0234 -> line 5429
 *   +0x0264 -> line 5428
 *   +0x0268 -> line 5429
 *   +0x026c -> line 5428
 *   +0x0270 -> line 5429
 *   +0x02a0 -> line 5428
 *   +0x02a4 -> line 5429
 *   +0x02a8 -> line 5428
 *   +0x02ac -> line 5429
 *   +0x02d8 -> line 5434
 *   +0x02e4 -> line 5435
 *   +0x02ec -> line 5445
 *   +0x02f0 -> line 5440
 *   +0x02f8 -> line 5445
 *   +0x02fc -> line 5447
 *   +0x0300 -> line 5445
 *   +0x0304 -> line 5447
 *   +0x0308 -> line 5440
 *   +0x030c -> line 5445
 *   +0x0314 -> line 5446
 *   +0x031c -> line 5447
 *   +0x0354 -> line 5450
 *   +0x0358 -> line 5447
 *   +0x035c -> line 5450
 *   +0x036c -> line 5452
 *   +0x0370 -> line 5454
 *   +0x0374 -> line 5452
 *   +0x0384 -> line 5467
 *   +0x03a0 -> line 5465
 *   +0x03a8 -> line 5463
 *   +0x03ac -> line 5467
 *   +0x03b0 -> line 5463
 *   +0x03b4 -> line 5468
 *   +0x03bc -> line 5456
 *   +0x03ec -> line 5458
 *   +0x041c -> line 5459
 *   +0x0420 -> line 5461
 *   +0x042c -> line 5463
 *   +0x0454 -> line 5465
 *   +0x048c -> line 5467
 *   +0x04f0 -> line 5468
 *   +0x04f4 -> line 5469
 *   +0x04f8 -> line 5468
 *   +0x04fc -> line 5470
 *   +0x0508 -> line 5471
 *   +0x0510 -> line 5472
 *   +0x0520 -> line 5474
 *   +0x0528 -> line 5475
 *   +0x052c -> line 5477
 *   +0x0534 -> line 5478
 *   +0x0544 -> line 5480
 *   +0x0548 -> line 5482
 *   +0x054c -> line 5480
 *   +0x055c -> line 5495
 *   +0x0568 -> line 5491
 *   +0x056c -> line 5495
 *   +0x0578 -> line 5491
 *   +0x057c -> line 5495
 *   +0x0584 -> line 5484
 *   +0x05b4 -> line 5486
 *   +0x05e4 -> line 5487
 *   +0x05e8 -> line 5489
 *   +0x05f4 -> line 5491
 *   +0x061c -> line 5493
 *   +0x0654 -> line 5495
 *   +0x06b8 -> line 5496
 *   +0x06bc -> line 5497
 *   +0x06c0 -> line 5496
 *   +0x06c4 -> line 5498
 *   +0x06d0 -> line 5499
 *   +0x06d8 -> line 5500
 *   +0x06e8 -> line 5502
 *   +0x06f0 -> line 5503
 *   +0x06f8 -> line 5513
 *   +0x0710 -> line 5516
 *   +0x0714 -> line 5518
 *   +0x072c -> line 5521
 *   +0x0730 -> line 5523
 *   +0x0734 -> line 5525
 *   +0x0738 -> line 5523
 *   +0x073c -> line 5525
 *   +0x0748 -> line 5523
 *   +0x0750 -> line 5525
 *   +0x07d4 -> line 5527
 *   +0x07e0 -> line 5525
 *   +0x07e4 -> line 5527
 *   +0x07f4 -> line 5525
 *   +0x07f8 -> line 5527
 *   +0x07fc -> line 5525
 *   +0x0800 -> line 5527
 *   +0x0804 -> line 5525
 *   +0x0808 -> line 5530
 *   +0x080c -> line 5527
 *   +0x0810 -> line 5525
 *   +0x0818 -> line 5526
 *   +0x081c -> line 5527
 *   +0x0848 -> line 5530
 *   +0x0854 -> line 5532
 *   +0x0864 -> line 5536
 *   +0x0888 -> line 5539
 *   +0x088c -> line 5538
 *   +0x0894 -> line 5539
 *   +0x089c -> line 5547
 *   +0x08a0 -> line 5548
 *   +0x08a4 -> line 5547
 *   +0x08b0 -> line 5548
 *   +0x08bc -> line 5547
 *   +0x08c4 -> line 5548
 *   +0x08cc -> line 5541
 *   +0x08d0 -> line 5548
 *   +0x08d4 -> line 5549
 *   +0x08dc -> line 5548
 *   +0x08e4 -> line 5541
 *   +0x08ec -> line 5548
 *   +0x0914 -> line 5549
 *   +0x0928 -> line 5553
 *   +0x092c -> line 5551
 *   +0x0930 -> line 5554
 *   +0x0938 -> line 5551
 *   +0x093c -> line 5554
 *   +0x0944 -> line 5551
 *   +0x094c -> line 5552
 *   +0x095c -> line 5553
 *   +0x0970 -> line 5554
 *   +0x0984 -> line 5560
 *   +0x098c -> line 5562
 *   +0x0990 -> line 5563
 *   +0x09a4 -> line 5564
 *   +0x09c8 -> line 5565
 *   +0x09cc -> line 5566
 *   +0x09dc -> line 5568
 *   +0x09e0 -> line 5569
 *   +0x09e4 -> line 5574
 *   +0x09f4 -> line 5577
 *   +0x09f8 -> line 5576
 *   +0x0a08 -> line 5577
 *   +0x0a10 -> line 5576
 *   +0x0a18 -> line 5577
 *   +0x0a28 -> line 5579
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void AGO3_DigitalScoreDisplay::Process(void)
{
    float fGlowingStrength;
    float fVibrationPos;
    int i;
    int bCarryWasDone;
    int bOkToCarry;
    float fCarry;
    float fScoreToAdd;
    float fPercentage;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ago\AGO3.cpp lines 5157–5371 */
/* addr: 0x001f0f30  size: 3276 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 5157
 *   +0x0004 -> line 5162
 *   +0x0008 -> line 5157
 *   +0x0020 -> line 5162
 *   +0x004c -> line 5165
 *   +0x0058 -> line 5168
 *   +0x0060 -> line 5169
 *   +0x0068 -> line 5170
 *   +0x0070 -> line 5173
 *   +0x0078 -> line 5174
 *   +0x0080 -> line 5173
 *   +0x0084 -> line 5168
 *   +0x008c -> line 5169
 *   +0x0094 -> line 5170
 *   +0x009c -> line 5174
 *   +0x00a0 -> line 5177
 *   +0x00ac -> line 5179
 *   +0x00cc -> line 5181
 *   +0x00d0 -> line 5179
 *   +0x0234 -> line 5180
 *   +0x0238 -> line 5181
 *   +0x0248 -> line 5185
 *   +0x0278 -> line 5186
 *   +0x0280 -> line 5189
 *   +0x029c -> line 5191
 *   +0x02b0 -> line 5194
 *   +0x02b8 -> line 5193
 *   +0x02bc -> line 5194
 *   +0x02c4 -> line 5198
 *   +0x02e4 -> line 5201
 *   +0x0464 -> line 5202
 *   +0x046c -> line 5204
 *   +0x0484 -> line 5206
 *   +0x0494 -> line 5208
 *   +0x04a4 -> line 5210
 *   +0x04c4 -> line 5213
 *   +0x04c8 -> line 5214
 *   +0x04cc -> line 5212
 *   +0x04d0 -> line 5213
 *   +0x04d4 -> line 5215
 *   +0x04d8 -> line 5214
 *   +0x04e0 -> line 5217
 *   +0x04e8 -> line 5218
 *   +0x04ec -> line 5219
 *   +0x04f0 -> line 5218
 *   +0x04f4 -> line 5221
 *   +0x04fc -> line 5223
 *   +0x0508 -> line 5225
 *   +0x0528 -> line 5228
 *   +0x052c -> line 5229
 *   +0x0530 -> line 5227
 *   +0x0534 -> line 5228
 *   +0x0538 -> line 5230
 *   +0x053c -> line 5229
 *   +0x0544 -> line 5232
 *   +0x054c -> line 5235
 *   +0x0554 -> line 5236
 *   +0x055c -> line 5237
 *   +0x0564 -> line 5238
 *   +0x057c -> line 5240
 *   +0x058c -> line 5242
 *   +0x0598 -> line 5244
 *   +0x05b8 -> line 5246
 *   +0x05bc -> line 5248
 *   +0x05c0 -> line 5247
 *   +0x05c4 -> line 5249
 *   +0x05c8 -> line 5248
 *   +0x05d0 -> line 5251
 *   +0x05d8 -> line 5252
 *   +0x05dc -> line 5253
 *   +0x05e4 -> line 5252
 *   +0x05e8 -> line 5255
 *   +0x05f0 -> line 5257
 *   +0x05fc -> line 5259
 *   +0x061c -> line 5263
 *   +0x0620 -> line 5261
 *   +0x0624 -> line 5263
 *   +0x0628 -> line 5262
 *   +0x062c -> line 5264
 *   +0x0630 -> line 5263
 *   +0x0638 -> line 5266
 *   +0x0640 -> line 5269
 *   +0x0648 -> line 5271
 *   +0x0650 -> line 5272
 *   +0x066c -> line 5274
 *   +0x067c -> line 5275
 *   +0x0684 -> line 5278
 *   +0x06a4 -> line 5279
 *   +0x06a8 -> line 5282
 *   +0x06c8 -> line 5285
 *   +0x0744 -> line 5286
 *   +0x074c -> line 5287
 *   +0x0764 -> line 5289
 *   +0x0768 -> line 5292
 *   +0x076c -> line 5289
 *   +0x0770 -> line 5292
 *   +0x0774 -> line 5293
 *   +0x077c -> line 5289
 *   +0x0790 -> line 5292
 *   +0x07a8 -> line 5293
 *   +0x07c8 -> line 5294
 *   +0x07cc -> line 5295
 *   +0x07d8 -> line 5297
 *   +0x07e0 -> line 5295
 *   +0x07f4 -> line 5297
 *   +0x0818 -> line 5300
 *   +0x0830 -> line 5302
 *   +0x0870 -> line 5309
 *   +0x0874 -> line 5311
 *   +0x0878 -> line 5309
 *   +0x087c -> line 5311
 *   +0x0884 -> line 5316
 *   +0x0888 -> line 5311
 *   +0x088c -> line 5317
 *   +0x0890 -> line 5311
 *   +0x0898 -> line 5309
 *   +0x089c -> line 5311
 *   +0x08a4 -> line 5309
 *   +0x08ac -> line 5311
 *   +0x0940 -> line 5319
 *   +0x097c -> line 5320
 *   +0x09a8 -> line 5323
 *   +0x09ac -> line 5324
 *   +0x09b8 -> line 5326
 *   +0x09c0 -> line 5327
 *   +0x09d0 -> line 5328
 *   +0x09d8 -> line 5329
 *   +0x09e8 -> line 5331
 *   +0x0a28 -> line 5338
 *   +0x0a2c -> line 5340
 *   +0x0a30 -> line 5338
 *   +0x0a34 -> line 5340
 *   +0x0a38 -> line 5338
 *   +0x0a3c -> line 5340
 *   +0x0a44 -> line 5345
 *   +0x0a48 -> line 5340
 *   +0x0a4c -> line 5346
 *   +0x0a50 -> line 5340
 *   +0x0a54 -> line 5338
 *   +0x0a60 -> line 5340
 *   +0x0af4 -> line 5348
 *   +0x0b30 -> line 5349
 *   +0x0b58 -> line 5351
 *   +0x0b5c -> line 5352
 *   +0x0b60 -> line 5353
 *   +0x0b68 -> line 5355
 *   +0x0b70 -> line 5356
 *   +0x0b80 -> line 5359
 *   +0x0ba0 -> line 5361
 *   +0x0bc8 -> line 5364
 *   +0x0c14 -> line 5367
 *   +0x0c44 -> line 5369
 *   +0x0c8c -> line 5370
 *   +0x0cb4 -> line 5371
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void AGO3_DigitalScoreDisplay::Init(MTH3D_tdstVector_* pPosition, MTH3D_tdstVector_* pDirection, GLI_tdstMaterial_* pMat1, float fScoreToAdd)
{
    unsigned int iCarry;
    unsigned int i;
    unsigned int dwAuxScore;
    unsigned int dwScoreToSub;
    unsigned int dwScoreToAdd;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ago\AGO3.cpp lines 5143–5153 */
/* addr: 0x001f1c00  size: 140 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 5143
 *   +0x0008 -> line 5148
 *   +0x000c -> line 5144
 *   +0x0010 -> line 5149
 *   +0x0014 -> line 5150
 *   +0x0018 -> line 5151
 *   +0x001c -> line 5152
 *   +0x0020 -> line 5143
 *   +0x002c -> line 5148
 *   +0x0030 -> line 5144
 *   +0x0034 -> line 5145
 *   +0x0038 -> line 5146
 *   +0x003c -> line 5147
 *   +0x0040 -> line 5148
 *   +0x0048 -> line 5149
 *   +0x0058 -> line 5150
 *   +0x0068 -> line 5151
 *   +0x0078 -> line 5152
 *   +0x0084 -> line 5153
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void AGO3_DigitalScoreDisplay::DesInit(void)
{
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ago\AGO3.cpp lines 5083–5126 */
/* addr: 0x001f1c90  size: 704 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 5083
 *   +0x0004 -> line 5089
 *   +0x0008 -> line 5083
 *   +0x000c -> line 5089
 *   +0x0010 -> line 5083
 *   +0x0014 -> line 5089
 *   +0x0020 -> line 5091
 *   +0x0050 -> line 5092
 *   +0x0080 -> line 5093
 *   +0x00b8 -> line 5095
 *   +0x00bc -> line 5103
 *   +0x00c0 -> line 5095
 *   +0x00c4 -> line 5112
 *   +0x00c8 -> line 5096
 *   +0x00d4 -> line 5103
 *   +0x00d8 -> line 5095
 *   +0x00dc -> line 5105
 *   +0x00e4 -> line 5096
 *   +0x00f8 -> line 5098
 *   +0x0100 -> line 5096
 *   +0x0104 -> line 5098
 *   +0x010c -> line 5096
 *   +0x0110 -> line 5099
 *   +0x0118 -> line 5098
 *   +0x011c -> line 5097
 *   +0x0120 -> line 5099
 *   +0x0128 -> line 5098
 *   +0x012c -> line 5100
 *   +0x0134 -> line 5099
 *   +0x013c -> line 5100
 *   +0x0148 -> line 5098
 *   +0x0150 -> line 5099
 *   +0x0158 -> line 5100
 *   +0x0164 -> line 5102
 *   +0x0170 -> line 5103
 *   +0x0174 -> line 5104
 *   +0x017c -> line 5105
 *   +0x0180 -> line 5104
 *   +0x0188 -> line 5108
 *   +0x0190 -> line 5103
 *   +0x019c -> line 5105
 *   +0x01a0 -> line 5109
 *   +0x01a8 -> line 5105
 *   +0x01b0 -> line 5109
 *   +0x01b8 -> line 5116
 *   +0x01dc -> line 5119
 *   +0x01e0 -> line 5117
 *   +0x01e4 -> line 5116
 *   +0x01e8 -> line 5119
 *   +0x01ec -> line 5116
 *   +0x01f0 -> line 5117
 *   +0x0200 -> line 5116
 *   +0x0204 -> line 5117
 *   +0x0218 -> line 5116
 *   +0x021c -> line 5117
 *   +0x0230 -> line 5116
 *   +0x0234 -> line 5117
 *   +0x0248 -> line 5116
 *   +0x024c -> line 5117
 *   +0x0258 -> line 5119
 *   +0x0260 -> line 5122
 *   +0x0268 -> line 5123
 *   +0x0270 -> line 5122
 *   +0x0274 -> line 5124
 *   +0x027c -> line 5125
 *   +0x0284 -> line 5124
 *   +0x0288 -> line 5122
 *   +0x0290 -> line 5124
 *   +0x0298 -> line 5123
 *   +0x02a0 -> line 5125
 *   +0x02a4 -> line 5123
 *   +0x02a8 -> line 5125
 *   +0x02b0 -> line 5126
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void AGO3_DigitalScoreDisplay::SetSizes(float fContainerWidthPercentage)
{
    unsigned int dwScoreID;
    float m_fYPixelToScreen;
    float fDeviceHeight;
    float fDeviceWidth;
    GLD_tdstDeviceAttributes_ stDeviceAttr;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ago\AGO3.cpp lines 4966–4972 */
/* addr: 0x001f1f50  size: 64 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 4966
 *   +0x0010 -> line 4969
 *   +0x0014 -> line 4970
 *   +0x001c -> line 4971
 *   +0x0030 -> line 4972
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void AGO3_DisplayDigitalScore(GLD_tdstViewportAttributes_* hVp)
{
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ago\AGO3.cpp lines 4791–4815 */
/* addr: 0x001f1f90  size: 192 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 4791
 *   +0x0008 -> line 4792
 *   +0x000c -> line 4791
 *   +0x0018 -> line 4792
 *   +0x002c -> line 4795
 *   +0x0034 -> line 4799
 *   +0x009c -> line 4812
 *   +0x00a4 -> line 4814
 *   +0x00ac -> line 4815
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void AGO3_ScoreDisplay::Display(GLD_tdstViewportAttributes_* hVp)
{
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ago\AGO3.cpp lines 4780–4787 */
/* addr: 0x001f2050  size: 96 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 4780
 *   +0x0018 -> line 4783
 *   +0x001c -> line 4784
 *   +0x0020 -> line 4783
 *   +0x0024 -> line 4784
 *   +0x002c -> line 4783
 *   +0x0034 -> line 4784
 *   +0x004c -> line 4786
 *   +0x0058 -> line 4787
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void AGO3_ScoreDisplay::Process(void)
{
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ago\AGO3.cpp lines 4753–4775 */
/* addr: 0x001f20b0  size: 224 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 4753
 *   +0x0044 -> line 4755
 *   +0x0050 -> line 4763
 *   +0x0054 -> line 4767
 *   +0x005c -> line 4755
 *   +0x0080 -> line 4757
 *   +0x0088 -> line 4758
 *   +0x0090 -> line 4759
 *   +0x0098 -> line 4761
 *   +0x009c -> line 4762
 *   +0x00a0 -> line 4763
 *   +0x00a4 -> line 4765
 *   +0x00a8 -> line 4769
 *   +0x00c0 -> line 4772
 *   +0x00c8 -> line 4774
 *   +0x00d8 -> line 4775
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void AGO3_ScoreDisplay::Init(MTH3D_tdstVector_* pPosition, MTH3D_tdstVector_* pDirection, GLI_tdstMaterial_* pMat1, float fScore)
{
    int dwScore;
    unsigned int dwScoreID;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ago\AGO3.cpp lines 4651–4682 */
/* addr: 0x001f2190  size: 336 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 4651
 *   +0x0004 -> line 4658
 *   +0x0008 -> line 4651
 *   +0x000c -> line 4658
 *   +0x0010 -> line 4651
 *   +0x0030 -> line 4660
 *   +0x0034 -> line 4658
 *   +0x0038 -> line 4659
 *   +0x003c -> line 4658
 *   +0x0044 -> line 4662
 *   +0x0060 -> line 4664
 *   +0x0068 -> line 4665
 *   +0x0098 -> line 4668
 *   +0x00a8 -> line 4671
 *   +0x00ac -> line 4672
 *   +0x00b4 -> line 4674
 *   +0x00d0 -> line 4676
 *   +0x00e0 -> line 4677
 *   +0x00e8 -> line 4678
 *   +0x0114 -> line 4679
 *   +0x0118 -> line 4681
 *   +0x0120 -> line 4680
 *   +0x0124 -> line 4681
 *   +0x012c -> line 4682
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void AGO3_LightExplosion::Display(GLD_tdstViewportAttributes_* hVp)
{
    float* pfUV;
    unsigned int i;
    AGO3_LE_SpriteData* pSpriteData;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ago\AGO3.cpp lines 4531–4647 */
/* addr: 0x001f22e0  size: 2192 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 4531
 *   +0x000c -> line 4533
 *   +0x0010 -> line 4535
 *   +0x0018 -> line 4536
 *   +0x0028 -> line 4538
 *   +0x0048 -> line 4540
 *   +0x004c -> line 4544
 *   +0x0054 -> line 4559
 *   +0x0058 -> line 4547
 *   +0x005c -> line 4559
 *   +0x0068 -> line 4547
 *   +0x0074 -> line 4559
 *   +0x00b8 -> line 4563
 *   +0x01a4 -> line 4565
 *   +0x01a8 -> line 4563
 *   +0x01c0 -> line 4564
 *   +0x01c4 -> line 4563
 *   +0x01d0 -> line 4564
 *   +0x01d4 -> line 4573
 *   +0x01ec -> line 4577
 *   +0x01f0 -> line 4573
 *   +0x01f4 -> line 4577
 *   +0x01f8 -> line 4568
 *   +0x01fc -> line 4579
 *   +0x0200 -> line 4568
 *   +0x0204 -> line 4579
 *   +0x0208 -> line 4568
 *   +0x0214 -> line 4569
 *   +0x0228 -> line 4570
 *   +0x023c -> line 4571
 *   +0x0240 -> line 4573
 *   +0x024c -> line 4575
 *   +0x0260 -> line 4577
 *   +0x0264 -> line 4579
 *   +0x026c -> line 4583
 *   +0x0278 -> line 4582
 *   +0x027c -> line 4583
 *   +0x036c -> line 4584
 *   +0x0370 -> line 4583
 *   +0x0394 -> line 4592
 *   +0x0398 -> line 4596
 *   +0x039c -> line 4592
 *   +0x03a0 -> line 4596
 *   +0x03a4 -> line 4587
 *   +0x03a8 -> line 4598
 *   +0x03ac -> line 4587
 *   +0x03b0 -> line 4598
 *   +0x03b4 -> line 4587
 *   +0x03c0 -> line 4588
 *   +0x03d4 -> line 4589
 *   +0x03e8 -> line 4590
 *   +0x03ec -> line 4592
 *   +0x03fc -> line 4594
 *   +0x0410 -> line 4596
 *   +0x0414 -> line 4598
 *   +0x041c -> line 4608
 *   +0x0440 -> line 4609
 *   +0x044c -> line 4611
 *   +0x0468 -> line 4612
 *   +0x0498 -> line 4614
 *   +0x04a0 -> line 4623
 *   +0x04c0 -> line 4626
 *   +0x04c4 -> line 4624
 *   +0x04c8 -> line 4629
 *   +0x04cc -> line 4626
 *   +0x04d0 -> line 4630
 *   +0x04d4 -> line 4624
 *   +0x04d8 -> line 4627
 *   +0x04e4 -> line 4626
 *   +0x04f4 -> line 4627
 *   +0x04f8 -> line 4626
 *   +0x04fc -> line 4627
 *   +0x0510 -> line 4635
 *   +0x0518 -> line 4633
 *   +0x051c -> line 4637
 *   +0x0520 -> line 4633
 *   +0x0524 -> line 4637
 *   +0x0528 -> line 4633
 *   +0x0534 -> line 4634
 *   +0x0548 -> line 4635
 *   +0x056c -> line 4636
 *   +0x0578 -> line 4633
 *   +0x0580 -> line 4636
 *   +0x058c -> line 4634
 *   +0x0594 -> line 4636
 *   +0x05a4 -> line 4635
 *   +0x05b8 -> line 4636
 *   +0x05c8 -> line 4633
 *   +0x05d0 -> line 4636
 *   +0x05dc -> line 4634
 *   +0x05e4 -> line 4636
 *   +0x05f4 -> line 4635
 *   +0x0608 -> line 4636
 *   +0x0618 -> line 4633
 *   +0x0620 -> line 4636
 *   +0x062c -> line 4634
 *   +0x0634 -> line 4636
 *   +0x0644 -> line 4635
 *   +0x0658 -> line 4636
 *   +0x0668 -> line 4633
 *   +0x0670 -> line 4636
 *   +0x067c -> line 4634
 *   +0x0684 -> line 4636
 *   +0x0694 -> line 4635
 *   +0x06a8 -> line 4636
 *   +0x06b8 -> line 4633
 *   +0x06c0 -> line 4636
 *   +0x06cc -> line 4634
 *   +0x06d4 -> line 4636
 *   +0x06e4 -> line 4635
 *   +0x06f8 -> line 4636
 *   +0x0708 -> line 4633
 *   +0x0710 -> line 4636
 *   +0x071c -> line 4634
 *   +0x0724 -> line 4636
 *   +0x0734 -> line 4635
 *   +0x0748 -> line 4636
 *   +0x0758 -> line 4633
 *   +0x0760 -> line 4636
 *   +0x076c -> line 4634
 *   +0x0774 -> line 4636
 *   +0x0784 -> line 4635
 *   +0x0798 -> line 4636
 *   +0x07a0 -> line 4637
 *   +0x07b4 -> line 4635
 *   +0x07b8 -> line 4637
 *   +0x07bc -> line 4638
 *   +0x07c0 -> line 4637
 *   +0x07c4 -> line 4638
 *   +0x07c8 -> line 4633
 *   +0x07d0 -> line 4637
 *   +0x07dc -> line 4634
 *   +0x07e4 -> line 4637
 *   +0x07f4 -> line 4635
 *   +0x0808 -> line 4637
 *   +0x0810 -> line 4638
 *   +0x0818 -> line 4645
 *   +0x0870 -> line 4646
 *   +0x0888 -> line 4647
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void AGO3_LightExplosion::Process(void)
{
    float fParticlePercentage;
    float fAttraction;
    float fDirectionSpeed;
    float fMultiplier;
    float fValue;
    float fPercentage;
    float fTransparency;
    unsigned int i;
    AGO3_LE_SpriteData* pSpriteData;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ago\AGO3.cpp lines 4412–4521 */
/* addr: 0x001f2b70  size: 1516 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 4412
 *   +0x0004 -> line 4420
 *   +0x0008 -> line 4412
 *   +0x0024 -> line 4420
 *   +0x0050 -> line 4422
 *   +0x005c -> line 4423
 *   +0x0064 -> line 4425
 *   +0x0068 -> line 4434
 *   +0x006c -> line 4430
 *   +0x0070 -> line 4434
 *   +0x0078 -> line 4425
 *   +0x007c -> line 4426
 *   +0x0084 -> line 4427
 *   +0x008c -> line 4429
 *   +0x0090 -> line 4430
 *   +0x0094 -> line 4434
 *   +0x00fc -> line 4435
 *   +0x0104 -> line 4434
 *   +0x0108 -> line 4435
 *   +0x0110 -> line 4437
 *   +0x0114 -> line 4435
 *   +0x0128 -> line 4436
 *   +0x012c -> line 4458
 *   +0x0130 -> line 4440
 *   +0x0134 -> line 4458
 *   +0x0138 -> line 4444
 *   +0x013c -> line 4440
 *   +0x0140 -> line 4444
 *   +0x0148 -> line 4468
 *   +0x014c -> line 4440
 *   +0x0150 -> line 4446
 *   +0x015c -> line 4456
 *   +0x0160 -> line 4475
 *   +0x016c -> line 4441
 *   +0x0178 -> line 4440
 *   +0x017c -> line 4442
 *   +0x01bc -> line 4443
 *   +0x01f4 -> line 4444
 *   +0x01f8 -> line 4446
 *   +0x01fc -> line 4443
 *   +0x0200 -> line 4446
 *   +0x020c -> line 4445
 *   +0x0210 -> line 4446
 *   +0x0214 -> line 4447
 *   +0x0218 -> line 4446
 *   +0x021c -> line 4447
 *   +0x0220 -> line 4446
 *   +0x0224 -> line 4447
 *   +0x0228 -> line 4448
 *   +0x022c -> line 4447
 *   +0x0234 -> line 4448
 *   +0x023c -> line 4446
 *   +0x0240 -> line 4451
 *   +0x0244 -> line 4448
 *   +0x024c -> line 4449
 *   +0x0250 -> line 4448
 *   +0x0254 -> line 4449
 *   +0x0258 -> line 4448
 *   +0x025c -> line 4449
 *   +0x0268 -> line 4450
 *   +0x0274 -> line 4451
 *   +0x027c -> line 4450
 *   +0x0280 -> line 4451
 *   +0x0288 -> line 4452
 *   +0x0294 -> line 4453
 *   +0x02b0 -> line 4456
 *   +0x02c0 -> line 4458
 *   +0x02d0 -> line 4459
 *   +0x02d8 -> line 4460
 *   +0x02e4 -> line 4461
 *   +0x02f0 -> line 4462
 *   +0x0300 -> line 4463
 *   +0x0310 -> line 4464
 *   +0x0320 -> line 4476
 *   +0x0324 -> line 4467
 *   +0x0328 -> line 4476
 *   +0x032c -> line 4474
 *   +0x0330 -> line 4467
 *   +0x0334 -> line 4468
 *   +0x0338 -> line 4469
 *   +0x033c -> line 4470
 *   +0x0340 -> line 4475
 *   +0x0344 -> line 4470
 *   +0x0348 -> line 4471
 *   +0x0350 -> line 4472
 *   +0x0358 -> line 4476
 *   +0x0360 -> line 4480
 *   +0x0374 -> line 4481
 *   +0x0378 -> line 4480
 *   +0x0384 -> line 4502
 *   +0x0394 -> line 4488
 *   +0x03a0 -> line 4500
 *   +0x03a4 -> line 4490
 *   +0x03ac -> line 4511
 *   +0x03b0 -> line 4490
 *   +0x03b4 -> line 4511
 *   +0x03b8 -> line 4484
 *   +0x03c4 -> line 4485
 *   +0x03d0 -> line 4484
 *   +0x03d4 -> line 4486
 *   +0x0414 -> line 4487
 *   +0x044c -> line 4488
 *   +0x0450 -> line 4490
 *   +0x0454 -> line 4487
 *   +0x0458 -> line 4490
 *   +0x0464 -> line 4489
 *   +0x0468 -> line 4490
 *   +0x046c -> line 4491
 *   +0x0470 -> line 4490
 *   +0x0474 -> line 4491
 *   +0x0478 -> line 4490
 *   +0x047c -> line 4491
 *   +0x0480 -> line 4492
 *   +0x0484 -> line 4491
 *   +0x048c -> line 4492
 *   +0x0494 -> line 4490
 *   +0x0498 -> line 4495
 *   +0x049c -> line 4492
 *   +0x04a4 -> line 4493
 *   +0x04a8 -> line 4492
 *   +0x04ac -> line 4493
 *   +0x04b0 -> line 4492
 *   +0x04b4 -> line 4493
 *   +0x04c0 -> line 4494
 *   +0x04cc -> line 4495
 *   +0x04d4 -> line 4494
 *   +0x04d8 -> line 4495
 *   +0x04e0 -> line 4496
 *   +0x04ec -> line 4497
 *   +0x0508 -> line 4500
 *   +0x0518 -> line 4502
 *   +0x052c -> line 4503
 *   +0x0534 -> line 4504
 *   +0x0540 -> line 4505
 *   +0x054c -> line 4506
 *   +0x055c -> line 4507
 *   +0x056c -> line 4508
 *   +0x057c -> line 4509
 *   +0x0580 -> line 4519
 *   +0x0584 -> line 4511
 *   +0x0588 -> line 4520
 *   +0x058c -> line 4519
 *   +0x0590 -> line 4520
 *   +0x0594 -> line 4518
 *   +0x0598 -> line 4519
 *   +0x059c -> line 4511
 *   +0x05a4 -> line 4512
 *   +0x05a8 -> line 4513
 *   +0x05ac -> line 4514
 *   +0x05b4 -> line 4515
 *   +0x05bc -> line 4516
 *   +0x05c4 -> line 4519
 *   +0x05c8 -> line 4520
 *   +0x05d0 -> line 4521
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void AGO3_LightExplosion::Init(MTH3D_tdstVector_* p_stPosition, MTH3D_tdstVector_* p_stDirection, GLI_tdstMaterial_* pMat1, float fSize)
{
    float fNorm;
    float fSpriteAngle;
    float s2;
    float c2;
    float s1;
    float c1;
    float fi;
    float fAnglez;
    float fAnglex;
    unsigned int i;
    AGO3_LE_SpriteData* pSpriteData;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ago\AGO3.cpp lines 4218–4238 */
/* addr: 0x001f3160  size: 180 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 4218
 *   +0x0020 -> line 4223
 *   +0x002c -> line 4225
 *   +0x003c -> line 4227
 *   +0x007c -> line 4236
 *   +0x0080 -> line 4237
 *   +0x0098 -> line 4238
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void AGO3_SphericalRadiance::Display(GLD_tdstViewportAttributes_* hVp)
{
    unsigned int i;
    AGO3_SR_SpriteData* pstSprite;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ago\AGO3.cpp lines 4026–4214 */
/* addr: 0x001f3220  size: 1980 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 4026
 *   +0x0004 -> line 4049
 *   +0x0008 -> line 4026
 *   +0x0048 -> line 4049
 *   +0x0054 -> line 4054
 *   +0x005c -> line 4056
 *   +0x0060 -> line 4054
 *   +0x0068 -> line 4056
 *   +0x007c -> line 4058
 *   +0x0084 -> line 4059
 *   +0x0090 -> line 4061
 *   +0x0098 -> line 4066
 *   +0x00a4 -> line 4068
 *   +0x00b8 -> line 4070
 *   +0x00bc -> line 4074
 *   +0x00c0 -> line 4076
 *   +0x00c4 -> line 4074
 *   +0x00d4 -> line 4081
 *   +0x00d8 -> line 4085
 *   +0x00dc -> line 4078
 *   +0x00e4 -> line 4085
 *   +0x00e8 -> line 4078
 *   +0x00ec -> line 4085
 *   +0x00f0 -> line 4078
 *   +0x0120 -> line 4080
 *   +0x012c -> line 4081
 *   +0x013c -> line 4082
 *   +0x014c -> line 4083
 *   +0x0150 -> line 4084
 *   +0x015c -> line 4085
 *   +0x0168 -> line 4086
 *   +0x01bc -> line 4088
 *   +0x01c0 -> line 4090
 *   +0x01c8 -> line 4091
 *   +0x01cc -> line 4090
 *   +0x01d0 -> line 4091
 *   +0x01d4 -> line 4090
 *   +0x01ec -> line 4091
 *   +0x01f4 -> line 4092
 *   +0x01f8 -> line 4098
 *   +0x0214 -> line 4101
 *   +0x021c -> line 4105
 *   +0x0228 -> line 4114
 *   +0x022c -> line 4105
 *   +0x0230 -> line 4115
 *   +0x023c -> line 4120
 *   +0x024c -> line 4121
 *   +0x0250 -> line 4120
 *   +0x0254 -> line 4121
 *   +0x0258 -> line 4120
 *   +0x025c -> line 4121
 *   +0x0264 -> line 4120
 *   +0x0268 -> line 4125
 *   +0x026c -> line 4121
 *   +0x027c -> line 4125
 *   +0x0280 -> line 4121
 *   +0x0284 -> line 4125
 *   +0x02a0 -> line 4129
 *   +0x02a4 -> line 4125
 *   +0x02a8 -> line 4129
 *   +0x02ac -> line 4125
 *   +0x02b8 -> line 4126
 *   +0x02bc -> line 4125
 *   +0x02c0 -> line 4126
 *   +0x02c4 -> line 4125
 *   +0x02c8 -> line 4126
 *   +0x02d4 -> line 4133
 *   +0x02d8 -> line 4126
 *   +0x02dc -> line 4125
 *   +0x02e0 -> line 4133
 *   +0x02e4 -> line 4126
 *   +0x02e8 -> line 4125
 *   +0x02f0 -> line 4129
 *   +0x02f4 -> line 4130
 *   +0x02f8 -> line 4129
 *   +0x02fc -> line 4133
 *   +0x0330 -> line 4134
 *   +0x036c -> line 4135
 *   +0x03a8 -> line 4136
 *   +0x03e4 -> line 4137
 *   +0x0420 -> line 4138
 *   +0x0458 -> line 4141
 *   +0x0464 -> line 4149
 *   +0x046c -> line 4141
 *   +0x0470 -> line 4164
 *   +0x0478 -> line 4177
 *   +0x047c -> line 4149
 *   +0x0480 -> line 4142
 *   +0x0484 -> line 4149
 *   +0x048c -> line 4164
 *   +0x0490 -> line 4151
 *   +0x0494 -> line 4149
 *   +0x0498 -> line 4138
 *   +0x049c -> line 4149
 *   +0x04a0 -> line 4150
 *   +0x04a4 -> line 4149
 *   +0x04a8 -> line 4150
 *   +0x04ac -> line 4149
 *   +0x04b0 -> line 4150
 *   +0x04b8 -> line 4145
 *   +0x04bc -> line 4143
 *   +0x04c0 -> line 4144
 *   +0x04c4 -> line 4153
 *   +0x04c8 -> line 4155
 *   +0x04cc -> line 4150
 *   +0x04d0 -> line 4151
 *   +0x04d4 -> line 4149
 *   +0x04d8 -> line 4151
 *   +0x04dc -> line 4146
 *   +0x04e0 -> line 4151
 *   +0x04e4 -> line 4157
 *   +0x04e8 -> line 4151
 *   +0x04f0 -> line 4152
 *   +0x0500 -> line 4159
 *   +0x0504 -> line 4151
 *   +0x0508 -> line 4157
 *   +0x050c -> line 4164
 *   +0x0510 -> line 4152
 *   +0x0514 -> line 4153
 *   +0x0518 -> line 4164
 *   +0x0524 -> line 4153
 *   +0x0528 -> line 4165
 *   +0x052c -> line 4153
 *   +0x0530 -> line 4165
 *   +0x0534 -> line 4154
 *   +0x053c -> line 4153
 *   +0x0540 -> line 4154
 *   +0x0544 -> line 4153
 *   +0x0548 -> line 4154
 *   +0x054c -> line 4165
 *   +0x0558 -> line 4166
 *   +0x0560 -> line 4154
 *   +0x0564 -> line 4155
 *   +0x0568 -> line 4153
 *   +0x056c -> line 4155
 *   +0x0570 -> line 4166
 *   +0x0574 -> line 4155
 *   +0x057c -> line 4156
 *   +0x0580 -> line 4155
 *   +0x0584 -> line 4156
 *   +0x0588 -> line 4155
 *   +0x058c -> line 4156
 *   +0x0598 -> line 4159
 *   +0x059c -> line 4169
 *   +0x05ac -> line 4157
 *   +0x05b0 -> line 4170
 *   +0x05b4 -> line 4157
 *   +0x05b8 -> line 4170
 *   +0x05bc -> line 4158
 *   +0x05c4 -> line 4157
 *   +0x05c8 -> line 4158
 *   +0x05cc -> line 4157
 *   +0x05d0 -> line 4158
 *   +0x05d8 -> line 4170
 *   +0x05e4 -> line 4171
 *   +0x05ec -> line 4157
 *   +0x05f0 -> line 4159
 *   +0x05f4 -> line 4171
 *   +0x05f8 -> line 4159
 *   +0x0600 -> line 4160
 *   +0x0604 -> line 4159
 *   +0x0608 -> line 4160
 *   +0x060c -> line 4159
 *   +0x0610 -> line 4160
 *   +0x061c -> line 4173
 *   +0x062c -> line 4174
 *   +0x0640 -> line 4175
 *   +0x0648 -> line 4177
 *   +0x0650 -> line 4179
 *   +0x0658 -> line 4180
 *   +0x0664 -> line 4181
 *   +0x0674 -> line 4182
 *   +0x0678 -> line 4210
 *   +0x0680 -> line 4213
 *   +0x0684 -> line 4189
 *   +0x0688 -> line 4210
 *   +0x068c -> line 4189
 *   +0x069c -> line 4190
 *   +0x06b0 -> line 4191
 *   +0x06c4 -> line 4192
 *   +0x06d8 -> line 4193
 *   +0x06ec -> line 4194
 *   +0x0700 -> line 4197
 *   +0x0708 -> line 4203
 *   +0x070c -> line 4197
 *   +0x0710 -> line 4199
 *   +0x0714 -> line 4203
 *   +0x071c -> line 4204
 *   +0x0720 -> line 4200
 *   +0x0724 -> line 4204
 *   +0x072c -> line 4205
 *   +0x0730 -> line 4201
 *   +0x0734 -> line 4205
 *   +0x073c -> line 4206
 *   +0x0748 -> line 4207
 *   +0x0754 -> line 4208
 *   +0x0760 -> line 4212
 *   +0x0764 -> line 4213
 *   +0x0778 -> line 4214
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void AGO3_SphericalRadiance::Process(void)
{
    unsigned int ulIterator;
    unsigned int ulUV;
    float fValue;
    float fInternalDistance;
    AGO3_SR_SpriteData* pstSprite;
    float fi;
    float basey;
    float basex;
    float time;
    float ss2;
    float cc2;
    float ss1;
    float cc1;
    float s4;
    float c4;
    float s3;
    float c3;
    float s2;
    float c2;
    float s1;
    float c1;
    float anglez3;
    float anglex3;
    float anglez2;
    float anglex2;
    float anglez;
    float anglex;
    unsigned int i;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ago\AGO3.cpp lines 3950–3999 */
/* addr: 0x001f39e0  size: 316 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 3950
 *   +0x0018 -> line 3953
 *   +0x0020 -> line 3954
 *   +0x002c -> line 3955
 *   +0x0034 -> line 3957
 *   +0x0040 -> line 3960
 *   +0x0044 -> line 3961
 *   +0x0050 -> line 3960
 *   +0x0054 -> line 3961
 *   +0x0070 -> line 3964
 *   +0x007c -> line 3965
 *   +0x0088 -> line 3968
 *   +0x0090 -> line 3969
 *   +0x0098 -> line 3971
 *   +0x009c -> line 3972
 *   +0x00a0 -> line 3975
 *   +0x00a4 -> line 3976
 *   +0x00a8 -> line 3979
 *   +0x00ac -> line 3982
 *   +0x00b8 -> line 3986
 *   +0x00bc -> line 3982
 *   +0x00c4 -> line 3984
 *   +0x00c8 -> line 3986
 *   +0x00d8 -> line 3987
 *   +0x00e0 -> line 3988
 *   +0x00f8 -> line 3989
 *   +0x0104 -> line 3990
 *   +0x0114 -> line 3991
 *   +0x0120 -> line 3993
 *   +0x0128 -> line 3994
 *   +0x012c -> line 3997
 *   +0x0130 -> line 3999
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
AGO3_SphericalRadiance::AGO3_SphericalRadiance(void)
{
    float fAcceleration;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ago\AGO3.cpp lines 3828–3840 */
/* addr: 0x001f3b20  size: 164 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 3828
 *   +0x0020 -> line 3829
 *   +0x0024 -> line 3834
 *   +0x0028 -> line 3829
 *   +0x0038 -> line 3834
 *   +0x0040 -> line 3836
 *   +0x0058 -> line 3837
 *   +0x005c -> line 3839
 *   +0x0060 -> line 3837
 *   +0x0064 -> line 3838
 *   +0x0078 -> line 3839
 *   +0x0088 -> line 3840
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void AGO3_SwirlingBubbles::Display(GLD_tdstViewportAttributes_* hVp)
{
    unsigned int ulBubble2;
    unsigned int ulBubble;
    AGO3_SB_SpriteData* pSpriteData;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ago\AGO3.cpp lines 3613–3824 */
/* addr: 0x001f3bd0  size: 1816 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 3613
 *   +0x0050 -> line 3614
 *   +0x005c -> line 3624
 *   +0x0068 -> line 3626
 *   +0x006c -> line 3630
 *   +0x0070 -> line 3624
 *   +0x0074 -> line 3627
 *   +0x0078 -> line 3628
 *   +0x007c -> line 3630
 *   +0x0084 -> line 3635
 *   +0x0094 -> line 3636
 *   +0x009c -> line 3635
 *   +0x00b4 -> line 3636
 *   +0x00ec -> line 3638
 *   +0x00f4 -> line 3640
 *   +0x00fc -> line 3639
 *   +0x0104 -> line 3637
 *   +0x0108 -> line 3638
 *   +0x010c -> line 3640
 *   +0x0110 -> line 3639
 *   +0x0114 -> line 3638
 *   +0x0118 -> line 3640
 *   +0x011c -> line 3641
 *   +0x0120 -> line 3639
 *   +0x0124 -> line 3641
 *   +0x0128 -> line 3642
 *   +0x0130 -> line 3643
 *   +0x0134 -> line 3644
 *   +0x013c -> line 3648
 *   +0x0140 -> line 3647
 *   +0x0144 -> line 3648
 *   +0x0148 -> line 3649
 *   +0x0150 -> line 3650
 *   +0x0158 -> line 3657
 *   +0x015c -> line 3656
 *   +0x0160 -> line 3657
 *   +0x0170 -> line 3659
 *   +0x0180 -> line 3660
 *   +0x018c -> line 3664
 *   +0x0198 -> line 3669
 *   +0x019c -> line 3670
 *   +0x01a8 -> line 3669
 *   +0x01ac -> line 3670
 *   +0x01d0 -> line 3678
 *   +0x01d4 -> line 3670
 *   +0x01d8 -> line 3711
 *   +0x01dc -> line 3678
 *   +0x01e0 -> line 3676
 *   +0x01e4 -> line 3689
 *   +0x01ec -> line 3695
 *   +0x01f0 -> line 3670
 *   +0x01f4 -> line 3695
 *   +0x01f8 -> line 3670
 *   +0x01fc -> line 3689
 *   +0x0208 -> line 3676
 *   +0x0210 -> line 3695
 *   +0x021c -> line 3689
 *   +0x0224 -> line 3676
 *   +0x0228 -> line 3689
 *   +0x022c -> line 3677
 *   +0x0234 -> line 3689
 *   +0x0238 -> line 3677
 *   +0x023c -> line 3689
 *   +0x0240 -> line 3690
 *   +0x0244 -> line 3689
 *   +0x0248 -> line 3690
 *   +0x0250 -> line 3678
 *   +0x0254 -> line 3690
 *   +0x0258 -> line 3678
 *   +0x025c -> line 3679
 *   +0x0268 -> line 3695
 *   +0x0270 -> line 3690
 *   +0x0274 -> line 3695
 *   +0x0278 -> line 3689
 *   +0x027c -> line 3695
 *   +0x0288 -> line 3696
 *   +0x0298 -> line 3697
 *   +0x02a8 -> line 3696
 *   +0x02ac -> line 3697
 *   +0x02b0 -> line 3698
 *   +0x02b4 -> line 3699
 *   +0x02b8 -> line 3700
 *   +0x02bc -> line 3711
 *   +0x02c0 -> line 3713
 *   +0x02c4 -> line 3716
 *   +0x02c8 -> line 3717
 *   +0x02cc -> line 3718
 *   +0x02d0 -> line 3713
 *   +0x02e0 -> line 3716
 *   +0x02e4 -> line 3713
 *   +0x02e8 -> line 3716
 *   +0x02ec -> line 3717
 *   +0x02f8 -> line 3718
 *   +0x0304 -> line 3720
 *   +0x0310 -> line 3721
 *   +0x031c -> line 3722
 *   +0x0324 -> line 3723
 *   +0x0338 -> line 3724
 *   +0x033c -> line 3723
 *   +0x0344 -> line 3728
 *   +0x0348 -> line 3723
 *   +0x035c -> line 3725
 *   +0x0360 -> line 3723
 *   +0x0380 -> line 3724
 *   +0x0384 -> line 3725
 *   +0x0388 -> line 3726
 *   +0x0398 -> line 3727
 *   +0x03a0 -> line 3728
 *   +0x03a8 -> line 3731
 *   +0x03b0 -> line 3733
 *   +0x03b4 -> line 3736
 *   +0x03b8 -> line 3737
 *   +0x03bc -> line 3733
 *   +0x03cc -> line 3736
 *   +0x03d0 -> line 3733
 *   +0x03d4 -> line 3736
 *   +0x03d8 -> line 3738
 *   +0x03dc -> line 3737
 *   +0x03e0 -> line 3738
 *   +0x03e4 -> line 3740
 *   +0x03f0 -> line 3741
 *   +0x03fc -> line 3742
 *   +0x0404 -> line 3743
 *   +0x0428 -> line 3744
 *   +0x042c -> line 3743
 *   +0x0430 -> line 3748
 *   +0x0434 -> line 3745
 *   +0x0438 -> line 3743
 *   +0x0460 -> line 3744
 *   +0x0464 -> line 3745
 *   +0x0468 -> line 3746
 *   +0x0478 -> line 3747
 *   +0x0480 -> line 3748
 *   +0x0488 -> line 3750
 *   +0x0498 -> line 3752
 *   +0x04a4 -> line 3753
 *   +0x04b0 -> line 3754
 *   +0x04bc -> line 3755
 *   +0x04c0 -> line 3757
 *   +0x04cc -> line 3759
 *   +0x04d0 -> line 3761
 *   +0x04d8 -> line 3764
 *   +0x04e4 -> line 3767
 *   +0x04f4 -> line 3770
 *   +0x04fc -> line 3775
 *   +0x0500 -> line 3782
 *   +0x0508 -> line 3775
 *   +0x0518 -> line 3782
 *   +0x0520 -> line 3787
 *   +0x0528 -> line 3788
 *   +0x052c -> line 3787
 *   +0x0530 -> line 3788
 *   +0x0540 -> line 3791
 *   +0x0544 -> line 3793
 *   +0x054c -> line 3794
 *   +0x055c -> line 3791
 *   +0x0560 -> line 3794
 *   +0x0564 -> line 3791
 *   +0x056c -> line 3792
 *   +0x0574 -> line 3795
 *   +0x057c -> line 3796
 *   +0x0580 -> line 3797
 *   +0x058c -> line 3798
 *   +0x059c -> line 3799
 *   +0x05a0 -> line 3807
 *   +0x05a4 -> line 3808
 *   +0x05f0 -> line 3809
 *   +0x0604 -> line 3810
 *   +0x0608 -> line 3809
 *   +0x0614 -> line 3810
 *   +0x0618 -> line 3809
 *   +0x061c -> line 3810
 *   +0x0620 -> line 3813
 *   +0x0628 -> line 3814
 *   +0x062c -> line 3809
 *   +0x0630 -> line 3814
 *   +0x0638 -> line 3809
 *   +0x063c -> line 3814
 *   +0x0640 -> line 3809
 *   +0x0650 -> line 3810
 *   +0x0654 -> line 3809
 *   +0x0658 -> line 3810
 *   +0x065c -> line 3809
 *   +0x0664 -> line 3810
 *   +0x0668 -> line 3809
 *   +0x0670 -> line 3810
 *   +0x0698 -> line 3814
 *   +0x069c -> line 3815
 *   +0x06b0 -> line 3821
 *   +0x06c0 -> line 3823
 *   +0x06c4 -> line 3824
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void AGO3_SwirlingBubbles::Process(void)
{
    float fBackwardMultiplier;
    float fDelay;
    unsigned int ulNbBubbles;
    unsigned int ulBubble2;
    unsigned int ulBubble;
    AGO3_SB_SpriteData* pSpriteData;
    MTH3D_tdstVector_* pV1;
    float fSin;
    float fCos;
    float fNorm1;
    unsigned int ulNbNewBubbles;
    float fInvNbRaws;
    float fAngle;
    unsigned int ulNbRaws;
    MTH3D_tdstVector_ stPosition;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ago\AGO3.cpp lines 3467–3508 */
/* addr: 0x001f42f0  size: 328 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 3467
 *   +0x0010 -> line 3478
 *   +0x0014 -> line 3467
 *   +0x0028 -> line 3487
 *   +0x002c -> line 3467
 *   +0x0030 -> line 3489
 *   +0x0034 -> line 3467
 *   +0x0038 -> line 3488
 *   +0x003c -> line 3467
 *   +0x0040 -> line 3489
 *   +0x0044 -> line 3467
 *   +0x0048 -> line 3476
 *   +0x004c -> line 3488
 *   +0x0050 -> line 3476
 *   +0x0054 -> line 3477
 *   +0x005c -> line 3478
 *   +0x0064 -> line 3479
 *   +0x0070 -> line 3489
 *   +0x0078 -> line 3491
 *   +0x0084 -> line 3492
 *   +0x0088 -> line 3491
 *   +0x00a4 -> line 3492
 *   +0x00a8 -> line 3494
 *   +0x00b8 -> line 3495
 *   +0x00c0 -> line 3496
 *   +0x00e4 -> line 3497
 *   +0x00e8 -> line 3500
 *   +0x00ec -> line 3498
 *   +0x00f0 -> line 3500
 *   +0x00f4 -> line 3499
 *   +0x00fc -> line 3500
 *   +0x0104 -> line 3501
 *   +0x0108 -> line 3502
 *   +0x010c -> line 3501
 *   +0x0110 -> line 3502
 *   +0x0118 -> line 3508
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void AGO3_CanRipple::Display(GLD_tdstViewportAttributes_* hVp)
{
    float fFirstPosition;
    float fWay;
    unsigned int ulNumRipples;
    unsigned int ulSprite2;
    MTH3D_tdstVector_ stposition;
    unsigned int ulSprite;
    AGO3_CR_SpriteData* pSpriteData;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ago\AGO3.cpp lines 3386–3463 */
/* addr: 0x001f4440  size: 628 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 3386
 *   +0x0004 -> line 3389
 *   +0x0008 -> line 3386
 *   +0x000c -> line 3389
 *   +0x0014 -> line 3386
 *   +0x0018 -> line 3389
 *   +0x002c -> line 3392
 *   +0x0030 -> line 3394
 *   +0x0034 -> line 3392
 *   +0x0048 -> line 3394
 *   +0x0050 -> line 3396
 *   +0x0058 -> line 3400
 *   +0x0060 -> line 3396
 *   +0x0064 -> line 3400
 *   +0x00d0 -> line 3401
 *   +0x00dc -> line 3402
 *   +0x00e0 -> line 3407
 *   +0x00ec -> line 3408
 *   +0x00f0 -> line 3407
 *   +0x00f4 -> line 3411
 *   +0x00f8 -> line 3407
 *   +0x00fc -> line 3415
 *   +0x0100 -> line 3407
 *   +0x0104 -> line 3408
 *   +0x0108 -> line 3409
 *   +0x0110 -> line 3407
 *   +0x0114 -> line 3408
 *   +0x0118 -> line 3409
 *   +0x011c -> line 3408
 *   +0x0120 -> line 3412
 *   +0x012c -> line 3408
 *   +0x0130 -> line 3409
 *   +0x0134 -> line 3408
 *   +0x0138 -> line 3422
 *   +0x013c -> line 3420
 *   +0x0140 -> line 3422
 *   +0x014c -> line 3417
 *   +0x0158 -> line 3419
 *   +0x0160 -> line 3420
 *   +0x0168 -> line 3422
 *   +0x016c -> line 3423
 *   +0x0170 -> line 3425
 *   +0x017c -> line 3426
 *   +0x0180 -> line 3436
 *   +0x0184 -> line 3429
 *   +0x0188 -> line 3437
 *   +0x018c -> line 3439
 *   +0x0190 -> line 3438
 *   +0x0194 -> line 3434
 *   +0x0198 -> line 3439
 *   +0x019c -> line 3438
 *   +0x01a0 -> line 3429
 *   +0x01a8 -> line 3430
 *   +0x01ac -> line 3433
 *   +0x01b0 -> line 3438
 *   +0x01b4 -> line 3439
 *   +0x01bc -> line 3441
 *   +0x01c4 -> line 3443
 *   +0x01dc -> line 3445
 *   +0x01ec -> line 3446
 *   +0x01f0 -> line 3448
 *   +0x01f4 -> line 3446
 *   +0x01fc -> line 3448
 *   +0x0204 -> line 3451
 *   +0x0208 -> line 3453
 *   +0x0210 -> line 3454
 *   +0x0214 -> line 3453
 *   +0x0218 -> line 3454
 *   +0x021c -> line 3455
 *   +0x0220 -> line 3451
 *   +0x0224 -> line 3453
 *   +0x0234 -> line 3454
 *   +0x023c -> line 3455
 *   +0x0258 -> line 3457
 *   +0x0260 -> line 3459
 *   +0x0264 -> line 3460
 *   +0x026c -> line 3463
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void AGO3_CanRipple::Process(void)
{
    int bGenerateNewSprite;
    unsigned int ulSpriteLimit;
    unsigned int ulSprite2;
    float fMultiplier;
    float fPercentage;
    float fPosition;
    float fTransparency;
    unsigned int ulSprite;
    AGO3_CR_SpriteData* pSpriteData;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ago\AGO3.cpp lines 3332–3370 */
/* addr: 0x001f46c0  size: 344 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 3332
 *   +0x0004 -> line 3335
 *   +0x0008 -> line 3332
 *   +0x0020 -> line 3335
 *   +0x002c -> line 3338
 *   +0x0030 -> line 3335
 *   +0x0044 -> line 3338
 *   +0x0048 -> line 3335
 *   +0x0058 -> line 3338
 *   +0x0060 -> line 3341
 *   +0x00a0 -> line 3349
 *   +0x00b8 -> line 3351
 *   +0x00bc -> line 3352
 *   +0x00c0 -> line 3353
 *   +0x00c8 -> line 3354
 *   +0x00e4 -> line 3356
 *   +0x00e8 -> line 3357
 *   +0x00f0 -> line 3358
 *   +0x0108 -> line 3363
 *   +0x010c -> line 3364
 *   +0x0110 -> line 3363
 *   +0x011c -> line 3366
 *   +0x012c -> line 3368
 *   +0x0134 -> line 3367
 *   +0x0138 -> line 3368
 *   +0x0140 -> line 3370
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void AGO3_CanRipple::Init(MTH3D_tdstVector_* p_stStartingPosition, MTH3D_tdstVector_* p_stDirection, GLI_tdstMaterial_* pMat1, float fStartStop)
{
    unsigned int ulSprite;
    AGO3_CR_SpriteData* pSpriteData;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ago\AGO3.cpp lines 3205–3236 */
/* addr: 0x001f4820  size: 240 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 3205
 *   +0x0020 -> line 3212
 *   +0x002c -> line 3216
 *   +0x0030 -> line 3220
 *   +0x0034 -> line 3222
 *   +0x0038 -> line 3216
 *   +0x003c -> line 3217
 *   +0x0044 -> line 3219
 *   +0x004c -> line 3224
 *   +0x0050 -> line 3225
 *   +0x0058 -> line 3224
 *   +0x005c -> line 3225
 *   +0x0070 -> line 3227
 *   +0x0078 -> line 3228
 *   +0x009c -> line 3229
 *   +0x00a0 -> line 3230
 *   +0x00a8 -> line 3232
 *   +0x00ac -> line 3230
 *   +0x00b0 -> line 3231
 *   +0x00b4 -> line 3232
 *   +0x00c0 -> line 3233
 *   +0x00c8 -> line 3234
 *   +0x00d0 -> line 3236
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void AGO3_HurricaneUpper::Display(GLD_tdstViewportAttributes_* hVp)
{
    AGO3_HU_SpriteData* pSpriteData;
    float fAngle;
    unsigned int ulLayer;
    MTH3D_tdstVector_ Position;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ago\AGO3.cpp lines 3083–3201 */
/* addr: 0x001f4910  size: 980 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 3083
 *   +0x0008 -> line 3086
 *   +0x0014 -> line 3091
 *   +0x0018 -> line 3093
 *   +0x001c -> line 3091
 *   +0x0020 -> line 3093
 *   +0x0024 -> line 3088
 *   +0x0028 -> line 3093
 *   +0x002c -> line 3091
 *   +0x0030 -> line 3088
 *   +0x0038 -> line 3091
 *   +0x003c -> line 3093
 *   +0x0048 -> line 3094
 *   +0x0058 -> line 3095
 *   +0x005c -> line 3098
 *   +0x0060 -> line 3096
 *   +0x0070 -> line 3099
 *   +0x0080 -> line 3101
 *   +0x0088 -> line 3107
 *   +0x00a4 -> line 3108
 *   +0x00b4 -> line 3110
 *   +0x00c4 -> line 3112
 *   +0x00c8 -> line 3113
 *   +0x00cc -> line 3115
 *   +0x00d4 -> line 3116
 *   +0x00e0 -> line 3118
 *   +0x00f0 -> line 3119
 *   +0x00f8 -> line 3118
 *   +0x0104 -> line 3119
 *   +0x0114 -> line 3120
 *   +0x0118 -> line 3123
 *   +0x0124 -> line 3131
 *   +0x0128 -> line 3123
 *   +0x0138 -> line 3128
 *   +0x013c -> line 3123
 *   +0x0150 -> line 3127
 *   +0x0154 -> line 3128
 *   +0x0158 -> line 3152
 *   +0x015c -> line 3137
 *   +0x0160 -> line 3152
 *   +0x0164 -> line 3136
 *   +0x0168 -> line 3152
 *   +0x016c -> line 3136
 *   +0x0170 -> line 3137
 *   +0x0178 -> line 3157
 *   +0x017c -> line 3154
 *   +0x0180 -> line 3157
 *   +0x0188 -> line 3143
 *   +0x018c -> line 3133
 *   +0x01a0 -> line 3136
 *   +0x01c0 -> line 3137
 *   +0x01e4 -> line 3139
 *   +0x01fc -> line 3142
 *   +0x0200 -> line 3143
 *   +0x0210 -> line 3144
 *   +0x0214 -> line 3145
 *   +0x0218 -> line 3146
 *   +0x022c -> line 3147
 *   +0x0230 -> line 3148
 *   +0x0234 -> line 3149
 *   +0x0238 -> line 3153
 *   +0x024c -> line 3154
 *   +0x0254 -> line 3155
 *   +0x0258 -> line 3156
 *   +0x0260 -> line 3158
 *   +0x0264 -> line 3156
 *   +0x0268 -> line 3158
 *   +0x026c -> line 3156
 *   +0x0270 -> line 3157
 *   +0x0278 -> line 3158
 *   +0x0280 -> line 3160
 *   +0x0288 -> line 3161
 *   +0x02ac -> line 3166
 *   +0x02b0 -> line 3170
 *   +0x02b4 -> line 3174
 *   +0x02b8 -> line 3172
 *   +0x02bc -> line 3174
 *   +0x02c0 -> line 3173
 *   +0x02c4 -> line 3177
 *   +0x02c8 -> line 3178
 *   +0x02cc -> line 3166
 *   +0x02d0 -> line 3179
 *   +0x02d4 -> line 3168
 *   +0x02d8 -> line 3170
 *   +0x02dc -> line 3173
 *   +0x02e4 -> line 3170
 *   +0x02e8 -> line 3168
 *   +0x02f4 -> line 3169
 *   +0x02f8 -> line 3172
 *   +0x02fc -> line 3169
 *   +0x0308 -> line 3172
 *   +0x030c -> line 3169
 *   +0x0310 -> line 3172
 *   +0x032c -> line 3173
 *   +0x0330 -> line 3172
 *   +0x0338 -> line 3174
 *   +0x0340 -> line 3173
 *   +0x0344 -> line 3174
 *   +0x0354 -> line 3184
 *   +0x0358 -> line 3183
 *   +0x035c -> line 3181
 *   +0x0360 -> line 3182
 *   +0x0364 -> line 3181
 *   +0x0368 -> line 3183
 *   +0x037c -> line 3184
 *   +0x0384 -> line 3185
 *   +0x0388 -> line 3186
 *   +0x0390 -> line 3187
 *   +0x0394 -> line 3186
 *   +0x039c -> line 3187
 *   +0x03a8 -> line 3190
 *   +0x03b8 -> line 3192
 *   +0x03bc -> line 3197
 *   +0x03c8 -> line 3199
 *   +0x03cc -> line 3201
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void AGO3_HurricaneUpper::Process(void)
{
    MTH3D_tdstVector_* pAdditionalVect;
    MTH3D_tdstVector_* pInitialPos;
    float* pEndTime;
    float* pTime;
    float fPercentageUntilTop;
    float fPercentageUntilDeath;
    unsigned int ulDying;
    float fOneMinusMultiplier;
    float fMultiplier2;
    float fMultiplier;
    float fPositionZ;
    AGO3_HU_SpriteData* pSpriteData;
    unsigned int ulSprite2;
    unsigned int ulSprite;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ago\AGO3.cpp lines 2974–3064 */
/* addr: 0x001f4cf0  size: 724 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 2974
 *   +0x0004 -> line 2984
 *   +0x0008 -> line 2974
 *   +0x000c -> line 2984
 *   +0x0010 -> line 2974
 *   +0x0038 -> line 2979
 *   +0x003c -> line 2974
 *   +0x0044 -> line 2979
 *   +0x0074 -> line 2981
 *   +0x007c -> line 2982
 *   +0x0084 -> line 2984
 *   +0x0090 -> line 2987
 *   +0x009c -> line 2998
 *   +0x00a4 -> line 2999
 *   +0x00b4 -> line 3000
 *   +0x00c4 -> line 3002
 *   +0x00d4 -> line 3003
 *   +0x00dc -> line 3004
 *   +0x00e8 -> line 3007
 *   +0x00f4 -> line 3008
 *   +0x0110 -> line 3010
 *   +0x0124 -> line 3011
 *   +0x0134 -> line 3013
 *   +0x0138 -> line 3018
 *   +0x014c -> line 3020
 *   +0x0154 -> line 3021
 *   +0x0160 -> line 3022
 *   +0x0168 -> line 3026
 *   +0x0178 -> line 3031
 *   +0x017c -> line 3035
 *   +0x0184 -> line 3033
 *   +0x018c -> line 3036
 *   +0x0190 -> line 3035
 *   +0x0194 -> line 3037
 *   +0x019c -> line 3033
 *   +0x01a0 -> line 3039
 *   +0x01a4 -> line 3048
 *   +0x01b0 -> line 3040
 *   +0x01b4 -> line 3042
 *   +0x01b8 -> line 3048
 *   +0x01c4 -> line 3039
 *   +0x01c8 -> line 3040
 *   +0x01d0 -> line 3041
 *   +0x01dc -> line 3042
 *   +0x01e0 -> line 3041
 *   +0x01f0 -> line 3042
 *   +0x01f8 -> line 3043
 *   +0x0200 -> line 3044
 *   +0x020c -> line 3045
 *   +0x0218 -> line 3048
 *   +0x0220 -> line 3053
 *   +0x0224 -> line 3049
 *   +0x0228 -> line 3053
 *   +0x022c -> line 3050
 *   +0x0230 -> line 3053
 *   +0x0234 -> line 3056
 *   +0x0238 -> line 3055
 *   +0x0240 -> line 3053
 *   +0x0244 -> line 3054
 *   +0x024c -> line 3056
 *   +0x0250 -> line 3054
 *   +0x0254 -> line 3056
 *   +0x025c -> line 3057
 *   +0x0264 -> line 3061
 *   +0x0280 -> line 3062
 *   +0x0284 -> line 3061
 *   +0x0294 -> line 3062
 *   +0x0298 -> line 3063
 *   +0x029c -> line 3064
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void AGO3_HurricaneUpper::Init(MTH3D_tdstVector_* pPosition, MTH3D_tdstVector_* pDirection, GLI_tdstMaterial_* pMat1)
{
    AGO3_HU_SpriteData* pSpriteData;
    float fBend;
    float fDirAngle;
    unsigned int ulLayer;
    MTH3D_tdstVector_ stVerticalDir;
    float fLength;
    float fPositionZ;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ago\AGO3.cpp lines 2951–2970 */
/* addr: 0x001f4fd0  size: 388 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 2951
 *   +0x0004 -> line 2958
 *   +0x0008 -> line 2951
 *   +0x000c -> line 2959
 *   +0x0010 -> line 2951
 *   +0x0024 -> line 2954
 *   +0x0030 -> line 2955
 *   +0x0034 -> line 2961
 *   +0x0038 -> line 2962
 *   +0x003c -> line 2961
 *   +0x0044 -> line 2963
 *   +0x0048 -> line 2961
 *   +0x004c -> line 2963
 *   +0x0050 -> line 2961
 *   +0x0054 -> line 2963
 *   +0x0058 -> line 2961
 *   +0x0064 -> line 2962
 *   +0x0074 -> line 2961
 *   +0x0078 -> line 2962
 *   +0x008c -> line 2961
 *   +0x0090 -> line 2962
 *   +0x00a4 -> line 2961
 *   +0x00a8 -> line 2962
 *   +0x00bc -> line 2961
 *   +0x00c0 -> line 2962
 *   +0x00d4 -> line 2961
 *   +0x00d8 -> line 2962
 *   +0x00ec -> line 2961
 *   +0x00f0 -> line 2962
 *   +0x0104 -> line 2961
 *   +0x0108 -> line 2962
 *   +0x0110 -> line 2963
 *   +0x0128 -> line 2962
 *   +0x012c -> line 2963
 *   +0x0134 -> line 2964
 *   +0x0138 -> line 2963
 *   +0x0148 -> line 2964
 *   +0x014c -> line 2961
 *   +0x0150 -> line 2963
 *   +0x0158 -> line 2964
 *   +0x0160 -> line 2965
 *   +0x0168 -> line 2967
 *   +0x016c -> line 2966
 *   +0x0170 -> line 2970
 *   +0x0174 -> line 2967
 *   +0x0178 -> line 2968
 *   +0x017c -> line 2970
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
AGO3_HurricaneUpper::AGO3_HurricaneUpper(void)
{
    AGO3_HU_SpriteData* pSpriteData;
    unsigned int i;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ago\AGO3.cpp lines 2836–2852 */
/* addr: 0x001f5160  size: 168 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 2836
 *   +0x0004 -> line 2839
 *   +0x0008 -> line 2836
 *   +0x0018 -> line 2839
 *   +0x001c -> line 2841
 *   +0x002c -> line 2843
 *   +0x0050 -> line 2846
 *   +0x006c -> line 2847
 *   +0x0090 -> line 2850
 *   +0x0094 -> line 2852
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void AGO3_Chain::Display(GLD_tdstViewportAttributes_* hVp)
{
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ago\AGO3.cpp lines 2770–2832 */
/* addr: 0x001f5210  size: 644 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 2770
 *   +0x000c -> line 2780
 *   +0x0010 -> line 2770
 *   +0x0038 -> line 2774
 *   +0x0048 -> line 2775
 *   +0x0058 -> line 2776
 *   +0x0068 -> line 2778
 *   +0x0088 -> line 2779
 *   +0x0090 -> line 2780
 *   +0x00a4 -> line 2782
 *   +0x00b0 -> line 2783
 *   +0x00bc -> line 2784
 *   +0x00c8 -> line 2785
 *   +0x00d4 -> line 2787
 *   +0x00e0 -> line 2791
 *   +0x00e8 -> line 2797
 *   +0x00ec -> line 2787
 *   +0x00f4 -> line 2788
 *   +0x00f8 -> line 2791
 *   +0x0110 -> line 2793
 *   +0x0124 -> line 2794
 *   +0x0138 -> line 2795
 *   +0x0148 -> line 2797
 *   +0x0150 -> line 2803
 *   +0x015c -> line 2804
 *   +0x0160 -> line 2803
 *   +0x0168 -> line 2804
 *   +0x0170 -> line 2805
 *   +0x0174 -> line 2804
 *   +0x017c -> line 2805
 *   +0x018c -> line 2807
 *   +0x01a8 -> line 2810
 *   +0x01b4 -> line 2811
 *   +0x01c4 -> line 2813
 *   +0x01d0 -> line 2814
 *   +0x01d8 -> line 2815
 *   +0x01e4 -> line 2816
 *   +0x01f0 -> line 2819
 *   +0x0208 -> line 2823
 *   +0x0210 -> line 2829
 *   +0x0218 -> line 2823
 *   +0x021c -> line 2824
 *   +0x0228 -> line 2825
 *   +0x0234 -> line 2827
 *   +0x0238 -> line 2829
 *   +0x023c -> line 2830
 *   +0x0248 -> line 2831
 *   +0x027c -> line 2832
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void AGO3_Chain::Init(MTH3D_tdstVector_* p_stStartingPosition, MTH3D_tdstVector_* p_stEndingPosition, GLI_tdstMaterial_* pMat1, float fLinkType)
{
    float fSize;
    float fInvSize;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ago\AGO3.cpp lines 2655–2701 */
/* addr: 0x001f54a0  size: 580 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 2655
 *   +0x0004 -> line 2660
 *   +0x0008 -> line 2655
 *   +0x000c -> line 2660
 *   +0x0018 -> line 2663
 *   +0x0034 -> line 2665
 *   +0x0038 -> line 2667
 *   +0x003c -> line 2665
 *   +0x0040 -> line 2666
 *   +0x0048 -> line 2667
 *   +0x0050 -> line 2669
 *   +0x0058 -> line 2674
 *   +0x0064 -> line 2676
 *   +0x0078 -> line 2677
 *   +0x007c -> line 2680
 *   +0x0080 -> line 2682
 *   +0x0084 -> line 2680
 *   +0x0094 -> line 2687
 *   +0x009c -> line 2684
 *   +0x00a4 -> line 2690
 *   +0x00ac -> line 2684
 *   +0x00e4 -> line 2686
 *   +0x00f8 -> line 2687
 *   +0x0104 -> line 2688
 *   +0x0114 -> line 2689
 *   +0x0118 -> line 2690
 *   +0x0120 -> line 2691
 *   +0x0170 -> line 2692
 *   +0x01c0 -> line 2691
 *   +0x01c8 -> line 2692
 *   +0x01e4 -> line 2694
 *   +0x01e8 -> line 2696
 *   +0x01f0 -> line 2697
 *   +0x01f4 -> line 2696
 *   +0x01f8 -> line 2697
 *   +0x01fc -> line 2696
 *   +0x0214 -> line 2697
 *   +0x021c -> line 2698
 *   +0x0220 -> line 2700
 *   +0x0238 -> line 2701
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void AGO3_ScrollMatUV::Process(void)
{
    unsigned int ulIterator;
    unsigned int ulUV;
    float fFinalValue[2];
    float fValue;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ago\AGO3.cpp lines 2649–2650 */
/* addr: 0x001f56f0  size: 36 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 2649
 *   +0x000c -> line 2650
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void AGO3_ScrollMatUV::DesInit(void)
{
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ago\AGO3.cpp lines 2593–2644 */
/* addr: 0x001f5720  size: 472 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 2593
 *   +0x0004 -> line 2597
 *   +0x0008 -> line 2593
 *   +0x000c -> line 2607
 *   +0x0010 -> line 2593
 *   +0x0014 -> line 2597
 *   +0x0018 -> line 2593
 *   +0x001c -> line 2609
 *   +0x0020 -> line 2593
 *   +0x0028 -> line 2597
 *   +0x005c -> line 2600
 *   +0x0064 -> line 2601
 *   +0x006c -> line 2604
 *   +0x0074 -> line 2605
 *   +0x007c -> line 2607
 *   +0x0080 -> line 2609
 *   +0x0088 -> line 2610
 *   +0x00a4 -> line 2612
 *   +0x00a8 -> line 2613
 *   +0x00b0 -> line 2617
 *   +0x00c8 -> line 2619
 *   +0x00cc -> line 2621
 *   +0x00e4 -> line 2622
 *   +0x00ec -> line 2623
 *   +0x0104 -> line 2624
 *   +0x0110 -> line 2625
 *   +0x012c -> line 2626
 *   +0x0134 -> line 2629
 *   +0x0138 -> line 2628
 *   +0x0140 -> line 2629
 *   +0x0144 -> line 2632
 *   +0x0148 -> line 2634
 *   +0x0160 -> line 2635
 *   +0x0168 -> line 2636
 *   +0x0180 -> line 2637
 *   +0x018c -> line 2638
 *   +0x01a8 -> line 2639
 *   +0x01b0 -> line 2642
 *   +0x01b4 -> line 2641
 *   +0x01bc -> line 2642
 *   +0x01c0 -> line 2644
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void AGO3_ScrollMatUV::Init(MTH3D_tdstVector_* pPosition, MTH3D_tdstVector_* pDirection, GLI_tdstMaterial_* pMat1, float fDuration)
{
    float fAcceleration;
    int iSwitch;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ago\AGO3.cpp lines 2530–2534 */
/* addr: 0x001f5900  size: 84 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 2530
 *   +0x0004 -> line 2531
 *   +0x0008 -> line 2530
 *   +0x000c -> line 2531
 *   +0x0010 -> line 2530
 *   +0x001c -> line 2531
 *   +0x0024 -> line 2533
 *   +0x0040 -> line 2534
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void AGO3_SpriteZoom::Display(GLD_tdstViewportAttributes_* hVp)
{
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ago\AGO3.cpp lines 2509–2526 */
/* addr: 0x001f5960  size: 184 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 2509
 *   +0x001c -> line 2512
 *   +0x003c -> line 2513
 *   +0x0058 -> line 2515
 *   +0x0070 -> line 2516
 *   +0x0080 -> line 2519
 *   +0x0098 -> line 2521
 *   +0x009c -> line 2522
 *   +0x00a4 -> line 2525
 *   +0x00b0 -> line 2526
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void AGO3_SpriteZoom::Process(void)
{
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ago\AGO3.cpp lines 2444–2453 */
/* addr: 0x001f5a20  size: 116 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 2444
 *   +0x0008 -> line 2445
 *   +0x000c -> line 2444
 *   +0x0018 -> line 2445
 *   +0x002c -> line 2448
 *   +0x0034 -> line 2449
 *   +0x0050 -> line 2450
 *   +0x0058 -> line 2452
 *   +0x0060 -> line 2453
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void AGO3_SpriteDurationFade::Display(GLD_tdstViewportAttributes_* hVp)
{
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ago\AGO3.cpp lines 2425–2440 */
/* addr: 0x001f5aa0  size: 128 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 2425
 *   +0x0018 -> line 2428
 *   +0x0020 -> line 2429
 *   +0x0028 -> line 2430
 *   +0x003c -> line 2433
 *   +0x004c -> line 2434
 *   +0x0060 -> line 2435
 *   +0x0068 -> line 2438
 *   +0x006c -> line 2439
 *   +0x0078 -> line 2440
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void AGO3_SpriteDurationFade::Process(void)
{
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ago\AGO3.cpp lines 2278–2358 */
/* addr: 0x001f5b20  size: 1004 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 2278
 *   +0x0044 -> line 2281
 *   +0x0050 -> line 2283
 *   +0x0060 -> line 2284
 *   +0x006c -> line 2286
 *   +0x0070 -> line 2287
 *   +0x0074 -> line 2291
 *   +0x0078 -> line 2287
 *   +0x0080 -> line 2291
 *   +0x008c -> line 2287
 *   +0x00a0 -> line 2288
 *   +0x00a4 -> line 2289
 *   +0x00a8 -> line 2291
 *   +0x00b0 -> line 2296
 *   +0x00b8 -> line 2299
 *   +0x00c8 -> line 2302
 *   +0x00e0 -> line 2304
 *   +0x00f0 -> line 2305
 *   +0x0130 -> line 2307
 *   +0x0164 -> line 2308
 *   +0x0168 -> line 2309
 *   +0x0170 -> line 2307
 *   +0x0174 -> line 2309
 *   +0x017c -> line 2312
 *   +0x0188 -> line 2315
 *   +0x01a8 -> line 2319
 *   +0x01ac -> line 2315
 *   +0x01b0 -> line 2319
 *   +0x01f0 -> line 2323
 *   +0x0234 -> line 2325
 *   +0x0240 -> line 2327
 *   +0x0244 -> line 2328
 *   +0x024c -> line 2329
 *   +0x0250 -> line 2331
 *   +0x0270 -> line 2336
 *   +0x0280 -> line 2337
 *   +0x02c0 -> line 2339
 *   +0x0300 -> line 2340
 *   +0x0308 -> line 2339
 *   +0x030c -> line 2340
 *   +0x0314 -> line 2341
 *   +0x0318 -> line 2340
 *   +0x031c -> line 2342
 *   +0x0334 -> line 2343
 *   +0x0338 -> line 2345
 *   +0x033c -> line 2346
 *   +0x0348 -> line 2349
 *   +0x034c -> line 2348
 *   +0x0350 -> line 2350
 *   +0x0358 -> line 2352
 *   +0x0360 -> line 2353
 *   +0x0374 -> line 2354
 *   +0x0378 -> line 2353
 *   +0x0390 -> line 2355
 *   +0x03ac -> line 2358
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void AGO3_FistSmoke::Display(GLD_tdstViewportAttributes_* hVp)
{
    float fSizeInterval;
    float fTransparencyInterval;
    AGO3_FS_SpriteData* pPreviousSpriteData;
    unsigned int iSprite;
    unsigned int i;
    float fSize;
    float fTransparency;
    AGO3_FS_SpriteData* pSpriteData;
    unsigned int ulEntry;
    unsigned int ulNbAGOs;
    unsigned int ulFist;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ago\AGO3.cpp lines 2197–2274 */
/* addr: 0x001f5f10  size: 1008 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 2197
 *   +0x0038 -> line 2200
 *   +0x0040 -> line 2202
 *   +0x004c -> line 2203
 *   +0x0054 -> line 2207
 *   +0x005c -> line 2212
 *   +0x0060 -> line 2210
 *   +0x0064 -> line 2212
 *   +0x0068 -> line 2208
 *   +0x0074 -> line 2210
 *   +0x007c -> line 2208
 *   +0x008c -> line 2210
 *   +0x0090 -> line 2208
 *   +0x0094 -> line 2212
 *   +0x00a0 -> line 2217
 *   +0x00bc -> line 2219
 *   +0x00c8 -> line 2220
 *   +0x00d4 -> line 2221
 *   +0x00e0 -> line 2222
 *   +0x0148 -> line 2224
 *   +0x0168 -> line 2225
 *   +0x0170 -> line 2227
 *   +0x01d8 -> line 2232
 *   +0x01e4 -> line 2233
 *   +0x01f4 -> line 2234
 *   +0x0204 -> line 2235
 *   +0x0214 -> line 2237
 *   +0x0228 -> line 2242
 *   +0x0230 -> line 2240
 *   +0x0234 -> line 2242
 *   +0x0238 -> line 2244
 *   +0x023c -> line 2246
 *   +0x0240 -> line 2242
 *   +0x0248 -> line 2243
 *   +0x0258 -> line 2244
 *   +0x0270 -> line 2242
 *   +0x0274 -> line 2244
 *   +0x0280 -> line 2243
 *   +0x0284 -> line 2244
 *   +0x02a0 -> line 2242
 *   +0x02a4 -> line 2244
 *   +0x02b0 -> line 2243
 *   +0x02b4 -> line 2244
 *   +0x02c4 -> line 2246
 *   +0x02d8 -> line 2248
 *   +0x02e0 -> line 2251
 *   +0x02e4 -> line 2248
 *   +0x02e8 -> line 2251
 *   +0x02ec -> line 2250
 *   +0x02f0 -> line 2248
 *   +0x02f8 -> line 2249
 *   +0x0308 -> line 2250
 *   +0x0314 -> line 2251
 *   +0x0324 -> line 2252
 *   +0x033c -> line 2255
 *   +0x0340 -> line 2256
 *   +0x034c -> line 2259
 *   +0x0350 -> line 2258
 *   +0x0354 -> line 2260
 *   +0x0360 -> line 2262
 *   +0x0368 -> line 2263
 *   +0x0374 -> line 2264
 *   +0x0378 -> line 2265
 *   +0x0380 -> line 2263
 *   +0x0384 -> line 2265
 *   +0x038c -> line 2268
 *   +0x03ac -> line 2272
 *   +0x03b4 -> line 2271
 *   +0x03b8 -> line 2272
 *   +0x03bc -> line 2274
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void AGO3_FistSmoke::Process(void)
{
    C_Vector a_stSpriteDirection[2];
    unsigned int iSprite;
    unsigned int i;
    AGO3_FS_SpriteData* pSpriteData;
    unsigned int ulEntry;
    float fTimeDifference;
    unsigned int ulNbAGOs;
    unsigned int ulFist;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ago\AGO3.cpp lines 2073–2193 */
/* addr: 0x001f6300  size: 1672 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 2073
 *   +0x0008 -> line 2090
 *   +0x000c -> line 2073
 *   +0x0014 -> line 2090
 *   +0x0018 -> line 2073
 *   +0x003c -> line 2090
 *   +0x0050 -> line 2092
 *   +0x0070 -> line 2093
 *   +0x00a0 -> line 2095
 *   +0x00a4 -> line 2096
 *   +0x00a8 -> line 2095
 *   +0x00b0 -> line 2096
 *   +0x00b4 -> line 2095
 *   +0x00b8 -> line 2099
 *   +0x00bc -> line 2095
 *   +0x00c0 -> line 2096
 *   +0x00c8 -> line 2100
 *   +0x00cc -> line 2096
 *   +0x00d8 -> line 2099
 *   +0x00dc -> line 2100
 *   +0x00e0 -> line 2101
 *   +0x00e8 -> line 2102
 *   +0x00f0 -> line 2103
 *   +0x00f8 -> line 2107
 *   +0x0100 -> line 2108
 *   +0x0108 -> line 2109
 *   +0x0188 -> line 2113
 *   +0x0198 -> line 2117
 *   +0x01a4 -> line 2126
 *   +0x01a8 -> line 2117
 *   +0x01ac -> line 2126
 *   +0x01b0 -> line 2117
 *   +0x01b4 -> line 2126
 *   +0x01b8 -> line 2117
 *   +0x01c0 -> line 2126
 *   +0x01c8 -> line 2121
 *   +0x01d0 -> line 2126
 *   +0x01e0 -> line 2122
 *   +0x01e8 -> line 2126
 *   +0x01ec -> line 2123
 *   +0x01f4 -> line 2121
 *   +0x01f8 -> line 2122
 *   +0x01fc -> line 2126
 *   +0x0200 -> line 2127
 *   +0x0210 -> line 2128
 *   +0x0218 -> line 2131
 *   +0x024c -> line 2134
 *   +0x0250 -> line 2131
 *   +0x0264 -> line 2134
 *   +0x026c -> line 2138
 *   +0x0278 -> line 2144
 *   +0x027c -> line 2143
 *   +0x0280 -> line 2138
 *   +0x0288 -> line 2139
 *   +0x0298 -> line 2140
 *   +0x02ac -> line 2143
 *   +0x02b0 -> line 2138
 *   +0x02b4 -> line 2140
 *   +0x02bc -> line 2139
 *   +0x02c0 -> line 2140
 *   +0x02d4 -> line 2138
 *   +0x02d8 -> line 2140
 *   +0x02e0 -> line 2139
 *   +0x02e4 -> line 2140
 *   +0x02f8 -> line 2138
 *   +0x02fc -> line 2140
 *   +0x0304 -> line 2139
 *   +0x0308 -> line 2140
 *   +0x031c -> line 2138
 *   +0x0320 -> line 2140
 *   +0x0328 -> line 2139
 *   +0x032c -> line 2140
 *   +0x0340 -> line 2138
 *   +0x0344 -> line 2140
 *   +0x034c -> line 2139
 *   +0x0350 -> line 2140
 *   +0x0360 -> line 2144
 *   +0x0374 -> line 2146
 *   +0x037c -> line 2147
 *   +0x0380 -> line 2151
 *   +0x0384 -> line 2152
 *   +0x0388 -> line 2151
 *   +0x0390 -> line 2152
 *   +0x0394 -> line 2151
 *   +0x03a8 -> line 2152
 *   +0x03b0 -> line 2153
 *   +0x03b8 -> line 2154
 *   +0x03bc -> line 2153
 *   +0x03cc -> line 2154
 *   +0x03d0 -> line 2156
 *   +0x03d8 -> line 2157
 *   +0x03f4 -> line 2158
 *   +0x03f8 -> line 2157
 *   +0x0414 -> line 2158
 *   +0x0418 -> line 2157
 *   +0x0420 -> line 2158
 *   +0x0424 -> line 2160
 *   +0x0450 -> line 2162
 *   +0x0458 -> line 2160
 *   +0x045c -> line 2162
 *   +0x0460 -> line 2160
 *   +0x046c -> line 2162
 *   +0x0474 -> line 2160
 *   +0x047c -> line 2163
 *   +0x0480 -> line 2162
 *   +0x0484 -> line 2163
 *   +0x0488 -> line 2165
 *   +0x048c -> line 2164
 *   +0x0490 -> line 2166
 *   +0x04ac -> line 2171
 *   +0x04b0 -> line 2172
 *   +0x04bc -> line 2166
 *   +0x04dc -> line 2167
 *   +0x04e0 -> line 2166
 *   +0x04e8 -> line 2167
 *   +0x04ec -> line 2168
 *   +0x04f0 -> line 2169
 *   +0x04f4 -> line 2172
 *   +0x0500 -> line 2177
 *   +0x050c -> line 2178
 *   +0x055c -> line 2179
 *   +0x0574 -> line 2180
 *   +0x0584 -> line 2182
 *   +0x0590 -> line 2180
 *   +0x0598 -> line 2181
 *   +0x05a8 -> line 2182
 *   +0x05c4 -> line 2184
 *   +0x05c8 -> line 2182
 *   +0x05cc -> line 2183
 *   +0x05d4 -> line 2184
 *   +0x05d8 -> line 2183
 *   +0x05e0 -> line 2184
 *   +0x05e8 -> line 2185
 *   +0x05f4 -> line 2186
 *   +0x060c -> line 2188
 *   +0x0610 -> line 2189
 *   +0x0614 -> line 2188
 *   +0x0624 -> line 2189
 *   +0x063c -> line 2190
 *   +0x0650 -> line 2193
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void AGO3_FistSmoke::Init(MTH3D_tdstVector_* pPosition, MTH3D_tdstVector_* pDirection, GLI_tdstMaterial_* pMat1, float fForwardSpeed)
{
    unsigned int ulDirSwitch;
    AGO3_FS_SpriteData* pSpriteData;
    unsigned int ulFirstEntry;
    unsigned int ulFist;
    C_Vector cvRandomDirection;
    C_Vector a_cvDirection[2];
    C_Vector cvDirection;
    float fY;
    float fX;
    float fMultiplier;
    float fInterval;
    unsigned int iSprite;
    unsigned int i;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ago\AGO3.cpp lines 2064–2069 */
/* addr: 0x001f6990  size: 40 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 2064
 *   +0x0004 -> line 2068
 *   +0x0008 -> line 2064
 *   +0x000c -> line 2065
 *   +0x0014 -> line 2066
 *   +0x001c -> line 2067
 *   +0x0020 -> line 2069
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void AGO3_FistSmoke::DesInit(void)
{
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ago\AGO3.cpp lines 1929–1989 */
/* addr: 0x001f69c0  size: 760 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1929
 *   +0x0038 -> line 1932
 *   +0x0044 -> line 1934
 *   +0x0054 -> line 1935
 *   +0x0060 -> line 1939
 *   +0x0068 -> line 1940
 *   +0x006c -> line 1941
 *   +0x0070 -> line 1940
 *   +0x0078 -> line 1941
 *   +0x0084 -> line 1939
 *   +0x0098 -> line 1940
 *   +0x00ac -> line 1941
 *   +0x00b8 -> line 1946
 *   +0x00c0 -> line 1949
 *   +0x00d0 -> line 1952
 *   +0x00e0 -> line 1953
 *   +0x0120 -> line 1955
 *   +0x0158 -> line 1956
 *   +0x0160 -> line 1955
 *   +0x0164 -> line 1956
 *   +0x016c -> line 1959
 *   +0x0178 -> line 1961
 *   +0x0180 -> line 1965
 *   +0x0184 -> line 1963
 *   +0x0190 -> line 1967
 *   +0x01a0 -> line 1968
 *   +0x01e0 -> line 1970
 *   +0x0220 -> line 1971
 *   +0x0228 -> line 1970
 *   +0x022c -> line 1971
 *   +0x0238 -> line 1972
 *   +0x0254 -> line 1973
 *   +0x0258 -> line 1975
 *   +0x0260 -> line 1978
 *   +0x0264 -> line 1977
 *   +0x0268 -> line 1979
 *   +0x0270 -> line 1981
 *   +0x0274 -> line 1982
 *   +0x0278 -> line 1984
 *   +0x028c -> line 1985
 *   +0x0290 -> line 1984
 *   +0x02a8 -> line 1986
 *   +0x02c4 -> line 1989
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void AGO3_TurningFistSmoke::Display(GLD_tdstViewportAttributes_* hVp)
{
    float fSize;
    unsigned int iSprite;
    unsigned int i;
    AGO3_TFS_SpriteData* pSpriteData;
    unsigned int ulEntry;
    unsigned int ulNbAGOs;
    unsigned int ulFist;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ago\AGO3.cpp lines 1847–1925 */
/* addr: 0x001f6cc0  size: 1108 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1847
 *   +0x0038 -> line 1850
 *   +0x003c -> line 1847
 *   +0x0044 -> line 1852
 *   +0x0050 -> line 1853
 *   +0x0058 -> line 1857
 *   +0x0060 -> line 1862
 *   +0x0064 -> line 1860
 *   +0x0068 -> line 1862
 *   +0x006c -> line 1858
 *   +0x0078 -> line 1860
 *   +0x0080 -> line 1858
 *   +0x0090 -> line 1860
 *   +0x0094 -> line 1858
 *   +0x0098 -> line 1862
 *   +0x00a0 -> line 1868
 *   +0x00bc -> line 1870
 *   +0x00c8 -> line 1871
 *   +0x00d4 -> line 1872
 *   +0x00e0 -> line 1873
 *   +0x0148 -> line 1875
 *   +0x0168 -> line 1876
 *   +0x0170 -> line 1878
 *   +0x01d0 -> line 1880
 *   +0x01e0 -> line 1884
 *   +0x01e8 -> line 1880
 *   +0x0238 -> line 1884
 *   +0x0240 -> line 1885
 *   +0x0254 -> line 1886
 *   +0x0264 -> line 1887
 *   +0x0274 -> line 1889
 *   +0x0288 -> line 1894
 *   +0x0290 -> line 1892
 *   +0x0294 -> line 1894
 *   +0x0298 -> line 1896
 *   +0x029c -> line 1898
 *   +0x02a0 -> line 1894
 *   +0x02a8 -> line 1895
 *   +0x02b8 -> line 1896
 *   +0x02d0 -> line 1894
 *   +0x02d4 -> line 1896
 *   +0x02e0 -> line 1895
 *   +0x02e4 -> line 1896
 *   +0x0300 -> line 1894
 *   +0x0304 -> line 1896
 *   +0x0310 -> line 1895
 *   +0x0314 -> line 1896
 *   +0x0324 -> line 1898
 *   +0x0338 -> line 1900
 *   +0x0340 -> line 1903
 *   +0x0344 -> line 1900
 *   +0x0348 -> line 1903
 *   +0x034c -> line 1902
 *   +0x0350 -> line 1900
 *   +0x0358 -> line 1901
 *   +0x0368 -> line 1902
 *   +0x0374 -> line 1903
 *   +0x0384 -> line 1904
 *   +0x039c -> line 1907
 *   +0x03a0 -> line 1908
 *   +0x03ac -> line 1911
 *   +0x03b0 -> line 1910
 *   +0x03b4 -> line 1912
 *   +0x03c0 -> line 1914
 *   +0x03c8 -> line 1915
 *   +0x03d4 -> line 1916
 *   +0x03d8 -> line 1917
 *   +0x03e0 -> line 1915
 *   +0x03e4 -> line 1917
 *   +0x03ec -> line 1920
 *   +0x040c -> line 1923
 *   +0x0414 -> line 1922
 *   +0x0418 -> line 1923
 *   +0x041c -> line 1925
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void AGO3_TurningFistSmoke::Process(void)
{
    float fSpeed;
    C_Vector a_stSpriteDirection[2];
    unsigned int iSprite;
    unsigned int i;
    AGO3_TFS_SpriteData* pSpriteData;
    unsigned int ulEntry;
    float fTimeDifference;
    unsigned int ulNbAGOs;
    unsigned int ulFist;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ago\AGO3.cpp lines 1731–1842 */
/* addr: 0x001f7120  size: 1464 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1731
 *   +0x0008 -> line 1746
 *   +0x000c -> line 1731
 *   +0x0014 -> line 1746
 *   +0x0018 -> line 1731
 *   +0x0040 -> line 1746
 *   +0x0054 -> line 1748
 *   +0x006c -> line 1750
 *   +0x0070 -> line 1751
 *   +0x0074 -> line 1750
 *   +0x0078 -> line 1751
 *   +0x007c -> line 1752
 *   +0x0080 -> line 1750
 *   +0x0084 -> line 1751
 *   +0x0088 -> line 1752
 *   +0x0098 -> line 1750
 *   +0x00bc -> line 1752
 *   +0x00c4 -> line 1753
 *   +0x00d4 -> line 1754
 *   +0x00e0 -> line 1753
 *   +0x00e4 -> line 1755
 *   +0x00e8 -> line 1754
 *   +0x00ec -> line 1755
 *   +0x00f4 -> line 1754
 *   +0x00f8 -> line 1755
 *   +0x00fc -> line 1756
 *   +0x0104 -> line 1757
 *   +0x0114 -> line 1758
 *   +0x0120 -> line 1760
 *   +0x012c -> line 1757
 *   +0x0130 -> line 1759
 *   +0x0134 -> line 1758
 *   +0x0138 -> line 1759
 *   +0x0140 -> line 1762
 *   +0x0144 -> line 1761
 *   +0x0148 -> line 1762
 *   +0x014c -> line 1761
 *   +0x0150 -> line 1762
 *   +0x0154 -> line 1761
 *   +0x0158 -> line 1758
 *   +0x015c -> line 1759
 *   +0x0164 -> line 1760
 *   +0x016c -> line 1761
 *   +0x0174 -> line 1762
 *   +0x017c -> line 1767
 *   +0x0180 -> line 1768
 *   +0x0184 -> line 1767
 *   +0x018c -> line 1768
 *   +0x019c -> line 1770
 *   +0x01a0 -> line 1768
 *   +0x01a4 -> line 1771
 *   +0x01a8 -> line 1768
 *   +0x01b8 -> line 1770
 *   +0x01bc -> line 1771
 *   +0x01c0 -> line 1772
 *   +0x01c8 -> line 1773
 *   +0x01d0 -> line 1774
 *   +0x01d8 -> line 1777
 *   +0x01e4 -> line 1783
 *   +0x01e8 -> line 1780
 *   +0x01ec -> line 1783
 *   +0x01f0 -> line 1780
 *   +0x01f4 -> line 1783
 *   +0x01f8 -> line 1780
 *   +0x0200 -> line 1783
 *   +0x0204 -> line 1780
 *   +0x020c -> line 1783
 *   +0x0230 -> line 1784
 *   +0x0240 -> line 1785
 *   +0x0248 -> line 1788
 *   +0x0280 -> line 1791
 *   +0x0284 -> line 1788
 *   +0x0298 -> line 1791
 *   +0x02a0 -> line 1793
 *   +0x02ac -> line 1797
 *   +0x02b0 -> line 1798
 *   +0x02b4 -> line 1793
 *   +0x02c4 -> line 1794
 *   +0x02dc -> line 1795
 *   +0x02f0 -> line 1797
 *   +0x02f4 -> line 1795
 *   +0x02f8 -> line 1798
 *   +0x0308 -> line 1804
 *   +0x030c -> line 1803
 *   +0x031c -> line 1804
 *   +0x0320 -> line 1803
 *   +0x0334 -> line 1804
 *   +0x033c -> line 1805
 *   +0x0340 -> line 1808
 *   +0x034c -> line 1805
 *   +0x0350 -> line 1806
 *   +0x0358 -> line 1807
 *   +0x0360 -> line 1808
 *   +0x0364 -> line 1809
 *   +0x0368 -> line 1808
 *   +0x036c -> line 1809
 *   +0x0370 -> line 1811
 *   +0x0378 -> line 1812
 *   +0x0394 -> line 1813
 *   +0x0398 -> line 1812
 *   +0x03b4 -> line 1813
 *   +0x03b8 -> line 1812
 *   +0x03c0 -> line 1813
 *   +0x03c4 -> line 1815
 *   +0x03f0 -> line 1817
 *   +0x03f8 -> line 1815
 *   +0x03fc -> line 1817
 *   +0x0400 -> line 1815
 *   +0x040c -> line 1817
 *   +0x0414 -> line 1815
 *   +0x0418 -> line 1817
 *   +0x041c -> line 1815
 *   +0x0420 -> line 1818
 *   +0x0428 -> line 1819
 *   +0x042c -> line 1821
 *   +0x043c -> line 1827
 *   +0x0444 -> line 1821
 *   +0x0480 -> line 1822
 *   +0x0484 -> line 1823
 *   +0x0488 -> line 1824
 *   +0x0490 -> line 1829
 *   +0x049c -> line 1830
 *   +0x04d8 -> line 1831
 *   +0x04f4 -> line 1832
 *   +0x0500 -> line 1834
 *   +0x050c -> line 1832
 *   +0x0514 -> line 1833
 *   +0x0524 -> line 1834
 *   +0x0540 -> line 1836
 *   +0x0544 -> line 1834
 *   +0x0548 -> line 1835
 *   +0x0550 -> line 1836
 *   +0x0554 -> line 1835
 *   +0x0560 -> line 1836
 *   +0x0568 -> line 1838
 *   +0x0578 -> line 1839
 *   +0x0584 -> line 1842
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void AGO3_TurningFistSmoke::Init(MTH3D_tdstVector_* pPosition, MTH3D_tdstVector_* pDirection, GLI_tdstMaterial_* pMat1, float fForwardSpeed)
{
    AGO3_TFS_SpriteData* pSpriteData;
    unsigned int ulFirstEntry;
    unsigned int ulFist;
    C_Vector cvRandomDirection;
    C_Vector a_cvDirection[2];
    C_Vector cvDirection;
    float fY;
    float fX;
    float fMultiplier;
    float fInterval;
    unsigned int i;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ago\AGO3.cpp lines 1592–1650 */
/* addr: 0x001f76e0  size: 808 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1592
 *   +0x0004 -> line 1604
 *   +0x0008 -> line 1592
 *   +0x000c -> line 1604
 *   +0x0010 -> line 1592
 *   +0x0014 -> line 1604
 *   +0x0018 -> line 1592
 *   +0x0038 -> line 1604
 *   +0x004c -> line 1608
 *   +0x0054 -> line 1609
 *   +0x0058 -> line 1608
 *   +0x005c -> line 1609
 *   +0x0060 -> line 1608
 *   +0x0064 -> line 1610
 *   +0x0070 -> line 1609
 *   +0x0074 -> line 1610
 *   +0x0078 -> line 1609
 *   +0x007c -> line 1611
 *   +0x0080 -> line 1610
 *   +0x0084 -> line 1616
 *   +0x00c0 -> line 1619
 *   +0x00c4 -> line 1616
 *   +0x00c8 -> line 1619
 *   +0x00d0 -> line 1616
 *   +0x00d8 -> line 1619
 *   +0x00dc -> line 1616
 *   +0x00ec -> line 1619
 *   +0x00fc -> line 1620
 *   +0x0114 -> line 1623
 *   +0x0118 -> line 1624
 *   +0x0124 -> line 1627
 *   +0x0138 -> line 1628
 *   +0x013c -> line 1627
 *   +0x0140 -> line 1629
 *   +0x0144 -> line 1627
 *   +0x015c -> line 1629
 *   +0x0160 -> line 1627
 *   +0x0164 -> line 1629
 *   +0x0168 -> line 1627
 *   +0x016c -> line 1629
 *   +0x0174 -> line 1627
 *   +0x0180 -> line 1628
 *   +0x0188 -> line 1629
 *   +0x019c -> line 1631
 *   +0x0210 -> line 1636
 *   +0x0214 -> line 1631
 *   +0x0218 -> line 1632
 *   +0x0228 -> line 1633
 *   +0x0238 -> line 1634
 *   +0x0248 -> line 1636
 *   +0x0258 -> line 1638
 *   +0x025c -> line 1639
 *   +0x0260 -> line 1638
 *   +0x0264 -> line 1639
 *   +0x026c -> line 1641
 *   +0x02a8 -> line 1644
 *   +0x02d8 -> line 1646
 *   +0x02e0 -> line 1647
 *   +0x02e4 -> line 1646
 *   +0x02f0 -> line 1647
 *   +0x02fc -> line 1650
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void AGO3_ShootSmoke::Display(GLD_tdstViewportAttributes_* hVp)
{
    MTH3D_tdstVector_ Vtmp;
    float fPercentage;
    float fScale;
    float fRayTime;
    MTH3D_tdstVector_ stSpritePos;
    float fAngle;
    float fRay;
    unsigned int i;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ago\AGO3.cpp lines 1583–1588 */
/* addr: 0x001f7a10  size: 60 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1583
 *   +0x0024 -> line 1585
 *   +0x0028 -> line 1587
 *   +0x0034 -> line 1588
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void AGO3_ShootSmoke::Process(void)
{
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ago\AGO3.cpp lines 1553–1578 */
/* addr: 0x001f7a50  size: 592 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1553
 *   +0x0004 -> line 1556
 *   +0x0008 -> line 1553
 *   +0x000c -> line 1559
 *   +0x0010 -> line 1553
 *   +0x0014 -> line 1560
 *   +0x0018 -> line 1553
 *   +0x002c -> line 1556
 *   +0x0038 -> line 1563
 *   +0x003c -> line 1556
 *   +0x0050 -> line 1563
 *   +0x0054 -> line 1556
 *   +0x0064 -> line 1558
 *   +0x0068 -> line 1559
 *   +0x006c -> line 1560
 *   +0x0070 -> line 1563
 *   +0x0078 -> line 1565
 *   +0x007c -> line 1567
 *   +0x0088 -> line 1565
 *   +0x00cc -> line 1570
 *   +0x0114 -> line 1571
 *   +0x0158 -> line 1572
 *   +0x019c -> line 1574
 *   +0x01e4 -> line 1576
 *   +0x01f8 -> line 1577
 *   +0x01fc -> line 1576
 *   +0x0204 -> line 1577
 *   +0x0208 -> line 1576
 *   +0x0228 -> line 1577
 *   +0x0230 -> line 1578
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void AGO3_ShootSmoke::Init(MTH3D_tdstVector_* pPosition, MTH3D_tdstVector_* pDirection, GLI_tdstMaterial_* pMat1)
{
    unsigned int i;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ago\AGO3.cpp lines 1430–1504 */
/* addr: 0x001f7ca0  size: 860 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1430
 *   +0x0010 -> line 1433
 *   +0x0014 -> line 1430
 *   +0x004c -> line 1435
 *   +0x0060 -> line 1436
 *   +0x0068 -> line 1440
 *   +0x006c -> line 1438
 *   +0x0070 -> line 1440
 *   +0x0074 -> line 1439
 *   +0x0078 -> line 1438
 *   +0x007c -> line 1439
 *   +0x00a0 -> line 1440
 *   +0x00a8 -> line 1442
 *   +0x00c4 -> line 1444
 *   +0x00d8 -> line 1445
 *   +0x00ec -> line 1446
 *   +0x00f8 -> line 1447
 *   +0x0100 -> line 1450
 *   +0x0120 -> line 1455
 *   +0x012c -> line 1465
 *   +0x0134 -> line 1470
 *   +0x0180 -> line 1471
 *   +0x01a8 -> line 1472
 *   +0x01e0 -> line 1474
 *   +0x01e8 -> line 1472
 *   +0x01fc -> line 1474
 *   +0x0208 -> line 1477
 *   +0x0244 -> line 1478
 *   +0x0250 -> line 1479
 *   +0x0258 -> line 1482
 *   +0x026c -> line 1481
 *   +0x0270 -> line 1482
 *   +0x027c -> line 1483
 *   +0x0284 -> line 1484
 *   +0x02ac -> line 1486
 *   +0x02c0 -> line 1491
 *   +0x02c4 -> line 1492
 *   +0x02d0 -> line 1495
 *   +0x02d4 -> line 1494
 *   +0x02d8 -> line 1496
 *   +0x02e0 -> line 1498
 *   +0x02e8 -> line 1499
 *   +0x02f4 -> line 1500
 *   +0x02f8 -> line 1499
 *   +0x02fc -> line 1501
 *   +0x0300 -> line 1499
 *   +0x0314 -> line 1501
 *   +0x0320 -> line 1504
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void AGO3_WaveEnvelopedFist2::Display(GLD_tdstViewportAttributes_* hVp)
{
    unsigned int ulIndex;
    float fSize;
    float fTransparencyIncrement;
    float fPreviousTransparency;
    float fTransparency;
    unsigned int i;
    AGO3_WEF_SpriteData* pSpriteData;
    unsigned int ulEntry;
    unsigned int ulNbAGOs;
    unsigned int ulFist;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ago\AGO3.cpp lines 1333–1426 */
/* addr: 0x001f8000  size: 820 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1333
 *   +0x0004 -> line 1337
 *   +0x0008 -> line 1333
 *   +0x001c -> line 1393
 *   +0x0020 -> line 1353
 *   +0x0024 -> line 1393
 *   +0x0028 -> line 1353
 *   +0x0030 -> line 1404
 *   +0x0034 -> line 1395
 *   +0x0038 -> line 1391
 *   +0x003c -> line 1395
 *   +0x0040 -> line 1358
 *   +0x0044 -> line 1395
 *   +0x0048 -> line 1404
 *   +0x0050 -> line 1409
 *   +0x0054 -> line 1404
 *   +0x0058 -> line 1353
 *   +0x005c -> line 1404
 *   +0x0068 -> line 1358
 *   +0x006c -> line 1390
 *   +0x0074 -> line 1355
 *   +0x0078 -> line 1339
 *   +0x0080 -> line 1340
 *   +0x0088 -> line 1342
 *   +0x008c -> line 1343
 *   +0x0090 -> line 1346
 *   +0x0094 -> line 1342
 *   +0x009c -> line 1343
 *   +0x00b4 -> line 1346
 *   +0x00bc -> line 1353
 *   +0x00e8 -> line 1354
 *   +0x00f8 -> line 1355
 *   +0x0100 -> line 1358
 *   +0x0140 -> line 1367
 *   +0x0144 -> line 1365
 *   +0x0150 -> line 1367
 *   +0x0154 -> line 1365
 *   +0x0164 -> line 1370
 *   +0x0168 -> line 1371
 *   +0x016c -> line 1372
 *   +0x0170 -> line 1365
 *   +0x0178 -> line 1374
 *   +0x017c -> line 1370
 *   +0x0180 -> line 1371
 *   +0x0184 -> line 1372
 *   +0x0188 -> line 1370
 *   +0x018c -> line 1371
 *   +0x0190 -> line 1372
 *   +0x0194 -> line 1374
 *   +0x01a0 -> line 1376
 *   +0x01a8 -> line 1380
 *   +0x01ac -> line 1376
 *   +0x01b0 -> line 1381
 *   +0x01b4 -> line 1376
 *   +0x01bc -> line 1377
 *   +0x01cc -> line 1378
 *   +0x01d4 -> line 1380
 *   +0x01d8 -> line 1378
 *   +0x01e0 -> line 1381
 *   +0x01f0 -> line 1386
 *   +0x01f4 -> line 1388
 *   +0x01fc -> line 1387
 *   +0x0214 -> line 1388
 *   +0x0220 -> line 1390
 *   +0x0234 -> line 1391
 *   +0x0240 -> line 1393
 *   +0x0250 -> line 1395
 *   +0x0278 -> line 1397
 *   +0x027c -> line 1399
 *   +0x0288 -> line 1404
 *   +0x02b8 -> line 1408
 *   +0x02bc -> line 1409
 *   +0x02c4 -> line 1411
 *   +0x02c8 -> line 1413
 *   +0x02d0 -> line 1415
 *   +0x02d8 -> line 1416
 *   +0x02e4 -> line 1417
 *   +0x02e8 -> line 1418
 *   +0x02f0 -> line 1416
 *   +0x02f8 -> line 1418
 *   +0x0300 -> line 1421
 *   +0x0318 -> line 1423
 *   +0x031c -> line 1424
 *   +0x0324 -> line 1426
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void AGO3_WaveEnvelopedFist2::Process(void)
{
    MTH3D_tdstVector_* pPosition;
    unsigned int i;
    float fMultiplier;
    float fInterval;
    AGO3_WEF_SpriteData* pSpriteData;
    unsigned int ulFirstEntry;
    unsigned int ulNbAGOs;
    unsigned int ulEntry;
    unsigned int ulFist;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ago\AGO3.cpp lines 1290–1329 */
/* addr: 0x001f8340  size: 428 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1290
 *   +0x0018 -> line 1292
 *   +0x001c -> line 1293
 *   +0x0020 -> line 1297
 *   +0x0030 -> line 1299
 *   +0x0034 -> line 1297
 *   +0x0038 -> line 1299
 *   +0x0040 -> line 1297
 *   +0x0054 -> line 1299
 *   +0x0060 -> line 1301
 *   +0x0090 -> line 1310
 *   +0x009c -> line 1314
 *   +0x00a0 -> line 1310
 *   +0x00a4 -> line 1314
 *   +0x00a8 -> line 1310
 *   +0x00b4 -> line 1314
 *   +0x00b8 -> line 1313
 *   +0x00bc -> line 1310
 *   +0x00c0 -> line 1313
 *   +0x00c4 -> line 1310
 *   +0x00c8 -> line 1314
 *   +0x00cc -> line 1313
 *   +0x00d0 -> line 1314
 *   +0x00e0 -> line 1310
 *   +0x00ec -> line 1314
 *   +0x00f0 -> line 1310
 *   +0x00f4 -> line 1314
 *   +0x0100 -> line 1310
 *   +0x0108 -> line 1319
 *   +0x010c -> line 1314
 *   +0x0164 -> line 1318
 *   +0x016c -> line 1319
 *   +0x0170 -> line 1320
 *   +0x0178 -> line 1321
 *   +0x0180 -> line 1322
 *   +0x0188 -> line 1324
 *   +0x018c -> line 1326
 *   +0x019c -> line 1327
 *   +0x01a4 -> line 1329
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void AGO3_WaveEnvelopedFist2::Init(MTH3D_tdstVector_* pPosition, GLI_tdstMaterial_* pMat1, float fColor)
{
    float fOneMinusColor;
    AGO3_WEF_SpriteData* pSpriteData;
    unsigned int ulFist;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ago\AGO3.cpp lines 1278–1283 */
/* addr: 0x001f84f0  size: 40 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1278
 *   +0x0004 -> line 1282
 *   +0x0008 -> line 1278
 *   +0x000c -> line 1279
 *   +0x0014 -> line 1280
 *   +0x001c -> line 1281
 *   +0x0020 -> line 1283
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void AGO3_WaveEnvelopedFist2::DesInit(void)
{
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ago\AGO3.cpp lines 1146–1217 */
/* addr: 0x001f8520  size: 852 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1146
 *   +0x0010 -> line 1149
 *   +0x0014 -> line 1146
 *   +0x004c -> line 1151
 *   +0x0060 -> line 1152
 *   +0x0068 -> line 1156
 *   +0x006c -> line 1154
 *   +0x0070 -> line 1156
 *   +0x0074 -> line 1155
 *   +0x0078 -> line 1154
 *   +0x007c -> line 1155
 *   +0x00a0 -> line 1156
 *   +0x00a8 -> line 1158
 *   +0x00c4 -> line 1160
 *   +0x00d8 -> line 1161
 *   +0x00f0 -> line 1163
 *   +0x00f8 -> line 1166
 *   +0x0100 -> line 1169
 *   +0x0128 -> line 1173
 *   +0x0134 -> line 1176
 *   +0x013c -> line 1188
 *   +0x0188 -> line 1189
 *   +0x01b0 -> line 1190
 *   +0x01e8 -> line 1192
 *   +0x01f0 -> line 1190
 *   +0x0204 -> line 1192
 *   +0x0210 -> line 1195
 *   +0x0218 -> line 1194
 *   +0x021c -> line 1195
 *   +0x0244 -> line 1197
 *   +0x0248 -> line 1195
 *   +0x0268 -> line 1197
 *   +0x0270 -> line 1198
 *   +0x02a0 -> line 1199
 *   +0x02b8 -> line 1204
 *   +0x02bc -> line 1205
 *   +0x02c8 -> line 1208
 *   +0x02cc -> line 1207
 *   +0x02d0 -> line 1209
 *   +0x02d8 -> line 1211
 *   +0x02e0 -> line 1212
 *   +0x02ec -> line 1213
 *   +0x02f0 -> line 1212
 *   +0x02f4 -> line 1214
 *   +0x02f8 -> line 1212
 *   +0x030c -> line 1214
 *   +0x0318 -> line 1217
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void AGO3_WaveEnvelopedFist::Display(GLD_tdstViewportAttributes_* hVp)
{
    unsigned int i;
    float fSize;
    float fTransparency;
    float fTransparencyIncrement;
    float fPreviousTransparency;
    AGO3_WEF_SpriteData* pSpriteData;
    unsigned int ulEntry;
    unsigned int ulNbAGOs;
    unsigned int ulFist;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ago\AGO3.cpp lines 1053–1142 */
/* addr: 0x001f8880  size: 832 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1053
 *   +0x0004 -> line 1057
 *   +0x0008 -> line 1053
 *   +0x0020 -> line 1113
 *   +0x0024 -> line 1121
 *   +0x0028 -> line 1113
 *   +0x002c -> line 1111
 *   +0x0030 -> line 1113
 *   +0x0034 -> line 1076
 *   +0x0038 -> line 1121
 *   +0x004c -> line 1076
 *   +0x0050 -> line 1121
 *   +0x0054 -> line 1125
 *   +0x0058 -> line 1076
 *   +0x005c -> line 1110
 *   +0x0064 -> line 1081
 *   +0x0068 -> line 1115
 *   +0x0070 -> line 1078
 *   +0x0074 -> line 1076
 *   +0x0078 -> line 1081
 *   +0x007c -> line 1060
 *   +0x0084 -> line 1061
 *   +0x008c -> line 1063
 *   +0x0090 -> line 1064
 *   +0x0094 -> line 1067
 *   +0x0098 -> line 1063
 *   +0x00a0 -> line 1064
 *   +0x00b8 -> line 1067
 *   +0x00c0 -> line 1076
 *   +0x00c8 -> line 1073
 *   +0x00d8 -> line 1076
 *   +0x00dc -> line 1073
 *   +0x00e0 -> line 1076
 *   +0x00e4 -> line 1073
 *   +0x00f4 -> line 1076
 *   +0x0110 -> line 1077
 *   +0x0120 -> line 1078
 *   +0x0128 -> line 1081
 *   +0x0168 -> line 1087
 *   +0x0170 -> line 1094
 *   +0x0178 -> line 1090
 *   +0x0180 -> line 1091
 *   +0x0188 -> line 1092
 *   +0x0190 -> line 1090
 *   +0x0194 -> line 1091
 *   +0x0198 -> line 1092
 *   +0x019c -> line 1094
 *   +0x01a8 -> line 1096
 *   +0x01b0 -> line 1100
 *   +0x01b4 -> line 1096
 *   +0x01b8 -> line 1101
 *   +0x01bc -> line 1096
 *   +0x01c4 -> line 1097
 *   +0x01d4 -> line 1098
 *   +0x01dc -> line 1100
 *   +0x01e0 -> line 1098
 *   +0x01e8 -> line 1101
 *   +0x01f8 -> line 1106
 *   +0x01fc -> line 1107
 *   +0x0200 -> line 1108
 *   +0x0204 -> line 1107
 *   +0x0208 -> line 1108
 *   +0x020c -> line 1107
 *   +0x021c -> line 1108
 *   +0x0228 -> line 1110
 *   +0x023c -> line 1111
 *   +0x0248 -> line 1113
 *   +0x0258 -> line 1115
 *   +0x0280 -> line 1117
 *   +0x0284 -> line 1119
 *   +0x0290 -> line 1121
 *   +0x02c0 -> line 1124
 *   +0x02c4 -> line 1125
 *   +0x02cc -> line 1127
 *   +0x02d0 -> line 1129
 *   +0x02d8 -> line 1131
 *   +0x02e0 -> line 1132
 *   +0x02ec -> line 1133
 *   +0x02f0 -> line 1134
 *   +0x02f8 -> line 1132
 *   +0x0300 -> line 1134
 *   +0x0308 -> line 1137
 *   +0x0320 -> line 1139
 *   +0x0324 -> line 1140
 *   +0x032c -> line 1142
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void AGO3_WaveEnvelopedFist::Process(void)
{
    MTH3D_tdstVector_* pPosition;
    unsigned int i;
    MTH3D_tdstVector_* pPreviousSpritePosition;
    float fMultiplier;
    float fInterval;
    AGO3_WEF_SpriteData* pSpriteData;
    unsigned int ulFirstEntry;
    unsigned int ulNbAGOs;
    unsigned int ulEntry;
    unsigned int ulFist;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ago\AGO3.cpp lines 1004–1049 */
/* addr: 0x001f8bc0  size: 480 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1004
 *   +0x0004 -> line 1007
 *   +0x0008 -> line 1004
 *   +0x0014 -> line 1007
 *   +0x0024 -> line 1009
 *   +0x0028 -> line 1011
 *   +0x0030 -> line 1012
 *   +0x0034 -> line 1014
 *   +0x0040 -> line 1016
 *   +0x0044 -> line 1014
 *   +0x0048 -> line 1016
 *   +0x004c -> line 1014
 *   +0x0050 -> line 1016
 *   +0x0054 -> line 1014
 *   +0x0068 -> line 1016
 *   +0x0074 -> line 1018
 *   +0x00a4 -> line 1027
 *   +0x00b4 -> line 1030
 *   +0x00b8 -> line 1027
 *   +0x00c4 -> line 1031
 *   +0x00c8 -> line 1030
 *   +0x00cc -> line 1027
 *   +0x00d0 -> line 1031
 *   +0x00e0 -> line 1030
 *   +0x00e4 -> line 1031
 *   +0x00e8 -> line 1027
 *   +0x00f4 -> line 1031
 *   +0x00fc -> line 1027
 *   +0x0100 -> line 1031
 *   +0x0108 -> line 1027
 *   +0x010c -> line 1036
 *   +0x0110 -> line 1027
 *   +0x0114 -> line 1031
 *   +0x0118 -> line 1027
 *   +0x011c -> line 1031
 *   +0x0174 -> line 1035
 *   +0x017c -> line 1042
 *   +0x0180 -> line 1036
 *   +0x0184 -> line 1042
 *   +0x0188 -> line 1037
 *   +0x0190 -> line 1038
 *   +0x0198 -> line 1039
 *   +0x01a0 -> line 1042
 *   +0x01a8 -> line 1044
 *   +0x01ac -> line 1046
 *   +0x01bc -> line 1047
 *   +0x01c8 -> line 1049
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void AGO3_WaveEnvelopedFist::Init(MTH3D_tdstVector_* pPosition, MTH3D_tdstVector_* pDirection, GLI_tdstMaterial_* pMat1, float fColor)
{
    float fOneMinusColor;
    AGO3_WEF_SpriteData* pSpriteData;
    unsigned int ulFist;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ago\AGO3.cpp lines 995–1000 */
/* addr: 0x001f8da0  size: 40 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 995
 *   +0x0004 -> line 999
 *   +0x0008 -> line 995
 *   +0x000c -> line 996
 *   +0x0014 -> line 997
 *   +0x001c -> line 998
 *   +0x0020 -> line 1000
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void AGO3_WaveEnvelopedFist::DesInit(void)
{
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ago\AGO3.cpp lines 888–898 */
/* addr: 0x001f8dd0  size: 100 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 888
 *   +0x0004 -> line 891
 *   +0x0008 -> line 888
 *   +0x000c -> line 891
 *   +0x0010 -> line 888
 *   +0x001c -> line 891
 *   +0x0024 -> line 894
 *   +0x0050 -> line 898
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void AGO3_BeamWithUVs::Display(GLD_tdstViewportAttributes_* hVp)
{
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ago\AGO3.cpp lines 884–885 */
/* addr: 0x001f8e40  size: 12 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 884
 *   +0x0004 -> line 885
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void AGO3_BeamWithUVs::Process(void)
{
    ((AGO3_Part*)this)->m_Finished = 1;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ago\AGO3.cpp lines 823–851 */
/* addr: 0x001f8e50  size: 228 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 823
 *   +0x001c -> line 831
 *   +0x0024 -> line 833
 *   +0x0028 -> line 835
 *   +0x002c -> line 837
 *   +0x0048 -> line 839
 *   +0x0064 -> line 840
 *   +0x006c -> line 843
 *   +0x0070 -> line 842
 *   +0x0074 -> line 843
 *   +0x007c -> line 841
 *   +0x0080 -> line 843
 *   +0x0084 -> line 842
 *   +0x0088 -> line 843
 *   +0x00a0 -> line 846
 *   +0x00b0 -> line 848
 *   +0x00c0 -> line 850
 *   +0x00c8 -> line 851
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void AGO3_Smoke::Display(GLD_tdstViewportAttributes_* hVp)
{
    float v2;
    float v1;
    float u2;
    float u1;
    AGO3Smoke_InternalData_* p;
    unsigned int i;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ago\AGO3.cpp lines 787–820 */
/* addr: 0x001f8f40  size: 288 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 787
 *   +0x0018 -> line 793
 *   +0x001c -> line 787
 *   +0x0020 -> line 795
 *   +0x0024 -> line 787
 *   +0x0028 -> line 788
 *   +0x002c -> line 790
 *   +0x0034 -> line 797
 *   +0x0050 -> line 800
 *   +0x0058 -> line 803
 *   +0x0064 -> line 804
 *   +0x0074 -> line 805
 *   +0x0084 -> line 807
 *   +0x0094 -> line 810
 *   +0x009c -> line 807
 *   +0x00a4 -> line 808
 *   +0x00a8 -> line 810
 *   +0x00ac -> line 808
 *   +0x00b0 -> line 810
 *   +0x00b4 -> line 808
 *   +0x00c0 -> line 810
 *   +0x00cc -> line 811
 *   +0x00e0 -> line 814
 *   +0x00f0 -> line 816
 *   +0x00fc -> line 818
 *   +0x0100 -> line 820
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void AGO3_Smoke::Process(void)
{
    AGO3Smoke_InternalData_* p;
    C_Vector Direction;
    float Time;
    unsigned int i;
    unsigned int NbFinished;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ago\AGO3.cpp lines 748–784 */
/* addr: 0x001f9060  size: 820 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 748
 *   +0x0004 -> line 756
 *   +0x0008 -> line 748
 *   +0x001c -> line 760
 *   +0x0020 -> line 753
 *   +0x0024 -> line 762
 *   +0x0028 -> line 753
 *   +0x002c -> line 754
 *   +0x0034 -> line 755
 *   +0x003c -> line 756
 *   +0x0040 -> line 758
 *   +0x006c -> line 764
 *   +0x0088 -> line 766
 *   +0x00c8 -> line 767
 *   +0x0104 -> line 768
 *   +0x0140 -> line 769
 *   +0x014c -> line 771
 *   +0x018c -> line 772
 *   +0x01cc -> line 773
 *   +0x0210 -> line 776
 *   +0x0250 -> line 777
 *   +0x0290 -> line 778
 *   +0x02cc -> line 779
 *   +0x02e0 -> line 783
 *   +0x02e4 -> line 779
 *   +0x02f0 -> line 783
 *   +0x02f4 -> line 779
 *   +0x0310 -> line 780
 *   +0x0314 -> line 783
 *   +0x031c -> line 784
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void AGO3_Smoke::Init(MTH3D_tdstVector_* pPosition, GLI_tdstMaterial_* pMat1)
{
    C_Vector Position;
    AGO3Smoke_InternalData_* p;
    unsigned int i;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ago\AGO3.cpp lines 686–710 */
/* addr: 0x001f93a0  size: 144 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 686
 *   +0x0004 -> line 689
 *   +0x0008 -> line 686
 *   +0x000c -> line 689
 *   +0x0010 -> line 686
 *   +0x001c -> line 689
 *   +0x0024 -> line 691
 *   +0x002c -> line 695
 *   +0x0074 -> line 708
 *   +0x007c -> line 710
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void AGO3_Target::Display(GLD_tdstViewportAttributes_* hVp)
{
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ago\AGO3.cpp lines 666–669 */
/* addr: 0x001f9430  size: 28 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 666
 *   +0x0010 -> line 668
 *   +0x0014 -> line 669
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void AGO3_Target::Process(void)
{
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ago\AGO3.cpp lines 617–621 */
/* addr: 0x001f9450  size: 116 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 617
 *   +0x0004 -> line 618
 *   +0x0008 -> line 617
 *   +0x000c -> line 618
 *   +0x0010 -> line 617
 *   +0x001c -> line 618
 *   +0x0024 -> line 620
 *   +0x0060 -> line 621
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void AGO3_GrowingFireBall::Display(GLD_tdstViewportAttributes_* hVp)
{
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ago\AGO3.cpp lines 610–614 */
/* addr: 0x001f94d0  size: 128 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 610
 *   +0x0004 -> line 611
 *   +0x0008 -> line 610
 *   +0x000c -> line 611
 *   +0x0010 -> line 610
 *   +0x001c -> line 611
 *   +0x0024 -> line 613
 *   +0x006c -> line 614
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void AGO3_GrowingUVAnimatedFireBall::Display(GLD_tdstViewportAttributes_* hVp)
{
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ago\AGO3.cpp lines 603–606 */
/* addr: 0x001f9550  size: 128 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 603
 *   +0x0004 -> line 604
 *   +0x0008 -> line 603
 *   +0x000c -> line 604
 *   +0x0010 -> line 603
 *   +0x001c -> line 604
 *   +0x0024 -> line 605
 *   +0x006c -> line 606
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void AGO3_GrowingUVAnimatedFireBallMoving::Display(GLD_tdstViewportAttributes_* hVp)
{
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ago\AGO3.cpp lines 578–600 */
/* addr: 0x001f95d0  size: 284 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 578
 *   +0x000c -> line 583
 *   +0x0014 -> line 584
 *   +0x0018 -> line 583
 *   +0x001c -> line 584
 *   +0x002c -> line 586
 *   +0x0030 -> line 587
 *   +0x0038 -> line 591
 *   +0x003c -> line 592
 *   +0x0040 -> line 591
 *   +0x0044 -> line 595
 *   +0x0048 -> line 592
 *   +0x004c -> line 595
 *   +0x0050 -> line 591
 *   +0x0054 -> line 593
 *   +0x005c -> line 591
 *   +0x0068 -> line 593
 *   +0x0070 -> line 592
 *   +0x0078 -> line 593
 *   +0x0080 -> line 592
 *   +0x0084 -> line 593
 *   +0x008c -> line 592
 *   +0x0090 -> line 593
 *   +0x0094 -> line 592
 *   +0x0098 -> line 595
 *   +0x00a0 -> line 596
 *   +0x00bc -> line 597
 *   +0x00cc -> line 598
 *   +0x00d0 -> line 599
 *   +0x00d4 -> line 598
 *   +0x00d8 -> line 599
 *   +0x00dc -> line 598
 *   +0x00e4 -> line 599
 *   +0x00e8 -> line 598
 *   +0x00f8 -> line 599
 *   +0x010c -> line 600
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void AGO3_GrowingUVAnimatedFireBallMoving::Process(void)
{
    C_Vector Temp;
    int CurrentFrame;
    float TotalTime;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ago\AGO3.cpp lines 560–573 */
/* addr: 0x001f96f0  size: 144 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 560
 *   +0x0008 -> line 561
 *   +0x000c -> line 560
 *   +0x0010 -> line 561
 *   +0x0020 -> line 563
 *   +0x0024 -> line 564
 *   +0x002c -> line 569
 *   +0x0030 -> line 568
 *   +0x0034 -> line 569
 *   +0x003c -> line 568
 *   +0x0040 -> line 570
 *   +0x0048 -> line 568
 *   +0x0054 -> line 570
 *   +0x005c -> line 569
 *   +0x0064 -> line 570
 *   +0x006c -> line 569
 *   +0x0070 -> line 570
 *   +0x0078 -> line 569
 *   +0x007c -> line 570
 *   +0x0080 -> line 569
 *   +0x0084 -> line 570
 *   +0x0088 -> line 573
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void AGO3_GrowingUVAnimatedFireBall::Process(void)
{
    int CurrentFrame;
    float TotalTime;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ago\AGO3.cpp lines 469–482 */
/* addr: 0x001f9780  size: 168 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 469
 *   +0x0020 -> line 473
 *   +0x002c -> line 475
 *   +0x0034 -> line 477
 *   +0x0040 -> line 478
 *   +0x004c -> line 480
 *   +0x0070 -> line 481
 *   +0x0088 -> line 482
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void AGO3_SimpleSparks::Display(GLD_tdstViewportAttributes_* hVp)
{
    unsigned int i;
    C_Vector* pVect;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ago\AGO3.cpp lines 438–466 */
/* addr: 0x001f9830  size: 328 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 438
 *   +0x0020 -> line 443
 *   +0x002c -> line 445
 *   +0x0038 -> line 446
 *   +0x0044 -> line 448
 *   +0x005c -> line 449
 *   +0x006c -> line 450
 *   +0x0080 -> line 451
 *   +0x0094 -> line 452
 *   +0x0098 -> line 451
 *   +0x00a8 -> line 452
 *   +0x00b8 -> line 454
 *   +0x00c8 -> line 455
 *   +0x00cc -> line 454
 *   +0x00d4 -> line 455
 *   +0x00e4 -> line 457
 *   +0x00e8 -> line 458
 *   +0x00f0 -> line 461
 *   +0x0100 -> line 462
 *   +0x010c -> line 461
 *   +0x0114 -> line 462
 *   +0x0124 -> line 464
 *   +0x0128 -> line 466
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void AGO3_SimpleSparks::Process(void)
{
    unsigned int i;
    C_Vector VTemp;
    C_Vector* pVect;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ago\AGO3.cpp lines 429–435 */
/* addr: 0x001f9980  size: 56 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 429
 *   +0x0010 -> line 430
 *   +0x001c -> line 432
 *   +0x0024 -> line 433
 *   +0x0028 -> line 435
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void AGO3_SimpleSparks::DesInit(void)
{
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ago\AGO3.cpp lines 395–426 */
/* addr: 0x001f99c0  size: 548 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 395
 *   +0x0004 -> line 402
 *   +0x0008 -> line 395
 *   +0x000c -> line 402
 *   +0x0010 -> line 395
 *   +0x0014 -> line 400
 *   +0x0018 -> line 395
 *   +0x001c -> line 402
 *   +0x0020 -> line 395
 *   +0x0038 -> line 400
 *   +0x0060 -> line 402
 *   +0x0094 -> line 403
 *   +0x00a4 -> line 406
 *   +0x00b4 -> line 407
 *   +0x00c0 -> line 409
 *   +0x00cc -> line 410
 *   +0x00d8 -> line 412
 *   +0x00e8 -> line 413
 *   +0x00f4 -> line 412
 *   +0x0108 -> line 414
 *   +0x0144 -> line 415
 *   +0x0184 -> line 416
 *   +0x01a0 -> line 417
 *   +0x01a4 -> line 416
 *   +0x01a8 -> line 418
 *   +0x01ac -> line 416
 *   +0x01c8 -> line 417
 *   +0x01cc -> line 418
 *   +0x01e0 -> line 419
 *   +0x01e8 -> line 422
 *   +0x01ec -> line 424
 *   +0x01f0 -> line 425
 *   +0x01f4 -> line 424
 *   +0x01fc -> line 425
 *   +0x0200 -> line 426
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void AGO3_SimpleSparks::Init(MTH3D_tdstVector_* pPosition, GLI_tdstMaterial_* pMat1, float fParameter)
{
    unsigned int i;
    C_Vector* pWork;
    C_Vector* pVect;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ago\AGO3.cpp lines 361–362 */
/* addr: 0x001f9bf0  size: 12 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 361
 *   +0x0004 -> line 362
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void AGO3_Part::Process(void)
{
    m_Finished = 1;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ago\AGO3.cpp lines 355–355 */
/* addr: 0x001f9c00  size: 36 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0008 -> line 355
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void AGO3_Part::Display(GLD_tdstViewportAttributes_* hVp)
{
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ago\AGO3.cpp lines 266–289 */
/* addr: 0x001f9c40  size: 168 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 266
 *   +0x0014 -> line 270
 *   +0x0020 -> line 275
 *   +0x0028 -> line 277
 *   +0x0040 -> line 279
 *   +0x0048 -> line 280
 *   +0x0054 -> line 282
 *   +0x0064 -> line 283
 *   +0x006c -> line 284
 *   +0x0070 -> line 285
 *   +0x007c -> line 287
 *   +0x0080 -> line 288
 *   +0x0090 -> line 289
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void AGO3_vBurryDiedParts(void)
{
    AGO3_Part* pPart;
    unsigned int i;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ago\AGO3.cpp lines 238–263 */
/* addr: 0x001f9cf0  size: 180 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 238
 *   +0x0018 -> line 242
 *   +0x0024 -> line 244
 *   +0x002c -> line 246
 *   +0x0044 -> line 248
 *   +0x0060 -> line 249
 *   +0x0068 -> line 251
 *   +0x0078 -> line 253
 *   +0x0084 -> line 256
 *   +0x008c -> line 259
 *   +0x0090 -> line 262
 *   +0x0098 -> line 263
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void AGO3_vDisplayAll(GLD_tdstViewportAttributes_* hVp)
{
    float xAlphaTemp;
    unsigned int i;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ago\AGO3.cpp lines 209–232 */
/* addr: 0x001f9db0  size: 112 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 209
 *   +0x0004 -> line 214
 *   +0x0008 -> line 209
 *   +0x0014 -> line 211
 *   +0x0018 -> line 214
 *   +0x0028 -> line 223
 *   +0x002c -> line 225
 *   +0x0038 -> line 228
 *   +0x0050 -> line 231
 *   +0x005c -> line 232
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void AGO3_vProcessAll(void)
{
    unsigned int* p;
    unsigned int i;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ago\AGO3.cpp lines 191–197 */
/* addr: 0x001f9e20  size: 172 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 191
 *   +0x0018 -> line 192
 *   +0x0080 -> line 193
 *   +0x0094 -> line 197
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void AGO3_vInit(void)
{
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ago\AGO3.cpp lines 7045–7045 */
/* addr: 0x001f9ed0  size: 16 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 7045
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void AGO3_Transition::DesInit(void)
{
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ago\AGO3.cpp lines 7047–7047 */
/* addr: 0x001f9ee0  size: 8 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 7047
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void AGO3_Transition::Display(GLD_tdstViewportAttributes_* hVp)
{
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ago\AGO3.cpp lines 6810–6810 */
/* addr: 0x001f9ef0  size: 12 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 6810
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void AGO3_OrientedTarget::DesInit(void)
{
    ((AGO3_Part*)this)->m_Finished = 1;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ago\AGO3.cpp lines 5865–5865 */
/* addr: 0x001f9f00  size: 16 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 5865
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void AGO3_Snowboard_SnowEffect::DesInit(void)
{
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ago\AGO3.cpp lines 4955–4955 */
/* addr: 0x001f9f10  size: 8 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 4955
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void AGO3_DigitalScoreDisplay::Display(GLD_tdstViewportAttributes_* hVp)
{
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ago\AGO3.cpp lines 4346–4346 */
/* addr: 0x001f9f20  size: 12 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 4346
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void AGO3_LightExplosion::DesInit(void)
{
    ((AGO3_Part*)this)->m_Finished = 1;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ago\AGO3.cpp lines 3571–3571 */
/* addr: 0x001f9f30  size: 16 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 3571
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void AGO3_SwirlingBubbles::DesInit(void)
{
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ago\AGO3.cpp lines 2944–2944 */
/* addr: 0x001f9f40  size: 8 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 2944
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
int AGO3_HurricaneUpper::Kill_Enabled(void)
{
    return 0;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ago\AGO3.cpp lines 2757–2760 */
/* addr: 0x001f9f50  size: 28 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 2757
 *   +0x0010 -> line 2759
 *   +0x0014 -> line 2760
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void AGO3_Chain::Process(void)
{
    /* TODO: decompile from asm/... */
}

/* Originally emitted under Action.c, but this C++ member must be compiled
 * in the translation unit that declares AGO3_ScrollMatUV. */
void AGO3_ScrollMatUV::Display(GLD_tdstViewportAttributes_* hVp)
{
}
