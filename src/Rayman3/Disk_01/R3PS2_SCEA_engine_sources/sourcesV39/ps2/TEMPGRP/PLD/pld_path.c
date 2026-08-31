/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\PLD\pld_path.c */
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

/* aggregate */ int a_p_fn_szNameFunction;
unsigned char bUseMultiPath;
char PLD_g_szAreaFileName[256];
tdstDataPath_ g_stDataPath;

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\PLD\pld_path.c lines 322–327 */
/* addr: 0x0012f060  size: 84 bytes */
unsigned char PLD_fn_bIsInFix(void* Ptr)
{
    unsigned int ulNbObject;
    unsigned int ulI;
    /* line map: */
    /*   line 322 @ +0x000 */
    /*   line 325 @ +0x000 */
    /*   line 327 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\PLD\pld_path.c lines 411–411 */
/* addr: 0x0012f0c0  size: 204 bytes */
void PLD_szLocationFromAreaId(/* aggregate */ int eAreaId, char* szName)
{
    char str[256];
    /* line map: */
    /*   line 411 @ +0x000 */
    /*   line 411 @ +0x000 */
    /*   line 411 @ +0x000 */
    /*   line 411 @ +0x000 */
    /*   line 411 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\PLD\pld_path.c lines 389–393 */
/* addr: 0x0012f190  size: 128 bytes */
void PLD_szPrependGamedataName(char* szName)
{
    char szTmpCopy[256];
    /* line map: */
    /*   line 389 @ +0x000 */
    /*   line 393 @ +0x000 */
    /*   line 393 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\PLD\pld_path.c lines 376–379 */
/* addr: 0x0012f210  size: 84 bytes */
void MNC_fn_pcGetCurrentDirectory(void)
{
    /* line map: */
    /*   line 376 @ +0x000 */
    /*   line 379 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\PLD\pld_path.c lines 313–314 */
/* addr: 0x0012f270  size: 52 bytes */
/*type_0x00*/ int PLD_szLanguageName(char* szName)
{
    /* line map: */
    /*   line 313 @ +0x000 */
    /*   line 313 @ +0x000 */
    /*   line 314 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\PLD\pld_path.c lines 307–308 */
/* addr: 0x0012f2b0  size: 56 bytes */
void PLD_szKeyFramesName(char* szName)
{
    /* line map: */
    /*   line 307 @ +0x000 */
    /*   line 307 @ +0x000 */
    /*   line 308 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\PLD\pld_path.c lines 301–302 */
/* addr: 0x0012f2f0  size: 56 bytes */
void PLD_szLvlKeyFramesName(char* szName)
{
    /* line map: */
    /*   line 301 @ +0x000 */
    /*   line 301 @ +0x000 */
    /*   line 302 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* addr: 0x0012f330  size: 20 bytes */
void PLD_szFixKeyFramesName(void)
{
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\PLD\pld_path.c lines 288–290 */
/* addr: 0x0012f350  size: 52 bytes */
void PLD_szAnimationName(char* szName)
{
    /* line map: */
    /*   line 288 @ +0x000 */
    /*   line 288 @ +0x000 */
    /*   line 290 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\PLD\pld_path.c lines 281–283 */
/* addr: 0x0012f390  size: 56 bytes */
void PLD_szVertexBufferName(char* szName)
{
    /* line map: */
    /*   line 281 @ +0x000 */
    /*   line 281 @ +0x000 */
    /*   line 283 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\PLD\pld_path.c lines 274–276 */
/* addr: 0x0012f3d0  size: 52 bytes */
void PLD_szTransitionName(char* szName)
{
    /* line map: */
    /*   line 274 @ +0x000 */
    /*   line 274 @ +0x000 */
    /*   line 276 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\PLD\pld_path.c lines 267–269 */
/* addr: 0x0012f410  size: 56 bytes */
void PLD_szLevelName(char* szName)
{
    /* line map: */
    /*   line 267 @ +0x000 */
    /*   line 267 @ +0x000 */
    /*   line 269 @ +0x000 */
    /* TODO: decompile from asm/... */
}
