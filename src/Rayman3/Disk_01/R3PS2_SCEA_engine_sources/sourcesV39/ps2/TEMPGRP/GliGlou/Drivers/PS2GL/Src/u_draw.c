/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\u_draw.c */
/* Language: C */
/* Compiler: MW MIPS C Compiler */

#include <stddef.h>

/* Recovered aggregate layouts from MWCC debug type records. */
typedef struct AI_tdstMind_ AI_tdstMind_;
typedef struct FIL_tdstFileNameList_ FIL_tdstFileNameList_;
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
typedef struct tdstPhysicalCollSet_ tdstPhysicalCollSet_;
typedef struct tdstSectInfo_ tdstSectInfo_;
typedef struct tdstState_ tdstState_;
typedef struct tdstSuperObjectLinks_ tdstSuperObjectLinks_;
typedef struct LST2_tdstAnchorToWP_tdhGraphNodeDyn LST2_tdstAnchorToWP_tdhGraphNodeDyn;
typedef union HIE_tduLinkedObject_ HIE_tduLinkedObject_;
typedef struct MTH3D_tdstVector_ MTH3D_tdstVector_;
typedef struct HIE_tdstSuperObject_ HIE_tdstSuperObject_;
typedef struct SECT_tdstListOfDNMLights_ SECT_tdstListOfDNMLights_;
typedef struct GEO_tdstElementIndexedTriangles_ GEO_tdstElementIndexedTriangles_;
typedef struct MTH4D_tdstVector_ MTH4D_tdstVector_;
typedef struct GEO_tdstGeometricObject_ GEO_tdstGeometricObject_;
typedef struct anon_0 anon_0;
typedef struct LST2_tdstAnchorToCHN_tdxHandleToMorphElementDyn LST2_tdstAnchorToCHN_tdxHandleToMorphElementDyn;
typedef struct MTH4D_tdstMatrix_ MTH4D_tdstMatrix_;
typedef struct MAT_tdstTransformation_ MAT_tdstTransformation_;
typedef struct GLI_tdstAnimatedTextureNode_ GLI_tdstAnimatedTextureNode_;
typedef struct tdstObjectsTableElement_ tdstObjectsTableElement_;
typedef struct GEO_tdstEdge_ GEO_tdstEdge_;
typedef struct tdstMorphChannelList_ tdstMorphChannelList_;
typedef struct tagGLArrayInfo tagGLArrayInfo;
typedef struct tag_GLtexture_image tag_GLtexture_image;
typedef struct LST2_tdstAnchorToSECT_tdxHandleOfElementLstDNMLightsDyn LST2_tdstAnchorToSECT_tdxHandleOfElementLstDNMLightsDyn;
typedef struct tdstBrain_ tdstBrain_;
typedef struct tdstGraphChainedListNode_ tdstGraphChainedListNode_;
typedef struct GLI_tdstTexture_ GLI_tdstTexture_;
typedef struct GEO_tdstParallelBox_ GEO_tdstParallelBox_;
typedef struct LST2_tdstAnchorToCINE_tdxHandleToCineDyn LST2_tdstAnchorToCINE_tdxHandleToCineDyn;
typedef struct stInterpolatedPosition stInterpolatedPosition;
typedef struct tdstAChannel_ tdstAChannel_;
typedef struct WP_tdstGraph_ WP_tdstGraph_;
typedef struct anon_1 anon_1;
typedef struct anon_2 anon_2;
typedef struct anon_3 anon_3;
typedef struct LST2_tdstAnchorToCINE_tdxHandleToCineActorDyn LST2_tdstAnchorToCINE_tdxHandleToCineActorDyn;
typedef struct CINE_tdstCine_ CINE_tdstCine_;
typedef struct GMT_tdstGameMaterial_ GMT_tdstGameMaterial_;
typedef struct tdstElement3d_ tdstElement3d_;
typedef struct tagsceGsReg tagsceGsReg;
typedef struct anon_4 anon_4;
typedef struct tdstEvent_ tdstEvent_;
typedef struct LST2_tdstAnchorToSECT_tdxHandleOfElementLstCharacterDyn LST2_tdstAnchorToSECT_tdxHandleOfElementLstCharacterDyn;
typedef struct LST2_tdstAnchorToSECT_tdxHandleOfElementLstStaticLightsOpt LST2_tdstAnchorToSECT_tdxHandleOfElementLstStaticLightsOpt;
typedef struct LST2_tdstAnchorToSECT_tdxHandleOfElementLstGraphicInteractionOpt LST2_tdstAnchorToSECT_tdxHandleOfElementLstGraphicInteractionOpt;
typedef struct LST2_tdstAnchorToSECT_tdxHandleOfElementLstCollisionInteractionOpt LST2_tdstAnchorToSECT_tdxHandleOfElementLstCollisionInteractionOpt;
typedef struct LST2_tdstAnchorToSECT_tdxHandleOfElementLstActivityInteractionOpt LST2_tdstAnchorToSECT_tdxHandleOfElementLstActivityInteractionOpt;
typedef struct LST2_tdstAnchorToSECT_tdxHandleOfElementLstSoundInteractionOpt LST2_tdstAnchorToSECT_tdxHandleOfElementLstSoundInteractionOpt;
typedef struct LST2_tdstAnchorToSCT_tdxHandleOfLstSoundEventOpt LST2_tdstAnchorToSCT_tdxHandleOfLstSoundEventOpt;
typedef union _SND_tduRefEvt _SND_tduRefEvt;
typedef struct SECT_tdstSector_ SECT_tdstSector_;
typedef struct _sceDmaTag _sceDmaTag;
typedef struct anon_17 anon_17;
typedef struct tagGLprimbuf tagGLprimbuf;
typedef struct tag_GLlight tag_GLlight;
typedef struct stMorphData stMorphData;
typedef struct GEO_tdstColor_ GEO_tdstColor_;
typedef struct GLI_tdstZBufferForLight_ GLI_tdstZBufferForLight_;
typedef struct GLI_tdstLight_ GLI_tdstLight_;
typedef struct anon_5 anon_5;
typedef struct tag_GLtexture_set tag_GLtexture_set;
typedef struct anon_14 anon_14;
typedef struct anon_22 anon_22;
typedef struct anon_40 anon_40;
typedef struct anon_10 anon_10;
typedef struct anon_9 anon_9;
typedef struct anon_7 anon_7;
typedef struct anon_39 anon_39;
typedef struct anon_29 anon_29;
typedef struct anon_13 anon_13;
typedef struct anon_15 anon_15;
typedef struct anon_19 anon_19;
typedef struct anon_16 anon_16;
typedef struct anon_24 anon_24;
typedef struct anon_26 anon_26;
typedef struct anon_8 anon_8;
typedef struct anon_18 anon_18;
typedef struct anon_34 anon_34;
typedef struct anon_32 anon_32;
typedef struct anon_20 anon_20;
typedef struct anon_6 anon_6;
typedef struct anon_21 anon_21;
typedef struct anon_42 anon_42;
typedef struct anon_12 anon_12;
typedef struct anon_23 anon_23;
typedef struct anon_37 anon_37;
typedef struct anon_11 anon_11;
typedef struct anon_28 anon_28;
typedef struct anon_36 anon_36;
typedef struct anon_41 anon_41;
typedef struct anon_33 anon_33;
typedef struct anon_38 anon_38;
typedef struct anon_25 anon_25;
typedef union anon_27 anon_27;
typedef struct tagGScontext tagGScontext;
typedef struct LST2_tdstAnchorTotdxHandleToAlwaysActiveCharacterNodeDyn LST2_tdstAnchorTotdxHandleToAlwaysActiveCharacterNodeDyn;
typedef struct SECT_tdstListOfSOSectorsInGraphicInteraction_ SECT_tdstListOfSOSectorsInGraphicInteraction_;
typedef struct GEO_tdstDoubledIndex_ GEO_tdstDoubledIndex_;
typedef struct anon_30 anon_30;
typedef struct anon_35 anon_35;
typedef struct GLI_tdstMaterial_ GLI_tdstMaterial_;
typedef struct tdstEventInTable_ tdstEventInTable_;
typedef struct GLI_tdst2DVertex_ GLI_tdst2DVertex_;
typedef struct GLI_tdstCamera_ GLI_tdstCamera_;
typedef struct Triangle_Disp_ Triangle_Disp_;
typedef struct GLI_SpecificPS2GL_Structure_ GLI_SpecificPS2GL_Structure_;
typedef struct tdstAnim3d_ tdstAnim3d_;
typedef struct COL_tdstBoundingSphere_ COL_tdstBoundingSphere_;
typedef struct SECT_tdstListOfSOCharacters_ SECT_tdstListOfSOCharacters_;
typedef struct CINE_Manager_ CINE_Manager_;
typedef struct IPO_tdstInstanciatedPhysicalObject_ IPO_tdstInstanciatedPhysicalObject_;
typedef struct GEO_tdstVisualSet_ GEO_tdstVisualSet_;
typedef struct ACP_tdst2DUVValues_ ACP_tdst2DUVValues_;
typedef struct LST2_tdstAnchorTotdxHandleToSubAnimOpt LST2_tdstAnchorTotdxHandleToSubAnimOpt;
typedef struct MOR_stMorphVector_ MOR_stMorphVector_;
typedef struct tagstVIFCode tagstVIFCode;
typedef struct GLD_tdstViewportAttributes_ GLD_tdstViewportAttributes_;
typedef struct SECT_tdstListOfSOSectorsInCollisionInteraction_ SECT_tdstListOfSOSectorsInCollisionInteraction_;
typedef struct tdstSubAnim_ tdstSubAnim_;
typedef struct LST2_tdstAnchorToCINE_tdxHandleToChannelLinkDyn LST2_tdstAnchorToCINE_tdxHandleToChannelLinkDyn;
typedef struct CINE_tdstCineActor_ CINE_tdstCineActor_;
typedef struct tdstSubAnimInUse_ tdstSubAnimInUse_;
typedef struct GLI_g_PS2GL_ShadowVolume_ GLI_g_PS2GL_ShadowVolume_;
typedef struct tdstPLA_Hierarchy_ tdstPLA_Hierarchy_;
typedef struct tdstPLA_Deformation_ tdstPLA_Deformation_;
typedef struct tdstFrame3d_ tdstFrame3d_;
typedef struct LST2_tdstAnchorTotdxHandleToSubAnimInUseDyn LST2_tdstAnchorTotdxHandleToSubAnimInUseDyn;
typedef struct MTH3D_tdstMatrix_ MTH3D_tdstMatrix_;
typedef struct tdstViewportManagement_ tdstViewportManagement_;
typedef union unFunction unFunction;
typedef struct tagGLlistnode tagGLlistnode;
typedef struct tagGLlistcalls tagGLlistcalls;
typedef struct tdst3dData_ tdst3dData_;
typedef struct _stTimerCount _stTimerCount;
typedef struct tdstEngineTimerStructure_ tdstEngineTimerStructure_;
typedef struct GLI_tdstSpecificAttributesFor3D_ GLI_tdstSpecificAttributesFor3D_;
typedef struct LST2_tdstAnchorTotdxHandleToNodeCameraDyn LST2_tdstAnchorTotdxHandleToNodeCameraDyn;
typedef struct LST2_tdstAnchorTotdxHandleToFamilyListDyn LST2_tdstAnchorTotdxHandleToFamilyListDyn;
typedef struct LST2_tdstAnchorToMC_tdxHandleToMainCharacterNodeDyn LST2_tdstAnchorToMC_tdxHandleToMainCharacterNodeDyn;
typedef struct tdstEngineStructure_ tdstEngineStructure_;
typedef struct tag_GLmaterial tag_GLmaterial;
typedef struct tdstStandardGame_ tdstStandardGame_;
typedef struct tagGLtexname tagGLtexname;
typedef struct SECT_tdstListOfSOSectorsInActivityInteraction_ SECT_tdstListOfSOSectorsInActivityInteraction_;
typedef struct SECT_tdstListOfStaticLights_ SECT_tdstListOfStaticLights_;
typedef struct tagGLlistdatas tagGLlistdatas;
typedef union GEO_tduVSObject_ GEO_tduVSObject_;
typedef struct GEO_tdstTripledIndex_ GEO_tdstTripledIndex_;
typedef struct SECT_tdstListOfSOSectorsInSoundInteraction_ SECT_tdstListOfSOSectorsInSoundInteraction_;
typedef struct LST2_tdstAnchorTotdxHandleToStateOpt LST2_tdstAnchorTotdxHandleToStateOpt;
typedef struct LST2_tdstAnchorTotdxHandleToObjectsTablesListOpt LST2_tdstAnchorTotdxHandleToObjectsTablesListOpt;
typedef struct tdstFamilyList_ tdstFamilyList_;
typedef struct tag_GLtexture tag_GLtexture;
typedef struct MOR_stMorphObject_ MOR_stMorphObject_;
typedef struct tdstObjectsTablesList_ tdstObjectsTablesList_;
typedef struct tagListData tagListData;
typedef struct SCT_tdstListOfSoundEvent_ SCT_tdstListOfSoundEvent_;
typedef struct tagGLtexblock tagGLtexblock;
typedef struct ISI_tdstColor_ ISI_tdstColor_;
typedef struct tagGsLoadImage tagGsLoadImage;
typedef struct tdstEngineObject_ tdstEngineObject_;
typedef struct tdstCouple_ tdstCouple_;
typedef struct CINE_tdstChannelLink_ CINE_tdstChannelLink_;
typedef struct tagGLtexindex tagGLtexindex;
typedef struct GMT_tdstCollideMaterial_ GMT_tdstCollideMaterial_;
typedef struct tdstLipsSynchValue_ tdstLipsSynchValue_;
typedef struct anon_31 anon_31;
typedef struct tagGsSetTex tagGsSetTex;
typedef struct PO_tdstPhysicalObject_ PO_tdstPhysicalObject_;
typedef struct tagListNodeSingle tagListNodeSingle;
typedef struct HIE_tdstModifierObject_ HIE_tdstModifierObject_;
typedef struct tdstNodeCamera_ tdstNodeCamera_;
typedef struct tdstPLA_DeformationLink_ tdstPLA_DeformationLink_;
typedef struct tagListNode tagListNode;
typedef struct tdstLanguageStructure_ tdstLanguageStructure_;
typedef struct _GL_BUFFERINFO _GL_BUFFERINFO;
typedef struct tagGLlistpool tagGLlistpool;
typedef struct WP_tdstGraphNode_ WP_tdstGraphNode_;
typedef struct tagGLcontext tagGLcontext;

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

struct LST2_tdstAnchorToWP_tdhGraphNodeDyn {
    WP_tdstGraphNode_* hFirstElementDyn; /* +0x0 */
    WP_tdstGraphNode_* hLastElementDyn; /* +0x4 */
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

struct SECT_tdstListOfDNMLights_ {
    GLI_tdstLight_* hDNMLights; /* +0x0 */
    SECT_tdstListOfDNMLights_* hNextBrotherDyn; /* +0x4 */
    SECT_tdstListOfDNMLights_* hPrevBrotherDyn; /* +0x8 */
    LST2_tdstAnchorToSECT_tdxHandleOfElementLstDNMLightsDyn* hFatherDyn; /* +0xc */
};

struct GEO_tdstElementIndexedTriangles_ {
    GLI_tdstMaterial_* hVisualMaterial; /* +0x0 */
    short xNbFaces; /* +0x4 */
    short xNbElementUV; /* +0x6 */
    short xNbUVStages; /* +0x8 */
    GEO_tdstTripledIndex_* d_stListOfFacesTripled; /* +0xc */
    GEO_tdstTripledIndex_* d_stListOfFacesTripledIndexUV; /* +0x10 */
    MTH3D_tdstVector_* d_stListOfFacesNormals; /* +0x14 */
    ACP_tdst2DUVValues_* d_stListOfElementUV; /* +0x18 */
    GEO_tdstTripledIndex_* d_stListOfFacesEdges; /* +0x1c */
    GEO_tdstTripledIndex_* d_stListOfFacesAdjacent; /* +0x20 */
    int d_stListOfIndexUsedByThisElement; /* +0x24 */
    short xNumberOfIndexsUsed; /* +0x28 */
    short xIndexOfParallelBox; /* +0x2a */
    unsigned int glDisplayList; /* +0x2c */
    int p_xSpecialValue; /* +0x30 */
    unsigned char bVisibleInPortal; /* +0x34 */
    unsigned int pVertexArrays[4]; /* +0x38 */
};

struct MTH4D_tdstVector_ {
    float xX; /* +0x0 */
    float xY; /* +0x4 */
    float xZ; /* +0x8 */
    float xW; /* +0xc */
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

struct anon_0 {
    unsigned int ID; /* +0x0 */
    unsigned int IDMSK; /* +0x4 */
};

struct LST2_tdstAnchorToCHN_tdxHandleToMorphElementDyn {
    tdstMorphChannelList_* hFirstElementDyn; /* +0x0 */
    tdstMorphChannelList_* hLastElementDyn; /* +0x4 */
    int lNumberOfElementsDyn; /* +0x8 */
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

struct GLI_tdstAnimatedTextureNode_ {
    GLI_tdstTexture_* p_stTexture; /* +0x0 */
    float xDisplayTime; /* +0x4 */
    GLI_tdstAnimatedTextureNode_* p_stNextDisplayNode; /* +0x8 */
};

struct tdstObjectsTableElement_ {
    MTH3D_tdstVector_* p_stCustomZoom; /* +0x0 */
    int h_Target; /* +0x4 */
    unsigned int uwChannelNumber; /* +0x8 */
    unsigned short wTypeOfTarget; /* +0xc */
    unsigned char ucPhoneme; /* +0xe */
    unsigned char ucIntensity; /* +0xf */
    unsigned char ucExpression; /* +0x10 */
};

struct GEO_tdstEdge_ {
    short xPoints[2]; /* +0x0 */
    MTH3D_tdstVector_ st_VectorPoints[2]; /* +0x4 */
};

struct tdstMorphChannelList_ {
    tdstMorphChannelList_* hNextBrotherDyn; /* +0x0 */
    tdstMorphChannelList_* hPrevBrotherDyn; /* +0x4 */
    LST2_tdstAnchorToCHN_tdxHandleToMorphElementDyn* hFatherDyn; /* +0x8 */
    unsigned short uwChannelNumber; /* +0xc */
    short MorphListIndex; /* +0xe */
};

struct tagGLArrayInfo {
    int size; /* +0x0 */
    unsigned int type; /* +0x4 */
    int stride; /* +0x8 */
    int pointer; /* +0xc */
};

struct tag_GLtexture_image {
    unsigned int target; /* +0x0 */
    int inputComponents; /* +0x4 */
    int width; /* +0x8 */
    int height; /* +0xc */
    unsigned int format; /* +0x10 */
    int pixels; /* +0x14 */
    int pixelsAux; /* +0x18 */
    int cbPixels; /* +0x1c */
    int cbPixelsAux; /* +0x20 */
    unsigned char pixelsChanged; /* +0x24 */
    unsigned char bConverted; /* +0x25 */
    unsigned char bUserMaintain; /* +0x26 */
    unsigned int uiSpan; /* +0x28 */
};

struct LST2_tdstAnchorToSECT_tdxHandleOfElementLstDNMLightsDyn {
    SECT_tdstListOfDNMLights_* hFirstElementDyn; /* +0x0 */
    SECT_tdstListOfDNMLights_* hLastElementDyn; /* +0x4 */
    int lNumberOfElementsDyn; /* +0x8 */
};

struct tdstBrain_ {
    AI_tdstMind_* p_stMind; /* +0x0 */
    GMT_tdstGameMaterial_* hLastCollidedGoThroughMaterial; /* +0x4 */
    unsigned char bWarnMechanicsFlag; /* +0x8 */
    unsigned char bActiveDuringTransition; /* +0x9 */
};

struct tdstGraphChainedListNode_ {
    WP_tdstGraph_* GraphChainedListNodeInfo; /* +0x0 */
    tdstGraphChainedListNode_* p_NextGraphChainedListNode; /* +0x4 */
};

struct GLI_tdstTexture_ {
    int bIsAvailable; /* +0x0 */
    int lTextureQuality; /* +0x4 */
    int p_vBitMap; /* +0x8 */
    int p_vColorTable; /* +0xc */
    int p_stSpecParam; /* +0x10 */
    int lTextureCaps; /* +0x14 */
    unsigned short lHeight; /* +0x18 */
    unsigned short lWidth; /* +0x1a */
    unsigned short lRealHeight; /* +0x1c */
    unsigned short lRealWidth; /* +0x1e */
    float fAddU; /* +0x20 */
    float fAddV; /* +0x24 */
    int lIncrementIsEnable; /* +0x28 */
    unsigned int lChromakeyColorRGBA; /* +0x2c */
    unsigned int ulBlendColorRGBA; /* +0x30 */
    int lNumberOfLod; /* +0x34 */
    unsigned int lCompressionCounter; /* +0x38 */
    unsigned int lTypeOfCompression; /* +0x3c */
    unsigned int lTypeOfMipMapping; /* +0x40 */
    GLI_tdstTexture_* p_TextureOfSubstitution; /* +0x44 */
    unsigned char ucBilinearMode; /* +0x48 */
    unsigned char ucCylingMode; /* +0x49 */
    char a255_cFileName[128]; /* +0x4a */
};

struct GEO_tdstParallelBox_ {
    MTH4D_tdstVector_ stMinPoint; /* +0x0 */
    MTH4D_tdstVector_ stMaxPoint; /* +0x10 */
};

struct LST2_tdstAnchorToCINE_tdxHandleToCineDyn {
    CINE_tdstCine_* hFirstElementDyn; /* +0x0 */
    CINE_tdstCine_* hLastElementDyn; /* +0x4 */
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

struct WP_tdstGraph_ {
    LST2_tdstAnchorToWP_tdhGraphNodeDyn m_hListOfNode; /* +0x0 */
};

struct anon_1 {
    float vObjectBS[4]; /* +0x0 */
    unsigned char bFinalCompile; /* +0x10 */
    unsigned int mode; /* +0x14 */
    tagGLprimbuf* pPrimBuf; /* +0x18 */
};

struct anon_2 {
    unsigned long TBP1 : 14; /* bit 0, byte +0x0 */
    unsigned long TBW1 : 6; /* bit 14, byte +0x0 */
    unsigned long TBP2 : 14; /* bit 20, byte +0x0 */
    unsigned long TBW2 : 6; /* bit 34, byte +0x0 */
    unsigned long TBP3 : 14; /* bit 40, byte +0x0 */
    unsigned long TBW3 : 6; /* bit 54, byte +0x0 */
    unsigned long pad60 : 4; /* bit 60, byte +0x0 */
};

struct anon_3 {
    unsigned long U : 14; /* bit 0, byte +0x0 */
    unsigned long pad14 : 2; /* bit 14, byte +0x0 */
    unsigned long V : 14; /* bit 16, byte +0x0 */
    unsigned long pad30 : 34; /* bit 30, byte +0x0 */
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

struct GMT_tdstGameMaterial_ {
    int hSoundMaterial; /* +0x0 */
    GMT_tdstCollideMaterial_* hCollideMaterial; /* +0x4 */
};

struct tdstElement3d_ {
    unsigned short wElement : 15; /* bit 0, byte +0x0 */
    unsigned short bf1ActiveStatus : 1; /* bit 15, byte +0x0 */
    unsigned char ucChannelNumber; /* +0x2 */
    unsigned char eTypeOfElement; /* +0x3 */
    unsigned char ucTransparency; /* +0x4 */
    unsigned char ucAnimLevel; /* +0x5 */
};

struct tagsceGsReg {
    unsigned long DATA; /* +0x0 */
};

struct anon_4 {
    unsigned long CLAMP : 1; /* bit 0, byte +0x0 */
    unsigned long pad01 : 63; /* bit 1, byte +0x0 */
};

struct tdstEvent_ {
    tdstEventInTable_* p_stfEventInTBL; /* +0x0 */
    unsigned short usEventNumberInTBL; /* +0x4 */
    unsigned short uwFrameNumber; /* +0x6 */
    unsigned short uwChannelNumber; /* +0x8 */
    unsigned short uwIsLocalized; /* +0xa */
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

struct _sceDmaTag {
    unsigned short qwc; /* +0x0 */
    unsigned char mark; /* +0x2 */
    unsigned char id; /* +0x3 */
    _sceDmaTag* next; /* +0x4 */
    unsigned int p[2]; /* +0x8 */
};

struct anon_17 {
    unsigned long NLOOP : 15; /* bit 0, byte +0x0 */
    unsigned long EOP : 1; /* bit 15, byte +0x0 */
    unsigned long pad16 : 16; /* bit 16, byte +0x0 */
    unsigned long id : 14; /* bit 32, byte +0x0 */
    unsigned long PRE : 1; /* bit 46, byte +0x0 */
    unsigned long PRIM : 11; /* bit 47, byte +0x0 */
    unsigned long FLG : 2; /* bit 58, byte +0x0 */
    unsigned long NREG : 4; /* bit 60, byte +0x0 */
    unsigned long REGS0 : 4; /* bit 0, byte +0x8 */
    unsigned long REGS1 : 4; /* bit 4, byte +0x8 */
    unsigned long REGS2 : 4; /* bit 8, byte +0x8 */
    unsigned long REGS3 : 4; /* bit 12, byte +0x8 */
    unsigned long REGS4 : 4; /* bit 16, byte +0x8 */
    unsigned long REGS5 : 4; /* bit 20, byte +0x8 */
    unsigned long REGS6 : 4; /* bit 24, byte +0x8 */
    unsigned long REGS7 : 4; /* bit 28, byte +0x8 */
    unsigned long REGS8 : 4; /* bit 32, byte +0x8 */
    unsigned long REGS9 : 4; /* bit 36, byte +0x8 */
    unsigned long REGS10 : 4; /* bit 40, byte +0x8 */
    unsigned long REGS11 : 4; /* bit 44, byte +0x8 */
    unsigned long REGS12 : 4; /* bit 48, byte +0x8 */
    unsigned long REGS13 : 4; /* bit 52, byte +0x8 */
    unsigned long REGS14 : 4; /* bit 56, byte +0x8 */
    unsigned long REGS15 : 4; /* bit 60, byte +0x8 */
};

struct tagGLprimbuf {
    tagGLprimbuf* pNext; /* +0x0 */
    unsigned int nCount; /* +0x4 */
    unsigned char bEOP; /* +0x8 */
    int pCode; /* +0xc */
    float (*pData)[4]; /* +0x10 */
    int pTexUnit; /* +0x14 */
    unsigned char _extractor_padding_00[8]; /* implicitly added by extractor; +0x18..0x1f */
    _sceDmaTag tagDma; /* +0x20 */
    anon_17 tagGif; /* +0x30 */
    int vData[4]; /* +0x40 */
};

struct tag_GLlight {
    float vAmbient[4]; /* +0x0 */
    float vDiffuse[4]; /* +0x10 */
    float vSpecular[4]; /* +0x20 */
    float vPosition[4]; /* +0x30 */
    float vDirection[4]; /* +0x40 */
    float fSpotExponent; /* +0x50 */
    float fSpotCutoff; /* +0x54 */
    float fCosCutoff; /* +0x58 */
    float fConstantAttenuation; /* +0x5c */
    float fLinearAttenuation; /* +0x60 */
    float fQuadraticAttenuation; /* +0x64 */
};

struct stMorphData {
    unsigned short uwChannelNumber; /* +0x0 */
    unsigned short uwFrameNumber; /* +0x2 */
    unsigned char ucNbTarget; /* +0x4 */
    unsigned char ucAlign[3]; /* +0x5 */
    short a_xIndexTargetMT[10]; /* +0x8 */
    unsigned char a_ucMorphingAmountMT[10]; /* +0x1c */
};

struct GEO_tdstColor_ {
    float xR; /* +0x0 */
    float xG; /* +0x4 */
    float xB; /* +0x8 */
    float xA; /* +0xc */
};

struct GLI_tdstZBufferForLight_ {
    int lSizeX; /* +0x0 */
    int lSizeY; /* +0x4 */
    float fCoefX; /* +0x8 */
    float fCoefY; /* +0xc */
    int p_stZBufferMap; /* +0x10 */
    int p_stMiddleZBufferMap; /* +0x14 */
};

struct GLI_tdstLight_ {
    int b_lOnOff; /* +0x0 */
    int bThisLightIsZBuffered; /* +0x4 */
    int lTypeOfLight; /* +0x8 */
    float xFar; /* +0xc */
    float xNear; /* +0x10 */
    float xLittleAlpha; /* +0x14 */
    float xBigAlpha; /* +0x18 */
    float xLittleTangent; /* +0x1c */
    float xBigTangent; /* +0x20 */
    unsigned char _extractor_padding_00[12]; /* implicitly added by extractor; +0x24..0x2f */
    MAT_tdstTransformation_ stMatrix; /* +0x30 */
    GEO_tdstColor_ stColor; /* +0x90 */
    float SqNear; /* +0xa0 */
    float SqFar; /* +0xa4 */
    float OOSqDiv; /* +0xa8 */
    GLI_tdstZBufferForLight_ stZBuffer; /* +0xac */
    unsigned char bValid; /* +0xc4 */
    unsigned char ucObjectLighted; /* +0xc5 */
    unsigned char bIsPainting; /* +0xc6 */
    unsigned char ucIsAlpha; /* +0xc7 */
    MTH3D_tdstVector_ xInter_Min_Pos; /* +0xc8 */
    MTH3D_tdstVector_ xExter_Min_Pos; /* +0xd4 */
    MTH3D_tdstVector_ xInter_Max_Pos; /* +0xe0 */
    MTH3D_tdstVector_ xExter_Max_Pos; /* +0xec */
    MTH3D_tdstVector_ xCenterBox; /* +0xf8 */
    float xRadius; /* +0x104 */
    float xIntensity_Min; /* +0x108 */
    float xIntensity_Max; /* +0x10c */
    GEO_tdstColor_ stBackgroundColor; /* +0x110 */
    int bCreatesShadows; /* +0x120 */
};

struct anon_5 {
    unsigned long OFX : 16; /* bit 0, byte +0x0 */
    unsigned long pad16 : 16; /* bit 16, byte +0x0 */
    unsigned long OFY : 16; /* bit 32, byte +0x0 */
    unsigned long pad48 : 16; /* bit 48, byte +0x0 */
};

struct tag_GLtexture_set {
    float vTexEnvColor[4]; /* +0x0 */
    unsigned int eTexEnvMode; /* +0x10 */
    unsigned int nTexGenBits; /* +0x14 */
    unsigned short nTexGenModeS; /* +0x18 */
    unsigned short nTexGenModeT; /* +0x1a */
    unsigned short nTexGenModeR; /* +0x1c */
    unsigned short nTexGenModeQ; /* +0x1e */
    float vTexGenCoeffS[4]; /* +0x20 */
    float vTexGenCoeffT[4]; /* +0x30 */
    float vTexGenCoeffR[4]; /* +0x40 */
    float vTexGenCoeffQ[4]; /* +0x50 */
};

struct anon_14 {
    unsigned long PRIM : 3; /* bit 0, byte +0x0 */
    unsigned long IIP : 1; /* bit 3, byte +0x0 */
    unsigned long TME : 1; /* bit 4, byte +0x0 */
    unsigned long FGE : 1; /* bit 5, byte +0x0 */
    unsigned long ABE : 1; /* bit 6, byte +0x0 */
    unsigned long AA1 : 1; /* bit 7, byte +0x0 */
    unsigned long FST : 1; /* bit 8, byte +0x0 */
    unsigned long CTXT : 1; /* bit 9, byte +0x0 */
    unsigned long FIX : 1; /* bit 10, byte +0x0 */
    unsigned long pad11 : 53; /* bit 11, byte +0x0 */
};

struct anon_22 {
    unsigned int R : 8; /* bit 0, byte +0x0 */
    unsigned int G : 8; /* bit 8, byte +0x0 */
    unsigned int B : 8; /* bit 16, byte +0x0 */
    unsigned int A : 8; /* bit 24, byte +0x0 */
    float Q; /* +0x4 */
};

struct anon_40 {
    float S; /* +0x0 */
    float T; /* +0x4 */
};

struct anon_10 {
    unsigned long X : 16; /* bit 0, byte +0x0 */
    unsigned long Y : 16; /* bit 16, byte +0x0 */
    unsigned long Z : 24; /* bit 32, byte +0x0 */
    unsigned long F : 8; /* bit 56, byte +0x0 */
};

struct anon_9 {
    unsigned long X : 16; /* bit 0, byte +0x0 */
    unsigned long Y : 16; /* bit 16, byte +0x0 */
    unsigned long Z : 32; /* bit 32, byte +0x0 */
};

struct anon_7 {
    unsigned long TBP0 : 14; /* bit 0, byte +0x0 */
    unsigned long TBW : 6; /* bit 14, byte +0x0 */
    unsigned long PSM : 6; /* bit 20, byte +0x0 */
    unsigned long TW : 4; /* bit 26, byte +0x0 */
    unsigned long TH : 4; /* bit 30, byte +0x0 */
    unsigned long TCC : 1; /* bit 34, byte +0x0 */
    unsigned long TFX : 2; /* bit 35, byte +0x0 */
    unsigned long CBP : 14; /* bit 37, byte +0x0 */
    unsigned long CPSM : 4; /* bit 51, byte +0x0 */
    unsigned long CSM : 1; /* bit 55, byte +0x0 */
    unsigned long CSA : 5; /* bit 56, byte +0x0 */
    unsigned long CLD : 3; /* bit 61, byte +0x0 */
};

struct anon_39 {
    unsigned long WMS : 2; /* bit 0, byte +0x0 */
    unsigned long WMT : 2; /* bit 2, byte +0x0 */
    unsigned long MINU : 10; /* bit 4, byte +0x0 */
    unsigned long MAXU : 10; /* bit 14, byte +0x0 */
    unsigned long MINV : 10; /* bit 24, byte +0x0 */
    unsigned long MAXV : 10; /* bit 34, byte +0x0 */
    unsigned long pad44 : 20; /* bit 44, byte +0x0 */
};

struct anon_29 {
    unsigned long pad00 : 56; /* bit 0, byte +0x0 */
    unsigned long F : 8; /* bit 56, byte +0x0 */
};

struct anon_13 {
    unsigned long LCM : 1; /* bit 0, byte +0x0 */
    unsigned long pad01 : 1; /* bit 1, byte +0x0 */
    unsigned long MXL : 3; /* bit 2, byte +0x0 */
    unsigned long MMAG : 1; /* bit 5, byte +0x0 */
    unsigned long MMIN : 3; /* bit 6, byte +0x0 */
    unsigned long MTBA : 1; /* bit 9, byte +0x0 */
    unsigned long pad10 : 9; /* bit 10, byte +0x0 */
    unsigned long L : 2; /* bit 19, byte +0x0 */
    unsigned long pad21 : 11; /* bit 21, byte +0x0 */
    unsigned long K : 12; /* bit 32, byte +0x0 */
    unsigned long pad44 : 20; /* bit 44, byte +0x0 */
};

struct anon_15 {
    unsigned long pad00 : 20; /* bit 0, byte +0x0 */
    unsigned long PSM : 6; /* bit 20, byte +0x0 */
    unsigned long pad26 : 11; /* bit 26, byte +0x0 */
    unsigned long CBP : 14; /* bit 37, byte +0x0 */
    unsigned long CPSM : 4; /* bit 51, byte +0x0 */
    unsigned long CSM : 1; /* bit 55, byte +0x0 */
    unsigned long CSA : 5; /* bit 56, byte +0x0 */
    unsigned long CLD : 3; /* bit 61, byte +0x0 */
};

struct anon_19 {
    unsigned long AC : 1; /* bit 0, byte +0x0 */
    unsigned long pad01 : 63; /* bit 1, byte +0x0 */
};

struct anon_16 {
    unsigned long pad00 : 3; /* bit 0, byte +0x0 */
    unsigned long IIP : 1; /* bit 3, byte +0x0 */
    unsigned long TME : 1; /* bit 4, byte +0x0 */
    unsigned long FGE : 1; /* bit 5, byte +0x0 */
    unsigned long ABE : 1; /* bit 6, byte +0x0 */
    unsigned long AA1 : 1; /* bit 7, byte +0x0 */
    unsigned long FST : 1; /* bit 8, byte +0x0 */
    unsigned long CTXT : 1; /* bit 9, byte +0x0 */
    unsigned long FIX : 1; /* bit 10, byte +0x0 */
    unsigned long pad11 : 53; /* bit 11, byte +0x0 */
};

struct anon_24 {
    unsigned long CBW : 6; /* bit 0, byte +0x0 */
    unsigned long COU : 6; /* bit 6, byte +0x0 */
    unsigned long COV : 10; /* bit 12, byte +0x0 */
    unsigned long pad22 : 42; /* bit 22, byte +0x0 */
};

struct anon_26 {
    unsigned long MSK : 2; /* bit 0, byte +0x0 */
    unsigned long pad02 : 62; /* bit 2, byte +0x0 */
};

struct anon_8 {
    unsigned long TBP4 : 14; /* bit 0, byte +0x0 */
    unsigned long TBW4 : 6; /* bit 14, byte +0x0 */
    unsigned long TBP5 : 14; /* bit 20, byte +0x0 */
    unsigned long TBW5 : 6; /* bit 34, byte +0x0 */
    unsigned long TBP6 : 14; /* bit 40, byte +0x0 */
    unsigned long TBW6 : 6; /* bit 54, byte +0x0 */
    unsigned long pad60 : 4; /* bit 60, byte +0x0 */
};

struct anon_18 {
    unsigned long TA0 : 8; /* bit 0, byte +0x0 */
    unsigned long pad08 : 7; /* bit 8, byte +0x0 */
    unsigned long AEM : 1; /* bit 15, byte +0x0 */
    unsigned long pad16 : 16; /* bit 16, byte +0x0 */
    unsigned long TA1 : 8; /* bit 32, byte +0x0 */
    unsigned long pad40 : 24; /* bit 40, byte +0x0 */
};

struct anon_34 {
    unsigned long FCR : 8; /* bit 0, byte +0x0 */
    unsigned long FCG : 8; /* bit 8, byte +0x0 */
    unsigned long FCB : 8; /* bit 16, byte +0x0 */
    unsigned long pad24 : 40; /* bit 24, byte +0x0 */
};

struct anon_32 {
    unsigned long SCAX0 : 11; /* bit 0, byte +0x0 */
    unsigned long pad11 : 5; /* bit 11, byte +0x0 */
    unsigned long SCAX1 : 11; /* bit 16, byte +0x0 */
    unsigned long pad27 : 5; /* bit 27, byte +0x0 */
    unsigned long SCAY0 : 11; /* bit 32, byte +0x0 */
    unsigned long pad43 : 5; /* bit 43, byte +0x0 */
    unsigned long SCAY1 : 11; /* bit 48, byte +0x0 */
    unsigned long pad59 : 5; /* bit 59, byte +0x0 */
};

struct anon_20 {
    unsigned long A : 2; /* bit 0, byte +0x0 */
    unsigned long B : 2; /* bit 2, byte +0x0 */
    unsigned long C : 2; /* bit 4, byte +0x0 */
    unsigned long D : 2; /* bit 6, byte +0x0 */
    unsigned long pad8 : 24; /* bit 8, byte +0x0 */
    unsigned long FIX : 8; /* bit 32, byte +0x0 */
    unsigned long pad40 : 24; /* bit 40, byte +0x0 */
};

struct anon_6 {
    unsigned long DIMX00 : 3; /* bit 0, byte +0x0 */
    unsigned long pad00 : 1; /* bit 3, byte +0x0 */
    unsigned long DIMX01 : 3; /* bit 4, byte +0x0 */
    unsigned long pad01 : 1; /* bit 7, byte +0x0 */
    unsigned long DIMX02 : 3; /* bit 8, byte +0x0 */
    unsigned long pad02 : 1; /* bit 11, byte +0x0 */
    unsigned long DIMX03 : 3; /* bit 12, byte +0x0 */
    unsigned long pad03 : 1; /* bit 15, byte +0x0 */
    unsigned long DIMX10 : 3; /* bit 16, byte +0x0 */
    unsigned long pad10 : 1; /* bit 19, byte +0x0 */
    unsigned long DIMX11 : 3; /* bit 20, byte +0x0 */
    unsigned long pad11 : 1; /* bit 23, byte +0x0 */
    unsigned long DIMX12 : 3; /* bit 24, byte +0x0 */
    unsigned long pad12 : 1; /* bit 27, byte +0x0 */
    unsigned long DIMX13 : 3; /* bit 28, byte +0x0 */
    unsigned long pad13 : 1; /* bit 31, byte +0x0 */
    unsigned long DIMX20 : 3; /* bit 32, byte +0x0 */
    unsigned long pad20 : 1; /* bit 35, byte +0x0 */
    unsigned long DIMX21 : 3; /* bit 36, byte +0x0 */
    unsigned long pad21 : 1; /* bit 39, byte +0x0 */
    unsigned long DIMX22 : 3; /* bit 40, byte +0x0 */
    unsigned long pad22 : 1; /* bit 43, byte +0x0 */
    unsigned long DIMX23 : 3; /* bit 44, byte +0x0 */
    unsigned long pad23 : 1; /* bit 47, byte +0x0 */
    unsigned long DIMX30 : 3; /* bit 48, byte +0x0 */
    unsigned long pad30 : 1; /* bit 51, byte +0x0 */
    unsigned long DIMX31 : 3; /* bit 52, byte +0x0 */
    unsigned long pad31 : 1; /* bit 55, byte +0x0 */
    unsigned long DIMX32 : 3; /* bit 56, byte +0x0 */
    unsigned long pad32 : 1; /* bit 59, byte +0x0 */
    unsigned long DIMX33 : 3; /* bit 60, byte +0x0 */
    unsigned long pad33 : 1; /* bit 63, byte +0x0 */
};

struct anon_21 {
    unsigned long DTHE : 1; /* bit 0, byte +0x0 */
    unsigned long pad01 : 63; /* bit 1, byte +0x0 */
};

struct anon_42 {
    unsigned long ATE : 1; /* bit 0, byte +0x0 */
    unsigned long ATST : 3; /* bit 1, byte +0x0 */
    unsigned long AREF : 8; /* bit 4, byte +0x0 */
    unsigned long AFAIL : 2; /* bit 12, byte +0x0 */
    unsigned long DATE : 1; /* bit 14, byte +0x0 */
    unsigned long DATM : 1; /* bit 15, byte +0x0 */
    unsigned long ZTE : 1; /* bit 16, byte +0x0 */
    unsigned long ZTST : 2; /* bit 17, byte +0x0 */
    unsigned long pad19 : 45; /* bit 19, byte +0x0 */
};

struct anon_12 {
    unsigned long PABE : 1; /* bit 0, byte +0x0 */
    unsigned long pad01 : 63; /* bit 1, byte +0x0 */
};

struct anon_23 {
    unsigned long FBA : 1; /* bit 0, byte +0x0 */
    unsigned long pad01 : 63; /* bit 1, byte +0x0 */
};

struct anon_37 {
    unsigned long FBP : 9; /* bit 0, byte +0x0 */
    unsigned long pad09 : 7; /* bit 9, byte +0x0 */
    unsigned long FBW : 6; /* bit 16, byte +0x0 */
    unsigned long pad22 : 2; /* bit 22, byte +0x0 */
    unsigned long PSM : 6; /* bit 24, byte +0x0 */
    unsigned long pad30 : 2; /* bit 30, byte +0x0 */
    unsigned long FBMSK : 32; /* bit 32, byte +0x0 */
};

struct anon_11 {
    unsigned long ZBP : 9; /* bit 0, byte +0x0 */
    unsigned long pad09 : 15; /* bit 9, byte +0x0 */
    unsigned long PSM : 4; /* bit 24, byte +0x0 */
    unsigned long pad28 : 4; /* bit 28, byte +0x0 */
    unsigned long ZMSK : 1; /* bit 32, byte +0x0 */
    unsigned long pad33 : 31; /* bit 33, byte +0x0 */
};

struct anon_28 {
    unsigned long SBP : 14; /* bit 0, byte +0x0 */
    unsigned long pad14 : 2; /* bit 14, byte +0x0 */
    unsigned long SBW : 6; /* bit 16, byte +0x0 */
    unsigned long pad22 : 2; /* bit 22, byte +0x0 */
    unsigned long SPSM : 6; /* bit 24, byte +0x0 */
    unsigned long pad30 : 2; /* bit 30, byte +0x0 */
    unsigned long DBP : 14; /* bit 32, byte +0x0 */
    unsigned long pad46 : 2; /* bit 46, byte +0x0 */
    unsigned long DBW : 6; /* bit 48, byte +0x0 */
    unsigned long pad54 : 2; /* bit 54, byte +0x0 */
    unsigned long DPSM : 6; /* bit 56, byte +0x0 */
    unsigned long pad62 : 2; /* bit 62, byte +0x0 */
};

struct anon_36 {
    unsigned long SSAX : 11; /* bit 0, byte +0x0 */
    unsigned long pad11 : 5; /* bit 11, byte +0x0 */
    unsigned long SSAY : 11; /* bit 16, byte +0x0 */
    unsigned long pad27 : 5; /* bit 27, byte +0x0 */
    unsigned long DSAX : 11; /* bit 32, byte +0x0 */
    unsigned long pad43 : 5; /* bit 43, byte +0x0 */
    unsigned long DSAY : 11; /* bit 48, byte +0x0 */
    unsigned long DIR : 2; /* bit 59, byte +0x0 */
    unsigned long pad61 : 3; /* bit 61, byte +0x0 */
};

struct anon_41 {
    unsigned long RRW : 12; /* bit 0, byte +0x0 */
    unsigned long pad12 : 20; /* bit 12, byte +0x0 */
    unsigned long RRH : 12; /* bit 32, byte +0x0 */
    unsigned long pad44 : 20; /* bit 44, byte +0x0 */
};

struct anon_33 {
    unsigned long XDR : 2; /* bit 0, byte +0x0 */
    unsigned long pad02 : 62; /* bit 2, byte +0x0 */
};

struct anon_38 {
    unsigned int ID; /* +0x0 */
    unsigned int IDMSK; /* +0x4 */
};

struct anon_25 {
    unsigned long PRIM_Modified : 1; /* bit 0, byte +0x0 */
    unsigned long RGBAQ_Modified : 1; /* bit 1, byte +0x0 */
    unsigned long ST_Modified : 1; /* bit 2, byte +0x0 */
    unsigned long UV_Modified : 1; /* bit 3, byte +0x0 */
    unsigned long XYZF2_Modified : 1; /* bit 4, byte +0x0 */
    unsigned long XYZ2_Modified : 1; /* bit 5, byte +0x0 */
    unsigned long TEX0_1_Modified : 1; /* bit 6, byte +0x0 */
    unsigned long TEX0_2_Modified : 1; /* bit 7, byte +0x0 */
    unsigned long CLAMP_1_Modified : 1; /* bit 8, byte +0x0 */
    unsigned long CLAMP_2_Modified : 1; /* bit 9, byte +0x0 */
    unsigned long FOG_Modified : 1; /* bit 10, byte +0x0 */
    unsigned long XYZF3_Modified : 1; /* bit 11, byte +0x0 */
    unsigned long XYZ3_Modified : 1; /* bit 12, byte +0x0 */
    unsigned long TEX1_1_Modified : 1; /* bit 13, byte +0x0 */
    unsigned long TEX1_2_Modified : 1; /* bit 14, byte +0x0 */
    unsigned long TEX2_1_Modified : 1; /* bit 15, byte +0x0 */
    unsigned long TEX2_2_Modified : 1; /* bit 16, byte +0x0 */
    unsigned long XYOFFSET_1_Modified : 1; /* bit 17, byte +0x0 */
    unsigned long XYOFFSET_2_Modified : 1; /* bit 18, byte +0x0 */
    unsigned long PRMODECONT_Modified : 1; /* bit 19, byte +0x0 */
    unsigned long PRMODE_Modified : 1; /* bit 20, byte +0x0 */
    unsigned long TEXCLUT_Modified : 1; /* bit 21, byte +0x0 */
    unsigned long SCANMSK_Modified : 1; /* bit 22, byte +0x0 */
    unsigned long MIPTBP1_1_Modified : 1; /* bit 23, byte +0x0 */
    unsigned long MIPTBP1_2_Modified : 1; /* bit 24, byte +0x0 */
    unsigned long MIPTBP2_1_Modified : 1; /* bit 25, byte +0x0 */
    unsigned long MIPTBP2_2_Modified : 1; /* bit 26, byte +0x0 */
    unsigned long TEXA_Modified : 1; /* bit 27, byte +0x0 */
    unsigned long FOGCOL_Modified : 1; /* bit 28, byte +0x0 */
    unsigned long TEXFLUSH_Modified : 1; /* bit 29, byte +0x0 */
    unsigned long SCISSOR_1_Modified : 1; /* bit 30, byte +0x0 */
    unsigned long SCISSOR_2_Modified : 1; /* bit 31, byte +0x0 */
    unsigned long ALPHA_1_Modified : 1; /* bit 32, byte +0x0 */
    unsigned long ALPHA_2_Modified : 1; /* bit 33, byte +0x0 */
    unsigned long DIMX_Modified : 1; /* bit 34, byte +0x0 */
    unsigned long DTHE_Modified : 1; /* bit 35, byte +0x0 */
    unsigned long COLCLAMP_Modified : 1; /* bit 36, byte +0x0 */
    unsigned long TEST_1_Modified : 1; /* bit 37, byte +0x0 */
    unsigned long TEST_2_Modified : 1; /* bit 38, byte +0x0 */
    unsigned long PABE_Modified : 1; /* bit 39, byte +0x0 */
    unsigned long FBA_1_Modified : 1; /* bit 40, byte +0x0 */
    unsigned long FBA_2_Modified : 1; /* bit 41, byte +0x0 */
    unsigned long FRAME_1_Modified : 1; /* bit 42, byte +0x0 */
    unsigned long FRAME_2_Modified : 1; /* bit 43, byte +0x0 */
    unsigned long ZBUF_1_Modified : 1; /* bit 44, byte +0x0 */
    unsigned long ZBUF_2_Modified : 1; /* bit 45, byte +0x0 */
    unsigned long BITBLTBUF_Modified : 1; /* bit 46, byte +0x0 */
    unsigned long TRXPOS_Modified : 1; /* bit 47, byte +0x0 */
    unsigned long TRXREG_Modified : 1; /* bit 48, byte +0x0 */
    unsigned long TRXDIR_Modified : 1; /* bit 49, byte +0x0 */
    unsigned long HWREG_Modified : 1; /* bit 50, byte +0x0 */
    unsigned long SIGNAL_Modified : 1; /* bit 51, byte +0x0 */
    unsigned long FINISH_Modified : 1; /* bit 52, byte +0x0 */
    unsigned long LABEL_Modified : 1; /* bit 53, byte +0x0 */
};

union anon_27 {
    signed char bData[16]; /* +0x0 */
    unsigned char ubData[16]; /* +0x0 */
    short sData[8]; /* +0x0 */
    unsigned short usData[8]; /* +0x0 */
    int iData[4]; /* +0x0 */
    unsigned int uiData[4]; /* +0x0 */
    long i64Data[2]; /* +0x0 */
    unsigned long u64Data[2]; /* +0x0 */
    float fData[4]; /* +0x0 */
    double dData[2]; /* +0x0 */
};

struct tagGScontext {
    anon_14 PRIM; /* +0x0 */
    anon_22 RGBAQ; /* +0x8 */
    anon_40 ST; /* +0x10 */
    anon_3 UV; /* +0x18 */
    anon_10 XYZF2; /* +0x20 */
    anon_9 XYZ2; /* +0x28 */
    anon_7 TEX0_1; /* +0x30 */
    anon_7 TEX0_2; /* +0x38 */
    anon_39 CLAMP_1; /* +0x40 */
    anon_39 CLAMP_2; /* +0x48 */
    anon_29 FOG; /* +0x50 */
    anon_10 XYZF3; /* +0x58 */
    anon_9 XYZ3; /* +0x60 */
    anon_13 TEX1_1; /* +0x68 */
    anon_13 TEX1_2; /* +0x70 */
    anon_15 TEX2_1; /* +0x78 */
    anon_15 TEX2_2; /* +0x80 */
    anon_5 XYOFFSET_1; /* +0x88 */
    anon_5 XYOFFSET_2; /* +0x90 */
    anon_19 PRMODECONT; /* +0x98 */
    anon_16 PRMODE; /* +0xa0 */
    anon_24 TEXCLUT; /* +0xa8 */
    anon_26 SCANMSK; /* +0xb0 */
    anon_2 MIPTBP1_1; /* +0xb8 */
    anon_2 MIPTBP1_2; /* +0xc0 */
    anon_8 MIPTBP2_1; /* +0xc8 */
    anon_8 MIPTBP2_2; /* +0xd0 */
    anon_18 TEXA; /* +0xd8 */
    anon_34 FOGCOL; /* +0xe0 */
    tagsceGsReg TEXFLUSH; /* +0xe8 */
    anon_32 SCISSOR_1; /* +0xf0 */
    anon_32 SCISSOR_2; /* +0xf8 */
    anon_20 ALPHA_1; /* +0x100 */
    anon_20 ALPHA_2; /* +0x108 */
    anon_6 DIMX; /* +0x110 */
    anon_21 DTHE; /* +0x118 */
    anon_4 COLCLAMP; /* +0x120 */
    anon_42 TEST_1; /* +0x128 */
    anon_42 TEST_2; /* +0x130 */
    anon_12 PABE; /* +0x138 */
    anon_23 FBA_1; /* +0x140 */
    anon_23 FBA_2; /* +0x148 */
    anon_37 FRAME_1; /* +0x150 */
    anon_37 FRAME_2; /* +0x158 */
    anon_11 ZBUF_1; /* +0x160 */
    anon_11 ZBUF_2; /* +0x168 */
    anon_28 BITBLTBUF; /* +0x170 */
    anon_36 TRXPOS; /* +0x178 */
    anon_41 TRXREG; /* +0x180 */
    anon_33 TRXDIR; /* +0x188 */
    tagsceGsReg HWREG; /* +0x190 */
    anon_38 SIGNAL; /* +0x198 */
    tagsceGsReg FINISH; /* +0x1a0 */
    anon_0 LABEL; /* +0x1a8 */
    anon_25 ModFlgs; /* +0x1b0 */
    anon_25 GlobalModFlgs; /* +0x1b8 */
    anon_27 PackageBuffer[518]; /* +0x1c0 */
    int iBufCount; /* +0x2220 */
    anon_27* pqCurrent; /* +0x2224 */
    anon_17* pCurTag; /* +0x2228 */
    signed char iRegs; /* +0x222c */
};

struct LST2_tdstAnchorTotdxHandleToAlwaysActiveCharacterNodeDyn {
    tdstAlwaysActiveCharacter_* hFirstElementDyn; /* +0x0 */
    tdstAlwaysActiveCharacter_* hLastElementDyn; /* +0x4 */
    int lNumberOfElementsDyn; /* +0x8 */
};

struct SECT_tdstListOfSOSectorsInGraphicInteraction_ {
    short wLevelOfDetail; /* +0x0 */
    char cDisplayMode; /* +0x2 */
    HIE_tdstSuperObject_* hPointerOfSectorSO; /* +0x4 */
};

struct GEO_tdstDoubledIndex_ {
    short a2_xIndex[2]; /* +0x0 */
};

struct anon_30 {
    float stMat[2][2]; /* +0x0 */
    float stTrans[2]; /* +0x10 */
};

struct anon_35 {
    GLI_tdstTexture_* pst_Texture; /* +0x0 */
    char c_Operator; /* +0x4 */
    char c_ColorOperator; /* +0x5 */
    char c_UVSource; /* +0x6 */
    char c_Flags; /* +0x7 */
    unsigned int ulTextureProperties; /* +0x8 */
    anon_30 st_UVStaticPos; /* +0xc */
    anon_30 st_UVDynamicPos; /* +0x24 */
    float fDynamicAngle; /* +0x3c */
    float fStaticAngle; /* +0x40 */
    unsigned int ulSetMaterialFunction; /* +0x44 */
    float fScaleU; /* +0x48 */
    float fScaleV; /* +0x4c */
};

struct GLI_tdstMaterial_ {
    unsigned int xMaterialType; /* +0x0 */
    GEO_tdstColor_ stAmbient; /* +0x4 */
    GEO_tdstColor_ stDiffuse; /* +0x14 */
    GEO_tdstColor_ stSpecular; /* +0x24 */
    GEO_tdstColor_ stColor; /* +0x34 */
    unsigned int lMaterialAdditionnalType; /* +0x44 */
    int lSpecularExponent; /* +0x48 */
    GLI_tdstTexture_* p_stTexture; /* +0x4c */
    float fAddU; /* +0x50 */
    float fAddV; /* +0x54 */
    float fConstantAddU; /* +0x58 */
    float fConstantAddV; /* +0x5c */
    int lIncrementIsEnable; /* +0x60 */
    unsigned int lActualRefreshNumber; /* +0x64 */
    GLI_tdstAnimatedTextureNode_* p_stFistAnimatedTExtureNode; /* +0x68 */
    GLI_tdstAnimatedTextureNode_* p_stActualAnimatedTExtureNode; /* +0x6c */
    int lNumberOfDisplayNode; /* +0x70 */
    float xActualDisplayTimeSinceStartOfLastTexture; /* +0x74 */
    unsigned char xIsLocked; /* +0x78 */
    unsigned int uiFlags; /* +0x7c */
    unsigned int ulMultiTextureType; /* +0x80 */
    unsigned int ulNbTextureStages; /* +0x84 */
    anon_35 a_stMultiMaterial[4]; /* +0x88 */
};

struct tdstEventInTable_ {
    int p_xEvent; /* +0x0 */
    unsigned char ucTypeOfEvent; /* +0x4 */
    unsigned char ucPriority; /* +0x5 */
    unsigned char ucFirstCall; /* +0x6 */
    unsigned char ucPeriod; /* +0x7 */
    unsigned int u32SemaphoreId; /* +0x8 */
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

struct Triangle_Disp_ {
    MTH4D_tdstVector_ Position[3]; /* +0x0 */
    float RGBAColor[4]; /* +0x30 */
};

struct GLI_SpecificPS2GL_Structure_ {
    unsigned int Flags; /* +0x0 */
    int pVertexArrayHandles; /* +0x4 */
    int glDisplayLists; /* +0x8 */
    unsigned short NbStages; /* +0xc */
    unsigned short WasOutlinedOrDynamicallyLit; /* +0xe */
    unsigned int LastFrame; /* +0x10 */
    MTH3D_tdstVector_ stMin; /* +0x14 */
    MTH3D_tdstVector_ stMax; /* +0x20 */
    unsigned int BoundingBoxValid; /* +0x2c */
    int pTempVAPos[4]; /* +0x30 */
    int pTempVAOther[4]; /* +0x40 */
    unsigned int SpriteGenArray; /* +0x50 */
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

struct SECT_tdstListOfSOCharacters_ {
    HIE_tdstSuperObject_* hPointerOfCharacter; /* +0x0 */
    SECT_tdstListOfSOCharacters_* hNextBrotherDyn; /* +0x4 */
    SECT_tdstListOfSOCharacters_* hPrevBrotherDyn; /* +0x8 */
    LST2_tdstAnchorToSECT_tdxHandleOfElementLstCharacterDyn* hFatherDyn; /* +0xc */
};

struct CINE_Manager_ {
    LST2_tdstAnchorToCINE_tdxHandleToCineDyn hCineList; /* +0x0 */
    MAT_tdstTransformation_ gp_stFixedCameraMatrix; /* +0x10 */
    HIE_tdstSuperObject_* gp_stSPOHandleCamera; /* +0x70 */
};

struct IPO_tdstInstanciatedPhysicalObject_ {
    PO_tdstPhysicalObject_* _hPhysicalObject; /* +0x0 */
    int _hCurrentRadiosity; /* +0x4 */
    int a_hRadiosity; /* +0x8 */
    HIE_tdstSuperObject_* hPortalCamera; /* +0xc */
    unsigned int ulLastTransitionID; /* +0x10 */
    float fLastRatioUsed; /* +0x14 */
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

struct ACP_tdst2DUVValues_ {
    float xU; /* +0x0 */
    float xV; /* +0x4 */
};

struct LST2_tdstAnchorTotdxHandleToSubAnimOpt {
    tdstSubAnim_* hFirstElementOpt; /* +0x0 */
    int lNumberOfElementsOpt; /* +0x4 */
};

struct MOR_stMorphVector_ {
    short xVertexIndex; /* +0x0 */
    MTH3D_tdstVector_ stDeformationVector; /* +0x4 */
};

struct tagstVIFCode {
    unsigned short IMMEDIATE; /* +0x0 */
    unsigned char NUM; /* +0x2 */
    unsigned char CMD; /* +0x3 */
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

struct SECT_tdstListOfSOSectorsInCollisionInteraction_ {
    HIE_tdstSuperObject_* hPointerOfSectorSO; /* +0x0 */
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

struct GLI_g_PS2GL_ShadowVolume_ {
    float pWorldMatrix[16]; /* +0x0 */
    unsigned int FirstVertex; /* +0x40 */
    unsigned int LastVertex; /* +0x44 */
    unsigned int Pads[2]; /* +0x48 */
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

struct MTH3D_tdstMatrix_ {
    MTH3D_tdstVector_ stCol_0; /* +0x0 */
    MTH3D_tdstVector_ stCol_1; /* +0xc */
    MTH3D_tdstVector_ stCol_2; /* +0x18 */
};

struct tdstViewportManagement_ {
    HIE_tdstSuperObject_* hCamera; /* +0x0 */
    HIE_tdstSuperObject_* hTempCamera; /* +0x4 */
    GLI_tdstCamera_* p_stCamera; /* +0x8 */
    unsigned char bValid; /* +0xc */
};

union unFunction {
    void (*pfnPlayVoid)(void); /* +0x0 */
    void (*pfnPlayParam)(void*); /* +0x0 */
};

struct tagGLlistnode {
    unFunction pfns; /* +0x0 */
    int cbParamCount; /* +0x4 */
    unsigned char aParams[4]; /* +0x8 */
};

struct tagGLlistcalls {
    tagGLlistcalls* pNext; /* +0x0 */
    unsigned int cbCalls; /* +0x4 */
    tagGLlistnode aNodes[1]; /* +0x8 */
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

struct tag_GLmaterial {
    float vAmbient[4]; /* +0x0 */
    float vDiffuse[4]; /* +0x10 */
    float vSpecular[4]; /* +0x20 */
    float vEmission[4]; /* +0x30 */
    float fShininess; /* +0x40 */
    float fAmbientIndex; /* +0x44 */
    float fDiffuseIndex; /* +0x48 */
    float fSpecularIndex; /* +0x4c */
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

struct tagGLtexname {
    unsigned char bAllocated; /* +0x0 */
    unsigned char bResident; /* +0x1 */
    float fPrioritize; /* +0x4 */
    unsigned int eDimension; /* +0x8 */
    int iTexBlock; /* +0xc */
    tag_GLtexture* pTex1D; /* +0x10 */
    tag_GLtexture* pTex2D; /* +0x14 */
    tag_GLtexture* pTexCube; /* +0x18 */
};

struct SECT_tdstListOfSOSectorsInActivityInteraction_ {
    HIE_tdstSuperObject_* hPointerOfSectorSO; /* +0x0 */
};

struct SECT_tdstListOfStaticLights_ {
    GLI_tdstLight_* hStaticLights; /* +0x0 */
};

struct tagGLlistdatas {
    tagGLlistdatas* pNext; /* +0x0 */
    int apData[3]; /* +0x4 */
};

union GEO_tduVSObject_ {
    GEO_tdstGeometricObject_* p_stGeometricObject; /* +0x0 */
    MOR_stMorphObject_* p_stMorphObject; /* +0x0 */
};

struct GEO_tdstTripledIndex_ {
    short a3_xIndex[3]; /* +0x0 */
};

struct SECT_tdstListOfSOSectorsInSoundInteraction_ {
    HIE_tdstSuperObject_* hPointerOfSectorSO; /* +0x0 */
    int lVolume; /* +0x4 */
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

struct tag_GLtexture {
    float vTexBorderColor[4]; /* +0x0 */
    unsigned int eDimension; /* +0x10 */
    unsigned int eTexFilterMin; /* +0x14 */
    unsigned int eTexFilterMag; /* +0x18 */
    unsigned int eTexWrapS; /* +0x1c */
    unsigned int eTexWrapT; /* +0x20 */
    int Image[7]; /* +0x24 */
    int iClutOffset; /* +0x40 */
    int iClutSize; /* +0x44 */
    int clut; /* +0x48 */
    unsigned char bClutUserMaintain; /* +0x4c */
};

struct MOR_stMorphObject_ {
    GEO_tdstGeometricObject_* hBaseObject; /* +0x0 */
    unsigned int ulNbVectors; /* +0x4 */
    MOR_stMorphVector_* d_stMorphVector; /* +0x8 */
};

struct tdstObjectsTablesList_ {
    tdstObjectsTableElement_* d_stObjectsTable; /* +0x0 */
    tdstObjectsTableElement_* d_stInitObjectsTable; /* +0x4 */
    unsigned short wNumberOfElement; /* +0x8 */
    unsigned short wZDxUsed; /* +0xa */
};

struct tagListData {
    unsigned int eMode; /* +0x0 */
    tagGLlistcalls* pCalls; /* +0x4 */
    tagGLlistdatas* pDatas; /* +0x8 */
    tagGLprimbuf* pPrimBufHead; /* +0xc */
    tagGLprimbuf* pPrimBufTail; /* +0x10 */
    float (*pDmaBuffer)[4]; /* +0x14 */
    unsigned int uiSDLSize; /* +0x18 */
    int pSDLIndices; /* +0x1c */
    unsigned int uiSDLIndicesSize; /* +0x20 */
    unsigned int uiSDLBits; /* +0x24 */
    unsigned long ModFlgs; /* +0x28 */
    unsigned char _extractor_padding_00[4]; /* implicitly added by extractor; +0x2c..0x2f */
    float (*pLastExecDmaBuffer)[4]; /* +0x30 */
    signed char ucSDLObjectReserveSize; /* +0x34 */
};

struct SCT_tdstListOfSoundEvent_ {
    HIE_tdstSuperObject_* hPointerOfSectorSO; /* +0x0 */
    _SND_tduRefEvt uSoundEvent; /* +0x4 */
};

struct tagGLtexblock {
    unsigned int nTexID : 10; /* bit 0, byte +0x0 */
    int nStart : 11; /* bit 10, byte +0x0 */
    int nLength : 11; /* bit 21, byte +0x0 */
};

struct ISI_tdstColor_ {
    short xRed; /* +0x0 */
    short xGreen; /* +0x2 */
    short xBlue; /* +0x4 */
    short xAlpha; /* +0x6 */
};

struct tagGsLoadImage {
    anon_17 gifTag; /* +0x0 */
    anon_28 bitbltbuf; /* +0x10 */
    long bitbltbufaddr; /* +0x18 */
    unsigned char _extractor_padding_00[4]; /* implicitly added by extractor; +0x1c..0x1f */
    anon_36 trxpos; /* +0x20 */
    long trxposaddr; /* +0x28 */
    unsigned char _extractor_padding_01[4]; /* implicitly added by extractor; +0x2c..0x2f */
    anon_41 trxreg; /* +0x30 */
    long trxregaddr; /* +0x38 */
    unsigned char _extractor_padding_02[4]; /* implicitly added by extractor; +0x3c..0x3f */
    anon_33 trxdir; /* +0x40 */
    long trxdiraddr; /* +0x48 */
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

struct tagGLtexindex {
    unsigned int nTexID : 10; /* bit 0, byte +0x0 */
    int nStart : 11; /* bit 10, byte +0x0 */
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

struct anon_31 {
    unsigned long pad00; /* +0x0 */
};

struct tagGsSetTex {
    anon_17 gifTag; /* +0x0 */
    anon_31 texflush; /* +0x10 */
    long texflushaddr; /* +0x18 */
    unsigned char _extractor_padding_00[4]; /* implicitly added by extractor; +0x1c..0x1f */
    anon_7 tex0; /* +0x20 */
    long tex0addr; /* +0x28 */
    unsigned char _extractor_padding_01[4]; /* implicitly added by extractor; +0x2c..0x2f */
    anon_13 tex1; /* +0x30 */
    long tex1addr; /* +0x38 */
    unsigned char _extractor_padding_02[4]; /* implicitly added by extractor; +0x3c..0x3f */
    anon_2 miptbp1; /* +0x40 */
    long miptbp1addr; /* +0x48 */
    unsigned char _extractor_padding_03[4]; /* implicitly added by extractor; +0x4c..0x4f */
    anon_8 miptbp2; /* +0x50 */
    long miptbp2addr; /* +0x58 */
    unsigned char _extractor_padding_04[4]; /* implicitly added by extractor; +0x5c..0x5f */
    anon_39 clamp; /* +0x60 */
    long clampaddr; /* +0x68 */
};

struct PO_tdstPhysicalObject_ {
    GEO_tdstVisualSet_* _hVisualSet; /* +0x0 */
    tdstPhysicalCollSet_* _hCollideSet; /* +0x4 */
    COL_tdstBoundingSphere_* _hVisualBoundingVolume; /* +0x8 */
    COL_tdstBoundingSphere_* _hCollideBoundingVolume; /* +0xc */
};

struct tagListNodeSingle {
    unsigned int nIndex; /* +0x0 */
    tagListData* pData; /* +0x4 */
};

struct HIE_tdstModifierObject_ {
    GEO_tdstGeometricObject_* p_stGeometricObject; /* +0x0 */
    int lMulIntensity; /* +0x4 */
    int lAddIntensity; /* +0x8 */
};

struct tdstNodeCamera_ {
    HIE_tdstSuperObject_* p_stSuperObjectCamera; /* +0x0 */
    tdstNodeCamera_* hNextBrotherDyn; /* +0x4 */
    tdstNodeCamera_* hPrevBrotherDyn; /* +0x8 */
    LST2_tdstAnchorTotdxHandleToNodeCameraDyn* hFatherDyn; /* +0xc */
};

struct tdstPLA_DeformationLink_ {
    unsigned short wChannel1; /* +0x0 */
    unsigned short wBorder1; /* +0x2 */
    unsigned short wChannel2; /* +0x4 */
    unsigned short wBorder2; /* +0x6 */
};

struct tagListNode {
    tagListNode* pNext; /* +0x0 */
    unsigned int nIndex; /* +0x4 */
    int iSize; /* +0x8 */
    int apData[1]; /* +0xc */
};

struct tdstLanguageStructure_ {
    char szLanguageCode[20]; /* +0x0 */
    char szLanguageText[20]; /* +0x14 */
};

struct _GL_BUFFERINFO {
    int iFrameBufferDepth; /* +0x0 */
    int iDepthBufferDepth; /* +0x4 */
    int iStencilBufferDepth; /* +0x8 */
    int iAccumBufferDepth; /* +0xc */
    int iAuxBufferBase; /* +0x10 */
    int iAuxBufferSize; /* +0x14 */
    int iAuxBufferPSM; /* +0x18 */
    int iAccumBufferBase; /* +0x1c */
    int iAccumBufferPSM; /* +0x20 */
    unsigned char bDoubleBufferMode; /* +0x24 */
    unsigned char bPlainBufferMode; /* +0x25 */
    int iScreenWidth; /* +0x28 */
    int iScreenHeight; /* +0x2c */
    int iSecondBufferWidth; /* +0x30 */
    int iSecondBufferHeight; /* +0x34 */
    int iSecondBufferWidthPower; /* +0x38 */
    int iSecondBufferHeightPower; /* +0x3c */
    int iSecondBufferBase; /* +0x40 */
    int iSecondBufferZBase; /* +0x44 */
    int iSecondBufferPSM; /* +0x48 */
    int iSecondBufferZPSM; /* +0x4c */
    int iSuperWidth; /* +0x50 */
    int iSuperHeight; /* +0x54 */
};

struct tagGLlistpool {
    unsigned int nFreeIndex; /* +0x0 */
    tagListNodeSingle aSingleIndex[64]; /* +0x4 */
    tagListNode* pFirstNode; /* +0x204 */
    tagListNode* pLastNode; /* +0x208 */
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

struct tagGLcontext {
    unsigned int nEnableBits; /* +0x0 */
    float fPointSize; /* +0x4 */
    int iLineFactor; /* +0x8 */
    unsigned short nLineMask; /* +0xc */
    float fLineWidth; /* +0x10 */
    unsigned int eCullFaceMode; /* +0x14 */
    unsigned int eFrontFaceMode; /* +0x18 */
    unsigned int ePolygonMode[2]; /* +0x1c */
    unsigned char aPolygonMask[128]; /* +0x24 */
    unsigned int eClippingFunction; /* +0xa4 */
    unsigned int eSPRMode; /* +0xa8 */
    unsigned char bSPRSynchronization; /* +0xac */
    unsigned int eTexConvMode; /* +0xb0 */
    unsigned int eClutConvMode; /* +0xb4 */
    unsigned int eTexUserMaintainMode; /* +0xb8 */
    unsigned int uiMotionBlurIntensity; /* +0xbc */
    unsigned short iAccumDepth; /* +0xc0 */
    unsigned char bAlphaChannelReduce; /* +0xc2 */
    unsigned int uiCurrentDmaBuffer; /* +0xc4 */
    unsigned short usDontUpdateBits; /* +0xc8 */
    unsigned int uiFastPathBits; /* +0xcc */
    unsigned int uiDmaOmitDataBits; /* +0xd0 */
    unsigned int uiBoundingSphereBits; /* +0xd4 */
    unsigned int uiStaticDisplayListMaxSize; /* +0xd8 */
    unsigned int uiStaticDisplayListBits; /* +0xdc */
    signed char ucSDLObjectReserveSize; /* +0xe0 */
    float vScissorBox[4]; /* +0xf0 */
    float fIndexClearValue; /* +0x100 */
    unsigned int eAlphaTestFunc; /* +0x104 */
    float fAlphaTestRef; /* +0x108 */
    unsigned char _extractor_padding_00[4]; /* implicitly added by extractor; +0x10c..0x10f */
    float vAccumClearValue[4]; /* +0x110 */
    unsigned int eBlendSrcFactor; /* +0x120 */
    unsigned int eBlendDstFactor; /* +0x124 */
    unsigned int eDrawBuffer; /* +0x128 */
    unsigned int eBufferReadMode; /* +0x12c */
    float vColorClearValue[4]; /* +0x130 */
    unsigned char abColorMask[4]; /* +0x140 */
    unsigned int eDepthFunc; /* +0x144 */
    float fDepthClearValue; /* +0x148 */
    unsigned char eDepthWriteMask; /* +0x14c */
    unsigned int eStencilFunc; /* +0x150 */
    int iStencilRef; /* +0x154 */
    unsigned int nStencilValueMask; /* +0x158 */
    unsigned int nStencilWriteMask; /* +0x15c */
    unsigned int eOpFail; /* +0x160 */
    unsigned int eOpZFail; /* +0x164 */
    unsigned int eOpZPass; /* +0x168 */
    int iStencilClearValue; /* +0x16c */
    unsigned int eLogicOpCode; /* +0x170 */
    unsigned int nLightBits; /* +0x174 */
    unsigned int bPointLighting; /* +0x178 */
    unsigned int nTextureEnableBits; /* +0x17c */
    tag_GLtexture_set TextureSet[2]; /* +0x180 */
    tag_GLtexture_set* pCurTexture; /* +0x240 */
    unsigned char _extractor_padding_01[12]; /* implicitly added by extractor; +0x244..0x24f */
    tagGsLoadImage stGsLoadImage; /* +0x250 */
    tagGsSetTex astGsSetTex[2]; /* +0x2a0 */
    tagGsSetTex* pstCurGsSetTex; /* +0x380 */
    unsigned int anCurTexName1D[2]; /* +0x384 */
    unsigned int anCurTexName2D[2]; /* +0x38c */
    unsigned int nCurTexNameCube; /* +0x394 */
    tagGLtexname aTexName[512]; /* +0x398 */
    unsigned int eTexLastBindTarget; /* +0x3b98 */
    unsigned int nTexLastBindName; /* +0x3b9c */
    int iMaxTexBlockCount; /* +0x3ba0 */
    tagGLtexblock aBlockMap[604]; /* +0x3ba4 */
    unsigned int nTexMemBegin; /* +0x4514 */
    unsigned int nTexMemEnd; /* +0x4518 */
    int aTexLevelCount[10]; /* +0x451c */
    tagGLtexindex aTexLevelIndex[1203]; /* +0x4544 */
    int iClutSize; /* +0x5810 */
    unsigned char bClutResident; /* +0x5814 */
    int clut; /* +0x5818 */
    unsigned char bMatrixChanged; /* +0x581c */
    unsigned char bBSParamChanged; /* +0x581d */
    unsigned char bLightsChanged; /* +0x581e */
    unsigned char bMaterialChanged; /* +0x581f */
    unsigned char bFogChanged; /* +0x5820 */
    unsigned char bCullfaceChanged; /* +0x5821 */
    unsigned int eOldBeginMode; /* +0x5824 */
    unsigned char abTex1DChanged[2]; /* +0x5828 */
    unsigned char abTex2DChanged[2]; /* +0x582a */
    unsigned char bTexCubeChanged; /* +0x582c */
    int pfnLastCall; /* +0x5830 */
    unsigned int nEvaluatorBits; /* +0x5834 */
    unsigned char bNeedNormal; /* +0x5838 */
    tag_GLlight Lights[8]; /* +0x5840 */
    unsigned char bLocalViewer; /* +0x5bc0 */
    unsigned char bLightModelTwoSide; /* +0x5bc1 */
    float vAmbient[4]; /* +0x5bd0 */
    unsigned int eColorControl; /* +0x5be0 */
    unsigned char bLightModelDiffuseOnly; /* +0x5be4 */
    tag_GLmaterial Materials[2]; /* +0x5bf0 */
    unsigned int eColorMaterialFace; /* +0x5c90 */
    unsigned int eColorMaterialMode; /* +0x5c94 */
    unsigned int eShadeModel; /* +0x5c98 */
    unsigned int eFogMode; /* +0x5c9c */
    int ivFogColor[4]; /* +0x5ca0 */
    float fFogDensity; /* +0x5cb0 */
    float fFogLinearStart; /* +0x5cb4 */
    float fFogLinearEnd; /* +0x5cb8 */
    float fFogIndex; /* +0x5cbc */
    unsigned int eHintPerspectiveCorrection; /* +0x5cc0 */
    unsigned int eHintSmoothPoint; /* +0x5cc4 */
    unsigned int eHintSmoothLine; /* +0x5cc8 */
    unsigned int eHintSmoothPolygon; /* +0x5ccc */
    unsigned int eHintFog; /* +0x5cd0 */
    unsigned int uiListBase; /* +0x5cd4 */
    tagListData* pCurListData; /* +0x5cd8 */
    tagGLlistcalls* pCurListCalls; /* +0x5cdc */
    tagGLlistcalls* pPreListCalls; /* +0x5ce0 */
    tagGLprimbuf* pCurPrimBuf; /* +0x5ce4 */
    anon_1* pCurParamBegin; /* +0x5ce8 */
    tagGLprimbuf** ppCurPrimBufHead; /* +0x5cec */
    float (*pCurListVData)[4]; /* +0x5cf0 */
    int pCurListVCode; /* +0x5cf4 */
    int pCurListTexUnit; /* +0x5cf8 */
    tagGLlistpool ListPool; /* +0x5cfc */
    unsigned int nClientEnableBits; /* +0x5f08 */
    tagGLArrayInfo VertexArray; /* +0x5f0c */
    tagGLArrayInfo ColorArray[2]; /* +0x5f1c */
    tagGLArrayInfo NormalArray; /* +0x5f3c */
    tagGLArrayInfo TexArray[2]; /* +0x5f4c */
    tagGLArrayInfo IndexArray; /* +0x5f6c */
    tagGLArrayInfo EdgeFlagArray; /* +0x5f7c */
    unsigned int iCurClientTextureSet; /* +0x5f8c */
    unsigned int iFrameCount; /* +0x5f90 */
    unsigned int iDepthBuffer; /* +0x5f94 */
    unsigned int iDepthBufferBitDepth; /* +0x5f98 */
    unsigned int iFrameBufferBitDepth; /* +0x5f9c */
    unsigned int iFrameBuffer0; /* +0x5fa0 */
    unsigned int iFrameBuffer1; /* +0x5fa4 */
    unsigned int iFrameBufferFront; /* +0x5fa8 */
    unsigned int iFrameBufferBack; /* +0x5fac */
    int iPackAlignment; /* +0x5fb0 */
    unsigned char bFrameMode; /* +0x5fb4 */
    int iMipMapCoeff; /* +0x5fb8 */
    int iAlignMask; /* +0x5fbc */
    unsigned char bMapColor; /* +0x5fc0 */
    unsigned char bMapStencil; /* +0x5fc1 */
    int iIndexShift; /* +0x5fc4 */
    int iIndexOffset; /* +0x5fc8 */
    float fRedBias; /* +0x5fcc */
    float fRedScale; /* +0x5fd0 */
    float fGreenBias; /* +0x5fd4 */
    float fGreenScale; /* +0x5fd8 */
    float fBlueBias; /* +0x5fdc */
    float fBlueScale; /* +0x5fe0 */
    float fAlphaBias; /* +0x5fe4 */
    float fAlphaScale; /* +0x5fe8 */
    float fDepthBias; /* +0x5fec */
    float fDepthScale; /* +0x5ff0 */
    float fPixelZoomX; /* +0x5ff4 */
    float fPixelZoomY; /* +0x5ff8 */
    unsigned int nClipBits; /* +0x5ffc */
    int iMaxClipPlanes; /* +0x6000 */
    unsigned char _extractor_padding_02[12]; /* implicitly added by extractor; +0x6004..0x600f */
    float avClipPlane[6][4]; /* +0x6010 */
    unsigned int eMatrixMode; /* +0x6070 */
    float (*pCurMatrix)[4][4]; /* +0x6074 */
    float (*pCurStack)[4][4]; /* +0x6078 */
    int piCurStackDepth; /* +0x607c */
    float ViewOrg[2]; /* +0x6080 */
    float ViewPort[4]; /* +0x6090 */
    float DepthRange[2]; /* +0x60a0 */
    float vacurColor[2][4]; /* +0x60b0 */
    float (*pvcurColor)[4]; /* +0x60d0 */
    unsigned char _extractor_padding_03[12]; /* implicitly added by extractor; +0x60d4..0x60df */
    float vcurNormal[4]; /* +0x60e0 */
    float vacurTexCoords[2][4]; /* +0x60f0 */
    unsigned int iCurTextureSet; /* +0x6110 */
    float (*pvcurTextCoord)[4]; /* +0x6114 */
    unsigned char bFinalCompile; /* +0x6118 */
    float valistColor[2][4]; /* +0x6120 */
    float (*pvlistColor)[4]; /* +0x6140 */
    unsigned char _extractor_padding_04[12]; /* implicitly added by extractor; +0x6144..0x614f */
    float vlistNormal[4]; /* +0x6150 */
    float valistTexCoords[2][4]; /* +0x6160 */
    unsigned int ilistTexSet; /* +0x6180 */
    float (*pvlistTexCoord)[4]; /* +0x6184 */
    unsigned char bRasterPosValid; /* +0x6188 */
    float fRasterPos[4]; /* +0x618c */
    float fRasterDistance; /* +0x619c */
    float fRasterColor[2][4]; /* +0x61a0 */
    float RasterMultiTexCoords[2][4]; /* +0x61c0 */
    float (*pvRasterTexCoord)[4]; /* +0x61e0 */
    unsigned char bEdgeFlag; /* +0x61e4 */
    float mFrustumNormal[4][4]; /* +0x61f0 */
    float mGuardBandNormal[4][4]; /* +0x6230 */
    float vZNearFar[4]; /* +0x6270 */
    float vObjectBS[4]; /* +0x6280 */
    float (*pfvPackaeBSs)[4]; /* +0x6290 */
    int iPackageBSIndex; /* +0x6294 */
    float faObjectBoundingBox[6]; /* +0x6298 */
    float ModelViewMatrix[4][4]; /* +0x62b0 */
    float NormalMatrix[4][4]; /* +0x62f0 */
    unsigned int nModelViewStackDepth; /* +0x6330 */
    unsigned char _extractor_padding_05[12]; /* implicitly added by extractor; +0x6334..0x633f */
    float ModelViewStack[16][4][4]; /* +0x6340 */
    float ProjectionMatrix[4][4]; /* +0x6740 */
    float GuardBandProjectionMatrix[4][4]; /* +0x6780 */
    unsigned int nProjectionStackDepth; /* +0x67c0 */
    unsigned char _extractor_padding_06[12]; /* implicitly added by extractor; +0x67c4..0x67cf */
    float ProjectionStack[4][4][4]; /* +0x67d0 */
    float NearFarStack[4][2]; /* +0x68d0 */
    float TextureMatrix[2][4][4]; /* +0x68f0 */
    unsigned int nTextureStackDepths[2]; /* +0x6970 */
    float TextureStacks[2][4][4][4]; /* +0x6980 */
    float (*pTextureMatrix)[4][4]; /* +0x6b80 */
    int pnTextureStackDepth; /* +0x6b84 */
    float (*pTextureStack)[4][4]; /* +0x6b88 */
    unsigned int eBeginMode; /* +0x6b8c */
    unsigned char bInBeginEndPair; /* +0x6b90 */
    unsigned char bInDisplayListExecution; /* +0x6b91 */
    int iBufLimit; /* +0x6b94 */
    int iBufCount; /* +0x6b98 */
    float (*pVBuf)[4]; /* +0x6b9c */
    float (*pCBuf)[4]; /* +0x6ba0 */
    float (*pNBuf)[4]; /* +0x6ba4 */
    float (*pTBuf)[4]; /* +0x6ba8 */
    float (*pCBuf_b)[4]; /* +0x6bac */
    float (*pTBuf_b)[4]; /* +0x6bb0 */
    float (*pVIFDMABuf)[4]; /* +0x6bb4 */
    float (*pVIFDMABufUnaligned)[4]; /* +0x6bb8 */
    float (*pVIFInBuf)[4]; /* +0x6bbc */
    float (*pVIFOutBuf)[4]; /* +0x6bc0 */
    float (*pVIFIBufTail)[4]; /* +0x6bc4 */
    float (*pVIFOBufTail)[4]; /* +0x6bc8 */
    int iLightModel; /* +0x6bcc */
    _sceDmaTag* pVU1_DMA_parameters; /* +0x6bd0 */
    _sceDmaTag* pVU1_DMA_buf0; /* +0x6bd4 */
    _sceDmaTag* pVU1_DMA_buf1; /* +0x6bd8 */
    float (*pmClipping)[4][4]; /* +0x6bdc */
    float (*pmNormal)[4][4]; /* +0x6be0 */
    float (*pmClippingScreen)[4][4]; /* +0x6be4 */
    float (*pmLocalScreen)[4][4]; /* +0x6be8 */
    float (*pmModelView)[4][4]; /* +0x6bec */
    float (*pvClampLimit)[4]; /* +0x6bf0 */
    int (*pClippingFlags)[4]; /* +0x6bf4 */
    anon_17* pGifTagFan; /* +0x6bf8 */
    float (*pmD)[4][4]; /* +0x6bfc */
    float (*pmVP)[4][4]; /* +0x6c00 */
    float (*pmS)[4][4]; /* +0x6c04 */
    float (*pmh)[4][4]; /* +0x6c08 */
    float (*pvAmbient)[4]; /* +0x6c0c */
    float (*pvEmission)[4]; /* +0x6c10 */
    float (*pvScreenScale)[4]; /* +0x6c14 */
    float (*pvColorRange)[4]; /* +0x6c18 */
    int pfAlpha; /* +0x6c1c */
    int pfShininess; /* +0x6c20 */
    int pnColorMatMasks; /* +0x6c24 */
    int pbFogging; /* +0x6c28 */
    int peFogMode; /* +0x6c2c */
    int pfFogDensity; /* +0x6c30 */
    int pfFogLinearStart; /* +0x6c34 */
    int pfFogLinearEnd; /* +0x6c38 */
    int pbTriangleFan; /* +0x6c3c */
    int pnClipMask; /* +0x6c40 */
    int piClipStep; /* +0x6c44 */
    int pbNormalize; /* +0x6c48 */
    int piReturnAddress; /* +0x6c4c */
    int piEntryAddress; /* +0x6c50 */
    int peClippingMode; /* +0x6c54 */
    int peUseClippingMode; /* +0x6c58 */
    anon_17* pGifTagBuf0; /* +0x6c5c */
    anon_17* pGifTagBuf1; /* +0x6c60 */
    int iCurBuf; /* +0x6c64 */
    float (*pVBuf0)[4]; /* +0x6c68 */
    float (*pNBuf0)[4]; /* +0x6c6c */
    float (*pCBuf0)[4]; /* +0x6c70 */
    float (*pTBuf0)[4]; /* +0x6c74 */
    float (*pCBuf0_b)[4]; /* +0x6c78 */
    float (*pTBuf0_b)[4]; /* +0x6c7c */
    float (*pVBuf1)[4]; /* +0x6c80 */
    float (*pNBuf1)[4]; /* +0x6c84 */
    float (*pCBuf1)[4]; /* +0x6c88 */
    float (*pTBuf1)[4]; /* +0x6c8c */
    float (*pCBuf1_b)[4]; /* +0x6c90 */
    float (*pTBuf1_b)[4]; /* +0x6c94 */
    tagstVIFCode* pMSCAL; /* +0x6c98 */
    unsigned char _extractor_padding_07[4]; /* implicitly added by extractor; +0x6c9c..0x6c9f */
    unsigned char VU1Package[10000]; /* +0x6ca0 */
};

unsigned int GLI_g_ProjMatrixHasChanged;
int GLI_g_HasLightMap;
unsigned int GLI_g_CurrentStage;
int GLI_g_LastSuperObj;
int GLI_g_bWideScreenMode;
int g_LevelJeff;
int g_bDrawingBlackFrame;
int g_bUseAGOLights;
float GlobalAlphaVal;
unsigned int GLI_g_UseExternalVertexArray;
int GLI_g_DrawingSpriteGenerator;
int g_p_stRawRLIsForThisObject;
unsigned int GLI_g_ProjectionMode;
unsigned int GLI_g_NumberOfShadowVolumes;
unsigned int GLI_g_GlobalShadowNextPointSavedMax;
unsigned int MustStopToSeeStencil;
float g_LeftHandedIdentityMatrix[16];
unsigned int NbTrianglesToDisplay;
unsigned char ValMinus;
unsigned char ValPlus;
int bDrawShadow;
unsigned int GLI_g_TextureMatrixIsIdentity;
unsigned int GLI_g_NbSpriteGensMax;
float GLI_g_SpriteGenNorme;
float GLI_g_fCurrentCameraRatio;
float GLI_g_fCurrentCameraxAngle;
unsigned int GLI_g_ListOfDMADL_Current;
int BDisplayRay;
int g_b_IsRaining;
unsigned int GLI_g_NbSimpleShadows;
unsigned int GLI_g_SimpleShadowBegin;
int GLI_g_SimpleShadowMaterial;
float GLI_g_SimpleShadowsUVs[384][4];
float GLI_g_SimpleShadowsRLIs[384][4];
float GLI_g_SimpleShadowsPos[384][4];
unsigned int GLI_g_ListOfDMADL[100];
Triangle_Disp_ TrianglesToDisplay[1000];
unsigned int GLI_g_GlobalShadowNextPointSaved;
GLI_g_PS2GL_ShadowVolume_ GLI_g_TheShadowVolumes[2];
unsigned int GLI_g_xSaveDrawMsk;
MTH3D_tdstVector_ GLI_g_stYVect;
MTH3D_tdstVector_ GLI_g_stXVect;
int g_p_stCurrentViewport;
tagGScontext g_gsContext;
tagGLcontext g_PS2glContext;
unsigned int SCT_g_DrawingMirrored;
float GLI_g_NegVect[4];
int GLI_g_HasVertexTransparency;
float GLI_BIG_GLOBALS_xGlobalAlpha;
void GLI_vAddShadowObject(float* p1, float* p2, float* p3, float* p4, GLI_tdstMaterial_* ShadowMat);
int GLI_BIG_GLOBALS_p_stObj;
unsigned int GLI_g_NbTransparentElements;
unsigned int NbElementComputed;
int YRES;
int XRES;
float YRESf;
float XRESf;
float GLI_g_NearValue;
float GLI_g_FarValue;
unsigned int g_a2_ulSize[2];
int g_bCinemascopeOn;
int GLI_BIG_GLOBALS_hCurrentMaterial;
float light_ambient0[4];
char GLI_g_StereoVisionMode;
int GLI_g_ChristianSlaterMode;
int GLI_g_hVAContainer;
int GLI_g_CurrentSpriteGenFrame;
int GLI_g_CurrentSpriteGenIndex;
int Global_pCurrentActor;
int GLI_g_CurrentShadowVertexArrayBack;
int GLI_g_CurrentShadowVertexArrayFront;
int GLI_g_GlobalShadowColorArray;
unsigned int GLI_g_GlobalShadowNextPointBack;
unsigned int GLI_g_GlobalShadowNextPointFront;
float GLI_g_SDL_pNonInterpolatedCameraMatrix[4][4];
_GL_BUFFERINFO g_stBufferInfo;
int PS2glAllocator64;
int PS2glLiberator;
tdstEngineStructure_ g_stEngineStructure;

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\u_draw.c lines 107–110 */
/* addr: 0x002acd90  size: 96 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 107
 *   +0x0004 -> line 108
 *   +0x0008 -> line 107
 *   +0x000c -> line 108
 *   +0x004c -> line 109
 *   +0x0054 -> line 110
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void GLD_vCloseErr(void)
{
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\u_draw.c lines 1751–1959 */
/* addr: 0x002acdf0  size: 2388 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1751
 *   +0x0048 -> line 1757
 *   +0x0050 -> line 1761
 *   +0x0054 -> line 1773
 *   +0x0058 -> line 1761
 *   +0x005c -> line 1773
 *   +0x0064 -> line 1774
 *   +0x0070 -> line 1775
 *   +0x007c -> line 1778
 *   +0x008c -> line 1780
 *   +0x0090 -> line 1781
 *   +0x0098 -> line 1783
 *   +0x009c -> line 1784
 *   +0x00a4 -> line 1793
 *   +0x00ac -> line 1794
 *   +0x00b4 -> line 1795
 *   +0x00c0 -> line 1797
 *   +0x00cc -> line 1799
 *   +0x00d8 -> line 1801
 *   +0x00dc -> line 1803
 *   +0x00e8 -> line 1805
 *   +0x00fc -> line 1806
 *   +0x0104 -> line 1808
 *   +0x0108 -> line 1809
 *   +0x0118 -> line 1811
 *   +0x0134 -> line 1813
 *   +0x0140 -> line 1814
 *   +0x0148 -> line 1821
 *   +0x0150 -> line 1819
 *   +0x0158 -> line 1822
 *   +0x015c -> line 1823
 *   +0x0164 -> line 1826
 *   +0x016c -> line 1827
 *   +0x0170 -> line 1829
 *   +0x0174 -> line 1830
 *   +0x018c -> line 1832
 *   +0x0194 -> line 1833
 *   +0x0198 -> line 1835
 *   +0x01a0 -> line 1837
 *   +0x01a8 -> line 1839
 *   +0x01b0 -> line 1841
 *   +0x01f0 -> line 1844
 *   +0x01f4 -> line 1841
 *   +0x01f8 -> line 1844
 *   +0x01fc -> line 1841
 *   +0x0200 -> line 1844
 *   +0x024c -> line 1845
 *   +0x0254 -> line 1849
 *   +0x0260 -> line 1853
 *   +0x0264 -> line 1850
 *   +0x0268 -> line 1853
 *   +0x0270 -> line 1850
 *   +0x0274 -> line 1854
 *   +0x028c -> line 1853
 *   +0x0290 -> line 1854
 *   +0x02a4 -> line 1857
 *   +0x02a8 -> line 1854
 *   +0x02b8 -> line 1853
 *   +0x02bc -> line 1854
 *   +0x02c0 -> line 1853
 *   +0x02c4 -> line 1854
 *   +0x0310 -> line 1857
 *   +0x0318 -> line 1860
 *   +0x0328 -> line 1865
 *   +0x032c -> line 1868
 *   +0x0330 -> line 1872
 *   +0x0334 -> line 1865
 *   +0x033c -> line 1868
 *   +0x0340 -> line 1866
 *   +0x0344 -> line 1867
 *   +0x0348 -> line 1868
 *   +0x034c -> line 1874
 *   +0x0350 -> line 1872
 *   +0x035c -> line 1873
 *   +0x0360 -> line 1876
 *   +0x0364 -> line 1874
 *   +0x0370 -> line 1875
 *   +0x0374 -> line 1879
 *   +0x0378 -> line 1876
 *   +0x0384 -> line 1877
 *   +0x0388 -> line 1880
 *   +0x03a0 -> line 1881
 *   +0x03b8 -> line 1882
 *   +0x03d0 -> line 1883
 *   +0x03e8 -> line 1884
 *   +0x03f4 -> line 1891
 *   +0x03f8 -> line 1884
 *   +0x0404 -> line 1885
 *   +0x0408 -> line 1886
 *   +0x040c -> line 1887
 *   +0x0410 -> line 1890
 *   +0x0414 -> line 1891
 *   +0x0420 -> line 1892
 *   +0x0438 -> line 1893
 *   +0x0450 -> line 1894
 *   +0x0468 -> line 1895
 *   +0x0470 -> line 1903
 *   +0x0474 -> line 1895
 *   +0x0488 -> line 1896
 *   +0x048c -> line 1897
 *   +0x0490 -> line 1903
 *   +0x04a4 -> line 1905
 *   +0x04b8 -> line 1906
 *   +0x04c4 -> line 1907
 *   +0x04ec -> line 1909
 *   +0x0514 -> line 1910
 *   +0x0520 -> line 1911
 *   +0x0548 -> line 1913
 *   +0x0570 -> line 1914
 *   +0x057c -> line 1915
 *   +0x05a8 -> line 1917
 *   +0x05b0 -> line 1920
 *   +0x05cc -> line 1921
 *   +0x05d8 -> line 1922
 *   +0x0600 -> line 1924
 *   +0x060c -> line 1925
 *   +0x0634 -> line 1927
 *   +0x0640 -> line 1928
 *   +0x066c -> line 1929
 *   +0x0670 -> line 1928
 *   +0x0674 -> line 1931
 *   +0x0688 -> line 1933
 *   +0x0690 -> line 1935
 *   +0x0698 -> line 1936
 *   +0x0784 -> line 1937
 *   +0x078c -> line 1939
 *   +0x0790 -> line 1937
 *   +0x0798 -> line 1940
 *   +0x079c -> line 1937
 *   +0x07a4 -> line 1940
 *   +0x07c4 -> line 1942
 *   +0x07ec -> line 1945
 *   +0x07f4 -> line 1948
 *   +0x07fc -> line 1951
 *   +0x0804 -> line 1952
 *   +0x08ec -> line 1953
 *   +0x08f4 -> line 1955
 *   +0x08fc -> line 1956
 *   +0x0904 -> line 1957
 *   +0x090c -> line 1959
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void GLI_v_DrawMirrorSuperObject(GLD_tdstViewportAttributes_* p_stVpt, HIE_tdstSuperObject_* _hSO)
{
    unsigned char zTst;
    float MaxV;
    float MaxU;
    float MinV;
    float MinU;
    unsigned int U1;
    unsigned int I3;
    unsigned int I2;
    unsigned int I1;
    unsigned int face;
    float a16_fWorldMatrix[16];
    GEO_tdstElementIndexedTriangles_* p_stEIT;
    int j;
    GEO_tdstGeometricObject_* pObj;
    short i;
    short xNbLodDefinitions;
    GEO_tdstVisualSet_* hVisualSet;
    float fADC;
    PO_tdstPhysicalObject_* PO;
    IPO_tdstInstanciatedPhysicalObject_* hIPO;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\u_draw.c lines 1665–1748 */
/* addr: 0x002ad750  size: 952 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1665
 *   +0x0004 -> line 1666
 *   +0x0008 -> line 1665
 *   +0x000c -> line 1666
 *   +0x0014 -> line 1668
 *   +0x001c -> line 1672
 *   +0x0028 -> line 1675
 *   +0x0030 -> line 1676
 *   +0x0038 -> line 1682
 *   +0x003c -> line 1683
 *   +0x0044 -> line 1684
 *   +0x0048 -> line 1687
 *   +0x0050 -> line 1689
 *   +0x0054 -> line 1691
 *   +0x0058 -> line 1693
 *   +0x005c -> line 1694
 *   +0x0060 -> line 1695
 *   +0x00a4 -> line 1696
 *   +0x00a8 -> line 1697
 *   +0x00ac -> line 1699
 *   +0x00b8 -> line 1701
 *   +0x00c0 -> line 1702
 *   +0x00c8 -> line 1705
 *   +0x00d0 -> line 1707
 *   +0x00d8 -> line 1709
 *   +0x00e0 -> line 1711
 *   +0x00e8 -> line 1713
 *   +0x00f0 -> line 1715
 *   +0x00f8 -> line 1718
 *   +0x0100 -> line 1723
 *   +0x0108 -> line 1725
 *   +0x0110 -> line 1728
 *   +0x0114 -> line 1729
 *   +0x011c -> line 1732
 *   +0x0124 -> line 1734
 *   +0x012c -> line 1736
 *   +0x0134 -> line 1737
 *   +0x0174 -> line 1738
 *   +0x0178 -> line 1737
 *   +0x017c -> line 1738
 *   +0x0180 -> line 1737
 *   +0x01c8 -> line 1738
 *   +0x0224 -> line 1739
 *   +0x0230 -> line 1738
 *   +0x0254 -> line 1739
 *   +0x025c -> line 1740
 *   +0x02b4 -> line 1741
 *   +0x02bc -> line 1743
 *   +0x03a0 -> line 1745
 *   +0x03a8 -> line 1748
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void GLI_DRV_SendAllTransparentEITs(void)
{
    unsigned char zTst;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\u_draw.c lines 1576–1636 */
/* addr: 0x002adb10  size: 856 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1576
 *   +0x000c -> line 1580
 *   +0x0018 -> line 1582
 *   +0x001c -> line 1583
 *   +0x0024 -> line 1584
 *   +0x002c -> line 1585
 *   +0x0030 -> line 1586
 *   +0x0034 -> line 1585
 *   +0x0038 -> line 1586
 *   +0x003c -> line 1585
 *   +0x0044 -> line 1586
 *   +0x0048 -> line 1585
 *   +0x0050 -> line 1586
 *   +0x0054 -> line 1585
 *   +0x0060 -> line 1586
 *   +0x0064 -> line 1585
 *   +0x0070 -> line 1586
 *   +0x0074 -> line 1585
 *   +0x00a0 -> line 1586
 *   +0x00a8 -> line 1588
 *   +0x00b0 -> line 1589
 *   +0x00b8 -> line 1591
 *   +0x010c -> line 1592
 *   +0x0114 -> line 1594
 *   +0x0118 -> line 1598
 *   +0x011c -> line 1594
 *   +0x0124 -> line 1596
 *   +0x0128 -> line 1598
 *   +0x0138 -> line 1594
 *   +0x0144 -> line 1596
 *   +0x014c -> line 1598
 *   +0x0150 -> line 1596
 *   +0x0154 -> line 1598
 *   +0x0164 -> line 1599
 *   +0x0190 -> line 1600
 *   +0x01bc -> line 1601
 *   +0x01e8 -> line 1603
 *   +0x01f8 -> line 1605
 *   +0x01fc -> line 1607
 *   +0x0200 -> line 1605
 *   +0x020c -> line 1607
 *   +0x0214 -> line 1611
 *   +0x0218 -> line 1624
 *   +0x0220 -> line 1611
 *   +0x0224 -> line 1612
 *   +0x0228 -> line 1613
 *   +0x022c -> line 1615
 *   +0x0230 -> line 1616
 *   +0x0234 -> line 1618
 *   +0x0238 -> line 1619
 *   +0x023c -> line 1621
 *   +0x0240 -> line 1622
 *   +0x0244 -> line 1611
 *   +0x0250 -> line 1612
 *   +0x0254 -> line 1611
 *   +0x0258 -> line 1613
 *   +0x025c -> line 1611
 *   +0x0260 -> line 1615
 *   +0x0264 -> line 1611
 *   +0x0268 -> line 1616
 *   +0x026c -> line 1618
 *   +0x0270 -> line 1619
 *   +0x0274 -> line 1621
 *   +0x0278 -> line 1622
 *   +0x027c -> line 1612
 *   +0x0284 -> line 1613
 *   +0x0288 -> line 1615
 *   +0x028c -> line 1616
 *   +0x0290 -> line 1618
 *   +0x0294 -> line 1611
 *   +0x0298 -> line 1619
 *   +0x029c -> line 1612
 *   +0x02a0 -> line 1621
 *   +0x02a4 -> line 1622
 *   +0x02a8 -> line 1627
 *   +0x02ac -> line 1612
 *   +0x02b0 -> line 1613
 *   +0x02b4 -> line 1615
 *   +0x02b8 -> line 1613
 *   +0x02bc -> line 1615
 *   +0x02c8 -> line 1616
 *   +0x02d8 -> line 1618
 *   +0x02e8 -> line 1619
 *   +0x02f8 -> line 1621
 *   +0x0308 -> line 1622
 *   +0x0318 -> line 1624
 *   +0x0324 -> line 1625
 *   +0x032c -> line 1627
 *   +0x0334 -> line 1630
 *   +0x033c -> line 1632
 *   +0x0340 -> line 1630
 *   +0x0348 -> line 1636
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void GLI_vDisplayAllShadows(void)
{
    float Temp[4];
    unsigned int NbVertices;
    float a16_fWorldMatrix[16];
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\u_draw.c lines 1564–1570 */
/* addr: 0x002ade70  size: 40 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1564
 *   +0x0008 -> line 1570
 *   +0x000c -> line 1568
 *   +0x0010 -> line 1570
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void GLI_SendShadowElementToViewport(int param0, GEO_tdstGeometricObject_* p_stObj)
{
    float* pVert;
    GLI_BIG_GLOBALS_xGlobalAlpha = 1.0f;
    pVert = (float*)p_stObj->d_stListOfPoints;
    GLI_vAddShadowObject(pVert, pVert + 3, pVert + 6, pVert + 9, *(GLI_tdstMaterial_**)p_stObj->d_stListOfElements);
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\u_draw.c lines 1519–1554 */
/* addr: 0x002adea0  size: 456 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1519
 *   +0x0018 -> line 1522
 *   +0x0030 -> line 1550
 *   +0x0034 -> line 1528
 *   +0x0038 -> line 1550
 *   +0x003c -> line 1525
 *   +0x0040 -> line 1530
 *   +0x0050 -> line 1550
 *   +0x0054 -> line 1530
 *   +0x0058 -> line 1551
 *   +0x005c -> line 1530
 *   +0x0060 -> line 1551
 *   +0x0064 -> line 1530
 *   +0x0068 -> line 1531
 *   +0x0070 -> line 1551
 *   +0x0074 -> line 1531
 *   +0x0078 -> line 1532
 *   +0x0084 -> line 1530
 *   +0x0088 -> line 1534
 *   +0x008c -> line 1531
 *   +0x0090 -> line 1534
 *   +0x0098 -> line 1535
 *   +0x00a4 -> line 1536
 *   +0x00a8 -> line 1531
 *   +0x00ac -> line 1536
 *   +0x00b0 -> line 1532
 *   +0x00b4 -> line 1536
 *   +0x00b8 -> line 1538
 *   +0x00c4 -> line 1539
 *   +0x00cc -> line 1532
 *   +0x00d0 -> line 1539
 *   +0x00d4 -> line 1534
 *   +0x00d8 -> line 1540
 *   +0x00e0 -> line 1552
 *   +0x00e4 -> line 1540
 *   +0x00e8 -> line 1552
 *   +0x00ec -> line 1542
 *   +0x00f0 -> line 1552
 *   +0x00f4 -> line 1542
 *   +0x00fc -> line 1534
 *   +0x0100 -> line 1543
 *   +0x0104 -> line 1535
 *   +0x0108 -> line 1543
 *   +0x0110 -> line 1544
 *   +0x011c -> line 1546
 *   +0x0120 -> line 1535
 *   +0x0124 -> line 1546
 *   +0x0128 -> line 1536
 *   +0x012c -> line 1546
 *   +0x0130 -> line 1547
 *   +0x013c -> line 1548
 *   +0x0144 -> line 1536
 *   +0x0148 -> line 1548
 *   +0x014c -> line 1538
 *   +0x0154 -> line 1539
 *   +0x015c -> line 1540
 *   +0x0164 -> line 1542
 *   +0x016c -> line 1543
 *   +0x0174 -> line 1544
 *   +0x017c -> line 1546
 *   +0x0184 -> line 1547
 *   +0x018c -> line 1548
 *   +0x0194 -> line 1550
 *   +0x019c -> line 1551
 *   +0x01a4 -> line 1552
 *   +0x01ac -> line 1554
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void GLI_vAddShadowObject(float* p1, float* p2, float* p3, float* p4, GLI_tdstMaterial_* ShadowMat)
{
    unsigned int i;

    i = GLI_g_NbSimpleShadows + GLI_g_SimpleShadowBegin;
    if (i < 64) {
        GLI_g_NbSimpleShadows++;
        GLI_g_SimpleShadowMaterial = (int)ShadowMat;
        GLI_g_SimpleShadowsPos[6 * i][0] = p1[0];
        GLI_g_SimpleShadowsPos[6 * i][1] = p1[1];
        GLI_g_SimpleShadowsPos[6 * i][2] = p1[2];
        GLI_g_SimpleShadowsPos[6 * i + 1][0] = p2[0];
        GLI_g_SimpleShadowsPos[6 * i + 1][1] = p2[1];
        GLI_g_SimpleShadowsPos[6 * i + 1][2] = p2[2];
        GLI_g_SimpleShadowsPos[6 * i + 2][0] = p3[0];
        GLI_g_SimpleShadowsPos[6 * i + 2][1] = p3[1];
        GLI_g_SimpleShadowsPos[6 * i + 2][2] = p3[2];
        GLI_g_SimpleShadowsPos[6 * i + 3][0] = p1[0];
        GLI_g_SimpleShadowsPos[6 * i + 3][1] = p1[1];
        GLI_g_SimpleShadowsPos[6 * i + 3][2] = p1[2];
        GLI_g_SimpleShadowsPos[6 * i + 4][0] = p3[0];
        GLI_g_SimpleShadowsPos[6 * i + 4][1] = p3[1];
        GLI_g_SimpleShadowsPos[6 * i + 4][2] = p3[2];
        GLI_g_SimpleShadowsPos[6 * i + 5][0] = p4[0];
        GLI_g_SimpleShadowsPos[6 * i + 5][1] = p4[1];
        GLI_g_SimpleShadowsPos[6 * i + 5][2] = p4[2];
    }
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\u_draw.c lines 1480–1516 */
/* addr: 0x002ae070  size: 216 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1480
 *   +0x0008 -> line 1482
 *   +0x000c -> line 1486
 *   +0x0010 -> line 1490
 *   +0x0014 -> line 1482
 *   +0x001c -> line 1486
 *   +0x0020 -> line 1490
 *   +0x0024 -> line 1493
 *   +0x0028 -> line 1482
 *   +0x002c -> line 1486
 *   +0x0030 -> line 1482
 *   +0x0034 -> line 1490
 *   +0x0038 -> line 1483
 *   +0x003c -> line 1494
 *   +0x0040 -> line 1484
 *   +0x0044 -> line 1493
 *   +0x0048 -> line 1485
 *   +0x004c -> line 1486
 *   +0x0050 -> line 1494
 *   +0x0054 -> line 1487
 *   +0x0058 -> line 1488
 *   +0x005c -> line 1489
 *   +0x0060 -> line 1490
 *   +0x0064 -> line 1491
 *   +0x0068 -> line 1492
 *   +0x006c -> line 1494
 *   +0x0074 -> line 1495
 *   +0x007c -> line 1498
 *   +0x0080 -> line 1501
 *   +0x0084 -> line 1498
 *   +0x008c -> line 1515
 *   +0x0090 -> line 1498
 *   +0x0094 -> line 1514
 *   +0x0098 -> line 1498
 *   +0x009c -> line 1515
 *   +0x00a0 -> line 1499
 *   +0x00a4 -> line 1501
 *   +0x00a8 -> line 1502
 *   +0x00ac -> line 1504
 *   +0x00b0 -> line 1505
 *   +0x00b4 -> line 1507
 *   +0x00b8 -> line 1508
 *   +0x00bc -> line 1510
 *   +0x00c0 -> line 1511
 *   +0x00c4 -> line 1513
 *   +0x00c8 -> line 1515
 *   +0x00d0 -> line 1516
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void GLI_vInitSimpleShadowArrays(void)
{
    unsigned int i;
    for (i = 0; i < 384; i++) {
        GLI_g_SimpleShadowsRLIs[i][0] = 127.0f;
        GLI_g_SimpleShadowsRLIs[i][1] = 127.0f;
        GLI_g_SimpleShadowsRLIs[i][2] = 127.0f;
        GLI_g_SimpleShadowsRLIs[i][3] = 127.0f;
        GLI_g_SimpleShadowsUVs[i][0] = 0.0f;
        GLI_g_SimpleShadowsUVs[i][1] = 0.0f;
        GLI_g_SimpleShadowsUVs[i][2] = 0.0f;
        GLI_g_SimpleShadowsUVs[i][3] = 0.0f;
        GLI_g_SimpleShadowsPos[i][0] = 0.0f;
        GLI_g_SimpleShadowsPos[i][1] = 0.0f;
        GLI_g_SimpleShadowsPos[i][2] = 0.0f;
        GLI_g_SimpleShadowsPos[i][3] = 1.0f;
    }
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\u_draw.c lines 1465–1465 */
/* addr: 0x002ae150  size: 8 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1465
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void GLI_DRV_xSendElementTIToClip_TRIANGLES(void)
{
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\u_draw.c lines 1380–1438 */
/* addr: 0x002ae160  size: 628 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1380
 *   +0x0004 -> line 1381
 *   +0x0008 -> line 1386
 *   +0x000c -> line 1381
 *   +0x0010 -> line 1397
 *   +0x0014 -> line 1386
 *   +0x0020 -> line 1387
 *   +0x0028 -> line 1386
 *   +0x0030 -> line 1387
 *   +0x0034 -> line 1388
 *   +0x0040 -> line 1393
 *   +0x0044 -> line 1394
 *   +0x0048 -> line 1397
 *   +0x0050 -> line 1400
 *   +0x0068 -> line 1402
 *   +0x006c -> line 1403
 *   +0x0080 -> line 1404
 *   +0x0098 -> line 1405
 *   +0x00b0 -> line 1406
 *   +0x00c8 -> line 1407
 *   +0x00e0 -> line 1408
 *   +0x00f8 -> line 1410
 *   +0x0110 -> line 1412
 *   +0x0114 -> line 1413
 *   +0x0128 -> line 1414
 *   +0x0140 -> line 1415
 *   +0x0158 -> line 1416
 *   +0x0170 -> line 1417
 *   +0x0188 -> line 1418
 *   +0x01a0 -> line 1420
 *   +0x01b8 -> line 1422
 *   +0x01bc -> line 1423
 *   +0x01d0 -> line 1424
 *   +0x01e8 -> line 1425
 *   +0x0200 -> line 1426
 *   +0x0218 -> line 1427
 *   +0x0230 -> line 1428
 *   +0x0248 -> line 1430
 *   +0x0258 -> line 1432
 *   +0x025c -> line 1433
 *   +0x0260 -> line 1434
 *   +0x0264 -> line 1435
 *   +0x0268 -> line 1436
 *   +0x026c -> line 1438
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void GLI_CalculateBoundingBoxForElement(GEO_tdstElementIndexedTriangles_* p_stEIT, MTH3D_tdstVector_* p_stMin, MTH3D_tdstVector_* p_stMax)
{
    float Z;
    float Y;
    float X;
    GEO_tdstTripledIndex_* p_stListOfFacesTripled;
    MTH3D_tdstVector_* p_stPoints;
    unsigned int i;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\u_draw.c lines 1349–1353 */
/* addr: 0x002ae3e0  size: 72 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1349
 *   +0x0008 -> line 1350
 *   +0x0018 -> line 1351
 *   +0x0034 -> line 1352
 *   +0x003c -> line 1353
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void GLI_vDMASendTransparentObject(unsigned int DisplayList)
{
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\u_draw.c lines 1327–1334 */
/* addr: 0x002ae430  size: 44 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1327
 *   +0x000c -> line 1328
 *   +0x0014 -> line 1329
 *   +0x001c -> line 1334
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void GLI_vDMASendObject(unsigned int hSdl)
{
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\u_draw.c lines 1164–1218 */
/* addr: 0x002ae460  size: 320 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1164
 *   +0x0004 -> line 1177
 *   +0x0008 -> line 1164
 *   +0x000c -> line 1177
 *   +0x0010 -> line 1164
 *   +0x0014 -> line 1177
 *   +0x0060 -> line 1187
 *   +0x0064 -> line 1177
 *   +0x0068 -> line 1180
 *   +0x0070 -> line 1181
 *   +0x0078 -> line 1182
 *   +0x0080 -> line 1187
 *   +0x008c -> line 1195
 *   +0x0090 -> line 1196
 *   +0x0098 -> line 1199
 *   +0x00a4 -> line 1203
 *   +0x00b4 -> line 1207
 *   +0x00d0 -> line 1210
 *   +0x00d4 -> line 1211
 *   +0x00d8 -> line 1210
 *   +0x00dc -> line 1212
 *   +0x00e0 -> line 1211
 *   +0x00e4 -> line 1212
 *   +0x00e8 -> line 1211
 *   +0x00ec -> line 1212
 *   +0x00f0 -> line 1214
 *   +0x00fc -> line 1215
 *   +0x0108 -> line 1214
 *   +0x0114 -> line 1215
 *   +0x0128 -> line 1217
 *   +0x0130 -> line 1218
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void GLI_vGet2DPercentPointFrom3DWorldPoint(GLD_tdstViewportAttributes_* p_stVpt, MTH3D_tdstVector_* pDestination2D, MTH3D_tdstVector_* pSource3D)
{
    float fInv;
    float a4_fCameraVector[4];
    float a4_fWorldVector[4];
    float a16_fProjectionMatrix[4][4];
    float a16_fWorldMatrix[4][4];
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\u_draw.c lines 1145–1160 */
/* addr: 0x002ae5a0  size: 396 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1145
 *   +0x0004 -> line 1146
 *   +0x0008 -> line 1145
 *   +0x000c -> line 1146
 *   +0x0018 -> line 1148
 *   +0x0020 -> line 1149
 *   +0x0040 -> line 1148
 *   +0x0044 -> line 1149
 *   +0x0048 -> line 1150
 *   +0x004c -> line 1149
 *   +0x0068 -> line 1150
 *   +0x006c -> line 1151
 *   +0x0070 -> line 1148
 *   +0x0074 -> line 1149
 *   +0x0078 -> line 1148
 *   +0x007c -> line 1149
 *   +0x0094 -> line 1150
 *   +0x0098 -> line 1149
 *   +0x00a0 -> line 1150
 *   +0x00a4 -> line 1149
 *   +0x00a8 -> line 1150
 *   +0x00ac -> line 1149
 *   +0x00bc -> line 1150
 *   +0x00c0 -> line 1149
 *   +0x00c4 -> line 1150
 *   +0x00c8 -> line 1149
 *   +0x00cc -> line 1150
 *   +0x00f8 -> line 1149
 *   +0x0108 -> line 1150
 *   +0x0120 -> line 1151
 *   +0x0128 -> line 1152
 *   +0x0130 -> line 1153
 *   +0x0158 -> line 1154
 *   +0x0160 -> line 1155
 *   +0x0168 -> line 1156
 *   +0x0170 -> line 1157
 *   +0x0178 -> line 1158
 *   +0x0180 -> line 1160
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void GLI_vSetFIXFullScreenOrthoProjection(void)
{
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\u_draw.c lines 1121–1141 */
/* addr: 0x002ae730  size: 404 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1121
 *   +0x0004 -> line 1122
 *   +0x0008 -> line 1121
 *   +0x000c -> line 1122
 *   +0x0018 -> line 1124
 *   +0x001c -> line 1126
 *   +0x0024 -> line 1124
 *   +0x0028 -> line 1127
 *   +0x0048 -> line 1126
 *   +0x004c -> line 1127
 *   +0x0050 -> line 1128
 *   +0x0054 -> line 1127
 *   +0x0070 -> line 1128
 *   +0x0074 -> line 1129
 *   +0x0078 -> line 1126
 *   +0x007c -> line 1127
 *   +0x0080 -> line 1126
 *   +0x0084 -> line 1127
 *   +0x009c -> line 1128
 *   +0x00a0 -> line 1127
 *   +0x00a8 -> line 1128
 *   +0x00ac -> line 1127
 *   +0x00b0 -> line 1128
 *   +0x00b4 -> line 1127
 *   +0x00c4 -> line 1128
 *   +0x00c8 -> line 1127
 *   +0x00cc -> line 1128
 *   +0x00d0 -> line 1127
 *   +0x00d4 -> line 1128
 *   +0x0100 -> line 1127
 *   +0x0110 -> line 1128
 *   +0x0128 -> line 1129
 *   +0x0130 -> line 1130
 *   +0x0138 -> line 1134
 *   +0x0160 -> line 1135
 *   +0x0168 -> line 1136
 *   +0x0170 -> line 1137
 *   +0x0178 -> line 1138
 *   +0x0180 -> line 1139
 *   +0x0188 -> line 1141
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void GLI_vSetFullScreenOrthoProjection(void)
{
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\u_draw.c lines 1032–1117 */
/* addr: 0x002ae8d0  size: 768 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1032
 *   +0x0004 -> line 1038
 *   +0x0008 -> line 1032
 *   +0x002c -> line 1038
 *   +0x0038 -> line 1059
 *   +0x003c -> line 1056
 *   +0x0040 -> line 1057
 *   +0x0044 -> line 1059
 *   +0x0058 -> line 1060
 *   +0x0098 -> line 1067
 *   +0x00a0 -> line 1068
 *   +0x00a8 -> line 1071
 *   +0x00c4 -> line 1076
 *   +0x00c8 -> line 1071
 *   +0x00d0 -> line 1076
 *   +0x00d8 -> line 1077
 *   +0x01a4 -> line 1079
 *   +0x0258 -> line 1105
 *   +0x02b0 -> line 1106
 *   +0x02c4 -> line 1110
 *   +0x02cc -> line 1115
 *   +0x02d4 -> line 1117
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void GLI_vInitGLProjectionMatrix(void)
{
    float g_fxAngle;
    float g_fCurrentRatio;
    float TransformedxAngle;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\u_draw.c lines 981–1029 */
/* addr: 0x002aebd0  size: 956 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 981
 *   +0x0010 -> line 983
 *   +0x001c -> line 985
 *   +0x0058 -> line 989
 *   +0x0060 -> line 990
 *   +0x0068 -> line 991
 *   +0x0090 -> line 992
 *   +0x0098 -> line 993
 *   +0x00a0 -> line 996
 *   +0x00b8 -> line 997
 *   +0x00bc -> line 996
 *   +0x00c4 -> line 998
 *   +0x00c8 -> line 999
 *   +0x00cc -> line 996
 *   +0x00e4 -> line 997
 *   +0x00e8 -> line 996
 *   +0x00f0 -> line 997
 *   +0x00f4 -> line 996
 *   +0x00f8 -> line 997
 *   +0x0108 -> line 996
 *   +0x010c -> line 997
 *   +0x0110 -> line 996
 *   +0x0114 -> line 997
 *   +0x0118 -> line 996
 *   +0x0128 -> line 1000
 *   +0x012c -> line 997
 *   +0x0134 -> line 996
 *   +0x013c -> line 997
 *   +0x0140 -> line 996
 *   +0x0144 -> line 997
 *   +0x0148 -> line 996
 *   +0x014c -> line 997
 *   +0x0158 -> line 996
 *   +0x015c -> line 997
 *   +0x0178 -> line 996
 *   +0x0184 -> line 997
 *   +0x0188 -> line 996
 *   +0x018c -> line 1001
 *   +0x0190 -> line 997
 *   +0x01b4 -> line 998
 *   +0x01b8 -> line 1000
 *   +0x01bc -> line 998
 *   +0x01c0 -> line 999
 *   +0x01c4 -> line 998
 *   +0x01c8 -> line 999
 *   +0x01d8 -> line 1000
 *   +0x01dc -> line 999
 *   +0x01e0 -> line 1000
 *   +0x01ec -> line 997
 *   +0x01f4 -> line 999
 *   +0x01f8 -> line 1001
 *   +0x01fc -> line 999
 *   +0x0204 -> line 1000
 *   +0x020c -> line 998
 *   +0x0214 -> line 999
 *   +0x0224 -> line 1000
 *   +0x0238 -> line 999
 *   +0x023c -> line 1000
 *   +0x0240 -> line 999
 *   +0x0248 -> line 1003
 *   +0x024c -> line 999
 *   +0x0250 -> line 1003
 *   +0x0254 -> line 1000
 *   +0x025c -> line 1001
 *   +0x0260 -> line 1000
 *   +0x0264 -> line 1001
 *   +0x0288 -> line 1000
 *   +0x0290 -> line 1001
 *   +0x02b4 -> line 1003
 *   +0x02bc -> line 1005
 *   +0x02c4 -> line 1006
 *   +0x02dc -> line 1009
 *   +0x02e8 -> line 1010
 *   +0x02f8 -> line 1011
 *   +0x030c -> line 1013
 *   +0x0318 -> line 1014
 *   +0x0324 -> line 1015
 *   +0x0334 -> line 1018
 *   +0x0348 -> line 1019
 *   +0x0358 -> line 1020
 *   +0x0370 -> line 1022
 *   +0x0384 -> line 1023
 *   +0x0394 -> line 1024
 *   +0x03a0 -> line 1026
 *   +0x03a8 -> line 1029
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void TakeCareOfCinemascopePS2(void)
{
    float Height;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\u_draw.c lines 953–965 */
/* addr: 0x002aef90  size: 52 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 953
 *   +0x0008 -> line 954
 *   +0x0010 -> line 956
 *   +0x0014 -> line 962
 *   +0x001c -> line 964
 *   +0x0020 -> line 963
 *   +0x0024 -> line 964
 *   +0x0028 -> line 965
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void GLI_vReinitViewport(void)
{
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\u_draw.c lines 894–919 */
/* addr: 0x002aefd0  size: 212 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 898
 *   +0x0004 -> line 894
 *   +0x0008 -> line 898
 *   +0x000c -> line 894
 *   +0x0010 -> line 897
 *   +0x0014 -> line 916
 *   +0x0020 -> line 898
 *   +0x0024 -> line 910
 *   +0x0028 -> line 897
 *   +0x002c -> line 910
 *   +0x0030 -> line 898
 *   +0x0034 -> line 911
 *   +0x0038 -> line 913
 *   +0x003c -> line 911
 *   +0x0040 -> line 913
 *   +0x0044 -> line 916
 *   +0x0048 -> line 912
 *   +0x0050 -> line 913
 *   +0x005c -> line 897
 *   +0x0060 -> line 910
 *   +0x0070 -> line 899
 *   +0x0078 -> line 910
 *   +0x007c -> line 911
 *   +0x0090 -> line 912
 *   +0x0094 -> line 900
 *   +0x009c -> line 912
 *   +0x00b4 -> line 916
 *   +0x00bc -> line 918
 *   +0x00c8 -> line 919
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void glFrustumf(float left, float right, float bottom, float top, float zNear, float zFar)
{
    float oofminusn;
    float ootminusb;
    float oorminusl;
    float twonears;
    float m[4][4];
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\u_draw.c lines 863–874 */
/* addr: 0x002af0b0  size: 72 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 863
 *   +0x0010 -> line 864
 *   +0x0018 -> line 866
 *   +0x0028 -> line 869
 *   +0x0030 -> line 871
 *   +0x0038 -> line 874
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
GLI_tdstTexture_* GLI_xRefreshAnimatedTextureIfNeeded(GLI_tdstMaterial_* hVisualMaterial)
{
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\u_draw.c lines 786–858 */
/* addr: 0x002af100  size: 860 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 786
 *   +0x0008 -> line 787
 *   +0x0014 -> line 789
 *   +0x0024 -> line 790
 *   +0x0034 -> line 791
 *   +0x0044 -> line 792
 *   +0x0054 -> line 793
 *   +0x005c -> line 796
 *   +0x0068 -> line 797
 *   +0x0078 -> line 819
 *   +0x0088 -> line 820
 *   +0x00a4 -> line 821
 *   +0x00ac -> line 822
 *   +0x00b8 -> line 827
 *   +0x00c4 -> line 828
 *   +0x00d0 -> line 829
 *   +0x00d4 -> line 828
 *   +0x00e8 -> line 829
 *   +0x00f0 -> line 830
 *   +0x0108 -> line 831
 *   +0x0110 -> line 830
 *   +0x0148 -> line 831
 *   +0x0150 -> line 832
 *   +0x0158 -> line 833
 *   +0x0210 -> line 834
 *   +0x0214 -> line 833
 *   +0x021c -> line 834
 *   +0x0224 -> line 833
 *   +0x0234 -> line 834
 *   +0x023c -> line 833
 *   +0x0240 -> line 834
 *   +0x0250 -> line 833
 *   +0x0254 -> line 835
 *   +0x0258 -> line 834
 *   +0x026c -> line 835
 *   +0x0270 -> line 833
 *   +0x0280 -> line 834
 *   +0x0290 -> line 835
 *   +0x0294 -> line 834
 *   +0x0298 -> line 835
 *   +0x029c -> line 834
 *   +0x02a4 -> line 836
 *   +0x02a8 -> line 835
 *   +0x02b4 -> line 834
 *   +0x02b8 -> line 835
 *   +0x02bc -> line 834
 *   +0x02c0 -> line 835
 *   +0x02c8 -> line 836
 *   +0x02cc -> line 835
 *   +0x02d0 -> line 836
 *   +0x02d8 -> line 835
 *   +0x02f4 -> line 836
 *   +0x02fc -> line 837
 *   +0x0300 -> line 842
 *   +0x0304 -> line 837
 *   +0x030c -> line 842
 *   +0x0314 -> line 837
 *   +0x031c -> line 842
 *   +0x0324 -> line 843
 *   +0x0330 -> line 844
 *   +0x0340 -> line 850
 *   +0x0344 -> line 853
 *   +0x034c -> line 855
 *   +0x0350 -> line 858
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void GLI_DRV_vSetCommonGLRenderStates(void)
{
    unsigned char zTst;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\u_draw.c lines 724–724 */
/* addr: 0x002af460  size: 8 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 724
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void GLI_vResetTempList(void)
{
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\u_draw.c lines 720–720 */
/* addr: 0x002af470  size: 8 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 720
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void GLI_vAllocateTempLists(void)
{
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\u_draw.c lines 672–712 */
/* addr: 0x002af480  size: 140 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 672
 *   +0x0010 -> line 681
 *   +0x0018 -> line 689
 *   +0x001c -> line 683
 *   +0x0020 -> line 689
 *   +0x0024 -> line 691
 *   +0x0028 -> line 693
 *   +0x0030 -> line 695
 *   +0x0034 -> line 698
 *   +0x003c -> line 700
 *   +0x0040 -> line 701
 *   +0x0044 -> line 700
 *   +0x0048 -> line 702
 *   +0x0050 -> line 703
 *   +0x0058 -> line 704
 *   +0x006c -> line 705
 *   +0x0074 -> line 709
 *   +0x007c -> line 712
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void GLI_vReinitFrame(unsigned int SwapBuffers)
{
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\u_draw.c lines 505–650 */
/* addr: 0x002af510  size: 1976 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 505
 *   +0x001c -> line 510
 *   +0x0024 -> line 513
 *   +0x0028 -> line 514
 *   +0x003c -> line 515
 *   +0x0040 -> line 516
 *   +0x0054 -> line 521
 *   +0x0058 -> line 518
 *   +0x005c -> line 521
 *   +0x0064 -> line 523
 *   +0x0070 -> line 527
 *   +0x0078 -> line 535
 *   +0x0080 -> line 538
 *   +0x0088 -> line 539
 *   +0x0090 -> line 541
 *   +0x009c -> line 547
 *   +0x00e8 -> line 548
 *   +0x00ec -> line 547
 *   +0x00f4 -> line 548
 *   +0x00f8 -> line 547
 *   +0x00fc -> line 548
 *   +0x0104 -> line 547
 *   +0x0108 -> line 549
 *   +0x0110 -> line 551
 *   +0x0114 -> line 547
 *   +0x0124 -> line 549
 *   +0x0128 -> line 551
 *   +0x012c -> line 552
 *   +0x0130 -> line 548
 *   +0x0134 -> line 547
 *   +0x0138 -> line 548
 *   +0x0148 -> line 547
 *   +0x014c -> line 556
 *   +0x0150 -> line 547
 *   +0x015c -> line 555
 *   +0x0160 -> line 547
 *   +0x0164 -> line 548
 *   +0x0168 -> line 556
 *   +0x016c -> line 548
 *   +0x0174 -> line 556
 *   +0x0178 -> line 548
 *   +0x01a8 -> line 555
 *   +0x01b0 -> line 552
 *   +0x01b8 -> line 549
 *   +0x01dc -> line 550
 *   +0x01e0 -> line 549
 *   +0x01e4 -> line 550
 *   +0x01e8 -> line 549
 *   +0x01ec -> line 551
 *   +0x01f0 -> line 550
 *   +0x01f4 -> line 551
 *   +0x0208 -> line 549
 *   +0x020c -> line 551
 *   +0x0210 -> line 549
 *   +0x0214 -> line 551
 *   +0x0218 -> line 549
 *   +0x0228 -> line 550
 *   +0x0230 -> line 551
 *   +0x0254 -> line 552
 *   +0x0264 -> line 556
 *   +0x026c -> line 557
 *   +0x0290 -> line 558
 *   +0x0294 -> line 557
 *   +0x02fc -> line 558
 *   +0x0304 -> line 559
 *   +0x0314 -> line 560
 *   +0x0318 -> line 563
 *   +0x031c -> line 560
 *   +0x0324 -> line 563
 *   +0x0328 -> line 560
 *   +0x032c -> line 563
 *   +0x0330 -> line 560
 *   +0x033c -> line 564
 *   +0x0344 -> line 560
 *   +0x0350 -> line 564
 *   +0x0354 -> line 560
 *   +0x0380 -> line 564
 *   +0x0388 -> line 565
 *   +0x0390 -> line 572
 *   +0x0394 -> line 571
 *   +0x0398 -> line 572
 *   +0x039c -> line 571
 *   +0x03a0 -> line 572
 *   +0x03dc -> line 579
 *   +0x03e0 -> line 572
 *   +0x03e4 -> line 579
 *   +0x0404 -> line 572
 *   +0x0408 -> line 579
 *   +0x040c -> line 572
 *   +0x0410 -> line 580
 *   +0x0414 -> line 579
 *   +0x0440 -> line 580
 *   +0x0444 -> line 579
 *   +0x047c -> line 580
 *   +0x0484 -> line 581
 *   +0x0498 -> line 582
 *   +0x04ac -> line 588
 *   +0x04c0 -> line 589
 *   +0x04dc -> line 590
 *   +0x04ec -> line 597
 *   +0x04f0 -> line 593
 *   +0x04f8 -> line 597
 *   +0x04fc -> line 593
 *   +0x0500 -> line 597
 *   +0x050c -> line 598
 *   +0x0528 -> line 599
 *   +0x0538 -> line 606
 *   +0x053c -> line 603
 *   +0x0540 -> line 606
 *   +0x0554 -> line 603
 *   +0x0558 -> line 606
 *   +0x055c -> line 603
 *   +0x0560 -> line 606
 *   +0x05fc -> line 607
 *   +0x0600 -> line 606
 *   +0x0608 -> line 607
 *   +0x0610 -> line 606
 *   +0x0634 -> line 607
 *   +0x063c -> line 608
 *   +0x0650 -> line 609
 *   +0x0664 -> line 610
 *   +0x0678 -> line 617
 *   +0x0694 -> line 619
 *   +0x06a4 -> line 625
 *   +0x06a8 -> line 622
 *   +0x06b0 -> line 625
 *   +0x06b4 -> line 622
 *   +0x06b8 -> line 625
 *   +0x06c4 -> line 627
 *   +0x06e0 -> line 629
 *   +0x06f0 -> line 632
 *   +0x06f8 -> line 633
 *   +0x0740 -> line 638
 *   +0x0754 -> line 640
 *   +0x0770 -> line 641
 *   +0x0784 -> line 644
 *   +0x078c -> line 648
 *   +0x0794 -> line 650
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void DisplayShadowVolumes(void)
{
    unsigned char zTst;
    float CColor;
    unsigned int CountB;
    unsigned int CountF;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\u_draw.c lines 343–396 */
/* addr: 0x002afcd0  size: 988 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 343
 *   +0x0004 -> line 348
 *   +0x0008 -> line 343
 *   +0x0028 -> line 364
 *   +0x0030 -> line 366
 *   +0x0038 -> line 367
 *   +0x0044 -> line 369
 *   +0x0108 -> line 370
 *   +0x0110 -> line 371
 *   +0x011c -> line 372
 *   +0x0120 -> line 369
 *   +0x0130 -> line 372
 *   +0x0134 -> line 371
 *   +0x0138 -> line 376
 *   +0x013c -> line 377
 *   +0x0144 -> line 370
 *   +0x0148 -> line 369
 *   +0x014c -> line 370
 *   +0x0150 -> line 369
 *   +0x0154 -> line 370
 *   +0x0160 -> line 369
 *   +0x016c -> line 377
 *   +0x0170 -> line 369
 *   +0x0174 -> line 370
 *   +0x0178 -> line 374
 *   +0x017c -> line 370
 *   +0x0184 -> line 371
 *   +0x0188 -> line 374
 *   +0x018c -> line 370
 *   +0x0194 -> line 371
 *   +0x01bc -> line 372
 *   +0x01c0 -> line 371
 *   +0x01c4 -> line 372
 *   +0x01c8 -> line 371
 *   +0x01cc -> line 372
 *   +0x01e8 -> line 373
 *   +0x01f0 -> line 371
 *   +0x01f4 -> line 373
 *   +0x01f8 -> line 371
 *   +0x020c -> line 372
 *   +0x021c -> line 373
 *   +0x0220 -> line 371
 *   +0x0224 -> line 373
 *   +0x0228 -> line 371
 *   +0x022c -> line 372
 *   +0x023c -> line 374
 *   +0x0240 -> line 371
 *   +0x0244 -> line 374
 *   +0x0248 -> line 371
 *   +0x0250 -> line 374
 *   +0x026c -> line 371
 *   +0x0274 -> line 374
 *   +0x02a0 -> line 376
 *   +0x02b8 -> line 377
 *   +0x02c0 -> line 378
 *   +0x02c8 -> line 379
 *   +0x02e0 -> line 380
 *   +0x02e8 -> line 379
 *   +0x0320 -> line 380
 *   +0x0328 -> line 382
 *   +0x0330 -> line 383
 *   +0x033c -> line 385
 *   +0x034c -> line 387
 *   +0x0360 -> line 389
 *   +0x0374 -> line 391
 *   +0x0390 -> line 392
 *   +0x03a8 -> line 393
 *   +0x03b0 -> line 395
 *   +0x03b4 -> line 396
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void DrawTriangles(void)
{
    unsigned char zTst;
    float* p;
    float fADC;
    unsigned int i;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\u_draw.c lines 285–286 */
/* addr: 0x002b00b0  size: 16 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 285
 *   +0x0008 -> line 286
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void GLI_vAddShadowVolumeDisplayList(void)
{
    GLI_g_NumberOfShadowVolumes++;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\u_draw.c lines 254–256 */
/* addr: 0x002b00c0  size: 588 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 254
 *   +0x0160 -> line 255
 *   +0x0244 -> line 256
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void GLI_vRemoveScissors(void)
{
    unsigned char zTst;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\u_draw.c lines 233–250 */
/* addr: 0x002b0310  size: 428 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 233
 *   +0x0004 -> line 235
 *   +0x0008 -> line 233
 *   +0x0010 -> line 235
 *   +0x0068 -> line 236
 *   +0x0074 -> line 244
 *   +0x0078 -> line 236
 *   +0x0090 -> line 244
 *   +0x0094 -> line 236
 *   +0x00a0 -> line 244
 *   +0x00a4 -> line 236
 *   +0x00d8 -> line 245
 *   +0x00dc -> line 236
 *   +0x00e0 -> line 245
 *   +0x00e8 -> line 236
 *   +0x0110 -> line 238
 *   +0x0114 -> line 239
 *   +0x0118 -> line 242
 *   +0x011c -> line 241
 *   +0x0120 -> line 244
 *   +0x0124 -> line 245
 *   +0x0128 -> line 242
 *   +0x012c -> line 247
 *   +0x0130 -> line 241
 *   +0x0134 -> line 244
 *   +0x013c -> line 245
 *   +0x0140 -> line 247
 *   +0x0144 -> line 244
 *   +0x0148 -> line 245
 *   +0x014c -> line 244
 *   +0x0154 -> line 245
 *   +0x0158 -> line 246
 *   +0x015c -> line 245
 *   +0x0168 -> line 248
 *   +0x016c -> line 246
 *   +0x017c -> line 247
 *   +0x0180 -> line 246
 *   +0x0188 -> line 247
 *   +0x0194 -> line 248
 *   +0x019c -> line 250
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void GLI_vSetScissors(GLD_tdstViewportAttributes_* _p_stFixViewportAttr)
{
    int height;
    int width;
    int y;
    int x;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\u_draw.c lines 227–227 */
/* addr: 0x002b04c0  size: 8 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 227
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
GLI_SpecificPS2GL_Structure_* GLI_pstGetSpecificStructureFromEIT(GEO_tdstElementIndexedTriangles_* p_stEIT)
{
    return (GLI_SpecificPS2GL_Structure_*)p_stEIT->glDisplayList;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\u_draw.c lines 157–220 */
/* addr: 0x002b04d0  size: 368 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 157
 *   +0x001c -> line 165
 *   +0x0028 -> line 170
 *   +0x002c -> line 165
 *   +0x0030 -> line 171
 *   +0x0034 -> line 172
 *   +0x0038 -> line 173
 *   +0x003c -> line 174
 *   +0x0040 -> line 176
 *   +0x004c -> line 178
 *   +0x0058 -> line 179
 *   +0x005c -> line 180
 *   +0x0064 -> line 183
 *   +0x0068 -> line 188
 *   +0x0070 -> line 190
 *   +0x0074 -> line 195
 *   +0x0084 -> line 202
 *   +0x0088 -> line 195
 *   +0x008c -> line 202
 *   +0x00a8 -> line 206
 *   +0x012c -> line 213
 *   +0x0134 -> line 206
 *   +0x0140 -> line 213
 *   +0x0148 -> line 214
 *   +0x0150 -> line 216
 *   +0x0154 -> line 218
 *   +0x0158 -> line 220
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
GLI_SpecificPS2GL_Structure_* GLI_vAllocateSpecificStructure(unsigned int NbMultiTextureMaterials, GEO_tdstElementIndexedTriangles_* p_stEIT)
{
    unsigned int i;
    GLI_SpecificPS2GL_Structure_* pTemp;
    /* TODO: decompile from asm/... */
}
