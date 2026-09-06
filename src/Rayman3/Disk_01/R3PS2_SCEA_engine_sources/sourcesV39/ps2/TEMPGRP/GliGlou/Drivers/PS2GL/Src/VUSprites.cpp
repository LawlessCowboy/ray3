/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\VUSprites.cpp */
/* Language: C++ */
/* Compiler: MW MIPS C Compiler */

#include <stddef.h>

/* Recovered aggregate layouts from MWCC debug type records. */
typedef struct aggregate aggregate;
typedef struct GLD_tdstViewportAttributes_ GLD_tdstViewportAttributes_;
typedef struct CSpriteController CSpriteController;
typedef struct sceGsTexflush sceGsTexflush;
typedef struct MTH3D_tdstVector_ MTH3D_tdstVector_;
typedef struct GEO_tdstColor_ GEO_tdstColor_;
typedef struct GLI_tdstUVTransformation GLI_tdstUVTransformation;
typedef struct GLI_tdstMultiTextureMaterial GLI_tdstMultiTextureMaterial;
typedef struct GLI_tdstMaterial_ GLI_tdstMaterial_;
typedef struct sceGsBitbltbuf sceGsBitbltbuf;
typedef struct sceGsSignal sceGsSignal;
typedef struct tagGLtexname tagGLtexname;
typedef struct GLI_tdstTexture_ GLI_tdstTexture_;
typedef struct tagListNode tagListNode;
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
typedef struct sceGsTrxpos sceGsTrxpos;
typedef struct sceGsTrxreg sceGsTrxreg;
typedef struct sceGsTrxdir sceGsTrxdir;
typedef struct sceGsLabel sceGsLabel;
typedef union QWORD QWORD;
typedef struct tagGScontext tagGScontext;
typedef struct tag_GLtexture_set tag_GLtexture_set;
typedef union unFunction unFunction;
typedef struct tagGLlistnode tagGLlistnode;
typedef struct tagGLlistcalls tagGLlistcalls;
typedef struct GLI_tdst2DVertex_ GLI_tdst2DVertex_;
typedef struct sceGifTag sceGifTag;
typedef struct tagGsLoadImage tagGsLoadImage;
typedef struct tagGsSetTex tagGsSetTex;
typedef struct tagGLtexblock tagGLtexblock;
typedef struct tagGLtexindex tagGLtexindex;
typedef struct tag_GLlight tag_GLlight;
typedef struct tag_GLmaterial tag_GLmaterial;
typedef struct tagListNodeSingle tagListNodeSingle;
typedef struct tagGLlistpool tagGLlistpool;
typedef struct tagGLArrayInfo tagGLArrayInfo;
typedef struct tagGLcontext tagGLcontext;
typedef struct tagListData tagListData;
typedef struct tagstVIFCode tagstVIFCode;
typedef struct tag_GLtexture tag_GLtexture;
typedef struct _sceDmaTag _sceDmaTag;
typedef struct tagGLprimbuf tagGLprimbuf;
typedef struct GLI_tdstAnimatedTextureNode_ GLI_tdstAnimatedTextureNode_;
typedef struct tagGLlistdatas tagGLlistdatas;
typedef struct tag_GLtexture_image tag_GLtexture_image;
typedef struct stParamBegin stParamBegin;
typedef struct MTH4D_tdstVector_ MTH4D_tdstVector_;
typedef struct MTH4D_tdstMatrix_ MTH4D_tdstMatrix_;
typedef struct MAT_tdstTransformation_ MAT_tdstTransformation_;
typedef struct GLI_tdstCamera_ GLI_tdstCamera_;

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

struct CSpriteController {
    int m_SpBufferVP[2]; /* +0x0 */
    int m_SpBufferVC[2]; /* +0x8 */
    int m_SpBufferVT[2]; /* +0x10 */
    unsigned int m_CurrentFrame; /* +0x18 */
    unsigned int m_NbVertices; /* +0x1c */
    unsigned int m_MaxNbSpritesVertices; /* +0x20 */
    int m_CurrentSpriteListIndex; /* +0x24 */
    float (*) m_CurrentVP[4]; /* +0x28 */
    int m_CurrentVC; /* +0x2c */
    int m_CurrentVT; /* +0x30 */
    GLI_tdstMaterial_* m_pCurrentMaterial; /* +0x34 */
    GLI_tdstTexture_* m_pCurrentTexture; /* +0x38 */
    GLI_tdstTexture_* m_pCurrentAnimTexture; /* +0x3c */
    unsigned int m_CurrentSpriteType; /* +0x40 */
    float m_CurrentCameraMatrix[4][4]; /* +0x50 */
    unsigned int m_DepthTestWasDisabled; /* +0x90 */
    unsigned int m_ForceAlphaTest; /* +0x94 */
    float m_Sprite_2D_DX; /* +0x98 */
    float m_Sprite_2D_DY; /* +0x9c */
    float m_Sprite_2D_OFFSX; /* +0xa0 */
    float m_Sprite_2D_OFFSY; /* +0xa4 */
    float m_Sprite_2D_DX_CORRECT; /* +0xa8 */
    float m_Sprite_2D_DY_CORRECT; /* +0xac */
    unsigned int m_DepthTestDisabled; /* +0xb0 */
};

struct sceGsTexflush {
    unsigned long pad00; /* +0x0 */
};

struct MTH3D_tdstVector_ {
    float xX; /* +0x0 */
    float xY; /* +0x4 */
    float xZ; /* +0x8 */
};

struct GEO_tdstColor_ {
    float xR; /* +0x0 */
    float xG; /* +0x4 */
    float xB; /* +0x8 */
    float xA; /* +0xc */
};

struct GLI_tdstUVTransformation {
    float stMat[2][2]; /* +0x0 */
    float stTrans[2]; /* +0x10 */
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
    GLI_tdstMultiTextureMaterial a_stMultiMaterial[4]; /* +0x88 */
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

struct sceGsSignal {
    unsigned int ID; /* +0x0 */
    unsigned int IDMSK; /* +0x4 */
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

struct tagListNode {
    tagListNode* pNext; /* +0x0 */
    unsigned int nIndex; /* +0x4 */
    int iSize; /* +0x8 */
    int apData[1]; /* +0xc */
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
    /* aggregate */ int GlobalModFlgs; /* +0x1b8 */
    QWORD PackageBuffer[518]; /* +0x1c0 */
    int iBufCount; /* +0x2220 */
    QWORD* pqCurrent; /* +0x2224 */
    sceGifTag* pCurTag; /* +0x2228 */
    signed char iRegs; /* +0x222c */
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

struct GLI_tdst2DVertex_ {
    float xX; /* +0x0 */
    float xY; /* +0x4 */
    float xOoZ; /* +0x8 */
};

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

struct tagListNodeSingle {
    unsigned int nIndex; /* +0x0 */
    tagListData* pData; /* +0x4 */
};

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
    float vScissorBox[4]; /* +0xf0 */
    float fIndexClearValue; /* +0x100 */
    unsigned int eAlphaTestFunc; /* +0x104 */
    float fAlphaTestRef; /* +0x108 */
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
    stParamBegin* pCurParamBegin; /* +0x5ce8 */
    tagGLprimbuf* ppCurPrimBufHead; /* +0x5cec */
    float (*) pCurListVData[4]; /* +0x5cf0 */
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
    float avClipPlane[6][4]; /* +0x6010 */
    unsigned int eMatrixMode; /* +0x6070 */
    float (*) pCurMatrix[4][4]; /* +0x6074 */
    float (*) pCurStack[4][4]; /* +0x6078 */
    int piCurStackDepth; /* +0x607c */
    float ViewOrg[2]; /* +0x6080 */
    float ViewPort[4]; /* +0x6090 */
    float DepthRange[2]; /* +0x60a0 */
    float vacurColor[2][4]; /* +0x60b0 */
    float (*) pvcurColor[4]; /* +0x60d0 */
    float vcurNormal[4]; /* +0x60e0 */
    float vacurTexCoords[2][4]; /* +0x60f0 */
    unsigned int iCurTextureSet; /* +0x6110 */
    float (*) pvcurTextCoord[4]; /* +0x6114 */
    unsigned char bFinalCompile; /* +0x6118 */
    float valistColor[2][4]; /* +0x6120 */
    float (*) pvlistColor[4]; /* +0x6140 */
    float vlistNormal[4]; /* +0x6150 */
    float valistTexCoords[2][4]; /* +0x6160 */
    unsigned int ilistTexSet; /* +0x6180 */
    float (*) pvlistTexCoord[4]; /* +0x6184 */
    unsigned char bRasterPosValid; /* +0x6188 */
    float fRasterPos[4]; /* +0x618c */
    float fRasterDistance; /* +0x619c */
    float fRasterColor[2][4]; /* +0x61a0 */
    float RasterMultiTexCoords[2][4]; /* +0x61c0 */
    float (*) pvRasterTexCoord[4]; /* +0x61e0 */
    unsigned char bEdgeFlag; /* +0x61e4 */
    float mFrustumNormal[4][4]; /* +0x61f0 */
    float mGuardBandNormal[4][4]; /* +0x6230 */
    float vZNearFar[4]; /* +0x6270 */
    float vObjectBS[4]; /* +0x6280 */
    float (*) pfvPackaeBSs[4]; /* +0x6290 */
    int iPackageBSIndex; /* +0x6294 */
    float faObjectBoundingBox[6]; /* +0x6298 */
    float ModelViewMatrix[4][4]; /* +0x62b0 */
    float NormalMatrix[4][4]; /* +0x62f0 */
    unsigned int nModelViewStackDepth; /* +0x6330 */
    float ModelViewStack[16][4][4]; /* +0x6340 */
    float ProjectionMatrix[4][4]; /* +0x6740 */
    float GuardBandProjectionMatrix[4][4]; /* +0x6780 */
    unsigned int nProjectionStackDepth; /* +0x67c0 */
    float ProjectionStack[4][4][4]; /* +0x67d0 */
    float NearFarStack[4][2]; /* +0x68d0 */
    float TextureMatrix[2][4][4]; /* +0x68f0 */
    unsigned int nTextureStackDepths[2]; /* +0x6970 */
    float TextureStacks[2][4][4][4]; /* +0x6980 */
    float (*) pTextureMatrix[4][4]; /* +0x6b80 */
    int pnTextureStackDepth; /* +0x6b84 */
    float (*) pTextureStack[4][4]; /* +0x6b88 */
    unsigned int eBeginMode; /* +0x6b8c */
    unsigned char bInBeginEndPair; /* +0x6b90 */
    unsigned char bInDisplayListExecution; /* +0x6b91 */
    int iBufLimit; /* +0x6b94 */
    int iBufCount; /* +0x6b98 */
    float (*) pVBuf[4]; /* +0x6b9c */
    float (*) pCBuf[4]; /* +0x6ba0 */
    float (*) pNBuf[4]; /* +0x6ba4 */
    float (*) pTBuf[4]; /* +0x6ba8 */
    float (*) pCBuf_b[4]; /* +0x6bac */
    float (*) pTBuf_b[4]; /* +0x6bb0 */
    float (*) pVIFDMABuf[4]; /* +0x6bb4 */
    float (*) pVIFDMABufUnaligned[4]; /* +0x6bb8 */
    float (*) pVIFInBuf[4]; /* +0x6bbc */
    float (*) pVIFOutBuf[4]; /* +0x6bc0 */
    float (*) pVIFIBufTail[4]; /* +0x6bc4 */
    float (*) pVIFOBufTail[4]; /* +0x6bc8 */
    int iLightModel; /* +0x6bcc */
    _sceDmaTag* pVU1_DMA_parameters; /* +0x6bd0 */
    _sceDmaTag* pVU1_DMA_buf0; /* +0x6bd4 */
    _sceDmaTag* pVU1_DMA_buf1; /* +0x6bd8 */
    float (*) pmClipping[4][4]; /* +0x6bdc */
    float (*) pmNormal[4][4]; /* +0x6be0 */
    float (*) pmClippingScreen[4][4]; /* +0x6be4 */
    float (*) pmLocalScreen[4][4]; /* +0x6be8 */
    float (*) pmModelView[4][4]; /* +0x6bec */
    float (*) pvClampLimit[4]; /* +0x6bf0 */
    int (*) pClippingFlags[4]; /* +0x6bf4 */
    sceGifTag* pGifTagFan; /* +0x6bf8 */
    float (*) pmD[4][4]; /* +0x6bfc */
    float (*) pmVP[4][4]; /* +0x6c00 */
    float (*) pmS[4][4]; /* +0x6c04 */
    float (*) pmh[4][4]; /* +0x6c08 */
    float (*) pvAmbient[4]; /* +0x6c0c */
    float (*) pvEmission[4]; /* +0x6c10 */
    float (*) pvScreenScale[4]; /* +0x6c14 */
    float (*) pvColorRange[4]; /* +0x6c18 */
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
    float (*) pVBuf0[4]; /* +0x6c68 */
    float (*) pNBuf0[4]; /* +0x6c6c */
    float (*) pCBuf0[4]; /* +0x6c70 */
    float (*) pTBuf0[4]; /* +0x6c74 */
    float (*) pCBuf0_b[4]; /* +0x6c78 */
    float (*) pTBuf0_b[4]; /* +0x6c7c */
    float (*) pVBuf1[4]; /* +0x6c80 */
    float (*) pNBuf1[4]; /* +0x6c84 */
    float (*) pCBuf1[4]; /* +0x6c88 */
    float (*) pTBuf1[4]; /* +0x6c8c */
    float (*) pCBuf1_b[4]; /* +0x6c90 */
    float (*) pTBuf1_b[4]; /* +0x6c94 */
    tagstVIFCode* pMSCAL; /* +0x6c98 */
    unsigned char VU1Package[10000]; /* +0x6ca0 */
};

struct tagListData {
    unsigned int eMode; /* +0x0 */
    tagGLlistcalls* pCalls; /* +0x4 */
    tagGLlistdatas* pDatas; /* +0x8 */
    tagGLprimbuf* pPrimBufHead; /* +0xc */
    tagGLprimbuf* pPrimBufTail; /* +0x10 */
    float (*) pDmaBuffer[4]; /* +0x14 */
    unsigned int uiSDLSize; /* +0x18 */
    int pSDLIndices; /* +0x1c */
    unsigned int uiSDLIndicesSize; /* +0x20 */
    unsigned int uiSDLBits; /* +0x24 */
    unsigned long ModFlgs; /* +0x28 */
    float (*) pLastExecDmaBuffer[4]; /* +0x30 */
    signed char ucSDLObjectReserveSize; /* +0x34 */
};

struct tagstVIFCode {
    unsigned short IMMEDIATE; /* +0x0 */
    unsigned char NUM; /* +0x2 */
    unsigned char CMD; /* +0x3 */
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

struct _sceDmaTag {
    unsigned short qwc; /* +0x0 */
    unsigned char mark; /* +0x2 */
    unsigned char id; /* +0x3 */
    _sceDmaTag* next; /* +0x4 */
    unsigned int p[2]; /* +0x8 */
};

struct tagGLprimbuf {
    tagGLprimbuf* pNext; /* +0x0 */
    unsigned int nCount; /* +0x4 */
    unsigned char bEOP; /* +0x8 */
    int pCode; /* +0xc */
    float (*) pData[4]; /* +0x10 */
    int pTexUnit; /* +0x14 */
    _sceDmaTag tagDma; /* +0x20 */
    sceGifTag tagGif; /* +0x30 */
    int vData[4]; /* +0x40 */
};

struct GLI_tdstAnimatedTextureNode_ {
    GLI_tdstTexture_* p_stTexture; /* +0x0 */
    float xDisplayTime; /* +0x4 */
    GLI_tdstAnimatedTextureNode_* p_stNextDisplayNode; /* +0x8 */
};

struct tagGLlistdatas {
    tagGLlistdatas* pNext; /* +0x0 */
    int apData[3]; /* +0x4 */
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

struct stParamBegin {
    float vObjectBS[4]; /* +0x0 */
    unsigned char bFinalCompile; /* +0x10 */
    unsigned int mode; /* +0x14 */
    tagGLprimbuf* pPrimBuf; /* +0x18 */
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
    MTH4D_tdstMatrix_ stTransformMatrix; /* +0x10 */
    MTH4D_tdstVector_ stScaleVector; /* +0x50 */
};

struct GLI_tdstCamera_ {
    int lCameraMode; /* +0x0 */
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

int pSpriteController;
unsigned int GLI_g_UseAlphaTest;
float GLI_BIG_GLOBALS_xGlobalAlpha;
int g_p_stVpt;
unsigned char g_GLI_ForcedAAAColor[3];
char g_GLI_bForceAAAColor;
int g_bDrawingBlackFrame;
float gs_fCoefOfMultiplicationForAnimatedTexture;
float g_AGO_AnimTimeScale;
unsigned int SCT_g_DrawingMirrored;
tagGScontext g_gsContext;
tagGLcontext g_PS2glContext;
float myColorRange[4];
unsigned int GLI_g_ProjectionMode;
float GLI_g_NegVect[4];
unsigned int GLI_g_DontRefreshAnimated;
unsigned char g_bHasTextureAnimationFinished;
float g_BaseTimeForParticleAnimation;
unsigned char g_bTakeCareOfAnimationCoordination;
int GLI_BIG_GLOBALS_lCurrentDrawMask;
int GLI_g_AnimatedTextureToUse;
unsigned int GLI_g_CurrentStage;
int PS2glLiberator;
int PS2glAllocator64;

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\VUSprites.cpp lines 83–100 */
/* addr: 0x002d0dc0  size: 48 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 83
 *   +0x0004 -> line 84
 *   +0x0008 -> line 86
 *   +0x000c -> line 88
 *   +0x0010 -> line 89
 *   +0x0014 -> line 90
 *   +0x0018 -> line 91
 *   +0x001c -> line 92
 *   +0x0020 -> line 93
 *   +0x0024 -> line 95
 *   +0x0028 -> line 100
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void PS2ASM_SearchBlocInChain(void* Chain, void* Bloc)
{
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\VUSprites.cpp lines 2489–2489 */
/* addr: 0x002d0df0  size: 20 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0008 -> line 2489
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void GLI_vDraw2DRectangleWithColor(float xXMin, float xXMax, float xYMin, float xYMax, GLI_tdstMaterial_* hMaterial, unsigned int ulColor)
{
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\VUSprites.cpp lines 2482–2482 */
/* addr: 0x002d0e10  size: 24 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0008 -> line 2482
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void GLI_vDrawFireSpriteGroup(GLI_tdstMaterial_* param0, float (*) pData[4], unsigned int NbParticles)
{
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\VUSprites.cpp lines 2476–2476 */
/* addr: 0x002d0e30  size: 48 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0008 -> line 2476
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void GLI_vDrawWorldQuadWithUVsAndAlpha(GLD_tdstViewportAttributes_* param0, float* x1, float* x2, float* x3, float* x4, float U1, float V1, float U2, float V2, float fAlpha1, float fAlpha2, float fAlpha3, float fAlpha4, GLI_tdstMaterial_* VisualMaterial)
{
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\VUSprites.cpp lines 2465–2465 */
/* addr: 0x002d0e60  size: 32 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0008 -> line 2465
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
int GLI_vDrawWorldPlanarSprite(MTH3D_tdstVector_* param0, GLI_tdstMaterial_* pMaterial, float fscaleX, float fscaleY, GLD_tdstViewportAttributes_* _p_stViewport, unsigned int AnimTime)
{
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\VUSprites.cpp lines 2459–2459 */
/* addr: 0x002d0e80  size: 48 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0008 -> line 2459
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void GLI_vDrawWorldQuadOpt(GLD_tdstViewportAttributes_* param0, float* x1, float* x2, float* x3, float* x4, GLI_tdstMaterial_* pMaterial)
{
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\VUSprites.cpp lines 2454–2454 */
/* addr: 0x002d0eb0  size: 40 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0008 -> line 2454
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void GLI_vDrawWorldOrthoPlanarOrientedSprite(float* param0, void* pMaterial, float fscaleX, float fscaleY, GLD_tdstViewportAttributes_* _p_stViewport, MTH3D_tdstVector_* p_stV1, MTH3D_tdstVector_* p_stV2, float fAngle)
{
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\VUSprites.cpp lines 2448–2448 */
/* addr: 0x002d0ee0  size: 56 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0008 -> line 2448
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
int GLI_vDrawWorldOrthoPlanarSpriteColor(MTH3D_tdstVector_* param0, GLI_tdstMaterial_* hVisualMaterial, float SizeX, float SizeY, GLD_tdstViewportAttributes_* _p_stViewport, unsigned int AnimTime, MTH3D_tdstVector_* p_stV1, MTH3D_tdstVector_* p_stV2, unsigned int ulColor)
{
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\VUSprites.cpp lines 2441–2441 */
/* addr: 0x002d0f20  size: 48 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0008 -> line 2441
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
int GLI_vDrawWorldOrthoPlanarSprite(MTH3D_tdstVector_* param0, GLI_tdstMaterial_* hVisualMaterial, float SizeX, float SizeY, GLD_tdstViewportAttributes_* _p_stViewport, unsigned int AnimTime, MTH3D_tdstVector_* p_stV1, MTH3D_tdstVector_* p_stV2)
{
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\VUSprites.cpp lines 2433–2433 */
/* addr: 0x002d0f50  size: 48 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0008 -> line 2433
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
int GLI_vDrawWorldSpriteWithUVsOpt(MTH3D_tdstVector_* param0, GLI_tdstMaterial_* hVisualMaterial, float SizeX, float SizeY, float U1, float V1, float U2, float V2, GLD_tdstViewportAttributes_* _p_stViewport, unsigned int AnimTime)
{
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\VUSprites.cpp lines 2426–2426 */
/* addr: 0x002d0f80  size: 8 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 2426
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void GLI_vDrawWorldSemiLookatSpriteWithUVs(void)
{
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\VUSprites.cpp lines 2421–2421 */
/* addr: 0x002d0f90  size: 32 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0008 -> line 2421
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void GLI_vDrawWorldSemiLookatSprite(MTH3D_tdstVector_* param0, MTH3D_tdstVector_* a3_fPosition2, GLI_tdstMaterial_* pMaterial, float fSizeX, int bFade, float Alpha1, float Alpha2)
{
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\VUSprites.cpp lines 2417–2417 */
/* addr: 0x002d0fb0  size: 8 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 2417
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void GLI_v_DisplayTobies(void)
{
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\VUSprites.cpp lines 2413–2413 */
/* addr: 0x002d0fc0  size: 8 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 2413
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void GLI_vDrawWorldTwoTrianglesWithUVs(void)
{
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\VUSprites.cpp lines 2403–2403 */
/* addr: 0x002d0fd0  size: 48 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0008 -> line 2403
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void GLI_vDrawWorldQuadWithUVsAndFade(GLD_tdstViewportAttributes_* param0, float* x1, float* x2, float* x3, float* x4, float U1, float V1, float U2, float V2, GLI_tdstMaterial_* pMaterial, float fAlpha, float fPercentage)
{
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\VUSprites.cpp lines 2398–2398 */
/* addr: 0x002d1000  size: 48 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0008 -> line 2398
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void GLI_vDrawWorldQuadWithUVsOpt(GLD_tdstViewportAttributes_* param0, float* x1, float* x2, float* x3, float* x4, float U1, float V1, float U2, float V2, GLI_tdstMaterial_* pMaterial)
{
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\VUSprites.cpp lines 2388–2394 */
/* addr: 0x002d1030  size: 144 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 2388
 *   +0x0018 -> line 2389
 *   +0x0024 -> line 2391
 *   +0x0074 -> line 2392
 *   +0x0078 -> line 2394
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void GLI_xSetMaterialTextureForTXT(GLI_tdstMaterial_* pMat, GLI_tdstTexture_* pTex)
{
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\VUSprites.cpp lines 2384–2384 */
/* addr: 0x002d10c0  size: 20 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0008 -> line 2384
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void GLI_vDraw2DSpriteWithPercent(GLD_tdstViewportAttributes_* _p_stViewport, float XMin, float YMin, float XMax, float YMax, GLI_tdstMaterial_* hMaterial)
{
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\VUSprites.cpp lines 2376–2379 */
/* addr: 0x002d10e0  size: 56 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 2376
 *   +0x0010 -> line 2377
 *   +0x002c -> line 2379
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void GLI_vDraw2DSpriteAndRotateWithPercentAndUVs(GLD_tdstViewportAttributes_* param0, float XMin, float YMin, float XMax, float YMax, float u1, float u2, float v1, float v2, float xAngle, GLI_tdstMaterial_* hMaterial)
{
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\VUSprites.cpp lines 2370–2373 */
/* addr: 0x002d1120  size: 56 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 2370
 *   +0x0010 -> line 2371
 *   +0x002c -> line 2373
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void GLI_vDraw2DSpriteWithPercentAndUVs(GLD_tdstViewportAttributes_* _p_stViewport, float XMin, float YMin, float XMax, float YMax, float u1, float u2, float v1, float v2, GLI_tdstMaterial_* hMaterial)
{
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\VUSprites.cpp lines 2364–2364 */
/* addr: 0x002d1160  size: 20 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0008 -> line 2364
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void GLI_vDraw2DSpriteWithUVWithOptimization(GLD_tdstViewportAttributes_* p_stVpt, float xXMin, float xXMax, float xYMin, float xYMax, float xUMin, float xUMax, float xVMin, float xVMax, GLI_tdstMaterial_* hMaterial)
{
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\VUSprites.cpp lines 2356–2357 */
/* addr: 0x002d1180  size: 12 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 2356
 *   +0x0004 -> line 2357
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void GLI_vEnableDepthTest(void)
{
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\VUSprites.cpp lines 2352–2353 */
/* addr: 0x002d1190  size: 16 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 2352
 *   +0x0008 -> line 2353
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void GLI_vDisableDepthTest(void)
{
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\VUSprites.cpp lines 2343–2343 */
/* addr: 0x002d11a0  size: 32 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0008 -> line 2343
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
int GLI_vDrawWorldSpriteWithUVsOrientedOpt(MTH3D_tdstVector_* param0, GLI_tdstMaterial_* hVisualMaterial, float SizeX, float SizeY, float U1, float V1, float U2, float V2, GLD_tdstViewportAttributes_* _p_stViewport, unsigned int AnimTime, float fAngle)
{
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\VUSprites.cpp lines 2331–2331 */
/* addr: 0x002d11c0  size: 12 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0004 -> line 2331
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void GLI_vInitSpritesForThisViewport(GLD_tdstViewportAttributes_* _p_stViewport)
{
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\VUSprites.cpp lines 2326–2326 */
/* addr: 0x002d11d0  size: 16 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0004 -> line 2326
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
int GLI_vDrawWorldSpriteColor(MTH3D_tdstVector_* pPosition, GLI_tdstMaterial_* pMaterial, float SizeX, float SizeY, unsigned int ulColor)
{
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\VUSprites.cpp lines 2321–2321 */
/* addr: 0x002d11e0  size: 20 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0008 -> line 2321
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
int GLI_vDrawWorldSpriteWithUVAnimation(GLI_tdstMaterial_* pMaterial, MTH3D_tdstVector_* pPosition, float SizeX, float SizeY, float AnimTime)
{
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\VUSprites.cpp lines 2316–2316 */
/* addr: 0x002d1200  size: 12 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0004 -> line 2316
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
int GLI_vDrawWorldSpriteOpt(MTH3D_tdstVector_* pPosition, GLI_tdstMaterial_* pMaterial, float SizeX, float SizeY)
{
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\VUSprites.cpp lines 2310–2312 */
/* addr: 0x002d1210  size: 132 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 2310
 *   +0x0004 -> line 2311
 *   +0x0008 -> line 2310
 *   +0x0010 -> line 2311
 *   +0x0074 -> line 2312
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void GLI_vReinitSprites(void)
{
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\VUSprites.cpp lines 2305–2307 */
/* addr: 0x002d12a0  size: 140 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 2305
 *   +0x0004 -> line 2306
 *   +0x0008 -> line 2305
 *   +0x0010 -> line 2306
 *   +0x007c -> line 2307
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void GLI_vEndNewSprite(void)
{
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\VUSprites.cpp lines 2300–2302 */
/* addr: 0x002d1330  size: 56 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 2300
 *   +0x0008 -> line 2301
 *   +0x002c -> line 2302
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void GLI_vInitSpriteController(void)
{
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\VUSprites.cpp lines 2208–2288 */
/* addr: 0x002d1370  size: 524 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 2208
 *   +0x0004 -> line 2216
 *   +0x0008 -> line 2208
 *   +0x000c -> line 2220
 *   +0x0010 -> line 2208
 *   +0x0028 -> line 2220
 *   +0x002c -> line 2208
 *   +0x0038 -> line 2216
 *   +0x0044 -> line 2220
 *   +0x0054 -> line 2226
 *   +0x008c -> line 2228
 *   +0x0090 -> line 2226
 *   +0x00a4 -> line 2228
 *   +0x00d8 -> line 2253
 *   +0x00dc -> line 2228
 *   +0x00e0 -> line 2240
 *   +0x00e4 -> line 2239
 *   +0x00e8 -> line 2254
 *   +0x00ec -> line 2228
 *   +0x00f0 -> line 2240
 *   +0x0110 -> line 2256
 *   +0x0114 -> line 2240
 *   +0x0118 -> line 2265
 *   +0x011c -> line 2240
 *   +0x0124 -> line 2228
 *   +0x0128 -> line 2240
 *   +0x0134 -> line 2229
 *   +0x0138 -> line 2240
 *   +0x0158 -> line 2241
 *   +0x0164 -> line 2252
 *   +0x0168 -> line 2253
 *   +0x016c -> line 2254
 *   +0x0170 -> line 2255
 *   +0x0174 -> line 2256
 *   +0x0178 -> line 2257
 *   +0x0184 -> line 2262
 *   +0x0188 -> line 2263
 *   +0x018c -> line 2264
 *   +0x0190 -> line 2265
 *   +0x0194 -> line 2266
 *   +0x019c -> line 2268
 *   +0x01a0 -> line 2269
 *   +0x01a4 -> line 2270
 *   +0x01a8 -> line 2271
 *   +0x01b0 -> line 2273
 *   +0x01b4 -> line 2274
 *   +0x01b8 -> line 2275
 *   +0x01bc -> line 2276
 *   +0x01c0 -> line 2278
 *   +0x01c4 -> line 2279
 *   +0x01c8 -> line 2280
 *   +0x01cc -> line 2281
 *   +0x01d0 -> line 2283
 *   +0x01dc -> line 2286
 *   +0x01e8 -> line 2288
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void CSpriteController::Draw2DRectangleWithColor(float xXMin, float xXMax, float xYMin, float xYMax, GLI_tdstMaterial_* hMaterial, unsigned int ulColor)
{
    float fADC;
    float (*) pV[4];
    unsigned int* pC;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\VUSprites.cpp lines 2115–2203 */
/* addr: 0x002d1580  size: 592 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 2115
 *   +0x0004 -> line 2127
 *   +0x0008 -> line 2115
 *   +0x000c -> line 2123
 *   +0x0010 -> line 2115
 *   +0x0014 -> line 2127
 *   +0x0018 -> line 2115
 *   +0x0024 -> line 2127
 *   +0x0028 -> line 2115
 *   +0x0034 -> line 2123
 *   +0x0040 -> line 2127
 *   +0x0050 -> line 2129
 *   +0x005c -> line 2131
 *   +0x0060 -> line 2129
 *   +0x006c -> line 2131
 *   +0x0074 -> line 2134
 *   +0x007c -> line 2135
 *   +0x0088 -> line 2137
 *   +0x0168 -> line 2141
 *   +0x0170 -> line 2151
 *   +0x017c -> line 2154
 *   +0x0180 -> line 2168
 *   +0x0184 -> line 2169
 *   +0x0188 -> line 2171
 *   +0x018c -> line 2180
 *   +0x0190 -> line 2155
 *   +0x01a0 -> line 2156
 *   +0x01ac -> line 2167
 *   +0x01b0 -> line 2168
 *   +0x01b4 -> line 2169
 *   +0x01b8 -> line 2170
 *   +0x01bc -> line 2171
 *   +0x01c0 -> line 2172
 *   +0x01cc -> line 2177
 *   +0x01d0 -> line 2178
 *   +0x01d4 -> line 2179
 *   +0x01d8 -> line 2180
 *   +0x01dc -> line 2181
 *   +0x01e4 -> line 2183
 *   +0x01e8 -> line 2184
 *   +0x01ec -> line 2185
 *   +0x01f0 -> line 2186
 *   +0x01f8 -> line 2188
 *   +0x01fc -> line 2189
 *   +0x0200 -> line 2190
 *   +0x0204 -> line 2191
 *   +0x0208 -> line 2193
 *   +0x020c -> line 2194
 *   +0x0210 -> line 2195
 *   +0x0214 -> line 2196
 *   +0x0218 -> line 2198
 *   +0x0224 -> line 2201
 *   +0x0230 -> line 2203
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void CSpriteController::Icon2D_Percent(float xXMin, float xYMin, float xXMax, float xYMax, GLI_tdstMaterial_* hMaterial)
{
    float fADC;
    int Alpha;
    float (*) param0[4];
    unsigned int* pC;
    unsigned int Color;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\VUSprites.cpp lines 1884–2021 */
/* addr: 0x002d17d0  size: 1044 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1884
 *   +0x0004 -> line 1896
 *   +0x0008 -> line 1884
 *   +0x000c -> line 1892
 *   +0x0010 -> line 1884
 *   +0x0014 -> line 1896
 *   +0x0018 -> line 1884
 *   +0x0024 -> line 1896
 *   +0x0028 -> line 1884
 *   +0x0048 -> line 1892
 *   +0x0064 -> line 1896
 *   +0x0074 -> line 1898
 *   +0x0080 -> line 1900
 *   +0x0084 -> line 1898
 *   +0x0090 -> line 1900
 *   +0x0098 -> line 1903
 *   +0x00a0 -> line 1904
 *   +0x00ac -> line 1906
 *   +0x018c -> line 1910
 *   +0x0194 -> line 1920
 *   +0x01a0 -> line 1927
 *   +0x01a4 -> line 1923
 *   +0x01a8 -> line 1927
 *   +0x01ac -> line 1945
 *   +0x01b0 -> line 1927
 *   +0x01b4 -> line 1924
 *   +0x01bc -> line 1927
 *   +0x01c0 -> line 1924
 *   +0x01c8 -> line 1925
 *   +0x01cc -> line 1927
 *   +0x01d0 -> line 1928
 *   +0x01d4 -> line 1925
 *   +0x01dc -> line 1933
 *   +0x01e0 -> line 1928
 *   +0x01e8 -> line 1929
 *   +0x01f8 -> line 1930
 *   +0x01fc -> line 1929
 *   +0x0200 -> line 1934
 *   +0x0204 -> line 1935
 *   +0x0208 -> line 1934
 *   +0x020c -> line 1935
 *   +0x0210 -> line 1930
 *   +0x0224 -> line 1936
 *   +0x0228 -> line 1937
 *   +0x022c -> line 1936
 *   +0x0230 -> line 1937
 *   +0x0234 -> line 1938
 *   +0x0240 -> line 1945
 *   +0x0254 -> line 1947
 *   +0x0258 -> line 1949
 *   +0x025c -> line 1948
 *   +0x0260 -> line 1949
 *   +0x0264 -> line 1950
 *   +0x026c -> line 1952
 *   +0x0270 -> line 1953
 *   +0x0274 -> line 1954
 *   +0x0278 -> line 1955
 *   +0x0280 -> line 1957
 *   +0x0284 -> line 1958
 *   +0x0288 -> line 1959
 *   +0x028c -> line 1960
 *   +0x0290 -> line 1962
 *   +0x0294 -> line 1963
 *   +0x0298 -> line 1964
 *   +0x029c -> line 1967
 *   +0x02a4 -> line 1973
 *   +0x02ac -> line 1974
 *   +0x02b8 -> line 1976
 *   +0x02bc -> line 1977
 *   +0x02c0 -> line 1976
 *   +0x02c8 -> line 1977
 *   +0x02d0 -> line 1982
 *   +0x02d4 -> line 1976
 *   +0x02d8 -> line 1994
 *   +0x02dc -> line 1978
 *   +0x02e0 -> line 1982
 *   +0x02e8 -> line 1995
 *   +0x02f0 -> line 1982
 *   +0x02f4 -> line 1977
 *   +0x02f8 -> line 1979
 *   +0x02fc -> line 1983
 *   +0x0304 -> line 1985
 *   +0x0308 -> line 1986
 *   +0x030c -> line 1989
 *   +0x0310 -> line 1988
 *   +0x0314 -> line 1989
 *   +0x0318 -> line 1991
 *   +0x031c -> line 1994
 *   +0x0320 -> line 1995
 *   +0x0328 -> line 1994
 *   +0x032c -> line 1996
 *   +0x0330 -> line 1994
 *   +0x0334 -> line 1999
 *   +0x0338 -> line 1994
 *   +0x0340 -> line 2004
 *   +0x0344 -> line 1995
 *   +0x0348 -> line 1992
 *   +0x034c -> line 2004
 *   +0x0350 -> line 1995
 *   +0x035c -> line 2005
 *   +0x0360 -> line 1996
 *   +0x0364 -> line 2000
 *   +0x0368 -> line 1997
 *   +0x036c -> line 2005
 *   +0x0370 -> line 1997
 *   +0x0374 -> line 1999
 *   +0x037c -> line 2009
 *   +0x0384 -> line 1999
 *   +0x0388 -> line 2000
 *   +0x038c -> line 2010
 *   +0x0390 -> line 2000
 *   +0x0398 -> line 2010
 *   +0x039c -> line 2001
 *   +0x03a0 -> line 2002
 *   +0x03a8 -> line 2004
 *   +0x03ac -> line 2005
 *   +0x03b0 -> line 2006
 *   +0x03b4 -> line 2007
 *   +0x03b8 -> line 2009
 *   +0x03bc -> line 2010
 *   +0x03c0 -> line 2011
 *   +0x03c4 -> line 2012
 *   +0x03c8 -> line 2016
 *   +0x03d4 -> line 2019
 *   +0x03e0 -> line 2021
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void CSpriteController::Icon2D_Rotate_Percent_and_UVs(float xXMin, float xXMax, float xYMin, float xYMax, float xU1, float xU2, float xV1, float xV2, float xAngle, GLI_tdstMaterial_* hMaterial)
{
    float fYm;
    float fXm;
    float fYc;
    float fYs;
    float fXs;
    float fXc;
    float fSin;
    float fCos;
    float fADC;
    int Alpha;
    float (*) pV[4];
    unsigned int* pC;
    unsigned int VMax;
    unsigned int VMin;
    unsigned int UMax;
    unsigned int UMin;
    unsigned int Color;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\VUSprites.cpp lines 1794–1878 */
/* addr: 0x002d1bf0  size: 604 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1794
 *   +0x0004 -> line 1802
 *   +0x0008 -> line 1794
 *   +0x000c -> line 1806
 *   +0x0010 -> line 1794
 *   +0x0028 -> line 1806
 *   +0x002c -> line 1794
 *   +0x0030 -> line 1806
 *   +0x0034 -> line 1794
 *   +0x004c -> line 1802
 *   +0x0068 -> line 1806
 *   +0x0078 -> line 1814
 *   +0x0084 -> line 1808
 *   +0x0088 -> line 1809
 *   +0x0090 -> line 1808
 *   +0x0094 -> line 1814
 *   +0x00a0 -> line 1808
 *   +0x00a4 -> line 1809
 *   +0x00ac -> line 1810
 *   +0x00b0 -> line 1811
 *   +0x00b4 -> line 1808
 *   +0x00b8 -> line 1810
 *   +0x00bc -> line 1825
 *   +0x0128 -> line 1832
 *   +0x012c -> line 1828
 *   +0x0130 -> line 1832
 *   +0x013c -> line 1854
 *   +0x0140 -> line 1829
 *   +0x0148 -> line 1832
 *   +0x014c -> line 1829
 *   +0x0154 -> line 1830
 *   +0x0158 -> line 1832
 *   +0x015c -> line 1834
 *   +0x0160 -> line 1830
 *   +0x0168 -> line 1841
 *   +0x016c -> line 1833
 *   +0x0178 -> line 1834
 *   +0x017c -> line 1835
 *   +0x0180 -> line 1834
 *   +0x0184 -> line 1835
 *   +0x0188 -> line 1842
 *   +0x0190 -> line 1843
 *   +0x0194 -> line 1842
 *   +0x0198 -> line 1843
 *   +0x019c -> line 1835
 *   +0x01a4 -> line 1844
 *   +0x01ac -> line 1845
 *   +0x01b0 -> line 1844
 *   +0x01b4 -> line 1845
 *   +0x01b8 -> line 1846
 *   +0x01c4 -> line 1851
 *   +0x01c8 -> line 1852
 *   +0x01cc -> line 1853
 *   +0x01d0 -> line 1854
 *   +0x01d4 -> line 1855
 *   +0x01dc -> line 1857
 *   +0x01e0 -> line 1858
 *   +0x01e4 -> line 1859
 *   +0x01e8 -> line 1860
 *   +0x01f0 -> line 1862
 *   +0x01f4 -> line 1863
 *   +0x01f8 -> line 1864
 *   +0x01fc -> line 1865
 *   +0x0200 -> line 1867
 *   +0x0204 -> line 1868
 *   +0x0208 -> line 1869
 *   +0x020c -> line 1870
 *   +0x0210 -> line 1872
 *   +0x021c -> line 1875
 *   +0x0228 -> line 1878
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void CSpriteController::Sprite2DWithUV(float xXMin, float xXMax, float xYMin, float xYMax, float xUMin, float xUMax, float xVMin, float xVMax, GLI_tdstMaterial_* hMaterial)
{
    float fADC;
    int Alpha;
    float (*) param0[4];
    unsigned int* pC;
    unsigned int VMax;
    unsigned int VMin;
    unsigned int UMax;
    unsigned int UMin;
    unsigned int Color;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\VUSprites.cpp lines 1715–1787 */
/* addr: 0x002d1e50  size: 884 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1715
 *   +0x0004 -> line 1721
 *   +0x0008 -> line 1715
 *   +0x000c -> line 1725
 *   +0x0010 -> line 1715
 *   +0x0040 -> line 1725
 *   +0x0044 -> line 1715
 *   +0x0048 -> line 1725
 *   +0x004c -> line 1715
 *   +0x0064 -> line 1721
 *   +0x0080 -> line 1725
 *   +0x0090 -> line 1732
 *   +0x00e8 -> line 1733
 *   +0x00ec -> line 1732
 *   +0x00f0 -> line 1733
 *   +0x00f4 -> line 1732
 *   +0x00f8 -> line 1733
 *   +0x0148 -> line 1734
 *   +0x014c -> line 1733
 *   +0x0150 -> line 1734
 *   +0x0154 -> line 1733
 *   +0x0158 -> line 1734
 *   +0x01a8 -> line 1735
 *   +0x01ac -> line 1734
 *   +0x01b0 -> line 1735
 *   +0x01b4 -> line 1734
 *   +0x01b8 -> line 1735
 *   +0x0208 -> line 1742
 *   +0x020c -> line 1735
 *   +0x0210 -> line 1742
 *   +0x0214 -> line 1735
 *   +0x021c -> line 1775
 *   +0x0220 -> line 1742
 *   +0x0224 -> line 1737
 *   +0x0228 -> line 1742
 *   +0x022c -> line 1737
 *   +0x0234 -> line 1748
 *   +0x0238 -> line 1742
 *   +0x023c -> line 1743
 *   +0x0248 -> line 1744
 *   +0x0258 -> line 1745
 *   +0x025c -> line 1744
 *   +0x0260 -> line 1749
 *   +0x0264 -> line 1750
 *   +0x0268 -> line 1749
 *   +0x026c -> line 1750
 *   +0x0270 -> line 1745
 *   +0x0284 -> line 1751
 *   +0x0288 -> line 1752
 *   +0x028c -> line 1751
 *   +0x0290 -> line 1752
 *   +0x0294 -> line 1753
 *   +0x02a0 -> line 1760
 *   +0x02a4 -> line 1762
 *   +0x02ac -> line 1763
 *   +0x02b4 -> line 1764
 *   +0x02bc -> line 1765
 *   +0x02c4 -> line 1767
 *   +0x02cc -> line 1768
 *   +0x02d4 -> line 1769
 *   +0x02dc -> line 1770
 *   +0x02e4 -> line 1772
 *   +0x02ec -> line 1773
 *   +0x02f4 -> line 1774
 *   +0x02fc -> line 1775
 *   +0x0300 -> line 1777
 *   +0x0308 -> line 1778
 *   +0x0310 -> line 1779
 *   +0x0318 -> line 1780
 *   +0x031c -> line 1783
 *   +0x0328 -> line 1785
 *   +0x0334 -> line 1787
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void CSpriteController::DrawWorldQuadWithUVsAndAlpha(float* x1, float* x2, float* x3, float* x4, float u1, float v1, float u2, float v2, float fAlpha1, float fAlpha2, float fAlpha3, float fAlpha4, GLI_tdstMaterial_* pMaterial)
{
    float fADC;
    int VMax;
    int VMin;
    int UMax;
    int UMin;
    float (*) pV[4];
    unsigned int* pC;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\VUSprites.cpp lines 1583–1707 */
/* addr: 0x002d21d0  size: 704 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1583
 *   +0x0004 -> line 1590
 *   +0x0008 -> line 1583
 *   +0x000c -> line 1594
 *   +0x0010 -> line 1583
 *   +0x0040 -> line 1594
 *   +0x0044 -> line 1583
 *   +0x0048 -> line 1594
 *   +0x004c -> line 1583
 *   +0x0058 -> line 1590
 *   +0x0068 -> line 1594
 *   +0x0078 -> line 1600
 *   +0x0084 -> line 1614
 *   +0x008c -> line 1599
 *   +0x0090 -> line 1603
 *   +0x0098 -> line 1619
 *   +0x009c -> line 1648
 *   +0x00a0 -> line 1600
 *   +0x00ac -> line 1614
 *   +0x00b0 -> line 1603
 *   +0x00b8 -> line 1604
 *   +0x00c4 -> line 1614
 *   +0x00c8 -> line 1604
 *   +0x00cc -> line 1608
 *   +0x00dc -> line 1609
 *   +0x00e0 -> line 1614
 *   +0x00e4 -> line 1615
 *   +0x00e8 -> line 1609
 *   +0x00f0 -> line 1615
 *   +0x00f4 -> line 1624
 *   +0x00f8 -> line 1615
 *   +0x00fc -> line 1619
 *   +0x0100 -> line 1616
 *   +0x0110 -> line 1620
 *   +0x0114 -> line 1616
 *   +0x0118 -> line 1625
 *   +0x011c -> line 1626
 *   +0x0120 -> line 1625
 *   +0x0124 -> line 1626
 *   +0x0128 -> line 1620
 *   +0x0138 -> line 1621
 *   +0x013c -> line 1620
 *   +0x0140 -> line 1627
 *   +0x0144 -> line 1628
 *   +0x0148 -> line 1627
 *   +0x014c -> line 1628
 *   +0x0150 -> line 1617
 *   +0x0154 -> line 1621
 *   +0x0158 -> line 1617
 *   +0x015c -> line 1621
 *   +0x0160 -> line 1617
 *   +0x0164 -> line 1621
 *   +0x0168 -> line 1617
 *   +0x016c -> line 1621
 *   +0x0170 -> line 1617
 *   +0x0174 -> line 1631
 *   +0x0178 -> line 1621
 *   +0x017c -> line 1629
 *   +0x0180 -> line 1632
 *   +0x0184 -> line 1630
 *   +0x0188 -> line 1629
 *   +0x018c -> line 1630
 *   +0x0190 -> line 1631
 *   +0x0194 -> line 1632
 *   +0x0198 -> line 1633
 *   +0x01a4 -> line 1640
 *   +0x01a8 -> line 1645
 *   +0x01b0 -> line 1646
 *   +0x01b8 -> line 1647
 *   +0x01c0 -> line 1648
 *   +0x01c4 -> line 1650
 *   +0x01cc -> line 1651
 *   +0x01d4 -> line 1652
 *   +0x01dc -> line 1653
 *   +0x01e0 -> line 1655
 *   +0x01e8 -> line 1656
 *   +0x01f0 -> line 1657
 *   +0x01f8 -> line 1658
 *   +0x01fc -> line 1660
 *   +0x0204 -> line 1661
 *   +0x020c -> line 1662
 *   +0x0214 -> line 1663
 *   +0x0218 -> line 1671
 *   +0x021c -> line 1672
 *   +0x0220 -> line 1673
 *   +0x0224 -> line 1674
 *   +0x0228 -> line 1675
 *   +0x0234 -> line 1677
 *   +0x0238 -> line 1678
 *   +0x023c -> line 1680
 *   +0x0240 -> line 1681
 *   +0x0244 -> line 1687
 *   +0x0248 -> line 1688
 *   +0x024c -> line 1689
 *   +0x0250 -> line 1690
 *   +0x0254 -> line 1692
 *   +0x0258 -> line 1693
 *   +0x025c -> line 1694
 *   +0x0260 -> line 1695
 *   +0x0264 -> line 1699
 *   +0x026c -> line 1700
 *   +0x0274 -> line 1702
 *   +0x0280 -> line 1705
 *   +0x028c -> line 1707
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void CSpriteController::WorldQuadWithUVAndFade(float* x1, float* x2, float* x3, float* x4, float u1, float v1, float u2, float v2, GLI_tdstMaterial_* pMaterial, float fPercentage)
{
    float fADC;
    float vTmp;
    int v5;
    int v3;
    int VMax;
    int VMin;
    int UMax;
    int UMin;
    int Alpha;
    float (*) pV[4];
    unsigned int* pC;
    unsigned int Color;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\VUSprites.cpp lines 1494–1564 */
/* addr: 0x002d2490  size: 508 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1494
 *   +0x0004 -> line 1501
 *   +0x0008 -> line 1494
 *   +0x000c -> line 1505
 *   +0x0010 -> line 1494
 *   +0x0040 -> line 1505
 *   +0x0044 -> line 1494
 *   +0x0048 -> line 1505
 *   +0x004c -> line 1494
 *   +0x0054 -> line 1501
 *   +0x0060 -> line 1505
 *   +0x0070 -> line 1513
 *   +0x007c -> line 1519
 *   +0x0084 -> line 1510
 *   +0x0088 -> line 1513
 *   +0x008c -> line 1519
 *   +0x0090 -> line 1513
 *   +0x0094 -> line 1552
 *   +0x0098 -> line 1513
 *   +0x00a4 -> line 1519
 *   +0x00a8 -> line 1513
 *   +0x00c0 -> line 1519
 *   +0x00c4 -> line 1514
 *   +0x00c8 -> line 1520
 *   +0x00cc -> line 1514
 *   +0x00d0 -> line 1520
 *   +0x00d4 -> line 1514
 *   +0x00d8 -> line 1525
 *   +0x00dc -> line 1520
 *   +0x00e0 -> line 1521
 *   +0x00f0 -> line 1522
 *   +0x00f4 -> line 1521
 *   +0x00f8 -> line 1526
 *   +0x00fc -> line 1527
 *   +0x0100 -> line 1526
 *   +0x0104 -> line 1527
 *   +0x0108 -> line 1522
 *   +0x011c -> line 1528
 *   +0x0120 -> line 1529
 *   +0x0124 -> line 1528
 *   +0x0128 -> line 1529
 *   +0x012c -> line 1530
 *   +0x0138 -> line 1537
 *   +0x013c -> line 1539
 *   +0x0144 -> line 1540
 *   +0x014c -> line 1541
 *   +0x0154 -> line 1542
 *   +0x015c -> line 1544
 *   +0x0164 -> line 1545
 *   +0x016c -> line 1546
 *   +0x0174 -> line 1547
 *   +0x017c -> line 1549
 *   +0x0184 -> line 1550
 *   +0x018c -> line 1551
 *   +0x0194 -> line 1552
 *   +0x0198 -> line 1554
 *   +0x01a0 -> line 1555
 *   +0x01a8 -> line 1556
 *   +0x01b0 -> line 1557
 *   +0x01b4 -> line 1560
 *   +0x01c0 -> line 1562
 *   +0x01cc -> line 1564
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void CSpriteController::WorldQuadWithUV(float* x1, float* x2, float* x3, float* x4, float u1, float v1, float u2, float v2, GLI_tdstMaterial_* pMaterial)
{
    float fADC;
    int VMax;
    int VMin;
    int UMax;
    int UMin;
    float (*) param0[4];
    unsigned int* pC;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\VUSprites.cpp lines 1423–1488 */
/* addr: 0x002d2690  size: 384 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1423
 *   +0x0004 -> line 1430
 *   +0x0008 -> line 1423
 *   +0x000c -> line 1434
 *   +0x0010 -> line 1423
 *   +0x0038 -> line 1430
 *   +0x003c -> line 1434
 *   +0x0050 -> line 1442
 *   +0x005c -> line 1451
 *   +0x0060 -> line 1439
 *   +0x0064 -> line 1450
 *   +0x0068 -> line 1442
 *   +0x006c -> line 1452
 *   +0x0070 -> line 1442
 *   +0x0074 -> line 1476
 *   +0x0078 -> line 1442
 *   +0x00a0 -> line 1443
 *   +0x00ac -> line 1448
 *   +0x00b0 -> line 1449
 *   +0x00b4 -> line 1450
 *   +0x00b8 -> line 1451
 *   +0x00bc -> line 1452
 *   +0x00c0 -> line 1453
 *   +0x00cc -> line 1461
 *   +0x00d0 -> line 1463
 *   +0x00d8 -> line 1464
 *   +0x00e0 -> line 1465
 *   +0x00e8 -> line 1466
 *   +0x00f0 -> line 1468
 *   +0x00f8 -> line 1469
 *   +0x0100 -> line 1470
 *   +0x0108 -> line 1471
 *   +0x0110 -> line 1473
 *   +0x0118 -> line 1474
 *   +0x0120 -> line 1475
 *   +0x0128 -> line 1476
 *   +0x012c -> line 1478
 *   +0x0134 -> line 1479
 *   +0x013c -> line 1480
 *   +0x0144 -> line 1481
 *   +0x0148 -> line 1484
 *   +0x0154 -> line 1486
 *   +0x0160 -> line 1488
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void CSpriteController::WorldQuad(float* x1, float* x2, float* x3, float* x4, GLI_tdstMaterial_* pMaterial)
{
    float fADC;
    float (*) param0[4];
    unsigned int* pC;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\VUSprites.cpp lines 1329–1418 */
/* addr: 0x002d2810  size: 404 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1329
 *   +0x0004 -> line 1338
 *   +0x0008 -> line 1329
 *   +0x000c -> line 1342
 *   +0x0010 -> line 1329
 *   +0x0028 -> line 1342
 *   +0x0030 -> line 1338
 *   +0x0038 -> line 1342
 *   +0x0050 -> line 1350
 *   +0x005c -> line 1359
 *   +0x0060 -> line 1347
 *   +0x0064 -> line 1358
 *   +0x0068 -> line 1350
 *   +0x006c -> line 1360
 *   +0x0070 -> line 1350
 *   +0x0074 -> line 1384
 *   +0x0078 -> line 1369
 *   +0x007c -> line 1384
 *   +0x0080 -> line 1350
 *   +0x0084 -> line 1384
 *   +0x0088 -> line 1350
 *   +0x00ac -> line 1351
 *   +0x00b8 -> line 1356
 *   +0x00bc -> line 1357
 *   +0x00c0 -> line 1358
 *   +0x00c4 -> line 1359
 *   +0x00c8 -> line 1360
 *   +0x00cc -> line 1361
 *   +0x00d8 -> line 1369
 *   +0x00f4 -> line 1370
 *   +0x00f8 -> line 1374
 *   +0x00fc -> line 1375
 *   +0x0100 -> line 1380
 *   +0x0104 -> line 1376
 *   +0x0108 -> line 1377
 *   +0x010c -> line 1379
 *   +0x0110 -> line 1381
 *   +0x0114 -> line 1382
 *   +0x0118 -> line 1386
 *   +0x011c -> line 1387
 *   +0x0120 -> line 1388
 *   +0x0124 -> line 1390
 *   +0x0128 -> line 1391
 *   +0x012c -> line 1393
 *   +0x0130 -> line 1394
 *   +0x0134 -> line 1395
 *   +0x0138 -> line 1396
 *   +0x013c -> line 1398
 *   +0x0140 -> line 1399
 *   +0x0144 -> line 1400
 *   +0x0148 -> line 1401
 *   +0x014c -> line 1416
 *   +0x0150 -> line 1409
 *   +0x0158 -> line 1410
 *   +0x0160 -> line 1412
 *   +0x016c -> line 1415
 *   +0x0178 -> line 1418
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
int CSpriteController::WorldPlanarSprite(MTH3D_tdstVector_* pPosition, GLI_tdstMaterial_* pMaterial, float fSizeX, float fSizeY)
{
    float fADC;
    float Pos[4];
    float Vy[4];
    float Vx[4];
    float (*) pV[4];
    unsigned int* pC;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\VUSprites.cpp lines 1216–1325 */
/* addr: 0x002d29b0  size: 556 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1216
 *   +0x0004 -> line 1230
 *   +0x0008 -> line 1216
 *   +0x000c -> line 1234
 *   +0x0010 -> line 1216
 *   +0x0028 -> line 1234
 *   +0x002c -> line 1216
 *   +0x0040 -> line 1234
 *   +0x0048 -> line 1230
 *   +0x0050 -> line 1234
 *   +0x0060 -> line 1236
 *   +0x0068 -> line 1237
 *   +0x0074 -> line 1246
 *   +0x0080 -> line 1255
 *   +0x0084 -> line 1243
 *   +0x0088 -> line 1254
 *   +0x008c -> line 1246
 *   +0x0090 -> line 1256
 *   +0x0094 -> line 1246
 *   +0x0098 -> line 1265
 *   +0x009c -> line 1269
 *   +0x00a0 -> line 1292
 *   +0x00a4 -> line 1246
 *   +0x00a8 -> line 1292
 *   +0x00b0 -> line 1246
 *   +0x00b4 -> line 1269
 *   +0x00b8 -> line 1246
 *   +0x00bc -> line 1269
 *   +0x00c0 -> line 1246
 *   +0x00d4 -> line 1270
 *   +0x00d8 -> line 1246
 *   +0x00dc -> line 1247
 *   +0x00e8 -> line 1252
 *   +0x00ec -> line 1253
 *   +0x00f0 -> line 1254
 *   +0x00f4 -> line 1255
 *   +0x00f8 -> line 1256
 *   +0x00fc -> line 1257
 *   +0x0108 -> line 1265
 *   +0x0124 -> line 1272
 *   +0x0128 -> line 1266
 *   +0x012c -> line 1277
 *   +0x0130 -> line 1279
 *   +0x0134 -> line 1273
 *   +0x0138 -> line 1278
 *   +0x013c -> line 1274
 *   +0x0140 -> line 1272
 *   +0x0144 -> line 1277
 *   +0x0148 -> line 1285
 *   +0x014c -> line 1290
 *   +0x0150 -> line 1279
 *   +0x0154 -> line 1282
 *   +0x015c -> line 1273
 *   +0x0160 -> line 1278
 *   +0x0164 -> line 1274
 *   +0x0168 -> line 1282
 *   +0x016c -> line 1283
 *   +0x0178 -> line 1284
 *   +0x0184 -> line 1287
 *   +0x0190 -> line 1288
 *   +0x0198 -> line 1289
 *   +0x01a0 -> line 1288
 *   +0x01a4 -> line 1289
 *   +0x01a8 -> line 1294
 *   +0x01ac -> line 1295
 *   +0x01b0 -> line 1296
 *   +0x01b4 -> line 1298
 *   +0x01b8 -> line 1299
 *   +0x01bc -> line 1301
 *   +0x01c0 -> line 1302
 *   +0x01c4 -> line 1303
 *   +0x01c8 -> line 1304
 *   +0x01cc -> line 1306
 *   +0x01d0 -> line 1307
 *   +0x01d4 -> line 1308
 *   +0x01d8 -> line 1309
 *   +0x01dc -> line 1317
 *   +0x01e4 -> line 1318
 *   +0x01ec -> line 1320
 *   +0x01f8 -> line 1323
 *   +0x0204 -> line 1325
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void CSpriteController::WorldOrthoPlanarOriented(MTH3D_tdstVector_* pPosition, GLI_tdstMaterial_* pMaterial, float SizeX, float SizeY, MTH3D_tdstVector_* p_stV1, MTH3D_tdstVector_* p_stV2, float fAngle)
{
    float fs;
    float fc;
    float fADC;
    float Pos[4];
    float Vy[4];
    float Vx[4];
    float (*) pV[4];
    unsigned int* pC;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\VUSprites.cpp lines 1118–1211 */
/* addr: 0x002d2be0  size: 524 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1118
 *   +0x0004 -> line 1129
 *   +0x0008 -> line 1118
 *   +0x000c -> line 1133
 *   +0x0010 -> line 1118
 *   +0x0028 -> line 1133
 *   +0x002c -> line 1118
 *   +0x0048 -> line 1129
 *   +0x0050 -> line 1133
 *   +0x0068 -> line 1144
 *   +0x007c -> line 1153
 *   +0x0080 -> line 1144
 *   +0x008c -> line 1138
 *   +0x0090 -> line 1144
 *   +0x0094 -> line 1152
 *   +0x0098 -> line 1144
 *   +0x00a4 -> line 1154
 *   +0x00a8 -> line 1144
 *   +0x00ac -> line 1163
 *   +0x00b0 -> line 1178
 *   +0x00bc -> line 1144
 *   +0x00e8 -> line 1145
 *   +0x00f4 -> line 1150
 *   +0x00f8 -> line 1151
 *   +0x00fc -> line 1152
 *   +0x0100 -> line 1153
 *   +0x0104 -> line 1154
 *   +0x0108 -> line 1155
 *   +0x0114 -> line 1163
 *   +0x0130 -> line 1168
 *   +0x0134 -> line 1164
 *   +0x0138 -> line 1168
 *   +0x0140 -> line 1169
 *   +0x014c -> line 1170
 *   +0x0154 -> line 1171
 *   +0x0158 -> line 1170
 *   +0x015c -> line 1173
 *   +0x0168 -> line 1174
 *   +0x0174 -> line 1175
 *   +0x017c -> line 1176
 *   +0x0180 -> line 1175
 *   +0x0184 -> line 1180
 *   +0x0188 -> line 1181
 *   +0x018c -> line 1182
 *   +0x0190 -> line 1184
 *   +0x0194 -> line 1185
 *   +0x0198 -> line 1187
 *   +0x019c -> line 1188
 *   +0x01a0 -> line 1189
 *   +0x01a4 -> line 1190
 *   +0x01a8 -> line 1192
 *   +0x01ac -> line 1193
 *   +0x01b0 -> line 1194
 *   +0x01b4 -> line 1195
 *   +0x01b8 -> line 1210
 *   +0x01bc -> line 1203
 *   +0x01c4 -> line 1204
 *   +0x01cc -> line 1206
 *   +0x01d8 -> line 1209
 *   +0x01e4 -> line 1211
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
int CSpriteController::WorldOrthoPlanarSpriteColor(MTH3D_tdstVector_* pPosition, GLI_tdstMaterial_* pMaterial, float SizeX, float SizeY, MTH3D_tdstVector_* p_stV1, MTH3D_tdstVector_* p_stV2, unsigned int ulColor)
{
    float fADC;
    float Pos[4];
    float Vy[4];
    float Vx[4];
    float (*) pV[4];
    unsigned int* pC;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\VUSprites.cpp lines 1021–1110 */
/* addr: 0x002d2df0  size: 476 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1021
 *   +0x0004 -> line 1030
 *   +0x0008 -> line 1021
 *   +0x000c -> line 1035
 *   +0x0010 -> line 1021
 *   +0x0028 -> line 1035
 *   +0x002c -> line 1021
 *   +0x0040 -> line 1030
 *   +0x0048 -> line 1035
 *   +0x0060 -> line 1043
 *   +0x006c -> line 1052
 *   +0x0070 -> line 1040
 *   +0x0074 -> line 1051
 *   +0x0078 -> line 1043
 *   +0x007c -> line 1053
 *   +0x0080 -> line 1043
 *   +0x0084 -> line 1077
 *   +0x0088 -> line 1062
 *   +0x008c -> line 1077
 *   +0x0090 -> line 1043
 *   +0x0094 -> line 1077
 *   +0x0098 -> line 1043
 *   +0x00bc -> line 1044
 *   +0x00c8 -> line 1049
 *   +0x00cc -> line 1050
 *   +0x00d0 -> line 1051
 *   +0x00d4 -> line 1052
 *   +0x00d8 -> line 1053
 *   +0x00dc -> line 1054
 *   +0x00e8 -> line 1062
 *   +0x0104 -> line 1067
 *   +0x0108 -> line 1063
 *   +0x010c -> line 1067
 *   +0x0114 -> line 1068
 *   +0x0120 -> line 1069
 *   +0x0128 -> line 1070
 *   +0x012c -> line 1069
 *   +0x0130 -> line 1072
 *   +0x013c -> line 1073
 *   +0x0148 -> line 1074
 *   +0x0150 -> line 1075
 *   +0x0154 -> line 1074
 *   +0x0158 -> line 1079
 *   +0x015c -> line 1080
 *   +0x0160 -> line 1081
 *   +0x0164 -> line 1083
 *   +0x0168 -> line 1084
 *   +0x016c -> line 1086
 *   +0x0170 -> line 1087
 *   +0x0174 -> line 1088
 *   +0x0178 -> line 1089
 *   +0x017c -> line 1091
 *   +0x0180 -> line 1092
 *   +0x0184 -> line 1093
 *   +0x0188 -> line 1094
 *   +0x018c -> line 1109
 *   +0x0190 -> line 1102
 *   +0x0198 -> line 1103
 *   +0x01a0 -> line 1105
 *   +0x01ac -> line 1108
 *   +0x01b8 -> line 1110
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
int CSpriteController::WorldOrthoPlanarSprite(MTH3D_tdstVector_* pPosition, GLI_tdstMaterial_* pMaterial, float SizeX, float SizeY, MTH3D_tdstVector_* p_stV1, MTH3D_tdstVector_* p_stV2)
{
    float fADC;
    float Pos[4];
    float Vy[4];
    float Vx[4];
    float (*) pV[4];
    unsigned int* pC;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\VUSprites.cpp lines 928–1014 */
/* addr: 0x002d2fd0  size: 400 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 928
 *   +0x0024 -> line 940
 *   +0x0040 -> line 946
 *   +0x004c -> line 961
 *   +0x0050 -> line 965
 *   +0x0054 -> line 945
 *   +0x0058 -> line 948
 *   +0x005c -> line 960
 *   +0x0060 -> line 948
 *   +0x0064 -> line 962
 *   +0x0068 -> line 983
 *   +0x006c -> line 966
 *   +0x0070 -> line 946
 *   +0x0074 -> line 983
 *   +0x007c -> line 946
 *   +0x0084 -> line 983
 *   +0x0088 -> line 947
 *   +0x008c -> line 949
 *   +0x0090 -> line 948
 *   +0x0094 -> line 949
 *   +0x0098 -> line 950
 *   +0x00a0 -> line 951
 *   +0x00a8 -> line 952
 *   +0x00b0 -> line 953
 *   +0x00bc -> line 958
 *   +0x00c0 -> line 959
 *   +0x00c4 -> line 960
 *   +0x00c8 -> line 961
 *   +0x00cc -> line 962
 *   +0x00d0 -> line 963
 *   +0x00d4 -> line 964
 *   +0x00d8 -> line 965
 *   +0x00dc -> line 966
 *   +0x00e0 -> line 967
 *   +0x00ec -> line 973
 *   +0x00f4 -> line 974
 *   +0x00fc -> line 975
 *   +0x0104 -> line 977
 *   +0x010c -> line 978
 *   +0x0114 -> line 979
 *   +0x011c -> line 981
 *   +0x0124 -> line 985
 *   +0x0128 -> line 986
 *   +0x012c -> line 988
 *   +0x0130 -> line 989
 *   +0x0134 -> line 991
 *   +0x0138 -> line 992
 *   +0x013c -> line 994
 *   +0x0140 -> line 995
 *   +0x0144 -> line 997
 *   +0x0148 -> line 998
 *   +0x014c -> line 1002
 *   +0x0150 -> line 1003
 *   +0x0154 -> line 1005
 *   +0x0158 -> line 1006
 *   +0x015c -> line 1008
 *   +0x0168 -> line 1011
 *   +0x0174 -> line 1014
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void CSpriteController::SemiLookatSprite(MTH3D_tdstVector_* a3_fPosition, MTH3D_tdstVector_* a3_fPosition2, GLI_tdstMaterial_* pMaterial, float fSizeX)
{
    float Position2[4];
    float Position1[4];
    int Alpha;
    float (*) pV[4];
    unsigned int* pC;
    unsigned int ColorCenter;
    unsigned int ColorOut;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\VUSprites.cpp lines 862–919 */
/* addr: 0x002d3160  size: 444 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 862
 *   +0x0004 -> line 871
 *   +0x0008 -> line 862
 *   +0x0028 -> line 871
 *   +0x002c -> line 862
 *   +0x0030 -> line 871
 *   +0x0034 -> line 862
 *   +0x005c -> line 871
 *   +0x0074 -> line 879
 *   +0x0084 -> line 876
 *   +0x0088 -> line 879
 *   +0x008c -> line 887
 *   +0x0094 -> line 912
 *   +0x0098 -> line 879
 *   +0x00a4 -> line 887
 *   +0x00a8 -> line 879
 *   +0x00bc -> line 887
 *   +0x00c0 -> line 879
 *   +0x00c4 -> line 880
 *   +0x00c8 -> line 887
 *   +0x00cc -> line 889
 *   +0x00d0 -> line 880
 *   +0x00d8 -> line 885
 *   +0x00dc -> line 888
 *   +0x00e8 -> line 889
 *   +0x00ec -> line 890
 *   +0x00f0 -> line 889
 *   +0x00f4 -> line 890
 *   +0x00f8 -> line 896
 *   +0x0100 -> line 897
 *   +0x0104 -> line 896
 *   +0x0108 -> line 897
 *   +0x010c -> line 890
 *   +0x0114 -> line 898
 *   +0x011c -> line 899
 *   +0x0120 -> line 898
 *   +0x0124 -> line 899
 *   +0x0128 -> line 900
 *   +0x0134 -> line 905
 *   +0x0138 -> line 906
 *   +0x0140 -> line 907
 *   +0x0148 -> line 908
 *   +0x0150 -> line 910
 *   +0x0154 -> line 912
 *   +0x015c -> line 913
 *   +0x016c -> line 918
 *   +0x0170 -> line 914
 *   +0x017c -> line 917
 *   +0x0188 -> line 919
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
int CSpriteController::SimpleSpriteOriented_WithUVs(MTH3D_tdstVector_* pPosition, GLI_tdstMaterial_* pMaterial, float SizeX, float SizeY, float U1, float V1, float U2, float V2, float fAngle)
{
    unsigned int VMax;
    unsigned int VMin;
    unsigned int UMax;
    unsigned int UMin;
    float (*) pV[4];
    unsigned int* param0;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\VUSprites.cpp lines 724–803 */
/* addr: 0x002d3320  size: 1024 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 724
 *   +0x0004 -> line 734
 *   +0x0008 -> line 724
 *   +0x002c -> line 734
 *   +0x0030 -> line 724
 *   +0x003c -> line 734
 *   +0x0054 -> line 742
 *   +0x0064 -> line 739
 *   +0x0068 -> line 742
 *   +0x006c -> line 752
 *   +0x0078 -> line 742
 *   +0x00a0 -> line 743
 *   +0x00ac -> line 752
 *   +0x00e8 -> line 753
 *   +0x00ec -> line 757
 *   +0x010c -> line 759
 *   +0x0110 -> line 762
 *   +0x0128 -> line 759
 *   +0x012c -> line 762
 *   +0x01a0 -> line 763
 *   +0x020c -> line 765
 *   +0x028c -> line 769
 *   +0x0290 -> line 765
 *   +0x0294 -> line 769
 *   +0x0310 -> line 774
 *   +0x0314 -> line 769
 *   +0x0318 -> line 779
 *   +0x031c -> line 774
 *   +0x0320 -> line 769
 *   +0x0324 -> line 801
 *   +0x0328 -> line 774
 *   +0x0334 -> line 775
 *   +0x0344 -> line 777
 *   +0x0348 -> line 776
 *   +0x0350 -> line 777
 *   +0x0354 -> line 776
 *   +0x0358 -> line 777
 *   +0x035c -> line 776
 *   +0x0360 -> line 777
 *   +0x0364 -> line 776
 *   +0x0368 -> line 780
 *   +0x036c -> line 781
 *   +0x0370 -> line 780
 *   +0x0374 -> line 781
 *   +0x0378 -> line 777
 *   +0x0384 -> line 782
 *   +0x0388 -> line 783
 *   +0x038c -> line 782
 *   +0x0390 -> line 783
 *   +0x0394 -> line 784
 *   +0x03a0 -> line 790
 *   +0x03a4 -> line 791
 *   +0x03ac -> line 792
 *   +0x03b4 -> line 793
 *   +0x03bc -> line 795
 *   +0x03c0 -> line 796
 *   +0x03c4 -> line 797
 *   +0x03d0 -> line 800
 *   +0x03dc -> line 803
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
int CSpriteController::SimpleSprite_UVAnim(GLI_tdstMaterial_* pMaterial, MTH3D_tdstVector_* pPosition, float SizeX, float SizeY, float AnimTime)
{
    float fCurrentFrame;
    float fSpeed;
    unsigned int NbFrames;
    unsigned int* pC;
    unsigned int VMax;
    unsigned int VMin;
    unsigned int UMax;
    unsigned int UMin;
    float V1;
    float U1;
    float (*) pV[4];
    unsigned int* param0;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\VUSprites.cpp lines 673–721 */
/* addr: 0x002d3720  size: 328 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 673
 *   +0x0028 -> line 682
 *   +0x004c -> line 693
 *   +0x0060 -> line 687
 *   +0x0064 -> line 693
 *   +0x0070 -> line 702
 *   +0x0074 -> line 693
 *   +0x0078 -> line 701
 *   +0x007c -> line 693
 *   +0x0088 -> line 703
 *   +0x008c -> line 693
 *   +0x0090 -> line 720
 *   +0x0094 -> line 693
 *   +0x00c0 -> line 694
 *   +0x00cc -> line 699
 *   +0x00d0 -> line 700
 *   +0x00d4 -> line 701
 *   +0x00d8 -> line 702
 *   +0x00dc -> line 703
 *   +0x00e0 -> line 704
 *   +0x00ec -> line 709
 *   +0x00f0 -> line 710
 *   +0x00f8 -> line 711
 *   +0x0100 -> line 712
 *   +0x0108 -> line 714
 *   +0x010c -> line 715
 *   +0x0110 -> line 716
 *   +0x011c -> line 719
 *   +0x0128 -> line 721
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
int CSpriteController::SimpleSpriteColor(GLI_tdstMaterial_* pMaterial, MTH3D_tdstVector_* pPosition, float SizeX, float SizeY, unsigned int ulColor)
{
    float (*) pV[4];
    unsigned int* pC;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\VUSprites.cpp lines 618–669 */
/* addr: 0x002d3870  size: 356 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 618
 *   +0x0020 -> line 631
 *   +0x0024 -> line 626
 *   +0x0028 -> line 632
 *   +0x003c -> line 635
 *   +0x0040 -> line 636
 *   +0x0044 -> line 640
 *   +0x004c -> line 642
 *   +0x0050 -> line 645
 *   +0x0054 -> line 642
 *   +0x005c -> line 658
 *   +0x0060 -> line 644
 *   +0x0064 -> line 658
 *   +0x0068 -> line 646
 *   +0x006c -> line 658
 *   +0x0070 -> line 642
 *   +0x00c8 -> line 643
 *   +0x00cc -> line 647
 *   +0x00d0 -> line 644
 *   +0x00d4 -> line 645
 *   +0x00d8 -> line 646
 *   +0x00dc -> line 648
 *   +0x00e0 -> line 652
 *   +0x00e4 -> line 653
 *   +0x00e8 -> line 660
 *   +0x00ec -> line 657
 *   +0x00f4 -> line 658
 *   +0x00fc -> line 660
 *   +0x0100 -> line 658
 *   +0x0104 -> line 660
 *   +0x0110 -> line 662
 *   +0x0118 -> line 663
 *   +0x011c -> line 662
 *   +0x0124 -> line 663
 *   +0x0130 -> line 664
 *   +0x013c -> line 667
 *   +0x0148 -> line 669
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void CSpriteController::DrawFireSpriteGroup(GLI_tdstMaterial_* pMaterial, float (*) pData[4], unsigned int NbParticles)
{
    unsigned int NbVertices;
    float (*) pV[4];
    unsigned int* pT;
    unsigned int* pC;
    float (*) pVect[4];
    unsigned int i;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\VUSprites.cpp lines 555–615 */
/* addr: 0x002d39e0  size: 320 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 555
 *   +0x0004 -> line 563
 *   +0x0008 -> line 555
 *   +0x0024 -> line 563
 *   +0x0044 -> line 571
 *   +0x0050 -> line 568
 *   +0x0054 -> line 571
 *   +0x0084 -> line 572
 *   +0x0090 -> line 582
 *   +0x009c -> line 584
 *   +0x00a0 -> line 586
 *   +0x00a4 -> line 584
 *   +0x00ac -> line 585
 *   +0x00b0 -> line 586
 *   +0x00b4 -> line 588
 *   +0x00bc -> line 591
 *   +0x00c0 -> line 593
 *   +0x00c4 -> line 591
 *   +0x00c8 -> line 593
 *   +0x00cc -> line 592
 *   +0x00d0 -> line 593
 *   +0x00d4 -> line 594
 *   +0x00d8 -> line 597
 *   +0x00dc -> line 613
 *   +0x00e0 -> line 597
 *   +0x00e8 -> line 602
 *   +0x00ec -> line 603
 *   +0x00f4 -> line 604
 *   +0x00fc -> line 605
 *   +0x0104 -> line 607
 *   +0x0108 -> line 608
 *   +0x010c -> line 609
 *   +0x0118 -> line 612
 *   +0x0124 -> line 615
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
int CSpriteController::SimpleSprite(GLI_tdstMaterial_* pMaterial, MTH3D_tdstVector_* pPosition, float SizeX, float SizeY)
{
    float (*) pV[4];
    unsigned int* param0;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\VUSprites.cpp lines 516–547 */
/* addr: 0x002d3b20  size: 732 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 516
 *   +0x0010 -> line 519
 *   +0x0018 -> line 522
 *   +0x0020 -> line 524
 *   +0x002c -> line 526
 *   +0x009c -> line 532
 *   +0x00a8 -> line 533
 *   +0x00b0 -> line 537
 *   +0x00b4 -> line 536
 *   +0x00b8 -> line 537
 *   +0x00e0 -> line 538
 *   +0x0110 -> line 539
 *   +0x013c -> line 541
 *   +0x0160 -> line 543
 *   +0x0168 -> line 541
 *   +0x0174 -> line 543
 *   +0x0178 -> line 541
 *   +0x01d4 -> line 543
 *   +0x01dc -> line 545
 *   +0x01e0 -> line 546
 *   +0x02c8 -> line 547
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void CSpriteController::Draw_2D(void)
{
    unsigned char zTst;
    unsigned int NbVertices;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\VUSprites.cpp lines 483–513 */
/* addr: 0x002d3e00  size: 732 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 483
 *   +0x0010 -> line 486
 *   +0x0030 -> line 489
 *   +0x0038 -> line 491
 *   +0x0044 -> line 493
 *   +0x00b0 -> line 499
 *   +0x00bc -> line 500
 *   +0x00c4 -> line 503
 *   +0x00d4 -> line 504
 *   +0x0104 -> line 505
 *   +0x0130 -> line 507
 *   +0x01cc -> line 509
 *   +0x01dc -> line 511
 *   +0x01e0 -> line 512
 *   +0x02c8 -> line 513
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void CSpriteController::Draw_3D(void)
{
    unsigned char zTst;
    unsigned int NbVertices;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\VUSprites.cpp lines 441–479 */
/* addr: 0x002d40e0  size: 992 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 441
 *   +0x0010 -> line 444
 *   +0x0030 -> line 447
 *   +0x0038 -> line 451
 *   +0x0044 -> line 453
 *   +0x00b0 -> line 459
 *   +0x00bc -> line 460
 *   +0x00c4 -> line 463
 *   +0x00c8 -> line 464
 *   +0x00cc -> line 463
 *   +0x00d0 -> line 464
 *   +0x00d4 -> line 463
 *   +0x00d8 -> line 464
 *   +0x011c -> line 465
 *   +0x0124 -> line 466
 *   +0x0128 -> line 465
 *   +0x012c -> line 466
 *   +0x0140 -> line 468
 *   +0x014c -> line 466
 *   +0x0188 -> line 468
 *   +0x01a8 -> line 469
 *   +0x01d8 -> line 470
 *   +0x0208 -> line 471
 *   +0x0234 -> line 473
 *   +0x02d0 -> line 475
 *   +0x02e0 -> line 477
 *   +0x02e4 -> line 478
 *   +0x03cc -> line 479
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void CSpriteController::Draw_SemiLookat(void)
{
    unsigned char zTst;
    unsigned int NbVertices;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\VUSprites.cpp lines 402–438 */
/* addr: 0x002d44c0  size: 992 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 402
 *   +0x0010 -> line 405
 *   +0x0030 -> line 408
 *   +0x0038 -> line 410
 *   +0x0044 -> line 412
 *   +0x00b0 -> line 418
 *   +0x00bc -> line 419
 *   +0x00c4 -> line 422
 *   +0x00c8 -> line 423
 *   +0x00cc -> line 422
 *   +0x00d0 -> line 423
 *   +0x00d4 -> line 422
 *   +0x00d8 -> line 423
 *   +0x011c -> line 424
 *   +0x0124 -> line 425
 *   +0x0128 -> line 424
 *   +0x012c -> line 425
 *   +0x0140 -> line 427
 *   +0x014c -> line 425
 *   +0x0188 -> line 427
 *   +0x01a8 -> line 428
 *   +0x01d8 -> line 429
 *   +0x0208 -> line 430
 *   +0x0234 -> line 432
 *   +0x02d0 -> line 434
 *   +0x02e0 -> line 436
 *   +0x02e4 -> line 437
 *   +0x03cc -> line 438
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void CSpriteController::Draw_Simple_Oriented(void)
{
    unsigned char zTst;
    unsigned int NbVertices;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\VUSprites.cpp lines 361–399 */
/* addr: 0x002d48a0  size: 1008 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 361
 *   +0x0010 -> line 364
 *   +0x001c -> line 365
 *   +0x0024 -> line 367
 *   +0x0044 -> line 370
 *   +0x004c -> line 374
 *   +0x00c0 -> line 379
 *   +0x00cc -> line 380
 *   +0x00d4 -> line 383
 *   +0x00d8 -> line 384
 *   +0x00dc -> line 383
 *   +0x00e0 -> line 384
 *   +0x00e4 -> line 383
 *   +0x00e8 -> line 384
 *   +0x012c -> line 385
 *   +0x0134 -> line 386
 *   +0x0138 -> line 385
 *   +0x013c -> line 386
 *   +0x0150 -> line 388
 *   +0x015c -> line 386
 *   +0x0198 -> line 388
 *   +0x01b8 -> line 389
 *   +0x01e8 -> line 390
 *   +0x0218 -> line 391
 *   +0x0244 -> line 393
 *   +0x02e0 -> line 395
 *   +0x02f0 -> line 397
 *   +0x02f4 -> line 398
 *   +0x03dc -> line 399
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void CSpriteController::Draw_Simple(void)
{
    unsigned char zTst;
    unsigned int NbVertices;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\VUSprites.cpp lines 296–339 */
/* addr: 0x002d4c90  size: 720 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 296
 *   +0x0018 -> line 300
 *   +0x0024 -> line 302
 *   +0x0028 -> line 303
 *   +0x0030 -> line 305
 *   +0x0034 -> line 306
 *   +0x003c -> line 307
 *   +0x0080 -> line 310
 *   +0x0084 -> line 311
 *   +0x008c -> line 312
 *   +0x0140 -> line 316
 *   +0x0148 -> line 312
 *   +0x0150 -> line 316
 *   +0x0158 -> line 312
 *   +0x017c -> line 316
 *   +0x0184 -> line 317
 *   +0x0190 -> line 330
 *   +0x01dc -> line 331
 *   +0x0220 -> line 332
 *   +0x0224 -> line 333
 *   +0x0228 -> line 334
 *   +0x0270 -> line 335
 *   +0x02b8 -> line 339
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void CSpriteController::InitSpritesForViewport(GLD_tdstViewportAttributes_* _p_stViewport)
{
    unsigned char zTst;
    GLI_tdstCamera_* p_stCam;
    MTH4D_tdstMatrix_* p_stWorldMatrix;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\VUSprites.cpp lines 230–293 */
/* addr: 0x002d4f60  size: 344 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 230
 *   +0x0014 -> line 234
 *   +0x0018 -> line 236
 *   +0x0020 -> line 238
 *   +0x002c -> line 243
 *   +0x0030 -> line 241
 *   +0x0038 -> line 244
 *   +0x003c -> line 242
 *   +0x0044 -> line 245
 *   +0x0048 -> line 240
 *   +0x0054 -> line 253
 *   +0x0058 -> line 252
 *   +0x005c -> line 255
 *   +0x0060 -> line 253
 *   +0x0064 -> line 260
 *   +0x006c -> line 269
 *   +0x0070 -> line 265
 *   +0x0074 -> line 269
 *   +0x007c -> line 265
 *   +0x0080 -> line 270
 *   +0x0084 -> line 262
 *   +0x0088 -> line 264
 *   +0x008c -> line 270
 *   +0x0090 -> line 269
 *   +0x0094 -> line 270
 *   +0x0098 -> line 269
 *   +0x009c -> line 270
 *   +0x00d4 -> line 273
 *   +0x00d8 -> line 270
 *   +0x00dc -> line 273
 *   +0x00e0 -> line 277
 *   +0x00e4 -> line 270
 *   +0x00e8 -> line 279
 *   +0x00ec -> line 270
 *   +0x00f0 -> line 271
 *   +0x00fc -> line 272
 *   +0x0108 -> line 278
 *   +0x010c -> line 274
 *   +0x0110 -> line 278
 *   +0x0114 -> line 277
 *   +0x0118 -> line 274
 *   +0x011c -> line 275
 *   +0x0120 -> line 280
 *   +0x0124 -> line 275
 *   +0x0128 -> line 281
 *   +0x012c -> line 282
 *   +0x0130 -> line 277
 *   +0x0138 -> line 284
 *   +0x013c -> line 290
 *   +0x0140 -> line 293
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void CSpriteController::SendMaterial(void)
{
    float SavedGlobalAlpha;
    void* pSavedTexture;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\VUSprites.cpp lines 218–227 */
/* addr: 0x002d50c0  size: 384 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 218
 *   +0x00c0 -> line 219
 *   +0x00c4 -> line 218
 *   +0x00d4 -> line 219
 *   +0x00d8 -> line 218
 *   +0x00dc -> line 219
 *   +0x00e0 -> line 218
 *   +0x00e4 -> line 220
 *   +0x00e8 -> line 219
 *   +0x00ec -> line 220
 *   +0x00f0 -> line 218
 *   +0x00f4 -> line 220
 *   +0x00f8 -> line 218
 *   +0x0104 -> line 219
 *   +0x0108 -> line 220
 *   +0x0144 -> line 221
 *   +0x0148 -> line 220
 *   +0x014c -> line 221
 *   +0x0150 -> line 226
 *   +0x0154 -> line 221
 *   +0x0158 -> line 222
 *   +0x0164 -> line 223
 *   +0x016c -> line 224
 *   +0x0174 -> line 225
 *   +0x0178 -> line 227
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void CSpriteController::EndDraw(void)
{
    unsigned char zTst;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\VUSprites.cpp lines 201–212 */
/* addr: 0x002d5240  size: 144 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 201
 *   +0x0008 -> line 202
 *   +0x0034 -> line 204
 *   +0x003c -> line 205
 *   +0x004c -> line 206
 *   +0x005c -> line 207
 *   +0x006c -> line 208
 *   +0x007c -> line 209
 *   +0x0084 -> line 212
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void CSpriteController::Draw(void)
{
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\VUSprites.cpp lines 187–196 */
/* addr: 0x002d52d0  size: 40 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 187
 *   +0x0004 -> line 194
 *   +0x0008 -> line 188
 *   +0x000c -> line 189
 *   +0x0010 -> line 191
 *   +0x0014 -> line 192
 *   +0x0018 -> line 193
 *   +0x001c -> line 194
 *   +0x0020 -> line 196
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void CSpriteController::StopSpriteList(void)
{
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\VUSprites.cpp lines 130–179 */
/* addr: 0x002d5300  size: 484 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 130
 *   +0x0020 -> line 134
 *   +0x0028 -> line 131
 *   +0x002c -> line 134
 *   +0x0044 -> line 137
 *   +0x0094 -> line 145
 *   +0x00f4 -> line 148
 *   +0x0110 -> line 151
 *   +0x011c -> line 155
 *   +0x0120 -> line 151
 *   +0x0124 -> line 156
 *   +0x0128 -> line 154
 *   +0x0148 -> line 155
 *   +0x0168 -> line 156
 *   +0x0188 -> line 160
 *   +0x0190 -> line 162
 *   +0x0198 -> line 163
 *   +0x019c -> line 165
 *   +0x01a0 -> line 166
 *   +0x01a8 -> line 168
 *   +0x01ac -> line 170
 *   +0x01b0 -> line 172
 *   +0x01b4 -> line 174
 *   +0x01bc -> line 175
 *   +0x01c4 -> line 178
 *   +0x01c8 -> line 179
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
int CSpriteController::StartSpriteList(GLI_tdstMaterial_* pMaterial, unsigned int SpriteType, unsigned int NbVertices)
{
    GLI_tdstTexture_* pAnimatedTexture;
    /* TODO: decompile from asm/... */
}
