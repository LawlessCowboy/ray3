/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\MultiDRV\Src\Init_Gli.c */
/* Language: C */
/* Compiler: MW MIPS C Compiler */

#include <stddef.h>

/* Recovered aggregate layouts from MWCC debug type records. */
typedef struct MTH4D_tdstVector_ MTH4D_tdstVector_;
typedef struct MTH4D_tdstMatrix_ MTH4D_tdstMatrix_;
typedef struct GLI_tdstTexture_ GLI_tdstTexture_;
typedef struct tdstGliCaps_ tdstGliCaps_;
typedef struct GLI_tdst_Z_List_ GLI_tdst_Z_List_;
typedef struct MAT_tdstTransformation_ MAT_tdstTransformation_;
typedef struct ACP_tdst2DUVValues_ ACP_tdst2DUVValues_;
typedef struct GLI_tdstAligned3DVector_ GLI_tdstAligned3DVector_;
typedef struct GEO_tdstColor_ GEO_tdstColor_;
typedef struct tdstFogParams_ tdstFogParams_;

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

struct tdstGliCaps_ {
    unsigned int ulSize; /* +0x0 */
    unsigned int ulDriverCaps; /* +0x4 */
    unsigned int ulTextureCaps; /* +0x8 */
    unsigned int ulSurfaceCaps; /* +0xc */
    unsigned int ulMemoryCaps; /* +0x10 */
    unsigned int ulTextureMaxSize; /* +0x14 */
    unsigned int ulTotalTextureMemory; /* +0x18 */
    unsigned int ulTotalVideoMemory; /* +0x1c */
    unsigned int ulTotalAGPMemory; /* +0x20 */
    unsigned int ulTexturePerChannelMemory[4]; /* +0x24 */
    unsigned char ucPrimarySurfacePixelFormat; /* +0x34 */
    float fRefreshRate; /* +0x38 */
};

struct GLI_tdst_Z_List_ {
    int g_d_ucFreeDisplayRooms; /* +0x0 */
    int g_lFreeDisplayRoomsCounter; /* +0x4 */
    int g_lFreeDisplayRoomsCounterMax; /* +0x8 */
    int g_lDisplayCounterMin; /* +0xc */
    int g_lDisplayCounterMax; /* +0x10 */
    GLI_tdstElementInList_* g_d_pstFreeElements; /* +0x14 */
    int g_aDEF_pstViewingList[1]; /* +0x18 */
};

struct MAT_tdstTransformation_ {
    MAT_tdeTranformationType_ eType; /* +0x0 */
    MTH4D_tdstMatrix_ stTransformMatrix; /* +0x10 */
    MTH4D_tdstVector_ stScaleVector; /* +0x50 */
};

struct ACP_tdst2DUVValues_ {
    float xU; /* +0x0 */
    float xV; /* +0x4 */
};

struct GLI_tdstAligned3DVector_ {
    float xX; /* +0x0 */
    float xY; /* +0x4 */
    float xZ; /* +0x8 */
    float ALIGN; /* +0xc */
};

struct GEO_tdstColor_ {
    float xR; /* +0x0 */
    float xG; /* +0x4 */
    float xB; /* +0x8 */
    float xA; /* +0xc */
};

struct tdstFogParams_ {
    float xDepthStart; /* +0x0 */
    float xDepthEnd; /* +0x4 */
    float xInfinite; /* +0x8 */
    float xBlendStart; /* +0xc */
    float xBlendEnd; /* +0x10 */
    GEO_tdstColor_ stColor; /* +0x14 */
};

static int GLI_gsIsInit;
int g_lNbMatrixInStack;
MAT_tdstTransformation_ g_aDEF_stMatrixStack[1];
int g_p_stCurrentMatrix;
int GLI_gp_CurrentZ_ListForBuild;
GLI_tdst_Z_List_ GLI_g_a2_stZ_List[1];
float g_xVideoFrameDurationInSeconds;
tdstGliCaps_ GLI_g_stCaps;
int gs_hDefaultMaterial;
float GLI_BIG_GLOBALS_xGlobalAlpha;
int GLI_BIG_GLOBALS_xFogIsOn;
int GLI_BIG_GLOBALS_p_stActiveFog;
int GLI_BIG_GLOBALS_GLI_aDEF_stEnvUV;
int GLI_BIG_GLOBALS_GLI_TurnedScaledDisplecedPoint;
int gs_aDEFTableOfTextureAlreadyRead;
int gs_aDEFTableOfTextureMemoryChannels;

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\MultiDRV\Src\Init_Gli.c lines 111–233 */
/* addr: 0x002a85d0  size: 728 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 111
 *   +0x0008 -> line 130
 *   +0x0014 -> line 136
 *   +0x001c -> line 132
 *   +0x0024 -> line 138
 *   +0x002c -> line 136
 *   +0x0030 -> line 139
 *   +0x0038 -> line 132
 *   +0x003c -> line 139
 *   +0x0040 -> line 133
 *   +0x0044 -> line 139
 *   +0x0048 -> line 137
 *   +0x004c -> line 133
 *   +0x0050 -> line 134
 *   +0x0058 -> line 135
 *   +0x0060 -> line 136
 *   +0x0068 -> line 139
 *   +0x006c -> line 136
 *   +0x0070 -> line 139
 *   +0x0074 -> line 148
 *   +0x0084 -> line 150
 *   +0x008c -> line 151
 *   +0x0090 -> line 152
 *   +0x0098 -> line 155
 *   +0x00a0 -> line 156
 *   +0x00a8 -> line 159
 *   +0x00c0 -> line 160
 *   +0x00c8 -> line 162
 *   +0x00cc -> line 164
 *   +0x00e4 -> line 165
 *   +0x00ec -> line 166
 *   +0x0104 -> line 167
 *   +0x0108 -> line 169
 *   +0x0120 -> line 170
 *   +0x0128 -> line 171
 *   +0x0140 -> line 172
 *   +0x0144 -> line 174
 *   +0x0148 -> line 187
 *   +0x0154 -> line 192
 *   +0x0158 -> line 174
 *   +0x015c -> line 175
 *   +0x0160 -> line 187
 *   +0x0164 -> line 188
 *   +0x0168 -> line 175
 *   +0x016c -> line 193
 *   +0x0170 -> line 180
 *   +0x0184 -> line 193
 *   +0x0188 -> line 180
 *   +0x0194 -> line 193
 *   +0x019c -> line 196
 *   +0x01a0 -> line 200
 *   +0x01a4 -> line 196
 *   +0x01a8 -> line 197
 *   +0x01b0 -> line 200
 *   +0x01b4 -> line 199
 *   +0x01b8 -> line 200
 *   +0x01bc -> line 199
 *   +0x01c8 -> line 200
 *   +0x01d8 -> line 212
 *   +0x01f4 -> line 213
 *   +0x0218 -> line 214
 *   +0x0258 -> line 215
 *   +0x0298 -> line 226
 *   +0x02a4 -> line 230
 *   +0x02a8 -> line 231
 *   +0x02ac -> line 230
 *   +0x02b8 -> line 231
 *   +0x02c4 -> line 232
 *   +0x02cc -> line 233
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void GLI_vSetFog2(float xBlendStart, float xDepthStart, float xBlendEnd, float xDepthEnd, float xInfinite, GEO_tdstColor_* p_stFogColor)
{
    float xFogIntensityEnd;
    float xFogIntensityStart;
    float xZDepthConstant;
    float xZDepthEnd;
    float xZDepthStart2;
    float B;
    float A;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\MultiDRV\Src\Init_Gli.c lines 217–217 */
/* addr: 0x002a88b0  size: 8 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 217
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void GLI_vSignalCurrentMemoryChannel(unsigned char ucCurrentChannel)
{
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\MultiDRV\Src\Init_Gli.c lines 206–206 */
/* addr: 0x002a88c0  size: 8 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 206
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void GLI_vEndofGeometricLoad(void)
{
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\MultiDRV\Src\Init_Gli.c lines 190–190 */
/* addr: 0x002a88d0  size: 8 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 190
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
int GLI_xIsGliInit(void)
{
    /* TODO: decompile from asm/... */
}
