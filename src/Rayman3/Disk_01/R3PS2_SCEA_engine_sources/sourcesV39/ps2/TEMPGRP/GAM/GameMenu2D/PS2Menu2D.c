/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\GameMenu2D\PS2Menu2D.c */
/* Language: C */
/* Compiler: MW MIPS C Compiler */

#include <stddef.h>


/* Recovered aggregate layouts from MWCC debug type records. */
typedef struct GLI_tdstTexture_ GLI_tdstTexture_;
typedef struct anon_0 anon_0;
typedef struct GEO_tdstColor_ GEO_tdstColor_;
typedef struct anon_1 anon_1;
typedef struct anon_2 anon_2;
typedef struct GLI_tdstMaterial_ GLI_tdstMaterial_;
typedef struct tdstMenuCacheEntry_ tdstMenuCacheEntry_;
typedef struct tdstMenu2DPages_ tdstMenu2DPages_;
typedef struct GLI_tdstAnimatedTextureNode_ GLI_tdstAnimatedTextureNode_;

typedef enum anon_enum_0095d68a {
    eM2D_BG = 0,
    eM2D_FIX = 1,
    eM2D_TITLE = 2,
} anon_enum_0095d68a;

typedef enum anon_enum_0095df49 {
    eSaveFileTypePage = 0,
    eLoadFileTypePage = 1,
    eLevelTypePage = 2,
    eGameTypePage = 3,
    eOptionsTypePage = 4,
    eControlOptionTypePage = 5,
    eAudioOptionTypePage = 6,
    eVideoOptionTypePage = 7,
    eBonusTypePage = 8,
    eArcadeTypePage = 9,
    eCinematicTypePage = 10,
    eXTraTypePage = 11,
    eAlbumTypePage = 12,
    eHallOfFameTypePage = 13,
    eStartMenuTypePage = 14,
    eCenterScreenTypePage = 15,
    ePal60_1_TypePage = 16,
    ePal60_2_TypePage = 17,
    ePal60_3_TypePage = 18,
    eProgressive_1_TypePage = 19,
    eProgressive_2_TypePage = 20,
    eProgressive_3_TypePage = 21,
    eEndOfGamePage = 22,
} anon_enum_0095df49;

struct anon_0 {
    int TextureSpace; /* +0x0 */
    GLI_tdstMaterial_* hUsedBy; /* +0x4 */
    int MaxSize; /* +0x8 */
};

struct GEO_tdstColor_ {
    float xR; /* +0x0 */
    float xG; /* +0x4 */
    float xB; /* +0x8 */
    float xA; /* +0xc */
};

struct anon_1 {
    float stMat[2][2]; /* +0x0 */
    float stTrans[2]; /* +0x10 */
};

struct anon_2 {
    GLI_tdstTexture_* pst_Texture; /* +0x0 */
    char c_Operator; /* +0x4 */
    char c_ColorOperator; /* +0x5 */
    char c_UVSource; /* +0x6 */
    char c_Flags; /* +0x7 */
    unsigned int ulTextureProperties; /* +0x8 */
    anon_1 st_UVStaticPos; /* +0xc */
    anon_1 st_UVDynamicPos; /* +0x24 */
    float fDynamicAngle; /* +0x3c */
    float fStaticAngle; /* +0x40 */
    unsigned int ulSetMaterialFunction; /* +0x44 */
    float fScaleU; /* +0x48 */
    float fScaleV; /* +0x4c */
};

struct GLI_tdstMaterial_ {
    unsigned int xMaterialType; /* +0x0 */
    GEO_tdstColor_ stAmbient; /* +0x4 */
    GEO_tdstColor_ stDiffuse; /* +0x14 */
    GEO_tdstColor_ stSpecular; /* +0x24 */
    GEO_tdstColor_ stColor; /* +0x34 */
    unsigned int lMaterialAdditionnalType; /* +0x44 */
    int lSpecularExponent; /* +0x48 */
    GLI_tdstTexture_* p_stTexture; /* +0x4c */
    float fAddU; /* +0x50 */
    float fAddV; /* +0x54 */
    float fConstantAddU; /* +0x58 */
    float fConstantAddV; /* +0x5c */
    int lIncrementIsEnable; /* +0x60 */
    unsigned int lActualRefreshNumber; /* +0x64 */
    GLI_tdstAnimatedTextureNode_* p_stFistAnimatedTExtureNode; /* +0x68 */
    GLI_tdstAnimatedTextureNode_* p_stActualAnimatedTExtureNode; /* +0x6c */
    int lNumberOfDisplayNode; /* +0x70 */
    float xActualDisplayTimeSinceStartOfLastTexture; /* +0x74 */
    unsigned char xIsLocked; /* +0x78 */
    unsigned int uiFlags; /* +0x7c */
    unsigned int ulMultiTextureType; /* +0x80 */
    unsigned int ulNbTextureStages; /* +0x84 */
    anon_2 a_stMultiMaterial[4]; /* +0x88 */
};

struct tdstMenuCacheEntry_ {
    int pDataAddress; /* +0x0 */
    GLI_tdstMaterial_* pAssociatedMaterial; /* +0x4 */
    unsigned int UsedTime; /* +0x8 */
    int TextureName; /* +0xc */
    unsigned int MaxSize; /* +0x10 */
};

struct tdstMenu2DPages_ {
    GLI_tdstMaterial_* hMaterial; /* +0x0 */
    anon_enum_0095df49 eTypePage; /* +0x4 */
    char Title[50]; /* +0x8 */
    char aText[10][50]; /* +0x3a */
    char abGrayed[10]; /* +0x22e */
    char aValue[10]; /* +0x238 */
    unsigned int NbSelection; /* +0x244 */
    unsigned int NbEntry; /* +0x248 */
    unsigned int CurrentFirstEntry; /* +0x24c */
};

struct GLI_tdstAnimatedTextureNode_ {
    GLI_tdstTexture_* p_stTexture; /* +0x0 */
    float xDisplayTime; /* +0x4 */
    GLI_tdstAnimatedTextureNode_* p_stNextDisplayNode; /* +0x8 */
};

static int gs_M2DInitDone;
unsigned int gs_ulTextureCacheFrameNumber;
char g_BackgroundPalette[1024];
tdstMenuCacheEntry_ g_MenuTextureCache[16];
static int gs_iNbTexturesMenu;
anon_0 g_ax_stTPTitles[13];
anon_0 g_ax_stTPFix[2];
anon_0 g_stTPBackground;
static int gs_iNbTitleTextures;
static int gs_iNbFixTextures;
static anon_enum_0095d68a gs_eTextureType;
int g_hFixMaterialForArcadeAndFilms;
int g_hFixMaterialForSelectedFilms;
int g_CinematicPage;
int g_CurrentMenu2DPage;
tdstMenu2DPages_ aMenu2DPages[35];
int g_hFixMaterialForMenu2D;
int g_hBGMaterialForMenu2D;

/* fn_vResetAllocator (0x0029f620, lines 27-46) is attributed to this file by
 * its debug record, but it belongs to salloc.c: it is linked between
 * salloc.c's functions and this file's, fn_vInitAllocator inlines it, and its
 * format string sits with salloc.c's.  It is reconstructed there. */
/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\GameMenu2D\PS2Menu2D.c lines 345–426 */
/* addr: 0x0029f670  size: 488 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 345
 *   +0x0004 -> line 356
 *   +0x0008 -> line 345
 *   +0x0018 -> line 355
 *   +0x001c -> line 356
 *   +0x0028 -> line 358
 *   +0x0030 -> line 360
 *   +0x0034 -> line 361
 *   +0x0038 -> line 360
 *   +0x003c -> line 362
 *   +0x0058 -> line 361
 *   +0x005c -> line 362
 *   +0x0064 -> line 369
 *   +0x0070 -> line 372
 *   +0x0074 -> line 374
 *   +0x0078 -> line 372
 *   +0x007c -> line 380
 *   +0x0080 -> line 374
 *   +0x0084 -> line 380
 *   +0x0088 -> line 374
 *   +0x008c -> line 380
 *   +0x00a0 -> line 382
 *   +0x00b4 -> line 388
 *   +0x00bc -> line 391
 *   +0x00c0 -> line 394
 *   +0x00c4 -> line 391
 *   +0x00c8 -> line 394
 *   +0x00d8 -> line 396
 *   +0x00e0 -> line 397
 *   +0x00f4 -> line 398
 *   +0x0100 -> line 402
 *   +0x0124 -> line 404
 *   +0x012c -> line 405
 *   +0x0148 -> line 406
 *   +0x0154 -> line 411
 *   +0x015c -> line 414
 *   +0x0160 -> line 411
 *   +0x0164 -> line 414
 *   +0x018c -> line 416
 *   +0x019c -> line 418
 *   +0x01a4 -> line 419
 *   +0x01b4 -> line 422
 *   +0x01bc -> line 423
 *   +0x01c4 -> line 425
 *   +0x01d0 -> line 426
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void CheckMenu2DTextures(void)
{
    char* EndOfDMAList1;
    GLI_tdstMaterial_* pMat;
    int loaded;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\GameMenu2D\PS2Menu2D.c lines 299–340 */
/* addr: 0x0029f860  size: 380 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 299
 *   +0x0004 -> line 300
 *   +0x0008 -> line 303
 *   +0x0010 -> line 305
 *   +0x0040 -> line 307
 *   +0x004c -> line 311
 *   +0x0068 -> line 312
 *   +0x0074 -> line 316
 *   +0x007c -> line 317
 *   +0x00a8 -> line 319
 *   +0x00b4 -> line 321
 *   +0x00b8 -> line 322
 *   +0x00c0 -> line 325
 *   +0x00f8 -> line 326
 *   +0x00fc -> line 327
 *   +0x0108 -> line 332
 *   +0x0114 -> line 333
 *   +0x0118 -> line 332
 *   +0x0120 -> line 334
 *   +0x0124 -> line 332
 *   +0x012c -> line 334
 *   +0x0134 -> line 333
 *   +0x013c -> line 334
 *   +0x0140 -> line 333
 *   +0x0144 -> line 334
 *   +0x0154 -> line 333
 *   +0x0158 -> line 334
 *   +0x016c -> line 339
 *   +0x0170 -> line 340
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
int PS2M2D_vCheckMaterialInCache(GLI_tdstMaterial_* pMaterial)
{
    unsigned int MinIndex;
    unsigned int i;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\GameMenu2D\PS2Menu2D.c lines 289–295 */
/* addr: 0x0029f9e0  size: 108 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 289
 *   +0x0008 -> line 291
 *   +0x0014 -> line 292
 *   +0x0018 -> line 291
 *   +0x001c -> line 292
 *   +0x0064 -> line 295
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void PS2M2D_vReinitMenuTextures(void)
{
    unsigned int i;

    for (i = 0; i < 16; i++)
    {
        g_MenuTextureCache[i].pAssociatedMaterial = 0;
        g_MenuTextureCache[i].UsedTime = 0;
    }
    gs_ulTextureCacheFrameNumber = 0;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\GameMenu2D\PS2Menu2D.c lines 241–281 */
/* addr: 0x0029fa50  size: 300 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 241
 *   +0x0004 -> line 243
 *   +0x0008 -> line 241
 *   +0x001c -> line 243
 *   +0x0028 -> line 244
 *   +0x0030 -> line 247
 *   +0x0034 -> line 250
 *   +0x0038 -> line 248
 *   +0x003c -> line 247
 *   +0x0040 -> line 250
 *   +0x0044 -> line 255
 *   +0x0048 -> line 250
 *   +0x0050 -> line 251
 *   +0x0054 -> line 252
 *   +0x0058 -> line 253
 *   +0x005c -> line 257
 *   +0x0064 -> line 263
 *   +0x0068 -> line 259
 *   +0x0074 -> line 263
 *   +0x0078 -> line 259
 *   +0x0084 -> line 264
 *   +0x0088 -> line 260
 *   +0x008c -> line 264
 *   +0x0090 -> line 260
 *   +0x0094 -> line 263
 *   +0x0098 -> line 260
 *   +0x009c -> line 263
 *   +0x00a0 -> line 266
 *   +0x00a8 -> line 269
 *   +0x00b8 -> line 270
 *   +0x00bc -> line 269
 *   +0x00c0 -> line 272
 *   +0x00c4 -> line 271
 *   +0x00c8 -> line 270
 *   +0x00cc -> line 272
 *   +0x00d0 -> line 273
 *   +0x00d4 -> line 272
 *   +0x00d8 -> line 275
 *   +0x00e8 -> line 277
 *   +0x00f0 -> line 278
 *   +0x00f4 -> line 277
 *   +0x00f8 -> line 278
 *   +0x0104 -> line 280
 *   +0x010c -> line 281
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void InitPS2Menu2DTextures(void)
{
    char* EndOfDMAList2;
    char* EndOfDMAList1;
    unsigned int i;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\GameMenu2D\PS2Menu2D.c lines 169–204 */
/* addr: 0x0029fb80  size: 248 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 169
 *   +0x0004 -> line 176
 *   +0x0008 -> line 169
 *   +0x0010 -> line 173
 *   +0x0014 -> line 176
 *   +0x0018 -> line 173
 *   +0x001c -> line 176
 *   +0x0040 -> line 180
 *   +0x0050 -> line 181
 *   +0x0058 -> line 186
 *   +0x008c -> line 187
 *   +0x0094 -> line 188
 *   +0x009c -> line 191
 *   +0x00a0 -> line 192
 *   +0x00d0 -> line 193
 *   +0x00d4 -> line 194
 *   +0x00e0 -> line 195
 *   +0x00e4 -> line 196
 *   +0x00e8 -> line 204
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void M2D_iLoadMenuTexture(GLI_tdstTexture_** pp_stTexture, char* TxrName)
{
    int i;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\GameMenu2D\PS2Menu2D.c lines 162–164 */
/* addr: 0x0029fc80  size: 16 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 162
 *   +0x0004 -> line 163
 *   +0x0008 -> line 164
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void M2D_StartTitlesLoading(void)
{
    gs_iNbTitleTextures = 0;
    gs_eTextureType = eM2D_TITLE;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\GameMenu2D\PS2Menu2D.c lines 156–158 */
/* addr: 0x0029fc90  size: 16 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 156
 *   +0x0004 -> line 157
 *   +0x0008 -> line 158
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void M2D_StartFixLoading(void)
{
    gs_iNbFixTextures = 0;
    gs_eTextureType = eM2D_FIX;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\GameMenu2D\PS2Menu2D.c lines 152–152 */
/* addr: 0x0029fca0  size: 8 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 152
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void M2D_StartBGLoading(void)
{
    gs_eTextureType = eM2D_BG;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\GameMenu2D\PS2Menu2D.c lines 130–142 */
/* addr: 0x0029fcb0  size: 156 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 130
 *   +0x0004 -> line 135
 *   +0x0008 -> line 130
 *   +0x0010 -> line 133
 *   +0x0020 -> line 136
 *   +0x0060 -> line 135
 *   +0x0064 -> line 136
 *   +0x0068 -> line 135
 *   +0x0074 -> line 136
 *   +0x0094 -> line 142
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void FreeMenu2DTextures(void)
{
    int i;

    g_stTPBackground.hUsedBy = NULL;
    for (i = 0; i < sizeof(g_ax_stTPFix) / sizeof(g_ax_stTPFix[0]); i++)
        g_ax_stTPFix[i].hUsedBy = NULL;
    for (i = 0; i < sizeof(g_ax_stTPTitles) / sizeof(g_ax_stTPTitles[0]); i++)
        g_ax_stTPTitles[i].hUsedBy = NULL;
}
