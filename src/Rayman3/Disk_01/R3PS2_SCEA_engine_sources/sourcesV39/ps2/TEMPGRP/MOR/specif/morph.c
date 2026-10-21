/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\MOR\specif\morph.c */
/* Language: C */
/* Compiler: MW MIPS C Compiler */

#include <stddef.h>

/* Recovered aggregate layouts from MWCC debug type records. */
typedef struct FIL_tdstFileNameList_ FIL_tdstFileNameList_;
typedef struct GLI_tdstLight_ GLI_tdstLight_;
typedef struct GLI_tdstMaterial_ GLI_tdstMaterial_;
typedef struct GLI_tdstTexture_ GLI_tdstTexture_;
typedef struct IPO_tdstInstanciatedPhysicalObject_ IPO_tdstInstanciatedPhysicalObject_;
typedef struct WP_tdstListOfArc_ WP_tdstListOfArc_;
typedef struct WP_tdstWayPoint_ WP_tdstWayPoint_;
typedef struct _SND_tdstBlockEvent _SND_tdstBlockEvent;
typedef struct tdstAlwaysActiveCharacter_ tdstAlwaysActiveCharacter_;
typedef struct tdstCineinfo_ tdstCineinfo_;
typedef struct tdstCollSet_ tdstCollSet_;
typedef struct tdstComport_ tdstComport_;
typedef struct tdstDsgMem_ tdstDsgMem_;
typedef struct tdstDsgVar_ tdstDsgVar_;
typedef struct tdstDynam_ tdstDynam_;
typedef struct tdstIntelligence_ tdstIntelligence_;
typedef struct tdstListOfMacro_ tdstListOfMacro_;
typedef struct tdstMSLight_ tdstMSLight_;
typedef struct tdstMSSound_ tdstMSSound_;
typedef struct tdstMSWay_ tdstMSWay_;
typedef struct tdstMicro_ tdstMicro_;
typedef struct tdstNodeMainCharacter_ tdstNodeMainCharacter_;
typedef struct tdstPhysicalCollSet_ tdstPhysicalCollSet_;
typedef struct tdstScriptAI_ tdstScriptAI_;
typedef struct tdstSectInfo_ tdstSectInfo_;
typedef struct tdstSuperObjectLinks_ tdstSuperObjectLinks_;
typedef struct tdstObjectsTableElement_ tdstObjectsTableElement_;
typedef union HIE_tduLinkedObject_ HIE_tduLinkedObject_;
typedef struct MTH3D_tdstVector_ MTH3D_tdstVector_;
typedef struct HIE_tdstSuperObject_ HIE_tdstSuperObject_;
typedef struct tdstGraphChainedListNode_ tdstGraphChainedListNode_;
typedef struct stInterpolatedPosition stInterpolatedPosition;
typedef struct tdstAChannel_ tdstAChannel_;
typedef struct LST2_tdstAnchorToMC_tdxHandleToMainCharacterNodeDyn LST2_tdstAnchorToMC_tdxHandleToMainCharacterNodeDyn;
typedef struct LST2_tdstAnchorToCINE_tdxHandleToCineDyn LST2_tdstAnchorToCINE_tdxHandleToCineDyn;
typedef struct MTH4D_tdstVector_ MTH4D_tdstVector_;
typedef struct MTH4D_tdstMatrix_ MTH4D_tdstMatrix_;
typedef struct MAT_tdstTransformation_ MAT_tdstTransformation_;
typedef struct CINE_Manager_ CINE_Manager_;
typedef struct LST2_tdstAnchorToSECT_tdxHandleOfElementLstCollisionInteractionOpt LST2_tdstAnchorToSECT_tdxHandleOfElementLstCollisionInteractionOpt;
typedef struct MOR_stMorphStruct_ MOR_stMorphStruct_;
typedef struct HIE_tdstModifierObject_ HIE_tdstModifierObject_;
typedef struct SECT_tdstListOfSOSectorsInActivityInteraction_ SECT_tdstListOfSOSectorsInActivityInteraction_;
typedef struct SECT_tdstListOfSOSectorsInCollisionInteraction_ SECT_tdstListOfSOSectorsInCollisionInteraction_;
typedef struct GEO_tdstGeometricObject_ GEO_tdstGeometricObject_;
typedef struct tdstPLA_Deformation_ tdstPLA_Deformation_;
typedef struct _stTimerCount _stTimerCount;
typedef struct tdstEngineTimerStructure_ tdstEngineTimerStructure_;
typedef struct GLD_tdstViewportAttributes_ GLD_tdstViewportAttributes_;
typedef struct GLI_tdstSpecificAttributesFor3D_ GLI_tdstSpecificAttributesFor3D_;
typedef struct LST2_tdstAnchorTotdxHandleToNodeCameraDyn LST2_tdstAnchorTotdxHandleToNodeCameraDyn;
typedef struct LST2_tdstAnchorTotdxHandleToFamilyListDyn LST2_tdstAnchorTotdxHandleToFamilyListDyn;
typedef struct LST2_tdstAnchorTotdxHandleToAlwaysActiveCharacterNodeDyn LST2_tdstAnchorTotdxHandleToAlwaysActiveCharacterNodeDyn;
typedef struct tdstEngineStructure_ tdstEngineStructure_;
typedef struct LST2_tdstAnchorToSECT_tdxHandleOfElementLstGraphicInteractionOpt LST2_tdstAnchorToSECT_tdxHandleOfElementLstGraphicInteractionOpt;
typedef struct SECT_tdstListOfSOSectorsInSoundInteraction_ SECT_tdstListOfSOSectorsInSoundInteraction_;
typedef struct SECT_tdstListOfSOSectorsInGraphicInteraction_ SECT_tdstListOfSOSectorsInGraphicInteraction_;
typedef struct COL_tdstBoundingSphere_ COL_tdstBoundingSphere_;
typedef struct tdstPLA_DeformationLink_ tdstPLA_DeformationLink_;
typedef struct LST2_tdstAnchorToWP_tdhGraphNodeDyn LST2_tdstAnchorToWP_tdhGraphNodeDyn;
typedef struct WP_tdstGraph_ WP_tdstGraph_;
typedef struct LST2_tdstAnchorToSCT_tdxHandleOfLstSoundEventOpt LST2_tdstAnchorToSCT_tdxHandleOfLstSoundEventOpt;
typedef struct tdstSubAnim_ tdstSubAnim_;
typedef struct LST2_tdstAnchorToCINE_tdxHandleToChannelLinkDyn LST2_tdstAnchorToCINE_tdxHandleToChannelLinkDyn;
typedef struct CINE_tdstCineActor_ CINE_tdstCineActor_;
typedef union _SND_tduRefEvt _SND_tduRefEvt;
typedef struct SCT_tdstListOfSoundEvent_ SCT_tdstListOfSoundEvent_;
typedef struct PO_tdstPhysicalObject_ PO_tdstPhysicalObject_;
typedef struct WP_tdstGraphNode_ WP_tdstGraphNode_;
typedef struct LST2_tdstAnchorToCINE_tdxHandleToCineActorDyn LST2_tdstAnchorToCINE_tdxHandleToCineActorDyn;
typedef struct LST2_tdstAnchorToCHN_tdxHandleToMorphElementDyn LST2_tdstAnchorToCHN_tdxHandleToMorphElementDyn;
typedef struct SECT_tdstListOfDNMLights_ SECT_tdstListOfDNMLights_;
typedef struct tdstMorphChannelList_ tdstMorphChannelList_;
typedef struct stMorphData stMorphData;
typedef struct LST2_tdstAnchorToSECT_tdxHandleOfElementLstCharacterDyn LST2_tdstAnchorToSECT_tdxHandleOfElementLstCharacterDyn;
typedef struct LST2_tdstAnchorToSECT_tdxHandleOfElementLstStaticLightsOpt LST2_tdstAnchorToSECT_tdxHandleOfElementLstStaticLightsOpt;
typedef struct LST2_tdstAnchorToSECT_tdxHandleOfElementLstDNMLightsDyn LST2_tdstAnchorToSECT_tdxHandleOfElementLstDNMLightsDyn;
typedef struct LST2_tdstAnchorToSECT_tdxHandleOfElementLstActivityInteractionOpt LST2_tdstAnchorToSECT_tdxHandleOfElementLstActivityInteractionOpt;
typedef struct LST2_tdstAnchorToSECT_tdxHandleOfElementLstSoundInteractionOpt LST2_tdstAnchorToSECT_tdxHandleOfElementLstSoundInteractionOpt;
typedef struct SECT_tdstSector_ SECT_tdstSector_;
typedef struct tdstSubAnimInUse_ tdstSubAnimInUse_;
typedef struct tdstPLA_Hierarchy_ tdstPLA_Hierarchy_;
typedef struct tdstFrame3d_ tdstFrame3d_;
typedef struct LST2_tdstAnchorTotdxHandleToSubAnimInUseDyn LST2_tdstAnchorTotdxHandleToSubAnimInUseDyn;
typedef struct tdst3dData_ tdst3dData_;
typedef struct SECT_tdstListOfSOCharacters_ SECT_tdstListOfSOCharacters_;
typedef struct SECT_tdstListOfStaticLights_ SECT_tdstListOfStaticLights_;
typedef struct tdstEngineObject_ tdstEngineObject_;
typedef struct GEO_tdstDoubledIndex_ GEO_tdstDoubledIndex_;
typedef struct LST2_tdstAnchorTotdxHandleToTransitionOpt LST2_tdstAnchorTotdxHandleToTransitionOpt;
typedef struct LST2_tdstAnchorTotdxHandleToProhibitOpt LST2_tdstAnchorTotdxHandleToProhibitOpt;
typedef struct tdstState_ tdstState_;
typedef struct GLI_tdst2DVertex_ GLI_tdst2DVertex_;
typedef struct GLI_tdstCamera_ GLI_tdstCamera_;
typedef struct tdstStandardGame_ tdstStandardGame_;
typedef struct CINE_tdstCine_ CINE_tdstCine_;
typedef struct tdstBrain_ tdstBrain_;
typedef struct tdstElement3d_ tdstElement3d_;
typedef struct AI_tdstMind_ AI_tdstMind_;
typedef struct AI_tdstAIModel_ AI_tdstAIModel_;
typedef struct tdstEvent_ tdstEvent_;
typedef struct GMT_tdstGameMaterial_ GMT_tdstGameMaterial_;
typedef struct LST2_tdstAnchorTotdxHandleToSubAnimOpt LST2_tdstAnchorTotdxHandleToSubAnimOpt;
typedef struct GEO_tdstVisualSet_ GEO_tdstVisualSet_;
typedef struct tdstViewportManagement_ tdstViewportManagement_;
typedef struct tdstEventInTable_ tdstEventInTable_;
typedef struct tdstAnim3d_ tdstAnim3d_;
typedef union GEO_tduVSObject_ GEO_tduVSObject_;
typedef struct GEO_tdstParallelBox_ GEO_tdstParallelBox_;
typedef struct MOR_stMorphVector_ MOR_stMorphVector_;
typedef struct MOR_stMorphObject_ MOR_stMorphObject_;
typedef struct tdstLipsSynchValue_ tdstLipsSynchValue_;
typedef struct LST2_tdstAnchorTotdxHandleToStateOpt LST2_tdstAnchorTotdxHandleToStateOpt;
typedef struct LST2_tdstAnchorTotdxHandleToObjectsTablesListOpt LST2_tdstAnchorTotdxHandleToObjectsTablesListOpt;
typedef struct tdstFamilyList_ tdstFamilyList_;
typedef struct MTH3D_tdstMatrix_ MTH3D_tdstMatrix_;
typedef struct tdstLanguageStructure_ tdstLanguageStructure_;
typedef struct tdstTransition_ tdstTransition_;
typedef struct tdstObjectsTablesList_ tdstObjectsTablesList_;
typedef struct GEO_tdstEdge_ GEO_tdstEdge_;
typedef struct tdstProhibit_ tdstProhibit_;
typedef struct tdstNodeCamera_ tdstNodeCamera_;
typedef struct tdstCouple_ tdstCouple_;
typedef struct CINE_tdstChannelLink_ CINE_tdstChannelLink_;
typedef struct GMT_tdstCollideMaterial_ GMT_tdstCollideMaterial_;

extern int GLI_lGetVisualSetNumbertOfLOD(GEO_tdstVisualSet_* p_stVisualSet);
extern void GLI_vSetObjectDeformed(GEO_tdstGeometricObject_* pObj);
extern void* memcpy(void*, const void*, size_t);
extern short fn_hMorphListIndex(LST2_tdstAnchorToCHN_tdxHandleToMorphElementDyn* hMorphList, short uwChannel);
extern void fn_vRemoveChannelFromMorphList(LST2_tdstAnchorToCHN_tdxHandleToMorphElementDyn* hMorphList, unsigned short uwChannel);
extern void fn_vPushAllocModeAccordingToObject(HIE_tdstSuperObject_* _hCharacter);
extern void GAM_fn_vPopAllocMode(void);
extern void MOR_fn_vDeletePhysicalObject(PO_tdstPhysicalObject_* _pPhysicalObject);
extern void* memset(void*, int, size_t);

#define MTH3D_M_vCopyVector(_d, _s) { *(int*)&(_d)->xX = *(int*)&(_s)->xX; *(int*)&(_d)->xY = *(int*)&(_s)->xY; *(int*)&(_d)->xZ = *(int*)&(_s)->xZ; }

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

struct tdstObjectsTableElement_ {
    MTH3D_tdstVector_* p_stCustomZoom; /* +0x0 */
    PO_tdstPhysicalObject_* h_Target; /* +0x4 */
    unsigned int uwChannelNumber; /* +0x8 */
    unsigned short wTypeOfTarget; /* +0xc */
    unsigned char ucPhoneme; /* +0xe */
    unsigned char ucIntensity; /* +0xf */
    unsigned char ucExpression; /* +0x10 */
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

struct tdstGraphChainedListNode_ {
    WP_tdstGraph_* GraphChainedListNodeInfo; /* +0x0 */
    tdstGraphChainedListNode_* p_NextGraphChainedListNode; /* +0x4 */
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

struct LST2_tdstAnchorToMC_tdxHandleToMainCharacterNodeDyn {
    tdstNodeMainCharacter_* hFirstElementDyn; /* +0x0 */
    tdstNodeMainCharacter_* hLastElementDyn; /* +0x4 */
    int lNumberOfElementsDyn; /* +0x8 */
};

struct LST2_tdstAnchorToCINE_tdxHandleToCineDyn {
    CINE_tdstCine_* hFirstElementDyn; /* +0x0 */
    CINE_tdstCine_* hLastElementDyn; /* +0x4 */
    int lNumberOfElementsDyn; /* +0x8 */
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

struct CINE_Manager_ {
    LST2_tdstAnchorToCINE_tdxHandleToCineDyn hCineList; /* +0x0 */
    MAT_tdstTransformation_ gp_stFixedCameraMatrix; /* +0x10 */
    HIE_tdstSuperObject_* gp_stSPOHandleCamera; /* +0x70 */
};

struct LST2_tdstAnchorToSECT_tdxHandleOfElementLstCollisionInteractionOpt {
    SECT_tdstListOfSOSectorsInCollisionInteraction_* hFirstElementOpt; /* +0x0 */
    int lNumberOfElementsOpt; /* +0x4 */
};

struct MOR_stMorphStruct_ {
    unsigned char bInUse; /* +0x0 */
    HIE_tdstSuperObject_* hActorSuperObject; /* +0x4 */
    short xStartIndexInObjectTable; /* +0x8 */
    short axEndIndexInObjectTable[10]; /* +0xa */
    unsigned char ucMorphType; /* +0x1e */
    unsigned char ucbMarkedForTermination; /* +0x1f */
    int iNbMillisecond; /* +0x20 */
    short xChannelIndex; /* +0x24 */
    unsigned char ucNbTarget; /* +0x26 */
    float axStart[10]; /* +0x28 */
    float axEnd[10]; /* +0x50 */
    float axCurrent[10]; /* +0x78 */
    PO_tdstPhysicalObject_* pOriginalPhysicalObject; /* +0xa0 */
    PO_tdstPhysicalObject_* pMorphedPhysicalObject; /* +0xa4 */
};

struct HIE_tdstModifierObject_ {
    GEO_tdstGeometricObject_* p_stGeometricObject; /* +0x0 */
    int lMulIntensity; /* +0x4 */
    int lAddIntensity; /* +0x8 */
};

struct SECT_tdstListOfSOSectorsInActivityInteraction_ {
    HIE_tdstSuperObject_* hPointerOfSectorSO; /* +0x0 */
};

struct SECT_tdstListOfSOSectorsInCollisionInteraction_ {
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

struct tdstPLA_Deformation_ {
    unsigned int ulNbOfDeformationLinks; /* +0x0 */
    tdstPLA_DeformationLink_* d_stDeformationLinks; /* +0x4 */
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

struct LST2_tdstAnchorToSECT_tdxHandleOfElementLstGraphicInteractionOpt {
    SECT_tdstListOfSOSectorsInGraphicInteraction_* hFirstElementOpt; /* +0x0 */
    int lNumberOfElementsOpt; /* +0x4 */
};

struct SECT_tdstListOfSOSectorsInSoundInteraction_ {
    HIE_tdstSuperObject_* hPointerOfSectorSO; /* +0x0 */
    int lVolume; /* +0x4 */
};

struct SECT_tdstListOfSOSectorsInGraphicInteraction_ {
    short wLevelOfDetail; /* +0x0 */
    char cDisplayMode; /* +0x2 */
    HIE_tdstSuperObject_* hPointerOfSectorSO; /* +0x4 */
};

struct COL_tdstBoundingSphere_ {
    MTH4D_tdstVector_ stCenterPoint; /* +0x0 */
    float xRadius; /* +0x10 */
};

struct tdstPLA_DeformationLink_ {
    unsigned short wChannel1; /* +0x0 */
    unsigned short wBorder1; /* +0x2 */
    unsigned short wChannel2; /* +0x4 */
    unsigned short wBorder2; /* +0x6 */
};

struct LST2_tdstAnchorToWP_tdhGraphNodeDyn {
    WP_tdstGraphNode_* hFirstElementDyn; /* +0x0 */
    WP_tdstGraphNode_* hLastElementDyn; /* +0x4 */
    int lNumberOfElementsDyn; /* +0x8 */
};

struct WP_tdstGraph_ {
    LST2_tdstAnchorToWP_tdhGraphNodeDyn m_hListOfNode; /* +0x0 */
};

struct LST2_tdstAnchorToSCT_tdxHandleOfLstSoundEventOpt {
    SCT_tdstListOfSoundEvent_* hFirstElementOpt; /* +0x0 */
    int lNumberOfElementsOpt; /* +0x4 */
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

union _SND_tduRefEvt {
    unsigned int Id; /* +0x0 */
    _SND_tdstBlockEvent* pstPtr; /* +0x0 */
};

struct SCT_tdstListOfSoundEvent_ {
    HIE_tdstSuperObject_* hPointerOfSectorSO; /* +0x0 */
    _SND_tduRefEvt uSoundEvent; /* +0x4 */
};

struct PO_tdstPhysicalObject_ {
    GEO_tdstVisualSet_* _hVisualSet; /* +0x0 */
    tdstPhysicalCollSet_* _hCollideSet; /* +0x4 */
    COL_tdstBoundingSphere_* _hVisualBoundingVolume; /* +0x8 */
    COL_tdstBoundingSphere_* _hCollideBoundingVolume; /* +0xc */
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

struct LST2_tdstAnchorToCINE_tdxHandleToCineActorDyn {
    CINE_tdstCineActor_* hFirstElementDyn; /* +0x0 */
    CINE_tdstCineActor_* hLastElementDyn; /* +0x4 */
    int lNumberOfElementsDyn; /* +0x8 */
};

struct LST2_tdstAnchorToCHN_tdxHandleToMorphElementDyn {
    tdstMorphChannelList_* hFirstElementDyn; /* +0x0 */
    tdstMorphChannelList_* hLastElementDyn; /* +0x4 */
    int lNumberOfElementsDyn; /* +0x8 */
};

struct SECT_tdstListOfDNMLights_ {
    GLI_tdstLight_* hDNMLights; /* +0x0 */
    SECT_tdstListOfDNMLights_* hNextBrotherDyn; /* +0x4 */
    SECT_tdstListOfDNMLights_* hPrevBrotherDyn; /* +0x8 */
    LST2_tdstAnchorToSECT_tdxHandleOfElementLstDNMLightsDyn* hFatherDyn; /* +0xc */
};

struct tdstMorphChannelList_ {
    tdstMorphChannelList_* hNextBrotherDyn; /* +0x0 */
    tdstMorphChannelList_* hPrevBrotherDyn; /* +0x4 */
    LST2_tdstAnchorToCHN_tdxHandleToMorphElementDyn* hFatherDyn; /* +0x8 */
    unsigned short uwChannelNumber; /* +0xc */
    short MorphListIndex; /* +0xe */
};

struct stMorphData {
    unsigned short uwChannelNumber; /* +0x0 */
    unsigned short uwFrameNumber; /* +0x2 */
    unsigned char ucNbTarget; /* +0x4 */
    unsigned char ucAlign[3]; /* +0x5 */
    short a_xIndexTargetMT[10]; /* +0x8 */
    unsigned char a_ucMorphingAmountMT[10]; /* +0x1c */
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

struct SECT_tdstListOfSOCharacters_ {
    HIE_tdstSuperObject_* hPointerOfCharacter; /* +0x0 */
    SECT_tdstListOfSOCharacters_* hNextBrotherDyn; /* +0x4 */
    SECT_tdstListOfSOCharacters_* hPrevBrotherDyn; /* +0x8 */
    LST2_tdstAnchorToSECT_tdxHandleOfElementLstCharacterDyn* hFatherDyn; /* +0xc */
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

struct GEO_tdstDoubledIndex_ {
    short a2_xIndex[2]; /* +0x0 */
};

struct LST2_tdstAnchorTotdxHandleToTransitionOpt {
    tdstTransition_* hFirstElementOpt; /* +0x0 */
    int lNumberOfElementsOpt; /* +0x4 */
};

struct LST2_tdstAnchorTotdxHandleToProhibitOpt {
    tdstProhibit_* hFirstElementOpt; /* +0x0 */
    int lNumberOfElementsOpt; /* +0x4 */
};

struct tdstState_ {
    tdstAnim3d_* p_stAnim; /* +0x0 */
    LST2_tdstAnchorTotdxHandleToTransitionOpt hForTransitionArray; /* +0x4 */
    LST2_tdstAnchorTotdxHandleToProhibitOpt hForProhibitArray; /* +0xc */
    tdstState_* h_NextState; /* +0x14 */
    int h_LinkedMechanicsIdCard; /* +0x18 */
    int szLevelList; /* +0x1c */
    int szAnimationSectionName; /* +0x20 */
    unsigned char ucRepeatAnimation; /* +0x24 */
    signed char scSpeedAnim; /* +0x25 */
    unsigned char ucTransitionStatusFlag; /* +0x26 */
    unsigned char ucCustomBits; /* +0x27 */
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

struct CINE_tdstCine_ {
    LST2_tdstAnchorToCINE_tdxHandleToCineActorDyn hActorList; /* +0x0 */
    CINE_tdstCine_* hNextBrotherDyn; /* +0xc */
    CINE_tdstCine_* hPrevBrotherDyn; /* +0x10 */
    LST2_tdstAnchorToCINE_tdxHandleToCineDyn* hFatherDyn; /* +0x14 */
    unsigned char bPlaying; /* +0x18 */
    int lGenerateEvent; /* +0x1c */
    char szName[255]; /* +0x20 */
};

struct tdstBrain_ {
    AI_tdstMind_* p_stMind; /* +0x0 */
    GMT_tdstGameMaterial_* hLastCollidedGoThroughMaterial; /* +0x4 */
    unsigned char bWarnMechanicsFlag; /* +0x8 */
    unsigned char bActiveDuringTransition; /* +0x9 */
};

struct tdstElement3d_ {
    unsigned short wElement : 15; /* bit 0, byte +0x0 */
    unsigned short bf1ActiveStatus : 1; /* bit 15, byte +0x0 */
    unsigned char ucChannelNumber; /* +0x2 */
    unsigned char eTypeOfElement; /* +0x3 */
    unsigned char ucTransparency; /* +0x4 */
    unsigned char ucAnimLevel; /* +0x5 */
};

struct AI_tdstMind_ {
    AI_tdstAIModel_* p_stAIModel; /* +0x0 */
    tdstIntelligence_* p_stIntelligence; /* +0x4 */
    tdstIntelligence_* p_stReflex; /* +0x8 */
    tdstDsgMem_* p_stDsgMem; /* +0xc */
    unsigned char bDoingIntel; /* +0x10 */
};

struct AI_tdstAIModel_ {
    tdstScriptAI_* p_stScriptAIIntell; /* +0x0 */
    tdstScriptAI_* p_stScriptAIReflex; /* +0x4 */
    tdstDsgVar_* p_stDsgVar; /* +0x8 */
    tdstListOfMacro_* p_stListOfMacro; /* +0xc */
    unsigned char ucSecondPassDone; /* +0x10 */
};

struct tdstEvent_ {
    tdstEventInTable_* p_stfEventInTBL; /* +0x0 */
    unsigned short usEventNumberInTBL; /* +0x4 */
    unsigned short uwFrameNumber; /* +0x6 */
    unsigned short uwChannelNumber; /* +0x8 */
    unsigned short uwIsLocalized; /* +0xa */
};

struct GMT_tdstGameMaterial_ {
    int hSoundMaterial; /* +0x0 */
    GMT_tdstCollideMaterial_* hCollideMaterial; /* +0x4 */
};

struct LST2_tdstAnchorTotdxHandleToSubAnimOpt {
    tdstSubAnim_* hFirstElementOpt; /* +0x0 */
    int lNumberOfElementsOpt; /* +0x4 */
};

struct GEO_tdstVisualSet_ {
    float xLastDistance; /* +0x0 */
    short xNbLodDefinitions; /* +0x4 */
    short xType; /* +0x6 */
    int d_xThresholdsTable; /* +0x8 */
    GEO_tduVSObject_* d_p_stLodDefinitions; /* +0xc */
    int d_hRLI; /* +0x10 */
    int lNumberOfRLI; /* +0x14 */
};

struct tdstViewportManagement_ {
    HIE_tdstSuperObject_* hCamera; /* +0x0 */
    HIE_tdstSuperObject_* hTempCamera; /* +0x4 */
    GLI_tdstCamera_* p_stCamera; /* +0x8 */
    unsigned char bValid; /* +0xc */
};

struct tdstEventInTable_ {
    int p_xEvent; /* +0x0 */
    unsigned char ucTypeOfEvent; /* +0x4 */
    unsigned char ucPriority; /* +0x5 */
    unsigned char ucFirstCall; /* +0x6 */
    unsigned char ucPeriod; /* +0x7 */
    unsigned int u32SemaphoreId; /* +0x8 */
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

union GEO_tduVSObject_ {
    GEO_tdstGeometricObject_* p_stGeometricObject; /* +0x0 */
    MOR_stMorphObject_* p_stMorphObject; /* +0x0 */
};

struct GEO_tdstParallelBox_ {
    MTH4D_tdstVector_ stMinPoint; /* +0x0 */
    MTH4D_tdstVector_ stMaxPoint; /* +0x10 */
};

struct MOR_stMorphVector_ {
    short xVertexIndex; /* +0x0 */
    MTH3D_tdstVector_ stDeformationVector; /* +0x4 */
};

struct MOR_stMorphObject_ {
    GEO_tdstGeometricObject_* hBaseObject; /* +0x0 */
    unsigned int ulNbVectors; /* +0x4 */
    MOR_stMorphVector_* d_stMorphVector; /* +0x8 */
};

struct tdstLipsSynchValue_ {
    char cCode; /* +0x0 */
    float xX; /* +0x4 */
    float xY; /* +0x8 */
    float xZ; /* +0xc */
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

struct MTH3D_tdstMatrix_ {
    MTH3D_tdstVector_ stCol_0; /* +0x0 */
    MTH3D_tdstVector_ stCol_1; /* +0xc */
    MTH3D_tdstVector_ stCol_2; /* +0x18 */
};

struct tdstLanguageStructure_ {
    char szLanguageCode[20]; /* +0x0 */
    char szLanguageText[20]; /* +0x14 */
};

struct tdstTransition_ {
    tdstState_* h_TargetState; /* +0x0 */
    tdstState_* h_StateToGo; /* +0x4 */
    unsigned char ucLinkingType; /* +0x8 */
};

struct tdstObjectsTablesList_ {
    tdstObjectsTableElement_* d_stObjectsTable; /* +0x0 */
    tdstObjectsTableElement_* d_stInitObjectsTable; /* +0x4 */
    unsigned short wNumberOfElement; /* +0x8 */
    unsigned short wZDxUsed; /* +0xa */
};

struct GEO_tdstEdge_ {
    short xPoints[2]; /* +0x0 */
    MTH3D_tdstVector_ st_VectorPoints[2]; /* +0x4 */
};

struct tdstProhibit_ {
    tdstState_* h_ProhibitedState; /* +0x0 */
};

struct tdstNodeCamera_ {
    HIE_tdstSuperObject_* p_stSuperObjectCamera; /* +0x0 */
    tdstNodeCamera_* hNextBrotherDyn; /* +0x4 */
    tdstNodeCamera_* hPrevBrotherDyn; /* +0x8 */
    LST2_tdstAnchorTotdxHandleToNodeCameraDyn* hFatherDyn; /* +0xc */
};

struct tdstCouple_ {
    unsigned short wChild; /* +0x0 */
    unsigned short wFather; /* +0x2 */
};

struct CINE_tdstChannelLink_ {
    HIE_tdstSuperObject_* hSPOLinked; /* +0x0 */
    int lIndexOfChannel; /* +0x4 */
    CINE_tdstChannelLink_* hNextBrotherDyn; /* +0x8 */
    CINE_tdstChannelLink_* hPrevBrotherDyn; /* +0xc */
    LST2_tdstAnchorToCINE_tdxHandleToChannelLinkDyn* hFatherDyn; /* +0x10 */
};

struct GMT_tdstCollideMaterial_ {
    short wTypeOfZone; /* +0x0 */
    unsigned short xIdentifier; /* +0x2 */
    MTH3D_tdstVector_ stDirection; /* +0x4 */
    float xCoeff; /* +0x10 */
    unsigned short wTypeForAi; /* +0x14 */
};

MOR_stMorphStruct_ g_MorphTasksList[50];
struct MOR_DEntry_ {
    PO_tdstPhysicalObject_* hBaseObject; /* +0x0 */
    unsigned char _extractor_padding_00[52]; /* implicitly added by extractor; +0x4..0x37 */
};
struct MOR_DEntry_ D_7D5384[50];
tdstEngineStructure_ g_stEngineStructure;

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\MOR\specif\morph.c lines 69–173 */
/* addr: 0x003151a0  size: 2020 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 69
 *   +0x0020 -> line 80
 *   +0x0024 -> line 78
 *   +0x0028 -> line 79
 *   +0x002c -> line 81
 *   +0x0034 -> line 82
 *   +0x004c -> line 84
 *   +0x005c -> line 86
 *   +0x0070 -> line 88
 *   +0x0074 -> line 100
 *   +0x0088 -> line 88
 *   +0x008c -> line 89
 *   +0x00b0 -> line 92
 *   +0x00bc -> line 100
 *   +0x00cc -> line 106
 *   +0x00d0 -> line 110
 *   +0x00d8 -> line 106
 *   +0x00dc -> line 110
 *   +0x00f0 -> line 114
 *   +0x00fc -> line 115
 *   +0x0104 -> line 119
 *   +0x010c -> line 120
 *   +0x0128 -> line 123
 *   +0x0138 -> line 125
 *   +0x0168 -> line 128
 *   +0x01e8 -> line 129
 *   +0x0268 -> line 130
 *   +0x02e8 -> line 131
 *   +0x0368 -> line 132
 *   +0x03e8 -> line 133
 *   +0x0468 -> line 134
 *   +0x04e8 -> line 135
 *   +0x0568 -> line 136
 *   +0x05e8 -> line 137
 *   +0x0668 -> line 138
 *   +0x06e8 -> line 139
 *   +0x06f8 -> line 141
 *   +0x0710 -> line 144
 *   +0x0724 -> line 146
 *   +0x0738 -> line 148
 *   +0x075c -> line 150
 *   +0x0780 -> line 153
 *   +0x0788 -> line 150
 *   +0x0790 -> line 153
 *   +0x07ac -> line 165
 *   +0x07bc -> line 172
 *   +0x07c4 -> line 173
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
GEO_tdstGeometricObject_* MOR_fn_xCopyGeometricObjectForMorph(GEO_tdstGeometricObject_* hObject1)
{
    short hElement;
    GEO_tdstGeometricObject_* hObject2;
    short xNbEdges;
    short xNbElements;
    short xNbPoints;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\MOR\specif\morph.c lines 1564–1582 */
/* addr: 0x00315990  size: 328 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1564
 *   +0x0028 -> line 1568
 *   +0x0030 -> line 1570
 *   +0x0038 -> line 1572
 *   +0x0060 -> line 1574
 *   +0x0064 -> line 1575
 *   +0x007c -> line 1577
 *   +0x00fc -> line 1580
 *   +0x0100 -> line 1581
 *   +0x0108 -> line 1577
 *   +0x010c -> line 1581
 *   +0x0124 -> line 1582
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void MOR_fn_vRemoveMorph2(HIE_tdstSuperObject_* hSuperObject)
{
    short i;
    MOR_stMorphStruct_* mp;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\MOR\specif\morph.c lines 1529–1546 */
/* addr: 0x00315ae0  size: 160 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1529
 *   +0x0018 -> line 1531
 *   +0x001c -> line 1533
 *   +0x004c -> line 1537
 *   +0x0054 -> line 1538
 *   +0x0064 -> line 1539
 *   +0x0070 -> line 1543
 *   +0x0074 -> line 1544
 *   +0x0078 -> line 1545
 *   +0x0088 -> line 1546
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void MOR_fn_vTerminateMorphsForThisFrame(void)
{ unsigned int i; int lOffset = 0; MOR_stMorphStruct_* mp;
    i = 0;
    for (; i < 50; i++, lOffset += sizeof(MOR_stMorphStruct_)) { mp = (MOR_stMorphStruct_ *)((char *)g_MorphTasksList + lOffset); if (!mp->bInUse) { if (mp->ucbMarkedForTermination && mp->pMorphedPhysicalObject) {



        MOR_fn_vDeletePhysicalObject(mp->pMorphedPhysicalObject);
        memset(mp, 0, sizeof(MOR_stMorphStruct_));
        continue; } }



    mp->ucbMarkedForTermination = 0;

}
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\MOR\specif\morph.c lines 1486–1494 */
/* addr: 0x00315b80  size: 100 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1489
 *   +0x000c -> line 1486
 *   +0x0010 -> line 1489
 *   +0x001c -> line 1486
 *   +0x0020 -> line 1489
 *   +0x0024 -> line 1490
 *   +0x0028 -> line 1489
 *   +0x0034 -> line 1490
 *   +0x0040 -> line 1491
 *   +0x0050 -> line 1493
 *   +0x0058 -> line 1494
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void MOR_fn_vMorphTo2(MOR_stMorphStruct_* mp);
void MOR_fn_vMorphTo(MOR_stMorphStruct_* mp);
int MOR_fn_bRemoveMorphedObjectFromHierarchy(HIE_tdstSuperObject_* hSuperObject, PO_tdstPhysicalObject_* p_stPhysicalObjectToRemove, PO_tdstPhysicalObject_* p_stPhysicalObjectToPut);

void MOR_fn_vDoMorph(short _xIndex)
{
    MOR_stMorphStruct_* mp;

    mp = &g_MorphTasksList[_xIndex];
    if (mp->ucMorphType != 5)
        MOR_fn_vMorphTo(mp);
    else
        MOR_fn_vMorphTo2(mp);
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\MOR\specif\morph.c lines 1467–1468 */
/* addr: 0x00315bf0  size: 48 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1467
 *   +0x0028 -> line 1468
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
PO_tdstPhysicalObject_* MOR_fn_hGetMorphedObject(short _xIndex)
{
    return g_MorphTasksList[(int)_xIndex].pMorphedPhysicalObject;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\MOR\specif\morph.c lines 1440–1457 */
/* addr: 0x00315c20  size: 248 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1440
 *   +0x001c -> line 1444
 *   +0x0028 -> line 1446
 *   +0x0038 -> line 1447
 *   +0x0040 -> line 1450
 *   +0x004c -> line 1452
 *   +0x00c0 -> line 1453
 *   +0x00c8 -> line 1454
 *   +0x00d8 -> line 1456
 *   +0x00dc -> line 1457
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
int MOR_fn_bRemoveMorphedObjectFromHierarchy(HIE_tdstSuperObject_* hSuperObject, PO_tdstPhysicalObject_* p_stPhysicalObjectToRemove, PO_tdstPhysicalObject_* p_stPhysicalObjectToPut)
{
    long lRemoved;
    HIE_tdstSuperObject_* pBrother;
    HIE_tdstSuperObject_* pChild;

    if (hSuperObject->hLinkedObject.p_stPhysicalObject == p_stPhysicalObjectToRemove) {
        hSuperObject->ulTypeOfLinkedObject = (p_stPhysicalObjectToPut != NULL) ? 8 : 1;
        hSuperObject->hLinkedObject.p_stPhysicalObject = p_stPhysicalObjectToPut;
        return 1;
    }

    for (pBrother = hSuperObject->hFirstElementDyn; pBrother != NULL; pBrother = pBrother->hNextBrotherDyn) {
        if (pBrother->hLinkedObject.p_stPhysicalObject == p_stPhysicalObjectToRemove) {
            pBrother->ulTypeOfLinkedObject = (p_stPhysicalObjectToPut != NULL) ? 8 : 1;
            pBrother->hLinkedObject.p_stPhysicalObject = p_stPhysicalObjectToPut;
            lRemoved = 1;
        } else {
            lRemoved = 0;
            for (pChild = pBrother->hFirstElementDyn; pChild != NULL; pChild = pChild->hNextBrotherDyn) {
                if (MOR_fn_bRemoveMorphedObjectFromHierarchy(pChild, p_stPhysicalObjectToRemove, p_stPhysicalObjectToPut)) {
                    lRemoved = 1;
                    break;
                }
            }
        }
        if (lRemoved) {
            return 1;
        }
    }
    return 0;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\MOR\specif\morph.c lines 1397–1429 */
/* addr: 0x00315d20  size: 336 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1397
 *   +0x0024 -> line 1401
 *   +0x002c -> line 1403
 *   +0x0034 -> line 1405
 *   +0x0040 -> line 1408
 *   +0x00a8 -> line 1411
 *   +0x00b0 -> line 1414
 *   +0x00c4 -> line 1415
 *   +0x00d8 -> line 1418
 *   +0x00e0 -> line 1421
 *   +0x00e8 -> line 1424
 *   +0x0104 -> line 1425
 *   +0x0108 -> line 1426
 *   +0x0110 -> line 1424
 *   +0x0114 -> line 1426
 *   +0x012c -> line 1429
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void MOR_fn_vRemoveAllMorphedObjects(void)
{
    short i;
    MOR_stMorphStruct_* mp;
    int lOffset;
    PO_tdstPhysicalObject_* pMorphed;
    PO_tdstPhysicalObject_* pEnd;
    HIE_tdstSuperObject_* hChild;
    HIE_tdstSuperObject_* hSuperObject;
    tdstEngineObject_* pCharacter;

    for (i = 0, lOffset = 0; i < 50; i++, lOffset += sizeof(MOR_stMorphStruct_)) {
        mp = (MOR_stMorphStruct_ *)((char *)g_MorphTasksList + lOffset);
        if (mp->bInUse) {
            hSuperObject = mp->hActorSuperObject;
            pMorphed = mp->pMorphedPhysicalObject;
            pEnd = mp->pOriginalPhysicalObject;
            if (hSuperObject->hLinkedObject.p_stPhysicalObject == pMorphed) {
                hSuperObject->ulTypeOfLinkedObject = (pEnd != NULL) ? 8 : 1;
                hSuperObject->hLinkedObject.p_stPhysicalObject = pEnd;
            } else {
                for (hChild = hSuperObject->hFirstElementDyn; hChild != NULL; hChild = hChild->hNextBrotherDyn) {
                    if (MOR_fn_bRemoveMorphedObjectFromHierarchy(hChild, pMorphed, pEnd)) {
                        break;
                    }
                }
            }
            fn_vPushAllocModeAccordingToObject(mp->hActorSuperObject);
            pCharacter = (tdstEngineObject_ *)mp->hActorSuperObject->hLinkedObject.p_stCharacter;
            if (pCharacter->h_StandardGame != NULL) {
                fn_vRemoveChannelFromMorphList(pCharacter->h_3dData->hMorphChannelList, mp->xChannelIndex);
            }
            GAM_fn_vPopAllocMode();
            MOR_fn_vDeletePhysicalObject(mp->pMorphedPhysicalObject);
            if (mp->bInUse) {
                memset(mp, 0, sizeof(MOR_stMorphStruct_));
                mp->bInUse = 0;
            }
        }
    }

}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\MOR\specif\morph.c lines 1377–1388 */
/* addr: 0x00315e70  size: 120 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1377
 *   +0x001c -> line 1381
 *   +0x0040 -> line 1383
 *   +0x0048 -> line 1385
 *   +0x004c -> line 1383
 *   +0x0050 -> line 1385
 *   +0x006c -> line 1387
 *   +0x0070 -> line 1388
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
short MOR_fn_xGetMorphTaskIndex(HIE_tdstSuperObject_* _hActorSuperObject, short _xChannelIndex)
{
    MOR_stMorphStruct_* mp;
    short i;
    int lOffset;
    i = 0; lOffset = 0; while (i < 50) {
        mp = (MOR_stMorphStruct_ *)((char *)g_MorphTasksList + lOffset);
        if (mp->bInUse && mp->hActorSuperObject == _hActorSuperObject && mp->xChannelIndex == _xChannelIndex) {
        return i; }
        lOffset += sizeof(MOR_stMorphStruct_);
        i++; }
    return -1;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\MOR\specif\morph.c lines 1349–1360 */
/* addr: 0x00315ef0  size: 104 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1349
 *   +0x0014 -> line 1353
 *   +0x002c -> line 1355
 *   +0x0034 -> line 1357
 *   +0x0038 -> line 1355
 *   +0x003c -> line 1357
 *   +0x005c -> line 1359
 *   +0x0060 -> line 1360
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
unsigned char MOR_fn_bIsCharacterMorphed(HIE_tdstSuperObject_* _hActorSuperObject)
{
    short i;
    MOR_stMorphStruct_* mp;
    int lOffset;
    i = 0; lOffset = 0; while (i < 50) {
        mp = (MOR_stMorphStruct_ *)((char *)g_MorphTasksList + lOffset);
        if (mp->bInUse && mp->hActorSuperObject == _hActorSuperObject) {
        return 1; }
        lOffset += sizeof(MOR_stMorphStruct_);
        i++; }
    return 0;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\MOR\specif\morph.c lines 1301–1332 */
/* addr: 0x00315f60  size: 264 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1301
 *   +0x001c -> line 1305
 *   +0x0040 -> line 1311
 *   +0x0048 -> line 1307
 *   +0x004c -> line 1308
 *   +0x0050 -> line 1311
 *   +0x0058 -> line 1313
 *   +0x0080 -> line 1315
 *   +0x0084 -> line 1316
 *   +0x0088 -> line 1317
 *   +0x008c -> line 1315
 *   +0x0090 -> line 1317
 *   +0x0094 -> line 1318
 *   +0x00b0 -> line 1324
 *   +0x00c8 -> line 1325
 *   +0x00d0 -> line 1326
 *   +0x00d8 -> line 1329
 *   +0x00dc -> line 1326
 *   +0x00e0 -> line 1329
 *   +0x00fc -> line 1331
 *   +0x0100 -> line 1332
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
unsigned char MOR_fn_bIsChannelMorphed(HIE_tdstSuperObject_* _hActorSuperObject, short _xChannelIndex)
{
    unsigned char j;
    int bEveryTargetIsFinishedMorphing;
    MOR_stMorphStruct_* mp;
    short i;

    for (i = 0; i < 50; i++) {
        mp = &g_MorphTasksList[i];
        if (!mp->bInUse) continue;
        if (mp->hActorSuperObject != _hActorSuperObject) continue;
        if (mp->xChannelIndex != _xChannelIndex) continue;
        bEveryTargetIsFinishedMorphing = 1;
        for (j = 0; j < mp->ucNbTarget && bEveryTargetIsFinishedMorphing; j++) {
            if ((mp->axEnd[j] - mp->axCurrent[j]) * (mp->axEnd[j] - mp->axStart[j]) > 0.0f) {
                bEveryTargetIsFinishedMorphing = 0;
            }
        }
        if (mp->ucMorphType == 3) {
            return 1;
        }
        if (bEveryTargetIsFinishedMorphing) {
            return 0;
        }
        return 1;
    }
    return 0;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\MOR\specif\morph.c lines 1266–1288 */
/* addr: 0x00316070  size: 244 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1266
 *   +0x0018 -> line 1268
 *   +0x0020 -> line 1270
 *   +0x0038 -> line 1273
 *   +0x006c -> line 1276
 *   +0x0084 -> line 1280
 *   +0x0090 -> line 1283
 *   +0x009c -> line 1284
 *   +0x00a8 -> line 1285
 *   +0x00b8 -> line 1287
 *   +0x00c0 -> line 1285
 *   +0x00c4 -> line 1287
 *   +0x00dc -> line 1288
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void fn_vLastDeinitMorphTaskList(void) { short i; int lOffset = 0; MOR_stMorphStruct_* mp; HIE_tdstSuperObject_* hSuperObject; HIE_tdstSuperObject_* pFix;

    for (i = 0; i < 50; i++, lOffset += sizeof(MOR_stMorphStruct_)) {

        mp = (MOR_stMorphStruct_ *)((char *)g_MorphTasksList + lOffset); if (mp->bInUse) {


            hSuperObject = mp->hActorSuperObject; if (hSuperObject->ulTypeOfLinkedObject != 2) { pFix = NULL; } else { pFix = hSuperObject->hLinkedObject.p_stSuperObject; } if (fn_bIsInFix(pFix)) { continue; }

            if (mp->bInUse) { memset(mp, 0, sizeof(MOR_stMorphStruct_));



                mp->bInUse = 0; }
        } else {

            if (mp->pMorphedPhysicalObject) { MOR_fn_vDeletePhysicalObject(mp->pMorphedPhysicalObject); }
            memset(mp, 0, sizeof(MOR_stMorphStruct_));
        }
    }
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\MOR\specif\morph.c lines 1159–1245 */
/* addr: 0x00316170  size: 716 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1159
 *   +0x0018 -> line 1165
 *   +0x0020 -> line 1167
 *   +0x0028 -> line 1169
 *   +0x0034 -> line 1172
 *   +0x0054 -> line 1176
 *   +0x0060 -> line 1178
 *   +0x0070 -> line 1179
 *   +0x0074 -> line 1178
 *   +0x0088 -> line 1179
 *   +0x00bc -> line 1180
 *   +0x00c4 -> line 1179
 *   +0x00cc -> line 1180
 *   +0x00d0 -> line 1179
 *   +0x00dc -> line 1180
 *   +0x00f8 -> line 1181
 *   +0x0124 -> line 1183
 *   +0x0128 -> line 1186
 *   +0x0158 -> line 1189
 *   +0x0160 -> line 1192
 *   +0x0178 -> line 1194
 *   +0x0180 -> line 1197
 *   +0x0188 -> line 1200
 *   +0x01a0 -> line 1203
 *   +0x01a8 -> line 1206
 *   +0x01b0 -> line 1208
 *   +0x01b8 -> line 1213
 *   +0x01e8 -> line 1216
 *   +0x01f4 -> line 1217
 *   +0x01f8 -> line 1220
 *   +0x0200 -> line 1222
 *   +0x0208 -> line 1227
 *   +0x0238 -> line 1230
 *   +0x0244 -> line 1231
 *   +0x0258 -> line 1232
 *   +0x026c -> line 1233
 *   +0x0280 -> line 1235
 *   +0x0288 -> line 1238
 *   +0x0290 -> line 1244
 *   +0x0298 -> line 1238
 *   +0x029c -> line 1244
 *   +0x02b4 -> line 1245
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void GEO_fn_vMorphAddInMainLoop(void)
{
    float axRate[10];
    float axTmp[10];
    MOR_stMorphStruct_* mp;
    int iDeltaTime;
    float xDeltaTime;
    short j;
    short i;

    for (i = 0; i < 50; i++)
    {
        mp = &g_MorphTasksList[i];
        if (!mp->bInUse)
            continue;
        if (mp->iNbMillisecond == 0)
            continue;
        if (mp->ucMorphType == 4)
            continue;
        for (j = 0; j < mp->ucNbTarget; j++)
        {
            axRate[j] = (mp->axEnd[j] - mp->axStart[j]) / (float)mp->iNbMillisecond;
            iDeltaTime = (int)g_stEngineStructure.stEngineTimer.ulUsefulDeltaTime;
            if (iDeltaTime >= 0)
            {
                xDeltaTime = (float)iDeltaTime;
            }
            else
            {
                xDeltaTime = (float)(((unsigned int)iDeltaTime >> 1) | (iDeltaTime & 1));
                xDeltaTime = xDeltaTime + xDeltaTime;
            }
            mp->axCurrent[j] = mp->axCurrent[j] + xDeltaTime * axRate[j];
        }
        switch (mp->ucMorphType)
        {
        case 1:
            if (mp->axCurrent[0] * axRate[0] > mp->axEnd[0] * axRate[0])
            {
                fn_vPushAllocModeAccordingToObject(mp->hActorSuperObject);
                fn_vRemoveChannelFromMorphList(((tdstEngineObject_*)mp->hActorSuperObject->hLinkedObject.p_stCharacter)->h_3dData->hMorphChannelList, mp->xChannelIndex);
                GAM_fn_vPopAllocMode();
                MOR_fn_vDeletePhysicalObject(mp->pMorphedPhysicalObject);
                if (mp->bInUse)
                {
                    memset(mp, 0, sizeof(MOR_stMorphStruct_));
                    mp->bInUse = 0;
                }
            }
            else
            {
                MOR_fn_vMorphTo(mp);
            }
            break;
        case 2:
            if (mp->axCurrent[0] * axRate[0] > mp->axEnd[0] * axRate[0])
            {
                memcpy(mp->axCurrent, mp->axEnd, mp->ucNbTarget * sizeof(float));
                mp->iNbMillisecond = 0;
            }
            MOR_fn_vMorphTo(mp);
            break;
        case 3:
            if (mp->axCurrent[0] * axRate[0] > mp->axEnd[0] * axRate[0])
            {
                memcpy(axTmp, mp->axStart, mp->ucNbTarget * sizeof(float));
                memcpy(mp->axStart, mp->axEnd, mp->ucNbTarget * sizeof(float));
                memcpy(mp->axCurrent, mp->axEnd, mp->ucNbTarget * sizeof(float));
                memcpy(mp->axEnd, axTmp, mp->ucNbTarget * sizeof(float));
                mp->ucMorphType = 2;
            }
            MOR_fn_vMorphTo(mp);
            break;
        }
    }
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\MOR\specif\morph.c lines 1083–1134 */
/* addr: 0x00316440  size: 588 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1083
 *   +0x0010 -> line 1100
 *   +0x0014 -> line 1083
 *   +0x0030 -> line 1091
 *   +0x0034 -> line 1097
 *   +0x0038 -> line 1100
 *   +0x0040 -> line 1102
 *   +0x0044 -> line 1103
 *   +0x0048 -> line 1102
 *   +0x004c -> line 1103
 *   +0x0050 -> line 1102
 *   +0x0054 -> line 1103
 *   +0x0058 -> line 1102
 *   +0x005c -> line 1103
 *   +0x0060 -> line 1106
 *   +0x007c -> line 1107
 *   +0x0080 -> line 1111
 *   +0x008c -> line 1107
 *   +0x0090 -> line 1108
 *   +0x00a4 -> line 1111
 *   +0x00b0 -> line 1114
 *   +0x00b8 -> line 1118
 *   +0x00bc -> line 1114
 *   +0x00c0 -> line 1118
 *   +0x00c8 -> line 1114
 *   +0x00fc -> line 1121
 *   +0x0108 -> line 1126
 *   +0x0110 -> line 1127
 *   +0x0114 -> line 1126
 *   +0x01ac -> line 1127
 *   +0x01c0 -> line 1128
 *   +0x01c4 -> line 1127
 *   +0x01c8 -> line 1128
 *   +0x01cc -> line 1127
 *   +0x01d0 -> line 1128
 *   +0x01f0 -> line 1129
 *   +0x01f4 -> line 1128
 *   +0x01f8 -> line 1129
 *   +0x021c -> line 1132
 *   +0x0224 -> line 1134
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void MOR_fn_vMorphTo2(MOR_stMorphStruct_* mp)
{
    float xMorphRatio;
    short i;
    short k;
    unsigned int j;
    PO_tdstPhysicalObject_* phy1;
    GEO_tdstGeometricObject_* geo1;
    GEO_tdstGeometricObject_* geo3;
    MOR_stMorphObject_* param0;
    PO_tdstPhysicalObject_* hMorphedPO;

    hMorphedPO = mp->pMorphedPhysicalObject;
    phy1 = mp->pOriginalPhysicalObject;
    geo3 = NULL;
    for (i = 0; i < GLI_lGetVisualSetNumbertOfLOD(phy1->_hVisualSet); i++)
    {
        geo1 = phy1->_hVisualSet->d_p_stLodDefinitions[i].p_stGeometricObject;
        geo3 = hMorphedPO->_hVisualSet->d_p_stLodDefinitions[i].p_stGeometricObject;
        memcpy(geo3->d_stListOfPoints, geo1->d_stListOfPoints, geo3->xNbPoints * 3 * sizeof(float));
        geo3->xBoudingSphereRadius = geo1->xBoudingSphereRadius;
        MTH3D_M_vCopyVector((MTH3D_tdstVector_*)&geo3->xBoudingSphereCenter, (MTH3D_tdstVector_*)&geo1->xBoudingSphereCenter);
        for (k = 0; k < mp->ucNbTarget; k++)
        {
            param0 = ((MOR_stMorphObject_*)((PO_tdstPhysicalObject_*)((tdstEngineObject_*)mp->hActorSuperObject->hLinkedObject.p_stCharacter)->h_3dData->h_CurrentObjectsTable->d_stObjectsTable[mp->axEndIndexInObjectTable[k]].h_Target)->_hVisualSet->d_p_stLodDefinitions[i].p_stMorphObject);
            xMorphRatio = mp->axCurrent[k];
            for (j = 0; j < param0->ulNbVectors; j++)
            {
                geo3->d_stListOfPoints[param0->d_stMorphVector[j].xVertexIndex].xX = xMorphRatio * param0->d_stMorphVector[j].stDeformationVector.xX + geo3->d_stListOfPoints[param0->d_stMorphVector[j].xVertexIndex].xX; geo3->d_stListOfPoints[param0->d_stMorphVector[j].xVertexIndex].xY = xMorphRatio * param0->d_stMorphVector[j].stDeformationVector.xY + geo3->d_stListOfPoints[param0->d_stMorphVector[j].xVertexIndex].xY; geo3->d_stListOfPoints[param0->d_stMorphVector[j].xVertexIndex].xZ = xMorphRatio * param0->d_stMorphVector[j].stDeformationVector.xZ + geo3->d_stListOfPoints[param0->d_stMorphVector[j].xVertexIndex].xZ;
            }
        }
    }
    GLI_vSetObjectDeformed(geo3);
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\MOR\specif\morph.c lines 879–1052 */
/* addr: 0x00316690  size: 1196 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 879
 *   +0x0004 -> line 897
 *   +0x0008 -> line 879
 *   +0x002c -> line 892
 *   +0x0034 -> line 886
 *   +0x0038 -> line 897
 *   +0x003c -> line 892
 *   +0x0064 -> line 897
 *   +0x006c -> line 899
 *   +0x008c -> line 901
 *   +0x0094 -> line 906
 *   +0x0098 -> line 907
 *   +0x00a0 -> line 906
 *   +0x00a4 -> line 907
 *   +0x00b4 -> line 906
 *   +0x00bc -> line 907
 *   +0x00fc -> line 908
 *   +0x0100 -> line 907
 *   +0x0104 -> line 908
 *   +0x012c -> line 909
 *   +0x0134 -> line 914
 *   +0x0144 -> line 916
 *   +0x0158 -> line 918
 *   +0x0160 -> line 919
 *   +0x0168 -> line 921
 *   +0x0174 -> line 924
 *   +0x0178 -> line 926
 *   +0x017c -> line 924
 *   +0x0180 -> line 926
 *   +0x0184 -> line 924
 *   +0x018c -> line 926
 *   +0x01b0 -> line 927
 *   +0x01b4 -> line 926
 *   +0x01b8 -> line 927
 *   +0x01dc -> line 928
 *   +0x01e4 -> line 930
 *   +0x01f8 -> line 934
 *   +0x0204 -> line 936
 *   +0x0208 -> line 937
 *   +0x020c -> line 936
 *   +0x0210 -> line 937
 *   +0x0214 -> line 936
 *   +0x0218 -> line 937
 *   +0x021c -> line 936
 *   +0x0220 -> line 937
 *   +0x0224 -> line 942
 *   +0x0240 -> line 943
 *   +0x0244 -> line 947
 *   +0x0254 -> line 943
 *   +0x0258 -> line 944
 *   +0x026c -> line 947
 *   +0x0278 -> line 952
 *   +0x0280 -> line 955
 *   +0x0288 -> line 952
 *   +0x029c -> line 956
 *   +0x02a0 -> line 952
 *   +0x02c0 -> line 956
 *   +0x02c8 -> line 960
 *   +0x02e4 -> line 961
 *   +0x02f4 -> line 963
 *   +0x02f8 -> line 961
 *   +0x0308 -> line 962
 *   +0x030c -> line 963
 *   +0x0310 -> line 961
 *   +0x0314 -> line 963
 *   +0x031c -> line 962
 *   +0x0320 -> line 963
 *   +0x032c -> line 962
 *   +0x0330 -> line 963
 *   +0x0338 -> line 973
 *   +0x033c -> line 975
 *   +0x0340 -> line 972
 *   +0x0344 -> line 974
 *   +0x0348 -> line 973
 *   +0x034c -> line 975
 *   +0x0354 -> line 972
 *   +0x0358 -> line 975
 *   +0x035c -> line 974
 *   +0x0360 -> line 981
 *   +0x0364 -> line 987
 *   +0x0368 -> line 988
 *   +0x036c -> line 990
 *   +0x0370 -> line 992
 *   +0x0374 -> line 993
 *   +0x0378 -> line 994
 *   +0x037c -> line 995
 *   +0x0380 -> line 997
 *   +0x0384 -> line 998
 *   +0x0388 -> line 1000
 *   +0x038c -> line 1002
 *   +0x0390 -> line 1003
 *   +0x0394 -> line 1004
 *   +0x0398 -> line 1005
 *   +0x039c -> line 1006
 *   +0x03a0 -> line 1007
 *   +0x03a4 -> line 1008
 *   +0x03a8 -> line 1009
 *   +0x03ac -> line 1011
 *   +0x03b0 -> line 1012
 *   +0x03b4 -> line 1013
 *   +0x03b8 -> line 1014
 *   +0x03bc -> line 1016
 *   +0x03c0 -> line 1017
 *   +0x03c4 -> line 1019
 *   +0x03c8 -> line 1020
 *   +0x03cc -> line 1022
 *   +0x03d0 -> line 1028
 *   +0x03d4 -> line 1031
 *   +0x03d8 -> line 1028
 *   +0x03dc -> line 1031
 *   +0x03e0 -> line 1029
 *   +0x03e4 -> line 1034
 *   +0x0420 -> line 1045
 *   +0x0428 -> line 1034
 *   +0x0430 -> line 1045
 *   +0x0450 -> line 1046
 *   +0x0454 -> line 1045
 *   +0x0458 -> line 1046
 *   +0x047c -> line 1049
 *   +0x0484 -> line 1052
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void MOR_fn_vMorphTo(MOR_stMorphStruct_* mp)
{
    unsigned int NbVectsArg;
    float* pV3Arg;
    float* pV2Arg;
    float* pV1Arg;
    unsigned int NbVects;
    float* pV3;
    float* pV2;
    float* pV1;
    PO_tdstPhysicalObject_* hMorphedPO;
    GEO_tdstGeometricObject_* geo3;
    GEO_tdstGeometricObject_* geo2;
    GEO_tdstGeometricObject_* geo1;
    PO_tdstPhysicalObject_* phy1;
    short k;
    short i;
    float xMorphRatio;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\MOR\specif\morph.c lines 625–870 */
/* addr: 0x00316b40  size: 1372 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 625
 *   +0x0004 -> line 636
 *   +0x0008 -> line 625
 *   +0x000c -> line 639
 *   +0x0010 -> line 625
 *   +0x0014 -> line 636
 *   +0x0018 -> line 625
 *   +0x0050 -> line 639
 *   +0x0058 -> line 636
 *   +0x005c -> line 632
 *   +0x0060 -> line 636
 *   +0x0078 -> line 639
 *   +0x007c -> line 636
 *   +0x0088 -> line 639
 *   +0x0098 -> line 641
 *   +0x00e4 -> line 646
 *   +0x00e8 -> line 649
 *   +0x00ec -> line 645
 *   +0x00f0 -> line 646
 *   +0x00f4 -> line 649
 *   +0x0104 -> line 651
 *   +0x0128 -> line 658
 *   +0x012c -> line 659
 *   +0x0130 -> line 660
 *   +0x0138 -> line 662
 *   +0x013c -> line 660
 *   +0x0140 -> line 662
 *   +0x0160 -> line 664
 *   +0x0174 -> line 667
 *   +0x0188 -> line 669
 *   +0x01a0 -> line 676
 *   +0x01ac -> line 678
 *   +0x01b0 -> line 679
 *   +0x01b4 -> line 680
 *   +0x01c4 -> line 678
 *   +0x01c8 -> line 680
 *   +0x01dc -> line 681
 *   +0x01e4 -> line 687
 *   +0x01e8 -> line 698
 *   +0x01f0 -> line 687
 *   +0x01f4 -> line 698
 *   +0x020c -> line 699
 *   +0x0210 -> line 700
 *   +0x0224 -> line 701
 *   +0x022c -> line 705
 *   +0x0230 -> line 710
 *   +0x0244 -> line 711
 *   +0x0248 -> line 710
 *   +0x024c -> line 718
 *   +0x0250 -> line 710
 *   +0x0254 -> line 721
 *   +0x0258 -> line 710
 *   +0x026c -> line 721
 *   +0x0270 -> line 711
 *   +0x0274 -> line 721
 *   +0x0278 -> line 714
 *   +0x027c -> line 721
 *   +0x0280 -> line 715
 *   +0x0284 -> line 716
 *   +0x028c -> line 718
 *   +0x0294 -> line 721
 *   +0x029c -> line 723
 *   +0x02a4 -> line 724
 *   +0x02a8 -> line 723
 *   +0x02ac -> line 724
 *   +0x02c0 -> line 726
 *   +0x02c4 -> line 727
 *   +0x02c8 -> line 729
 *   +0x02d0 -> line 732
 *   +0x02d8 -> line 733
 *   +0x02dc -> line 734
 *   +0x02e0 -> line 736
 *   +0x02e4 -> line 734
 *   +0x02ec -> line 736
 *   +0x0300 -> line 737
 *   +0x0308 -> line 740
 *   +0x030c -> line 742
 *   +0x0318 -> line 792
 *   +0x0320 -> line 796
 *   +0x0330 -> line 799
 *   +0x0334 -> line 802
 *   +0x0348 -> line 803
 *   +0x0358 -> line 804
 *   +0x0364 -> line 807
 *   +0x036c -> line 810
 *   +0x0370 -> line 813
 *   +0x0380 -> line 815
 *   +0x03ac -> line 817
 *   +0x03c4 -> line 819
 *   +0x03dc -> line 820
 *   +0x03e8 -> line 823
 *   +0x03f0 -> line 825
 *   +0x03f8 -> line 828
 *   +0x0410 -> line 830
 *   +0x0428 -> line 831
 *   +0x0430 -> line 834
 *   +0x0438 -> line 836
 *   +0x0440 -> line 837
 *   +0x0444 -> line 836
 *   +0x0448 -> line 837
 *   +0x0460 -> line 840
 *   +0x0468 -> line 843
 *   +0x0474 -> line 845
 *   +0x0498 -> line 846
 *   +0x04b4 -> line 847
 *   +0x04c0 -> line 846
 *   +0x04d0 -> line 847
 *   +0x04ec -> line 849
 *   +0x04f4 -> line 853
 *   +0x0500 -> line 856
 *   +0x0508 -> line 859
 *   +0x0520 -> line 862
 *   +0x0528 -> line 869
 *   +0x052c -> line 870
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
short MOR_fn_xMorphing2(HIE_tdstSuperObject_* _hActorSuperObject, short _xStartIndexInObjectTable, short* _xEndIndexInObjectTable, unsigned char _ucNbTargets, float* _xRatio, short _xChannelIndex, unsigned char _ucMorphType)
{
    unsigned char uc;
    unsigned char bNewMorph;
    unsigned char bCreateObject;
    PO_tdstPhysicalObject_* pEndPhysicalObject;
    PO_tdstPhysicalObject_* pNewPhysicalObject;
    PO_tdstPhysicalObject_* pStartPhysicalObject;
    MOR_stMorphStruct_* mp;
    short j;
    short xMorphListIndex;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\MOR\specif\morph.c lines 380–603 */
/* addr: 0x003170a0  size: 1648 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 380
 *   +0x0004 -> line 398
 *   +0x0008 -> line 380
 *   +0x000c -> line 398
 *   +0x0010 -> line 380
 *   +0x0014 -> line 398
 *   +0x0018 -> line 380
 *   +0x001c -> line 398
 *   +0x0020 -> line 380
 *   +0x0024 -> line 398
 *   +0x0028 -> line 380
 *   +0x002c -> line 399
 *   +0x0030 -> line 380
 *   +0x005c -> line 398
 *   +0x0064 -> line 387
 *   +0x0068 -> line 398
 *   +0x0080 -> line 399
 *   +0x0088 -> line 401
 *   +0x00b4 -> line 403
 *   +0x00d0 -> line 404
 *   +0x00d8 -> line 406
 *   +0x00e8 -> line 408
 *   +0x0118 -> line 412
 *   +0x0140 -> line 415
 *   +0x014c -> line 417
 *   +0x0174 -> line 418
 *   +0x0178 -> line 417
 *   +0x017c -> line 418
 *   +0x0198 -> line 421
 *   +0x01bc -> line 423
 *   +0x01f4 -> line 428
 *   +0x01f8 -> line 425
 *   +0x01fc -> line 426
 *   +0x0200 -> line 428
 *   +0x0210 -> line 430
 *   +0x0234 -> line 436
 *   +0x0238 -> line 437
 *   +0x023c -> line 438
 *   +0x0244 -> line 440
 *   +0x0248 -> line 438
 *   +0x024c -> line 440
 *   +0x0270 -> line 442
 *   +0x0284 -> line 445
 *   +0x0298 -> line 447
 *   +0x02b0 -> line 454
 *   +0x02bc -> line 456
 *   +0x02c0 -> line 457
 *   +0x02c4 -> line 458
 *   +0x02d4 -> line 456
 *   +0x02d8 -> line 458
 *   +0x02ec -> line 459
 *   +0x02f4 -> line 465
 *   +0x02f8 -> line 476
 *   +0x0300 -> line 465
 *   +0x0304 -> line 476
 *   +0x031c -> line 477
 *   +0x0320 -> line 479
 *   +0x0334 -> line 480
 *   +0x033c -> line 486
 *   +0x0340 -> line 490
 *   +0x0354 -> line 491
 *   +0x0358 -> line 490
 *   +0x035c -> line 498
 *   +0x0360 -> line 490
 *   +0x0364 -> line 501
 *   +0x0368 -> line 490
 *   +0x0378 -> line 501
 *   +0x037c -> line 490
 *   +0x0380 -> line 501
 *   +0x0384 -> line 491
 *   +0x0388 -> line 494
 *   +0x0390 -> line 495
 *   +0x0394 -> line 496
 *   +0x039c -> line 498
 *   +0x03a4 -> line 499
 *   +0x03a8 -> line 501
 *   +0x03b0 -> line 503
 *   +0x03b8 -> line 504
 *   +0x03c0 -> line 503
 *   +0x03c4 -> line 504
 *   +0x03d8 -> line 506
 *   +0x03dc -> line 507
 *   +0x03e0 -> line 509
 *   +0x03e8 -> line 512
 *   +0x03f0 -> line 513
 *   +0x03f4 -> line 514
 *   +0x03f8 -> line 516
 *   +0x03fc -> line 514
 *   +0x0404 -> line 516
 *   +0x0418 -> line 517
 *   +0x0420 -> line 521
 *   +0x0424 -> line 523
 *   +0x0430 -> line 526
 *   +0x0438 -> line 530
 *   +0x0448 -> line 533
 *   +0x044c -> line 536
 *   +0x0460 -> line 537
 *   +0x0470 -> line 538
 *   +0x047c -> line 541
 *   +0x0484 -> line 544
 *   +0x0488 -> line 546
 *   +0x0498 -> line 548
 *   +0x04c4 -> line 550
 *   +0x04dc -> line 552
 *   +0x04f4 -> line 553
 *   +0x0500 -> line 556
 *   +0x0508 -> line 558
 *   +0x0510 -> line 561
 *   +0x0528 -> line 563
 *   +0x0540 -> line 564
 *   +0x0548 -> line 567
 *   +0x0550 -> line 569
 *   +0x0558 -> line 570
 *   +0x055c -> line 569
 *   +0x0560 -> line 570
 *   +0x0578 -> line 573
 *   +0x0580 -> line 576
 *   +0x058c -> line 578
 *   +0x05b0 -> line 579
 *   +0x05cc -> line 580
 *   +0x05d8 -> line 579
 *   +0x05e8 -> line 580
 *   +0x0604 -> line 582
 *   +0x060c -> line 586
 *   +0x0614 -> line 589
 *   +0x061c -> line 592
 *   +0x0634 -> line 595
 *   +0x063c -> line 602
 *   +0x0640 -> line 603
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
short MOR_fn_xMorphing(HIE_tdstSuperObject_* _hActorSuperObject, short _xStartIndexInObjectTable, short* _xEndIndexInObjectTable, unsigned char _ucNbTargets, float* _xRatio, short _xChannelIndex, unsigned char _ucMorphType)
{
    unsigned char uc;
    unsigned char bNewMorph;
    unsigned char bCreateObject;
    PO_tdstPhysicalObject_* pNewPhysicalObject;
    PO_tdstPhysicalObject_* pEndPhysicalObject;
    PO_tdstPhysicalObject_* pStartPhysicalObject;
    MOR_stMorphStruct_* mp;
    short j;
    short xMorphListIndex;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\MOR\specif\morph.c lines 321–369 */
/* addr: 0x00317710  size: 472 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 321
 *   +0x001c -> line 327
 *   +0x0020 -> line 321
 *   +0x002c -> line 327
 *   +0x0048 -> line 328
 *   +0x0080 -> line 329
 *   +0x0088 -> line 332
 *   +0x009c -> line 334
 *   +0x00a0 -> line 336
 *   +0x00c4 -> line 337
 *   +0x00c8 -> line 339
 *   +0x00d0 -> line 338
 *   +0x00d8 -> line 339
 *   +0x00f8 -> line 341
 *   +0x0100 -> line 342
 *   +0x0108 -> line 345
 *   +0x0188 -> line 359
 *   +0x0194 -> line 362
 *   +0x01a8 -> line 365
 *   +0x01b0 -> line 368
 *   +0x01b4 -> line 369
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
short MOR_fn_xStopMorph(HIE_tdstSuperObject_* _hActorSuperObject, short _xChannelIndex)
{
    MOR_stMorphStruct_* mp;
    HIE_tdstSuperObject_* hSuperObject;
    PO_tdstPhysicalObject_* pMorphedPhysicalObject;
    PO_tdstPhysicalObject_* pEndPhysicalObject;
    HIE_tdstSuperObject_* hChildSuperObject;
    unsigned short uwChannelNumber;
    short j;
    short xMorphListIndex;

    mp = NULL;
    uwChannelNumber = (unsigned short)_xChannelIndex;
    xMorphListIndex = fn_hMorphListIndex(((tdstEngineObject_*)_hActorSuperObject->hLinkedObject.p_stCharacter)->h_3dData->hMorphChannelList, _xChannelIndex);
    if (xMorphListIndex == -1 || !g_MorphTasksList[xMorphListIndex].bInUse)
        return -1;

    for (j = 0; j < 50; j++)
    {
        mp = &g_MorphTasksList[j];
        if (mp->bInUse && mp->hActorSuperObject == _hActorSuperObject && mp->xChannelIndex == _xChannelIndex)
            break;
        mp = NULL;
    }
    if (mp == NULL)
        return -1;

    hSuperObject = mp->hActorSuperObject;
    pMorphedPhysicalObject = mp->pMorphedPhysicalObject;
    pEndPhysicalObject = *(PO_tdstPhysicalObject_**)(void*)((char*)&((tdstEngineObject_*)mp->hActorSuperObject->hLinkedObject.p_stCharacter)->h_3dData->h_CurrentObjectsTable->d_stObjectsTable[0].h_Target + mp->axEndIndexInObjectTable[0] * sizeof(tdstObjectsTableElement_));
    if (hSuperObject->hLinkedObject.p_stPhysicalObject == pMorphedPhysicalObject)
    {
        hSuperObject->ulTypeOfLinkedObject = (pEndPhysicalObject != NULL) ? 8 : 1;
        hSuperObject->hLinkedObject.p_stPhysicalObject = pEndPhysicalObject;
    }
    else
    {
        for (hChildSuperObject = hSuperObject->hFirstElementDyn; hChildSuperObject != NULL; hChildSuperObject = hChildSuperObject->hNextBrotherDyn)
        {
            if (MOR_fn_bRemoveMorphedObjectFromHierarchy(hChildSuperObject, pMorphedPhysicalObject, pEndPhysicalObject))
                break;
        }
    }

    mp->bInUse = 0;
    fn_vPushAllocModeAccordingToObject(_hActorSuperObject);
    fn_vRemoveChannelFromMorphList(((tdstEngineObject_*)_hActorSuperObject->hLinkedObject.p_stCharacter)->h_3dData->hMorphChannelList, uwChannelNumber);
    GAM_fn_vPopAllocMode();
    return 0;
}
