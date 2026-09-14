/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ago\AGO.c */
/* Language: C++ */
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
typedef union anon_0 anon_0;
typedef struct AGO_Part_ AGO_Part_;
typedef struct tdstSubAnimInUse_ tdstSubAnimInUse_;
typedef struct tdstElement3d_ tdstElement3d_;
typedef struct tdstEngineObject_ tdstEngineObject_;
typedef struct _stTimerCount _stTimerCount;
typedef struct tdstEngineTimerStructure_ tdstEngineTimerStructure_;
typedef struct GLD_tdstViewportAttributes_ GLD_tdstViewportAttributes_;
typedef struct GLI_tdstSpecificAttributesFor3D_ GLI_tdstSpecificAttributesFor3D_;
typedef struct LST2_tdstAnchorTotdxHandleToNodeCameraDyn LST2_tdstAnchorTotdxHandleToNodeCameraDyn;
typedef struct LST2_tdstAnchorTotdxHandleToFamilyListDyn LST2_tdstAnchorTotdxHandleToFamilyListDyn;
typedef struct LST2_tdstAnchorTotdxHandleToAlwaysActiveCharacterNodeDyn LST2_tdstAnchorTotdxHandleToAlwaysActiveCharacterNodeDyn;
typedef struct LST2_tdstAnchorToMC_tdxHandleToMainCharacterNodeDyn LST2_tdstAnchorToMC_tdxHandleToMainCharacterNodeDyn;
typedef struct MTH4D_tdstVector_ MTH4D_tdstVector_;
typedef struct MTH4D_tdstMatrix_ MTH4D_tdstMatrix_;
typedef struct MAT_tdstTransformation_ MAT_tdstTransformation_;
typedef struct tdstEngineStructure_ tdstEngineStructure_;
typedef struct COL_tdstBoundingSphere_ COL_tdstBoundingSphere_;
typedef struct SECT_tdstListOfSOCharacters_ SECT_tdstListOfSOCharacters_;
typedef struct SECT_tdstListOfDNMLights_ SECT_tdstListOfDNMLights_;
typedef struct tdstFootStep_ tdstFootStep_;
typedef struct tdstPLA_Hierarchy_ tdstPLA_Hierarchy_;
typedef struct tdstPLA_Deformation_ tdstPLA_Deformation_;
typedef struct tdstFrame3d_ tdstFrame3d_;
typedef struct LST2_tdstAnchorTotdxHandleToSubAnimInUseDyn LST2_tdstAnchorTotdxHandleToSubAnimInUseDyn;
typedef struct tdst3dData_ tdst3dData_;
typedef struct tdstNodeCamera_ tdstNodeCamera_;
typedef struct LST2_tdstAnchorToSECT_tdxHandleOfElementLstDNMLightsDyn LST2_tdstAnchorToSECT_tdxHandleOfElementLstDNMLightsDyn;
typedef struct LST2_tdstAnchorToCINE_tdxHandleToCineDyn LST2_tdstAnchorToCINE_tdxHandleToCineDyn;
typedef struct tdstStandardGame_ tdstStandardGame_;
typedef struct GMT_tdstGameMaterial_ GMT_tdstGameMaterial_;
typedef struct LST2_tdstAnchorToCINE_tdxHandleToCineActorDyn LST2_tdstAnchorToCINE_tdxHandleToCineActorDyn;
typedef struct CINE_tdstCine_ CINE_tdstCine_;
typedef struct LST2_tdstAnchorTotdxHandleToSubAnimOpt LST2_tdstAnchorTotdxHandleToSubAnimOpt;
typedef struct GEO_tdstGeometricObject_ GEO_tdstGeometricObject_;
typedef struct tdstBrain_ tdstBrain_;
typedef struct SECT_tdstListOfSOSectorsInActivityInteraction_ SECT_tdstListOfSOSectorsInActivityInteraction_;
typedef struct tdstSubAnim_ tdstSubAnim_;
typedef union HIE_tduLinkedObject_ HIE_tduLinkedObject_;
typedef struct HIE_tdstSuperObject_ HIE_tdstSuperObject_;
typedef struct tdstEventInTable_ tdstEventInTable_;
typedef struct tdstEvent_ tdstEvent_;
typedef struct stMorphData stMorphData;
typedef struct tdstLipsSynchValue_ tdstLipsSynchValue_;
typedef struct tdstAnim3d_ tdstAnim3d_;
typedef struct GMT_tdstCollideMaterial_ GMT_tdstCollideMaterial_;
typedef struct SECT_tdstListOfSOSectorsInSoundInteraction_ SECT_tdstListOfSOSectorsInSoundInteraction_;
typedef struct AGO_Triangles_ AGO_Triangles_;
typedef struct GLI_tdst2DVertex_ GLI_tdst2DVertex_;
typedef struct LST2_tdstAnchorTotdxHandleToStateOpt LST2_tdstAnchorTotdxHandleToStateOpt;
typedef struct LST2_tdstAnchorTotdxHandleToObjectsTablesListOpt LST2_tdstAnchorTotdxHandleToObjectsTablesListOpt;
typedef struct tdstFamilyList_ tdstFamilyList_;
typedef union _SND_tduRefEvt _SND_tduRefEvt;
typedef struct SCT_tdstListOfSoundEvent_ SCT_tdstListOfSoundEvent_;
typedef struct MTH3D_tdstMatrix_ MTH3D_tdstMatrix_;
typedef struct LST2_tdstAnchorToSECT_tdxHandleOfElementLstCharacterDyn LST2_tdstAnchorToSECT_tdxHandleOfElementLstCharacterDyn;
typedef struct CINE_Manager_ CINE_Manager_;
typedef struct tdstMorphChannelList_ tdstMorphChannelList_;
typedef struct LST2_tdstAnchorToCINE_tdxHandleToChannelLinkDyn LST2_tdstAnchorToCINE_tdxHandleToChannelLinkDyn;
typedef struct CINE_tdstCineActor_ CINE_tdstCineActor_;
typedef struct LST2_tdstAnchorToCHN_tdxHandleToMorphElementDyn LST2_tdstAnchorToCHN_tdxHandleToMorphElementDyn;
typedef struct GLI_tdstCamera_ GLI_tdstCamera_;
typedef struct SECT_tdstListOfStaticLights_ SECT_tdstListOfStaticLights_;
typedef struct LST2_tdstAnchorToSECT_tdxHandleOfElementLstStaticLightsOpt LST2_tdstAnchorToSECT_tdxHandleOfElementLstStaticLightsOpt;
typedef struct AGO_V4D_ AGO_V4D_;
typedef struct AGO2_Part_ AGO2_Part_;
typedef struct GEO_tdstParallelBox_ GEO_tdstParallelBox_;
typedef struct LST2_tdstAnchorToSECT_tdxHandleOfElementLstSoundInteractionOpt LST2_tdstAnchorToSECT_tdxHandleOfElementLstSoundInteractionOpt;
typedef struct LST2_tdstAnchorToWP_tdhGraphNodeDyn LST2_tdstAnchorToWP_tdhGraphNodeDyn;
typedef struct WP_tdstGraph_ WP_tdstGraph_;
typedef struct stInterpolatedPosition stInterpolatedPosition;
typedef struct tdstAChannel_ tdstAChannel_;
typedef struct tdstViewportManagement_ tdstViewportManagement_;
typedef struct AGO_Gauge_ AGO_Gauge_;
typedef struct WP_tdstGraphNode_ WP_tdstGraphNode_;
typedef struct LST2_tdstAnchorToSECT_tdxHandleOfElementLstActivityInteractionOpt LST2_tdstAnchorToSECT_tdxHandleOfElementLstActivityInteractionOpt;
typedef struct LST2_tdstAnchorToSECT_tdxHandleOfElementLstCollisionInteractionOpt LST2_tdstAnchorToSECT_tdxHandleOfElementLstCollisionInteractionOpt;
typedef struct SECT_tdstListOfSOSectorsInCollisionInteraction_ SECT_tdstListOfSOSectorsInCollisionInteraction_;
typedef struct tdstCouple_ tdstCouple_;
typedef struct tdstLanguageStructure_ tdstLanguageStructure_;
typedef struct LST2_tdstAnchorToSECT_tdxHandleOfElementLstGraphicInteractionOpt LST2_tdstAnchorToSECT_tdxHandleOfElementLstGraphicInteractionOpt;
typedef struct AGO_Icone_ AGO_Icone_;
typedef struct GEO_tdstEdge_ GEO_tdstEdge_;
typedef struct SECT_tdstListOfSOSectorsInGraphicInteraction_ SECT_tdstListOfSOSectorsInGraphicInteraction_;
typedef struct CINE_tdstChannelLink_ CINE_tdstChannelLink_;
typedef struct HIE_tdstModifierObject_ HIE_tdstModifierObject_;
typedef struct LST2_tdstAnchorToSCT_tdxHandleOfLstSoundEventOpt LST2_tdstAnchorToSCT_tdxHandleOfLstSoundEventOpt;
typedef struct AGO_Bitmap_ AGO_Bitmap_;
typedef struct tdstPLA_DeformationLink_ tdstPLA_DeformationLink_;
typedef struct GEO_tdstDoubledIndex_ GEO_tdstDoubledIndex_;
typedef struct SECT_tdstSector_ SECT_tdstSector_;
typedef struct tdstGraphChainedListNode_ tdstGraphChainedListNode_;

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

union anon_0 {
    float f_ZLimit; /* +0x0 */
    float fTimeLimit; /* +0x0 */
};

struct AGO_Part_ {
    unsigned int ulType; /* +0x0 */
    unsigned int AnimTime; /* +0x4 */
    float fCreationTime; /* +0x8 */
    unsigned char _extractor_padding_00[4]; /* implicitly added by extractor; +0xc..0xf */
    float a3_fInitialPosition[4]; /* +0x10 */
    float a3_fPosition[4]; /* +0x20 */
    float a3_fDirection[4]; /* +0x30 */
    float a3_fAdditionnalVector[4]; /* +0x40 */
    int AdditionnalMaterial; /* +0x50 */
    float fScale[2]; /* +0x54 */
    float fAnimTimeScale; /* +0x5c */
    float a2_fScaleSpeed[2]; /* +0x60 */
    float fShadeSpeed; /* +0x68 */
    anon_0 LimitParam; /* +0x6c */
    int VisualMaterial; /* +0x70 */
    float Transparency; /* +0x74 */
    unsigned int CreationFrame; /* +0x78 */
    int pTempTexture; /* +0x7c */
    unsigned int Displayed; /* +0x80 */
    unsigned int Channel; /* +0x84 */
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

struct tdstElement3d_ {
    unsigned short wElement : 15; /* bit 0, byte +0x0 */
    unsigned short bf1ActiveStatus : 1; /* bit 15, byte +0x0 */
    unsigned char ucChannelNumber; /* +0x2 */
    unsigned char eTypeOfElement; /* +0x3 */
    unsigned char ucTransparency; /* +0x4 */
    unsigned char ucAnimLevel; /* +0x5 */
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

struct _stTimerCount {
    unsigned long m_ulLowPart; /* +0x0 */
    unsigned char _extractor_padding_00[4]; /* implicitly added by extractor; +0x4..0x7 */
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

struct COL_tdstBoundingSphere_ {
    MTH4D_tdstVector_ stCenterPoint; /* +0x0 */
    float xRadius; /* +0x10 */
};

struct SECT_tdstListOfSOCharacters_ {
    HIE_tdstSuperObject_* hPointerOfCharacter; /* +0x0 */
    SECT_tdstListOfSOCharacters_* hNextBrotherDyn; /* +0x4 */
    SECT_tdstListOfSOCharacters_* hPrevBrotherDyn; /* +0x8 */
    LST2_tdstAnchorToSECT_tdxHandleOfElementLstCharacterDyn* hFatherDyn; /* +0xc */
};

struct SECT_tdstListOfDNMLights_ {
    GLI_tdstLight_* hDNMLights; /* +0x0 */
    SECT_tdstListOfDNMLights_* hNextBrotherDyn; /* +0x4 */
    SECT_tdstListOfDNMLights_* hPrevBrotherDyn; /* +0x8 */
    LST2_tdstAnchorToSECT_tdxHandleOfElementLstDNMLightsDyn* hFatherDyn; /* +0xc */
};

struct tdstFootStep_ {
    MTH4D_tdstVector_ Position; /* +0x0 */
    MTH4D_tdstVector_ Direction1; /* +0x10 */
    MTH4D_tdstVector_ Direction2; /* +0x20 */
    int hVisualMaterial; /* +0x30 */
    float fAlpha; /* +0x34 */
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

struct tdstNodeCamera_ {
    HIE_tdstSuperObject_* p_stSuperObjectCamera; /* +0x0 */
    tdstNodeCamera_* hNextBrotherDyn; /* +0x4 */
    tdstNodeCamera_* hPrevBrotherDyn; /* +0x8 */
    LST2_tdstAnchorTotdxHandleToNodeCameraDyn* hFatherDyn; /* +0xc */
};

struct LST2_tdstAnchorToSECT_tdxHandleOfElementLstDNMLightsDyn {
    SECT_tdstListOfDNMLights_* hFirstElementDyn; /* +0x0 */
    SECT_tdstListOfDNMLights_* hLastElementDyn; /* +0x4 */
    int lNumberOfElementsDyn; /* +0x8 */
};

struct LST2_tdstAnchorToCINE_tdxHandleToCineDyn {
    CINE_tdstCine_* hFirstElementDyn; /* +0x0 */
    CINE_tdstCine_* hLastElementDyn; /* +0x4 */
    int lNumberOfElementsDyn; /* +0x8 */
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

struct GMT_tdstGameMaterial_ {
    int hSoundMaterial; /* +0x0 */
    GMT_tdstCollideMaterial_* hCollideMaterial; /* +0x4 */
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

struct LST2_tdstAnchorTotdxHandleToSubAnimOpt {
    tdstSubAnim_* hFirstElementOpt; /* +0x0 */
    int lNumberOfElementsOpt; /* +0x4 */
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

struct tdstBrain_ {
    AI_tdstMind_* p_stMind; /* +0x0 */
    GMT_tdstGameMaterial_* hLastCollidedGoThroughMaterial; /* +0x4 */
    unsigned char bWarnMechanicsFlag; /* +0x8 */
    unsigned char bActiveDuringTransition; /* +0x9 */
};

struct SECT_tdstListOfSOSectorsInActivityInteraction_ {
    HIE_tdstSuperObject_* hPointerOfSectorSO; /* +0x0 */
};

struct tdstSubAnim_ {
    tdstAnim3d_* p_stSubAnim; /* +0x0 */
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

struct stMorphData {
    unsigned short uwChannelNumber; /* +0x0 */
    unsigned short uwFrameNumber; /* +0x2 */
    unsigned char ucNbTarget; /* +0x4 */
    unsigned char ucAlign[3]; /* +0x5 */
    short a_xIndexTargetMT[10]; /* +0x8 */
    unsigned char a_ucMorphingAmountMT[10]; /* +0x1c */
};

struct tdstLipsSynchValue_ {
    char cCode; /* +0x0 */
    float xX; /* +0x4 */
    float xY; /* +0x8 */
    float xZ; /* +0xc */
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

struct GMT_tdstCollideMaterial_ {
    short wTypeOfZone; /* +0x0 */
    unsigned short xIdentifier; /* +0x2 */
    MTH3D_tdstVector_ stDirection; /* +0x4 */
    float xCoeff; /* +0x10 */
    unsigned short wTypeForAi; /* +0x14 */
};

struct SECT_tdstListOfSOSectorsInSoundInteraction_ {
    HIE_tdstSuperObject_* hPointerOfSectorSO; /* +0x0 */
    int lVolume; /* +0x4 */
};

struct AGO_Triangles_ {
    float c[3][3]; /* +0x0 */
    float uv[3][2]; /* +0x24 */
    int VisualMaterial; /* +0x3c */
    unsigned int DelayTime; /* +0x40 */
    unsigned int type; /* +0x44 */
    float fTransparency; /* +0x48 */
    unsigned int CreationTime; /* +0x4c */
};

struct GLI_tdst2DVertex_ {
    float xX; /* +0x0 */
    float xY; /* +0x4 */
    float xOoZ; /* +0x8 */
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

union _SND_tduRefEvt {
    unsigned int Id; /* +0x0 */
    _SND_tdstBlockEvent* pstPtr; /* +0x0 */
};

struct SCT_tdstListOfSoundEvent_ {
    HIE_tdstSuperObject_* hPointerOfSectorSO; /* +0x0 */
    _SND_tduRefEvt uSoundEvent; /* +0x4 */
};

struct MTH3D_tdstMatrix_ {
    MTH3D_tdstVector_ stCol_0; /* +0x0 */
    MTH3D_tdstVector_ stCol_1; /* +0xc */
    MTH3D_tdstVector_ stCol_2; /* +0x18 */
};

struct LST2_tdstAnchorToSECT_tdxHandleOfElementLstCharacterDyn {
    SECT_tdstListOfSOCharacters_* hFirstElementDyn; /* +0x0 */
    SECT_tdstListOfSOCharacters_* hLastElementDyn; /* +0x4 */
    int lNumberOfElementsDyn; /* +0x8 */
};

struct CINE_Manager_ {
    LST2_tdstAnchorToCINE_tdxHandleToCineDyn hCineList; /* +0x0 */
    MAT_tdstTransformation_ gp_stFixedCameraMatrix; /* +0x10 */
    HIE_tdstSuperObject_* gp_stSPOHandleCamera; /* +0x70 */
};

struct tdstMorphChannelList_ {
    tdstMorphChannelList_* hNextBrotherDyn; /* +0x0 */
    tdstMorphChannelList_* hPrevBrotherDyn; /* +0x4 */
    LST2_tdstAnchorToCHN_tdxHandleToMorphElementDyn* hFatherDyn; /* +0x8 */
    unsigned short uwChannelNumber; /* +0xc */
    short MorphListIndex; /* +0xe */
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

struct LST2_tdstAnchorToCHN_tdxHandleToMorphElementDyn {
    tdstMorphChannelList_* hFirstElementDyn; /* +0x0 */
    tdstMorphChannelList_* hLastElementDyn; /* +0x4 */
    int lNumberOfElementsDyn; /* +0x8 */
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

struct SECT_tdstListOfStaticLights_ {
    GLI_tdstLight_* hStaticLights; /* +0x0 */
};

struct LST2_tdstAnchorToSECT_tdxHandleOfElementLstStaticLightsOpt {
    SECT_tdstListOfStaticLights_* hFirstElementOpt; /* +0x0 */
    int lNumberOfElementsOpt; /* +0x4 */
};

struct AGO_V4D_ {
    float xX; /* +0x0 */
    float xY; /* +0x4 */
    float xZ; /* +0x8 */
    float xW; /* +0xc */
};

struct AGO2_Part_ {
    unsigned int ulType; /* +0x0 */
    unsigned int ulBaseID; /* +0x4 */
    unsigned int Channel; /* +0x8 */
    int pMaterial1; /* +0xc */
    int pMaterial2; /* +0x10 */
    void (*pDisplayFnct)(AGO2_Part_*); /* +0x14 */
    void (*pProcessFnct)(AGO2_Part_*); /* +0x18 */
    void (*pTransparencyFunction)(AGO2_Part_*); /* +0x1c */
    void (*pSizingFunction)(AGO2_Part_*); /* +0x20 */
    HIE_tdstSuperObject_* pLauchingCharacter; /* +0x24 */
    unsigned int AnimTime; /* +0x28 */
    unsigned int InternalHasBeenDisplayed; /* +0x2c */
    float fAnimTimeScale; /* +0x30 */
    unsigned int AssociatedViewport; /* +0x34 */
    AGO_V4D_ Position; /* +0x38 */
    AGO_V4D_ Direction; /* +0x48 */
    float xTransparency; /* +0x58 */
    float xTransparencySpeed; /* +0x5c */
    float xSize[2]; /* +0x60 */
    float xShrinkingSpeed; /* +0x68 */
    float xLimit; /* +0x6c */
    unsigned int hGroup; /* +0x70 */
    unsigned int GroupNumber; /* +0x74 */
    AGO_V4D_ LightColor; /* +0x78 */
    float xLightNear; /* +0x88 */
    float xLightFar; /* +0x8c */
    AGO_V4D_ Vector1; /* +0x90 */
    AGO_V4D_ Vector2; /* +0xa0 */
    AGO_V4D_ Vector3; /* +0xb0 */
    AGO_V4D_ Vector4; /* +0xc0 */
};

struct GEO_tdstParallelBox_ {
    MTH4D_tdstVector_ stMinPoint; /* +0x0 */
    MTH4D_tdstVector_ stMaxPoint; /* +0x10 */
};

struct LST2_tdstAnchorToSECT_tdxHandleOfElementLstSoundInteractionOpt {
    SECT_tdstListOfSOSectorsInSoundInteraction_* hFirstElementOpt; /* +0x0 */
    int lNumberOfElementsOpt; /* +0x4 */
};

struct LST2_tdstAnchorToWP_tdhGraphNodeDyn {
    WP_tdstGraphNode_* hFirstElementDyn; /* +0x0 */
    WP_tdstGraphNode_* hLastElementDyn; /* +0x4 */
    int lNumberOfElementsDyn; /* +0x8 */
};

struct WP_tdstGraph_ {
    LST2_tdstAnchorToWP_tdhGraphNodeDyn m_hListOfNode; /* +0x0 */
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

struct tdstViewportManagement_ {
    HIE_tdstSuperObject_* hCamera; /* +0x0 */
    HIE_tdstSuperObject_* hTempCamera; /* +0x4 */
    GLI_tdstCamera_* p_stCamera; /* +0x8 */
    unsigned char bValid; /* +0xc */
};

struct AGO_Gauge_ {
    float Coords[4]; /* +0x0 */
    int EmptyMaterial; /* +0x10 */
    int FullMaterial; /* +0x14 */
    float Position; /* +0x18 */
    int Transparency; /* +0x1c */
    unsigned char DestinationViewport; /* +0x20 */
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

struct LST2_tdstAnchorToSECT_tdxHandleOfElementLstActivityInteractionOpt {
    SECT_tdstListOfSOSectorsInActivityInteraction_* hFirstElementOpt; /* +0x0 */
    int lNumberOfElementsOpt; /* +0x4 */
};

struct LST2_tdstAnchorToSECT_tdxHandleOfElementLstCollisionInteractionOpt {
    SECT_tdstListOfSOSectorsInCollisionInteraction_* hFirstElementOpt; /* +0x0 */
    int lNumberOfElementsOpt; /* +0x4 */
};

struct SECT_tdstListOfSOSectorsInCollisionInteraction_ {
    HIE_tdstSuperObject_* hPointerOfSectorSO; /* +0x0 */
};

struct tdstCouple_ {
    unsigned short wChild; /* +0x0 */
    unsigned short wFather; /* +0x2 */
};

struct tdstLanguageStructure_ {
    char szLanguageCode[20]; /* +0x0 */
    char szLanguageText[20]; /* +0x14 */
};

struct LST2_tdstAnchorToSECT_tdxHandleOfElementLstGraphicInteractionOpt {
    SECT_tdstListOfSOSectorsInGraphicInteraction_* hFirstElementOpt; /* +0x0 */
    int lNumberOfElementsOpt; /* +0x4 */
};

struct AGO_Icone_ {
    float Coords[4]; /* +0x0 */
    float fZ; /* +0x10 */
    int Material; /* +0x14 */
    int Transparency; /* +0x18 */
    unsigned char DestinationViewport; /* +0x1c */
    float UVs[2][2]; /* +0x20 */
};

struct GEO_tdstEdge_ {
    short xPoints[2]; /* +0x0 */
    MTH3D_tdstVector_ st_VectorPoints[2]; /* +0x4 */
};

struct SECT_tdstListOfSOSectorsInGraphicInteraction_ {
    short wLevelOfDetail; /* +0x0 */
    char cDisplayMode; /* +0x2 */
    HIE_tdstSuperObject_* hPointerOfSectorSO; /* +0x4 */
};

struct CINE_tdstChannelLink_ {
    HIE_tdstSuperObject_* hSPOLinked; /* +0x0 */
    int lIndexOfChannel; /* +0x4 */
    CINE_tdstChannelLink_* hNextBrotherDyn; /* +0x8 */
    CINE_tdstChannelLink_* hPrevBrotherDyn; /* +0xc */
    LST2_tdstAnchorToCINE_tdxHandleToChannelLinkDyn* hFatherDyn; /* +0x10 */
};

struct HIE_tdstModifierObject_ {
    GEO_tdstGeometricObject_* p_stGeometricObject; /* +0x0 */
    int lMulIntensity; /* +0x4 */
    int lAddIntensity; /* +0x8 */
};

struct LST2_tdstAnchorToSCT_tdxHandleOfLstSoundEventOpt {
    SCT_tdstListOfSoundEvent_* hFirstElementOpt; /* +0x0 */
    int lNumberOfElementsOpt; /* +0x4 */
};

struct AGO_Bitmap_ {
    float a_fCoords[4]; /* +0x0 */
    unsigned long ulWidth; /* +0x10 */
    unsigned char _extractor_padding_00[4]; /* implicitly added by extractor; +0x14..0x17 */
    unsigned long ulHeight; /* +0x18 */
    unsigned char _extractor_padding_01[4]; /* implicitly added by extractor; +0x1c..0x1f */
    int p_vBitmapSurface; /* +0x20 */
    unsigned char ucDestinationViewport; /* +0x24 */
};

struct tdstPLA_DeformationLink_ {
    unsigned short wChannel1; /* +0x0 */
    unsigned short wBorder1; /* +0x2 */
    unsigned short wChannel2; /* +0x4 */
    unsigned short wBorder2; /* +0x6 */
};

struct GEO_tdstDoubledIndex_ {
    short a2_xIndex[2]; /* +0x0 */
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

struct tdstGraphChainedListNode_ {
    WP_tdstGraph_* GraphChainedListNodeInfo; /* +0x0 */
    tdstGraphChainedListNode_* p_NextGraphChainedListNode; /* +0x4 */
};

float g_a3f_WindDirection[3];
int AGO_g_OldMovieMaterial;
int TextureBlanche;
int g_pHeatSFXMaterial;
unsigned int g_ulNumberOfAgos;
int g_AGO_MustReinitStaticVars;
int AGO_g_OddFrame;
char AGO_bPrevAGOWasExtraParam;
int g_AGO_PloufMaterial;
int AGO_gExtraMaterial;
int AGO_g_BigRainMaterial;
int AGO_g_WaterLightMaterial;
unsigned char g_bUsingMapMondeAGOs;
int AGO_g_b_DisplayingAGOs;
int AGO_g_pCurrentMaterial;
static float g_OldPloufDirection[3];
char g_bForceWhiteFog;
char g_DoSmallPlouf;
int g_b_IsRaining;
float g_ffFrameTime;
float g_ffLastFrameTime;
float g_fTimeDifference;
int g_AGO_EnvMaterial;
int g_NumberOfZeldaAgos;
int AGO_g_iIndexOfClippedSprite;
float g_fNextPlouf;
char AGO_g_MainCharacterPreviousPositionIsValid;
unsigned int AGO_G_CurrentVU1Frame;
float AGO_G_fCurrentTime;
char g_bCanResize2DSpriteWithPercentAccordingToViewportRatio;
int AGO_g_VisualMaterialForAuras;
int AGO_g_DisplayingAuraCharacter;
int HasAGO2BeenInit;
int g_b_IsRainy;
unsigned int g_NbAGO_Triangles;
unsigned int g_AGO_NbEngineFramesSinceStart;
unsigned int AGO_g_NbFootSteps;
tdstFootStep_ AGO_g_FootSteps[100];
int LUM_g_pMaterial;
float LUM_g_fSquaredDistance;
unsigned int LUM_g_NumberOfLums;
unsigned int LUM_g_NumberOfActiveLums;
char LUM_g_LumActivity[150];
float LUM_g_LumPositions[150][4];
AGO_Triangles_ g_pAGO_Triangles[200];
int AGO_g_SuperObjectForAuras;
float AGO_G_fCurrentTime_Saved;
unsigned int AGO_g_CurrentFrame_Saved;
unsigned int AGO_g_PreviousCurrentFrame_Saved;
AGO_Bitmap_ g_stTheBitmaps[20];
AGO_Gauge_ g_TheGauges[40];
AGO_Icone_ g_TheIcones[200];
MTH3D_tdstVector_ AGO_g_stMainCharacterCurrentPosition;
MTH3D_tdstVector_ AGO_g_stMainCharacterPreviousPosition;
MTH3D_tdstVector_ AGO_g_stMainCharacterFinalPosition;
float AGO_gExtraFloatParameter;
float AGO_gExtraParameter2[3];
float AGO_gExtraParameter1[3];
float g_AGO_AnimTimeLag;
float g_AGO_AnimTimeScale;
AGO_Part_ g_AGO[501];
unsigned int AGO_g_PreviousCurrentFrame;
unsigned int AGO_g_CurrentFrame;
int GLI_g_AnimatedTextureToUse;
unsigned int GLI_g_DontRefreshAnimated;
char GLI_g_StereoVisionMode;
char GLI_g_AfterEffect;
unsigned int GLI_g_MustBlocIn30FPS;
int AGO_g_SuperObjectForAGOs;
char GLI_g_NextMapWillHaveAStereoScopicEffect;
char GLI_g_NextMapWillHaveACinemaEffect;
float GLI_g_MotionBlurIntensity;
float GLI_g_FarValue;
float GLI_g_NearValue;
float AGO2_g_pfCosTable[512];
unsigned char g_bInGameMenu;
unsigned char g_bOneShotAnim;
unsigned char g_bTakeCareOfAnimationCoordination;
unsigned int SCT_g_DrawingMirrored;
tdstEngineStructure_ g_stEngineStructure;
unsigned char g_bHasTextureAnimationFinished;
float g_BaseTimeForParticleAnimation;
unsigned char g_ucCurrentViewport;
float gs_fCoefOfMultiplicationForAnimatedTexture;

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ago\AGO.c lines 93–143 */
/* addr: 0x001d1410  size: 392 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 93
 *   +0x001c -> line 98
 *   +0x002c -> line 100
 *   +0x0038 -> line 102
 *   +0x0054 -> line 103
 *   +0x006c -> line 104
 *   +0x0074 -> line 111
 *   +0x0078 -> line 110
 *   +0x007c -> line 111
 *   +0x0088 -> line 113
 *   +0x009c -> line 115
 *   +0x00a4 -> line 117
 *   +0x00b4 -> line 118
 *   +0x00b8 -> line 119
 *   +0x00c0 -> line 121
 *   +0x00cc -> line 125
 *   +0x00d0 -> line 126
 *   +0x00e4 -> line 128
 *   +0x00f8 -> line 130
 *   +0x0104 -> line 132
 *   +0x010c -> line 133
 *   +0x0110 -> line 134
 *   +0x013c -> line 135
 *   +0x0144 -> line 137
 *   +0x0158 -> line 138
 *   +0x0160 -> line 141
 *   +0x0168 -> line 143
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
/* The .c TU is built in C mode.  This orphaned C++ method is represented by
 * its recovered ABI symbol until its owning class is emitted in this TU. */
void RebuildSwitch__10SwitchDataFv(void)
{
    unsigned int pos;
    unsigned int i;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ago\AGO.c lines 8674–8708 */
/* addr: 0x001d15a0  size: 800 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 8674
 *   +0x0014 -> line 8678
 *   +0x0018 -> line 8674
 *   +0x002c -> line 8678
 *   +0x0038 -> line 8681
 *   +0x003c -> line 8680
 *   +0x0040 -> line 8681
 *   +0x0044 -> line 8682
 *   +0x008c -> line 8683
 *   +0x0098 -> line 8684
 *   +0x00a0 -> line 8685
 *   +0x00b4 -> line 8686
 *   +0x00c0 -> line 8689
 *   +0x00c8 -> line 8686
 *   +0x00e0 -> line 8687
 *   +0x00f8 -> line 8689
 *   +0x01d4 -> line 8690
 *   +0x0294 -> line 8692
 *   +0x02c0 -> line 8693
 *   +0x02d8 -> line 8695
 *   +0x02dc -> line 8696
 *   +0x02e4 -> line 8697
 *   +0x02e8 -> line 8698
 *   +0x02f0 -> line 8701
 *   +0x02f4 -> line 8702
 *   +0x0300 -> line 8703
 *   +0x030c -> line 8706
 *   +0x0314 -> line 8707
 *   +0x0318 -> line 8708
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void AGO_vCreateFootStep(float* Pos, float* Direction, void* hVisualMaterial)
{
    unsigned int Mini;
    unsigned int i;
    MTH4D_tdstVector_ Temp;
    tdstFootStep_* p;
    MTH4D_tdstVector_ Normal;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ago\AGO.c lines 8357–8387 */
/* addr: 0x001d18c0  size: 212 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 8361
 *   +0x0004 -> line 8358
 *   +0x000c -> line 8361
 *   +0x0014 -> line 8357
 *   +0x0018 -> line 8358
 *   +0x001c -> line 8361
 *   +0x0030 -> line 8363
 *   +0x003c -> line 8367
 *   +0x0044 -> line 8366
 *   +0x004c -> line 8368
 *   +0x0054 -> line 8367
 *   +0x0058 -> line 8368
 *   +0x005c -> line 8366
 *   +0x0060 -> line 8369
 *   +0x0070 -> line 8371
 *   +0x0080 -> line 8373
 *   +0x0084 -> line 8374
 *   +0x008c -> line 8377
 *   +0x009c -> line 8380
 *   +0x00b0 -> line 8382
 *   +0x00b4 -> line 8383
 *   +0x00c0 -> line 8382
 *   +0x00c8 -> line 8383
 *   +0x00cc -> line 8387
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
unsigned int LUM_TestPosition(float* pPosition)
{
    float z;
    float y;
    float x;
    float fSquaredDistance;
    float fMinSqDistance;
    unsigned int ClosestIndex;
    unsigned int i;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ago\AGO.c lines 8083–8092 */
/* addr: 0x001d19a0  size: 96 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 8083
 *   +0x001c -> line 8086
 *   +0x0034 -> line 8088
 *   +0x003c -> line 8089
 *   +0x0040 -> line 8088
 *   +0x0044 -> line 8090
 *   +0x0058 -> line 8092
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void AGO_vClearUnwanted110AGOsForDemos(void)
{
    AGO_Part_* p;
    unsigned int i;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ago\AGO.c lines 8011–8066 */
/* addr: 0x001d1a00  size: 508 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 8011
 *   +0x0020 -> line 8019
 *   +0x0024 -> line 8017
 *   +0x002c -> line 8019
 *   +0x0034 -> line 8021
 *   +0x0040 -> line 8023
 *   +0x0050 -> line 8025
 *   +0x00e8 -> line 8028
 *   +0x00f0 -> line 8030
 *   +0x0104 -> line 8036
 *   +0x0120 -> line 8038
 *   +0x0134 -> line 8040
 *   +0x0148 -> line 8042
 *   +0x014c -> line 8043
 *   +0x0154 -> line 8047
 *   +0x0174 -> line 8055
 *   +0x0180 -> line 8059
 *   +0x01ac -> line 8060
 *   +0x01c0 -> line 8063
 *   +0x01cc -> line 8064
 *   +0x01d0 -> line 8065
 *   +0x01e0 -> line 8066
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void AGO_vDisplayTriangles(GLD_tdstViewportAttributes_* p_stVpt)
{
    AGO_Triangles_* p;
    unsigned int i;
    unsigned int j;

    g_AGO_NbEngineFramesSinceStart++;

    for (i = 0; i < g_NbAGO_Triangles; i++)
    {
        p = &g_pAGO_Triangles[i];
        if ((p->type & 2) != 0)
        {
            p->fTransparency = 255.0f -
                ((255.0f * (float)(g_AGO_NbEngineFramesSinceStart - p->CreationTime - 1)) / (float)p->DelayTime);
        }

        GLI_vSetGlobalAlpha(p->fTransparency);
        GLI_vDisplayWorldTriangle(p_stVpt, p->c[0], p->uv[0], p->VisualMaterial);

        if ((g_AGO_NbEngineFramesSinceStart - p->CreationTime) >= p->DelayTime)
        {
            p->type |= 0x80000000;
        }
    }

    j = 0;
    while (j < g_NbAGO_Triangles)
    {
        if ((g_pAGO_Triangles[j].type & 0x80000000) != 0)
        {
            for (i = j + 1; i < g_NbAGO_Triangles; i++)
            {
                memcpy(&g_pAGO_Triangles[i - 1], &g_pAGO_Triangles[i], sizeof(AGO_Triangles_));
            }
            g_NbAGO_Triangles--;
        }
        else
        {
            j++;
        }
    }
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ago\AGO.c lines 7964–8007 */
/* addr: 0x001d1c00  size: 352 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 7964
 *   +0x0010 -> line 7969
 *   +0x0014 -> line 7967
 *   +0x0018 -> line 7969
 *   +0x001c -> line 7971
 *   +0x0024 -> line 7973
 *   +0x0040 -> line 7975
 *   +0x0044 -> line 7976
 *   +0x0048 -> line 7978
 *   +0x0058 -> line 7979
 *   +0x006c -> line 7980
 *   +0x0074 -> line 7983
 *   +0x0090 -> line 7986
 *   +0x0094 -> line 8001
 *   +0x009c -> line 7998
 *   +0x00a0 -> line 8001
 *   +0x00a4 -> line 7986
 *   +0x00a8 -> line 7990
 *   +0x00b0 -> line 7991
 *   +0x00b8 -> line 7992
 *   +0x00f0 -> line 7994
 *   +0x00f8 -> line 7995
 *   +0x0100 -> line 7996
 *   +0x0108 -> line 7998
 *   +0x010c -> line 8001
 *   +0x0140 -> line 8005
 *   +0x0158 -> line 8007
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void AGO_vCreateTriangle(float* c1, float* c2, float* c3, void* VisualMat, float U1, float V1, float U2, float V2, float U3, float V3, float DelayTime, unsigned int Parameter)
{
    int LeastIndex;
    unsigned int Least;
    int i;
    AGO_Triangles_* p;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ago\AGO.c lines 7803–7831 */
/* addr: 0x001d1d60  size: 132 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 7803
 *   +0x0004 -> line 7816
 *   +0x0008 -> line 7803
 *   +0x0010 -> line 7816
 *   +0x0014 -> line 7824
 *   +0x0018 -> line 7803
 *   +0x001c -> line 7808
 *   +0x0028 -> line 7816
 *   +0x0030 -> line 7819
 *   +0x0038 -> line 7824
 *   +0x0048 -> line 7825
 *   +0x004c -> line 7819
 *   +0x0050 -> line 7825
 *   +0x0060 -> line 7826
 *   +0x0074 -> line 7830
 *   +0x007c -> line 7831
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void AGO_Define_OrthogonalVectorsV1Flat(MTH3D_tdstVector_* p_stDirection, MTH3D_tdstVector_* p_stV1, MTH3D_tdstVector_* p_stV2)
{
    float fNorm1;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ago\AGO.c lines 7764–7792 */
/* addr: 0x001d1df0  size: 232 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 7764
 *   +0x0008 -> line 7765
 *   +0x000c -> line 7764
 *   +0x0014 -> line 7769
 *   +0x0020 -> line 7765
 *   +0x0024 -> line 7770
 *   +0x002c -> line 7771
 *   +0x0030 -> line 7769
 *   +0x0034 -> line 7771
 *   +0x0038 -> line 7770
 *   +0x003c -> line 7774
 *   +0x005c -> line 7775
 *   +0x007c -> line 7777
 *   +0x0098 -> line 7780
 *   +0x00a0 -> line 7785
 *   +0x00ac -> line 7786
 *   +0x00b0 -> line 7780
 *   +0x00b4 -> line 7786
 *   +0x00c4 -> line 7787
 *   +0x00d8 -> line 7791
 *   +0x00e0 -> line 7792
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void AGO_Define_OrthogonalVectors(MTH3D_tdstVector_* p_stDirection, MTH3D_tdstVector_* p_stV1, MTH3D_tdstVector_* p_stV2)
{
    float fNorm3;
    float fNorm2;
    float fNorm1;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ago\AGO.c lines 5880–7732 */
/* addr: 0x001d1ee0  size: 16408 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 5880
 *   +0x0004 -> line 5886
 *   +0x0008 -> line 5880
 *   +0x000c -> line 5888
 *   +0x0010 -> line 5880
 *   +0x0014 -> line 5889
 *   +0x0018 -> line 5880
 *   +0x001c -> line 5886
 *   +0x0020 -> line 5880
 *   +0x0054 -> line 5886
 *   +0x005c -> line 5888
 *   +0x0074 -> line 5889
 *   +0x0088 -> line 5891
 *   +0x05b4 -> line 5901
 *   +0x05e0 -> line 5903
 *   +0x05e8 -> line 5909
 *   +0x05f0 -> line 5911
 *   +0x062c -> line 5912
 *   +0x066c -> line 5913
 *   +0x06b0 -> line 5914
 *   +0x06c0 -> line 5915
 *   +0x06c8 -> line 5914
 *   +0x06d4 -> line 5915
 *   +0x06d8 -> line 5914
 *   +0x06dc -> line 5915
 *   +0x06e0 -> line 5914
 *   +0x06fc -> line 5915
 *   +0x0700 -> line 5914
 *   +0x0704 -> line 5915
 *   +0x070c -> line 5916
 *   +0x0718 -> line 5918
 *   +0x0720 -> line 5928
 *   +0x0744 -> line 5930
 *   +0x0748 -> line 5928
 *   +0x07c8 -> line 5932
 *   +0x0838 -> line 5933
 *   +0x0864 -> line 5934
 *   +0x0888 -> line 5935
 *   +0x0898 -> line 5937
 *   +0x08a0 -> line 5946
 *   +0x0930 -> line 5947
 *   +0x0934 -> line 5946
 *   +0x0938 -> line 5947
 *   +0x094c -> line 5948
 *   +0x0950 -> line 5947
 *   +0x0954 -> line 5948
 *   +0x0968 -> line 5947
 *   +0x0974 -> line 5948
 *   +0x0978 -> line 5947
 *   +0x0980 -> line 5948
 *   +0x0988 -> line 5949
 *   +0x0990 -> line 5951
 *   +0x0998 -> line 5959
 *   +0x09a8 -> line 5961
 *   +0x09b0 -> line 5968
 *   +0x09c0 -> line 5970
 *   +0x09c8 -> line 5979
 *   +0x09dc -> line 5980
 *   +0x09e0 -> line 5979
 *   +0x09ec -> line 5980
 *   +0x09f0 -> line 5979
 *   +0x09f4 -> line 5980
 *   +0x09fc -> line 5979
 *   +0x0a00 -> line 5980
 *   +0x0a04 -> line 5979
 *   +0x0a18 -> line 5980
 *   +0x0a20 -> line 5982
 *   +0x0a48 -> line 5984
 *   +0x0a84 -> line 5985
 *   +0x0ac4 -> line 5986
 *   +0x0b08 -> line 5987
 *   +0x0b18 -> line 5988
 *   +0x0b20 -> line 5987
 *   +0x0b2c -> line 5988
 *   +0x0b30 -> line 5987
 *   +0x0b34 -> line 5988
 *   +0x0b38 -> line 5987
 *   +0x0b54 -> line 5988
 *   +0x0b58 -> line 5987
 *   +0x0b5c -> line 5988
 *   +0x0b64 -> line 5989
 *   +0x0b70 -> line 5991
 *   +0x0b78 -> line 6036
 *   +0x0b88 -> line 6037
 *   +0x0b90 -> line 6043
 *   +0x0ba4 -> line 6044
 *   +0x0bac -> line 6046
 *   +0x0c04 -> line 6047
 *   +0x0c24 -> line 6048
 *   +0x0c30 -> line 6050
 *   +0x0c38 -> line 6055
 *   +0x0c48 -> line 6056
 *   +0x0c50 -> line 6058
 *   +0x0c58 -> line 6065
 *   +0x0d20 -> line 6067
 *   +0x0d28 -> line 6080
 *   +0x0d34 -> line 6082
 *   +0x0d54 -> line 6083
 *   +0x0d5c -> line 6086
 *   +0x0d68 -> line 6089
 *   +0x0d70 -> line 6104
 *   +0x0d88 -> line 6106
 *   +0x0d8c -> line 6104
 *   +0x0dc0 -> line 6106
 *   +0x0dec -> line 6107
 *   +0x0df0 -> line 6106
 *   +0x0df8 -> line 6107
 *   +0x0e70 -> line 6108
 *   +0x0ed4 -> line 6121
 *   +0x0ed8 -> line 6108
 *   +0x0edc -> line 6111
 *   +0x0ee4 -> line 6121
 *   +0x0ee8 -> line 6108
 *   +0x0eec -> line 6115
 *   +0x0ef0 -> line 6121
 *   +0x0ef4 -> line 6108
 *   +0x0efc -> line 6111
 *   +0x0f00 -> line 6110
 *   +0x0f04 -> line 6112
 *   +0x0f10 -> line 6121
 *   +0x0f14 -> line 6110
 *   +0x0f18 -> line 6121
 *   +0x0f1c -> line 6111
 *   +0x0f20 -> line 6121
 *   +0x0f24 -> line 6111
 *   +0x0f28 -> line 6121
 *   +0x0f2c -> line 6110
 *   +0x0f30 -> line 6111
 *   +0x0f34 -> line 6112
 *   +0x0f40 -> line 6114
 *   +0x0f44 -> line 6110
 *   +0x0f48 -> line 6111
 *   +0x0f4c -> line 6112
 *   +0x0f50 -> line 6114
 *   +0x0f68 -> line 6115
 *   +0x0f70 -> line 6121
 *   +0x0f74 -> line 6115
 *   +0x0f78 -> line 6117
 *   +0x0f80 -> line 6118
 *   +0x0f84 -> line 6121
 *   +0x0f8c -> line 6118
 *   +0x0f94 -> line 6119
 *   +0x0f9c -> line 6121
 *   +0x0fa4 -> line 6123
 *   +0x0fa8 -> line 6130
 *   +0x0fac -> line 6123
 *   +0x0fb0 -> line 6130
 *   +0x0fbc -> line 6124
 *   +0x0fc0 -> line 6130
 *   +0x0fcc -> line 6125
 *   +0x0fd0 -> line 6130
 *   +0x0fd4 -> line 6126
 *   +0x0fd8 -> line 6123
 *   +0x0fe0 -> line 6124
 *   +0x0fe4 -> line 6130
 *   +0x0fec -> line 6124
 *   +0x0ff4 -> line 6125
 *   +0x1000 -> line 6127
 *   +0x1008 -> line 6130
 *   +0x1010 -> line 6133
 *   +0x1018 -> line 6142
 *   +0x1028 -> line 6143
 *   +0x1030 -> line 6142
 *   +0x103c -> line 6143
 *   +0x1040 -> line 6142
 *   +0x1044 -> line 6143
 *   +0x1048 -> line 6142
 *   +0x104c -> line 6143
 *   +0x1054 -> line 6142
 *   +0x1074 -> line 6143
 *   +0x107c -> line 6144
 *   +0x1088 -> line 6146
 *   +0x1090 -> line 6159
 *   +0x10a4 -> line 6160
 *   +0x10ac -> line 6162
 *   +0x1104 -> line 6163
 *   +0x1124 -> line 6164
 *   +0x1130 -> line 6166
 *   +0x1138 -> line 6174
 *   +0x113c -> line 6175
 *   +0x1144 -> line 6176
 *   +0x114c -> line 6175
 *   +0x1150 -> line 6176
 *   +0x1168 -> line 6177
 *   +0x1170 -> line 6184
 *   +0x1194 -> line 6185
 *   +0x119c -> line 6188
 *   +0x12fc -> line 6189
 *   +0x1304 -> line 6200
 *   +0x1320 -> line 6204
 *   +0x1330 -> line 6207
 *   +0x13c8 -> line 6209
 *   +0x146c -> line 6212
 *   +0x147c -> line 6214
 *   +0x1490 -> line 6215
 *   +0x1498 -> line 6214
 *   +0x149c -> line 6215
 *   +0x14c0 -> line 6218
 *   +0x14c4 -> line 6220
 *   +0x14c8 -> line 6218
 *   +0x14dc -> line 6222
 *   +0x14e4 -> line 6226
 *   +0x1508 -> line 6227
 *   +0x150c -> line 6229
 *   +0x1514 -> line 6248
 *   +0x151c -> line 6251
 *   +0x152c -> line 6253
 *   +0x1530 -> line 6257
 *   +0x1534 -> line 6253
 *   +0x1538 -> line 6259
 *   +0x153c -> line 6257
 *   +0x1540 -> line 6259
 *   +0x1544 -> line 6253
 *   +0x1548 -> line 6259
 *   +0x1550 -> line 6257
 *   +0x1554 -> line 6258
 *   +0x1560 -> line 6259
 *   +0x1564 -> line 6258
 *   +0x1568 -> line 6259
 *   +0x157c -> line 6258
 *   +0x1580 -> line 6259
 *   +0x159c -> line 6258
 *   +0x15a0 -> line 6259
 *   +0x15ac -> line 6261
 *   +0x15bc -> line 6264
 *   +0x15c8 -> line 6267
 *   +0x15d4 -> line 6264
 *   +0x15d8 -> line 6265
 *   +0x15f8 -> line 6267
 *   +0x1600 -> line 6269
 *   +0x1604 -> line 6271
 *   +0x1608 -> line 6272
 *   +0x1610 -> line 6274
 *   +0x167c -> line 6276
 *   +0x1680 -> line 6274
 *   +0x1694 -> line 6275
 *   +0x1698 -> line 6274
 *   +0x16a4 -> line 6276
 *   +0x16a8 -> line 6274
 *   +0x16c0 -> line 6275
 *   +0x16c4 -> line 6276
 *   +0x16cc -> line 6278
 *   +0x16e4 -> line 6280
 *   +0x16f4 -> line 6281
 *   +0x16fc -> line 6280
 *   +0x1700 -> line 6281
 *   +0x1704 -> line 6280
 *   +0x170c -> line 6281
 *   +0x1744 -> line 6282
 *   +0x1748 -> line 6284
 *   +0x1758 -> line 6285
 *   +0x1760 -> line 6284
 *   +0x1768 -> line 6285
 *   +0x1770 -> line 6284
 *   +0x1784 -> line 6285
 *   +0x1788 -> line 6284
 *   +0x179c -> line 6285
 *   +0x17a8 -> line 6286
 *   +0x17b8 -> line 6289
 *   +0x17c0 -> line 6295
 *   +0x17cc -> line 6297
 *   +0x17d0 -> line 6299
 *   +0x17d4 -> line 6297
 *   +0x17d8 -> line 6298
 *   +0x17dc -> line 6300
 *   +0x17e0 -> line 6298
 *   +0x17e4 -> line 6300
 *   +0x17e8 -> line 6296
 *   +0x17ec -> line 6301
 *   +0x17f0 -> line 6295
 *   +0x17f4 -> line 6302
 *   +0x17f8 -> line 6301
 *   +0x1800 -> line 6302
 *   +0x180c -> line 6299
 *   +0x1810 -> line 6300
 *   +0x1814 -> line 6298
 *   +0x1818 -> line 6300
 *   +0x181c -> line 6301
 *   +0x1820 -> line 6302
 *   +0x1824 -> line 6301
 *   +0x1828 -> line 6302
 *   +0x182c -> line 6301
 *   +0x1830 -> line 6302
 *   +0x1840 -> line 6304
 *   +0x1850 -> line 6307
 *   +0x1854 -> line 6304
 *   +0x1860 -> line 6306
 *   +0x1864 -> line 6307
 *   +0x1868 -> line 6304
 *   +0x186c -> line 6305
 *   +0x1870 -> line 6304
 *   +0x1874 -> line 6307
 *   +0x187c -> line 6304
 *   +0x1880 -> line 6305
 *   +0x1884 -> line 6304
 *   +0x188c -> line 6306
 *   +0x1890 -> line 6304
 *   +0x1894 -> line 6306
 *   +0x1898 -> line 6304
 *   +0x189c -> line 6306
 *   +0x18a4 -> line 6307
 *   +0x18c0 -> line 6308
 *   +0x18c4 -> line 6307
 *   +0x18c8 -> line 6308
 *   +0x18cc -> line 6307
 *   +0x18d0 -> line 6308
 *   +0x18e8 -> line 6307
 *   +0x18f0 -> line 6308
 *   +0x18fc -> line 6310
 *   +0x1910 -> line 6311
 *   +0x1914 -> line 6310
 *   +0x1928 -> line 6311
 *   +0x1930 -> line 6310
 *   +0x1948 -> line 6311
 *   +0x1968 -> line 6312
 *   +0x196c -> line 6311
 *   +0x1970 -> line 6312
 *   +0x197c -> line 6313
 *   +0x1980 -> line 6312
 *   +0x1984 -> line 6313
 *   +0x19a4 -> line 6314
 *   +0x19a8 -> line 6313
 *   +0x19ac -> line 6314
 *   +0x19c0 -> line 6313
 *   +0x19c4 -> line 6314
 *   +0x19cc -> line 6313
 *   +0x19d0 -> line 6314
 *   +0x19d4 -> line 6313
 *   +0x19d8 -> line 6314
 *   +0x19dc -> line 6313
 *   +0x19e0 -> line 6314
 *   +0x19e8 -> line 6316
 *   +0x1a10 -> line 6317
 *   +0x1a14 -> line 6316
 *   +0x1a2c -> line 6317
 *   +0x1a44 -> line 6318
 *   +0x1a48 -> line 6317
 *   +0x1a4c -> line 6318
 *   +0x1a58 -> line 6319
 *   +0x1a6c -> line 6318
 *   +0x1a70 -> line 6319
 *   +0x1a7c -> line 6320
 *   +0x1a80 -> line 6319
 *   +0x1a84 -> line 6320
 *   +0x1a88 -> line 6319
 *   +0x1a8c -> line 6320
 *   +0x1aa8 -> line 6319
 *   +0x1ab0 -> line 6320
 *   +0x1ac4 -> line 6322
 *   +0x1aec -> line 6323
 *   +0x1af4 -> line 6322
 *   +0x1b0c -> line 6323
 *   +0x1b24 -> line 6324
 *   +0x1b28 -> line 6323
 *   +0x1b2c -> line 6324
 *   +0x1b38 -> line 6325
 *   +0x1b4c -> line 6324
 *   +0x1b50 -> line 6325
 *   +0x1b58 -> line 6326
 *   +0x1b5c -> line 6325
 *   +0x1b60 -> line 6326
 *   +0x1b68 -> line 6325
 *   +0x1b6c -> line 6326
 *   +0x1b7c -> line 6325
 *   +0x1b80 -> line 6326
 *   +0x1b84 -> line 6325
 *   +0x1b88 -> line 6326
 *   +0x1b8c -> line 6325
 *   +0x1b90 -> line 6326
 *   +0x1b9c -> line 6329
 *   +0x1ba4 -> line 6333
 *   +0x1bb0 -> line 6335
 *   +0x1bb4 -> line 6333
 *   +0x1bbc -> line 6337
 *   +0x1bf8 -> line 6338
 *   +0x1c38 -> line 6339
 *   +0x1c4c -> line 6340
 *   +0x1c50 -> line 6339
 *   +0x1c58 -> line 6340
 *   +0x1c64 -> line 6339
 *   +0x1c70 -> line 6340
 *   +0x1c78 -> line 6339
 *   +0x1c7c -> line 6340
 *   +0x1c80 -> line 6339
 *   +0x1c8c -> line 6340
 *   +0x1c94 -> line 6341
 *   +0x1ca0 -> line 6343
 *   +0x1ca8 -> line 6348
 *   +0x1cc0 -> line 6350
 *   +0x1cfc -> line 6351
 *   +0x1d3c -> line 6352
 *   +0x1d48 -> line 6354
 *   +0x1d4c -> line 6352
 *   +0x1d50 -> line 6354
 *   +0x1d58 -> line 6352
 *   +0x1d68 -> line 6353
 *   +0x1d78 -> line 6354
 *   +0x1d7c -> line 6352
 *   +0x1d80 -> line 6354
 *   +0x1d84 -> line 6352
 *   +0x1d88 -> line 6354
 *   +0x1d90 -> line 6352
 *   +0x1d98 -> line 6354
 *   +0x1da0 -> line 6352
 *   +0x1da8 -> line 6354
 *   +0x1db0 -> line 6356
 *   +0x1db8 -> line 6363
 *   +0x1dc0 -> line 6365
 *   +0x1dc8 -> line 6381
 *   +0x1df4 -> line 6384
 *   +0x1dfc -> line 6445
 *   +0x1e18 -> line 6398
 *   +0x1e1c -> line 6445
 *   +0x1e38 -> line 6457
 *   +0x1e44 -> line 6459
 *   +0x1e80 -> line 6473
 *   +0x1e88 -> line 6478
 *   +0x1ea8 -> line 6480
 *   +0x1eb0 -> line 6483
 *   +0x1ec0 -> line 6484
 *   +0x1ec8 -> line 6487
 *   +0x1ed8 -> line 6488
 *   +0x1ee0 -> line 6491
 *   +0x1ef0 -> line 6492
 *   +0x1ef8 -> line 6505
 *   +0x1efc -> line 6508
 *   +0x1f08 -> line 6505
 *   +0x1f0c -> line 6508
 *   +0x1f10 -> line 6506
 *   +0x1f14 -> line 6508
 *   +0x1f28 -> line 6509
 *   +0x1f48 -> line 6512
 *   +0x1f50 -> line 6517
 *   +0x1fb4 -> line 6519
 *   +0x1fbc -> line 6528
 *   +0x2004 -> line 6532
 *   +0x2008 -> line 6530
 *   +0x200c -> line 6532
 *   +0x2010 -> line 6530
 *   +0x2014 -> line 6532
 *   +0x2098 -> line 6533
 *   +0x20a0 -> line 6535
 *   +0x20a8 -> line 6536
 *   +0x20ac -> line 6540
 *   +0x20bc -> line 6544
 *   +0x20c8 -> line 6546
 *   +0x20d0 -> line 6547
 *   +0x20d8 -> line 6548
 *   +0x20e4 -> line 6550
 *   +0x20f8 -> line 6553
 *   +0x2100 -> line 6566
 *   +0x2148 -> line 6568
 *   +0x214c -> line 6569
 *   +0x2150 -> line 6568
 *   +0x2154 -> line 6570
 *   +0x2158 -> line 6569
 *   +0x215c -> line 6572
 *   +0x2164 -> line 6573
 *   +0x2170 -> line 6572
 *   +0x2180 -> line 6576
 *   +0x218c -> line 6582
 *   +0x2220 -> line 6583
 *   +0x2228 -> line 6589
 *   +0x2230 -> line 6603
 *   +0x224c -> line 6605
 *   +0x2254 -> line 6610
 *   +0x2278 -> line 6612
 *   +0x2280 -> line 6629
 *   +0x2288 -> line 6642
 *   +0x22d0 -> line 6644
 *   +0x22d4 -> line 6645
 *   +0x22d8 -> line 6644
 *   +0x22dc -> line 6646
 *   +0x22e0 -> line 6645
 *   +0x22e4 -> line 6648
 *   +0x22ec -> line 6649
 *   +0x22f8 -> line 6648
 *   +0x2308 -> line 6652
 *   +0x2314 -> line 6657
 *   +0x23a8 -> line 6658
 *   +0x23b0 -> line 6664
 *   +0x23b8 -> line 6675
 *   +0x23c8 -> line 6676
 *   +0x2404 -> line 6677
 *   +0x2444 -> line 6678
 *   +0x2484 -> line 6679
 *   +0x2494 -> line 6681
 *   +0x2498 -> line 6682
 *   +0x249c -> line 6679
 *   +0x24a4 -> line 6683
 *   +0x24a8 -> line 6679
 *   +0x24ac -> line 6681
 *   +0x24b0 -> line 6679
 *   +0x24bc -> line 6681
 *   +0x24d4 -> line 6682
 *   +0x24d8 -> line 6679
 *   +0x24dc -> line 6681
 *   +0x24e0 -> line 6679
 *   +0x24e4 -> line 6681
 *   +0x24e8 -> line 6682
 *   +0x24f8 -> line 6683
 *   +0x2500 -> line 6679
 *   +0x2504 -> line 6682
 *   +0x2518 -> line 6683
 *   +0x2524 -> line 6685
 *   +0x2528 -> line 6683
 *   +0x252c -> line 6685
 *   +0x2530 -> line 6683
 *   +0x2540 -> line 6686
 *   +0x254c -> line 6687
 *   +0x2554 -> line 6689
 *   +0x2568 -> line 6692
 *   +0x256c -> line 6689
 *   +0x2574 -> line 6692
 *   +0x257c -> line 6689
 *   +0x258c -> line 6692
 *   +0x2594 -> line 6689
 *   +0x25a0 -> line 6692
 *   +0x25b4 -> line 6694
 *   +0x25bc -> line 6703
 *   +0x25c8 -> line 6704
 *   +0x25d0 -> line 6703
 *   +0x25d8 -> line 6704
 *   +0x25e8 -> line 6706
 *   +0x25f0 -> line 6710
 *   +0x2610 -> line 6706
 *   +0x2614 -> line 6710
 *   +0x2618 -> line 6706
 *   +0x261c -> line 6707
 *   +0x2624 -> line 6708
 *   +0x2628 -> line 6710
 *   +0x2630 -> line 6708
 *   +0x2638 -> line 6710
 *   +0x2640 -> line 6711
 *   +0x2648 -> line 6717
 *   +0x2650 -> line 6726
 *   +0x269c -> line 6727
 *   +0x26a0 -> line 6726
 *   +0x26a4 -> line 6727
 *   +0x26bc -> line 6728
 *   +0x26f4 -> line 6729
 *   +0x2730 -> line 6730
 *   +0x273c -> line 6731
 *   +0x2740 -> line 6730
 *   +0x2750 -> line 6731
 *   +0x275c -> line 6730
 *   +0x2760 -> line 6731
 *   +0x2764 -> line 6730
 *   +0x2768 -> line 6731
 *   +0x2770 -> line 6730
 *   +0x2784 -> line 6731
 *   +0x2794 -> line 6732
 *   +0x27a4 -> line 6734
 *   +0x27a8 -> line 6735
 *   +0x27ac -> line 6734
 *   +0x27b4 -> line 6735
 *   +0x27d4 -> line 6737
 *   +0x27dc -> line 6742
 *   +0x27ec -> line 6745
 *   +0x27f4 -> line 6750
 *   +0x2800 -> line 6753
 *   +0x2808 -> line 6758
 *   +0x2814 -> line 6761
 *   +0x281c -> line 6764
 *   +0x282c -> line 6767
 *   +0x2834 -> line 6772
 *   +0x283c -> line 6776
 *   +0x2850 -> line 6778
 *   +0x2858 -> line 6782
 *   +0x286c -> line 6784
 *   +0x2874 -> line 6790
 *   +0x2878 -> line 6789
 *   +0x287c -> line 6791
 *   +0x2884 -> line 6797
 *   +0x2888 -> line 6807
 *   +0x2894 -> line 6797
 *   +0x2898 -> line 6798
 *   +0x28a0 -> line 6799
 *   +0x28a8 -> line 6800
 *   +0x28ac -> line 6802
 *   +0x28b4 -> line 6803
 *   +0x28bc -> line 6804
 *   +0x28c4 -> line 6807
 *   +0x28cc -> line 6809
 *   +0x28d4 -> line 6810
 *   +0x28dc -> line 6813
 *   +0x2960 -> line 6816
 *   +0x2968 -> line 6822
 *   +0x2970 -> line 6836
 *   +0x2974 -> line 6846
 *   +0x2978 -> line 6836
 *   +0x297c -> line 6846
 *   +0x2980 -> line 6837
 *   +0x2988 -> line 6846
 *   +0x29b0 -> line 6837
 *   +0x29b4 -> line 6846
 *   +0x29b8 -> line 6838
 *   +0x29c0 -> line 6846
 *   +0x29c4 -> line 6838
 *   +0x29c8 -> line 6839
 *   +0x29d4 -> line 6840
 *   +0x29e0 -> line 6841
 *   +0x29ec -> line 6842
 *   +0x29f8 -> line 6846
 *   +0x2a08 -> line 6853
 *   +0x2a10 -> line 6859
 *   +0x2a94 -> line 6861
 *   +0x2a9c -> line 6867
 *   +0x2b20 -> line 6869
 *   +0x2b28 -> line 6875
 *   +0x2b40 -> line 6877
 *   +0x2b48 -> line 6878
 *   +0x2b50 -> line 6881
 *   +0x2bd0 -> line 6884
 *   +0x2bd8 -> line 6891
 *   +0x2bf0 -> line 6893
 *   +0x2bf8 -> line 6894
 *   +0x2c00 -> line 6897
 *   +0x2c80 -> line 6901
 *   +0x2c88 -> line 6905
 *   +0x2cc0 -> line 6907
 *   +0x2cc8 -> line 6912
 *   +0x2d00 -> line 6914
 *   +0x2d08 -> line 6921
 *   +0x2d14 -> line 6924
 *   +0x2d20 -> line 6925
 *   +0x2d24 -> line 6926
 *   +0x2d28 -> line 6927
 *   +0x2d2c -> line 6956
 *   +0x2d30 -> line 6929
 *   +0x2d34 -> line 6956
 *   +0x2d38 -> line 6929
 *   +0x2d3c -> line 6930
 *   +0x2d40 -> line 6955
 *   +0x2d44 -> line 6924
 *   +0x2d48 -> line 6961
 *   +0x2d4c -> line 6959
 *   +0x2d50 -> line 6963
 *   +0x2d54 -> line 6924
 *   +0x2d58 -> line 6925
 *   +0x2d5c -> line 6926
 *   +0x2d60 -> line 6927
 *   +0x2d64 -> line 6929
 *   +0x2d68 -> line 6930
 *   +0x2d70 -> line 6954
 *   +0x2d74 -> line 6961
 *   +0x2d78 -> line 6954
 *   +0x2d80 -> line 6955
 *   +0x2d84 -> line 6956
 *   +0x2d88 -> line 6957
 *   +0x2d8c -> line 6961
 *   +0x2d90 -> line 6959
 *   +0x2d98 -> line 6960
 *   +0x2d9c -> line 6963
 *   +0x2dac -> line 6967
 *   +0x2e48 -> line 6972
 *   +0x2e50 -> line 6984
 *   +0x2e5c -> line 6985
 *   +0x2e7c -> line 6987
 *   +0x2e84 -> line 7010
 *   +0x2e90 -> line 7011
 *   +0x2f24 -> line 7013
 *   +0x2f2c -> line 7041
 *   +0x2f38 -> line 7042
 *   +0x2f44 -> line 7043
 *   +0x2f64 -> line 7044
 *   +0x2ff8 -> line 7046
 *   +0x3000 -> line 7056
 *   +0x3038 -> line 7058
 *   +0x3040 -> line 7063
 *   +0x3078 -> line 7065
 *   +0x3080 -> line 7076
 *   +0x30c0 -> line 7078
 *   +0x30c8 -> line 7083
 *   +0x30d0 -> line 7086
 *   +0x30d8 -> line 7095
 *   +0x30dc -> line 7099
 *   +0x30e4 -> line 7095
 *   +0x30e8 -> line 7096
 *   +0x30f0 -> line 7097
 *   +0x30f8 -> line 7099
 *   +0x3100 -> line 7101
 *   +0x3108 -> line 7108
 *   +0x310c -> line 7116
 *   +0x3110 -> line 7108
 *   +0x3114 -> line 7116
 *   +0x3118 -> line 7109
 *   +0x3120 -> line 7110
 *   +0x3128 -> line 7116
 *   +0x3138 -> line 7118
 *   +0x3140 -> line 7126
 *   +0x3144 -> line 7135
 *   +0x3148 -> line 7126
 *   +0x314c -> line 7135
 *   +0x3154 -> line 7125
 *   +0x3158 -> line 7135
 *   +0x315c -> line 7127
 *   +0x3160 -> line 7135
 *   +0x3168 -> line 7137
 *   +0x3170 -> line 7145
 *   +0x3174 -> line 7155
 *   +0x3178 -> line 7145
 *   +0x317c -> line 7155
 *   +0x3180 -> line 7146
 *   +0x3184 -> line 7144
 *   +0x3188 -> line 7146
 *   +0x318c -> line 7155
 *   +0x319c -> line 7157
 *   +0x31a4 -> line 7175
 *   +0x31a8 -> line 7165
 *   +0x31ac -> line 7175
 *   +0x31b0 -> line 7165
 *   +0x31b4 -> line 7166
 *   +0x31b8 -> line 7175
 *   +0x31c0 -> line 7164
 *   +0x31c4 -> line 7175
 *   +0x31cc -> line 7177
 *   +0x31d4 -> line 7185
 *   +0x31d8 -> line 7194
 *   +0x31dc -> line 7185
 *   +0x31e0 -> line 7194
 *   +0x31e8 -> line 7183
 *   +0x31ec -> line 7194
 *   +0x31f0 -> line 7184
 *   +0x31f4 -> line 7194
 *   +0x31fc -> line 7196
 *   +0x3204 -> line 7249
 *   +0x3208 -> line 7250
 *   +0x320c -> line 7249
 *   +0x3210 -> line 7250
 *   +0x3214 -> line 7249
 *   +0x3218 -> line 7250
 *   +0x321c -> line 7249
 *   +0x322c -> line 7250
 *   +0x323c -> line 7251
 *   +0x3240 -> line 7258
 *   +0x3250 -> line 7251
 *   +0x3254 -> line 7252
 *   +0x3260 -> line 7258
 *   +0x3264 -> line 7252
 *   +0x3278 -> line 7254
 *   +0x3290 -> line 7258
 *   +0x329c -> line 7259
 *   +0x32a4 -> line 7261
 *   +0x32a8 -> line 7264
 *   +0x32b0 -> line 7277
 *   +0x32f4 -> line 7280
 *   +0x32fc -> line 7293
 *   +0x3300 -> line 7294
 *   +0x3304 -> line 7293
 *   +0x3308 -> line 7294
 *   +0x330c -> line 7293
 *   +0x3310 -> line 7294
 *   +0x3314 -> line 7293
 *   +0x3324 -> line 7294
 *   +0x3334 -> line 7295
 *   +0x3338 -> line 7300
 *   +0x3350 -> line 7295
 *   +0x3354 -> line 7296
 *   +0x3360 -> line 7300
 *   +0x336c -> line 7296
 *   +0x3380 -> line 7298
 *   +0x3394 -> line 7300
 *   +0x339c -> line 7302
 *   +0x33a4 -> line 7309
 *   +0x3400 -> line 7312
 *   +0x3408 -> line 7319
 *   +0x3410 -> line 7322
 *   +0x3418 -> line 7328
 *   +0x341c -> line 7338
 *   +0x3428 -> line 7328
 *   +0x342c -> line 7329
 *   +0x3434 -> line 7330
 *   +0x343c -> line 7331
 *   +0x3440 -> line 7333
 *   +0x3448 -> line 7334
 *   +0x3450 -> line 7335
 *   +0x3458 -> line 7338
 *   +0x3460 -> line 7340
 *   +0x3468 -> line 7341
 *   +0x3470 -> line 7344
 *   +0x34f4 -> line 7347
 *   +0x34fc -> line 7352
 *   +0x3508 -> line 7354
 *   +0x3510 -> line 7358
 *   +0x35a4 -> line 7360
 *   +0x35ac -> line 7364
 *   +0x35b4 -> line 7366
 *   +0x35bc -> line 7373
 *   +0x35f4 -> line 7376
 *   +0x35fc -> line 7381
 *   +0x3630 -> line 7383
 *   +0x3638 -> line 7388
 *   +0x366c -> line 7390
 *   +0x3674 -> line 7394
 *   +0x3690 -> line 7396
 *   +0x3698 -> line 7404
 *   +0x36a0 -> line 7409
 *   +0x36b0 -> line 7412
 *   +0x36b8 -> line 7413
 *   +0x36c0 -> line 7416
 *   +0x36c8 -> line 7420
 *   +0x36d0 -> line 7425
 *   +0x36e8 -> line 7427
 *   +0x36ec -> line 7430
 *   +0x36f4 -> line 7434
 *   +0x36f8 -> line 7433
 *   +0x36fc -> line 7438
 *   +0x3704 -> line 7443
 *   +0x370c -> line 7445
 *   +0x3714 -> line 7464
 *   +0x3718 -> line 7460
 *   +0x371c -> line 7463
 *   +0x3720 -> line 7464
 *   +0x373c -> line 7465
 *   +0x3750 -> line 7466
 *   +0x375c -> line 7471
 *   +0x3768 -> line 7466
 *   +0x376c -> line 7471
 *   +0x3784 -> line 7473
 *   +0x3790 -> line 7475
 *   +0x37b4 -> line 7476
 *   +0x37bc -> line 7479
 *   +0x37e0 -> line 7481
 *   +0x37e8 -> line 7492
 *   +0x3820 -> line 7493
 *   +0x3840 -> line 7494
 *   +0x3848 -> line 7493
 *   +0x3858 -> line 7494
 *   +0x3870 -> line 7495
 *   +0x3878 -> line 7494
 *   +0x387c -> line 7495
 *   +0x3880 -> line 7494
 *   +0x3884 -> line 7495
 *   +0x3888 -> line 7494
 *   +0x388c -> line 7495
 *   +0x3890 -> line 7494
 *   +0x3894 -> line 7495
 *   +0x3898 -> line 7494
 *   +0x38a8 -> line 7495
 *   +0x38ac -> line 7494
 *   +0x38b8 -> line 7495
 *   +0x38d0 -> line 7496
 *   +0x38e0 -> line 7498
 *   +0x38e8 -> line 7516
 *   +0x3914 -> line 7519
 *   +0x391c -> line 7530
 *   +0x3948 -> line 7531
 *   +0x3958 -> line 7533
 *   +0x395c -> line 7531
 *   +0x3960 -> line 7533
 *   +0x3964 -> line 7531
 *   +0x396c -> line 7533
 *   +0x3974 -> line 7531
 *   +0x3978 -> line 7532
 *   +0x397c -> line 7531
 *   +0x3980 -> line 7533
 *   +0x3990 -> line 7532
 *   +0x3994 -> line 7531
 *   +0x39a0 -> line 7533
 *   +0x39a8 -> line 7531
 *   +0x39ac -> line 7533
 *   +0x39b4 -> line 7534
 *   +0x39c4 -> line 7536
 *   +0x39cc -> line 7546
 *   +0x39d0 -> line 7542
 *   +0x39d4 -> line 7546
 *   +0x39dc -> line 7545
 *   +0x39e0 -> line 7543
 *   +0x39e8 -> line 7542
 *   +0x39ec -> line 7544
 *   +0x39f4 -> line 7543
 *   +0x39f8 -> line 7546
 *   +0x3a00 -> line 7548
 *   +0x3a08 -> line 7556
 *   +0x3a18 -> line 7562
 *   +0x3a20 -> line 7585
 *   +0x3a28 -> line 7588
 *   +0x3a30 -> line 7593
 *   +0x3a44 -> line 7596
 *   +0x3a4c -> line 7601
 *   +0x3a58 -> line 7604
 *   +0x3a60 -> line 7611
 *   +0x3a84 -> line 7612
 *   +0x3a88 -> line 7611
 *   +0x3a94 -> line 7612
 *   +0x3ac8 -> line 7614
 *   +0x3adc -> line 7616
 *   +0x3ae0 -> line 7614
 *   +0x3ae4 -> line 7616
 *   +0x3af4 -> line 7614
 *   +0x3afc -> line 7616
 *   +0x3b08 -> line 7614
 *   +0x3b10 -> line 7616
 *   +0x3b18 -> line 7619
 *   +0x3b20 -> line 7627
 *   +0x3b30 -> line 7628
 *   +0x3b8c -> line 7629
 *   +0x3bec -> line 7630
 *   +0x3c44 -> line 7631
 *   +0x3ca4 -> line 7632
 *   +0x3cf8 -> line 7633
 *   +0x3d50 -> line 7634
 *   +0x3d60 -> line 7635
 *   +0x3dc0 -> line 7636
 *   +0x3e18 -> line 7637
 *   +0x3e70 -> line 7638
 *   +0x3ed4 -> line 7644
 *   +0x3f28 -> line 7646
 *   +0x3f80 -> line 7720
 *   +0x3fac -> line 7723
 *   +0x3fb4 -> line 7729
 *   +0x3fdc -> line 7732
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void AGO_vAddParticleContd(unsigned int PartType, MTH3D_tdstVector_* p_stPosition, MTH3D_tdstVector_* p_stDirection, void* hVisualMaterial, float parameter)
{
    float fSizeY;
    float fSizeX;
    MTH4D_tdstVector_ Normal;
    float Pos1[3];
    unsigned int i;
    int j;
    AGO_V4D_ Vector4;
    AGO_V4D_ Vector3;
    AGO_V4D_ Vector2;
    AGO_V4D_ Vector1;
    AGO_V4D_ NDirection;
    AGO_V4D_ NPosition;
    float* p2;
    float* p1;
    float fNorm;
    AGO_Part_* p;
    float Color[4];
    float sx;
    float Norm;
    float SPEED;
    float DIST;
    float R2;
    float R1;
    MTH3D_tdstVector_ V2;
    MTH3D_tdstVector_ V1;
    unsigned int can;
    unsigned int IntParam;
    float Direction[4];
    float param2;
    float multiplier;
    float Pos2[3];
    float V4[3];
    float V3[3];
    float fNorm1;
    unsigned int Limit;
    float scale;
    float Pos[3];
    AGO_V4D_ Dest;
    float ZAngle;
    float YAngle;
    float XAngle;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ago\AGO.c lines 5063–5862 */
/* addr: 0x001d5f00  size: 7616 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 5063
 *   +0x0004 -> line 5069
 *   +0x0008 -> line 5063
 *   +0x0044 -> line 5069
 *   +0x004c -> line 5072
 *   +0x0058 -> line 5074
 *   +0x005c -> line 5075
 *   +0x0064 -> line 5079
 *   +0x0070 -> line 5081
 *   +0x007c -> line 5083
 *   +0x00ac -> line 5093
 *   +0x00b4 -> line 5096
 *   +0x00dc -> line 5106
 *   +0x00e4 -> line 5109
 *   +0x00ec -> line 5110
 *   +0x00f0 -> line 5109
 *   +0x0104 -> line 5110
 *   +0x0118 -> line 5112
 *   +0x0138 -> line 5114
 *   +0x0174 -> line 5121
 *   +0x019c -> line 5129
 *   +0x01a0 -> line 5130
 *   +0x01a4 -> line 5129
 *   +0x01a8 -> line 5130
 *   +0x01b4 -> line 5129
 *   +0x01b8 -> line 5130
 *   +0x01cc -> line 5131
 *   +0x01d4 -> line 5134
 *   +0x01d8 -> line 5135
 *   +0x01dc -> line 5134
 *   +0x01e0 -> line 5135
 *   +0x01ec -> line 5134
 *   +0x01f0 -> line 5135
 *   +0x0200 -> line 5136
 *   +0x0208 -> line 5152
 *   +0x021c -> line 5153
 *   +0x0224 -> line 5160
 *   +0x0284 -> line 5161
 *   +0x028c -> line 5168
 *   +0x02a0 -> line 5169
 *   +0x02a8 -> line 5176
 *   +0x02bc -> line 5177
 *   +0x02c4 -> line 5189
 *   +0x02c8 -> line 5185
 *   +0x02cc -> line 5188
 *   +0x02d0 -> line 5189
 *   +0x02ec -> line 5190
 *   +0x0300 -> line 5191
 *   +0x030c -> line 5196
 *   +0x0318 -> line 5191
 *   +0x031c -> line 5196
 *   +0x0334 -> line 5198
 *   +0x0340 -> line 5200
 *   +0x0364 -> line 5201
 *   +0x036c -> line 5204
 *   +0x0390 -> line 5206
 *   +0x0398 -> line 5215
 *   +0x03ac -> line 5216
 *   +0x03b4 -> line 5225
 *   +0x03c8 -> line 5226
 *   +0x03cc -> line 5225
 *   +0x03d8 -> line 5226
 *   +0x03dc -> line 5225
 *   +0x03e0 -> line 5226
 *   +0x03e8 -> line 5225
 *   +0x03ec -> line 5226
 *   +0x03f0 -> line 5225
 *   +0x0404 -> line 5226
 *   +0x040c -> line 5227
 *   +0x0410 -> line 5229
 *   +0x044c -> line 5230
 *   +0x048c -> line 5231
 *   +0x04d0 -> line 5232
 *   +0x04e0 -> line 5233
 *   +0x04e8 -> line 5232
 *   +0x04f4 -> line 5233
 *   +0x04f8 -> line 5232
 *   +0x04fc -> line 5233
 *   +0x0500 -> line 5232
 *   +0x051c -> line 5233
 *   +0x0520 -> line 5232
 *   +0x0524 -> line 5233
 *   +0x052c -> line 5234
 *   +0x0538 -> line 5236
 *   +0x0540 -> line 5248
 *   +0x0588 -> line 5251
 *   +0x058c -> line 5248
 *   +0x0590 -> line 5251
 *   +0x0594 -> line 5248
 *   +0x0598 -> line 5251
 *   +0x05a8 -> line 5249
 *   +0x05ac -> line 5248
 *   +0x05b0 -> line 5251
 *   +0x05b4 -> line 5249
 *   +0x05bc -> line 5251
 *   +0x05c0 -> line 5248
 *   +0x05c4 -> line 5251
 *   +0x05cc -> line 5253
 *   +0x05d4 -> line 5270
 *   +0x05d8 -> line 5268
 *   +0x05dc -> line 5270
 *   +0x05e8 -> line 5272
 *   +0x05f4 -> line 5274
 *   +0x0620 -> line 5276
 *   +0x0628 -> line 5277
 *   +0x0634 -> line 5278
 *   +0x0658 -> line 5280
 *   +0x0660 -> line 5278
 *   +0x0674 -> line 5279
 *   +0x0678 -> line 5278
 *   +0x0680 -> line 5279
 *   +0x06a4 -> line 5280
 *   +0x06ac -> line 5281
 *   +0x06b8 -> line 5282
 *   +0x06c4 -> line 5281
 *   +0x06cc -> line 5282
 *   +0x06d0 -> line 5281
 *   +0x06d4 -> line 5282
 *   +0x06d8 -> line 5281
 *   +0x06f0 -> line 5282
 *   +0x06f8 -> line 5283
 *   +0x0708 -> line 5285
 *   +0x0710 -> line 5294
 *   +0x0714 -> line 5296
 *   +0x0754 -> line 5297
 *   +0x0790 -> line 5298
 *   +0x07a4 -> line 5299
 *   +0x07a8 -> line 5298
 *   +0x07b4 -> line 5299
 *   +0x07b8 -> line 5298
 *   +0x07bc -> line 5299
 *   +0x07c0 -> line 5298
 *   +0x07c4 -> line 5299
 *   +0x07c8 -> line 5298
 *   +0x07dc -> line 5299
 *   +0x07e0 -> line 5298
 *   +0x07ec -> line 5299
 *   +0x07f8 -> line 5300
 *   +0x0804 -> line 5302
 *   +0x080c -> line 5309
 *   +0x0820 -> line 5310
 *   +0x0828 -> line 5317
 *   +0x0878 -> line 5318
 *   +0x0880 -> line 5331
 *   +0x0894 -> line 5333
 *   +0x089c -> line 5349
 *   +0x08b0 -> line 5350
 *   +0x08b8 -> line 5356
 *   +0x08cc -> line 5357
 *   +0x08d4 -> line 5372
 *   +0x08d8 -> line 5373
 *   +0x08dc -> line 5372
 *   +0x08e0 -> line 5373
 *   +0x08e4 -> line 5372
 *   +0x08e8 -> line 5373
 *   +0x08ec -> line 5372
 *   +0x08fc -> line 5373
 *   +0x090c -> line 5374
 *   +0x0914 -> line 5379
 *   +0x091c -> line 5377
 *   +0x0920 -> line 5379
 *   +0x092c -> line 5374
 *   +0x0930 -> line 5379
 *   +0x0934 -> line 5374
 *   +0x0938 -> line 5375
 *   +0x0944 -> line 5379
 *   +0x094c -> line 5375
 *   +0x0960 -> line 5377
 *   +0x0974 -> line 5379
 *   +0x097c -> line 5381
 *   +0x0984 -> line 5395
 *   +0x0988 -> line 5396
 *   +0x098c -> line 5395
 *   +0x0990 -> line 5396
 *   +0x0994 -> line 5395
 *   +0x0998 -> line 5396
 *   +0x099c -> line 5395
 *   +0x09ac -> line 5396
 *   +0x09bc -> line 5397
 *   +0x09c4 -> line 5402
 *   +0x09cc -> line 5400
 *   +0x09d0 -> line 5402
 *   +0x09dc -> line 5397
 *   +0x09e0 -> line 5402
 *   +0x09e4 -> line 5397
 *   +0x09e8 -> line 5398
 *   +0x09f4 -> line 5402
 *   +0x09fc -> line 5398
 *   +0x0a10 -> line 5400
 *   +0x0a24 -> line 5402
 *   +0x0a2c -> line 5404
 *   +0x0a34 -> line 5416
 *   +0x0a48 -> line 5418
 *   +0x0a50 -> line 5423
 *   +0x0a64 -> line 5424
 *   +0x0a6c -> line 5440
 *   +0x0abc -> line 5441
 *   +0x0ac0 -> line 5440
 *   +0x0b08 -> line 5441
 *   +0x0b1c -> line 5444
 *   +0x0b30 -> line 5448
 *   +0x0b34 -> line 5444
 *   +0x0b68 -> line 5448
 *   +0x0bd0 -> line 5456
 *   +0x0be8 -> line 5459
 *   +0x0bf0 -> line 5466
 *   +0x0c04 -> line 5467
 *   +0x0c0c -> line 5474
 *   +0x0c20 -> line 5475
 *   +0x0c28 -> line 5489
 *   +0x0c80 -> line 5491
 *   +0x0c84 -> line 5489
 *   +0x0ca4 -> line 5491
 *   +0x0cb8 -> line 5495
 *   +0x0cf8 -> line 5496
 *   +0x0d34 -> line 5497
 *   +0x0d74 -> line 5498
 *   +0x0d88 -> line 5499
 *   +0x0d8c -> line 5498
 *   +0x0d94 -> line 5499
 *   +0x0d9c -> line 5498
 *   +0x0da0 -> line 5499
 *   +0x0da4 -> line 5498
 *   +0x0da8 -> line 5499
 *   +0x0db0 -> line 5498
 *   +0x0dc0 -> line 5499
 *   +0x0dc8 -> line 5498
 *   +0x0dd0 -> line 5499
 *   +0x0dd8 -> line 5502
 *   +0x0e00 -> line 5503
 *   +0x0e10 -> line 5504
 *   +0x0e34 -> line 5505
 *   +0x0e60 -> line 5506
 *   +0x0e70 -> line 5507
 *   +0x0e94 -> line 5511
 *   +0x0e9c -> line 5525
 *   +0x0f08 -> line 5527
 *   +0x0f0c -> line 5525
 *   +0x0f10 -> line 5527
 *   +0x0f14 -> line 5525
 *   +0x0f18 -> line 5527
 *   +0x0f2c -> line 5529
 *   +0x0f6c -> line 5530
 *   +0x0fa8 -> line 5531
 *   +0x0fe8 -> line 5532
 *   +0x0ff8 -> line 5533
 *   +0x1000 -> line 5532
 *   +0x1008 -> line 5533
 *   +0x100c -> line 5532
 *   +0x1010 -> line 5533
 *   +0x1014 -> line 5532
 *   +0x1018 -> line 5533
 *   +0x1020 -> line 5532
 *   +0x1024 -> line 5533
 *   +0x1028 -> line 5532
 *   +0x102c -> line 5533
 *   +0x1030 -> line 5532
 *   +0x1038 -> line 5533
 *   +0x1040 -> line 5536
 *   +0x1058 -> line 5537
 *   +0x1070 -> line 5536
 *   +0x107c -> line 5537
 *   +0x1084 -> line 5536
 *   +0x1088 -> line 5537
 *   +0x1090 -> line 5538
 *   +0x109c -> line 5539
 *   +0x10a8 -> line 5538
 *   +0x10ac -> line 5539
 *   +0x10b0 -> line 5538
 *   +0x10b4 -> line 5539
 *   +0x10b8 -> line 5538
 *   +0x10bc -> line 5539
 *   +0x10c0 -> line 5538
 *   +0x10cc -> line 5539
 *   +0x10d4 -> line 5538
 *   +0x10d8 -> line 5539
 *   +0x10e0 -> line 5543
 *   +0x10e8 -> line 5552
 *   +0x10fc -> line 5554
 *   +0x1104 -> line 5564
 *   +0x110c -> line 5566
 *   +0x1168 -> line 5567
 *   +0x1178 -> line 5568
 *   +0x117c -> line 5567
 *   +0x1198 -> line 5568
 *   +0x119c -> line 5567
 *   +0x11ac -> line 5568
 *   +0x11b4 -> line 5580
 *   +0x11d0 -> line 5581
 *   +0x11dc -> line 5580
 *   +0x11f8 -> line 5581
 *   +0x1208 -> line 5580
 *   +0x1210 -> line 5581
 *   +0x1218 -> line 5583
 *   +0x1220 -> line 5594
 *   +0x1234 -> line 5595
 *   +0x1238 -> line 5594
 *   +0x1244 -> line 5595
 *   +0x1248 -> line 5594
 *   +0x124c -> line 5595
 *   +0x1254 -> line 5594
 *   +0x1258 -> line 5595
 *   +0x125c -> line 5594
 *   +0x1270 -> line 5595
 *   +0x1278 -> line 5596
 *   +0x128c -> line 5598
 *   +0x12c8 -> line 5599
 *   +0x1308 -> line 5600
 *   +0x134c -> line 5601
 *   +0x135c -> line 5602
 *   +0x1364 -> line 5601
 *   +0x1370 -> line 5602
 *   +0x1374 -> line 5601
 *   +0x1378 -> line 5602
 *   +0x137c -> line 5601
 *   +0x1398 -> line 5602
 *   +0x139c -> line 5601
 *   +0x13a0 -> line 5602
 *   +0x13a8 -> line 5603
 *   +0x13b4 -> line 5605
 *   +0x13bc -> line 5614
 *   +0x1410 -> line 5616
 *   +0x144c -> line 5617
 *   +0x148c -> line 5618
 *   +0x14c8 -> line 5619
 *   +0x14d8 -> line 5620
 *   +0x14e0 -> line 5619
 *   +0x14ec -> line 5620
 *   +0x14f0 -> line 5619
 *   +0x14f4 -> line 5620
 *   +0x14f8 -> line 5619
 *   +0x14fc -> line 5620
 *   +0x1500 -> line 5619
 *   +0x1520 -> line 5620
 *   +0x1528 -> line 5622
 *   +0x1530 -> line 5626
 *   +0x1554 -> line 5627
 *   +0x1578 -> line 5629
 *   +0x1580 -> line 5640
 *   +0x1594 -> line 5643
 *   +0x15a8 -> line 5640
 *   +0x15b4 -> line 5643
 *   +0x15b8 -> line 5640
 *   +0x15c0 -> line 5641
 *   +0x15c4 -> line 5640
 *   +0x15c8 -> line 5641
 *   +0x15d8 -> line 5642
 *   +0x15e0 -> line 5643
 *   +0x15e8 -> line 5642
 *   +0x15f0 -> line 5643
 *   +0x15f8 -> line 5645
 *   +0x1600 -> line 5657
 *   +0x1614 -> line 5659
 *   +0x161c -> line 5666
 *   +0x1628 -> line 5669
 *   +0x1644 -> line 5666
 *   +0x1648 -> line 5669
 *   +0x1654 -> line 5671
 *   +0x165c -> line 5678
 *   +0x16a0 -> line 5679
 *   +0x16e0 -> line 5680
 *   +0x1720 -> line 5681
 *   +0x175c -> line 5682
 *   +0x17a0 -> line 5683
 *   +0x17e4 -> line 5684
 *   +0x17f8 -> line 5685
 *   +0x17fc -> line 5684
 *   +0x1800 -> line 5685
 *   +0x1804 -> line 5684
 *   +0x1808 -> line 5685
 *   +0x1810 -> line 5684
 *   +0x1818 -> line 5685
 *   +0x182c -> line 5684
 *   +0x1834 -> line 5685
 *   +0x183c -> line 5687
 *   +0x1844 -> line 5694
 *   +0x1848 -> line 5696
 *   +0x1890 -> line 5697
 *   +0x18b8 -> line 5698
 *   +0x18c0 -> line 5697
 *   +0x18c8 -> line 5698
 *   +0x18ec -> line 5699
 *   +0x18f4 -> line 5698
 *   +0x1904 -> line 5699
 *   +0x190c -> line 5698
 *   +0x1914 -> line 5699
 *   +0x1924 -> line 5700
 *   +0x1930 -> line 5699
 *   +0x1934 -> line 5700
 *   +0x1938 -> line 5699
 *   +0x1958 -> line 5700
 *   +0x195c -> line 5699
 *   +0x1968 -> line 5700
 *   +0x1970 -> line 5701
 *   +0x197c -> line 5703
 *   +0x1984 -> line 5711
 *   +0x1988 -> line 5710
 *   +0x198c -> line 5711
 *   +0x1990 -> line 5710
 *   +0x1994 -> line 5711
 *   +0x1998 -> line 5710
 *   +0x199c -> line 5711
 *   +0x19c4 -> line 5712
 *   +0x1a0c -> line 5713
 *   +0x1a20 -> line 5715
 *   +0x1a24 -> line 5713
 *   +0x1a28 -> line 5714
 *   +0x1a30 -> line 5715
 *   +0x1a44 -> line 5713
 *   +0x1a54 -> line 5715
 *   +0x1a58 -> line 5713
 *   +0x1a5c -> line 5715
 *   +0x1a6c -> line 5718
 *   +0x1a74 -> line 5725
 *   +0x1a9c -> line 5727
 *   +0x1aa4 -> line 5734
 *   +0x1ac0 -> line 5736
 *   +0x1afc -> line 5737
 *   +0x1b04 -> line 5740
 *   +0x1b3c -> line 5745
 *   +0x1b44 -> line 5753
 *   +0x1b74 -> line 5754
 *   +0x1b7c -> line 5756
 *   +0x1b84 -> line 5760
 *   +0x1b94 -> line 5761
 *   +0x1ba0 -> line 5766
 *   +0x1ba4 -> line 5760
 *   +0x1bb8 -> line 5761
 *   +0x1bd0 -> line 5762
 *   +0x1bd4 -> line 5764
 *   +0x1bd8 -> line 5768
 *   +0x1be0 -> line 5774
 *   +0x1c10 -> line 5775
 *   +0x1c2c -> line 5777
 *   +0x1c34 -> line 5788
 *   +0x1c48 -> line 5790
 *   +0x1c50 -> line 5803
 *   +0x1c64 -> line 5804
 *   +0x1c6c -> line 5806
 *   +0x1cc4 -> line 5807
 *   +0x1ce4 -> line 5808
 *   +0x1cf0 -> line 5810
 *   +0x1cf8 -> line 5818
 *   +0x1d0c -> line 5820
 *   +0x1d14 -> line 5827
 *   +0x1d28 -> line 5829
 *   +0x1d30 -> line 5840
 *   +0x1d44 -> line 5842
 *   +0x1d4c -> line 5850
 *   +0x1d60 -> line 5852
 *   +0x1d68 -> line 5856
 *   +0x1d7c -> line 5860
 *   +0x1d88 -> line 5861
 *   +0x1d8c -> line 5862
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void AGO_vAddParticle(unsigned int PartType, MTH3D_tdstVector_* p_stPosition, MTH3D_tdstVector_* p_stDirection, void* hVisualMaterial, float parameter)
{
    int j;
    AGO_Part_* p;
    float* p2;
    float* p1;
    float* param0;
    float fNorm;
    float angle;
    int Number;
    float sin1;
    float cos1;
    float fRadius;
    float scale;
    int i;
    float Direction[3];
    float Pos[3];
    float NextBubble;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ago\AGO.c lines 4928–4974 */
/* addr: 0x001d7cc0  size: 764 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 4928
 *   +0x0020 -> line 4934
 *   +0x002c -> line 4936
 *   +0x0038 -> line 4940
 *   +0x0040 -> line 4944
 *   +0x0044 -> line 4940
 *   +0x0048 -> line 4941
 *   +0x0054 -> line 4942
 *   +0x0060 -> line 4937
 *   +0x0064 -> line 4946
 *   +0x0068 -> line 4937
 *   +0x006c -> line 4938
 *   +0x0074 -> line 4949
 *   +0x00b8 -> line 4950
 *   +0x00c4 -> line 4952
 *   +0x00dc -> line 4953
 *   +0x0130 -> line 4955
 *   +0x016c -> line 4957
 *   +0x01ac -> line 4959
 *   +0x01f8 -> line 4960
 *   +0x020c -> line 4961
 *   +0x0210 -> line 4960
 *   +0x021c -> line 4961
 *   +0x0220 -> line 4960
 *   +0x0224 -> line 4961
 *   +0x0228 -> line 4960
 *   +0x022c -> line 4961
 *   +0x0234 -> line 4960
 *   +0x0248 -> line 4961
 *   +0x024c -> line 4960
 *   +0x0250 -> line 4961
 *   +0x025c -> line 4962
 *   +0x0264 -> line 4966
 *   +0x0268 -> line 4964
 *   +0x026c -> line 4966
 *   +0x0270 -> line 4970
 *   +0x0274 -> line 4969
 *   +0x0280 -> line 4964
 *   +0x0284 -> line 4965
 *   +0x0290 -> line 4966
 *   +0x02a0 -> line 4967
 *   +0x02a8 -> line 4968
 *   +0x02b0 -> line 4969
 *   +0x02b8 -> line 4970
 *   +0x02c8 -> line 4971
 *   +0x02cc -> line 4972
 *   +0x02d0 -> line 4973
 *   +0x02e0 -> line 4974
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void CreateType25AGO(MTH3D_tdstVector_* p_stPosition, MTH3D_tdstVector_* p_stDirection, void* hVisualMaterial, float parameter)
{
    float* p2;
    float* p1;
    unsigned int ulCpt;
    AGO_Part_* p;
    float scale;
    float Direction[3];
    float Pos[3];
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ago\AGO.c lines 4878–4921 */
/* addr: 0x001d7fc0  size: 620 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 4878
 *   +0x0030 -> line 4884
 *   +0x003c -> line 4886
 *   +0x0048 -> line 4887
 *   +0x0050 -> line 4888
 *   +0x0054 -> line 4887
 *   +0x0058 -> line 4888
 *   +0x005c -> line 4894
 *   +0x0060 -> line 4888
 *   +0x0064 -> line 4890
 *   +0x0068 -> line 4894
 *   +0x006c -> line 4890
 *   +0x0070 -> line 4891
 *   +0x0078 -> line 4892
 *   +0x0080 -> line 4897
 *   +0x0084 -> line 4899
 *   +0x00c8 -> line 4900
 *   +0x00d4 -> line 4902
 *   +0x00d8 -> line 4906
 *   +0x00e0 -> line 4902
 *   +0x00e4 -> line 4903
 *   +0x00ec -> line 4904
 *   +0x00f0 -> line 4906
 *   +0x010c -> line 4907
 *   +0x0110 -> line 4906
 *   +0x011c -> line 4907
 *   +0x0120 -> line 4906
 *   +0x0124 -> line 4909
 *   +0x0128 -> line 4906
 *   +0x0130 -> line 4909
 *   +0x0140 -> line 4910
 *   +0x0144 -> line 4909
 *   +0x015c -> line 4910
 *   +0x0160 -> line 4909
 *   +0x0170 -> line 4910
 *   +0x017c -> line 4911
 *   +0x0180 -> line 4910
 *   +0x0198 -> line 4911
 *   +0x019c -> line 4910
 *   +0x01ac -> line 4911
 *   +0x01c0 -> line 4913
 *   +0x01d0 -> line 4911
 *   +0x01f0 -> line 4913
 *   +0x0204 -> line 4914
 *   +0x020c -> line 4916
 *   +0x0214 -> line 4917
 *   +0x0220 -> line 4918
 *   +0x022c -> line 4919
 *   +0x0230 -> line 4920
 *   +0x0240 -> line 4921
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void CreateType24AGO(MTH3D_tdstVector_* p_stPosition, MTH3D_tdstVector_* p_stDirection, void* hVisualMaterial, float parameter)
{
    unsigned int ulCpt;
    AGO_Part_* p;
    float fTime;
    float fScale;
    float Direction[3];
    float Pos[3];
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ago\AGO.c lines 4841–4873 */
/* addr: 0x001d8230  size: 636 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 4841
 *   +0x0028 -> line 4847
 *   +0x0034 -> line 4849
 *   +0x0040 -> line 4850
 *   +0x0048 -> line 4851
 *   +0x004c -> line 4850
 *   +0x0050 -> line 4851
 *   +0x005c -> line 4853
 *   +0x0068 -> line 4854
 *   +0x0074 -> line 4857
 *   +0x00b8 -> line 4858
 *   +0x00c4 -> line 4860
 *   +0x00d4 -> line 4861
 *   +0x00dc -> line 4860
 *   +0x0100 -> line 4861
 *   +0x010c -> line 4862
 *   +0x0114 -> line 4861
 *   +0x0138 -> line 4862
 *   +0x0144 -> line 4863
 *   +0x0148 -> line 4862
 *   +0x014c -> line 4863
 *   +0x0150 -> line 4862
 *   +0x0174 -> line 4863
 *   +0x0180 -> line 4864
 *   +0x0184 -> line 4863
 *   +0x019c -> line 4864
 *   +0x01a0 -> line 4863
 *   +0x01b0 -> line 4864
 *   +0x01bc -> line 4866
 *   +0x01c0 -> line 4864
 *   +0x01c4 -> line 4866
 *   +0x01c8 -> line 4864
 *   +0x01d0 -> line 4866
 *   +0x01d4 -> line 4864
 *   +0x01e8 -> line 4866
 *   +0x01f0 -> line 4864
 *   +0x0200 -> line 4865
 *   +0x0208 -> line 4866
 *   +0x0218 -> line 4867
 *   +0x0220 -> line 4870
 *   +0x0224 -> line 4869
 *   +0x0228 -> line 4870
 *   +0x0230 -> line 4869
 *   +0x0234 -> line 4870
 *   +0x0244 -> line 4871
 *   +0x0248 -> line 4872
 *   +0x0258 -> line 4873
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void CreateType22AGO(MTH3D_tdstVector_* p_stPosition, MTH3D_tdstVector_* p_stDirection, void* hVisualMaterial, float parameter)
{
    AGO_Part_* p;
    unsigned int ulCpt;
    float Direction[3];
    float Pos[3];
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ago\AGO.c lines 4784–4836 */
/* addr: 0x001d84b0  size: 604 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 4784
 *   +0x003c -> line 4793
 *   +0x0048 -> line 4795
 *   +0x0054 -> line 4803
 *   +0x0058 -> line 4795
 *   +0x005c -> line 4796
 *   +0x0064 -> line 4797
 *   +0x0068 -> line 4796
 *   +0x006c -> line 4797
 *   +0x0070 -> line 4799
 *   +0x0074 -> line 4797
 *   +0x0078 -> line 4799
 *   +0x007c -> line 4800
 *   +0x0080 -> line 4799
 *   +0x0084 -> line 4800
 *   +0x0088 -> line 4801
 *   +0x008c -> line 4800
 *   +0x0090 -> line 4801
 *   +0x009c -> line 4807
 *   +0x00a4 -> line 4806
 *   +0x00a8 -> line 4809
 *   +0x00b4 -> line 4811
 *   +0x00e0 -> line 4813
 *   +0x00e8 -> line 4814
 *   +0x00f4 -> line 4816
 *   +0x0128 -> line 4822
 *   +0x012c -> line 4816
 *   +0x013c -> line 4818
 *   +0x0148 -> line 4822
 *   +0x014c -> line 4818
 *   +0x0150 -> line 4819
 *   +0x0154 -> line 4824
 *   +0x0158 -> line 4819
 *   +0x015c -> line 4824
 *   +0x0160 -> line 4822
 *   +0x0164 -> line 4819
 *   +0x016c -> line 4820
 *   +0x0170 -> line 4823
 *   +0x0174 -> line 4820
 *   +0x0178 -> line 4822
 *   +0x017c -> line 4823
 *   +0x0180 -> line 4824
 *   +0x0184 -> line 4826
 *   +0x0190 -> line 4827
 *   +0x0194 -> line 4826
 *   +0x0198 -> line 4827
 *   +0x019c -> line 4826
 *   +0x01a4 -> line 4827
 *   +0x01ac -> line 4826
 *   +0x01b8 -> line 4827
 *   +0x01bc -> line 4826
 *   +0x01cc -> line 4827
 *   +0x01d4 -> line 4828
 *   +0x01dc -> line 4830
 *   +0x01e0 -> line 4833
 *   +0x01e4 -> line 4832
 *   +0x01e8 -> line 4833
 *   +0x01f0 -> line 4830
 *   +0x01f4 -> line 4831
 *   +0x01fc -> line 4832
 *   +0x0204 -> line 4833
 *   +0x0214 -> line 4834
 *   +0x0218 -> line 4835
 *   +0x0228 -> line 4836
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void CreateType18AGO(MTH3D_tdstVector_* p_stPosition, MTH3D_tdstVector_* p_stDirection, void* hVisualMaterial, float parameter)
{
    float angle;
    int i;
    int Number;
    float sin1;
    float cos1;
    float scale;
    float fRadius;
    AGO_Part_* p;
    float Direction[3];
    float Pos[3];
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ago\AGO.c lines 4730–4779 */
/* addr: 0x001d8710  size: 684 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 4730
 *   +0x0024 -> line 4738
 *   +0x0030 -> line 4740
 *   +0x003c -> line 4742
 *   +0x0044 -> line 4748
 *   +0x0048 -> line 4742
 *   +0x004c -> line 4744
 *   +0x0058 -> line 4745
 *   +0x0064 -> line 4741
 *   +0x006c -> line 4746
 *   +0x0074 -> line 4752
 *   +0x0080 -> line 4750
 *   +0x0084 -> line 4751
 *   +0x0088 -> line 4755
 *   +0x008c -> line 4754
 *   +0x0090 -> line 4755
 *   +0x0094 -> line 4750
 *   +0x0098 -> line 4752
 *   +0x00a0 -> line 4754
 *   +0x00b8 -> line 4755
 *   +0x011c -> line 4757
 *   +0x0120 -> line 4759
 *   +0x0124 -> line 4757
 *   +0x0128 -> line 4759
 *   +0x0168 -> line 4760
 *   +0x0174 -> line 4762
 *   +0x0184 -> line 4768
 *   +0x0188 -> line 4762
 *   +0x019c -> line 4764
 *   +0x01a0 -> line 4762
 *   +0x01ac -> line 4765
 *   +0x01b0 -> line 4764
 *   +0x01c0 -> line 4765
 *   +0x01d0 -> line 4766
 *   +0x01d4 -> line 4768
 *   +0x01ec -> line 4770
 *   +0x01f0 -> line 4768
 *   +0x01f8 -> line 4770
 *   +0x0204 -> line 4768
 *   +0x0218 -> line 4770
 *   +0x021c -> line 4768
 *   +0x0228 -> line 4770
 *   +0x0234 -> line 4771
 *   +0x023c -> line 4773
 *   +0x0240 -> line 4775
 *   +0x0250 -> line 4773
 *   +0x0254 -> line 4774
 *   +0x025c -> line 4775
 *   +0x0264 -> line 4776
 *   +0x0268 -> line 4775
 *   +0x026c -> line 4776
 *   +0x0274 -> line 4777
 *   +0x0278 -> line 4778
 *   +0x0288 -> line 4779
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void CreateType17AGO(MTH3D_tdstVector_* p_stPosition, MTH3D_tdstVector_* p_stDirection, void* hVisualMaterial, float parameter)
{
    float xNorm;
    unsigned int ulCpt;
    float fPosAlea;
    float fScale;
    AGO_Part_* p;
    MTH3D_tdstVector_ Direction2;
    float Direction[3];
    float Pos[3];
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ago\AGO.c lines 4682–4710 */
/* addr: 0x001d89c0  size: 240 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 4682
 *   +0x0018 -> line 4688
 *   +0x0024 -> line 4690
 *   +0x0030 -> line 4691
 *   +0x003c -> line 4694
 *   +0x0044 -> line 4702
 *   +0x0048 -> line 4700
 *   +0x004c -> line 4702
 *   +0x0064 -> line 4694
 *   +0x0078 -> line 4702
 *   +0x007c -> line 4695
 *   +0x0080 -> line 4700
 *   +0x0084 -> line 4695
 *   +0x0088 -> line 4696
 *   +0x0090 -> line 4697
 *   +0x0094 -> line 4699
 *   +0x0098 -> line 4702
 *   +0x00a0 -> line 4703
 *   +0x00a8 -> line 4705
 *   +0x00ac -> line 4707
 *   +0x00b0 -> line 4706
 *   +0x00b4 -> line 4707
 *   +0x00c8 -> line 4708
 *   +0x00d0 -> line 4707
 *   +0x00d4 -> line 4708
 *   +0x00d8 -> line 4710
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void CreateType13AGO(MTH3D_tdstVector_* p_stPosition, MTH3D_tdstVector_* p_stDirection, void* hVisualMaterial, float parameter)
{
    float* p2;
    float* p1;
    float fScaleY;
    float fScaleX;
    AGO_Part_* p;
    float Direction[3];
    float Pos[3];
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ago\AGO.c lines 4630–4676 */
/* addr: 0x001d8ab0  size: 740 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 4630
 *   +0x0030 -> line 4638
 *   +0x003c -> line 4644
 *   +0x0040 -> line 4641
 *   +0x0044 -> line 4644
 *   +0x0048 -> line 4640
 *   +0x0050 -> line 4641
 *   +0x0054 -> line 4640
 *   +0x0058 -> line 4645
 *   +0x0060 -> line 4641
 *   +0x0068 -> line 4642
 *   +0x0074 -> line 4646
 *   +0x0080 -> line 4649
 *   +0x00c4 -> line 4650
 *   +0x00d0 -> line 4652
 *   +0x00d4 -> line 4656
 *   +0x00dc -> line 4652
 *   +0x00e0 -> line 4653
 *   +0x00e8 -> line 4654
 *   +0x00ec -> line 4656
 *   +0x0108 -> line 4657
 *   +0x010c -> line 4656
 *   +0x0118 -> line 4657
 *   +0x011c -> line 4656
 *   +0x012c -> line 4658
 *   +0x0130 -> line 4660
 *   +0x0140 -> line 4661
 *   +0x0144 -> line 4660
 *   +0x015c -> line 4661
 *   +0x0160 -> line 4660
 *   +0x0170 -> line 4661
 *   +0x017c -> line 4662
 *   +0x0180 -> line 4661
 *   +0x0198 -> line 4662
 *   +0x019c -> line 4661
 *   +0x01ac -> line 4662
 *   +0x01e4 -> line 4663
 *   +0x021c -> line 4664
 *   +0x022c -> line 4666
 *   +0x0240 -> line 4667
 *   +0x0244 -> line 4668
 *   +0x0248 -> line 4667
 *   +0x024c -> line 4670
 *   +0x0250 -> line 4667
 *   +0x0254 -> line 4670
 *   +0x0260 -> line 4667
 *   +0x0270 -> line 4668
 *   +0x0274 -> line 4670
 *   +0x027c -> line 4667
 *   +0x0280 -> line 4668
 *   +0x0290 -> line 4670
 *   +0x0298 -> line 4671
 *   +0x02a0 -> line 4673
 *   +0x02a8 -> line 4675
 *   +0x02b8 -> line 4676
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void CreateType6AGO(MTH3D_tdstVector_* p_stPosition, MTH3D_tdstVector_* p_stDirection, void* hVisualMaterial, float parameter)
{
    unsigned int ulCpt;
    AGO_Part_* p;
    MTH3D_tdstVector_ stHit;
    float fT;
    float fDist;
    float fTime;
    float scale;
    float Direction[3];
    float Pos[3];
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ago\AGO.c lines 4541–4598 */
/* addr: 0x001d8da0  size: 840 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 4541
 *   +0x0034 -> line 4548
 *   +0x0040 -> line 4550
 *   +0x004c -> line 4558
 *   +0x0050 -> line 4550
 *   +0x0054 -> line 4551
 *   +0x0064 -> line 4554
 *   +0x0068 -> line 4552
 *   +0x0074 -> line 4554
 *   +0x0078 -> line 4555
 *   +0x007c -> line 4554
 *   +0x0080 -> line 4555
 *   +0x0084 -> line 4556
 *   +0x008c -> line 4555
 *   +0x0094 -> line 4559
 *   +0x009c -> line 4562
 *   +0x00e0 -> line 4563
 *   +0x00ec -> line 4565
 *   +0x0108 -> line 4567
 *   +0x0144 -> line 4568
 *   +0x0150 -> line 4570
 *   +0x0154 -> line 4568
 *   +0x0158 -> line 4571
 *   +0x015c -> line 4568
 *   +0x0184 -> line 4572
 *   +0x0198 -> line 4574
 *   +0x019c -> line 4572
 *   +0x01b8 -> line 4574
 *   +0x01d4 -> line 4576
 *   +0x01d8 -> line 4574
 *   +0x01e4 -> line 4576
 *   +0x01e8 -> line 4574
 *   +0x01f4 -> line 4576
 *   +0x0200 -> line 4578
 *   +0x0208 -> line 4576
 *   +0x0238 -> line 4578
 *   +0x024c -> line 4580
 *   +0x0250 -> line 4578
 *   +0x0258 -> line 4580
 *   +0x0260 -> line 4578
 *   +0x026c -> line 4580
 *   +0x0270 -> line 4578
 *   +0x0274 -> line 4580
 *   +0x027c -> line 4578
 *   +0x028c -> line 4580
 *   +0x0298 -> line 4582
 *   +0x02a4 -> line 4584
 *   +0x02a8 -> line 4585
 *   +0x02ac -> line 4584
 *   +0x02b0 -> line 4589
 *   +0x02b4 -> line 4586
 *   +0x02b8 -> line 4590
 *   +0x02bc -> line 4587
 *   +0x02c0 -> line 4590
 *   +0x02c4 -> line 4588
 *   +0x02c8 -> line 4590
 *   +0x02cc -> line 4589
 *   +0x02d0 -> line 4590
 *   +0x02d8 -> line 4589
 *   +0x02dc -> line 4590
 *   +0x02e8 -> line 4591
 *   +0x02f0 -> line 4593
 *   +0x02f4 -> line 4594
 *   +0x02f8 -> line 4593
 *   +0x0304 -> line 4594
 *   +0x0308 -> line 4597
 *   +0x0318 -> line 4598
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void CreateType3AGO(MTH3D_tdstVector_* p_stPosition, MTH3D_tdstVector_* p_stDirection, void* hVisualMaterial, float parameter)
{
    float* p2;
    float* p1;
    AGO_Part_* p;
    unsigned int ulCpt;
    float fScale;
    float Direction[3];
    float Pos[3];
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ago\AGO.c lines 4479–4507 */
/* addr: 0x001d90f0  size: 556 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 4479
 *   +0x001c -> line 4485
 *   +0x0064 -> line 4487
 *   +0x0068 -> line 4485
 *   +0x0078 -> line 4489
 *   +0x0090 -> line 4490
 *   +0x00c8 -> line 4492
 *   +0x0104 -> line 4494
 *   +0x0144 -> line 4496
 *   +0x0184 -> line 4497
 *   +0x0194 -> line 4498
 *   +0x019c -> line 4497
 *   +0x01a8 -> line 4498
 *   +0x01ac -> line 4497
 *   +0x01b0 -> line 4498
 *   +0x01b4 -> line 4497
 *   +0x01b8 -> line 4498
 *   +0x01bc -> line 4497
 *   +0x01d4 -> line 4498
 *   +0x01d8 -> line 4497
 *   +0x01dc -> line 4498
 *   +0x01e4 -> line 4499
 *   +0x01ec -> line 4504
 *   +0x01f0 -> line 4501
 *   +0x01f4 -> line 4502
 *   +0x01fc -> line 4503
 *   +0x0204 -> line 4504
 *   +0x0208 -> line 4506
 *   +0x0214 -> line 4507
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void CreateType1204AGO(MTH3D_tdstVector_* p_stPosition, void* hVisualMaterial)
{
    float* p2;
    float* p1;
    AGO_Part_* p;
    int i;
    float scale;
    float Direction[3];
    float Pos[3];
    float NextBubble;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ago\AGO.c lines 4439–4472 */
/* addr: 0x001d9320  size: 664 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 4439
 *   +0x001c -> line 4447
 *   +0x005c -> line 4448
 *   +0x006c -> line 4450
 *   +0x0070 -> line 4448
 *   +0x00a0 -> line 4452
 *   +0x00b8 -> line 4453
 *   +0x0104 -> line 4455
 *   +0x0140 -> line 4457
 *   +0x0180 -> line 4459
 *   +0x01b8 -> line 4460
 *   +0x01c8 -> line 4461
 *   +0x01d0 -> line 4460
 *   +0x01dc -> line 4461
 *   +0x01e8 -> line 4460
 *   +0x0200 -> line 4461
 *   +0x0210 -> line 4462
 *   +0x0218 -> line 4465
 *   +0x021c -> line 4464
 *   +0x0220 -> line 4467
 *   +0x0240 -> line 4469
 *   +0x0244 -> line 4467
 *   +0x0260 -> line 4468
 *   +0x0268 -> line 4469
 *   +0x026c -> line 4470
 *   +0x0270 -> line 4471
 *   +0x027c -> line 4472
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void CreateType1203AGO(MTH3D_tdstVector_* p_stPosition, void* hVisualMaterial)
{
    float* p2;
    float* p1;
    AGO_Part_* p;
    int i;
    float scale;
    float Direction[3];
    float Pos[3];
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ago\AGO.c lines 4392–4432 */
/* addr: 0x001d95c0  size: 632 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 4392
 *   +0x0024 -> line 4402
 *   +0x0028 -> line 4405
 *   +0x0040 -> line 4406
 *   +0x0080 -> line 4407
 *   +0x00bc -> line 4408
 *   +0x00d0 -> line 4414
 *   +0x00d4 -> line 4408
 *   +0x00e8 -> line 4410
 *   +0x00f0 -> line 4408
 *   +0x00f4 -> line 4412
 *   +0x00f8 -> line 4408
 *   +0x00fc -> line 4412
 *   +0x0100 -> line 4408
 *   +0x0118 -> line 4416
 *   +0x0154 -> line 4417
 *   +0x0168 -> line 4419
 *   +0x016c -> line 4417
 *   +0x0170 -> line 4419
 *   +0x0174 -> line 4417
 *   +0x0178 -> line 4419
 *   +0x0180 -> line 4417
 *   +0x0188 -> line 4419
 *   +0x018c -> line 4417
 *   +0x0198 -> line 4419
 *   +0x01a0 -> line 4417
 *   +0x01a8 -> line 4419
 *   +0x01b4 -> line 4420
 *   +0x01bc -> line 4422
 *   +0x01c0 -> line 4424
 *   +0x01e8 -> line 4426
 *   +0x01ec -> line 4424
 *   +0x0204 -> line 4428
 *   +0x0224 -> line 4429
 *   +0x0228 -> line 4428
 *   +0x0244 -> line 4429
 *   +0x0248 -> line 4431
 *   +0x0258 -> line 4432
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void CreateType1202AGO(MTH3D_tdstVector_* p_stPosition, void* hVisualMaterial)
{
    float* p2;
    float* p1;
    AGO_Part_* p;
    int i;
    float scaley;
    float scalex;
    float Direction[3];
    float Pos[3];
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ago\AGO.c lines 4368–4384 */
/* addr: 0x001d9840  size: 328 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 4368
 *   +0x0008 -> line 4373
 *   +0x000c -> line 4368
 *   +0x0010 -> line 4374
 *   +0x0014 -> line 4368
 *   +0x001c -> line 4373
 *   +0x0020 -> line 4376
 *   +0x0024 -> line 4373
 *   +0x0038 -> line 4374
 *   +0x0050 -> line 4378
 *   +0x008c -> line 4379
 *   +0x00ac -> line 4380
 *   +0x00b0 -> line 4379
 *   +0x00cc -> line 4381
 *   +0x0124 -> line 4382
 *   +0x0134 -> line 4384
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void CreateType104AGO(MTH3D_tdstVector_* p_stPosition, MTH3D_tdstVector_* p_stDirection, void* hVisualMaterial)
{
    float* p2;
    float* p1;
    int i;
    float Direction[3];
    float Pos[3];
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ago\AGO.c lines 4344–4361 */
/* addr: 0x001d9990  size: 692 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 4344
 *   +0x0028 -> line 4349
 *   +0x0084 -> line 4350
 *   +0x00e0 -> line 4351
 *   +0x0114 -> line 4355
 *   +0x011c -> line 4351
 *   +0x014c -> line 4355
 *   +0x0150 -> line 4352
 *   +0x0154 -> line 4355
 *   +0x0158 -> line 4352
 *   +0x0168 -> line 4355
 *   +0x01a8 -> line 4356
 *   +0x01ec -> line 4357
 *   +0x0230 -> line 4358
 *   +0x0244 -> line 4359
 *   +0x0248 -> line 4358
 *   +0x024c -> line 4359
 *   +0x0250 -> line 4358
 *   +0x0254 -> line 4359
 *   +0x0258 -> line 4358
 *   +0x0260 -> line 4359
 *   +0x0264 -> line 4358
 *   +0x0270 -> line 4359
 *   +0x0284 -> line 4358
 *   +0x028c -> line 4359
 *   +0x0294 -> line 4361
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void CreateType83AGO(MTH3D_tdstVector_* p_stPosition, MTH3D_tdstVector_* p_stDirection, void* hVisualMaterial, float parameter)
{
    float scale;
    float Direction[3];
    float Pos[3];
    float NextBubble;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ago\AGO.c lines 4321–4338 */
/* addr: 0x001d9c50  size: 756 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 4321
 *   +0x0028 -> line 4326
 *   +0x0084 -> line 4327
 *   +0x00e4 -> line 4328
 *   +0x0144 -> line 4329
 *   +0x0160 -> line 4332
 *   +0x0164 -> line 4329
 *   +0x016c -> line 4332
 *   +0x0170 -> line 4329
 *   +0x01a4 -> line 4332
 *   +0x01e8 -> line 4333
 *   +0x022c -> line 4334
 *   +0x0270 -> line 4335
 *   +0x0284 -> line 4336
 *   +0x0288 -> line 4335
 *   +0x028c -> line 4336
 *   +0x0290 -> line 4335
 *   +0x0294 -> line 4336
 *   +0x0298 -> line 4335
 *   +0x02a0 -> line 4336
 *   +0x02a4 -> line 4335
 *   +0x02b0 -> line 4336
 *   +0x02c4 -> line 4335
 *   +0x02cc -> line 4336
 *   +0x02d4 -> line 4338
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void CreateType67AGO(MTH3D_tdstVector_* p_stPosition, MTH3D_tdstVector_* p_stDirection, void* hVisualMaterial, float parameter)
{
    float scale;
    float Direction[3];
    float Pos[3];
    float NextBubble;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ago\AGO.c lines 4298–4315 */
/* addr: 0x001d9f50  size: 712 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 4298
 *   +0x0028 -> line 4303
 *   +0x0084 -> line 4304
 *   +0x00d4 -> line 4305
 *   +0x0124 -> line 4306
 *   +0x0140 -> line 4309
 *   +0x0144 -> line 4306
 *   +0x0148 -> line 4309
 *   +0x014c -> line 4306
 *   +0x016c -> line 4309
 *   +0x0174 -> line 4306
 *   +0x0178 -> line 4309
 *   +0x01bc -> line 4310
 *   +0x0200 -> line 4311
 *   +0x0244 -> line 4312
 *   +0x0258 -> line 4313
 *   +0x025c -> line 4312
 *   +0x0260 -> line 4313
 *   +0x0264 -> line 4312
 *   +0x0268 -> line 4313
 *   +0x026c -> line 4312
 *   +0x0274 -> line 4313
 *   +0x0278 -> line 4312
 *   +0x0284 -> line 4313
 *   +0x0298 -> line 4312
 *   +0x02a0 -> line 4313
 *   +0x02a8 -> line 4315
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void CreateType28AGO(MTH3D_tdstVector_* p_stPosition, MTH3D_tdstVector_* p_stDirection, void* hVisualMaterial, float parameter)
{
    float scale;
    float Direction[3];
    float Pos[3];
    float NextBubble;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ago\AGO.c lines 4272–4291 */
/* addr: 0x001da220  size: 216 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 4272
 *   +0x0004 -> line 4283
 *   +0x0008 -> line 4272
 *   +0x000c -> line 4279
 *   +0x0010 -> line 4272
 *   +0x001c -> line 4279
 *   +0x0020 -> line 4280
 *   +0x0028 -> line 4279
 *   +0x003c -> line 4280
 *   +0x0054 -> line 4283
 *   +0x0058 -> line 4282
 *   +0x005c -> line 4288
 *   +0x0070 -> line 4290
 *   +0x0074 -> line 4288
 *   +0x0078 -> line 4290
 *   +0x007c -> line 4288
 *   +0x0080 -> line 4290
 *   +0x0084 -> line 4288
 *   +0x008c -> line 4290
 *   +0x0090 -> line 4288
 *   +0x0098 -> line 4290
 *   +0x00a8 -> line 4288
 *   +0x00bc -> line 4290
 *   +0x00c4 -> line 4291
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void CreateType65AGO(MTH3D_tdstVector_* p_stPosition, MTH3D_tdstVector_* p_stDirection, void* hVisualMaterial, float parameter)
{
    float* p2;
    float* p1;
    float scale;
    float Direction[3];
    float Pos[3];
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ago\AGO.c lines 4197–4224 */
/* addr: 0x001da300  size: 468 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 4197
 *   +0x0004 -> line 4205
 *   +0x0008 -> line 4197
 *   +0x000c -> line 4205
 *   +0x0010 -> line 4197
 *   +0x0018 -> line 4209
 *   +0x001c -> line 4197
 *   +0x0020 -> line 4209
 *   +0x0024 -> line 4197
 *   +0x0028 -> line 4209
 *   +0x002c -> line 4197
 *   +0x0038 -> line 4209
 *   +0x003c -> line 4197
 *   +0x0040 -> line 4209
 *   +0x0044 -> line 4197
 *   +0x0048 -> line 4209
 *   +0x004c -> line 4197
 *   +0x0050 -> line 4211
 *   +0x0058 -> line 4205
 *   +0x005c -> line 4209
 *   +0x0070 -> line 4211
 *   +0x0074 -> line 4209
 *   +0x0078 -> line 4211
 *   +0x007c -> line 4209
 *   +0x009c -> line 4211
 *   +0x00a4 -> line 4217
 *   +0x00a8 -> line 4219
 *   +0x00b4 -> line 4217
 *   +0x00b8 -> line 4219
 *   +0x00c8 -> line 4217
 *   +0x00d0 -> line 4219
 *   +0x00d4 -> line 4217
 *   +0x00d8 -> line 4219
 *   +0x00e4 -> line 4217
 *   +0x0118 -> line 4219
 *   +0x0120 -> line 4220
 *   +0x0130 -> line 4221
 *   +0x0150 -> line 4222
 *   +0x0160 -> line 4223
 *   +0x0164 -> line 4222
 *   +0x0168 -> line 4223
 *   +0x0170 -> line 4222
 *   +0x0178 -> line 4223
 *   +0x01a4 -> line 4224
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void CreateType21AGO(MTH3D_tdstVector_* p_stPosition, MTH3D_tdstVector_* p_stDirection, void* hVisualMaterial, float parameter)
{
    AGO_Part_* p;
    float fTemp;
    int i;
    float Direction[3];
    float Pos[3];
    float Offset;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ago\AGO.c lines 4122–4150 */
/* addr: 0x001da4e0  size: 488 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 4122
 *   +0x0028 -> line 4127
 *   +0x002c -> line 4122
 *   +0x0038 -> line 4129
 *   +0x007c -> line 4130
 *   +0x00b8 -> line 4131
 *   +0x00f8 -> line 4132
 *   +0x010c -> line 4148
 *   +0x0110 -> line 4132
 *   +0x011c -> line 4148
 *   +0x0120 -> line 4132
 *   +0x0124 -> line 4148
 *   +0x0128 -> line 4132
 *   +0x012c -> line 4148
 *   +0x0130 -> line 4132
 *   +0x0134 -> line 4144
 *   +0x0138 -> line 4132
 *   +0x0140 -> line 4144
 *   +0x0144 -> line 4132
 *   +0x014c -> line 4144
 *   +0x0150 -> line 4132
 *   +0x0154 -> line 4145
 *   +0x015c -> line 4148
 *   +0x0164 -> line 4145
 *   +0x0174 -> line 4144
 *   +0x0178 -> line 4145
 *   +0x0194 -> line 4144
 *   +0x0198 -> line 4145
 *   +0x01ac -> line 4148
 *   +0x01b4 -> line 4149
 *   +0x01c0 -> line 4150
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void CreateType15AGO(MTH3D_tdstVector_* p_stPosition, MTH3D_tdstVector_* p_stDirection, void* hVisualMaterial, float parameter)
{
    float offset2;
    float offset;
    int i;
    float scale;
    float Direction[3];
    float Pos[3];
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ago\AGO.c lines 4068–4116 */
/* addr: 0x001da6d0  size: 612 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 4068
 *   +0x0004 -> line 4083
 *   +0x0008 -> line 4068
 *   +0x000c -> line 4083
 *   +0x0010 -> line 4068
 *   +0x0030 -> line 4080
 *   +0x0034 -> line 4068
 *   +0x0038 -> line 4079
 *   +0x003c -> line 4068
 *   +0x0040 -> line 4088
 *   +0x0044 -> line 4078
 *   +0x0058 -> line 4079
 *   +0x0068 -> line 4080
 *   +0x0070 -> line 4088
 *   +0x0074 -> line 4080
 *   +0x0078 -> line 4088
 *   +0x007c -> line 4080
 *   +0x0080 -> line 4082
 *   +0x009c -> line 4083
 *   +0x00a4 -> line 4084
 *   +0x00ac -> line 4085
 *   +0x00b8 -> line 4086
 *   +0x00c0 -> line 4088
 *   +0x00c8 -> line 4090
 *   +0x010c -> line 4092
 *   +0x0114 -> line 4093
 *   +0x0120 -> line 4095
 *   +0x0124 -> line 4100
 *   +0x0128 -> line 4095
 *   +0x012c -> line 4096
 *   +0x0134 -> line 4100
 *   +0x0138 -> line 4095
 *   +0x0140 -> line 4096
 *   +0x0144 -> line 4095
 *   +0x0148 -> line 4096
 *   +0x0150 -> line 4097
 *   +0x0164 -> line 4099
 *   +0x0180 -> line 4100
 *   +0x019c -> line 4103
 *   +0x01a4 -> line 4106
 *   +0x01c4 -> line 4108
 *   +0x01c8 -> line 4113
 *   +0x01cc -> line 4108
 *   +0x01d0 -> line 4113
 *   +0x01e8 -> line 4108
 *   +0x01f0 -> line 4109
 *   +0x0200 -> line 4110
 *   +0x0210 -> line 4111
 *   +0x0214 -> line 4113
 *   +0x0224 -> line 4111
 *   +0x0234 -> line 4113
 *   +0x023c -> line 4116
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void CreateType35AGO(MTH3D_tdstVector_* p_stPosition, MTH3D_tdstVector_* p_stDirection, void* hVisualMaterial, float parameter)
{
    float sin1;
    float cos1;
    float Mul2;
    float Mul1;
    MTH3D_tdstVector_ stV3;
    MTH3D_tdstVector_ stV2;
    MTH3D_tdstVector_ stV1;
    float Direction[3];
    float Pos[3];
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ago\AGO.c lines 4033–4061 */
/* addr: 0x001da940  size: 488 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 4033
 *   +0x0008 -> line 4040
 *   +0x000c -> line 4033
 *   +0x0010 -> line 4041
 *   +0x0014 -> line 4033
 *   +0x0020 -> line 4043
 *   +0x0024 -> line 4040
 *   +0x003c -> line 4041
 *   +0x0054 -> line 4045
 *   +0x0090 -> line 4046
 *   +0x00b0 -> line 4047
 *   +0x00b4 -> line 4046
 *   +0x00d0 -> line 4048
 *   +0x00f4 -> line 4055
 *   +0x00f8 -> line 4048
 *   +0x0114 -> line 4055
 *   +0x01a0 -> line 4059
 *   +0x01c0 -> line 4060
 *   +0x01d0 -> line 4061
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void CreateType62AGO(MTH3D_tdstVector_* p_stPosition, MTH3D_tdstVector_* p_stDirection, void* hVisualMaterial)
{
    float* p2;
    float* p1;
    float time;
    float scale;
    int i;
    float Direction[3];
    float Pos[3];
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ago\AGO.c lines 3992–4027 */
/* addr: 0x001dab30  size: 412 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 3992
 *   +0x0010 -> line 3998
 *   +0x001c -> line 4000
 *   +0x0024 -> line 4001
 *   +0x0028 -> line 4018
 *   +0x002c -> line 4000
 *   +0x0040 -> line 4001
 *   +0x0058 -> line 4020
 *   +0x0094 -> line 4021
 *   +0x00d4 -> line 4022
 *   +0x0114 -> line 4023
 *   +0x0124 -> line 4024
 *   +0x012c -> line 4023
 *   +0x0138 -> line 4024
 *   +0x013c -> line 4023
 *   +0x0140 -> line 4024
 *   +0x0144 -> line 4023
 *   +0x0148 -> line 4024
 *   +0x0150 -> line 4023
 *   +0x0170 -> line 4024
 *   +0x0178 -> line 4025
 *   +0x0188 -> line 4027
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void CreateType60AGO(MTH3D_tdstVector_* p_stPosition, MTH3D_tdstVector_* p_stDirection, void* hVisualMaterial)
{
    float* p2;
    float* p1;
    float scale;
    int i;
    float Direction[3];
    float Pos[3];
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ago\AGO.c lines 3960–3985 */
/* addr: 0x001dacd0  size: 468 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 3960
 *   +0x0008 -> line 3966
 *   +0x000c -> line 3960
 *   +0x0010 -> line 3967
 *   +0x0014 -> line 3960
 *   +0x0038 -> line 3966
 *   +0x003c -> line 3969
 *   +0x0040 -> line 3966
 *   +0x0054 -> line 3967
 *   +0x006c -> line 3971
 *   +0x00ec -> line 3972
 *   +0x0110 -> line 3981
 *   +0x0114 -> line 3972
 *   +0x011c -> line 3981
 *   +0x0120 -> line 3972
 *   +0x0144 -> line 3981
 *   +0x014c -> line 3983
 *   +0x0168 -> line 3984
 *   +0x0174 -> line 3983
 *   +0x0190 -> line 3984
 *   +0x01a0 -> line 3983
 *   +0x01a8 -> line 3984
 *   +0x01b0 -> line 3985
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void CreateType52AGO(MTH3D_tdstVector_* p_stPosition, MTH3D_tdstVector_* p_stDirection, void* hVisualMaterial)
{
    float* p2;
    float* p1;
    int i;
    float scale;
    float Direction[3];
    float Pos[3];
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ago\AGO.c lines 3934–3954 */
/* addr: 0x001daeb0  size: 348 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 3934
 *   +0x0008 -> line 3941
 *   +0x000c -> line 3934
 *   +0x002c -> line 3943
 *   +0x0030 -> line 3941
 *   +0x004c -> line 3947
 *   +0x0078 -> line 3948
 *   +0x007c -> line 3947
 *   +0x0084 -> line 3948
 *   +0x0088 -> line 3947
 *   +0x0094 -> line 3948
 *   +0x00a4 -> line 3949
 *   +0x00bc -> line 3950
 *   +0x00d0 -> line 3951
 *   +0x00e0 -> line 3952
 *   +0x00e8 -> line 3951
 *   +0x00f4 -> line 3952
 *   +0x00f8 -> line 3951
 *   +0x00fc -> line 3952
 *   +0x0100 -> line 3951
 *   +0x011c -> line 3952
 *   +0x0120 -> line 3951
 *   +0x0124 -> line 3952
 *   +0x012c -> line 3953
 *   +0x013c -> line 3954
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void CreateType72AGO(MTH3D_tdstVector_* p_stPosition, MTH3D_tdstVector_* p_stDirection, void* hVisualMaterial, float parameter)
{
    float f;
    float* p2;
    float* p1;
    float scale;
    int i;
    float Direction[3];
    float Pos[3];
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ago\AGO.c lines 3810–3841 */
/* addr: 0x001db010  size: 592 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 3810
 *   +0x0004 -> line 3818
 *   +0x0008 -> line 3810
 *   +0x000c -> line 3818
 *   +0x0010 -> line 3810
 *   +0x0014 -> line 3818
 *   +0x0018 -> line 3810
 *   +0x0024 -> line 3824
 *   +0x0028 -> line 3810
 *   +0x002c -> line 3817
 *   +0x0034 -> line 3819
 *   +0x0038 -> line 3820
 *   +0x003c -> line 3822
 *   +0x0040 -> line 3824
 *   +0x0044 -> line 3817
 *   +0x004c -> line 3824
 *   +0x0054 -> line 3817
 *   +0x0060 -> line 3818
 *   +0x006c -> line 3819
 *   +0x0084 -> line 3820
 *   +0x009c -> line 3822
 *   +0x00a8 -> line 3823
 *   +0x00bc -> line 3824
 *   +0x00cc -> line 3826
 *   +0x00e4 -> line 3827
 *   +0x00e8 -> line 3829
 *   +0x0114 -> line 3831
 *   +0x0118 -> line 3829
 *   +0x0124 -> line 3831
 *   +0x0128 -> line 3829
 *   +0x012c -> line 3831
 *   +0x0140 -> line 3832
 *   +0x0158 -> line 3834
 *   +0x016c -> line 3838
 *   +0x0170 -> line 3834
 *   +0x017c -> line 3838
 *   +0x0180 -> line 3834
 *   +0x0184 -> line 3838
 *   +0x0188 -> line 3834
 *   +0x018c -> line 3838
 *   +0x0194 -> line 3834
 *   +0x0198 -> line 3838
 *   +0x01a0 -> line 3834
 *   +0x01a4 -> line 3838
 *   +0x01b0 -> line 3834
 *   +0x01b8 -> line 3835
 *   +0x01bc -> line 3834
 *   +0x01c0 -> line 3835
 *   +0x01d4 -> line 3836
 *   +0x01dc -> line 3838
 *   +0x01e8 -> line 3836
 *   +0x01f4 -> line 3838
 *   +0x01fc -> line 3839
 *   +0x0234 -> line 3841
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void CreateType8AGO(MTH3D_tdstVector_* p_stPosition, MTH3D_tdstVector_* p_stDirection, void* hVisualMaterial)
{
    float* p2;
    float* p1;
    float vy;
    float vx;
    float fNorm;
    float Pos2[3];
    float Direction[3];
    float Pos[3];
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ago\AGO.c lines 3779–3804 */
/* addr: 0x001db260  size: 820 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 3779
 *   +0x0004 -> line 3783
 *   +0x0008 -> line 3779
 *   +0x000c -> line 3783
 *   +0x0010 -> line 3779
 *   +0x0014 -> line 3783
 *   +0x0018 -> line 3779
 *   +0x0038 -> line 3783
 *   +0x0044 -> line 3785
 *   +0x0058 -> line 3786
 *   +0x005c -> line 3785
 *   +0x0068 -> line 3786
 *   +0x006c -> line 3785
 *   +0x0070 -> line 3786
 *   +0x0074 -> line 3785
 *   +0x0078 -> line 3787
 *   +0x007c -> line 3786
 *   +0x0080 -> line 3787
 *   +0x0084 -> line 3786
 *   +0x0088 -> line 3787
 *   +0x008c -> line 3785
 *   +0x0090 -> line 3787
 *   +0x0094 -> line 3786
 *   +0x0098 -> line 3787
 *   +0x009c -> line 3785
 *   +0x00a0 -> line 3787
 *   +0x00a8 -> line 3788
 *   +0x00b8 -> line 3785
 *   +0x00c0 -> line 3786
 *   +0x00c4 -> line 3785
 *   +0x00cc -> line 3786
 *   +0x00d0 -> line 3788
 *   +0x00d8 -> line 3786
 *   +0x00f4 -> line 3787
 *   +0x00fc -> line 3788
 *   +0x0104 -> line 3790
 *   +0x0110 -> line 3791
 *   +0x0114 -> line 3792
 *   +0x0118 -> line 3790
 *   +0x0128 -> line 3791
 *   +0x012c -> line 3790
 *   +0x0130 -> line 3792
 *   +0x0134 -> line 3790
 *   +0x0138 -> line 3792
 *   +0x0140 -> line 3793
 *   +0x0144 -> line 3792
 *   +0x0148 -> line 3793
 *   +0x014c -> line 3790
 *   +0x0150 -> line 3793
 *   +0x0154 -> line 3790
 *   +0x0158 -> line 3793
 *   +0x015c -> line 3790
 *   +0x0160 -> line 3793
 *   +0x0168 -> line 3790
 *   +0x0170 -> line 3791
 *   +0x0174 -> line 3790
 *   +0x017c -> line 3791
 *   +0x0184 -> line 3793
 *   +0x018c -> line 3791
 *   +0x01a8 -> line 3792
 *   +0x01b0 -> line 3793
 *   +0x01b8 -> line 3795
 *   +0x01c4 -> line 3797
 *   +0x01c8 -> line 3795
 *   +0x01cc -> line 3796
 *   +0x01d0 -> line 3795
 *   +0x01dc -> line 3797
 *   +0x01e0 -> line 3795
 *   +0x01e4 -> line 3798
 *   +0x01e8 -> line 3795
 *   +0x01ec -> line 3798
 *   +0x01f0 -> line 3797
 *   +0x01f8 -> line 3795
 *   +0x01fc -> line 3798
 *   +0x0200 -> line 3795
 *   +0x0204 -> line 3798
 *   +0x0208 -> line 3795
 *   +0x020c -> line 3798
 *   +0x0214 -> line 3795
 *   +0x021c -> line 3798
 *   +0x0220 -> line 3795
 *   +0x0228 -> line 3796
 *   +0x0230 -> line 3798
 *   +0x0238 -> line 3796
 *   +0x0254 -> line 3797
 *   +0x025c -> line 3798
 *   +0x0264 -> line 3800
 *   +0x0270 -> line 3802
 *   +0x0278 -> line 3800
 *   +0x0288 -> line 3801
 *   +0x028c -> line 3800
 *   +0x0290 -> line 3803
 *   +0x0294 -> line 3800
 *   +0x0298 -> line 3803
 *   +0x029c -> line 3802
 *   +0x02a0 -> line 3803
 *   +0x02a4 -> line 3802
 *   +0x02a8 -> line 3803
 *   +0x02ac -> line 3800
 *   +0x02b0 -> line 3802
 *   +0x02b4 -> line 3800
 *   +0x02b8 -> line 3802
 *   +0x02bc -> line 3800
 *   +0x02c8 -> line 3801
 *   +0x02d0 -> line 3800
 *   +0x02d8 -> line 3801
 *   +0x02dc -> line 3803
 *   +0x02e4 -> line 3801
 *   +0x02fc -> line 3802
 *   +0x0304 -> line 3803
 *   +0x030c -> line 3804
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void CreateType5AGO(MTH3D_tdstVector_* p_stPosition, void* hVisualMaterial, float parameter)
{
    float Direction[3];
    float Pos[3];
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ago\AGO.c lines 3301–3772 */
/* addr: 0x001db5a0  size: 4608 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 3301
 *   +0x0004 -> line 3306
 *   +0x0008 -> line 3301
 *   +0x001c -> line 3306
 *   +0x0020 -> line 3301
 *   +0x0024 -> line 3306
 *   +0x0028 -> line 3301
 *   +0x002c -> line 3306
 *   +0x0030 -> line 3301
 *   +0x0034 -> line 3306
 *   +0x0038 -> line 3301
 *   +0x003c -> line 3306
 *   +0x0040 -> line 3301
 *   +0x0044 -> line 3310
 *   +0x0070 -> line 3318
 *   +0x009c -> line 3319
 *   +0x00d8 -> line 3320
 *   +0x00e0 -> line 3323
 *   +0x0100 -> line 3324
 *   +0x013c -> line 3325
 *   +0x0144 -> line 3327
 *   +0x0160 -> line 3328
 *   +0x019c -> line 3329
 *   +0x01a4 -> line 3331
 *   +0x01e0 -> line 3332
 *   +0x01e8 -> line 3334
 *   +0x0228 -> line 3335
 *   +0x023c -> line 3336
 *   +0x0244 -> line 3340
 *   +0x0248 -> line 3343
 *   +0x0250 -> line 3350
 *   +0x0254 -> line 3346
 *   +0x0258 -> line 3350
 *   +0x025c -> line 3346
 *   +0x0264 -> line 3345
 *   +0x0278 -> line 3346
 *   +0x0298 -> line 3349
 *   +0x029c -> line 3350
 *   +0x02a8 -> line 3351
 *   +0x02bc -> line 3354
 *   +0x02c0 -> line 3353
 *   +0x02c4 -> line 3355
 *   +0x02d0 -> line 3357
 *   +0x02dc -> line 3358
 *   +0x02e0 -> line 3359
 *   +0x02f0 -> line 3360
 *   +0x0304 -> line 3362
 *   +0x030c -> line 3367
 *   +0x0310 -> line 3370
 *   +0x0318 -> line 3377
 *   +0x031c -> line 3373
 *   +0x0320 -> line 3377
 *   +0x0324 -> line 3373
 *   +0x032c -> line 3372
 *   +0x0340 -> line 3373
 *   +0x0360 -> line 3376
 *   +0x0364 -> line 3377
 *   +0x0370 -> line 3378
 *   +0x0384 -> line 3381
 *   +0x0388 -> line 3380
 *   +0x038c -> line 3382
 *   +0x0398 -> line 3384
 *   +0x03a4 -> line 3385
 *   +0x03a8 -> line 3386
 *   +0x03b8 -> line 3387
 *   +0x03cc -> line 3389
 *   +0x03d4 -> line 3396
 *   +0x03d8 -> line 3398
 *   +0x03dc -> line 3396
 *   +0x03e0 -> line 3398
 *   +0x03e4 -> line 3399
 *   +0x03ec -> line 3396
 *   +0x0414 -> line 3398
 *   +0x041c -> line 3399
 *   +0x0438 -> line 3402
 *   +0x0440 -> line 3408
 *   +0x0450 -> line 3409
 *   +0x0454 -> line 3408
 *   +0x0458 -> line 3409
 *   +0x0460 -> line 3410
 *   +0x046c -> line 3411
 *   +0x0478 -> line 3413
 *   +0x04b4 -> line 3418
 *   +0x04bc -> line 3426
 *   +0x04f8 -> line 3432
 *   +0x0500 -> line 3439
 *   +0x0548 -> line 3440
 *   +0x0594 -> line 3441
 *   +0x05e0 -> line 3443
 *   +0x0620 -> line 3444
 *   +0x0644 -> line 3446
 *   +0x0648 -> line 3444
 *   +0x064c -> line 3446
 *   +0x0650 -> line 3444
 *   +0x0654 -> line 3446
 *   +0x0660 -> line 3447
 *   +0x0664 -> line 3444
 *   +0x0668 -> line 3447
 *   +0x066c -> line 3444
 *   +0x0670 -> line 3447
 *   +0x067c -> line 3448
 *   +0x0684 -> line 3450
 *   +0x068c -> line 3448
 *   +0x0698 -> line 3450
 *   +0x06d4 -> line 3453
 *   +0x06d8 -> line 3452
 *   +0x06dc -> line 3453
 *   +0x06e4 -> line 3455
 *   +0x06e8 -> line 3454
 *   +0x06ec -> line 3455
 *   +0x06f4 -> line 3459
 *   +0x06fc -> line 3467
 *   +0x071c -> line 3469
 *   +0x0720 -> line 3470
 *   +0x0724 -> line 3469
 *   +0x0728 -> line 3470
 *   +0x072c -> line 3469
 *   +0x0730 -> line 3470
 *   +0x0738 -> line 3469
 *   +0x0740 -> line 3470
 *   +0x0748 -> line 3471
 *   +0x0750 -> line 3473
 *   +0x076c -> line 3475
 *   +0x0770 -> line 3476
 *   +0x0774 -> line 3475
 *   +0x0778 -> line 3476
 *   +0x077c -> line 3475
 *   +0x0780 -> line 3476
 *   +0x0788 -> line 3475
 *   +0x0790 -> line 3476
 *   +0x0798 -> line 3477
 *   +0x07a0 -> line 3481
 *   +0x07a4 -> line 3480
 *   +0x07a8 -> line 3481
 *   +0x07ac -> line 3480
 *   +0x07b0 -> line 3481
 *   +0x07b8 -> line 3480
 *   +0x07c0 -> line 3481
 *   +0x07c8 -> line 3485
 *   +0x07d0 -> line 3492
 *   +0x07e0 -> line 3494
 *   +0x07e8 -> line 3496
 *   +0x07ec -> line 3492
 *   +0x07f0 -> line 3496
 *   +0x07f4 -> line 3492
 *   +0x0804 -> line 3494
 *   +0x0810 -> line 3496
 *   +0x0818 -> line 3494
 *   +0x0824 -> line 3495
 *   +0x0830 -> line 3496
 *   +0x0840 -> line 3498
 *   +0x0850 -> line 3501
 *   +0x0854 -> line 3502
 *   +0x0860 -> line 3503
 *   +0x0870 -> line 3505
 *   +0x0884 -> line 3506
 *   +0x08a0 -> line 3507
 *   +0x08bc -> line 3508
 *   +0x08d4 -> line 3527
 *   +0x08dc -> line 3543
 *   +0x08e4 -> line 3544
 *   +0x08e8 -> line 3545
 *   +0x08ec -> line 3543
 *   +0x08f0 -> line 3544
 *   +0x08f4 -> line 3545
 *   +0x08f8 -> line 3547
 *   +0x0910 -> line 3548
 *   +0x0928 -> line 3549
 *   +0x093c -> line 3552
 *   +0x0948 -> line 3568
 *   +0x094c -> line 3569
 *   +0x0950 -> line 3552
 *   +0x0954 -> line 3569
 *   +0x0958 -> line 3552
 *   +0x09a0 -> line 3557
 *   +0x09b0 -> line 3562
 *   +0x09b4 -> line 3557
 *   +0x09c0 -> line 3562
 *   +0x09c8 -> line 3557
 *   +0x09e0 -> line 3562
 *   +0x09e4 -> line 3557
 *   +0x09e8 -> line 3562
 *   +0x09ec -> line 3557
 *   +0x09f4 -> line 3562
 *   +0x09f8 -> line 3557
 *   +0x09fc -> line 3562
 *   +0x0a04 -> line 3568
 *   +0x0a08 -> line 3569
 *   +0x0a0c -> line 3562
 *   +0x0a18 -> line 3568
 *   +0x0a28 -> line 3569
 *   +0x0a38 -> line 3570
 *   +0x0a48 -> line 3579
 *   +0x0a74 -> line 3581
 *   +0x0a8c -> line 3585
 *   +0x0a90 -> line 3584
 *   +0x0a94 -> line 3586
 *   +0x0a98 -> line 3585
 *   +0x0a9c -> line 3586
 *   +0x0aa4 -> line 3589
 *   +0x0aa8 -> line 3587
 *   +0x0aac -> line 3588
 *   +0x0ab4 -> line 3589
 *   +0x0ab8 -> line 3590
 *   +0x0ac0 -> line 3600
 *   +0x0ac4 -> line 3595
 *   +0x0ac8 -> line 3600
 *   +0x0b60 -> line 3605
 *   +0x0b74 -> line 3606
 *   +0x0b80 -> line 3605
 *   +0x0b8c -> line 3606
 *   +0x0b9c -> line 3607
 *   +0x0ba4 -> line 3611
 *   +0x0bb0 -> line 3612
 *   +0x0bb4 -> line 3611
 *   +0x0bb8 -> line 3613
 *   +0x0bbc -> line 3612
 *   +0x0bc0 -> line 3613
 *   +0x0bc4 -> line 3611
 *   +0x0bd0 -> line 3612
 *   +0x0be4 -> line 3613
 *   +0x0bf8 -> line 3615
 *   +0x0c08 -> line 3616
 *   +0x0c10 -> line 3618
 *   +0x0c18 -> line 3620
 *   +0x0c28 -> line 3622
 *   +0x0c30 -> line 3620
 *   +0x0c38 -> line 3622
 *   +0x0c48 -> line 3624
 *   +0x0c4c -> line 3625
 *   +0x0c50 -> line 3624
 *   +0x0c54 -> line 3625
 *   +0x0c60 -> line 3626
 *   +0x0c68 -> line 3628
 *   +0x0c70 -> line 3630
 *   +0x0c7c -> line 3631
 *   +0x0c80 -> line 3630
 *   +0x0c84 -> line 3632
 *   +0x0c88 -> line 3631
 *   +0x0c8c -> line 3632
 *   +0x0c90 -> line 3630
 *   +0x0c9c -> line 3631
 *   +0x0cac -> line 3632
 *   +0x0cbc -> line 3634
 *   +0x0cc8 -> line 3636
 *   +0x0cd0 -> line 3638
 *   +0x0cd8 -> line 3639
 *   +0x0ce0 -> line 3641
 *   +0x0ce8 -> line 3642
 *   +0x0cf0 -> line 3644
 *   +0x0cf8 -> line 3645
 *   +0x0d00 -> line 3647
 *   +0x0d04 -> line 3648
 *   +0x0d0c -> line 3650
 *   +0x0d10 -> line 3651
 *   +0x0d18 -> line 3653
 *   +0x0d20 -> line 3654
 *   +0x0d28 -> line 3656
 *   +0x0d40 -> line 3657
 *   +0x0d54 -> line 3658
 *   +0x0d5c -> line 3660
 *   +0x0d64 -> line 3666
 *   +0x0d7c -> line 3668
 *   +0x0d80 -> line 3669
 *   +0x0d84 -> line 3668
 *   +0x0d88 -> line 3669
 *   +0x0d9c -> line 3672
 *   +0x0db0 -> line 3674
 *   +0x0dd8 -> line 3675
 *   +0x0de0 -> line 3676
 *   +0x0de8 -> line 3678
 *   +0x0e34 -> line 3681
 *   +0x0e50 -> line 3684
 *   +0x0e54 -> line 3683
 *   +0x0e5c -> line 3684
 *   +0x0e68 -> line 3686
 *   +0x0e84 -> line 3689
 *   +0x0e88 -> line 3688
 *   +0x0e90 -> line 3689
 *   +0x0e9c -> line 3696
 *   +0x0f38 -> line 3700
 *   +0x0f58 -> line 3702
 *   +0x0f64 -> line 3703
 *   +0x0f6c -> line 3706
 *   +0x0f74 -> line 3708
 *   +0x0f84 -> line 3709
 *   +0x0f8c -> line 3708
 *   +0x0f94 -> line 3709
 *   +0x0fa4 -> line 3711
 *   +0x0fa8 -> line 3712
 *   +0x0fbc -> line 3713
 *   +0x0fc8 -> line 3714
 *   +0x0fcc -> line 3716
 *   +0x0fd4 -> line 3718
 *   +0x0fec -> line 3719
 *   +0x0ff4 -> line 3721
 *   +0x100c -> line 3722
 *   +0x1014 -> line 3724
 *   +0x102c -> line 3725
 *   +0x1034 -> line 3727
 *   +0x104c -> line 3728
 *   +0x1054 -> line 3730
 *   +0x1070 -> line 3731
 *   +0x1078 -> line 3733
 *   +0x1094 -> line 3734
 *   +0x109c -> line 3738
 *   +0x10bc -> line 3743
 *   +0x10c4 -> line 3746
 *   +0x10cc -> line 3748
 *   +0x1108 -> line 3749
 *   +0x1110 -> line 3751
 *   +0x1128 -> line 3752
 *   +0x1130 -> line 3754
 *   +0x115c -> line 3755
 *   +0x1164 -> line 3757
 *   +0x117c -> line 3764
 *   +0x11ac -> line 3766
 *   +0x11b4 -> line 3767
 *   +0x11b8 -> line 3770
 *   +0x11cc -> line 3771
 *   +0x11d4 -> line 3772
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void AGO_vProcessPart(unsigned int ulPartNumber, GLD_tdstViewportAttributes_* _p_stViewport)
{
    float pos2;
    float pos1;
    float pos0;
    float sinz;
    float cosz;
    float siny;
    float cosy;
    float sinx;
    float cosx;
    float Angle;
    float Cos1;
    float Sin1;
    MTH3D_tdstVector_ V2;
    MTH3D_tdstVector_ V1;
    float* pp;
    float untransparency;
    float unscale;
    float* pp2;
    int i;
    int Finished;
    float Val2;
    float Val1;
    float TempValue;
    AGO_Part_* p;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ago\AGO.c lines 2581–3258 */
/* addr: 0x001dc7a0  size: 5992 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 2581
 *   +0x0004 -> line 2588
 *   +0x0008 -> line 2581
 *   +0x000c -> line 2588
 *   +0x0010 -> line 2581
 *   +0x0014 -> line 2588
 *   +0x0018 -> line 2581
 *   +0x001c -> line 2588
 *   +0x0020 -> line 2581
 *   +0x0024 -> line 2588
 *   +0x0028 -> line 2581
 *   +0x0048 -> line 2588
 *   +0x004c -> line 2581
 *   +0x0050 -> line 2592
 *   +0x0054 -> line 2581
 *   +0x0074 -> line 2592
 *   +0x0078 -> line 2584
 *   +0x0080 -> line 2585
 *   +0x0084 -> line 2592
 *   +0x00bc -> line 2599
 *   +0x00c0 -> line 2600
 *   +0x00c4 -> line 2599
 *   +0x00d4 -> line 2601
 *   +0x00e0 -> line 2602
 *   +0x00f0 -> line 2603
 *   +0x00f4 -> line 2602
 *   +0x00f8 -> line 2603
 *   +0x0100 -> line 2604
 *   +0x0104 -> line 2605
 *   +0x0108 -> line 2604
 *   +0x0110 -> line 2605
 *   +0x0118 -> line 2607
 *   +0x0120 -> line 2613
 *   +0x0124 -> line 2611
 *   +0x0128 -> line 2613
 *   +0x012c -> line 2612
 *   +0x0130 -> line 2613
 *   +0x0144 -> line 2615
 *   +0x0150 -> line 2616
 *   +0x0160 -> line 2617
 *   +0x0170 -> line 2618
 *   +0x0174 -> line 2617
 *   +0x0178 -> line 2618
 *   +0x0184 -> line 2619
 *   +0x0188 -> line 2618
 *   +0x018c -> line 2619
 *   +0x0194 -> line 2620
 *   +0x01a0 -> line 2621
 *   +0x01a8 -> line 2623
 *   +0x01b0 -> line 2626
 *   +0x01c8 -> line 2635
 *   +0x01e4 -> line 2636
 *   +0x01e8 -> line 2641
 *   +0x01f8 -> line 2644
 *   +0x0200 -> line 2647
 *   +0x0208 -> line 2654
 *   +0x0228 -> line 2655
 *   +0x0238 -> line 2657
 *   +0x0240 -> line 2661
 *   +0x024c -> line 2663
 *   +0x0260 -> line 2667
 *   +0x026c -> line 2673
 *   +0x0280 -> line 2677
 *   +0x0290 -> line 2680
 *   +0x029c -> line 2682
 *   +0x02a4 -> line 2684
 *   +0x02b4 -> line 2692
 *   +0x02b8 -> line 2696
 *   +0x02c0 -> line 2693
 *   +0x02c4 -> line 2696
 *   +0x02c8 -> line 2694
 *   +0x02cc -> line 2692
 *   +0x02d4 -> line 2693
 *   +0x02e0 -> line 2694
 *   +0x02e4 -> line 2695
 *   +0x0300 -> line 2696
 *   +0x0310 -> line 2698
 *   +0x0314 -> line 2704
 *   +0x0318 -> line 2698
 *   +0x031c -> line 2704
 *   +0x0320 -> line 2699
 *   +0x0324 -> line 2704
 *   +0x0328 -> line 2698
 *   +0x032c -> line 2704
 *   +0x0330 -> line 2699
 *   +0x033c -> line 2700
 *   +0x0340 -> line 2702
 *   +0x0344 -> line 2700
 *   +0x0348 -> line 2701
 *   +0x034c -> line 2702
 *   +0x0350 -> line 2700
 *   +0x0354 -> line 2703
 *   +0x0360 -> line 2704
 *   +0x0380 -> line 2707
 *   +0x038c -> line 2709
 *   +0x0394 -> line 2710
 *   +0x039c -> line 2711
 *   +0x03a4 -> line 2713
 *   +0x03ac -> line 2715
 *   +0x03fc -> line 2716
 *   +0x0404 -> line 2717
 *   +0x0410 -> line 2719
 *   +0x045c -> line 2720
 *   +0x0468 -> line 2721
 *   +0x0470 -> line 2722
 *   +0x0478 -> line 2738
 *   +0x04b0 -> line 2740
 *   +0x0524 -> line 2741
 *   +0x0534 -> line 2745
 *   +0x0538 -> line 2743
 *   +0x053c -> line 2745
 *   +0x0540 -> line 2748
 *   +0x0544 -> line 2745
 *   +0x0548 -> line 2748
 *   +0x054c -> line 2745
 *   +0x0550 -> line 2750
 *   +0x0558 -> line 2743
 *   +0x055c -> line 2751
 *   +0x0568 -> line 2745
 *   +0x056c -> line 2743
 *   +0x057c -> line 2745
 *   +0x0598 -> line 2748
 *   +0x05b0 -> line 2750
 *   +0x05b8 -> line 2751
 *   +0x061c -> line 2753
 *   +0x0620 -> line 2751
 *   +0x0624 -> line 2753
 *   +0x0634 -> line 2754
 *   +0x063c -> line 2755
 *   +0x0640 -> line 2754
 *   +0x064c -> line 2755
 *   +0x0658 -> line 2757
 *   +0x0660 -> line 2759
 *   +0x0664 -> line 2761
 *   +0x0670 -> line 2765
 *   +0x0674 -> line 2761
 *   +0x0688 -> line 2762
 *   +0x06b0 -> line 2763
 *   +0x06c4 -> line 2765
 *   +0x06cc -> line 2767
 *   +0x06ec -> line 2769
 *   +0x0700 -> line 2770
 *   +0x0708 -> line 2773
 *   +0x0710 -> line 2774
 *   +0x0714 -> line 2773
 *   +0x0738 -> line 2774
 *   +0x073c -> line 2773
 *   +0x0740 -> line 2774
 *   +0x0758 -> line 2776
 *   +0x0760 -> line 2777
 *   +0x0788 -> line 2781
 *   +0x0798 -> line 2782
 *   +0x07a0 -> line 2783
 *   +0x07ac -> line 2798
 *   +0x07e4 -> line 2800
 *   +0x0858 -> line 2801
 *   +0x0868 -> line 2803
 *   +0x086c -> line 2805
 *   +0x0874 -> line 2803
 *   +0x0878 -> line 2805
 *   +0x087c -> line 2803
 *   +0x0894 -> line 2805
 *   +0x08b8 -> line 2807
 *   +0x08cc -> line 2809
 *   +0x08d0 -> line 2807
 *   +0x08d4 -> line 2809
 *   +0x08f0 -> line 2811
 *   +0x0904 -> line 2813
 *   +0x0908 -> line 2811
 *   +0x0930 -> line 2815
 *   +0x093c -> line 2819
 *   +0x0940 -> line 2815
 *   +0x0954 -> line 2816
 *   +0x097c -> line 2817
 *   +0x0990 -> line 2819
 *   +0x0998 -> line 2821
 *   +0x09a0 -> line 2822
 *   +0x09a4 -> line 2824
 *   +0x09b0 -> line 2827
 *   +0x09e0 -> line 2828
 *   +0x09ec -> line 2829
 *   +0x09f0 -> line 2828
 *   +0x0a0c -> line 2830
 *   +0x0a10 -> line 2832
 *   +0x0a1c -> line 2833
 *   +0x0a24 -> line 2832
 *   +0x0a30 -> line 2833
 *   +0x0a34 -> line 2832
 *   +0x0a38 -> line 2833
 *   +0x0a48 -> line 2834
 *   +0x0a64 -> line 2838
 *   +0x0abc -> line 2840
 *   +0x0ac0 -> line 2841
 *   +0x0ac8 -> line 2840
 *   +0x0ad8 -> line 2841
 *   +0x0ae0 -> line 2842
 *   +0x0ae8 -> line 2844
 *   +0x0b04 -> line 2858
 *   +0x0b08 -> line 2859
 *   +0x0b0c -> line 2858
 *   +0x0b10 -> line 2860
 *   +0x0b14 -> line 2862
 *   +0x0b1c -> line 2858
 *   +0x0b24 -> line 2859
 *   +0x0b34 -> line 2860
 *   +0x0b44 -> line 2862
 *   +0x0b58 -> line 2865
 *   +0x0b64 -> line 2870
 *   +0x0b68 -> line 2865
 *   +0x0b6c -> line 2871
 *   +0x0b70 -> line 2873
 *   +0x0b78 -> line 2865
 *   +0x0b84 -> line 2866
 *   +0x0b98 -> line 2867
 *   +0x0ba0 -> line 2869
 *   +0x0ba8 -> line 2867
 *   +0x0bb4 -> line 2870
 *   +0x0bb8 -> line 2871
 *   +0x0bbc -> line 2873
 *   +0x0bd0 -> line 2878
 *   +0x0bd4 -> line 2876
 *   +0x0bd8 -> line 2878
 *   +0x0bdc -> line 2876
 *   +0x0be0 -> line 2878
 *   +0x0bf0 -> line 2885
 *   +0x0bf4 -> line 2883
 *   +0x0bf8 -> line 2891
 *   +0x0c00 -> line 2881
 *   +0x0c04 -> line 2885
 *   +0x0c10 -> line 2883
 *   +0x0c1c -> line 2885
 *   +0x0c20 -> line 2883
 *   +0x0c28 -> line 2888
 *   +0x0c2c -> line 2886
 *   +0x0c30 -> line 2888
 *   +0x0c44 -> line 2889
 *   +0x0c68 -> line 2891
 *   +0x0c78 -> line 2893
 *   +0x0c84 -> line 2894
 *   +0x0cb4 -> line 2895
 *   +0x0cbc -> line 2897
 *   +0x0cc8 -> line 2899
 *   +0x0cf8 -> line 2900
 *   +0x0cfc -> line 2903
 *   +0x0d00 -> line 2900
 *   +0x0d04 -> line 2903
 *   +0x0d08 -> line 2900
 *   +0x0d0c -> line 2903
 *   +0x0d10 -> line 2900
 *   +0x0d14 -> line 2903
 *   +0x0d18 -> line 2901
 *   +0x0d1c -> line 2903
 *   +0x0d20 -> line 2901
 *   +0x0d24 -> line 2903
 *   +0x0d2c -> line 2900
 *   +0x0d38 -> line 2901
 *   +0x0d40 -> line 2902
 *   +0x0d44 -> line 2901
 *   +0x0d48 -> line 2902
 *   +0x0d50 -> line 2903
 *   +0x0d64 -> line 2904
 *   +0x0d6c -> line 2906
 *   +0x0d78 -> line 2907
 *   +0x0db0 -> line 2912
 *   +0x0db4 -> line 2916
 *   +0x0db8 -> line 2912
 *   +0x0dbc -> line 2916
 *   +0x0dc0 -> line 2912
 *   +0x0dc4 -> line 2916
 *   +0x0dc8 -> line 2912
 *   +0x0dcc -> line 2916
 *   +0x0dd0 -> line 2913
 *   +0x0dd4 -> line 2916
 *   +0x0dd8 -> line 2913
 *   +0x0ddc -> line 2916
 *   +0x0de4 -> line 2912
 *   +0x0df0 -> line 2913
 *   +0x0df8 -> line 2914
 *   +0x0dfc -> line 2913
 *   +0x0e00 -> line 2914
 *   +0x0e08 -> line 2916
 *   +0x0e1c -> line 2919
 *   +0x0e24 -> line 2921
 *   +0x0e30 -> line 2935
 *   +0x0e34 -> line 2927
 *   +0x0e38 -> line 2935
 *   +0x0e44 -> line 2936
 *   +0x0e48 -> line 2935
 *   +0x0e4c -> line 2927
 *   +0x0e50 -> line 2935
 *   +0x0e54 -> line 2954
 *   +0x0e5c -> line 2959
 *   +0x0e60 -> line 2935
 *   +0x0e64 -> line 2941
 *   +0x0e68 -> line 2935
 *   +0x0e70 -> line 2936
 *   +0x0e78 -> line 2941
 *   +0x0e7c -> line 2945
 *   +0x0e84 -> line 2953
 *   +0x0e88 -> line 2936
 *   +0x0e8c -> line 2953
 *   +0x0e90 -> line 2936
 *   +0x0e94 -> line 2947
 *   +0x0e98 -> line 2948
 *   +0x0e9c -> line 2941
 *   +0x0ea0 -> line 2944
 *   +0x0ea4 -> line 2953
 *   +0x0ea8 -> line 2945
 *   +0x0eac -> line 2950
 *   +0x0eb0 -> line 2948
 *   +0x0eb4 -> line 2941
 *   +0x0eb8 -> line 2953
 *   +0x0ec0 -> line 2945
 *   +0x0ec4 -> line 2953
 *   +0x0ec8 -> line 2945
 *   +0x0ecc -> line 2953
 *   +0x0ed4 -> line 2954
 *   +0x0ed8 -> line 2953
 *   +0x0edc -> line 2954
 *   +0x0ee0 -> line 2953
 *   +0x0ee4 -> line 2954
 *   +0x0ee8 -> line 2953
 *   +0x0ef0 -> line 2942
 *   +0x0ef4 -> line 2945
 *   +0x0ef8 -> line 2953
 *   +0x0f04 -> line 2954
 *   +0x0f18 -> line 2959
 *   +0x0f1c -> line 2962
 *   +0x0f28 -> line 2964
 *   +0x0f30 -> line 2966
 *   +0x0f34 -> line 2968
 *   +0x0f38 -> line 2966
 *   +0x0f3c -> line 2968
 *   +0x0f40 -> line 2971
 *   +0x0f44 -> line 2966
 *   +0x0f48 -> line 2971
 *   +0x0f4c -> line 2968
 *   +0x0f50 -> line 2971
 *   +0x0f54 -> line 2966
 *   +0x0f58 -> line 2971
 *   +0x0f5c -> line 2966
 *   +0x0f60 -> line 2971
 *   +0x0f64 -> line 2966
 *   +0x0f6c -> line 2971
 *   +0x0f70 -> line 2969
 *   +0x0f74 -> line 2971
 *   +0x0f7c -> line 2972
 *   +0x0f80 -> line 2971
 *   +0x0f84 -> line 2972
 *   +0x0f88 -> line 2966
 *   +0x0f8c -> line 2971
 *   +0x0f94 -> line 2972
 *   +0x0f98 -> line 2971
 *   +0x0f9c -> line 2985
 *   +0x0fa0 -> line 2971
 *   +0x0fac -> line 2972
 *   +0x0fc0 -> line 2977
 *   +0x0fc4 -> line 2979
 *   +0x0fc8 -> line 2982
 *   +0x0fcc -> line 2979
 *   +0x0fd8 -> line 2980
 *   +0x0fdc -> line 2982
 *   +0x0fe0 -> line 2980
 *   +0x0fe8 -> line 2982
 *   +0x0ff0 -> line 2983
 *   +0x0ff8 -> line 2985
 *   +0x1000 -> line 2988
 *   +0x1004 -> line 2986
 *   +0x1008 -> line 2988
 *   +0x1020 -> line 2990
 *   +0x1024 -> line 2991
 *   +0x1058 -> line 2993
 *   +0x1090 -> line 3009
 *   +0x1094 -> line 3011
 *   +0x1098 -> line 3009
 *   +0x10a0 -> line 3011
 *   +0x10a4 -> line 3009
 *   +0x10b0 -> line 3010
 *   +0x10c8 -> line 3011
 *   +0x10d8 -> line 3012
 *   +0x10e0 -> line 3013
 *   +0x10e8 -> line 3035
 *   +0x10ec -> line 3029
 *   +0x10f0 -> line 3036
 *   +0x10f4 -> line 3019
 *   +0x10f8 -> line 3029
 *   +0x10fc -> line 3019
 *   +0x1100 -> line 3029
 *   +0x1104 -> line 3042
 *   +0x1108 -> line 3033
 *   +0x110c -> line 3048
 *   +0x1110 -> line 3033
 *   +0x1118 -> line 3036
 *   +0x111c -> line 3041
 *   +0x1124 -> line 3029
 *   +0x1128 -> line 3032
 *   +0x112c -> line 3041
 *   +0x1130 -> line 3038
 *   +0x1134 -> line 3041
 *   +0x1138 -> line 3028
 *   +0x113c -> line 3030
 *   +0x1140 -> line 3041
 *   +0x1148 -> line 3033
 *   +0x114c -> line 3041
 *   +0x1150 -> line 3033
 *   +0x1154 -> line 3041
 *   +0x115c -> line 3042
 *   +0x1160 -> line 3041
 *   +0x1164 -> line 3042
 *   +0x1168 -> line 3041
 *   +0x116c -> line 3042
 *   +0x1170 -> line 3041
 *   +0x1174 -> line 3033
 *   +0x1178 -> line 3041
 *   +0x1184 -> line 3042
 *   +0x1198 -> line 3048
 *   +0x119c -> line 3051
 *   +0x11a8 -> line 3053
 *   +0x11b0 -> line 3057
 *   +0x11b4 -> line 3055
 *   +0x11b8 -> line 3057
 *   +0x11bc -> line 3055
 *   +0x11c0 -> line 3057
 *   +0x11c4 -> line 3060
 *   +0x11cc -> line 3057
 *   +0x11d0 -> line 3060
 *   +0x11d4 -> line 3055
 *   +0x11d8 -> line 3060
 *   +0x11dc -> line 3068
 *   +0x11e4 -> line 3055
 *   +0x11ec -> line 3060
 *   +0x11f0 -> line 3055
 *   +0x11f4 -> line 3060
 *   +0x11f8 -> line 3055
 *   +0x11fc -> line 3068
 *   +0x1200 -> line 3058
 *   +0x1204 -> line 3060
 *   +0x1210 -> line 3061
 *   +0x1214 -> line 3055
 *   +0x1218 -> line 3060
 *   +0x1220 -> line 3061
 *   +0x1224 -> line 3060
 *   +0x1228 -> line 3061
 *   +0x122c -> line 3076
 *   +0x1230 -> line 3060
 *   +0x123c -> line 3061
 *   +0x1250 -> line 3066
 *   +0x1254 -> line 3070
 *   +0x1258 -> line 3068
 *   +0x125c -> line 3073
 *   +0x1260 -> line 3070
 *   +0x126c -> line 3071
 *   +0x1270 -> line 3073
 *   +0x1274 -> line 3071
 *   +0x127c -> line 3073
 *   +0x1284 -> line 3074
 *   +0x128c -> line 3076
 *   +0x1294 -> line 3078
 *   +0x1298 -> line 3077
 *   +0x129c -> line 3078
 *   +0x12b4 -> line 3081
 *   +0x12b8 -> line 3082
 *   +0x12e8 -> line 3083
 *   +0x12f0 -> line 3087
 *   +0x12f4 -> line 3083
 *   +0x1300 -> line 3084
 *   +0x130c -> line 3083
 *   +0x131c -> line 3084
 *   +0x1338 -> line 3085
 *   +0x1350 -> line 3087
 *   +0x13b4 -> line 3088
 *   +0x13bc -> line 3089
 *   +0x13c8 -> line 3096
 *   +0x13cc -> line 3097
 *   +0x13d0 -> line 3104
 *   +0x13d8 -> line 3096
 *   +0x13dc -> line 3097
 *   +0x13e4 -> line 3098
 *   +0x13e8 -> line 3101
 *   +0x13ec -> line 3098
 *   +0x13f0 -> line 3100
 *   +0x13f4 -> line 3101
 *   +0x13f8 -> line 3102
 *   +0x13fc -> line 3100
 *   +0x1404 -> line 3106
 *   +0x1408 -> line 3108
 *   +0x1410 -> line 3109
 *   +0x1418 -> line 3110
 *   +0x141c -> line 3106
 *   +0x1428 -> line 3111
 *   +0x142c -> line 3108
 *   +0x1434 -> line 3109
 *   +0x143c -> line 3110
 *   +0x1444 -> line 3106
 *   +0x1448 -> line 3111
 *   +0x144c -> line 3108
 *   +0x1464 -> line 3109
 *   +0x147c -> line 3110
 *   +0x1488 -> line 3111
 *   +0x1490 -> line 3113
 *   +0x1498 -> line 3115
 *   +0x14b4 -> line 3117
 *   +0x14b8 -> line 3120
 *   +0x14bc -> line 3117
 *   +0x14c8 -> line 3120
 *   +0x14cc -> line 3117
 *   +0x14dc -> line 3118
 *   +0x14fc -> line 3120
 *   +0x1510 -> line 3123
 *   +0x152c -> line 3124
 *   +0x1540 -> line 3126
 *   +0x1544 -> line 3127
 *   +0x1548 -> line 3129
 *   +0x1550 -> line 3132
 *   +0x1560 -> line 3133
 *   +0x1568 -> line 3132
 *   +0x1570 -> line 3133
 *   +0x1580 -> line 3135
 *   +0x1590 -> line 3140
 *   +0x1598 -> line 3143
 *   +0x15a0 -> line 3172
 *   +0x15d0 -> line 3175
 *   +0x15dc -> line 3177
 *   +0x15e4 -> line 3179
 *   +0x15f0 -> line 3185
 *   +0x1614 -> line 3188
 *   +0x1620 -> line 3190
 *   +0x1628 -> line 3207
 *   +0x1644 -> line 3211
 *   +0x1668 -> line 3217
 *   +0x1678 -> line 3221
 *   +0x169c -> line 3236
 *   +0x16b4 -> line 3238
 *   +0x16b8 -> line 3240
 *   +0x16bc -> line 3238
 *   +0x16c4 -> line 3239
 *   +0x16d0 -> line 3240
 *   +0x16dc -> line 3243
 *   +0x16ec -> line 3245
 *   +0x16f8 -> line 3246
 *   +0x1704 -> line 3247
 *   +0x1710 -> line 3258
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void AGO_vDisplayPart(unsigned int ulPartNumber, GLD_tdstViewportAttributes_* _p_stViewport)
{
    int i;
    float x4[3];
    float x3[3];
    float x2[3];
    float x1[3];
    float v2[3];
    float v1[3];
    float* CosTable;
    float dt;
    float zz2;
    float xx2;
    float Scale;
    float Z;
    float FragTransparency;
    float Angle;
    float Position[3];
    float TempPos[3];
    float Val2;
    float Val1;
    MTH3D_tdstVector_ stV3;
    MTH3D_tdstVector_ stV2;
    MTH3D_tdstVector_ stV1;
    float xNorm;
    float Alpha;
    float A2;
    float dy;
    float dx;
    float scale;
    MTH3D_tdstVector_ VY;
    MTH3D_tdstVector_ VX;
    MTH3D_tdstVector_ vDir2;
    MTH3D_tdstVector_ vDir;
    MTH3D_tdstVector_ NewPos;
    MTH3D_tdstVector_ OldRegularPos;
    MTH3D_tdstVector_ OldModifiedPos;
    float Time;
    float dPos;
    float fNorm;
    float timet;
    float* pp2;
    float* pp;
    float AddZ;
    float AddY;
    float AddX;
    AGO_Part_* p;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ago\AGO.c lines 2417–2577 */
/* addr: 0x001ddf10  size: 872 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 2417
 *   +0x0024 -> line 2436
 *   +0x002c -> line 2441
 *   +0x0034 -> line 2443
 *   +0x0040 -> line 2444
 *   +0x0060 -> line 2445
 *   +0x0068 -> line 2448
 *   +0x006c -> line 2447
 *   +0x0070 -> line 2448
 *   +0x00f4 -> line 2451
 *   +0x0100 -> line 2452
 *   +0x0108 -> line 2456
 *   +0x0110 -> line 2459
 *   +0x01b0 -> line 2463
 *   +0x01b4 -> line 2459
 *   +0x01b8 -> line 2463
 *   +0x01c0 -> line 2469
 *   +0x01c8 -> line 2479
 *   +0x01d0 -> line 2483
 *   +0x01d8 -> line 2491
 *   +0x01dc -> line 2496
 *   +0x01e0 -> line 2491
 *   +0x01e4 -> line 2483
 *   +0x01e8 -> line 2495
 *   +0x01ec -> line 2503
 *   +0x01f8 -> line 2509
 *   +0x01fc -> line 2505
 *   +0x0200 -> line 2509
 *   +0x0208 -> line 2511
 *   +0x0210 -> line 2512
 *   +0x0214 -> line 2511
 *   +0x021c -> line 2512
 *   +0x0230 -> line 2519
 *   +0x0238 -> line 2516
 *   +0x023c -> line 2519
 *   +0x0250 -> line 2520
 *   +0x0258 -> line 2523
 *   +0x025c -> line 2521
 *   +0x0260 -> line 2525
 *   +0x0268 -> line 2527
 *   +0x028c -> line 2529
 *   +0x0298 -> line 2530
 *   +0x02b4 -> line 2531
 *   +0x02c0 -> line 2533
 *   +0x02e0 -> line 2535
 *   +0x02e4 -> line 2536
 *   +0x02e8 -> line 2538
 *   +0x0300 -> line 2539
 *   +0x0308 -> line 2544
 *   +0x0310 -> line 2562
 *   +0x0314 -> line 2548
 *   +0x0318 -> line 2549
 *   +0x031c -> line 2555
 *   +0x0320 -> line 2562
 *   +0x0328 -> line 2568
 *   +0x032c -> line 2565
 *   +0x0330 -> line 2568
 *   +0x0338 -> line 2569
 *   +0x033c -> line 2574
 *   +0x0344 -> line 2577
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void AGO_vReDisplayAllPartsREAL(GLD_tdstViewportAttributes_* _p_stViewport)
{
    void* NextTexture;
    void* CurrentTexture;
    int Start;
    float AlphaTemp;
    unsigned int i;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ago\AGO.c lines 2364–2409 */
/* addr: 0x001de280  size: 600 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 2364
 *   +0x0004 -> line 2371
 *   +0x0008 -> line 2364
 *   +0x0018 -> line 2367
 *   +0x001c -> line 2369
 *   +0x0020 -> line 2368
 *   +0x0024 -> line 2371
 *   +0x0028 -> line 2367
 *   +0x002c -> line 2368
 *   +0x0030 -> line 2371
 *   +0x003c -> line 2373
 *   +0x0040 -> line 2375
 *   +0x004c -> line 2373
 *   +0x0050 -> line 2375
 *   +0x0088 -> line 2380
 *   +0x0094 -> line 2382
 *   +0x009c -> line 2384
 *   +0x00a4 -> line 2386
 *   +0x00a8 -> line 2384
 *   +0x00ac -> line 2386
 *   +0x00b4 -> line 2384
 *   +0x00c8 -> line 2385
 *   +0x00d4 -> line 2386
 *   +0x0104 -> line 2387
 *   +0x0110 -> line 2386
 *   +0x0114 -> line 2387
 *   +0x011c -> line 2386
 *   +0x0120 -> line 2387
 *   +0x0124 -> line 2388
 *   +0x012c -> line 2387
 *   +0x0130 -> line 2388
 *   +0x0138 -> line 2389
 *   +0x0140 -> line 2388
 *   +0x0144 -> line 2389
 *   +0x0150 -> line 2387
 *   +0x015c -> line 2388
 *   +0x0168 -> line 2389
 *   +0x0170 -> line 2390
 *   +0x0178 -> line 2393
 *   +0x0180 -> line 2395
 *   +0x0184 -> line 2394
 *   +0x0188 -> line 2395
 *   +0x018c -> line 2394
 *   +0x0190 -> line 2395
 *   +0x0194 -> line 2394
 *   +0x0198 -> line 2395
 *   +0x01c8 -> line 2396
 *   +0x01d0 -> line 2395
 *   +0x01d4 -> line 2397
 *   +0x01dc -> line 2395
 *   +0x01e0 -> line 2398
 *   +0x01e8 -> line 2396
 *   +0x01f0 -> line 2397
 *   +0x01f8 -> line 2398
 *   +0x0200 -> line 2401
 *   +0x0208 -> line 2402
 *   +0x0210 -> line 2403
 *   +0x0230 -> line 2406
 *   +0x023c -> line 2408
 *   +0x0244 -> line 2409
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void AGO_vReDisplayAllParts(GLD_tdstViewportAttributes_* _p_stViewport)
{
    unsigned int FrameTime;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ago\AGO.c lines 1971–2354 */
/* addr: 0x001de4e0  size: 2024 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1971
 *   +0x0024 -> line 1983
 *   +0x002c -> line 2010
 *   +0x0034 -> line 2011
 *   +0x0040 -> line 2012
 *   +0x0060 -> line 2013
 *   +0x0068 -> line 2016
 *   +0x006c -> line 2015
 *   +0x0070 -> line 2016
 *   +0x0088 -> line 2018
 *   +0x00a8 -> line 2022
 *   +0x00ac -> line 2020
 *   +0x00b0 -> line 2023
 *   +0x00b8 -> line 2026
 *   +0x00c4 -> line 2027
 *   +0x00c8 -> line 2029
 *   +0x00d0 -> line 2034
 *   +0x00d4 -> line 2033
 *   +0x00d8 -> line 2034
 *   +0x00dc -> line 2038
 *   +0x0100 -> line 2039
 *   +0x0108 -> line 2041
 *   +0x0128 -> line 2043
 *   +0x014c -> line 2046
 *   +0x0150 -> line 2045
 *   +0x0154 -> line 2048
 *   +0x015c -> line 2050
 *   +0x0180 -> line 2052
 *   +0x0184 -> line 2053
 *   +0x0188 -> line 2054
 *   +0x018c -> line 2058
 *   +0x0198 -> line 2060
 *   +0x019c -> line 2061
 *   +0x01ac -> line 2063
 *   +0x01b0 -> line 2067
 *   +0x0210 -> line 2068
 *   +0x0214 -> line 2069
 *   +0x029c -> line 2074
 *   +0x02a4 -> line 2076
 *   +0x02b0 -> line 2088
 *   +0x02b8 -> line 2090
 *   +0x02c0 -> line 2093
 *   +0x02cc -> line 2108
 *   +0x02d4 -> line 2112
 *   +0x0370 -> line 2116
 *   +0x0374 -> line 2112
 *   +0x0378 -> line 2116
 *   +0x0380 -> line 2123
 *   +0x0388 -> line 2140
 *   +0x0390 -> line 2144
 *   +0x03a0 -> line 2159
 *   +0x03a8 -> line 2167
 *   +0x03ac -> line 2161
 *   +0x03b0 -> line 2159
 *   +0x03b4 -> line 2168
 *   +0x03bc -> line 2171
 *   +0x03d0 -> line 2175
 *   +0x03d4 -> line 2172
 *   +0x03d8 -> line 2175
 *   +0x03e4 -> line 2177
 *   +0x0404 -> line 2178
 *   +0x0410 -> line 2179
 *   +0x0420 -> line 2181
 *   +0x042c -> line 2182
 *   +0x0434 -> line 2181
 *   +0x0438 -> line 2182
 *   +0x0450 -> line 2184
 *   +0x0460 -> line 2186
 *   +0x0478 -> line 2187
 *   +0x0480 -> line 2188
 *   +0x0490 -> line 2190
 *   +0x04b0 -> line 2193
 *   +0x04cc -> line 2195
 *   +0x04d0 -> line 2198
 *   +0x04d4 -> line 2199
 *   +0x04f0 -> line 2200
 *   +0x0500 -> line 2203
 *   +0x0508 -> line 2206
 *   +0x0510 -> line 2209
 *   +0x0524 -> line 2212
 *   +0x0530 -> line 2215
 *   +0x0538 -> line 2219
 *   +0x0568 -> line 2220
 *   +0x057c -> line 2219
 *   +0x0580 -> line 2220
 *   +0x0590 -> line 2221
 *   +0x0594 -> line 2222
 *   +0x0598 -> line 2224
 *   +0x05a4 -> line 2228
 *   +0x05a8 -> line 2226
 *   +0x05ac -> line 2230
 *   +0x05b0 -> line 2232
 *   +0x05d0 -> line 2234
 *   +0x05e4 -> line 2235
 *   +0x05f0 -> line 2237
 *   +0x0644 -> line 2239
 *   +0x0660 -> line 2248
 *   +0x0668 -> line 2249
 *   +0x066c -> line 2248
 *   +0x0670 -> line 2254
 *   +0x0678 -> line 2257
 *   +0x067c -> line 2258
 *   +0x0680 -> line 2259
 *   +0x0690 -> line 2263
 *   +0x0698 -> line 2269
 *   +0x06a0 -> line 2277
 *   +0x06ac -> line 2279
 *   +0x06b0 -> line 2288
 *   +0x06c4 -> line 2285
 *   +0x06c8 -> line 2288
 *   +0x06d0 -> line 2289
 *   +0x06d8 -> line 2292
 *   +0x06dc -> line 2290
 *   +0x06e0 -> line 2294
 *   +0x06e8 -> line 2296
 *   +0x070c -> line 2298
 *   +0x0718 -> line 2299
 *   +0x0734 -> line 2300
 *   +0x0740 -> line 2302
 *   +0x0760 -> line 2304
 *   +0x0764 -> line 2305
 *   +0x0768 -> line 2307
 *   +0x0780 -> line 2308
 *   +0x0788 -> line 2313
 *   +0x0790 -> line 2331
 *   +0x0794 -> line 2316
 *   +0x0798 -> line 2317
 *   +0x079c -> line 2323
 *   +0x07a0 -> line 2331
 *   +0x07a8 -> line 2337
 *   +0x07ac -> line 2334
 *   +0x07b0 -> line 2337
 *   +0x07b8 -> line 2339
 *   +0x07bc -> line 2345
 *   +0x07c4 -> line 2354
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void AGO_vProcessAllPartsREAL(GLD_tdstViewportAttributes_* _p_stViewport)
{
    void* NextTexture;
    void* CurrentTexture;
    int Start;
    float AlphaTemp;
    unsigned int Type;
    unsigned int MustDestroy;
    unsigned int i;
    AGO_Part_* p;
    int LastFrozen;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ago\AGO.c lines 1897–1963 */
/* addr: 0x001decd0  size: 816 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1897
 *   +0x0004 -> line 1900
 *   +0x0008 -> line 1897
 *   +0x0014 -> line 1900
 *   +0x0024 -> line 1903
 *   +0x002c -> line 1904
 *   +0x0034 -> line 1907
 *   +0x0040 -> line 1909
 *   +0x0044 -> line 1910
 *   +0x0058 -> line 1911
 *   +0x0060 -> line 1910
 *   +0x0064 -> line 1911
 *   +0x006c -> line 1910
 *   +0x008c -> line 1911
 *   +0x0098 -> line 1912
 *   +0x00a0 -> line 1915
 *   +0x00b8 -> line 1916
 *   +0x00f0 -> line 1919
 *   +0x0104 -> line 1923
 *   +0x0108 -> line 1924
 *   +0x010c -> line 1922
 *   +0x0110 -> line 1928
 *   +0x011c -> line 1923
 *   +0x0120 -> line 1924
 *   +0x0124 -> line 1926
 *   +0x0128 -> line 1928
 *   +0x0160 -> line 1934
 *   +0x016c -> line 1936
 *   +0x0174 -> line 1938
 *   +0x017c -> line 1940
 *   +0x0180 -> line 1938
 *   +0x0184 -> line 1940
 *   +0x018c -> line 1938
 *   +0x01a0 -> line 1939
 *   +0x01ac -> line 1940
 *   +0x01dc -> line 1941
 *   +0x01e8 -> line 1940
 *   +0x01ec -> line 1941
 *   +0x01f4 -> line 1940
 *   +0x01f8 -> line 1941
 *   +0x01fc -> line 1942
 *   +0x0204 -> line 1941
 *   +0x0208 -> line 1942
 *   +0x0210 -> line 1943
 *   +0x0218 -> line 1942
 *   +0x021c -> line 1943
 *   +0x0228 -> line 1941
 *   +0x0234 -> line 1942
 *   +0x0240 -> line 1943
 *   +0x0248 -> line 1944
 *   +0x0250 -> line 1947
 *   +0x0258 -> line 1949
 *   +0x025c -> line 1948
 *   +0x0260 -> line 1949
 *   +0x0264 -> line 1948
 *   +0x0268 -> line 1949
 *   +0x026c -> line 1948
 *   +0x0270 -> line 1949
 *   +0x02a0 -> line 1950
 *   +0x02a8 -> line 1949
 *   +0x02ac -> line 1951
 *   +0x02b4 -> line 1949
 *   +0x02b8 -> line 1952
 *   +0x02c0 -> line 1950
 *   +0x02c8 -> line 1951
 *   +0x02d0 -> line 1952
 *   +0x02d8 -> line 1955
 *   +0x02e0 -> line 1956
 *   +0x02e8 -> line 1957
 *   +0x0308 -> line 1960
 *   +0x0314 -> line 1962
 *   +0x031c -> line 1963
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void AGO_vProcessAllParts(GLD_tdstViewportAttributes_* _p_stViewport)
{
    unsigned int FrameTime;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ago\AGO.c lines 1854–1870 */
/* addr: 0x001df000  size: 612 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1854
 *   +0x001c -> line 1858
 *   +0x0020 -> line 1854
 *   +0x0038 -> line 1860
 *   +0x0060 -> line 1867
 *   +0x0224 -> line 1868
 *   +0x0228 -> line 1869
 *   +0x0234 -> line 1870
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void AGO_fn_vDisplayBitmaps(GLD_tdstViewportAttributes_* p_stVpt)
{
    int i;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ago\AGO.c lines 1704–1823 */
/* addr: 0x001df270  size: 596 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1704
 *   +0x0004 -> line 1707
 *   +0x0008 -> line 1704
 *   +0x0034 -> line 1709
 *   +0x003c -> line 1711
 *   +0x005c -> line 1716
 *   +0x0064 -> line 1721
 *   +0x006c -> line 1735
 *   +0x0094 -> line 1741
 *   +0x00a0 -> line 1742
 *   +0x00ac -> line 1741
 *   +0x00b0 -> line 1742
 *   +0x00b4 -> line 1744
 *   +0x00c4 -> line 1748
 *   +0x00c8 -> line 1746
 *   +0x00d4 -> line 1748
 *   +0x00d8 -> line 1746
 *   +0x00f0 -> line 1748
 *   +0x00f8 -> line 1751
 *   +0x0114 -> line 1757
 *   +0x0134 -> line 1759
 *   +0x0150 -> line 1767
 *   +0x0158 -> line 1770
 *   +0x015c -> line 1772
 *   +0x0160 -> line 1770
 *   +0x0168 -> line 1772
 *   +0x016c -> line 1770
 *   +0x0184 -> line 1772
 *   +0x018c -> line 1775
 *   +0x01a8 -> line 1781
 *   +0x01c8 -> line 1783
 *   +0x01e4 -> line 1791
 *   +0x01e8 -> line 1792
 *   +0x01f8 -> line 1795
 *   +0x0200 -> line 1814
 *   +0x020c -> line 1818
 *   +0x0224 -> line 1823
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void AGO_vDisplayGAUGES(GLD_tdstViewportAttributes_* p_stVpt)
{
    float position;
    float diffy;
    float diffx;
    int i;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ago\AGO.c lines 1595–1696 */
/* addr: 0x001df4d0  size: 288 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1595
 *   +0x0024 -> line 1600
 *   +0x0028 -> line 1603
 *   +0x0034 -> line 1605
 *   +0x003c -> line 1606
 *   +0x0040 -> line 1610
 *   +0x0068 -> line 1613
 *   +0x0074 -> line 1617
 *   +0x007c -> line 1620
 *   +0x008c -> line 1655
 *   +0x00b8 -> line 1677
 *   +0x00c4 -> line 1679
 *   +0x00cc -> line 1680
 *   +0x00d0 -> line 1681
 *   +0x00dc -> line 1686
 *   +0x00e4 -> line 1687
 *   +0x00e8 -> line 1692
 *   +0x00f0 -> line 1693
 *   +0x00f8 -> line 1694
 *   +0x0100 -> line 1696
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void AGO_vDisplayIcones(GLD_tdstViewportAttributes_* p_stVpt)
{
    int i;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ago\AGO.c lines 1511–1528 */
/* addr: 0x001df5f0  size: 348 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1511
 *   +0x0008 -> line 1512
 *   +0x000c -> line 1513
 *   +0x0010 -> line 1514
 *   +0x0014 -> line 1511
 *   +0x0018 -> line 1512
 *   +0x001c -> line 1513
 *   +0x0020 -> line 1514
 *   +0x0024 -> line 1511
 *   +0x003c -> line 1512
 *   +0x0040 -> line 1513
 *   +0x0044 -> line 1511
 *   +0x0048 -> line 1512
 *   +0x004c -> line 1514
 *   +0x0050 -> line 1515
 *   +0x0054 -> line 1512
 *   +0x0058 -> line 1513
 *   +0x0060 -> line 1514
 *   +0x0068 -> line 1515
 *   +0x007c -> line 1516
 *   +0x0090 -> line 1518
 *   +0x00a4 -> line 1519
 *   +0x00a8 -> line 1520
 *   +0x00ac -> line 1519
 *   +0x00b0 -> line 1520
 *   +0x00b4 -> line 1519
 *   +0x00b8 -> line 1520
 *   +0x00bc -> line 1519
 *   +0x00c0 -> line 1521
 *   +0x00c4 -> line 1520
 *   +0x00c8 -> line 1521
 *   +0x00d4 -> line 1523
 *   +0x00dc -> line 1520
 *   +0x00ec -> line 1521
 *   +0x00f0 -> line 1523
 *   +0x0108 -> line 1524
 *   +0x0118 -> line 1525
 *   +0x0124 -> line 1524
 *   +0x0128 -> line 1526
 *   +0x012c -> line 1525
 *   +0x0130 -> line 1526
 *   +0x0138 -> line 1527
 *   +0x0144 -> line 1525
 *   +0x0148 -> line 1526
 *   +0x0150 -> line 1527
 *   +0x0154 -> line 1528
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void AddIconeWithUVs(float* V1, float* V2, float Num, void* Mat, float* UV1, float* UV2)
{
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ago\AGO.c lines 1487–1504 */
/* addr: 0x001df750  size: 344 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1487
 *   +0x0008 -> line 1488
 *   +0x000c -> line 1489
 *   +0x0010 -> line 1490
 *   +0x0014 -> line 1491
 *   +0x001c -> line 1493
 *   +0x0024 -> line 1487
 *   +0x0028 -> line 1488
 *   +0x002c -> line 1489
 *   +0x0030 -> line 1487
 *   +0x0034 -> line 1490
 *   +0x0038 -> line 1487
 *   +0x003c -> line 1491
 *   +0x0040 -> line 1487
 *   +0x0044 -> line 1491
 *   +0x0048 -> line 1487
 *   +0x004c -> line 1493
 *   +0x0050 -> line 1487
 *   +0x0054 -> line 1493
 *   +0x0058 -> line 1487
 *   +0x005c -> line 1488
 *   +0x0060 -> line 1489
 *   +0x0064 -> line 1490
 *   +0x0068 -> line 1487
 *   +0x006c -> line 1493
 *   +0x0070 -> line 1488
 *   +0x0074 -> line 1491
 *   +0x007c -> line 1493
 *   +0x0084 -> line 1491
 *   +0x0088 -> line 1493
 *   +0x0090 -> line 1488
 *   +0x0094 -> line 1489
 *   +0x009c -> line 1490
 *   +0x00a4 -> line 1491
 *   +0x00ac -> line 1493
 *   +0x00b4 -> line 1495
 *   +0x00c8 -> line 1496
 *   +0x00dc -> line 1498
 *   +0x00ec -> line 1499
 *   +0x00f0 -> line 1500
 *   +0x00f4 -> line 1499
 *   +0x00f8 -> line 1500
 *   +0x00fc -> line 1499
 *   +0x0100 -> line 1500
 *   +0x0104 -> line 1499
 *   +0x0108 -> line 1501
 *   +0x010c -> line 1500
 *   +0x0110 -> line 1501
 *   +0x011c -> line 1503
 *   +0x0124 -> line 1500
 *   +0x0134 -> line 1501
 *   +0x0138 -> line 1503
 *   +0x0150 -> line 1504
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void AddIcone(float* V1, float* V2, float Num, void* Mat)
{
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ago\AGO.c lines 1445–1479 */
/* addr: 0x001df8b0  size: 460 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1445
 *   +0x000c -> line 1447
 *   +0x0028 -> line 1448
 *   +0x002c -> line 1447
 *   +0x0030 -> line 1448
 *   +0x0038 -> line 1449
 *   +0x0040 -> line 1450
 *   +0x0044 -> line 1447
 *   +0x0048 -> line 1448
 *   +0x0050 -> line 1450
 *   +0x0054 -> line 1449
 *   +0x0058 -> line 1450
 *   +0x005c -> line 1448
 *   +0x0060 -> line 1449
 *   +0x006c -> line 1450
 *   +0x0078 -> line 1452
 *   +0x0080 -> line 1455
 *   +0x00a4 -> line 1457
 *   +0x00b0 -> line 1455
 *   +0x00b4 -> line 1457
 *   +0x00cc -> line 1461
 *   +0x00dc -> line 1462
 *   +0x00e0 -> line 1461
 *   +0x00e8 -> line 1462
 *   +0x00ec -> line 1461
 *   +0x00f0 -> line 1462
 *   +0x00f4 -> line 1463
 *   +0x00f8 -> line 1464
 *   +0x00fc -> line 1461
 *   +0x0100 -> line 1463
 *   +0x0104 -> line 1462
 *   +0x0108 -> line 1464
 *   +0x010c -> line 1463
 *   +0x0110 -> line 1464
 *   +0x0114 -> line 1465
 *   +0x011c -> line 1462
 *   +0x0120 -> line 1463
 *   +0x0128 -> line 1464
 *   +0x0130 -> line 1465
 *   +0x0144 -> line 1466
 *   +0x0158 -> line 1468
 *   +0x016c -> line 1470
 *   +0x0170 -> line 1469
 *   +0x017c -> line 1470
 *   +0x0180 -> line 1469
 *   +0x0184 -> line 1470
 *   +0x0190 -> line 1471
 *   +0x0198 -> line 1473
 *   +0x01a8 -> line 1474
 *   +0x01b0 -> line 1477
 *   +0x01c4 -> line 1479
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void AGO_vSetIcon(int NumeroVp, int Num, float* V1, float* V2, float xTransparency, void* Mat)
{
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ago\AGO.c lines 1399–1416 */
/* addr: 0x001dfa80  size: 220 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1399
 *   +0x0010 -> line 1400
 *   +0x0014 -> line 1399
 *   +0x001c -> line 1400
 *   +0x0020 -> line 1399
 *   +0x0024 -> line 1400
 *   +0x0028 -> line 1402
 *   +0x002c -> line 1401
 *   +0x0030 -> line 1399
 *   +0x0034 -> line 1402
 *   +0x0038 -> line 1400
 *   +0x003c -> line 1401
 *   +0x0040 -> line 1406
 *   +0x0044 -> line 1402
 *   +0x0048 -> line 1403
 *   +0x004c -> line 1401
 *   +0x0050 -> line 1403
 *   +0x0058 -> line 1404
 *   +0x0060 -> line 1406
 *   +0x0064 -> line 1404
 *   +0x0068 -> line 1400
 *   +0x006c -> line 1405
 *   +0x0070 -> line 1401
 *   +0x0074 -> line 1405
 *   +0x007c -> line 1406
 *   +0x0088 -> line 1401
 *   +0x008c -> line 1402
 *   +0x0094 -> line 1403
 *   +0x0098 -> line 1404
 *   +0x009c -> line 1405
 *   +0x00a0 -> line 1407
 *   +0x00a8 -> line 1409
 *   +0x00b8 -> line 1410
 *   +0x00c0 -> line 1413
 *   +0x00d4 -> line 1416
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void AGO_vSetGauge(int NumeroVp, int NumeroGauge, float* V1, float* V2, float xNiveau, float xTransparency, void* hVisualMaterial1, void* hVisualMaterial2)
{
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ago\AGO.c lines 1184–1212 */
/* addr: 0x001dfb60  size: 176 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1188
 *   +0x0004 -> line 1190
 *   +0x000c -> line 1184
 *   +0x0010 -> line 1185
 *   +0x0014 -> line 1192
 *   +0x0020 -> line 1196
 *   +0x0024 -> line 1194
 *   +0x0038 -> line 1196
 *   +0x0050 -> line 1198
 *   +0x0058 -> line 1201
 *   +0x0060 -> line 1203
 *   +0x0088 -> line 1205
 *   +0x008c -> line 1206
 *   +0x0090 -> line 1208
 *   +0x0094 -> line 1209
 *   +0x00a0 -> line 1210
 *   +0x00a8 -> line 1212
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void AGO_vDestroyAllParts(void)
{
    unsigned int Limit;
    AGO_Part_* pdst;
    AGO_Part_* psrc;
    unsigned int NumToSkip;
    unsigned int Source;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ago\AGO.c lines 969–1151 */
/* addr: 0x001dfc10  size: 1880 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 969
 *   +0x0004 -> line 974
 *   +0x0008 -> line 969
 *   +0x0034 -> line 974
 *   +0x0038 -> line 969
 *   +0x004c -> line 974
 *   +0x0064 -> line 976
 *   +0x007c -> line 977
 *   +0x0080 -> line 984
 *   +0x0090 -> line 987
 *   +0x0098 -> line 992
 *   +0x00ac -> line 993
 *   +0x00bc -> line 995
 *   +0x00c4 -> line 999
 *   +0x00e0 -> line 1003
 *   +0x00e4 -> line 1004
 *   +0x00fc -> line 1005
 *   +0x0110 -> line 1006
 *   +0x0130 -> line 1009
 *   +0x0134 -> line 1030
 *   +0x0140 -> line 1009
 *   +0x0144 -> line 1010
 *   +0x0148 -> line 1012
 *   +0x014c -> line 1015
 *   +0x0154 -> line 1017
 *   +0x015c -> line 1021
 *   +0x0160 -> line 1024
 *   +0x0164 -> line 1030
 *   +0x01b4 -> line 1038
 *   +0x01b8 -> line 1034
 *   +0x01bc -> line 1037
 *   +0x01c0 -> line 1038
 *   +0x01c4 -> line 1034
 *   +0x01c8 -> line 1038
 *   +0x01d8 -> line 1039
 *   +0x01e0 -> line 1040
 *   +0x01f0 -> line 1041
 *   +0x01f8 -> line 1045
 *   +0x0204 -> line 1050
 *   +0x0240 -> line 1051
 *   +0x0280 -> line 1052
 *   +0x02c0 -> line 1055
 *   +0x02d4 -> line 1057
 *   +0x02dc -> line 1060
 *   +0x0318 -> line 1062
 *   +0x0358 -> line 1063
 *   +0x0360 -> line 1067
 *   +0x0394 -> line 1069
 *   +0x03cc -> line 1075
 *   +0x03d8 -> line 1078
 *   +0x0410 -> line 1079
 *   +0x0454 -> line 1081
 *   +0x0478 -> line 1082
 *   +0x047c -> line 1081
 *   +0x048c -> line 1082
 *   +0x0490 -> line 1085
 *   +0x049c -> line 1088
 *   +0x04a0 -> line 1092
 *   +0x04e4 -> line 1096
 *   +0x04f0 -> line 1101
 *   +0x04f4 -> line 1105
 *   +0x0500 -> line 1101
 *   +0x0510 -> line 1105
 *   +0x0518 -> line 1106
 *   +0x0554 -> line 1109
 *   +0x0560 -> line 1111
 *   +0x0564 -> line 1109
 *   +0x0590 -> line 1111
 *   +0x0598 -> line 1112
 *   +0x05a4 -> line 1113
 *   +0x05a8 -> line 1112
 *   +0x05ac -> line 1113
 *   +0x05c4 -> line 1114
 *   +0x05e0 -> line 1115
 *   +0x05fc -> line 1118
 *   +0x0610 -> line 1120
 *   +0x0620 -> line 1121
 *   +0x0628 -> line 1122
 *   +0x0630 -> line 1126
 *   +0x063c -> line 1131
 *   +0x0648 -> line 1132
 *   +0x0650 -> line 1133
 *   +0x0654 -> line 1132
 *   +0x0658 -> line 1133
 *   +0x0668 -> line 1134
 *   +0x0670 -> line 1135
 *   +0x067c -> line 1137
 *   +0x0680 -> line 1138
 *   +0x0684 -> line 1137
 *   +0x0688 -> line 1138
 *   +0x068c -> line 1139
 *   +0x0694 -> line 1147
 *   +0x0698 -> line 1137
 *   +0x06a4 -> line 1138
 *   +0x06b8 -> line 1139
 *   +0x06cc -> line 1141
 *   +0x06e0 -> line 1142
 *   +0x06f4 -> line 1143
 *   +0x0708 -> line 1145
 *   +0x0718 -> line 1147
 *   +0x0724 -> line 1150
 *   +0x0728 -> line 1151
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
AGO_Part_* AGO_vCreatePart(unsigned int parm_ulType, float* parm_a3_fPosition, float* parm_a3_fDirection, float TimeLimit, float fScaleX, float fScaleY, void* pVisualMaterial)
{
    float fAngle;
    float fSin2;
    float fCos2;
    float fSin1;
    float fCos1;
    MTH4D_tdstVector_ V2;
    MTH4D_tdstVector_ V1;
    float* p2;
    float* p1;
    float Angle;
    float Cos1;
    float Sin1;
    int i;
    AGO_Part_* p;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ago\AGO.c lines 930–961 */
/* addr: 0x001e0370  size: 220 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 932
 *   +0x0004 -> line 930
 *   +0x0008 -> line 932
 *   +0x000c -> line 934
 *   +0x0038 -> line 936
 *   +0x004c -> line 938
 *   +0x0050 -> line 940
 *   +0x0054 -> line 942
 *   +0x0060 -> line 950
 *   +0x006c -> line 944
 *   +0x0080 -> line 946
 *   +0x0088 -> line 950
 *   +0x00b4 -> line 957
 *   +0x00b8 -> line 956
 *   +0x00bc -> line 958
 *   +0x00c0 -> line 959
 *   +0x00d0 -> line 960
 *   +0x00d4 -> line 961
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
int AGO_ulGetElderOne(void)
{
    AGO_Part_* p;
    float fOldestTime;
    unsigned int ulOldestIndex;
    unsigned int i;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ago\AGO.c lines 715–755 */
/* addr: 0x001e0450  size: 392 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 715
 *   +0x0004 -> line 720
 *   +0x0008 -> line 715
 *   +0x000c -> line 736
 *   +0x0010 -> line 715
 *   +0x001c -> line 716
 *   +0x0020 -> line 717
 *   +0x0024 -> line 720
 *   +0x0028 -> line 718
 *   +0x002c -> line 719
 *   +0x0030 -> line 721
 *   +0x0034 -> line 722
 *   +0x0038 -> line 723
 *   +0x003c -> line 724
 *   +0x0040 -> line 725
 *   +0x0044 -> line 727
 *   +0x0048 -> line 728
 *   +0x004c -> line 731
 *   +0x0050 -> line 736
 *   +0x00ac -> line 737
 *   +0x00f0 -> line 738
 *   +0x0140 -> line 740
 *   +0x0148 -> line 741
 *   +0x0150 -> line 749
 *   +0x0154 -> line 745
 *   +0x0158 -> line 749
 *   +0x0164 -> line 752
 *   +0x016c -> line 753
 *   +0x0174 -> line 755
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void AGO_vInit(void)
{
    /* TODO: decompile from asm/... */
}
