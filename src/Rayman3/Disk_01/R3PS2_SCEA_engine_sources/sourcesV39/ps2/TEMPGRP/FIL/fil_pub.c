/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\FIL\fil_pub.c */
/* Language: C */
/* Compiler: MW MIPS C Compiler */

#include <stddef.h>
#include "r3/FIL.h"

/* Recovered aggregate layouts from MWCC debug type records. */

unsigned char g_ucFILModuleId;
FIL_tdstInternalGeneral_ g_stInternalGeneral;

int Erm_fn_iMessageBox(char* _szText, char* _szTitle)
{
    printf("Erm_SCE_fn_iMessageBox(%s,%s)\n", _szTitle, _szText);
    return 0;
}

unsigned int FIL_fn_ulGetNumberOfFiles(FIL_tdstFileNameList_* hHandleToFileNameList)
{
    return hHandleToFileNameList->hFileNameListAnchor.lNumberOfElementsDyn;
}
