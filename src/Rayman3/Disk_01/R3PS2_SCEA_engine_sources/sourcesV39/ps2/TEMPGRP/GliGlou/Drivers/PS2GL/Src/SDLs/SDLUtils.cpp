/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\SDLs\SDLUtils.cpp */
/* Language: C++ */
/* Compiler: MW MIPS C Compiler */

#include <stddef.h>

/* Recovered aggregate layouts from MWCC debug type records. */
typedef struct GEO_tdstColor_ GEO_tdstColor_;
typedef struct GLI_tdstUVTransformation GLI_tdstUVTransformation;
typedef struct GLI_tdstMultiTextureMaterial GLI_tdstMultiTextureMaterial;
typedef struct GLI_tdstMaterial_ GLI_tdstMaterial_;
typedef struct SDC_VertexArrays_ SDC_VertexArrays_;
typedef struct GLI_tdstTexture_ GLI_tdstTexture_;
typedef struct GLI_tdstAnimatedTextureNode_ GLI_tdstAnimatedTextureNode_;

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

struct SDC_VertexArrays_ {
    unsigned int OptType; /* +0x0 */
    unsigned int NbElements; /* +0x4 */
    GLI_tdstMaterial_* pArrayOfMaterials; /* +0x8 */
    float (*pArrayOfVertexArrays)[4]; /* +0xc */
    int pVertexArraySizes; /* +0x10 */
    int pNbTrianglesPerElement; /* +0x14 */
    int pbIsTransparent; /* +0x18 */
    unsigned int FrameDeformed; /* +0x1c */
    int pSDLs; /* +0x20 */
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

struct GLI_tdstAnimatedTextureNode_ {
    GLI_tdstTexture_* p_stTexture; /* +0x0 */
    float xDisplayTime; /* +0x4 */
    GLI_tdstAnimatedTextureNode_* p_stNextDisplayNode; /* +0x8 */
};

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\SDLs\SDLUtils.cpp lines 17–19 */
/* addr: 0x002db1a0  size: 72 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 17
 *   +0x0004 -> line 18
 *   +0x0008 -> line 17
 *   +0x000c -> line 18
 *   +0x0038 -> line 19
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
unsigned int SDL_GetNew(void)
{
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\SDLs\SDLUtils.cpp lines 167–189 */
/* addr: 0x002db1f0  size: 64 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 167
 *   +0x0004 -> line 172
 *   +0x0008 -> line 167
 *   +0x000c -> line 172
 *   +0x0010 -> line 167
 *   +0x0018 -> line 172
 *   +0x001c -> line 167
 *   +0x0020 -> line 175
 *   +0x0024 -> line 167
 *   +0x0028 -> line 177
 *   +0x0030 -> line 186
 *   +0x0038 -> line 189
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void GLI_vGetVertexPointersFromSDCStructureSpriteGens(SDC_VertexArrays_* pSDC, unsigned int iElement, float (*pVOrg)[4], float (*pUV1)[4], float (*pNormals)[4])
{
    float (*pVA)[4];
    unsigned int NbVertices;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\SDLs\SDLUtils.cpp lines 91–153 */
/* addr: 0x002db230  size: 356 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 91
 *   +0x0008 -> line 94
 *   +0x000c -> line 91
 *   +0x0010 -> line 94
 *   +0x0014 -> line 96
 *   +0x0030 -> line 99
 *   +0x0034 -> line 100
 *   +0x0038 -> line 102
 *   +0x0040 -> line 105
 *   +0x0054 -> line 107
 *   +0x005c -> line 115
 *   +0x0060 -> line 117
 *   +0x0064 -> line 119
 *   +0x0070 -> line 121
 *   +0x0090 -> line 122
 *   +0x00a0 -> line 125
 *   +0x00a8 -> line 127
 *   +0x00b8 -> line 129
 *   +0x00e8 -> line 133
 *   +0x00f0 -> line 136
 *   +0x00f8 -> line 138
 *   +0x00fc -> line 140
 *   +0x0100 -> line 141
 *   +0x0110 -> line 142
 *   +0x0118 -> line 143
 *   +0x011c -> line 145
 *   +0x0130 -> line 146
 *   +0x0144 -> line 147
 *   +0x0154 -> line 149
 *   +0x015c -> line 153
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void GLI_vGetVertexPointersFromSDCStructureForSinus(SDC_VertexArrays_* pSDC, unsigned int iElement, float (*pVOrg)[4], float** pVTSinus)
{
    unsigned int Type;
    unsigned int LayerTypes;
    unsigned int bMultiTexture;
    unsigned int NbStages;
    unsigned int stage;
    GLI_tdstMaterial_* hVisualMaterial;
    float (*pVA)[4];
    unsigned int NbVerticesAlignedUVs;
    unsigned int NbVerticesAligned;
    unsigned int NbVertices;
    /* TODO: decompile from asm/... */
}
