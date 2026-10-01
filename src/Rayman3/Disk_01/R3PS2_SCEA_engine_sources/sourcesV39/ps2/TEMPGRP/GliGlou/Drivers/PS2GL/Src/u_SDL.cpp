/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\u_SDL.cpp */
/* Language: C */
/* Compiler: MW MIPS C Compiler */

#include <stddef.h>

/* Recovered aggregate layouts from MWCC debug type records. */
typedef struct AI_tdstMind_ AI_tdstMind_;
typedef struct _SND_tdstBlockEvent _SND_tdstBlockEvent;
typedef struct aggregate aggregate;
typedef struct tdstCineinfo_ tdstCineinfo_;
typedef struct tdstCollSet_ tdstCollSet_;
typedef struct tdstComport_ tdstComport_;
typedef struct tdstDynam_ tdstDynam_;
typedef struct tdstMSLight_ tdstMSLight_;
typedef struct tdstMSSound_ tdstMSSound_;
typedef struct tdstMSWay_ tdstMSWay_;
typedef struct tdstMicro_ tdstMicro_;
typedef struct tdstPhysicalCollSet_ tdstPhysicalCollSet_;
typedef struct tdstSectInfo_ tdstSectInfo_;
typedef struct tdstState_ tdstState_;
typedef struct GLI_tdstAnimatedTextureNode_ GLI_tdstAnimatedTextureNode_;
typedef struct MTH4D_tdstVector_ MTH4D_tdstVector_;
typedef struct GEO_tdstGeometricObject_ GEO_tdstGeometricObject_;
typedef struct PS2STRIP_ PS2STRIP_;
typedef struct GEO_tdstTripledIndex_ GEO_tdstTripledIndex_;
typedef struct GLI_tdstTexture_ GLI_tdstTexture_;
typedef struct PS2STRIP_List_ PS2STRIP_List_;
typedef struct PS2STRIP_TriangleList_ PS2STRIP_TriangleList_;
typedef struct GEO_tdstColor_ GEO_tdstColor_;
typedef struct anon_1 anon_1;
typedef struct anon_0 anon_0;
typedef struct GLI_tdstMaterial_ GLI_tdstMaterial_;
typedef struct SDC_VertexArrays_ SDC_VertexArrays_;
typedef struct MTH3D_tdstVector_ MTH3D_tdstVector_;
typedef struct GEO_tdstEdge_ GEO_tdstEdge_;
typedef struct GEO_tdstElementIndexedTriangles_ GEO_tdstElementIndexedTriangles_;
typedef struct GEO_tdstParallelBox_ GEO_tdstParallelBox_;
typedef struct GEO_tdstDoubledIndex_ GEO_tdstDoubledIndex_;
typedef struct PS2STRIP_Vtx_ PS2STRIP_Vtx_;
typedef struct ACP_tdst2DUVValues_ ACP_tdst2DUVValues_;
typedef struct ISI_tdstColor_ ISI_tdstColor_;
typedef struct PS2STRIP_ConnectedTriangles_ PS2STRIP_ConnectedTriangles_;
typedef struct PS2STRIP_VtxList_ PS2STRIP_VtxList_;
typedef struct tdstSubAnimInUse_ tdstSubAnimInUse_;
typedef struct _SDC_Instance_ _SDC_Instance_;
typedef struct LST2_tdstAnchorToSECT_tdxHandleOfElementLstSoundInteractionOpt LST2_tdstAnchorToSECT_tdxHandleOfElementLstSoundInteractionOpt;
typedef struct tdstMorphChannelList_ tdstMorphChannelList_;
typedef struct sceGsPrim sceGsPrim;
typedef struct sceGsRgbaq sceGsRgbaq;
typedef struct sceGsSt sceGsSt;
typedef struct sceGsUv sceGsUv;
typedef struct sceGsXyzf sceGsXyzf;
typedef struct sceGsXyz sceGsXyz;
typedef struct sceGsTex0 sceGsTex0;
typedef struct sceGsClamp sceGsClamp;
typedef struct sceGsFog sceGsFog;
typedef struct sceGsTex1 sceGsTex1;
typedef struct sceGsTex2 sceGsTex2;
typedef struct sceGsXyoffset sceGsXyoffset;
typedef struct sceGsPrmodecont sceGsPrmodecont;
typedef struct sceGsPrmode sceGsPrmode;
typedef struct sceGsTexclut sceGsTexclut;
typedef struct sceGsScanmsk sceGsScanmsk;
typedef struct sceGsMiptbp1 sceGsMiptbp1;
typedef struct sceGsMiptbp2 sceGsMiptbp2;
typedef struct sceGsTexa sceGsTexa;
typedef struct sceGsFogcol sceGsFogcol;
typedef struct tagsceGsReg tagsceGsReg;
typedef struct sceGsScissor sceGsScissor;
typedef struct sceGsAlpha sceGsAlpha;
typedef struct sceGsDimx sceGsDimx;
typedef struct sceGsDthe sceGsDthe;
typedef struct sceGsColclamp sceGsColclamp;
typedef struct sceGsTest sceGsTest;
typedef struct sceGsPabe sceGsPabe;
typedef struct sceGsFba sceGsFba;
typedef struct sceGsFrame sceGsFrame;
typedef struct sceGsZbuf sceGsZbuf;
typedef struct sceGsBitbltbuf sceGsBitbltbuf;
typedef struct sceGsTrxpos sceGsTrxpos;
typedef struct sceGsTrxreg sceGsTrxreg;
typedef struct sceGsTrxdir sceGsTrxdir;
typedef struct sceGsSignal sceGsSignal;
typedef struct sceGsLabel sceGsLabel;
typedef union QWORD QWORD;
typedef struct tagGScontext tagGScontext;
typedef struct GLD_tdstViewportAttributes_ GLD_tdstViewportAttributes_;
typedef struct LST2_tdstAnchorToCINE_tdxHandleToCineActorDyn LST2_tdstAnchorToCINE_tdxHandleToCineActorDyn;
typedef struct CINE_tdstCine_ CINE_tdstCine_;
typedef struct SECT_tdstListOfSOSectorsInSoundInteraction_ SECT_tdstListOfSOSectorsInSoundInteraction_;
typedef struct MTH4D_tdstMatrix_ MTH4D_tdstMatrix_;
typedef struct MAT_tdstTransformation_ MAT_tdstTransformation_;
typedef struct tdstEngineObject_ tdstEngineObject_;
typedef struct MOR_stMorphObject_ MOR_stMorphObject_;
typedef union HIE_tduLinkedObject_ HIE_tduLinkedObject_;
typedef struct HIE_tdstSuperObject_ HIE_tdstSuperObject_;
typedef union _SND_tduRefEvt _SND_tduRefEvt;
typedef struct tagListNodeSingle tagListNodeSingle;
typedef struct SECT_tdstListOfSOSectorsInActivityInteraction_ SECT_tdstListOfSOSectorsInActivityInteraction_;
typedef struct tdstObjectsTablesList_ tdstObjectsTablesList_;
typedef struct tdstPLA_Deformation_ tdstPLA_Deformation_;
typedef struct stMorphData stMorphData;
typedef struct MOR_stMorphVector_ MOR_stMorphVector_;
typedef struct tdstSubAnim_ tdstSubAnim_;
typedef struct LST2_tdstAnchorToCINE_tdxHandleToChannelLinkDyn LST2_tdstAnchorToCINE_tdxHandleToChannelLinkDyn;
typedef struct CINE_tdstCineActor_ CINE_tdstCineActor_;
typedef struct tagListData tagListData;
typedef struct tdstEvent_ tdstEvent_;
typedef struct TransparentSpriteGen_ TransparentSpriteGen_;
typedef struct PO_tdstPhysicalObject_ PO_tdstPhysicalObject_;
typedef struct stInterpolatedPosition stInterpolatedPosition;
typedef struct tdstAChannel_ tdstAChannel_;
typedef struct tdstPLA_DeformationLink_ tdstPLA_DeformationLink_;
typedef struct tdstEventInTable_ tdstEventInTable_;
typedef struct LST2_tdstAnchorTotdxHandleToStateOpt LST2_tdstAnchorTotdxHandleToStateOpt;
typedef struct LST2_tdstAnchorTotdxHandleToSubAnimOpt LST2_tdstAnchorTotdxHandleToSubAnimOpt;
typedef struct LST2_tdstAnchorTotdxHandleToObjectsTablesListOpt LST2_tdstAnchorTotdxHandleToObjectsTablesListOpt;
typedef struct tdstFamilyList_ tdstFamilyList_;
typedef struct LST2_tdstAnchorToSECT_tdxHandleOfElementLstActivityInteractionOpt LST2_tdstAnchorToSECT_tdxHandleOfElementLstActivityInteractionOpt;
typedef struct tag_GLtexture_image tag_GLtexture_image;
typedef struct tag_GLmaterial tag_GLmaterial;
typedef struct sceGifTag sceGifTag;
typedef struct CINE_tdstChannelLink_ CINE_tdstChannelLink_;
typedef struct LST2_tdstAnchorTotdxHandleToFamilyListDyn LST2_tdstAnchorTotdxHandleToFamilyListDyn;
typedef struct C_CharacterSdl C_CharacterSdl;
typedef struct GEO_tdstVisualSet_ GEO_tdstVisualSet_;
typedef struct SCT_tdstListOfSoundEvent_ SCT_tdstListOfSoundEvent_;
typedef struct tagListNode tagListNode;
typedef struct tagGLtexname tagGLtexname;
typedef struct tag_GLtexture_set tag_GLtexture_set;
typedef struct GMT_tdstCollideMaterial_ GMT_tdstCollideMaterial_;
typedef struct C_InstanceList C_InstanceList;
typedef struct DelayedFrees_ DelayedFrees_;
typedef struct tdstPLA_Hierarchy_ tdstPLA_Hierarchy_;
typedef struct tdstFrame3d_ tdstFrame3d_;
typedef struct LST2_tdstAnchorTotdxHandleToSubAnimInUseDyn LST2_tdstAnchorTotdxHandleToSubAnimInUseDyn;
typedef struct tdst3dData_ tdst3dData_;
typedef struct C_SdlRef C_SdlRef;
typedef union unFunction unFunction;
typedef struct tagGLlistnode tagGLlistnode;
typedef struct tagGLlistcalls tagGLlistcalls;
typedef struct tagGsLoadImage tagGsLoadImage;
typedef struct sceGsTexflush sceGsTexflush;
typedef struct tagGsSetTex tagGsSetTex;
typedef struct tagGLtexblock tagGLtexblock;
typedef struct tagGLtexindex tagGLtexindex;
typedef struct tag_GLlight tag_GLlight;
typedef struct tagGLlistpool tagGLlistpool;
typedef struct tagGLArrayInfo tagGLArrayInfo;
typedef struct tagGLcontext tagGLcontext;
typedef struct SECT_tdstListOfDNMLights_ SECT_tdstListOfDNMLights_;
typedef struct LST2_tdstAnchorToSECT_tdxHandleOfElementLstCollisionInteractionOpt LST2_tdstAnchorToSECT_tdxHandleOfElementLstCollisionInteractionOpt;
typedef struct _UnoptimizedTransparentCharacters_ _UnoptimizedTransparentCharacters_;
typedef struct tdstObjectsTableElement_ tdstObjectsTableElement_;
typedef struct COL_tdstBoundingSphere_ COL_tdstBoundingSphere_;
typedef struct tagstVIFCode tagstVIFCode;
typedef union GEO_tduVSObject_ GEO_tduVSObject_;
typedef struct SECT_tdstListOfSOSectorsInCollisionInteraction_ SECT_tdstListOfSOSectorsInCollisionInteraction_;
typedef struct _sceDmaTag _sceDmaTag;
typedef struct tdstLipsSynchValue_ tdstLipsSynchValue_;
typedef struct tdstStandardGame_ tdstStandardGame_;
typedef struct GLI_tdstUVTransformation GLI_tdstUVTransformation;
typedef struct C_Sdl C_Sdl;
typedef struct SECT_tdstListOfStaticLights_ SECT_tdstListOfStaticLights_;
typedef struct tag_GLtexture tag_GLtexture;
typedef struct GLI_tdstVAToUpdate_ GLI_tdstVAToUpdate_;
typedef struct tagGLprimbuf tagGLprimbuf;
typedef struct RegisteredTransparentUnoptimizedMap_ RegisteredTransparentUnoptimizedMap_;
typedef struct MTH3D_tdstMatrix_ MTH3D_tdstMatrix_;
typedef struct GLI_tdstZBufferForLight_ GLI_tdstZBufferForLight_;
typedef struct GLI_tdstLight_ GLI_tdstLight_;
typedef struct _Sinus_Copy_ _Sinus_Copy_;
typedef struct tdstElement3d_ tdstElement3d_;
typedef struct LST2_tdstAnchorToSECT_tdxHandleOfElementLstGraphicInteractionOpt LST2_tdstAnchorToSECT_tdxHandleOfElementLstGraphicInteractionOpt;
typedef struct tagGLlistdatas tagGLlistdatas;
typedef struct HIE_tdstModifierObject_ HIE_tdstModifierObject_;
typedef struct SECT_tdstListOfSOSectorsInGraphicInteraction_ SECT_tdstListOfSOSectorsInGraphicInteraction_;
typedef struct LST2_tdstAnchorToSECT_tdxHandleOfElementLstCharacterDyn LST2_tdstAnchorToSECT_tdxHandleOfElementLstCharacterDyn;
typedef struct GLI_tdstMultiTextureMaterial GLI_tdstMultiTextureMaterial;
typedef struct GT3_Reflections_ GT3_Reflections_;
typedef struct tdstCouple_ tdstCouple_;
typedef struct SECT_tdstListOfSOCharacters_ SECT_tdstListOfSOCharacters_;
typedef struct LST2_tdstAnchorToCINE_tdxHandleToCineDyn LST2_tdstAnchorToCINE_tdxHandleToCineDyn;
typedef struct tdstAnim3d_ tdstAnim3d_;
typedef struct LST2_tdstAnchorToSCT_tdxHandleOfLstSoundEventOpt LST2_tdstAnchorToSCT_tdxHandleOfLstSoundEventOpt;
typedef struct LST2_tdstAnchorToSECT_tdxHandleOfElementLstDNMLightsDyn LST2_tdstAnchorToSECT_tdxHandleOfElementLstDNMLightsDyn;
typedef struct GLI_SpecificPS2GL_Structure_ GLI_SpecificPS2GL_Structure_;
typedef struct tdstBrain_ tdstBrain_;
typedef struct stParamBegin stParamBegin;
typedef struct LST2_tdstAnchorToSECT_tdxHandleOfElementLstStaticLightsOpt LST2_tdstAnchorToSECT_tdxHandleOfElementLstStaticLightsOpt;
typedef struct SECT_tdstSector_ SECT_tdstSector_;
typedef struct GMT_tdstGameMaterial_ GMT_tdstGameMaterial_;
typedef struct IPO_tdstInstanciatedPhysicalObject_ IPO_tdstInstanciatedPhysicalObject_;
typedef struct tag_stVU1Parameters tag_stVU1Parameters;
typedef struct LST2_tdstAnchorToCHN_tdxHandleToMorphElementDyn LST2_tdstAnchorToCHN_tdxHandleToMorphElementDyn;

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

struct GLI_tdstAnimatedTextureNode_ {
    GLI_tdstTexture_* p_stTexture; /* +0x0 */
    float xDisplayTime; /* +0x4 */
    GLI_tdstAnimatedTextureNode_* p_stNextDisplayNode; /* +0x8 */
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
};

struct PS2STRIP_ {
    unsigned int NbIndices; /* +0x0 */
    unsigned int NbIndicesADC; /* +0x4 */
    unsigned int NbTriangles; /* +0x8 */
    unsigned int NbAllocated; /* +0xc */
    int pIndices; /* +0x10 */
    int pADC; /* +0x14 */
};

struct GEO_tdstTripledIndex_ {
    short a3_xIndex[3]; /* +0x0 */
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

struct PS2STRIP_List_ {
    unsigned int NbStrips; /* +0x0 */
    PS2STRIP_* pList; /* +0x4 */
};

struct PS2STRIP_TriangleList_ {
    unsigned int NbTris; /* +0x0 */
    int pIndices; /* +0x4 */
    int pStrippedFlag; /* +0x8 */
    PS2STRIP_ConnectedTriangles_* pConnected; /* +0xc */
};

struct GEO_tdstColor_ {
    float xR; /* +0x0 */
    float xG; /* +0x4 */
    float xB; /* +0x8 */
    float xA; /* +0xc */
};

struct anon_1 {
    float stMat[2][2]; /* +0x0 */
    float stTrans[2]; /* +0x10 */
};

struct anon_0 {
    GLI_tdstTexture_* pst_Texture; /* +0x0 */
    char c_Operator; /* +0x4 */
    char c_ColorOperator; /* +0x5 */
    char c_UVSource; /* +0x6 */
    char c_Flags; /* +0x7 */
    unsigned int ulTextureProperties; /* +0x8 */
    anon_1 st_UVStaticPos; /* +0xc */
    anon_1 st_UVDynamicPos; /* +0x24 */
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
    anon_0 a_stMultiMaterial[4]; /* +0x88 */
};

struct SDC_VertexArrays_ {
    unsigned int OptType; /* +0x0 */
    unsigned int NbElements; /* +0x4 */
    GLI_tdstMaterial_** pArrayOfMaterials; /* +0x8 */
    float ** pArrayOfVertexArrays[4]; /* +0xc */
    int pVertexArraySizes; /* +0x10 */
    int pNbTrianglesPerElement; /* +0x14 */
    int pbIsTransparent; /* +0x18 */
    unsigned int FrameDeformed; /* +0x1c */
    int pSDLs; /* +0x20 */
};

struct MTH3D_tdstVector_ {
    float xX; /* +0x0 */
    float xY; /* +0x4 */
    float xZ; /* +0x8 */
};

struct GEO_tdstEdge_ {
    short xPoints[2]; /* +0x0 */
    MTH3D_tdstVector_ st_VectorPoints[2]; /* +0x4 */
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

struct GEO_tdstParallelBox_ {
    MTH4D_tdstVector_ stMinPoint; /* +0x0 */
    MTH4D_tdstVector_ stMaxPoint; /* +0x10 */
};

struct GEO_tdstDoubledIndex_ {
    short a2_xIndex[2]; /* +0x0 */
};

struct PS2STRIP_Vtx_ {
    float Position[4]; /* +0x0 */
    unsigned int Color[4]; /* +0x10 */
    unsigned int UVs[3]; /* +0x20 */
    unsigned int Normal; /* +0x2c */
    unsigned int Org; /* +0x30 */
};

struct ACP_tdst2DUVValues_ {
    float xU; /* +0x0 */
    float xV; /* +0x4 */
};

struct ISI_tdstColor_ {
    short xRed; /* +0x0 */
    short xGreen; /* +0x2 */
    short xBlue; /* +0x4 */
    short xAlpha; /* +0x6 */
};

struct PS2STRIP_ConnectedTriangles_ {
    unsigned int NbConnectedTriangles; /* +0x0 */
    unsigned int pConnectedTriangles[32]; /* +0x4 */
};

struct PS2STRIP_VtxList_ {
    PS2STRIP_Vtx_* pVtx; /* +0x0 */
    unsigned int NbVtx; /* +0x4 */
    unsigned int NbAllocatedVtx; /* +0x8 */
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

struct _SDC_Instance_ {
    HIE_tdstSuperObject_* pSPO; /* +0x0 */
    unsigned int ulElementNumber; /* +0x4 */
    float (*pVertexArray)[4]; /* +0x8 */
    int pInstanceNormals; /* +0xc */
    C_Sdl* pSDL; /* +0x10 */
    unsigned int ulFrameNumber; /* +0x14 */
    unsigned int ulFrameNumberForNormals; /* +0x18 */
    C_InstanceList* pList; /* +0x1c */
};

struct LST2_tdstAnchorToSECT_tdxHandleOfElementLstSoundInteractionOpt {
    SECT_tdstListOfSOSectorsInSoundInteraction_* hFirstElementOpt; /* +0x0 */
    int lNumberOfElementsOpt; /* +0x4 */
};

struct tdstMorphChannelList_ {
    tdstMorphChannelList_* hNextBrotherDyn; /* +0x0 */
    tdstMorphChannelList_* hPrevBrotherDyn; /* +0x4 */
    LST2_tdstAnchorToCHN_tdxHandleToMorphElementDyn* hFatherDyn; /* +0x8 */
    unsigned short uwChannelNumber; /* +0xc */
    short MorphListIndex; /* +0xe */
};

struct sceGsPrim {
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

struct sceGsRgbaq {
    unsigned int R : 8; /* bit 0, byte +0x0 */
    unsigned int G : 8; /* bit 8, byte +0x0 */
    unsigned int B : 8; /* bit 16, byte +0x0 */
    unsigned int A : 8; /* bit 24, byte +0x0 */
    float Q; /* +0x4 */
};

struct sceGsSt {
    float S; /* +0x0 */
    float T; /* +0x4 */
};

struct sceGsUv {
    unsigned long U : 14; /* bit 0, byte +0x0 */
    unsigned long pad14 : 2; /* bit 14, byte +0x0 */
    unsigned long V : 14; /* bit 16, byte +0x0 */
    unsigned long pad30 : 34; /* bit 30, byte +0x0 */
};

struct sceGsXyzf {
    unsigned long X : 16; /* bit 0, byte +0x0 */
    unsigned long Y : 16; /* bit 16, byte +0x0 */
    unsigned long Z : 24; /* bit 32, byte +0x0 */
    unsigned long F : 8; /* bit 56, byte +0x0 */
};

struct sceGsXyz {
    unsigned long X : 16; /* bit 0, byte +0x0 */
    unsigned long Y : 16; /* bit 16, byte +0x0 */
    unsigned long Z : 32; /* bit 32, byte +0x0 */
};

struct sceGsTex0 {
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

struct sceGsClamp {
    unsigned long WMS : 2; /* bit 0, byte +0x0 */
    unsigned long WMT : 2; /* bit 2, byte +0x0 */
    unsigned long MINU : 10; /* bit 4, byte +0x0 */
    unsigned long MAXU : 10; /* bit 14, byte +0x0 */
    unsigned long MINV : 10; /* bit 24, byte +0x0 */
    unsigned long MAXV : 10; /* bit 34, byte +0x0 */
    unsigned long pad44 : 20; /* bit 44, byte +0x0 */
};

struct sceGsFog {
    unsigned long pad00 : 56; /* bit 0, byte +0x0 */
    unsigned long F : 8; /* bit 56, byte +0x0 */
};

struct sceGsTex1 {
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

struct sceGsTex2 {
    unsigned long pad00 : 20; /* bit 0, byte +0x0 */
    unsigned long PSM : 6; /* bit 20, byte +0x0 */
    unsigned long pad26 : 11; /* bit 26, byte +0x0 */
    unsigned long CBP : 14; /* bit 37, byte +0x0 */
    unsigned long CPSM : 4; /* bit 51, byte +0x0 */
    unsigned long CSM : 1; /* bit 55, byte +0x0 */
    unsigned long CSA : 5; /* bit 56, byte +0x0 */
    unsigned long CLD : 3; /* bit 61, byte +0x0 */
};

struct sceGsXyoffset {
    unsigned long OFX : 16; /* bit 0, byte +0x0 */
    unsigned long pad16 : 16; /* bit 16, byte +0x0 */
    unsigned long OFY : 16; /* bit 32, byte +0x0 */
    unsigned long pad48 : 16; /* bit 48, byte +0x0 */
};

struct sceGsPrmodecont {
    unsigned long AC : 1; /* bit 0, byte +0x0 */
    unsigned long pad01 : 63; /* bit 1, byte +0x0 */
};

struct sceGsPrmode {
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

struct sceGsTexclut {
    unsigned long CBW : 6; /* bit 0, byte +0x0 */
    unsigned long COU : 6; /* bit 6, byte +0x0 */
    unsigned long COV : 10; /* bit 12, byte +0x0 */
    unsigned long pad22 : 42; /* bit 22, byte +0x0 */
};

struct sceGsScanmsk {
    unsigned long MSK : 2; /* bit 0, byte +0x0 */
    unsigned long pad02 : 62; /* bit 2, byte +0x0 */
};

struct sceGsMiptbp1 {
    unsigned long TBP1 : 14; /* bit 0, byte +0x0 */
    unsigned long TBW1 : 6; /* bit 14, byte +0x0 */
    unsigned long TBP2 : 14; /* bit 20, byte +0x0 */
    unsigned long TBW2 : 6; /* bit 34, byte +0x0 */
    unsigned long TBP3 : 14; /* bit 40, byte +0x0 */
    unsigned long TBW3 : 6; /* bit 54, byte +0x0 */
    unsigned long pad60 : 4; /* bit 60, byte +0x0 */
};

struct sceGsMiptbp2 {
    unsigned long TBP4 : 14; /* bit 0, byte +0x0 */
    unsigned long TBW4 : 6; /* bit 14, byte +0x0 */
    unsigned long TBP5 : 14; /* bit 20, byte +0x0 */
    unsigned long TBW5 : 6; /* bit 34, byte +0x0 */
    unsigned long TBP6 : 14; /* bit 40, byte +0x0 */
    unsigned long TBW6 : 6; /* bit 54, byte +0x0 */
    unsigned long pad60 : 4; /* bit 60, byte +0x0 */
};

struct sceGsTexa {
    unsigned long TA0 : 8; /* bit 0, byte +0x0 */
    unsigned long pad08 : 7; /* bit 8, byte +0x0 */
    unsigned long AEM : 1; /* bit 15, byte +0x0 */
    unsigned long pad16 : 16; /* bit 16, byte +0x0 */
    unsigned long TA1 : 8; /* bit 32, byte +0x0 */
    unsigned long pad40 : 24; /* bit 40, byte +0x0 */
};

struct sceGsFogcol {
    unsigned long FCR : 8; /* bit 0, byte +0x0 */
    unsigned long FCG : 8; /* bit 8, byte +0x0 */
    unsigned long FCB : 8; /* bit 16, byte +0x0 */
    unsigned long pad24 : 40; /* bit 24, byte +0x0 */
};

struct tagsceGsReg {
    unsigned long DATA; /* +0x0 */
};

struct sceGsScissor {
    unsigned long SCAX0 : 11; /* bit 0, byte +0x0 */
    unsigned long pad11 : 5; /* bit 11, byte +0x0 */
    unsigned long SCAX1 : 11; /* bit 16, byte +0x0 */
    unsigned long pad27 : 5; /* bit 27, byte +0x0 */
    unsigned long SCAY0 : 11; /* bit 32, byte +0x0 */
    unsigned long pad43 : 5; /* bit 43, byte +0x0 */
    unsigned long SCAY1 : 11; /* bit 48, byte +0x0 */
    unsigned long pad59 : 5; /* bit 59, byte +0x0 */
};

struct sceGsAlpha {
    unsigned long A : 2; /* bit 0, byte +0x0 */
    unsigned long B : 2; /* bit 2, byte +0x0 */
    unsigned long C : 2; /* bit 4, byte +0x0 */
    unsigned long D : 2; /* bit 6, byte +0x0 */
    unsigned long pad8 : 24; /* bit 8, byte +0x0 */
    unsigned long FIX : 8; /* bit 32, byte +0x0 */
    unsigned long pad40 : 24; /* bit 40, byte +0x0 */
};

struct sceGsDimx {
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

struct sceGsDthe {
    unsigned long DTHE : 1; /* bit 0, byte +0x0 */
    unsigned long pad01 : 63; /* bit 1, byte +0x0 */
};

struct sceGsColclamp {
    unsigned long CLAMP : 1; /* bit 0, byte +0x0 */
    unsigned long pad01 : 63; /* bit 1, byte +0x0 */
};

struct sceGsTest {
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

struct sceGsPabe {
    unsigned long PABE : 1; /* bit 0, byte +0x0 */
    unsigned long pad01 : 63; /* bit 1, byte +0x0 */
};

struct sceGsFba {
    unsigned long FBA : 1; /* bit 0, byte +0x0 */
    unsigned long pad01 : 63; /* bit 1, byte +0x0 */
};

struct sceGsFrame {
    unsigned long FBP : 9; /* bit 0, byte +0x0 */
    unsigned long pad09 : 7; /* bit 9, byte +0x0 */
    unsigned long FBW : 6; /* bit 16, byte +0x0 */
    unsigned long pad22 : 2; /* bit 22, byte +0x0 */
    unsigned long PSM : 6; /* bit 24, byte +0x0 */
    unsigned long pad30 : 2; /* bit 30, byte +0x0 */
    unsigned long FBMSK : 32; /* bit 32, byte +0x0 */
};

struct sceGsZbuf {
    unsigned long ZBP : 9; /* bit 0, byte +0x0 */
    unsigned long pad09 : 15; /* bit 9, byte +0x0 */
    unsigned long PSM : 4; /* bit 24, byte +0x0 */
    unsigned long pad28 : 4; /* bit 28, byte +0x0 */
    unsigned long ZMSK : 1; /* bit 32, byte +0x0 */
    unsigned long pad33 : 31; /* bit 33, byte +0x0 */
};

struct sceGsBitbltbuf {
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

struct sceGsTrxpos {
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

struct sceGsTrxreg {
    unsigned long RRW : 12; /* bit 0, byte +0x0 */
    unsigned long pad12 : 20; /* bit 12, byte +0x0 */
    unsigned long RRH : 12; /* bit 32, byte +0x0 */
    unsigned long pad44 : 20; /* bit 44, byte +0x0 */
};

struct sceGsTrxdir {
    unsigned long XDR : 2; /* bit 0, byte +0x0 */
    unsigned long pad02 : 62; /* bit 2, byte +0x0 */
};

struct sceGsSignal {
    unsigned int ID; /* +0x0 */
    unsigned int IDMSK; /* +0x4 */
};

struct sceGsLabel {
    unsigned int ID; /* +0x0 */
    unsigned int IDMSK; /* +0x4 */
};

union QWORD {
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
    sceGsPrim PRIM; /* +0x0 */
    sceGsRgbaq RGBAQ; /* +0x8 */
    sceGsSt ST; /* +0x10 */
    sceGsUv UV; /* +0x18 */
    sceGsXyzf XYZF2; /* +0x20 */
    sceGsXyz XYZ2; /* +0x28 */
    sceGsTex0 TEX0_1; /* +0x30 */
    sceGsTex0 TEX0_2; /* +0x38 */
    sceGsClamp CLAMP_1; /* +0x40 */
    sceGsClamp CLAMP_2; /* +0x48 */
    sceGsFog FOG; /* +0x50 */
    sceGsXyzf XYZF3; /* +0x58 */
    sceGsXyz XYZ3; /* +0x60 */
    sceGsTex1 TEX1_1; /* +0x68 */
    sceGsTex1 TEX1_2; /* +0x70 */
    sceGsTex2 TEX2_1; /* +0x78 */
    sceGsTex2 TEX2_2; /* +0x80 */
    sceGsXyoffset XYOFFSET_1; /* +0x88 */
    sceGsXyoffset XYOFFSET_2; /* +0x90 */
    sceGsPrmodecont PRMODECONT; /* +0x98 */
    sceGsPrmode PRMODE; /* +0xa0 */
    sceGsTexclut TEXCLUT; /* +0xa8 */
    sceGsScanmsk SCANMSK; /* +0xb0 */
    sceGsMiptbp1 MIPTBP1_1; /* +0xb8 */
    sceGsMiptbp1 MIPTBP1_2; /* +0xc0 */
    sceGsMiptbp2 MIPTBP2_1; /* +0xc8 */
    sceGsMiptbp2 MIPTBP2_2; /* +0xd0 */
    sceGsTexa TEXA; /* +0xd8 */
    sceGsFogcol FOGCOL; /* +0xe0 */
    tagsceGsReg TEXFLUSH; /* +0xe8 */
    sceGsScissor SCISSOR_1; /* +0xf0 */
    sceGsScissor SCISSOR_2; /* +0xf8 */
    sceGsAlpha ALPHA_1; /* +0x100 */
    sceGsAlpha ALPHA_2; /* +0x108 */
    sceGsDimx DIMX; /* +0x110 */
    sceGsDthe DTHE; /* +0x118 */
    sceGsColclamp COLCLAMP; /* +0x120 */
    sceGsTest TEST_1; /* +0x128 */
    sceGsTest TEST_2; /* +0x130 */
    sceGsPabe PABE; /* +0x138 */
    sceGsFba FBA_1; /* +0x140 */
    sceGsFba FBA_2; /* +0x148 */
    sceGsFrame FRAME_1; /* +0x150 */
    sceGsFrame FRAME_2; /* +0x158 */
    sceGsZbuf ZBUF_1; /* +0x160 */
    sceGsZbuf ZBUF_2; /* +0x168 */
    sceGsBitbltbuf BITBLTBUF; /* +0x170 */
    sceGsTrxpos TRXPOS; /* +0x178 */
    sceGsTrxreg TRXREG; /* +0x180 */
    sceGsTrxdir TRXDIR; /* +0x188 */
    tagsceGsReg HWREG; /* +0x190 */
    sceGsSignal SIGNAL; /* +0x198 */
    tagsceGsReg FINISH; /* +0x1a0 */
    sceGsLabel LABEL; /* +0x1a8 */
    /* aggregate */ int ModFlgs; /* +0x1b0 */
    unsigned char _extractor_padding_00[4]; /* implicitly added by extractor; +0x1b4..0x1b7 */
    /* aggregate */ int GlobalModFlgs; /* +0x1b8 */
    unsigned char _extractor_padding_01[4]; /* implicitly added by extractor; +0x1bc..0x1bf */
    QWORD PackageBuffer[518]; /* +0x1c0 */
    int iBufCount; /* +0x2220 */
    QWORD* pqCurrent; /* +0x2224 */
    sceGifTag* pCurTag; /* +0x2228 */
    signed char iRegs; /* +0x222c */
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

struct SECT_tdstListOfSOSectorsInSoundInteraction_ {
    HIE_tdstSuperObject_* hPointerOfSectorSO; /* +0x0 */
    int lVolume; /* +0x4 */
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

struct MOR_stMorphObject_ {
    GEO_tdstGeometricObject_* hBaseObject; /* +0x0 */
    unsigned int ulNbVectors; /* +0x4 */
    MOR_stMorphVector_* d_stMorphVector; /* +0x8 */
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

union _SND_tduRefEvt {
    unsigned int Id; /* +0x0 */
    _SND_tdstBlockEvent* pstPtr; /* +0x0 */
};

struct tagListNodeSingle {
    unsigned int nIndex; /* +0x0 */
    tagListData* pData; /* +0x4 */
};

struct SECT_tdstListOfSOSectorsInActivityInteraction_ {
    HIE_tdstSuperObject_* hPointerOfSectorSO; /* +0x0 */
};

struct tdstObjectsTablesList_ {
    tdstObjectsTableElement_* d_stObjectsTable; /* +0x0 */
    tdstObjectsTableElement_* d_stInitObjectsTable; /* +0x4 */
    unsigned short wNumberOfElement; /* +0x8 */
    unsigned short wZDxUsed; /* +0xa */
};

struct tdstPLA_Deformation_ {
    unsigned int ulNbOfDeformationLinks; /* +0x0 */
    tdstPLA_DeformationLink_* d_stDeformationLinks; /* +0x4 */
};

struct stMorphData {
    unsigned short uwChannelNumber; /* +0x0 */
    unsigned short uwFrameNumber; /* +0x2 */
    unsigned char ucNbTarget; /* +0x4 */
    unsigned char ucAlign[3]; /* +0x5 */
    short a_xIndexTargetMT[10]; /* +0x8 */
    unsigned char a_ucMorphingAmountMT[10]; /* +0x1c */
};

struct MOR_stMorphVector_ {
    short xVertexIndex; /* +0x0 */
    MTH3D_tdstVector_ stDeformationVector; /* +0x4 */
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
    float (*pLastExecDmaBuffer)[4]; /* +0x30 */
    signed char ucSDLObjectReserveSize; /* +0x34 */
};

struct tdstEvent_ {
    tdstEventInTable_* p_stfEventInTBL; /* +0x0 */
    unsigned short usEventNumberInTBL; /* +0x4 */
    unsigned short uwFrameNumber; /* +0x6 */
    unsigned short uwChannelNumber; /* +0x8 */
    unsigned short uwIsLocalized; /* +0xa */
};

struct TransparentSpriteGen_ {
    float CurrentMatrix[4][4]; /* +0x0 */
    GEO_tdstElementIndexedTriangles_* p_stEIT; /* +0x40 */
    ISI_tdstColor_* pRLIs; /* +0x44 */
    int LightMapU; /* +0x48 */
    float (*pV1)[4]; /* +0x4c */
    float (*pU1)[4]; /* +0x50 */
    float Norme; /* +0x54 */
    unsigned char _extractor_padding_00[8]; /* implicitly added by extractor; +0x58..0x5f */
    MTH4D_tdstMatrix_ Matrix; /* +0x60 */
    int pVT; /* +0xa0 */
};

struct PO_tdstPhysicalObject_ {
    GEO_tdstVisualSet_* _hVisualSet; /* +0x0 */
    tdstPhysicalCollSet_* _hCollideSet; /* +0x4 */
    COL_tdstBoundingSphere_* _hVisualBoundingVolume; /* +0x8 */
    COL_tdstBoundingSphere_* _hCollideBoundingVolume; /* +0xc */
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

struct LST2_tdstAnchorToSECT_tdxHandleOfElementLstActivityInteractionOpt {
    SECT_tdstListOfSOSectorsInActivityInteraction_* hFirstElementOpt; /* +0x0 */
    int lNumberOfElementsOpt; /* +0x4 */
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

struct tag_GLmaterial {
    float vAmbient[4]; /* +0x0 */
    float vDiffuse[4]; /* +0x10 */
    float vSpecular[4]; /* +0x20 */
    float vEmission[4]; /* +0x30 */
    float fShininess; /* +0x40 */
    float fAmbientIndex; /* +0x44 */
    float fDiffuseIndex; /* +0x48 */
    float fSpecularIndex; /* +0x4c */
} __attribute__((aligned(16)));

struct sceGifTag {
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

struct CINE_tdstChannelLink_ {
    HIE_tdstSuperObject_* hSPOLinked; /* +0x0 */
    int lIndexOfChannel; /* +0x4 */
    CINE_tdstChannelLink_* hNextBrotherDyn; /* +0x8 */
    CINE_tdstChannelLink_* hPrevBrotherDyn; /* +0xc */
    LST2_tdstAnchorToCINE_tdxHandleToChannelLinkDyn* hFatherDyn; /* +0x10 */
};

struct LST2_tdstAnchorTotdxHandleToFamilyListDyn {
    tdstFamilyList_* hFirstElementDyn; /* +0x0 */
    tdstFamilyList_* hLastElementDyn; /* +0x4 */
    int lNumberOfElementsDyn; /* +0x8 */
};

struct C_CharacterSdl {
    /* C++ base C_Sdl at +0x0. */
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

struct SCT_tdstListOfSoundEvent_ {
    HIE_tdstSuperObject_* hPointerOfSectorSO; /* +0x0 */
    _SND_tduRefEvt uSoundEvent; /* +0x4 */
};

struct tagListNode {
    tagListNode* pNext; /* +0x0 */
    unsigned int nIndex; /* +0x4 */
    int iSize; /* +0x8 */
    int apData[1]; /* +0xc */
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

struct GMT_tdstCollideMaterial_ {
    short wTypeOfZone; /* +0x0 */
    unsigned short xIdentifier; /* +0x2 */
    MTH3D_tdstVector_ stDirection; /* +0x4 */
    float xCoeff; /* +0x10 */
    unsigned short wTypeForAi; /* +0x14 */
};

struct C_InstanceList {
    unsigned int m_NbInstances; /* +0x0 */
    _SDC_Instance_** m_pList; /* +0x4 */
};

struct DelayedFrees_ {
    int Pointer; /* +0x0 */
    unsigned int CurrentFrame; /* +0x4 */
    unsigned int DisplayList; /* +0x8 */
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

struct C_SdlRef {
    unsigned int m_uRefType; /* +0x0 */
    unsigned int m_uIndexInList; /* +0x4 */
    int m_vpOriginPointer; /* +0x8 */
    int m_vpDestinationPointer; /* +0xc */
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

struct tagGsLoadImage {
    sceGifTag gifTag; /* +0x0 */
    sceGsBitbltbuf bitbltbuf; /* +0x10 */
    long bitbltbufaddr; /* +0x18 */
    sceGsTrxpos trxpos; /* +0x20 */
    long trxposaddr; /* +0x28 */
    sceGsTrxreg trxreg; /* +0x30 */
    long trxregaddr; /* +0x38 */
    sceGsTrxdir trxdir; /* +0x40 */
    long trxdiraddr; /* +0x48 */
};

struct sceGsTexflush {
    unsigned long pad00; /* +0x0 */
};

struct tagGsSetTex {
    sceGifTag gifTag; /* +0x0 */
    sceGsTexflush texflush; /* +0x10 */
    long texflushaddr; /* +0x18 */
    sceGsTex0 tex0; /* +0x20 */
    long tex0addr; /* +0x28 */
    sceGsTex1 tex1; /* +0x30 */
    long tex1addr; /* +0x38 */
    sceGsMiptbp1 miptbp1; /* +0x40 */
    long miptbp1addr; /* +0x48 */
    sceGsMiptbp2 miptbp2; /* +0x50 */
    long miptbp2addr; /* +0x58 */
    sceGsClamp clamp; /* +0x60 */
    long clampaddr; /* +0x68 */
};

struct tagGLtexblock {
    unsigned int nTexID : 10; /* bit 0, byte +0x0 */
    int nStart : 11; /* bit 10, byte +0x0 */
    int nLength : 11; /* bit 21, byte +0x0 */
};

struct tagGLtexindex {
    unsigned int nTexID : 10; /* bit 0, byte +0x0 */
    int nStart : 11; /* bit 10, byte +0x0 */
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
} __attribute__((aligned(16)));

struct tagGLlistpool {
    unsigned int nFreeIndex; /* +0x0 */
    tagListNodeSingle aSingleIndex[64]; /* +0x4 */
    tagListNode* pFirstNode; /* +0x204 */
    tagListNode* pLastNode; /* +0x208 */
};

struct tagGLArrayInfo {
    int size; /* +0x0 */
    unsigned int type; /* +0x4 */
    int stride; /* +0x8 */
    int pointer; /* +0xc */
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
    unsigned char _extractor_padding_08[15]; /* explicit retail gap; +0xe1..0xef */
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
    unsigned char _extractor_padding_09[14]; /* explicit retail gap; +0x5bc2..0x5bcf */
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
    stParamBegin* pCurParamBegin; /* +0x5ce8 */
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
    unsigned char _extractor_padding_10[8]; /* explicit retail gap; +0x6088..0x608f */
    float ViewPort[4]; /* +0x6090 */
    float DepthRange[2]; /* +0x60a0 */
    unsigned char _extractor_padding_11[8]; /* explicit retail gap; +0x60a8..0x60af */
    float vacurColor[2][4]; /* +0x60b0 */
    float (*pvcurColor)[4]; /* +0x60d0 */
    unsigned char _extractor_padding_03[12]; /* implicitly added by extractor; +0x60d4..0x60df */
    float vcurNormal[4]; /* +0x60e0 */
    float vacurTexCoords[2][4]; /* +0x60f0 */
    unsigned int iCurTextureSet; /* +0x6110 */
    float (*pvcurTextCoord)[4]; /* +0x6114 */
    unsigned char bFinalCompile; /* +0x6118 */
    unsigned char _extractor_padding_12[7]; /* explicit retail gap; +0x6119..0x611f */
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
    unsigned char _extractor_padding_13[11]; /* explicit retail gap; +0x61e5..0x61ef */
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
    unsigned char _extractor_padding_14[8]; /* explicit retail gap; +0x6978..0x697f */
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
    sceGifTag* pGifTagFan; /* +0x6bf8 */
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
    sceGifTag* pGifTagBuf0; /* +0x6c5c */
    sceGifTag* pGifTagBuf1; /* +0x6c60 */
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

struct SECT_tdstListOfDNMLights_ {
    GLI_tdstLight_* hDNMLights; /* +0x0 */
    SECT_tdstListOfDNMLights_* hNextBrotherDyn; /* +0x4 */
    SECT_tdstListOfDNMLights_* hPrevBrotherDyn; /* +0x8 */
    LST2_tdstAnchorToSECT_tdxHandleOfElementLstDNMLightsDyn* hFatherDyn; /* +0xc */
};

struct LST2_tdstAnchorToSECT_tdxHandleOfElementLstCollisionInteractionOpt {
    SECT_tdstListOfSOSectorsInCollisionInteraction_* hFirstElementOpt; /* +0x0 */
    int lNumberOfElementsOpt; /* +0x4 */
};

struct _UnoptimizedTransparentCharacters_ {
    float GlobalMatrix[4][4]; /* +0x0 */
    GEO_tdstGeometricObject_* pObj; /* +0x40 */
    GEO_tdstElementIndexedTriangles_* p_stEIT; /* +0x44 */
    unsigned int iElement; /* +0x48 */
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

struct COL_tdstBoundingSphere_ {
    MTH4D_tdstVector_ stCenterPoint; /* +0x0 */
    float xRadius; /* +0x10 */
};

struct tagstVIFCode {
    unsigned short IMMEDIATE; /* +0x0 */
    unsigned char NUM; /* +0x2 */
    unsigned char CMD; /* +0x3 */
};

union GEO_tduVSObject_ {
    GEO_tdstGeometricObject_* p_stGeometricObject; /* +0x0 */
    MOR_stMorphObject_* p_stMorphObject; /* +0x0 */
};

struct SECT_tdstListOfSOSectorsInCollisionInteraction_ {
    HIE_tdstSuperObject_* hPointerOfSectorSO; /* +0x0 */
};

struct _sceDmaTag {
    unsigned short qwc; /* +0x0 */
    unsigned char mark; /* +0x2 */
    unsigned char id; /* +0x3 */
    _sceDmaTag* next; /* +0x4 */
    unsigned int p[2]; /* +0x8 */
};

struct tdstLipsSynchValue_ {
    char cCode; /* +0x0 */
    float xX; /* +0x4 */
    float xY; /* +0x8 */
    float xZ; /* +0xc */
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

struct GLI_tdstUVTransformation {
    float stMat[2][2]; /* +0x0 */
    float stTrans[2]; /* +0x10 */
};

struct C_Sdl {
    int m_SDL_Size; /* +0x0 */
    unsigned int m_SDL_InitSize; /* +0x4 */
    unsigned int m_bReduce; /* +0x8 */
    unsigned int m_DisplayList; /* +0xc */
    tagListData* m_pListData; /* +0x10 */
    unsigned int m_NbRefs; /* +0x14 */
    unsigned int m_NbReservedRefs; /* +0x18 */
    unsigned int m_NbFaces; /* +0x1c */
    unsigned int m_NbElements; /* +0x20 */
    C_SdlRef** m_ppRefs; /* +0x24 */
    tag_stVU1Parameters** m_ppP; /* +0x28 */
    unsigned int m_LastFrameUsed; /* +0x2c */
    unsigned int m_LastFrameInterpolated; /* +0x30 */
    unsigned int m_bIsTransparent; /* +0x34 */
    unsigned int m_bNoInterpolation; /* +0x38 */
    int m_SkinIndex; /* +0x3c */
    GLI_tdstMaterial_* m_SkinMaterial; /* +0x40 */
    int m_bIsBlinking; /* +0x44 */
};

struct SECT_tdstListOfStaticLights_ {
    GLI_tdstLight_* hStaticLights; /* +0x0 */
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

struct GLI_tdstVAToUpdate_ {
    float (*pDestPV)[4]; /* +0x0 */
    GEO_tdstElementIndexedTriangles_* p_stEIT; /* +0x4 */
    MTH3D_tdstVector_* p_stPoints; /* +0x8 */
    unsigned int NbPoints; /* +0xc */
    unsigned int NbDestPoints; /* +0x10 */
    unsigned int bNoInterpol; /* +0x14 */
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
    sceGifTag tagGif; /* +0x30 */
    int vData[4]; /* +0x40 */
};

struct RegisteredTransparentUnoptimizedMap_ {
    float CurrentMatrix[4][4]; /* +0x0 */
    unsigned int NbVertices; /* +0x40 */
    unsigned int stage; /* +0x44 */
    GLI_tdstMaterial_* pMat; /* +0x48 */
    int pColors; /* +0x4c */
    int pUsedUV; /* +0x50 */
    int pVOrg; /* +0x54 */
    unsigned int bUseStrips; /* +0x58 */
    unsigned int iFogIsOn; /* +0x5c */
    float fFogStart; /* +0x60 */
    float fFogEnd; /* +0x64 */
    float fvFogColor[4]; /* +0x68 */
};

struct MTH3D_tdstMatrix_ {
    MTH3D_tdstVector_ stCol_0; /* +0x0 */
    MTH3D_tdstVector_ stCol_1; /* +0xc */
    MTH3D_tdstVector_ stCol_2; /* +0x18 */
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

struct _Sinus_Copy_ {
    float (*pVDest)[4]; /* +0x0 */
    float (*pVCopy)[4]; /* +0x4 */
};

struct tdstElement3d_ {
    unsigned short wElement : 15; /* bit 0, byte +0x0 */
    unsigned short bf1ActiveStatus : 1; /* bit 15, byte +0x0 */
    unsigned char ucChannelNumber; /* +0x2 */
    unsigned char eTypeOfElement; /* +0x3 */
    unsigned char ucTransparency; /* +0x4 */
    unsigned char ucAnimLevel; /* +0x5 */
};

struct LST2_tdstAnchorToSECT_tdxHandleOfElementLstGraphicInteractionOpt {
    SECT_tdstListOfSOSectorsInGraphicInteraction_* hFirstElementOpt; /* +0x0 */
    int lNumberOfElementsOpt; /* +0x4 */
};

struct tagGLlistdatas {
    tagGLlistdatas* pNext; /* +0x0 */
    int apData[3]; /* +0x4 */
};

struct HIE_tdstModifierObject_ {
    GEO_tdstGeometricObject_* p_stGeometricObject; /* +0x0 */
    int lMulIntensity; /* +0x4 */
    int lAddIntensity; /* +0x8 */
};

struct SECT_tdstListOfSOSectorsInGraphicInteraction_ {
    short wLevelOfDetail; /* +0x0 */
    char cDisplayMode; /* +0x2 */
    HIE_tdstSuperObject_* hPointerOfSectorSO; /* +0x4 */
};

struct LST2_tdstAnchorToSECT_tdxHandleOfElementLstCharacterDyn {
    SECT_tdstListOfSOCharacters_* hFirstElementDyn; /* +0x0 */
    SECT_tdstListOfSOCharacters_* hLastElementDyn; /* +0x4 */
    int lNumberOfElementsDyn; /* +0x8 */
};

struct GLI_tdstMultiTextureMaterial {
    GLI_tdstTexture_* pst_Texture; /* +0x0 */
    char c_Operator; /* +0x4 */
    char c_ColorOperator; /* +0x5 */
    char c_UVSource; /* +0x6 */
    char c_Flags; /* +0x7 */
    unsigned int ulTextureProperties; /* +0x8 */
    GLI_tdstUVTransformation st_UVStaticPos; /* +0xc */
    GLI_tdstUVTransformation st_UVDynamicPos; /* +0x24 */
    float fDynamicAngle; /* +0x3c */
    float fStaticAngle; /* +0x40 */
    unsigned int ulSetMaterialFunction; /* +0x44 */
    float fScaleU; /* +0x48 */
    float fScaleV; /* +0x4c */
};

struct GT3_Reflections_ {
    float Matrix[4][4]; /* +0x0 */
    GEO_tdstElementIndexedTriangles_* p_stEIT; /* +0x40 */
    unsigned int ReflectionType; /* +0x44 */
    SDC_VertexArrays_* pSDC; /* +0x48 */
    unsigned int iElement; /* +0x4c */
};

struct tdstCouple_ {
    unsigned short wChild; /* +0x0 */
    unsigned short wFather; /* +0x2 */
};

struct SECT_tdstListOfSOCharacters_ {
    HIE_tdstSuperObject_* hPointerOfCharacter; /* +0x0 */
    SECT_tdstListOfSOCharacters_* hNextBrotherDyn; /* +0x4 */
    SECT_tdstListOfSOCharacters_* hPrevBrotherDyn; /* +0x8 */
    LST2_tdstAnchorToSECT_tdxHandleOfElementLstCharacterDyn* hFatherDyn; /* +0xc */
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

struct LST2_tdstAnchorToSCT_tdxHandleOfLstSoundEventOpt {
    SCT_tdstListOfSoundEvent_* hFirstElementOpt; /* +0x0 */
    int lNumberOfElementsOpt; /* +0x4 */
};

struct LST2_tdstAnchorToSECT_tdxHandleOfElementLstDNMLightsDyn {
    SECT_tdstListOfDNMLights_* hFirstElementDyn; /* +0x0 */
    SECT_tdstListOfDNMLights_* hLastElementDyn; /* +0x4 */
    int lNumberOfElementsDyn; /* +0x8 */
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

struct tdstBrain_ {
    AI_tdstMind_* p_stMind; /* +0x0 */
    GMT_tdstGameMaterial_* hLastCollidedGoThroughMaterial; /* +0x4 */
    unsigned char bWarnMechanicsFlag; /* +0x8 */
    unsigned char bActiveDuringTransition; /* +0x9 */
};

struct stParamBegin {
    float vObjectBS[4]; /* +0x0 */
    unsigned char bFinalCompile; /* +0x10 */
    unsigned int mode; /* +0x14 */
    tagGLprimbuf* pPrimBuf; /* +0x18 */
};

struct LST2_tdstAnchorToSECT_tdxHandleOfElementLstStaticLightsOpt {
    SECT_tdstListOfStaticLights_* hFirstElementOpt; /* +0x0 */
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

struct IPO_tdstInstanciatedPhysicalObject_ {
    PO_tdstPhysicalObject_* _hPhysicalObject; /* +0x0 */
    int _hCurrentRadiosity; /* +0x4 */
    int a_hRadiosity; /* +0x8 */
    HIE_tdstSuperObject_* hPortalCamera; /* +0xc */
    unsigned int ulLastTransitionID; /* +0x10 */
    float fLastRatioUsed; /* +0x14 */
};

struct tag_stVU1Parameters {
    int tagDMA[4]; /* +0x0 */
    int ivUnpackCode[4]; /* +0x10 */
    float vAmbient[4]; /* +0x20 */
    float vScreenScale[4]; /* +0x30 */
    float vScreenOrg[4]; /* +0x40 */
    float vColorRange[4]; /* +0x50 */
    float fAlpha; /* +0x60 */
    float fShininess; /* +0x64 */
    unsigned int nColorMatMasks; /* +0x68 */
    unsigned int bFogging; /* +0x6c */
    unsigned int eFogMode; /* +0x70 */
    float fFogDensity; /* +0x74 */
    float fFogLinearStart; /* +0x78 */
    float fFogLinearEnd; /* +0x7c */
    unsigned int bTriangleFan; /* +0x80 */
    unsigned int uiClippingMask; /* +0x84 */
    unsigned int uiClippingStep; /* +0x88 */
    unsigned int bAutoNormalize; /* +0x8c */
    unsigned int uiNurbsReturnAddr; /* +0x90 */
    unsigned int ui_TandL_Entrance; /* +0x94 */
    unsigned int uiNurbsRowCount; /* +0x98 */
    unsigned int eClippingMode; /* +0x9c */
};

struct LST2_tdstAnchorToCHN_tdxHandleToMorphElementDyn {
    tdstMorphChannelList_* hFirstElementDyn; /* +0x0 */
    tdstMorphChannelList_* hLastElementDyn; /* +0x4 */
    int lNumberOfElementsDyn; /* +0x8 */
};

unsigned int SDC_g_NbFaces;
unsigned int NbVerticesToProcessWithoutStrips;
unsigned int NbVerticesToProcessWithStrips;
unsigned int TotalVertexArraySizeWithoutStrips;
unsigned int TotalVertexArraySizeWithStrips;
static unsigned int LastVal2;
static unsigned int LastVal1;
int GLI_g_CurrentSkinIndex;
int GLI_g_CurrentSkinMaterial;
int GLIPS2_vDummySDL;
unsigned int DelayedFreesInit;
DelayedFrees_ GLI_g_DelayedFrees[2000];
int Global_CharacterModuleBeingDisplayed;
int GLI_G_InstancesToDisplay[1024];
unsigned int GLI_G_NumberOfInstancesToDisplay;
unsigned int GLI_G_NextStartForThisViewport;
unsigned int GLI_g_NbVAToUpdate;
GLI_tdstVAToUpdate_ GLI_VAToUpdate[500];
float GLI_g_DummyNonIDMatrix[4][4];
int Global_pCurrentActor;
int globale;
unsigned int GLI_g_LastSDLCreationTime;
unsigned int GLI_g_NumberOfSDLsCreatedInThisFrame;
TransparentSpriteGen_ GLI_g_TransparentSpriteGens[200];
unsigned int GLI_g_NbTransparentSpriteGens;
GT3_Reflections_ GLI_g_GT3_Reflections[256];
unsigned int GLI_g_NbGT3_Reflections;
extern unsigned int GLI_g_DMA_SomethingWasDrawn;
extern unsigned int GLI_g_DMA_PreparingOpaque;
extern unsigned int GLI_g_DMA_DrawingAllNZ;
extern unsigned int CTL_Buffer;
extern unsigned int CTL_BufferPos;
float PLICPLOCVERTEXES[1024][4];
unsigned int GLI_g_NbTransparentUnoptimizedMap;
RegisteredTransparentUnoptimizedMap_ GLI_g_TransparentUnoptimizedMapElements[256];
_UnoptimizedTransparentCharacters_ GLI_g_UnOptCharList[500];
unsigned int GLI_g_NbUnOptChars;
_Sinus_Copy_ GLI_G_SINUS_COPIES[500];
unsigned int GLI_G_NB_SINUS_COPIES;
float GlobalMul;
unsigned int GLI_g_CurrentNbCheapSDLsForViewport;
unsigned int GLI_g_CurrentNbCheapSDLs;
unsigned int GLI_G_iNbSdlsInThisFrame;
float a16_fProjectionMatrix[4][4];
unsigned int GLI_g_ProjectionMode;
int g_p_stCurrentViewport;
float g_xSinusSizeMulx;
float g_xSinusSizeMulz;
float g_xSinusSizeMuly;
float g_ffFrameTime;
int PS2glAllocator64;
MTH3D_tdstVector_ stSinEffectAmp;
float a3_xSinEffectBaseMesh[3];
float GLI_fF2pow24;
float a64_fSinTable[128];
int PS2glLiberator;
tagGLcontext g_PS2glContext;
int GLI_BIG_GLOBALS_gs_st_CurrentMatrix;
int GLI_g_LastCyclingMode;
unsigned int GLI_g_CurrentStage;
float GlobalAlphaVal;
float GLI_BIG_GLOBALS_xGlobalAlpha;
int g_p_stLightMapUForNextObjectToDraw;
int g_p_stRawRLIsForThisObject;
float GLI_g_NegVect[4];
MAT_tdstTransformation_ GLI_BIG_GLOBALS_gs_st_CurrentMatrixMultiplyedWithCameraMatrix;
float GLI_g_SpriteGenNorme;
unsigned int SCT_g_DrawingMirrored;
unsigned int GLI_g_CurrentFogMode;
float g_fFogColor[4];
float g_fFogEnd;
float g_fFogStart;
int GLI_BIG_GLOBALS_xFogIsOn;
int GLI_BIG_GLOBALS_lCurrentDrawMask;
tagGScontext g_gsContext;
int AGO_g_BigRainMaterial;
int GLI_BIG_GLOBALS_gs_st_CameraMatrix;
MTH3D_tdstVector_ gs_stCameraPosInGlobal;
char g_DoSmallPlouf;
int g_AGO_PloufMaterial;
int bSwamp_60;
float GLI_g_fBSMultiplicatorActor;
float GLI_g_OOStartMinusEnd;
unsigned int GLI_g_CurrentSDLFogColor;
unsigned int GLI_g_bChromeEffectOnThisLayer;
unsigned int GLI_g_NumberInList;
void* __vt__20C_SdlRef_LocalMatrix;
anon_1 __vt__8C_SdlRef;
unsigned int GLI_g_LatestHadAChrome;
int g_TextMatrixIsIdentity;
float GLI_g_TEXTUREMATRIX_Dummy[16];
void* __vt__24C_SdlRef_TextureIdMatrix;
float GLI_g_SPOMATRIX_Dummy[16];
unsigned int GLI_g_ThisLayerHasScrolling;
void* __vt__22C_SdlRef_TextureMatrix;
char GLI_b_CreatingActorSDL;
float light_specular0[4];
float g_LeftHandedIdentityMatrix[16];
unsigned int hCurrentSDL;
anon_0 __vt__14C_CharacterSdl;
void* __vt__5C_Sdl;
unsigned int GLI_g_InstanceLists;
int Global_CharacterBeingDisplayed;
unsigned int GLI_g_FrameNumber;
short GLI_g_SkinIndice[4];
int GLI_g_SkinMaterials[4];
unsigned int GLI_g_NbSkinsForThisCharacter;
unsigned int GLI_g_bInterpol;
float g_ffFrameTimeLastFrame;
unsigned int GLI_g_NO_INTERPOLATION_FOR_NEXT_FRAME;
unsigned int SDL_g_HasDrawn;

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\u_SDL.cpp lines 81–81 */
/* addr: 0x002c7250  size: 8 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 81
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void GLI_vReinitTempVertexArrays(void)
{
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\u_SDL.cpp lines 3566–3572 */
/* addr: 0x002c7260  size: 28 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 3566
 *   +0x0004 -> line 3567
 *   +0x0008 -> line 3568
 *   +0x000c -> line 3569
 *   +0x0010 -> line 3570
 *   +0x0014 -> line 3572
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void GLI_vRemoveRefs(void)
{
    GLI_g_NbVAToUpdate = 0;
    GLI_G_NumberOfInstancesToDisplay = 0;
    GLI_G_NextStartForThisViewport = 0;
    GLI_G_iNbSdlsInThisFrame = 0;
    GLI_g_CurrentNbCheapSDLs = 0;
    GLI_g_CurrentNbCheapSDLsForViewport = 0;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\u_SDL.cpp lines 3412–3421 */
/* addr: 0x002c7280  size: 52 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 3412
 *   +0x0004 -> line 3416
 *   +0x0008 -> line 3412
 *   +0x000c -> line 3413
 *   +0x0010 -> line 3417
 *   +0x0018 -> line 3420
 *   +0x0028 -> line 3421
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
extern "C" void GLI_vInitGLProjectionMatrix(void);
extern "C" void PS2glGetFloatv(unsigned int pname, float* params);

void GLIPS2_vPrepareCullingForThisFrame(GLD_tdstViewportAttributes_* p_stVpt)
{
    g_p_stCurrentViewport = (int)p_stVpt;
    GLI_g_ProjectionMode = 11;
    GLI_vInitGLProjectionMatrix();
    PS2glGetFloatv(0x0ba7, &a16_fProjectionMatrix[0][0]);
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\u_SDL.cpp lines 3394–3394 */
/* addr: 0x002c72c0  size: 8 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 3394
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void GLI_vProcessAgoLights(void)
{
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\u_SDL.cpp lines 2657–3002 */
/* addr: 0x002c72d0  size: 1920 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 2657
 *   +0x0010 -> line 2667
 *   +0x0014 -> line 2657
 *   +0x0030 -> line 2663
 *   +0x0038 -> line 2665
 *   +0x003c -> line 2667
 *   +0x0044 -> line 2670
 *   +0x0048 -> line 2671
 *   +0x0050 -> line 2670
 *   +0x0054 -> line 2671
 *   +0x0060 -> line 2673
 *   +0x0064 -> line 2675
 *   +0x0070 -> line 2678
 *   +0x0084 -> line 2679
 *   +0x0088 -> line 2681
 *   +0x0098 -> line 2684
 *   +0x00a8 -> line 2689
 *   +0x0188 -> line 2690
 *   +0x0190 -> line 2737
 *   +0x0194 -> line 2729
 *   +0x0198 -> line 2737
 *   +0x019c -> line 2740
 *   +0x01a0 -> line 2724
 *   +0x01a4 -> line 2741
 *   +0x01a8 -> line 2725
 *   +0x01ac -> line 2744
 *   +0x01b0 -> line 2732
 *   +0x01b4 -> line 2729
 *   +0x01b8 -> line 2739
 *   +0x01bc -> line 2742
 *   +0x01c0 -> line 2756
 *   +0x01c4 -> line 2730
 *   +0x01c8 -> line 2745
 *   +0x01cc -> line 2730
 *   +0x01d0 -> line 2747
 *   +0x01d4 -> line 2751
 *   +0x01d8 -> line 2740
 *   +0x01dc -> line 2752
 *   +0x01e0 -> line 2750
 *   +0x01e4 -> line 2729
 *   +0x01e8 -> line 2724
 *   +0x01ec -> line 2727
 *   +0x01f0 -> line 2756
 *   +0x01fc -> line 2731
 *   +0x0200 -> line 2756
 *   +0x0204 -> line 2731
 *   +0x0208 -> line 2729
 *   +0x020c -> line 2741
 *   +0x0210 -> line 2746
 *   +0x0214 -> line 2744
 *   +0x0218 -> line 2749
 *   +0x021c -> line 2734
 *   +0x0224 -> line 2735
 *   +0x022c -> line 2734
 *   +0x0230 -> line 2730
 *   +0x0234 -> line 2736
 *   +0x023c -> line 2735
 *   +0x0240 -> line 2730
 *   +0x0244 -> line 2736
 *   +0x0248 -> line 2754
 *   +0x024c -> line 2731
 *   +0x0254 -> line 2754
 *   +0x0258 -> line 2757
 *   +0x025c -> line 2758
 *   +0x0260 -> line 2759
 *   +0x0264 -> line 2760
 *   +0x0268 -> line 2761
 *   +0x026c -> line 2762
 *   +0x0270 -> line 2765
 *   +0x027c -> line 2767
 *   +0x0288 -> line 2776
 *   +0x028c -> line 2777
 *   +0x0290 -> line 2778
 *   +0x0294 -> line 2779
 *   +0x0298 -> line 2781
 *   +0x029c -> line 2782
 *   +0x02a0 -> line 2783
 *   +0x02a4 -> line 2785
 *   +0x02a8 -> line 2786
 *   +0x02ac -> line 2787
 *   +0x02b0 -> line 2789
 *   +0x02b4 -> line 2790
 *   +0x02b8 -> line 2791
 *   +0x02bc -> line 2793
 *   +0x02c0 -> line 2794
 *   +0x02c4 -> line 2799
 *   +0x02f0 -> line 2800
 *   +0x031c -> line 2801
 *   +0x0348 -> line 2803
 *   +0x0354 -> line 2806
 *   +0x0358 -> line 2807
 *   +0x035c -> line 2809
 *   +0x0360 -> line 2810
 *   +0x0364 -> line 2811
 *   +0x0368 -> line 2821
 *   +0x036c -> line 2820
 *   +0x0370 -> line 2822
 *   +0x0378 -> line 2823
 *   +0x0380 -> line 2826
 *   +0x0388 -> line 2835
 *   +0x038c -> line 2836
 *   +0x0390 -> line 2837
 *   +0x0394 -> line 2838
 *   +0x0398 -> line 2840
 *   +0x039c -> line 2841
 *   +0x03a0 -> line 2842
 *   +0x03a4 -> line 2844
 *   +0x03a8 -> line 2845
 *   +0x03ac -> line 2846
 *   +0x03b0 -> line 2848
 *   +0x03b4 -> line 2849
 *   +0x03b8 -> line 2850
 *   +0x03bc -> line 2852
 *   +0x03c0 -> line 2853
 *   +0x03c4 -> line 2858
 *   +0x03e4 -> line 2859
 *   +0x0404 -> line 2860
 *   +0x0424 -> line 2863
 *   +0x0428 -> line 2864
 *   +0x042c -> line 2866
 *   +0x0430 -> line 2867
 *   +0x0434 -> line 2868
 *   +0x0438 -> line 2878
 *   +0x043c -> line 2877
 *   +0x0440 -> line 2879
 *   +0x0448 -> line 2886
 *   +0x0458 -> line 2888
 *   +0x0488 -> line 2891
 *   +0x04a4 -> line 2893
 *   +0x04a8 -> line 2894
 *   +0x04b0 -> line 2893
 *   +0x04b4 -> line 2894
 *   +0x04c0 -> line 2896
 *   +0x04c4 -> line 2898
 *   +0x04d0 -> line 2901
 *   +0x04e4 -> line 2902
 *   +0x04e8 -> line 2903
 *   +0x05c8 -> line 2904
 *   +0x05d0 -> line 2914
 *   +0x05d4 -> line 2916
 *   +0x05d8 -> line 2914
 *   +0x05dc -> line 2916
 *   +0x05e0 -> line 2924
 *   +0x05e4 -> line 2921
 *   +0x05e8 -> line 2925
 *   +0x05ec -> line 2923
 *   +0x05f0 -> line 2928
 *   +0x05f4 -> line 2926
 *   +0x05f8 -> line 2916
 *   +0x05fc -> line 2929
 *   +0x0600 -> line 2931
 *   +0x0604 -> line 2938
 *   +0x0608 -> line 2914
 *   +0x060c -> line 2916
 *   +0x0614 -> line 2935
 *   +0x0618 -> line 2936
 *   +0x061c -> line 2938
 *   +0x0624 -> line 2912
 *   +0x0628 -> line 2916
 *   +0x0638 -> line 2924
 *   +0x063c -> line 2916
 *   +0x0640 -> line 2938
 *   +0x0644 -> line 2916
 *   +0x0648 -> line 2934
 *   +0x064c -> line 2925
 *   +0x0650 -> line 2930
 *   +0x0654 -> line 2928
 *   +0x0658 -> line 2933
 *   +0x065c -> line 2918
 *   +0x0660 -> line 2919
 *   +0x0664 -> line 2920
 *   +0x0668 -> line 2939
 *   +0x066c -> line 2940
 *   +0x0670 -> line 2941
 *   +0x0674 -> line 2942
 *   +0x0678 -> line 2946
 *   +0x0680 -> line 2950
 *   +0x0684 -> line 2951
 *   +0x0688 -> line 2952
 *   +0x068c -> line 2953
 *   +0x0690 -> line 2955
 *   +0x0694 -> line 2956
 *   +0x0698 -> line 2957
 *   +0x069c -> line 2959
 *   +0x06a0 -> line 2960
 *   +0x06a4 -> line 2961
 *   +0x06a8 -> line 2963
 *   +0x06ac -> line 2964
 *   +0x06b0 -> line 2965
 *   +0x06b4 -> line 2967
 *   +0x06b8 -> line 2968
 *   +0x06bc -> line 2974
 *   +0x06cc -> line 2975
 *   +0x06d0 -> line 2974
 *   +0x06d4 -> line 2975
 *   +0x06e0 -> line 2976
 *   +0x06e4 -> line 2975
 *   +0x06e8 -> line 2976
 *   +0x06f4 -> line 2993
 *   +0x06f8 -> line 2994
 *   +0x06fc -> line 2976
 *   +0x0700 -> line 2995
 *   +0x0708 -> line 2996
 *   +0x0714 -> line 3000
 *   +0x0738 -> line 3001
 *   +0x0750 -> line 3002
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void GLI_vProcessSinusEffectOnObject(GEO_tdstGeometricObject_* pObj)
{
    float (*Temp)[4];
    float fFreq;
    float Mulz[4];
    float Muly[4];
    float Mulx[4];
    float Freq[4];
    unsigned int i;
    float (*pColors)[4];
    float (*pUVChrome)[4];
    float (*pUV2)[4];
    float (*pUV1)[4];
    float (*pVOrg)[4];
    float (*DestSin)[4];
    unsigned int* param0;
    float* sintable;
    float Amp[4];
    float (*pVTemp)[4];
    float* pVT;
    unsigned int stage;
    unsigned int NbVertices;
    unsigned int iElement;
    float (*pVDest)[4];
    float (*pVCopy)[4];
    SDC_VertexArrays_* pSDC;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\u_SDL.cpp lines 2592–2600 */
/* addr: 0x002c7a50  size: 116 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 2592
 *   +0x0018 -> line 2594
 *   +0x0020 -> line 2596
 *   +0x0038 -> line 2597
 *   +0x0040 -> line 2598
 *   +0x0058 -> line 2599
 *   +0x005c -> line 2600
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void GLI_vFreeAllSinusCopies(void)
{
    unsigned int i;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\u_SDL.cpp lines 2432–2547 */
/* addr: 0x002c7ad0  size: 948 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 2432
 *   +0x0004 -> line 2443
 *   +0x0008 -> line 2432
 *   +0x000c -> line 2443
 *   +0x0010 -> line 2432
 *   +0x0038 -> line 2441
 *   +0x003c -> line 2443
 *   +0x0074 -> line 2444
 *   +0x0078 -> line 2443
 *   +0x007c -> line 2444
 *   +0x0080 -> line 2446
 *   +0x0084 -> line 2443
 *   +0x0088 -> line 2444
 *   +0x008c -> line 2443
 *   +0x0090 -> line 2444
 *   +0x0094 -> line 2446
 *   +0x009c -> line 2448
 *   +0x00bc -> line 2450
 *   +0x00c4 -> line 2453
 *   +0x00c8 -> line 2450
 *   +0x00d8 -> line 2453
 *   +0x00e8 -> line 2456
 *   +0x0134 -> line 2460
 *   +0x0140 -> line 2466
 *   +0x0154 -> line 2469
 *   +0x0160 -> line 2471
 *   +0x0168 -> line 2474
 *   +0x016c -> line 2475
 *   +0x0170 -> line 2474
 *   +0x0180 -> line 2479
 *   +0x01a0 -> line 2481
 *   +0x01d0 -> line 2482
 *   +0x01e0 -> line 2486
 *   +0x01f0 -> line 2488
 *   +0x01fc -> line 2490
 *   +0x0230 -> line 2492
 *   +0x0238 -> line 2493
 *   +0x0240 -> line 2496
 *   +0x0248 -> line 2497
 *   +0x0250 -> line 2500
 *   +0x0254 -> line 2502
 *   +0x0258 -> line 2501
 *   +0x025c -> line 2502
 *   +0x0260 -> line 2500
 *   +0x0268 -> line 2503
 *   +0x0278 -> line 2505
 *   +0x0288 -> line 2506
 *   +0x029c -> line 2507
 *   +0x02b0 -> line 2509
 *   +0x02b8 -> line 2512
 *   +0x02c4 -> line 2514
 *   +0x02d0 -> line 2521
 *   +0x02d8 -> line 2523
 *   +0x02e4 -> line 2524
 *   +0x02f0 -> line 2527
 *   +0x0300 -> line 2535
 *   +0x0310 -> line 2539
 *   +0x0318 -> line 2542
 *   +0x031c -> line 2543
 *   +0x0320 -> line 2544
 *   +0x033c -> line 2546
 *   +0x0384 -> line 2547
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void GLI_c_DrawUnoptimizedCharacter(GEO_tdstGeometricObject_* pObj)
{
    unsigned int bUsingStrips;
    GEO_tdstElementIndexedTriangles_* p_stEIT;
    SDC_VertexArrays_* pSDC;
    float (*pUsedUV)[4];
    unsigned int OrgNbStages;
    unsigned int NbVertices;
    unsigned int NbStages;
    unsigned int stage;
    float (*pNormals)[4];
    float (*pUVChrome)[4];
    float (*pUV2)[4];
    float (*pUV1)[4];
    float (*pVOrg)[4];
    unsigned int iElement;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\u_SDL.cpp lines 2325–2426 */
/* addr: 0x002c7e90  size: 1092 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 2325
 *   +0x0004 -> line 2334
 *   +0x0008 -> line 2325
 *   +0x000c -> line 2334
 *   +0x0010 -> line 2325
 *   +0x0034 -> line 2334
 *   +0x006c -> line 2335
 *   +0x0070 -> line 2334
 *   +0x0074 -> line 2335
 *   +0x0078 -> line 2338
 *   +0x0080 -> line 2334
 *   +0x0084 -> line 2335
 *   +0x0088 -> line 2334
 *   +0x008c -> line 2335
 *   +0x0090 -> line 2338
 *   +0x0098 -> line 2347
 *   +0x009c -> line 2341
 *   +0x00a4 -> line 2344
 *   +0x00ac -> line 2347
 *   +0x00bc -> line 2350
 *   +0x00c0 -> line 2351
 *   +0x00c8 -> line 2350
 *   +0x00d8 -> line 2352
 *   +0x00e0 -> line 2355
 *   +0x00ec -> line 2356
 *   +0x00f0 -> line 2355
 *   +0x0100 -> line 2360
 *   +0x0120 -> line 2362
 *   +0x0158 -> line 2363
 *   +0x0168 -> line 2367
 *   +0x0178 -> line 2369
 *   +0x0184 -> line 2371
 *   +0x01b8 -> line 2373
 *   +0x01c0 -> line 2374
 *   +0x01c8 -> line 2377
 *   +0x01d0 -> line 2378
 *   +0x01d8 -> line 2381
 *   +0x01dc -> line 2383
 *   +0x01e0 -> line 2382
 *   +0x01e4 -> line 2383
 *   +0x01e8 -> line 2381
 *   +0x01f0 -> line 2384
 *   +0x0208 -> line 2386
 *   +0x0218 -> line 2387
 *   +0x022c -> line 2388
 *   +0x0240 -> line 2390
 *   +0x025c -> line 2392
 *   +0x02a8 -> line 2394
 *   +0x02ac -> line 2392
 *   +0x02b0 -> line 2394
 *   +0x02b4 -> line 2393
 *   +0x02c0 -> line 2394
 *   +0x02c8 -> line 2393
 *   +0x02d0 -> line 2394
 *   +0x02d8 -> line 2395
 *   +0x02e0 -> line 2398
 *   +0x032c -> line 2399
 *   +0x0340 -> line 2403
 *   +0x0348 -> line 2408
 *   +0x0350 -> line 2409
 *   +0x0358 -> line 2412
 *   +0x0364 -> line 2414
 *   +0x0370 -> line 2415
 *   +0x0378 -> line 2418
 *   +0x0388 -> line 2420
 *   +0x039c -> line 2421
 *   +0x03b0 -> line 2424
 *   +0x03bc -> line 2422
 *   +0x03c0 -> line 2425
 *   +0x03c4 -> line 2424
 *   +0x03c8 -> line 2425
 *   +0x03cc -> line 2424
 *   +0x03d0 -> line 2425
 *   +0x0414 -> line 2426
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void DisplayAllUnOptChar(void)
{
    unsigned int bUsingStrips;
    _UnoptimizedTransparentCharacters_* p;
    SDC_VertexArrays_* pSDC;
    float (*pUsedUV)[4];
    unsigned int OrgNbStages;
    unsigned int NbVertices;
    unsigned int NbStages;
    unsigned int stage;
    float (*pNormals)[4];
    float (*pUVChrome)[4];
    float (*pUV2)[4];
    float (*pUV1)[4];
    float (*pVOrg)[4];
    unsigned int i;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\u_SDL.cpp lines 2070–2293 */
/* addr: 0x002c82e0  size: 2208 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 2070
 *   +0x0004 -> line 2083
 *   +0x0008 -> line 2070
 *   +0x000c -> line 2076
 *   +0x0010 -> line 2070
 *   +0x0038 -> line 2081
 *   +0x003c -> line 2083
 *   +0x0040 -> line 2076
 *   +0x0044 -> line 2083
 *   +0x0080 -> line 2084
 *   +0x0084 -> line 2083
 *   +0x0088 -> line 2084
 *   +0x008c -> line 2083
 *   +0x0094 -> line 2084
 *   +0x00a0 -> line 2086
 *   +0x00a8 -> line 2088
 *   +0x00b0 -> line 2090
 *   +0x00d0 -> line 2092
 *   +0x00e4 -> line 2095
 *   +0x0100 -> line 2099
 *   +0x010c -> line 2101
 *   +0x011c -> line 2103
 *   +0x012c -> line 2105
 *   +0x0138 -> line 2107
 *   +0x0148 -> line 2108
 *   +0x0150 -> line 2111
 *   +0x0160 -> line 2113
 *   +0x0174 -> line 2115
 *   +0x01c0 -> line 2116
 *   +0x01cc -> line 2115
 *   +0x01d0 -> line 2116
 *   +0x01e4 -> line 2117
 *   +0x030c -> line 2118
 *   +0x0314 -> line 2121
 *   +0x0320 -> line 2122
 *   +0x036c -> line 2123
 *   +0x0374 -> line 2125
 *   +0x0394 -> line 2126
 *   +0x03b4 -> line 2128
 *   +0x03bc -> line 2132
 *   +0x03d0 -> line 2135
 *   +0x03d4 -> line 2136
 *   +0x03dc -> line 2135
 *   +0x03e4 -> line 2137
 *   +0x03f0 -> line 2140
 *   +0x03f4 -> line 2141
 *   +0x03f8 -> line 2140
 *   +0x0408 -> line 2145
 *   +0x0428 -> line 2147
 *   +0x0464 -> line 2148
 *   +0x0478 -> line 2154
 *   +0x0490 -> line 2156
 *   +0x049c -> line 2158
 *   +0x04d0 -> line 2160
 *   +0x04d8 -> line 2161
 *   +0x04e0 -> line 2164
 *   +0x04e8 -> line 2165
 *   +0x04f0 -> line 2168
 *   +0x04fc -> line 2178
 *   +0x051c -> line 2181
 *   +0x0524 -> line 2183
 *   +0x052c -> line 2184
 *   +0x0544 -> line 2190
 *   +0x05c8 -> line 2192
 *   +0x05d0 -> line 2194
 *   +0x05e8 -> line 2200
 *   +0x066c -> line 2202
 *   +0x0674 -> line 2204
 *   +0x068c -> line 2215
 *   +0x06a4 -> line 2217
 *   +0x06b0 -> line 2218
 *   +0x06b8 -> line 2220
 *   +0x06d0 -> line 2222
 *   +0x06d8 -> line 2223
 *   +0x06e0 -> line 2234
 *   +0x06f4 -> line 2236
 *   +0x0724 -> line 2250
 *   +0x0730 -> line 2253
 *   +0x0734 -> line 2255
 *   +0x0738 -> line 2254
 *   +0x073c -> line 2255
 *   +0x0740 -> line 2253
 *   +0x0748 -> line 2256
 *   +0x0758 -> line 2258
 *   +0x076c -> line 2259
 *   +0x0780 -> line 2260
 *   +0x0794 -> line 2262
 *   +0x079c -> line 2264
 *   +0x07a8 -> line 2266
 *   +0x07b4 -> line 2271
 *   +0x07c0 -> line 2273
 *   +0x07d0 -> line 2274
 *   +0x07d8 -> line 2277
 *   +0x07e8 -> line 2286
 *   +0x0800 -> line 2288
 *   +0x0804 -> line 2289
 *   +0x0808 -> line 2290
 *   +0x0824 -> line 2292
 *   +0x0870 -> line 2293
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void GLI_c_DrawUnoptimizedMap(GEO_tdstGeometricObject_* pObj)
{
    GLI_tdstTexture_* p_stTexture;
    GLI_SpecificPS2GL_Structure_* pSpecif;
    GEO_tdstElementIndexedTriangles_* p_stEIT;
    SDC_VertexArrays_* pSDC;
    unsigned int NbStages;
    float CurrentMatrix[4][4];
    float (*pUsedUV)[4];
    unsigned int bUsingStrips;
    unsigned int OrgNbStages;
    unsigned int NbVertices;
    unsigned int stage;
    float (*pColors)[4];
    float (*pUVChrome)[4];
    float (*pUV2)[4];
    float (*pUV1)[4];
    float (*pVOrg)[4];
    unsigned int iElement;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\u_SDL.cpp lines 1992–2065 */
/* addr: 0x002c8bb0  size: 684 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1992
 *   +0x0004 -> line 2000
 *   +0x0008 -> line 1992
 *   +0x000c -> line 2000
 *   +0x0010 -> line 1992
 *   +0x0038 -> line 2000
 *   +0x0074 -> line 2001
 *   +0x0078 -> line 2000
 *   +0x007c -> line 2001
 *   +0x0080 -> line 2000
 *   +0x0088 -> line 2001
 *   +0x0094 -> line 2003
 *   +0x009c -> line 2008
 *   +0x00a0 -> line 2005
 *   +0x00a4 -> line 2008
 *   +0x00a8 -> line 2013
 *   +0x00ac -> line 2006
 *   +0x00b0 -> line 2007
 *   +0x00b4 -> line 2009
 *   +0x00bc -> line 2010
 *   +0x00c4 -> line 2011
 *   +0x00cc -> line 2013
 *   +0x00d4 -> line 2016
 *   +0x00d8 -> line 2017
 *   +0x00e0 -> line 2015
 *   +0x00e8 -> line 2016
 *   +0x00ec -> line 2015
 *   +0x00f0 -> line 2017
 *   +0x00f4 -> line 2018
 *   +0x00f8 -> line 2020
 *   +0x00fc -> line 2026
 *   +0x0100 -> line 2016
 *   +0x0108 -> line 2019
 *   +0x0110 -> line 2020
 *   +0x0114 -> line 2023
 *   +0x011c -> line 2024
 *   +0x0124 -> line 2025
 *   +0x012c -> line 2026
 *   +0x0134 -> line 2027
 *   +0x0140 -> line 2028
 *   +0x014c -> line 2029
 *   +0x0158 -> line 2031
 *   +0x0160 -> line 2034
 *   +0x0174 -> line 2035
 *   +0x0188 -> line 2036
 *   +0x019c -> line 2038
 *   +0x01a4 -> line 2039
 *   +0x01ac -> line 2042
 *   +0x01b4 -> line 2044
 *   +0x01c0 -> line 2046
 *   +0x01d0 -> line 2047
 *   +0x01d8 -> line 2050
 *   +0x01ec -> line 2052
 *   +0x0200 -> line 2055
 *   +0x0204 -> line 2058
 *   +0x0208 -> line 2053
 *   +0x020c -> line 2059
 *   +0x0210 -> line 2062
 *   +0x0214 -> line 2059
 *   +0x0218 -> line 2060
 *   +0x0220 -> line 2061
 *   +0x0228 -> line 2064
 *   +0x0230 -> line 2056
 *   +0x0234 -> line 2064
 *   +0x0278 -> line 2065
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void GLI_vDisplayAllTransparentUnoptimizedMapElements(void)
{
    RegisteredTransparentUnoptimizedMap_* p;
    float fFogEnd;
    float fFogStart;
    unsigned int iFogIsOn;
    unsigned int i;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\u_SDL.cpp lines 1959–1989 */
/* addr: 0x002c8e60  size: 176 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1959
 *   +0x0010 -> line 1973
 *   +0x0014 -> line 1960
 *   +0x0028 -> line 1962
 *   +0x002c -> line 1963
 *   +0x0030 -> line 1964
 *   +0x0034 -> line 1965
 *   +0x0038 -> line 1966
 *   +0x003c -> line 1967
 *   +0x0040 -> line 1968
 *   +0x0044 -> line 1970
 *   +0x004c -> line 1971
 *   +0x0054 -> line 1972
 *   +0x005c -> line 1973
 *   +0x0064 -> line 1974
 *   +0x0070 -> line 1975
 *   +0x007c -> line 1976
 *   +0x0088 -> line 1979
 *   +0x008c -> line 1980
 *   +0x0090 -> line 1981
 *   +0x0094 -> line 1982
 *   +0x0098 -> line 1983
 *   +0x009c -> line 1984
 *   +0x00a0 -> line 1985
 *   +0x00a4 -> line 1986
 *   +0x00a8 -> line 1989
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void GLI_vRegisterUnoptimizedMapTransparentElements(unsigned int NbVertices, unsigned int stage, float* CurrentMatrix, GLI_tdstMaterial_* pMat, float* pColors, float* pUsedUV, float* pVOrg, unsigned int bUseStrips)
{
    RegisteredTransparentUnoptimizedMap_* p;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\u_SDL.cpp lines 1726–1911 */
/* addr: 0x002c8f10  size: 2404 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1726
 *   +0x0040 -> line 1741
 *   +0x004c -> line 1746
 *   +0x0050 -> line 1745
 *   +0x0054 -> line 1746
 *   +0x0060 -> line 1754
 *   +0x0064 -> line 1746
 *   +0x0068 -> line 1754
 *   +0x006c -> line 1758
 *   +0x0074 -> line 1755
 *   +0x007c -> line 1758
 *   +0x00b0 -> line 1761
 *   +0x00e0 -> line 1762
 *   +0x010c -> line 1764
 *   +0x0114 -> line 1766
 *   +0x011c -> line 1767
 *   +0x0168 -> line 1768
 *   +0x0170 -> line 1770
 *   +0x0174 -> line 1772
 *   +0x0178 -> line 1770
 *   +0x0188 -> line 1772
 *   +0x0190 -> line 1775
 *   +0x0194 -> line 1774
 *   +0x0198 -> line 1775
 *   +0x01ac -> line 1774
 *   +0x01b0 -> line 1775
 *   +0x01b4 -> line 1774
 *   +0x01b8 -> line 1775
 *   +0x025c -> line 1776
 *   +0x0260 -> line 1775
 *   +0x0284 -> line 1776
 *   +0x028c -> line 1778
 *   +0x0294 -> line 1780
 *   +0x02a0 -> line 1781
 *   +0x02a4 -> line 1783
 *   +0x02bc -> line 1785
 *   +0x02d4 -> line 1787
 *   +0x0308 -> line 1789
 *   +0x0334 -> line 1790
 *   +0x0348 -> line 1794
 *   +0x034c -> line 1795
 *   +0x0350 -> line 1799
 *   +0x0354 -> line 1796
 *   +0x0358 -> line 1797
 *   +0x035c -> line 1794
 *   +0x0360 -> line 1795
 *   +0x0368 -> line 1794
 *   +0x036c -> line 1795
 *   +0x0370 -> line 1796
 *   +0x0374 -> line 1797
 *   +0x037c -> line 1796
 *   +0x0380 -> line 1797
 *   +0x0384 -> line 1799
 *   +0x0388 -> line 1801
 *   +0x0390 -> line 1802
 *   +0x03ac -> line 1804
 *   +0x03b0 -> line 1805
 *   +0x03b8 -> line 1806
 *   +0x03d4 -> line 1808
 *   +0x03e4 -> line 1809
 *   +0x03e8 -> line 1811
 *   +0x0400 -> line 1813
 *   +0x0410 -> line 1814
 *   +0x0434 -> line 1816
 *   +0x0444 -> line 1817
 *   +0x0468 -> line 1819
 *   +0x0474 -> line 1820
 *   +0x0498 -> line 1822
 *   +0x04a4 -> line 1823
 *   +0x04c8 -> line 1826
 *   +0x04e0 -> line 1828
 *   +0x04f0 -> line 1829
 *   +0x0514 -> line 1831
 *   +0x0524 -> line 1832
 *   +0x0548 -> line 1834
 *   +0x0560 -> line 1835
 *   +0x056c -> line 1836
 *   +0x0584 -> line 1838
 *   +0x0590 -> line 1839
 *   +0x05a8 -> line 1840
 *   +0x05b8 -> line 1842
 *   +0x05c4 -> line 1843
 *   +0x05c8 -> line 1845
 *   +0x05e0 -> line 1847
 *   +0x05f8 -> line 1849
 *   +0x0628 -> line 1850
 *   +0x0654 -> line 1851
 *   +0x0664 -> line 1855
 *   +0x0668 -> line 1860
 *   +0x066c -> line 1855
 *   +0x0670 -> line 1856
 *   +0x0674 -> line 1851
 *   +0x0678 -> line 1857
 *   +0x067c -> line 1858
 *   +0x0680 -> line 1855
 *   +0x0684 -> line 1856
 *   +0x0688 -> line 1857
 *   +0x0690 -> line 1856
 *   +0x0694 -> line 1857
 *   +0x0698 -> line 1858
 *   +0x069c -> line 1862
 *   +0x06a0 -> line 1860
 *   +0x06a4 -> line 1862
 *   +0x06ac -> line 1863
 *   +0x06c8 -> line 1865
 *   +0x06cc -> line 1866
 *   +0x06d8 -> line 1867
 *   +0x06f4 -> line 1869
 *   +0x0704 -> line 1870
 *   +0x0708 -> line 1872
 *   +0x0720 -> line 1874
 *   +0x0730 -> line 1875
 *   +0x0754 -> line 1877
 *   +0x0764 -> line 1878
 *   +0x0788 -> line 1880
 *   +0x0794 -> line 1881
 *   +0x07b8 -> line 1883
 *   +0x07c4 -> line 1884
 *   +0x07e8 -> line 1886
 *   +0x0800 -> line 1888
 *   +0x0810 -> line 1889
 *   +0x0834 -> line 1891
 *   +0x0844 -> line 1892
 *   +0x0868 -> line 1895
 *   +0x0880 -> line 1897
 *   +0x088c -> line 1898
 *   +0x08a4 -> line 1900
 *   +0x08b0 -> line 1901
 *   +0x08c8 -> line 1903
 *   +0x08d4 -> line 1904
 *   +0x08ec -> line 1906
 *   +0x0908 -> line 1907
 *   +0x0918 -> line 1909
 *   +0x0920 -> line 1911
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void GLI_vProcessBigRain(void)
{
    unsigned char zTst;
    float fADC;
    float fDist;
    float fAlpha;
    float ValeurALaCon2;
    float ValeurALaCon1;
    float CurrentCamMatrix[4][4];
    float U4;
    float U3;
    float V2;
    float V1;
    long lCurrY;
    long lCurrX;
    long lRainStep;
    long lY;
    long lX;
    float fCurrY;
    float fCurrX;
    float fZ;
    float fY;
    float fX;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\u_SDL.cpp lines 1723–1723 */
/* addr: 0x002c9880  size: 8 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1723
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void GLI_CreateBigRain(void)
{
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\u_SDL.cpp lines 1414–1715 */
/* addr: 0x002c9890  size: 3188 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1414
 *   +0x0020 -> line 1419
 *   +0x002c -> line 1422
 *   +0x0040 -> line 1423
 *   +0x0064 -> line 1424
 *   +0x0068 -> line 1423
 *   +0x00d0 -> line 1424
 *   +0x00d8 -> line 1425
 *   +0x00f0 -> line 1426
 *   +0x00f8 -> line 1428
 *   +0x01b4 -> line 1430
 *   +0x01b8 -> line 1428
 *   +0x01c8 -> line 1430
 *   +0x01cc -> line 1428
 *   +0x01d0 -> line 1430
 *   +0x01d4 -> line 1428
 *   +0x01dc -> line 1430
 *   +0x01e0 -> line 1428
 *   +0x01e8 -> line 1430
 *   +0x0228 -> line 1431
 *   +0x023c -> line 1433
 *   +0x0244 -> line 1435
 *   +0x0250 -> line 1437
 *   +0x0268 -> line 1444
 *   +0x026c -> line 1443
 *   +0x0270 -> line 1445
 *   +0x0274 -> line 1443
 *   +0x027c -> line 1445
 *   +0x0280 -> line 1446
 *   +0x028c -> line 1448
 *   +0x0290 -> line 1451
 *   +0x02b0 -> line 1454
 *   +0x02c4 -> line 1456
 *   +0x02d0 -> line 1459
 *   +0x02d8 -> line 1460
 *   +0x02dc -> line 1459
 *   +0x02ec -> line 1461
 *   +0x02f0 -> line 1463
 *   +0x0308 -> line 1466
 *   +0x031c -> line 1467
 *   +0x0330 -> line 1468
 *   +0x0344 -> line 1470
 *   +0x034c -> line 1471
 *   +0x0354 -> line 1474
 *   +0x035c -> line 1476
 *   +0x0374 -> line 1477
 *   +0x0380 -> line 1476
 *   +0x038c -> line 1477
 *   +0x0390 -> line 1476
 *   +0x03a0 -> line 1477
 *   +0x03a4 -> line 1476
 *   +0x03a8 -> line 1477
 *   +0x03ac -> line 1476
 *   +0x03b0 -> line 1477
 *   +0x03c0 -> line 1478
 *   +0x03c4 -> line 1476
 *   +0x03dc -> line 1477
 *   +0x0400 -> line 1478
 *   +0x0404 -> line 1477
 *   +0x0408 -> line 1478
 *   +0x0410 -> line 1477
 *   +0x0414 -> line 1478
 *   +0x0418 -> line 1477
 *   +0x041c -> line 1478
 *   +0x0424 -> line 1479
 *   +0x0444 -> line 1480
 *   +0x0448 -> line 1479
 *   +0x048c -> line 1480
 *   +0x0494 -> line 1482
 *   +0x04a4 -> line 1483
 *   +0x04b4 -> line 1485
 *   +0x04bc -> line 1487
 *   +0x04c8 -> line 1488
 *   +0x04d0 -> line 1491
 *   +0x04e0 -> line 1495
 *   +0x0500 -> line 1497
 *   +0x0504 -> line 1507
 *   +0x055c -> line 1509
 *   +0x0564 -> line 1510
 *   +0x056c -> line 1512
 *   +0x057c -> line 1516
 *   +0x0580 -> line 1518
 *   +0x0584 -> line 1516
 *   +0x0588 -> line 1518
 *   +0x058c -> line 1516
 *   +0x0590 -> line 1514
 *   +0x059c -> line 1515
 *   +0x05a0 -> line 1514
 *   +0x05a4 -> line 1515
 *   +0x05a8 -> line 1516
 *   +0x05c0 -> line 1518
 *   +0x05c4 -> line 1521
 *   +0x05c8 -> line 1518
 *   +0x05cc -> line 1520
 *   +0x05d0 -> line 1519
 *   +0x05d8 -> line 1520
 *   +0x05e0 -> line 1523
 *   +0x05e4 -> line 1524
 *   +0x05f0 -> line 1527
 *   +0x05f4 -> line 1529
 *   +0x05fc -> line 1531
 *   +0x0600 -> line 1533
 *   +0x067c -> line 1535
 *   +0x06a8 -> line 1536
 *   +0x06b8 -> line 1535
 *   +0x06bc -> line 1536
 *   +0x06c8 -> line 1537
 *   +0x06e0 -> line 1536
 *   +0x06e4 -> line 1537
 *   +0x06f0 -> line 1540
 *   +0x06f4 -> line 1541
 *   +0x06f8 -> line 1539
 *   +0x06fc -> line 1541
 *   +0x0700 -> line 1543
 *   +0x0704 -> line 1540
 *   +0x0708 -> line 1543
 *   +0x0714 -> line 1537
 *   +0x0718 -> line 1539
 *   +0x071c -> line 1540
 *   +0x0720 -> line 1541
 *   +0x0724 -> line 1543
 *   +0x072c -> line 1548
 *   +0x073c -> line 1549
 *   +0x0740 -> line 1551
 *   +0x0744 -> line 1555
 *   +0x0748 -> line 1551
 *   +0x074c -> line 1556
 *   +0x0760 -> line 1558
 *   +0x0774 -> line 1560
 *   +0x0780 -> line 1562
 *   +0x0798 -> line 1570
 *   +0x079c -> line 1569
 *   +0x07a0 -> line 1568
 *   +0x07a8 -> line 1570
 *   +0x07ac -> line 1571
 *   +0x07b8 -> line 1573
 *   +0x07bc -> line 1576
 *   +0x07e0 -> line 1579
 *   +0x07f4 -> line 1581
 *   +0x0800 -> line 1584
 *   +0x0808 -> line 1585
 *   +0x080c -> line 1584
 *   +0x081c -> line 1586
 *   +0x0820 -> line 1588
 *   +0x0838 -> line 1590
 *   +0x084c -> line 1591
 *   +0x0860 -> line 1592
 *   +0x0874 -> line 1594
 *   +0x087c -> line 1595
 *   +0x0884 -> line 1598
 *   +0x088c -> line 1600
 *   +0x08a4 -> line 1601
 *   +0x08b0 -> line 1600
 *   +0x08bc -> line 1601
 *   +0x08c0 -> line 1600
 *   +0x08d0 -> line 1601
 *   +0x08d4 -> line 1600
 *   +0x08d8 -> line 1601
 *   +0x08dc -> line 1600
 *   +0x08e0 -> line 1601
 *   +0x08f0 -> line 1602
 *   +0x08f4 -> line 1600
 *   +0x090c -> line 1601
 *   +0x0930 -> line 1602
 *   +0x0934 -> line 1601
 *   +0x0938 -> line 1602
 *   +0x0940 -> line 1601
 *   +0x0944 -> line 1602
 *   +0x0948 -> line 1601
 *   +0x094c -> line 1602
 *   +0x0954 -> line 1603
 *   +0x0974 -> line 1604
 *   +0x0978 -> line 1603
 *   +0x09bc -> line 1604
 *   +0x09c4 -> line 1605
 *   +0x0a50 -> line 1607
 *   +0x0a58 -> line 1609
 *   +0x0a68 -> line 1610
 *   +0x0a70 -> line 1613
 *   +0x0a80 -> line 1616
 *   +0x0b6c -> line 1617
 *   +0x0b70 -> line 1616
 *   +0x0b74 -> line 1618
 *   +0x0b88 -> line 1621
 *   +0x0b94 -> line 1699
 *   +0x0b98 -> line 1621
 *   +0x0b9c -> line 1699
 *   +0x0ba0 -> line 1621
 *   +0x0ba4 -> line 1699
 *   +0x0be4 -> line 1701
 *   +0x0bec -> line 1703
 *   +0x0bf4 -> line 1706
 *   +0x0bfc -> line 1709
 *   +0x0c40 -> line 1711
 *   +0x0c48 -> line 1713
 *   +0x0c50 -> line 1715
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void GT3_DisplayAllReflections(void)
{
    unsigned char zTst;
    unsigned int iElement;
    SDC_VertexArrays_* pSDC;
    unsigned int bUsingStrips;
    float fdY;
    float fdX;
    float fY;
    float fX;
    unsigned int NbPlicPlocs;
    int i;
    MTH3D_tdstVector_ Dir;
    MTH3D_tdstVector_ Pos;
    unsigned int FirstVertex;
    unsigned int Vertex;
    char OLDg_DoSmallPlouf;
    unsigned int NbVertices;
    float (*pColors)[4];
    float (*pUVChrome)[4];
    float (*pUV2)[4];
    float (*pUV1)[4];
    float (*pVOrg)[4];
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\u_SDL.cpp lines 1330–1357 */
/* addr: 0x002ca510  size: 468 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1330
 *   +0x0004 -> line 1333
 *   +0x0008 -> line 1330
 *   +0x000c -> line 1333
 *   +0x0010 -> line 1330
 *   +0x001c -> line 1333
 *   +0x0058 -> line 1334
 *   +0x005c -> line 1333
 *   +0x0060 -> line 1334
 *   +0x0064 -> line 1333
 *   +0x006c -> line 1334
 *   +0x0078 -> line 1336
 *   +0x0080 -> line 1338
 *   +0x008c -> line 1344
 *   +0x0098 -> line 1346
 *   +0x009c -> line 1344
 *   +0x011c -> line 1346
 *   +0x0124 -> line 1347
 *   +0x012c -> line 1348
 *   +0x0134 -> line 1349
 *   +0x013c -> line 1350
 *   +0x0158 -> line 1351
 *   +0x0170 -> line 1352
 *   +0x0174 -> line 1356
 *   +0x01bc -> line 1357
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void GLI_vDisplayAllTransparentSpriteGens(void)
{
    unsigned int i;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\u_SDL.cpp lines 1247–1280 */
/* addr: 0x002ca6f0  size: 212 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1247
 *   +0x0014 -> line 1256
 *   +0x0018 -> line 1258
 *   +0x0020 -> line 1261
 *   +0x002c -> line 1267
 *   +0x0034 -> line 1269
 *   +0x003c -> line 1271
 *   +0x0040 -> line 1272
 *   +0x004c -> line 1271
 *   +0x0050 -> line 1272
 *   +0x0090 -> line 1273
 *   +0x009c -> line 1274
 *   +0x00ac -> line 1276
 *   +0x00b8 -> line 1278
 *   +0x00bc -> line 1280
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void GLI_vRemoveAllInstances(GEO_tdstGeometricObject_* pObj)
{
    _SDC_Instance_* pInstance;
    C_InstanceList* pInstanceList;
    SDC_VertexArrays_* pSDC;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\u_SDL.cpp lines 1198–1244 */
/* addr: 0x002ca7d0  size: 104 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1198
 *   +0x0010 -> line 1207
 *   +0x0014 -> line 1209
 *   +0x001c -> line 1212
 *   +0x0028 -> line 1218
 *   +0x0030 -> line 1235
 *   +0x0038 -> line 1237
 *   +0x0044 -> line 1239
 *   +0x0050 -> line 1240
 *   +0x0054 -> line 1244
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void GLI_vRemoveInstanceIfExists(GEO_tdstGeometricObject_* pObj)
{
    HIE_tdstSuperObject_* pSPO;
    C_InstanceList* pInstanceList;
    SDC_VertexArrays_* pSDC;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\u_SDL.cpp lines 552–1190 */
/* addr: 0x002ca840  size: 3860 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 552
 *   +0x003c -> line 595
 *   +0x0040 -> line 579
 *   +0x0044 -> line 595
 *   +0x0048 -> line 625
 *   +0x004c -> line 578
 *   +0x0054 -> line 581
 *   +0x005c -> line 625
 *   +0x0068 -> line 627
 *   +0x0070 -> line 628
 *   +0x0084 -> line 630
 *   +0x0088 -> line 632
 *   +0x0090 -> line 633
 *   +0x00a4 -> line 639
 *   +0x00b4 -> line 640
 *   +0x00bc -> line 649
 *   +0x00c0 -> line 644
 *   +0x00c4 -> line 649
 *   +0x00d8 -> line 650
 *   +0x00e0 -> line 652
 *   +0x011c -> line 654
 *   +0x0128 -> line 662
 *   +0x012c -> line 664
 *   +0x0134 -> line 666
 *   +0x0158 -> line 668
 *   +0x0168 -> line 678
 *   +0x016c -> line 668
 *   +0x0170 -> line 678
 *   +0x0180 -> line 668
 *   +0x0188 -> line 678
 *   +0x01c0 -> line 681
 *   +0x01d4 -> line 684
 *   +0x01f8 -> line 687
 *   +0x0204 -> line 688
 *   +0x0208 -> line 692
 *   +0x0210 -> line 705
 *   +0x0220 -> line 707
 *   +0x0230 -> line 712
 *   +0x0238 -> line 714
 *   +0x023c -> line 716
 *   +0x0248 -> line 719
 *   +0x0250 -> line 720
 *   +0x0258 -> line 724
 *   +0x0270 -> line 726
 *   +0x0280 -> line 728
 *   +0x0288 -> line 726
 *   +0x0294 -> line 727
 *   +0x0298 -> line 729
 *   +0x02a0 -> line 733
 *   +0x02a4 -> line 732
 *   +0x02a8 -> line 733
 *   +0x02c4 -> line 734
 *   +0x02c8 -> line 738
 *   +0x02d8 -> line 740
 *   +0x02e8 -> line 743
 *   +0x02f0 -> line 745
 *   +0x02f8 -> line 747
 *   +0x0304 -> line 748
 *   +0x0308 -> line 752
 *   +0x0310 -> line 754
 *   +0x0318 -> line 756
 *   +0x0324 -> line 758
 *   +0x0328 -> line 763
 *   +0x0330 -> line 774
 *   +0x0340 -> line 775
 *   +0x0348 -> line 779
 *   +0x0360 -> line 780
 *   +0x0378 -> line 784
 *   +0x0380 -> line 786
 *   +0x038c -> line 791
 *   +0x03d8 -> line 793
 *   +0x03e0 -> line 794
 *   +0x03e8 -> line 797
 *   +0x03f4 -> line 798
 *   +0x03f8 -> line 801
 *   +0x0428 -> line 803
 *   +0x0430 -> line 808
 *   +0x0448 -> line 809
 *   +0x0460 -> line 813
 *   +0x0468 -> line 817
 *   +0x0484 -> line 819
 *   +0x0488 -> line 820
 *   +0x0490 -> line 821
 *   +0x049c -> line 822
 *   +0x04a0 -> line 825
 *   +0x04c8 -> line 828
 *   +0x04e4 -> line 831
 *   +0x04e8 -> line 828
 *   +0x04ec -> line 831
 *   +0x0508 -> line 839
 *   +0x0518 -> line 840
 *   +0x0528 -> line 842
 *   +0x0570 -> line 843
 *   +0x0588 -> line 848
 *   +0x0590 -> line 849
 *   +0x0594 -> line 851
 *   +0x05a4 -> line 859
 *   +0x05a8 -> line 852
 *   +0x05ac -> line 859
 *   +0x05b4 -> line 864
 *   +0x05bc -> line 865
 *   +0x05c8 -> line 866
 *   +0x05d8 -> line 867
 *   +0x05e0 -> line 868
 *   +0x05e4 -> line 870
 *   +0x05e8 -> line 868
 *   +0x05ec -> line 869
 *   +0x05f0 -> line 870
 *   +0x05fc -> line 869
 *   +0x0604 -> line 868
 *   +0x0610 -> line 869
 *   +0x0620 -> line 870
 *   +0x0628 -> line 903
 *   +0x0630 -> line 910
 *   +0x0638 -> line 908
 *   +0x063c -> line 912
 *   +0x0640 -> line 911
 *   +0x0644 -> line 908
 *   +0x064c -> line 909
 *   +0x0650 -> line 911
 *   +0x0654 -> line 912
 *   +0x0670 -> line 916
 *   +0x067c -> line 918
 *   +0x0688 -> line 919
 *   +0x0694 -> line 920
 *   +0x0698 -> line 922
 *   +0x06a8 -> line 923
 *   +0x06b8 -> line 925
 *   +0x0700 -> line 926
 *   +0x0710 -> line 928
 *   +0x0718 -> line 930
 *   +0x0720 -> line 931
 *   +0x072c -> line 932
 *   +0x0740 -> line 934
 *   +0x0750 -> line 937
 *   +0x0754 -> line 940
 *   +0x0760 -> line 943
 *   +0x076c -> line 944
 *   +0x0778 -> line 948
 *   +0x0788 -> line 949
 *   +0x079c -> line 950
 *   +0x07b0 -> line 952
 *   +0x07b8 -> line 953
 *   +0x07c4 -> line 955
 *   +0x07d0 -> line 957
 *   +0x07dc -> line 958
 *   +0x07e8 -> line 961
 *   +0x07f8 -> line 964
 *   +0x07fc -> line 969
 *   +0x0800 -> line 964
 *   +0x0808 -> line 965
 *   +0x0818 -> line 969
 *   +0x0868 -> line 970
 *   +0x0878 -> line 973
 *   +0x0884 -> line 976
 *   +0x088c -> line 977
 *   +0x0898 -> line 979
 *   +0x08e0 -> line 980
 *   +0x08f0 -> line 982
 *   +0x08f8 -> line 983
 *   +0x0904 -> line 988
 *   +0x0908 -> line 984
 *   +0x090c -> line 988
 *   +0x0914 -> line 989
 *   +0x0920 -> line 991
 *   +0x0968 -> line 992
 *   +0x0978 -> line 996
 *   +0x0980 -> line 997
 *   +0x0988 -> line 1001
 *   +0x098c -> line 1002
 *   +0x0990 -> line 1001
 *   +0x0998 -> line 1010
 *   +0x099c -> line 1008
 *   +0x09a0 -> line 1013
 *   +0x09a4 -> line 1010
 *   +0x09a8 -> line 1013
 *   +0x09b8 -> line 1018
 *   +0x09bc -> line 1023
 *   +0x09c0 -> line 1018
 *   +0x09c4 -> line 1023
 *   +0x09cc -> line 1024
 *   +0x09d4 -> line 1026
 *   +0x09dc -> line 1028
 *   +0x09e4 -> line 1029
 *   +0x09ec -> line 1030
 *   +0x09f4 -> line 1037
 *   +0x0a08 -> line 1040
 *   +0x0a14 -> line 1042
 *   +0x0a1c -> line 1043
 *   +0x0a20 -> line 1048
 *   +0x0a28 -> line 1060
 *   +0x0a38 -> line 1062
 *   +0x0a40 -> line 1063
 *   +0x0a48 -> line 1066
 *   +0x0a50 -> line 1070
 *   +0x0a78 -> line 1075
 *   +0x0a7c -> line 1077
 *   +0x0a84 -> line 1075
 *   +0x0a90 -> line 1077
 *   +0x0a9c -> line 1075
 *   +0x0aa4 -> line 1077
 *   +0x0ab0 -> line 1082
 *   +0x0ac8 -> line 1084
 *   +0x0ae0 -> line 1085
 *   +0x0ae8 -> line 1088
 *   +0x0b08 -> line 1091
 *   +0x0b24 -> line 1092
 *   +0x0b28 -> line 1093
 *   +0x0b30 -> line 1096
 *   +0x0b3c -> line 1103
 *   +0x0b68 -> line 1107
 *   +0x0b80 -> line 1118
 *   +0x0b90 -> line 1127
 *   +0x0b94 -> line 1128
 *   +0x0b9c -> line 1125
 *   +0x0ba0 -> line 1121
 *   +0x0ba4 -> line 1122
 *   +0x0ba8 -> line 1123
 *   +0x0bac -> line 1124
 *   +0x0bb0 -> line 1131
 *   +0x0bb8 -> line 1135
 *   +0x0be8 -> line 1136
 *   +0x0c20 -> line 1137
 *   +0x0c58 -> line 1138
 *   +0x0c88 -> line 1140
 *   +0x0c8c -> line 1145
 *   +0x0c90 -> line 1140
 *   +0x0c94 -> line 1145
 *   +0x0c9c -> line 1140
 *   +0x0ca8 -> line 1141
 *   +0x0cb0 -> line 1142
 *   +0x0cb8 -> line 1143
 *   +0x0cbc -> line 1145
 *   +0x0dd0 -> line 1147
 *   +0x0dd4 -> line 1148
 *   +0x0de8 -> line 1149
 *   +0x0dec -> line 1147
 *   +0x0df0 -> line 1148
 *   +0x0df4 -> line 1147
 *   +0x0df8 -> line 1148
 *   +0x0dfc -> line 1149
 *   +0x0e1c -> line 1151
 *   +0x0e28 -> line 1154
 *   +0x0e2c -> line 1156
 *   +0x0e30 -> line 1154
 *   +0x0e34 -> line 1161
 *   +0x0e38 -> line 1157
 *   +0x0e3c -> line 1161
 *   +0x0e40 -> line 1157
 *   +0x0e44 -> line 1156
 *   +0x0e48 -> line 1157
 *   +0x0e4c -> line 1160
 *   +0x0e50 -> line 1157
 *   +0x0e5c -> line 1160
 *   +0x0e6c -> line 1162
 *   +0x0e70 -> line 1164
 *   +0x0e78 -> line 1166
 *   +0x0e7c -> line 1167
 *   +0x0e80 -> line 1168
 *   +0x0e84 -> line 1170
 *   +0x0e88 -> line 1171
 *   +0x0e90 -> line 1174
 *   +0x0e98 -> line 1180
 *   +0x0ea0 -> line 1182
 *   +0x0ea4 -> line 1180
 *   +0x0ea8 -> line 1182
 *   +0x0eb0 -> line 1184
 *   +0x0ed8 -> line 1190
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void GLI_c_DrawActorInstance(GEO_tdstGeometricObject_* pObj)
{
    float A1;
    float B1;
    float G1;
    float R1;
    unsigned int FogIsOn;
    float FogStart;
    float FogEnd;
    float OOFogStart;
    unsigned int FogColor;
    float fB;
    float fA;
    unsigned int NbVertices;
    float (*pVOrg)[4];
    void* pTempData;
    unsigned int bUsingStrips;
    float (*pUsedUV)[4];
    unsigned int NbStages;
    unsigned int stage;
    float (*pNormals)[4];
    float (*pUVChrome)[4];
    float (*pUV2)[4];
    float (*pUV1)[4];
    C_SdlRef* pRef;
    GEO_tdstElementIndexedTriangles_* p_stEIT;
    HIE_tdstSuperObject_* Loc_CurrentActor;
    HIE_tdstSuperObject_* pCharacterSPO;
    unsigned int ulCurrentFrame;
    unsigned int Teleported;
    unsigned int iActualElement;
    HIE_tdstSuperObject_* pSPO;
    C_CharacterSdl* pSDL;
    unsigned int iElement;
    unsigned int* pInstanceNormals;
    float (*pVertexArray)[4];
    _SDC_Instance_* pInstance;
    C_InstanceList* pInstanceList;
    SDC_VertexArrays_* pSDC;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\u_SDL.cpp lines 521–545 */
/* addr: 0x002cb760  size: 128 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 524
 *   +0x0004 -> line 521
 *   +0x0008 -> line 522
 *   +0x000c -> line 524
 *   +0x001c -> line 526
 *   +0x0030 -> line 528
 *   +0x003c -> line 530
 *   +0x004c -> line 535
 *   +0x0050 -> line 531
 *   +0x0054 -> line 535
 *   +0x0064 -> line 542
 *   +0x0074 -> line 544
 *   +0x0078 -> line 545
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
int GLIPS2_bCharacterHasTheRightSkin(GLI_tdstMaterial_* hMat, int Index)
{
    unsigned int i;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\u_SDL.cpp lines 507–509 */
/* addr: 0x002cb7e0  size: 12 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 507
 *   +0x0004 -> line 509
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void GLIPS2_vSetNoInterpolationForThisCharacter(HIE_tdstSuperObject_* hPerso)
{
    hPerso->lDisplayPrioriry = 1;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\u_SDL.cpp lines 455–471 */
/* addr: 0x002cb7f0  size: 152 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 455
 *   +0x000c -> line 457
 *   +0x001c -> line 462
 *   +0x0024 -> line 463
 *   +0x0070 -> line 464
 *   +0x0078 -> line 465
 *   +0x0080 -> line 467
 *   +0x0084 -> line 471
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void GLI_vUpdateAllRefs(int bInterpol)
{
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\u_SDL.cpp lines 399–431 */
/* addr: 0x002cb890  size: 268 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 399
 *   +0x0010 -> line 403
 *   +0x0028 -> line 405
 *   +0x0034 -> line 407
 *   +0x003c -> line 408
 *   +0x0048 -> line 410
 *   +0x0054 -> line 412
 *   +0x0068 -> line 413
 *   +0x0070 -> line 416
 *   +0x0084 -> line 418
 *   +0x0088 -> line 416
 *   +0x008c -> line 419
 *   +0x00a0 -> line 420
 *   +0x00a8 -> line 423
 *   +0x00b4 -> line 425
 *   +0x00bc -> line 426
 *   +0x00c8 -> line 427
 *   +0x00e4 -> line 428
 *   +0x00f8 -> line 431
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void GLI_vUpdateAllVAs(void)
{
    GLI_tdstVAToUpdate_* p;
    unsigned int i;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\u_SDL.cpp lines 372–380 */
/* addr: 0x002cb9a0  size: 72 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 372
 *   +0x0014 -> line 375
 *   +0x0020 -> line 377
 *   +0x0024 -> line 378
 *   +0x0028 -> line 377
 *   +0x002c -> line 379
 *   +0x0040 -> line 380
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void GLI_vRemoveCharacterVAFromProcessList(float (*pDest)[4])
{
    unsigned int i;
    GLI_tdstVAToUpdate_* p;
    for (i = 0; i < GLI_g_NbVAToUpdate; i++)
    {
        p = &GLI_VAToUpdate[i];
        if (p->pDestPV == pDest)
            p->pDestPV = NULL;
    }
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\u_SDL.cpp lines 341–365 */
/* addr: 0x002cb9f0  size: 168 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 341
 *   +0x0004 -> line 345
 *   +0x0008 -> line 341
 *   +0x000c -> line 345
 *   +0x0018 -> line 347
 *   +0x0024 -> line 348
 *   +0x002c -> line 352
 *   +0x0038 -> line 354
 *   +0x0050 -> line 356
 *   +0x0060 -> line 358
 *   +0x0084 -> line 359
 *   +0x0088 -> line 360
 *   +0x008c -> line 361
 *   +0x0090 -> line 362
 *   +0x0094 -> line 363
 *   +0x0098 -> line 364
 *   +0x009c -> line 365
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void GLI_vUpdateCharacterVA(float (*pDestPV)[4], GEO_tdstElementIndexedTriangles_* p_stEIT, MTH3D_tdstVector_* p_stPoints, unsigned int NbPoints, unsigned int NbDestPoints, unsigned int bNoInterpol)
{
    unsigned int i;
    GLI_tdstVAToUpdate_* p;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\u_SDL.cpp lines 243–309 */
/* addr: 0x002cbaa0  size: 432 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 243
 *   +0x0014 -> line 258
 *   +0x0020 -> line 260
 *   +0x002c -> line 262
 *   +0x0058 -> line 268
 *   +0x0064 -> line 270
 *   +0x0078 -> line 273
 *   +0x0084 -> line 275
 *   +0x00b8 -> line 276
 *   +0x00c0 -> line 277
 *   +0x00cc -> line 278
 *   +0x00e0 -> line 279
 *   +0x00f0 -> line 280
 *   +0x00f8 -> line 281
 *   +0x00fc -> line 283
 *   +0x0100 -> line 281
 *   +0x0104 -> line 282
 *   +0x0108 -> line 283
 *   +0x0114 -> line 282
 *   +0x011c -> line 281
 *   +0x0128 -> line 282
 *   +0x0138 -> line 283
 *   +0x0140 -> line 284
 *   +0x0148 -> line 285
 *   +0x0150 -> line 289
 *   +0x015c -> line 291
 *   +0x0168 -> line 295
 *   +0x0174 -> line 298
 *   +0x0188 -> line 304
 *   +0x0198 -> line 309
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void GLI_vDrawAllActors(unsigned int bTransparent)
{
    unsigned int i;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\u_SDL.cpp lines 225–234 */
/* addr: 0x002cbc50  size: 136 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 225
 *   +0x0014 -> line 227
 *   +0x0020 -> line 229
 *   +0x0024 -> line 230
 *   +0x0028 -> line 229
 *   +0x002c -> line 231
 *   +0x0040 -> line 233
 *   +0x0080 -> line 234
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void GLI_vRemoveInstanceFromDisplay(_SDC_Instance_* pInstance)
{
    unsigned int i;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\u_SDL.cpp lines 185–191 */
/* addr: 0x002cbce0  size: 96 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 185
 *   +0x000c -> line 186
 *   +0x0018 -> line 188
 *   +0x004c -> line 189
 *   +0x0050 -> line 191
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void DestroyDummySDL(void)
{
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\u_SDL.cpp lines 159–175 */
/* addr: 0x002cbd40  size: 140 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 159
 *   +0x001c -> line 162
 *   +0x0020 -> line 164
 *   +0x0038 -> line 166
 *   +0x0044 -> line 167
 *   +0x0048 -> line 169
 *   +0x0054 -> line 171
 *   +0x005c -> line 172
 *   +0x0060 -> line 174
 *   +0x0070 -> line 175
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void GLI_vForceDeleteAllWaitingPointers(void)
{
    unsigned int i;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\u_SDL.cpp lines 138–156 */
/* addr: 0x002cbdd0  size: 188 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 138
 *   +0x001c -> line 143
 *   +0x0020 -> line 145
 *   +0x0050 -> line 147
 *   +0x005c -> line 148
 *   +0x0060 -> line 150
 *   +0x0084 -> line 152
 *   +0x008c -> line 153
 *   +0x0090 -> line 155
 *   +0x00a0 -> line 156
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void GLI_vDeleteAllWaitingPointers(void)
{
    unsigned int i;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\u_SDL.cpp lines 120–135 */
/* addr: 0x002cbe90  size: 312 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 120
 *   +0x000c -> line 122
 *   +0x0088 -> line 125
 *   +0x008c -> line 124
 *   +0x0094 -> line 125
 *   +0x00d0 -> line 127
 *   +0x00dc -> line 129
 *   +0x00e8 -> line 130
 *   +0x00f4 -> line 131
 *   +0x00fc -> line 133
 *   +0x010c -> line 134
 *   +0x0110 -> line 133
 *   +0x0114 -> line 134
 *   +0x0118 -> line 133
 *   +0x011c -> line 134
 *   +0x0128 -> line 135
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void MyDelayedFree(void* p)
{
    unsigned int i;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\u_SDL.cpp lines 102–117 */
/* addr: 0x002cbfd0  size: 312 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 102
 *   +0x000c -> line 104
 *   +0x0088 -> line 107
 *   +0x008c -> line 106
 *   +0x0094 -> line 107
 *   +0x00d0 -> line 109
 *   +0x00dc -> line 111
 *   +0x00e8 -> line 112
 *   +0x00f4 -> line 113
 *   +0x00fc -> line 115
 *   +0x010c -> line 116
 *   +0x0110 -> line 115
 *   +0x0114 -> line 116
 *   +0x0118 -> line 115
 *   +0x011c -> line 116
 *   +0x0128 -> line 117
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void MyglDeleteLists(unsigned int DisplayList)
{
    unsigned int i;
    /* TODO: decompile from asm/... */
}
