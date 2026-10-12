/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\TXT\StructForFonts.c */
/* Language: C */
/* Compiler: MW MIPS C Compiler */

#include <stddef.h>
#include "r3/GLI.h"

/* Recovered aggregate layouts from MWCC debug type records. */
typedef struct _tdstBitmapFont _tdstBitmapFont;
typedef struct _tdstDefCharacter _tdstDefCharacter;
typedef struct tdstKerningPair tdstKerningPair;
typedef struct _tdstFont _tdstFont;

struct _tdstBitmapFont {
    GLI_tdstTexture_* p_TextureData; /* +0x0 */
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

void TXT_fn_vLoadInit(void)
{
    fn_vInitFont();
}
