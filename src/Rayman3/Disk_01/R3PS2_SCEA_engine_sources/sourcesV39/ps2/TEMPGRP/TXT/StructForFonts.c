/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\TXT\StructForFonts.c */
/* Language: C */
/* Compiler: MW MIPS C Compiler */

#include <stddef.h>

/* Recovered aggregate layouts from MWCC debug type records. */
typedef struct _tdstBitmapFont _tdstBitmapFont;
typedef struct GLI_tdstTexture_ GLI_tdstTexture_;
typedef struct _tdstDefCharacter _tdstDefCharacter;
typedef struct tdstKerningPair tdstKerningPair;
typedef struct _tdstFont _tdstFont;

struct _tdstBitmapFont {
    GLI_tdstTexture_* p_TextureData; /* +0x0 */
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

struct _tdstDefCharacter {
    unsigned short uwX; /* +0x0 */
    unsigned short uwY; /* +0x2 */
    unsigned short uwH; /* +0x4 */
    unsigned short uwW; /* +0x6 */
    unsigned short uwXBlackBox; /* +0x8 */
    short wYBaseLine; /* +0xa */
    unsigned char ucRefToFontBitmap; /* +0xc */
    unsigned char ucDef; /* +0xd */
};

struct tdstKerningPair {
    short wFirst; /* +0x0 */
    short wSecond; /* +0x2 */
    short wKernAmount; /* +0x4 */
};

struct _tdstFont {
    _tdstDefCharacter TabOfCharacter[256]; /* +0x0 */
    tdstKerningPair TabOfKerningPairsNotNull[200]; /* +0xe00 */
    unsigned short uwNbKerning; /* +0x12b0 */
};

unsigned char g_NbFont;
unsigned char g_ucNbFontBitmap;
_tdstBitmapFont g_TabBitmapFont[50];
_tdstFont g_ListOfFonts[2];

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\TXT\StructForFonts.c lines 28–28 */
/* addr: 0x00323690  size: 8 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 28
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void TXT_fn_vLoadInit(void)
{
    fn_vInitFont();
}
