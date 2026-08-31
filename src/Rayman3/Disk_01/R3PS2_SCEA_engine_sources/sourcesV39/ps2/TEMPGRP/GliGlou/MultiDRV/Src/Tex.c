/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\MultiDRV\Src\Tex.c */
/* Language: C */
/* Compiler: MW MIPS C Compiler */

#include <stddef.h>

/* Recovered aggregate layouts from MWCC debug type records. */
typedef struct GLI_tdstTexture_ GLI_tdstTexture_;
typedef struct tdstGliCaps_ tdstGliCaps_;

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

int g_lTextureMode;
GLI_tdstTexture_ gst_Texture;
unsigned int GLI_g_ExternalTextureHeader;
unsigned char GLI_g_GlobalBpp;
unsigned char GLI_g_GlobalPalette[1024];
int GLI_gs_lConvertBufferMipMappingSizeInBytes;
int GLI_gs_p_ConvertBufferMipMapping;
unsigned int GLI_gsCurrentMemoryChannel;
char g_sLanguage[255];
unsigned int GLI_g_ulNumberOfLoadedTexture;
int gs_aDEFTableOfTextureAlreadyRead;
int gs_aDEFTableOfTextureMemoryChannels;
tdstGliCaps_ GLI_g_stCaps;
int gs_lNumberOfTextureToCreate;
unsigned char g_ucGEOModuleId;

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\MultiDRV\Src\Tex.c lines 74–129 */
/* addr: 0x002aacc0  size: 424 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 74
 *   +0x0004 -> line 79
 *   +0x000c -> line 78
 *   +0x0010 -> line 80
 *   +0x004c -> line 85
 *   +0x0054 -> line 96
 *   +0x0058 -> line 94
 *   +0x005c -> line 89
 *   +0x0060 -> line 96
 *   +0x0064 -> line 87
 *   +0x0078 -> line 89
 *   +0x0084 -> line 90
 *   +0x009c -> line 91
 *   +0x00b0 -> line 92
 *   +0x00b8 -> line 94
 *   +0x00c4 -> line 95
 *   +0x00d0 -> line 96
 *   +0x00d8 -> line 97
 *   +0x00f4 -> line 98
 *   +0x0110 -> line 99
 *   +0x0120 -> line 102
 *   +0x0128 -> line 106
 *   +0x0138 -> line 111
 *   +0x013c -> line 109
 *   +0x0158 -> line 111
 *   +0x015c -> line 113
 *   +0x0174 -> line 119
 *   +0x018c -> line 124
 *   +0x01a0 -> line 129
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void GLI_xSerialProjection(GLI_tdstCamera_* p_stCam, int lNbOfVertex, MTH4D_tdstVector_* p_stSource, GLI_tdstAligned2DVector_* p_stDest)
{
    GLI_tdstAligned2DVector_* p_stDestLast;
    int lNewX;
    int lVertexIndex;
    float xInterm;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\MultiDRV\Src\Tex.c lines 1394–1419 */
/* addr: 0x002aae70  size: 208 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1394
 *   +0x000c -> line 1398
 *   +0x0014 -> line 1402
 *   +0x001c -> line 1410
 *   +0x0070 -> line 1414
 *   +0x00bc -> line 1419
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void GLI_vComputeTextures(void)
{
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\MultiDRV\Src\Tex.c lines 1347–1356 */
/* addr: 0x002aaf40  size: 148 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1347
 *   +0x0014 -> line 1349
 *   +0x0034 -> line 1350
 *   +0x003c -> line 1352
 *   +0x005c -> line 1353
 *   +0x0070 -> line 1355
 *   +0x0080 -> line 1356
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void GLI_vRealyComputeLod(GLI_tdstTexture_* p_stTexture)
{
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\MultiDRV\Src\Tex.c lines 236–236 */
/* addr: 0x002aafe0  size: 8 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 236
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void GLI_fn_vCloseBigFileTextures(void)
{
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\MultiDRV\Src\Tex.c lines 226–226 */
/* addr: 0x002aaff0  size: 8 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 226
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void GLI_fn_vOpenBigFileTextures(void)
{
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\MultiDRV\Src\Tex.c lines 212–215 */
/* addr: 0x002ab000  size: 32 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 212
 *   +0x0008 -> line 213
 *   +0x0010 -> line 214
 *   +0x0014 -> line 215
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void GLI_vIniTextRead(void)
{
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\MultiDRV\Src\Tex.c lines 161–175 */
/* addr: 0x002ab020  size: 228 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 161
 *   +0x0014 -> line 162
 *   +0x0024 -> line 163
 *   +0x0038 -> line 164
 *   +0x0048 -> line 165
 *   +0x005c -> line 166
 *   +0x006c -> line 167
 *   +0x0080 -> line 168
 *   +0x0090 -> line 169
 *   +0x00a4 -> line 170
 *   +0x00b4 -> line 171
 *   +0x00c8 -> line 172
 *   +0x00d8 -> line 173
 *   +0x00dc -> line 175
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
int GLI_lGetLog2n(int ln)
{
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\MultiDRV\Src\Tex.c lines 142–146 */
/* addr: 0x002ab110  size: 44 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 142
 *   +0x000c -> line 143
 *   +0x0014 -> line 144
 *   +0x001c -> line 146
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void GLI_TEX_vKillMemoryChannel(unsigned char ucCurrentChannel)
{
    /* TODO: decompile from asm/... */
}
