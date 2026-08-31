/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\DPT\DPT.c */
/* Language: C */
/* Compiler: MW MIPS C Compiler */

#include <stddef.h>

/* Recovered aggregate layouts from MWCC debug type records. */
typedef struct tdstDataPath_ tdstDataPath_;

struct tdstDataPath_ {
    char szGameData[256]; /* +0x0 */
    char szEngineDLL[256]; /* +0x100 */
    char szSaveGame[256]; /* +0x200 */
    char szWorld[256]; /* +0x300 */
    char szLevels[256]; /* +0x400 */
    char szSound[256]; /* +0x500 */
    char szGraphicsClasses[256]; /* +0x600 */
    char szGraphicsBanks[256]; /* +0x700 */
    char szVignettes[256]; /* +0x800 */
    char szOptions[256]; /* +0x900 */
    char szTemp[256]; /* +0xa00 */
    char szMenus[256]; /* +0xb00 */
    char szMenusAnims[256]; /* +0xc00 */
    char szVideo[256]; /* +0xd00 */
};

char DPT_g_szTrueSaveGamePath[256];
tdstDataPath_ g_stDataPath;

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\DPT\DPT.c lines 792–802 */
/* addr: 0x00257e50  size: 44 bytes */
void COL_fn_vExploreOctreeWithBox(/* function pointer */ int p_stOctree, /* function pointer */ int p_stMinPoint, /* function pointer */ int p_stMaxPoint, /* function pointer */ int d_pstSelectedNode, short* p_xNumberOfSelectedNodes)
{
    /* line map: */
    /*   line 792 @ +0x000 */
    /*   line 796 @ +0x000 */
    /*   line 802 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\DPT\DPT.c lines 697–773 */
/* addr: 0x00257e80  size: 432 bytes */
void COL_fn_vExploreRecursiveOctreeWithBox(/* function pointer */ int p_stNodeToBeExplored, /* function pointer */ int p_stMinSituation, /* function pointer */ int p_stMaxSituation, /* function pointer */ int d_pstSelectedNode, short* p_xNumberOfSelectedNodes)
{
    /* line map: */
    /*   line 697 @ +0x000 */
    /*   line 697 @ +0x000 */
    /*   line 703 @ +0x000 */
    /*   line 707 @ +0x000 */
    /*   line 709 @ +0x000 */
    /*   line 711 @ +0x000 */
    /*   line 713 @ +0x000 */
    /*   line 717 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\DPT\DPT.c lines 60–60 */
/* addr: 0x00258030  size: 12 bytes */
void fn_szGetGameDataPath(void)
{
    /* line map: */
    /*   line 60 @ +0x000 */
    /* TODO: decompile from asm/... */
}
