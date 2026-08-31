/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\Domat_PS2GL.c */
/* Language: C */
/* Compiler: MW MIPS C Compiler */

#include <stddef.h>

/* Recovered aggregate layouts from MWCC debug type records. */
typedef struct GLI_tdstTexture_ GLI_tdstTexture_;

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

static int bIsWriteEnable;
static short xSaveFogIsOn;
static unsigned char ucSaveCyclingMode[2];
static unsigned char ucSaveFunction;
static unsigned int gs_ulDepthBufferTestEnabled;
int p_stLightMapTexture;
int g_lNumberOfBlackTriangles;

/* addr: 0x002a5090  size: 8 bytes */
void GLI_DRV_xClearViewingList(void)
{
}

/* addr: 0x002a50a0  size: 8 bytes */
int GLI_DRV_bEndScene(void)
{
    return 1;
}

/* addr: 0x002a50b0  size: 8 bytes */
int GLI_DRV_bBeginScene(void)
{
    return 1;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\Domat_PS2GL.c lines 395–400 */
/* addr: 0x002a50c0  size: 32 bytes */
void GLI_fn_vInitRenderParameters(void)
{
    /* line map: */
    /*   line 395 @ +0x000 */
    /*   line 395 @ +0x000 */
    /*   line 400 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* addr: 0x002a50e0  size: 8 bytes */
void GLI_DRV_vAddBlackPolygon(void)
{
}
