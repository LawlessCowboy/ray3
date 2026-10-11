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

tdstDataPath_* fn_szGetGameDataPath(void)
{
    return &g_stDataPath;
}

void fn_vSetGameDataPath(char* _p_szPath)
{
    strcpy(g_stDataPath.szGameData, _p_szPath);
    strupr(g_stDataPath.szGameData);
}
