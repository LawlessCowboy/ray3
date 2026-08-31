/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\SAI\Sai_main.c */
/* Language: C */
/* Compiler: MW MIPS C Compiler */

#include <stddef.h>

/* Recovered aggregate layouts from MWCC debug type records. */
typedef struct tdstPointerData_ tdstPointerData_;
typedef struct tdstArrayData_ tdstArrayData_;
typedef struct tdstBooleanData_ tdstBooleanData_;
typedef union SAI_tduData_ SAI_tduData_;

struct tdstPointerData_ {
    int p_vPointer; /* +0x0 */
    unsigned short uwBlocAndModuleID; /* +0x4 */
};

struct tdstArrayData_ {
    int p_ucPointer; /* +0x0 */
    unsigned int ulArraySize; /* +0x4 */
};

struct tdstBooleanData_ {
    unsigned char ucBitPosition; /* +0x0 */
    unsigned char ucCharData; /* +0x1 */
};

union SAI_tduData_ {
    unsigned char ucCharData; /* +0x0 */
    unsigned short uwShortData; /* +0x0 */
    unsigned int ulLongData; /* +0x0 */
    long i64Long64Data; /* +0x0 */
    tdstPointerData_ stPointerData; /* +0x0 */
    tdstArrayData_ stArrayData; /* +0x0 */
    tdstBooleanData_ stBooleanData; /* +0x0 */
};

unsigned char g_ucSAIModuleId;
/* aggregate */ int SAI_g_stInternalStructure;

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\SAI\Sai_main.c lines 61–69 */
/* addr: 0x003191b0  size: 56 bytes */
void RND_fn_vFirstInitRandom(void)
{
    /* line map: */
    /*   line 61 @ +0x000 */
    /*   line 61 @ +0x000 */
    /*   line 69 @ +0x000 */
    /* TODO: decompile from asm/... */
}
