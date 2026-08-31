/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\MultiDRV\Src\Texture.c */
/* Language: C */
/* Compiler: MW MIPS C Compiler */

#include <stddef.h>

/* Recovered aggregate layouts from MWCC debug type records. */
typedef struct GLI_tdstTexture_ GLI_tdstTexture_;
typedef struct TEX_tdstPalette_ TEX_tdstPalette_;

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

struct TEX_tdstPalette_ {
    unsigned char a1024_uccolors[1024]; /* +0x0 */
};

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\MultiDRV\Src\Texture.c lines 61–67 */
/* addr: 0x002ab2d0  size: 80 bytes */
void GLI_fn_vUnallocTextureInChannel(unsigned char _ucChannel)
{
    int lTextureCounter;
    /* line map: */
    /*   line 61 @ +0x000 */
    /*   line 61 @ +0x000 */
    /*   line 64 @ +0x000 */
    /*   line 67 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* addr: 0x002ab320  size: 8 bytes */
void TEX_fn_vSetTextureCaps(GLI_tdstTexture_* p_stTexture, int _lTextureCaps)
{
    p_stTexture->lTextureCaps = _lTextureCaps;
}

/* addr: 0x002ab330  size: 8 bytes */
int TEX_fn_lGetTextureCaps(GLI_tdstTexture_* p_stTexture)
{
    return p_stTexture->lTextureCaps;
}

/* addr: 0x002ab340  size: 8 bytes */
int TEX_fn_lGetTextureRealWidth(GLI_tdstTexture_* p_stTexture)
{
    return p_stTexture->lRealWidth;
}

/* addr: 0x002ab350  size: 8 bytes */
int TEX_fn_lGetTextureRealHeight(GLI_tdstTexture_* p_stTexture)
{
    return p_stTexture->lRealHeight;
}
