/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\FIL\fil_pub.c */
/* Language: C */
/* Compiler: MW MIPS C Compiler */

#include <stddef.h>
extern int printf(const char *, ...);

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

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\FIL\fil_pub.c lines 48–51 */
/* addr: 0x00258450  size: 40 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0004 -> line 48
 *   +0x0008 -> line 49
 *   +0x000c -> line 48
 *   +0x0010 -> line 49
 *   +0x0018 -> line 51
 *   +0x001c -> line 50
 *   +0x0020 -> line 51
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
int Erm_fn_iMessageBox(char* _szText, char* _szTitle)
{
    printf("%s", _szTitle, _szText);
    return 0;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\FIL\fil_pub.c lines 116–116 */
/* addr: 0x00258480  size: 8 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 116
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
unsigned int FIL_fn_ulGetNumberOfFiles(FIL_tdstFileNameList_* hHandleToFileNameList)
{
    return hHandleToFileNameList->hFileNameListAnchor.lNumberOfElementsDyn;
}
