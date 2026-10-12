/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\DPT\DPT.c */
/* Language: C */
/* Compiler: MW MIPS C Compiler */

#include <stddef.h>
#include "r3/ENG.h"

/* Recovered aggregate layouts from MWCC debug type records. */

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
