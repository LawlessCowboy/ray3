/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\MultiDRV\Src\TexArray.c */
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

int gs_lNumberOfTextureToCreate;
unsigned int GLI_g_ulNumberOfLoadedTexture;
int gs_aDEFTableOfTextureMemoryChannels;
int gs_aDEFTableOfTextureAlreadyRead;
unsigned int GLI_gsCurrentMemoryChannel;

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\MultiDRV\Src\TexArray.c lines 132–132 */
/* addr: 0x002ab140  size: 12 bytes */
void GLI_TEX_vSignalCurrentMemoryChannel(unsigned char ucCurrentChannel)
{
    /* line map: */
    /*   line 132 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\MultiDRV\Src\TexArray.c lines 155–162 */
/* addr: 0x002ab150  size: 128 bytes */
void GLI_vUnCompressExistantTexture(void)
{
    int lTextureCounter;
    /* line map: */
    /*   line 155 @ +0x000 */
    /*   line 158 @ +0x000 */
    /*   line 160 @ +0x000 */
    /*   line 162 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\MultiDRV\Src\TexArray.c lines 140–140 */
/* addr: 0x002ab1d0  size: 12 bytes */
int GLI_lGetBigestSizeOfTexture(void)
{
    /* line map: */
    /*   line 140 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\MultiDRV\Src\TexArray.c lines 82–85 */
/* addr: 0x002ab1e0  size: 232 bytes */
void GLI_fn_vUnallocAllTextures(void)
{
    int lTextureCounter;
    /* line map: */
    /*   line 82 @ +0x000 */
    /*   line 82 @ +0x000 */
    /*   line 85 @ +0x000 */
    /* TODO: decompile from asm/... */
}
