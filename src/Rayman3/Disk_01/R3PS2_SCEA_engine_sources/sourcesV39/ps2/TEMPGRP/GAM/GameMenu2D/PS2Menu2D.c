/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\GameMenu2D\PS2Menu2D.c */
/* Language: C */
/* Compiler: MW MIPS C Compiler */

#include <stddef.h>

/* Recovered aggregate layouts from MWCC debug type records. */
typedef struct anon_0 anon_0;
typedef struct anon_1 anon_1;
typedef struct anon_2 anon_2;
typedef struct tdstMenu2DPages_ tdstMenu2DPages_;
typedef struct GEO_tdstColor_ GEO_tdstColor_;

struct anon_0 {
    int TextureSpace; /* +0x0 */
    int hUsedBy; /* +0x4 */
    int MaxSize; /* +0x8 */
};

struct anon_1 {
    float stMat[2][2]; /* +0x0 */
    float stTrans[2]; /* +0x10 */
};

struct anon_2 {
    int pst_Texture; /* +0x0 */
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

struct tdstMenu2DPages_ {
    int hMaterial; /* +0x0 */
    /* aggregate */ int eTypePage; /* +0x4 */
    char Title[50]; /* +0x8 */
    char aText[10][50]; /* +0x3a */
    char abGrayed[10]; /* +0x22e */
    char aValue[10]; /* +0x238 */
    unsigned int NbSelection; /* +0x244 */
    unsigned int NbEntry; /* +0x248 */
    unsigned int CurrentFirstEntry; /* +0x24c */
};

struct GEO_tdstColor_ {
    float xR; /* +0x0 */
    float xG; /* +0x4 */
    float xB; /* +0x8 */
    float xA; /* +0xc */
};

static int gs_M2DInitDone;
unsigned int gs_ulTextureCacheFrameNumber;
char g_BackgroundPalette[1024];
/* array */ int g_MenuTextureCache[16];
static int gs_iNbTexturesMenu;
anon_0 g_ax_stTPTitles[13];
anon_0 g_ax_stTPFix[2];
anon_0 g_stTPBackground;
static int gs_iNbTitleTextures;
static int gs_iNbFixTextures;
static /* aggregate */ int gs_eTextureType;
int g_hFixMaterialForArcadeAndFilms;
int g_hFixMaterialForSelectedFilms;
int g_CinematicPage;
int g_CurrentMenu2DPage;
tdstMenu2DPages_ aMenu2DPages[35];
int g_hFixMaterialForMenu2D;
int g_hBGMaterialForMenu2D;

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\GameMenu2D\PS2Menu2D.c lines 32–40 */
/* addr: 0x0029f620  size: 80 bytes */
void fn_vResetAllocator(anon_0* pstAllocator)
{
    unsigned int u32Address;
    /* line map: */
    /*   line 32 @ +0x000 */
    /*   line 38 @ +0x000 */
    /*   line 40 @ +0x000 */
    /*   line 40 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\GameMenu2D\PS2Menu2D.c lines 355–425 */
/* addr: 0x0029f670  size: 488 bytes */
void CheckMenu2DTextures(/* function pointer */ int pMat)
{
    char* EndOfDMAList1;
    char* EndOfDMAList1;
    int loaded;
    /* line map: */
    /*   line 356 @ +0x000 */
    /*   line 355 @ +0x000 */
    /*   line 358 @ +0x000 */
    /*   line 361 @ +0x000 */
    /*   line 362 @ +0x000 */
    /*   line 362 @ +0x000 */
    /*   line 372 @ +0x000 */
    /*   line 372 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\GameMenu2D\PS2Menu2D.c lines 300–339 */
/* addr: 0x0029f860  size: 380 bytes */
int PS2M2D_vCheckMaterialInCache(/* function pointer */ int pMaterial)
{
    unsigned int MinIndex;
    unsigned int i;
    /* line map: */
    /*   line 300 @ +0x000 */
    /*   line 305 @ +0x000 */
    /*   line 311 @ +0x000 */
    /*   line 316 @ +0x000 */
    /*   line 319 @ +0x000 */
    /*   line 322 @ +0x000 */
    /*   line 326 @ +0x000 */
    /*   line 332 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\GameMenu2D\PS2Menu2D.c lines 291–295 */
/* addr: 0x0029f9e0  size: 108 bytes */
void PS2M2D_vReinitMenuTextures(void)
{
    unsigned int i;
    /* line map: */
    /*   line 291 @ +0x000 */
    /*   line 291 @ +0x000 */
    /*   line 295 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\GameMenu2D\PS2Menu2D.c lines 243–281 */
/* addr: 0x0029fa50  size: 300 bytes */
void InitPS2Menu2DTextures(void)
{
    char* EndOfDMAList2;
    char* EndOfDMAList1;
    unsigned int i;
    /* line map: */
    /*   line 243 @ +0x000 */
    /*   line 243 @ +0x000 */
    /*   line 247 @ +0x000 */
    /*   line 248 @ +0x000 */
    /*   line 250 @ +0x000 */
    /*   line 250 @ +0x000 */
    /*   line 252 @ +0x000 */
    /*   line 257 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\GameMenu2D\PS2Menu2D.c lines 173–196 */
/* addr: 0x0029fb80  size: 248 bytes */
void M2D_iLoadMenuTexture(GLI_tdstTexture_* pp_stTexture, char* TxrName)
{
    int i;
    /* line map: */
    /*   line 176 @ +0x000 */
    /*   line 173 @ +0x000 */
    /*   line 173 @ +0x000 */
    /*   line 180 @ +0x000 */
    /*   line 186 @ +0x000 */
    /*   line 188 @ +0x000 */
    /*   line 192 @ +0x000 */
    /*   line 194 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\GameMenu2D\PS2Menu2D.c lines 163–163 */
/* addr: 0x0029fc80  size: 16 bytes */
void M2D_StartTitlesLoading(void)
{
    /* line map: */
    /*   line 163 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\GameMenu2D\PS2Menu2D.c lines 157–157 */
/* addr: 0x0029fc90  size: 16 bytes */
void M2D_StartFixLoading(void)
{
    /* line map: */
    /*   line 157 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* addr: 0x0029fca0  size: 8 bytes */
void M2D_StartBGLoading(void)
{
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\GameMenu2D\PS2Menu2D.c lines 133–142 */
/* addr: 0x0029fcb0  size: 156 bytes */
void FreeMenu2DTextures(void)
{
    int i;
    /* line map: */
    /*   line 135 @ +0x000 */
    /*   line 133 @ +0x000 */
    /*   line 135 @ +0x000 */
    /*   line 135 @ +0x000 */
    /*   line 142 @ +0x000 */
    /* TODO: decompile from asm/... */
}
