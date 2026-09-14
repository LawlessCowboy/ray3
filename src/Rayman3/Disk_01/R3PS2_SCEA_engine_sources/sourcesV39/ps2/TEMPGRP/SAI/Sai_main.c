/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\SAI\Sai_main.c */
/* Language: C */
/* Compiler: MW MIPS C Compiler */

#include <stddef.h>

/* Recovered aggregate layouts from MWCC debug type records. */
typedef struct tdstPointerData_ tdstPointerData_;
typedef struct tdstArrayData_ tdstArrayData_;
typedef struct tdstBooleanData_ tdstBooleanData_;
typedef union SAI_tduData_ SAI_tduData_;
typedef struct SAI_tdstListEntry_ SAI_tdstListEntry_;
typedef struct SAI_tdstInternalStructure_ SAI_tdstInternalStructure_;
typedef struct RND_tdstRandom_ RND_tdstRandom_;

/* Random module state is defined by RND_Main.c and shared by this init TU. */
extern unsigned char g_ucRNDModuleId;
extern RND_tdstRandom_ RND_g_stRandomStructure;

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

struct SAI_tdstListEntry_ {
    SAI_tdstListEntry_* p_stNextEntry; /* +0x0 */
    int p_vDataPointer; /* +0x4 */
    SAI_tduData_ uData; /* +0x8 */
    unsigned short eFlags; /* +0x10 */
    unsigned char ucMemoryLevel; /* +0x12 */
    unsigned char ucDummy; /* +0x13 */
};

struct SAI_tdstInternalStructure_ {
    SAI_tdstListEntry_* p_stFirstEntry; /* +0x0 */
    SAI_tdstListEntry_* p_stLastEntry; /* +0x4 */
};

struct RND_tdstRandom_ {
    unsigned int ulSizeOfTable;
    unsigned int a_ulIndex[50];
    unsigned int hLastUsedIndex;
    unsigned int ulMaxValueInTable;
    float xInverseMaxValueInTable;
    int p_ulTable;
};

unsigned char g_ucSAIModuleId;
SAI_tdstInternalStructure_ SAI_g_stInternalStructure;

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\SAI\Sai_main.c lines 60–69 */
/* addr: 0x003191b0  size: 56 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 60
 *   +0x0004 -> line 61
 *   +0x0008 -> line 60
 *   +0x000c -> line 61
 *   +0x0024 -> line 68
 *   +0x002c -> line 69
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void RND_fn_vFirstInitRandom(void)
{
    if (g_ucRNDModuleId == 255)
        g_ucRNDModuleId = Erm_fn_ucInitErrMsg(g_ucRNDModuleId);
    RND_g_stRandomStructure.hLastUsedIndex = 0;
}
