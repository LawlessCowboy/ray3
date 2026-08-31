/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\SDLs\SDLUtils.cpp */
/* Language: C++ */
/* Compiler: MW MIPS C Compiler */

#include <stddef.h>

/* Recovered aggregate layouts from MWCC debug type records. */
typedef struct GLI_tdstTexture_ GLI_tdstTexture_;
typedef struct GEO_tdstColor_ GEO_tdstColor_;

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

struct GEO_tdstColor_ {
    float xR; /* +0x0 */
    float xG; /* +0x4 */
    float xB; /* +0x8 */
    float xA; /* +0xc */
};

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\SDLs\SDLUtils.cpp lines 18–18 */
/* addr: 0x002db1a0  size: 72 bytes */
unsigned int SDL_GetNew(void)
{
    /* line map: */
    /*   line 18 @ +0x000 */
    /*   line 18 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\SDLs\SDLUtils.cpp lines 172–189 */
/* addr: 0x002db1f0  size: 64 bytes */
void GLI_vGetVertexPointersFromSDCStructureSpriteGens(/* function pointer */ int pSDC, unsigned int iElement, float (*) pVOrg[4], float (*) pUV1[4], float (*) pNormals[4], float (*) pVA[4])
{
    unsigned int NbVertices;
    /* line map: */
    /*   line 172 @ +0x000 */
    /*   line 172 @ +0x000 */
    /*   line 172 @ +0x000 */
    /*   line 175 @ +0x000 */
    /*   line 177 @ +0x000 */
    /*   line 189 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\SDLs\SDLUtils.cpp lines 94–153 */
/* addr: 0x002db230  size: 356 bytes */
void GLI_vGetVertexPointersFromSDCStructureForSinus(/* function pointer */ int pSDC, unsigned int iElement, float (*) pVOrg[4], float** pVTSinus, /* function pointer */ int hVisualMaterial, float (*) pVA[4])
{
    unsigned int Type;
    unsigned int LayerTypes;
    unsigned int bMultiTexture;
    unsigned int NbStages;
    unsigned int stage;
    unsigned int NbVerticesAlignedUVs;
    unsigned int NbVerticesAligned;
    unsigned int NbVertices;
    /* line map: */
    /*   line 94 @ +0x000 */
    /*   line 94 @ +0x000 */
    /*   line 99 @ +0x000 */
    /*   line 102 @ +0x000 */
    /*   line 107 @ +0x000 */
    /*   line 117 @ +0x000 */
    /*   line 121 @ +0x000 */
    /*   line 125 @ +0x000 */
    /* TODO: decompile from asm/... */
}
