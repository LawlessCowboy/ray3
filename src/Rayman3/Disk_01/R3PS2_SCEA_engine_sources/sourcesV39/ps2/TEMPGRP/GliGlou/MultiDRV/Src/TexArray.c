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
    GLI_tdstTexture_* p_TextureOfSubstitution; /* +0x44 */
    unsigned char ucBilinearMode; /* +0x48 */
    unsigned char ucCylingMode; /* +0x49 */
    char a255_cFileName[128]; /* +0x4a */
};

int gs_lNumberOfTextureToCreate;
unsigned int GLI_g_ulNumberOfLoadedTexture;
int *gs_aDEFTableOfTextureMemoryChannels;
GLI_tdstTexture_ **gs_aDEFTableOfTextureAlreadyRead;
unsigned int GLI_gsCurrentMemoryChannel;

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\MultiDRV\Src\TexArray.c lines 131–132 */
/* addr: 0x002ab140  size: 12 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 131
 *   +0x0004 -> line 132
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void GLI_TEX_vSignalCurrentMemoryChannel(unsigned char ucCurrentChannel)
{
    GLI_gsCurrentMemoryChannel = ucCurrentChannel;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\MultiDRV\Src\TexArray.c lines 153–162 */
/* addr: 0x002ab150  size: 128 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 153
 *   +0x0008 -> line 155
 *   +0x0038 -> line 157
 *   +0x0040 -> line 158
 *   +0x0054 -> line 159
 *   +0x0064 -> line 160
 *   +0x0068 -> line 161
 *   +0x0078 -> line 162
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void GLI_vUnCompressExistantTexture(void)
{
    int lTextureCounter;
    int lTextureOffset;

    lTextureCounter = 0;
    lTextureOffset = 0;
    do {
        if (*((int *)((char *)gs_aDEFTableOfTextureMemoryChannels + lTextureOffset)) != 0xC0DE0005) {
            if (*((GLI_tdstTexture_ **)((char *)gs_aDEFTableOfTextureAlreadyRead + lTextureOffset)) != NULL) {
                (*((GLI_tdstTexture_ **)((char *)gs_aDEFTableOfTextureAlreadyRead + lTextureOffset)))->lHeight = (*((GLI_tdstTexture_ **)((char *)gs_aDEFTableOfTextureAlreadyRead + lTextureOffset)))->lRealHeight;
                (*((GLI_tdstTexture_ **)((char *)gs_aDEFTableOfTextureAlreadyRead + lTextureOffset)))->lWidth = (*((GLI_tdstTexture_ **)((char *)gs_aDEFTableOfTextureAlreadyRead + lTextureOffset)))->lRealWidth;
                (*((GLI_tdstTexture_ **)((char *)gs_aDEFTableOfTextureAlreadyRead + lTextureOffset)))->lCompressionCounter = 0;
            }
        }
        lTextureCounter++;
        lTextureOffset += 4;
    } while (lTextureCounter < 0x190);
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\MultiDRV\Src\TexArray.c lines 121–140 */
/* addr: 0x002ab1d0  size: 12 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 121
 *   +0x0004 -> line 140
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
int GLI_lGetBigestSizeOfTexture(void)
{
    return 0x40400;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\MultiDRV\Src\TexArray.c lines 80–85 */
/* addr: 0x002ab1e0  size: 232 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 80
 *   +0x0008 -> line 82
 *   +0x0014 -> line 83
 *   +0x001c -> line 82
 *   +0x0024 -> line 83
 *   +0x00e0 -> line 85
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void GLI_fn_vUnallocAllTextures(void)
{
    int lTextureCounter;
    int lTextureOffset;

    lTextureCounter = 0;
    lTextureOffset = 0;
    do {
        *((int *)((char *)gs_aDEFTableOfTextureMemoryChannels + lTextureOffset + 0)) = 0xC0DE0005;
        *((GLI_tdstTexture_ **)((char *)gs_aDEFTableOfTextureAlreadyRead + lTextureOffset + 0)) = NULL;
        *((int *)((char *)gs_aDEFTableOfTextureMemoryChannels + lTextureOffset + 4)) = 0xC0DE0005;
        *((GLI_tdstTexture_ **)((char *)gs_aDEFTableOfTextureAlreadyRead + lTextureOffset + 4)) = NULL;
        *((int *)((char *)gs_aDEFTableOfTextureMemoryChannels + lTextureOffset + 8)) = 0xC0DE0005;
        *((GLI_tdstTexture_ **)((char *)gs_aDEFTableOfTextureAlreadyRead + lTextureOffset + 8)) = NULL;
        *((int *)((char *)gs_aDEFTableOfTextureMemoryChannels + lTextureOffset + 12)) = 0xC0DE0005;
        *((GLI_tdstTexture_ **)((char *)gs_aDEFTableOfTextureAlreadyRead + lTextureOffset + 12)) = NULL;
        *((int *)((char *)gs_aDEFTableOfTextureMemoryChannels + lTextureOffset + 16)) = 0xC0DE0005;
        *((GLI_tdstTexture_ **)((char *)gs_aDEFTableOfTextureAlreadyRead + lTextureOffset + 16)) = NULL;
        *((int *)((char *)gs_aDEFTableOfTextureMemoryChannels + lTextureOffset + 20)) = 0xC0DE0005;
        *((GLI_tdstTexture_ **)((char *)gs_aDEFTableOfTextureAlreadyRead + lTextureOffset + 20)) = NULL;
        *((int *)((char *)gs_aDEFTableOfTextureMemoryChannels + lTextureOffset + 24)) = 0xC0DE0005;
        *((GLI_tdstTexture_ **)((char *)gs_aDEFTableOfTextureAlreadyRead + lTextureOffset + 24)) = NULL;
        *((int *)((char *)gs_aDEFTableOfTextureMemoryChannels + lTextureOffset + 28)) = 0xC0DE0005;
        *((GLI_tdstTexture_ **)((char *)gs_aDEFTableOfTextureAlreadyRead + lTextureOffset + 28)) = NULL;
        lTextureCounter += 8;
        lTextureOffset += 32;
    } while (lTextureCounter < 0x190);
}
