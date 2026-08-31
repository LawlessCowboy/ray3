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
    int p_TextureOfSubstitution; /* +0x44 */
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

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\MultiDRV\Src\Tex.c lines 79–124 */
/* addr: 0x002aacc0  size: 424 bytes */
void GLI_xSerialProjection(/* function pointer */ int p_stCam, int lNbOfVertex, /* function pointer */ int p_stSource, /* function pointer */ int p_stDest, /* function pointer */ int p_stDestLast)
{
    int lNewX;
    int lVertexIndex;
    float xInterm;
    /* line map: */
    /*   line 79 @ +0x000 */
    /*   line 80 @ +0x000 */
    /*   line 96 @ +0x000 */
    /*   line 89 @ +0x000 */
    /*   line 87 @ +0x000 */
    /*   line 90 @ +0x000 */
    /*   line 92 @ +0x000 */
    /*   line 95 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\MultiDRV\Src\Tex.c lines 1398–1419 */
/* addr: 0x002aae70  size: 208 bytes */
void GLI_vComputeTextures(void)
{
    /* line map: */
    /*   line 1398 @ +0x000 */
    /*   line 1410 @ +0x000 */
    /*   line 1419 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\MultiDRV\Src\Tex.c lines 1349–1355 */
/* addr: 0x002aaf40  size: 148 bytes */
void GLI_vRealyComputeLod(GLI_tdstTexture_* p_stTexture)
{
    /* line map: */
    /*   line 1349 @ +0x000 */
    /*   line 1352 @ +0x000 */
    /*   line 1355 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* addr: 0x002aafe0  size: 8 bytes */
void GLI_fn_vCloseBigFileTextures(void)
{
    /* TODO: decompile from asm/... */
}

/* addr: 0x002aaff0  size: 8 bytes */
void GLI_fn_vOpenBigFileTextures(void)
{
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\MultiDRV\Src\Tex.c lines 213–215 */
/* addr: 0x002ab000  size: 32 bytes */
void GLI_vIniTextRead(void)
{
    /* line map: */
    /*   line 213 @ +0x000 */
    /*   line 215 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\MultiDRV\Src\Tex.c lines 162–175 */
/* addr: 0x002ab020  size: 228 bytes */
int GLI_lGetLog2n(int ln)
{
    /* line map: */
    /*   line 162 @ +0x000 */
    /*   line 164 @ +0x000 */
    /*   line 166 @ +0x000 */
    /*   line 168 @ +0x000 */
    /*   line 170 @ +0x000 */
    /*   line 172 @ +0x000 */
    /*   line 175 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\MultiDRV\Src\Tex.c lines 143–146 */
/* addr: 0x002ab110  size: 44 bytes */
void GLI_TEX_vKillMemoryChannel(unsigned char ucCurrentChannel)
{
    /* line map: */
    /*   line 143 @ +0x000 */
    /*   line 146 @ +0x000 */
    /* TODO: decompile from asm/... */
}
