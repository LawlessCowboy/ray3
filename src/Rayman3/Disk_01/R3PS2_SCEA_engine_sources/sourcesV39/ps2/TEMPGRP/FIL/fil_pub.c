/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\FIL\fil_pub.c */
/* Language: C */
/* Compiler: MW MIPS C Compiler */

#include <stddef.h>

/* Recovered aggregate layouts from MWCC debug type records. */
typedef struct LST2_tdstAnchorToFIL_tdxHandleToFileNameListElementDyn LST2_tdstAnchorToFIL_tdxHandleToFileNameListElementDyn;
typedef struct FIL_tdstFileNameList_ FIL_tdstFileNameList_;
typedef struct FIL_tdstFileNameListElement_ FIL_tdstFileNameListElement_;
typedef struct FIL_tdstInternalGeneral_ FIL_tdstInternalGeneral_;

struct LST2_tdstAnchorToFIL_tdxHandleToFileNameListElementDyn {
    FIL_tdstFileNameListElement_* hFirstElementDyn; /* +0x0 */
    FIL_tdstFileNameListElement_* hLastElementDyn; /* +0x4 */
    int lNumberOfElementsDyn; /* +0x8 */
};

struct FIL_tdstFileNameList_ {
    LST2_tdstAnchorToFIL_tdxHandleToFileNameListElementDyn hFileNameListAnchor; /* +0x0 */
};

struct FIL_tdstFileNameListElement_ {
    FIL_tdstFileNameListElement_* hNextBrotherDyn; /* +0x0 */
    FIL_tdstFileNameListElement_* hPrevBrotherDyn; /* +0x4 */
    LST2_tdstAnchorToFIL_tdxHandleToFileNameListElementDyn* hFatherDyn; /* +0x8 */
    int szFileName; /* +0xc */
};

struct FIL_tdstInternalGeneral_ {
    unsigned char ucDisplayInformation; /* +0x0 */
};

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
