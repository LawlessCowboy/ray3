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

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\DPT\DPT.c lines 59–60 */
/* addr: 0x00258030  size: 12 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 59
 *   +0x0004 -> line 60
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
tdstDataPath_* fn_szGetGameDataPath(void)
{
    return &g_stDataPath;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\DPT\DPT.c lines 39–50 */
/* addr: 0x00258040  size: 48 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0004 -> line 39
 *   +0x0008 -> line 44
 *   +0x000c -> line 39
 *   +0x0010 -> line 44
 *   +0x0018 -> line 46
 *   +0x0024 -> line 50
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void fn_vSetGameDataPath(char* _p_szPath)
{
    /* TODO: decompile from asm/... */
}
