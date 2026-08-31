/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\VertexArrayBin.c */
/* Language: C */
/* Compiler: MW MIPS C Compiler */

#include <stddef.h>

/* Recovered aggregate layouts from MWCC debug type records. */
typedef struct PS2STRIP_ PS2STRIP_;
typedef struct GLI_tdstTexture_ GLI_tdstTexture_;
typedef struct PS2STRIP_List_ PS2STRIP_List_;
typedef struct GEO_tdstEdge_ GEO_tdstEdge_;
typedef struct PS2STRIP_Vtx_ PS2STRIP_Vtx_;
typedef struct ISI_tdstColor_ ISI_tdstColor_;
typedef struct anon_0 anon_0;
typedef struct anon_1 anon_1;
typedef struct GEO_tdstColor_ GEO_tdstColor_;

struct PS2STRIP_ {
    unsigned int NbIndices; /* +0x0 */
    unsigned int NbIndicesADC; /* +0x4 */
    unsigned int NbTriangles; /* +0x8 */
    unsigned int NbAllocated; /* +0xc */
    int pIndices; /* +0x10 */
    int pADC; /* +0x14 */
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
    int p_TextureOfSubstitution; /* +0x44 */
    unsigned char ucBilinearMode; /* +0x48 */
    unsigned char ucCylingMode; /* +0x49 */
    char a255_cFileName[128]; /* +0x4a */
};

struct PS2STRIP_List_ {
    unsigned int NbStrips; /* +0x0 */
    int pList; /* +0x4 */
};

struct GEO_tdstEdge_ {
    short xPoints[2]; /* +0x0 */
    /* array */ int st_VectorPoints[2]; /* +0x4 */
};

struct PS2STRIP_Vtx_ {
    float Position[4]; /* +0x0 */
    unsigned int Color[4]; /* +0x10 */
    unsigned int UVs[3]; /* +0x20 */
    unsigned int Normal; /* +0x2c */
    unsigned int Org; /* +0x30 */
};

struct ISI_tdstColor_ {
    short xRed; /* +0x0 */
    short xGreen; /* +0x2 */
    short xBlue; /* +0x4 */
    short xAlpha; /* +0x6 */
};

struct anon_0 {
    int pst_Texture; /* +0x0 */
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

struct anon_1 {
    float stMat[2][2]; /* +0x0 */
    float stTrans[2]; /* +0x10 */
};

struct GEO_tdstColor_ {
    float xR; /* +0x0 */
    float xG; /* +0x4 */
    float xB; /* +0x8 */
    float xA; /* +0xc */
};

unsigned int SDC_g_NbFaces;
unsigned int NbVerticesToProcessWithoutStrips;
unsigned int NbVerticesToProcessWithStrips;
unsigned int TotalVertexArraySizeWithoutStrips;
unsigned int TotalVertexArraySizeWithStrips;
static unsigned int LastVal2;
static unsigned int LastVal1;

/* addr: 0x002c7250  size: 8 bytes */
/* Debug signature rejected: type-record data leaked into it. */
void GLI_vReinitTempVertexArrays(void)
{
    /* TODO: decompile from asm/... */
}
