/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\SAI\SAI_Pub.c */
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

SAI_tdstInternalStructure_ SAI_g_stInternalStructure;

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\SAI\SAI_Pub.c lines 84–110 */
/* addr: 0x00319870  size: 276 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 84
 *   +0x0010 -> line 86
 *   +0x0014 -> line 88
 *   +0x0040 -> line 92
 *   +0x0070 -> line 95
 *   +0x0084 -> line 97
 *   +0x008c -> line 99
 *   +0x00a8 -> line 101
 *   +0x00b0 -> line 103
 *   +0x00cc -> line 105
 *   +0x00d8 -> line 106
 *   +0x00fc -> line 109
 *   +0x0100 -> line 110
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
unsigned short SAI_fn_eVerifyFlags(unsigned short eFlags)
{
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\SAI\SAI_Pub.c lines 143–143 */
/* addr: 0x00319990  size: 12 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0004 -> line 143
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
unsigned char SAI_fn_bInitAllWhen(unsigned short _eUserFlags)
{
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\SAI\SAI_Pub.c lines 138–138 */
/* addr: 0x003199a0  size: 28 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0008 -> line 138
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
unsigned char SAI_fn_bInsertArrayInTable(void* param0, unsigned int _ulSize, unsigned short _eFlags)
{
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\SAI\SAI_Pub.c lines 99–134 */
/* addr: 0x003199c0  size: 216 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 99
 *   +0x0014 -> line 104
 *   +0x0020 -> line 105
 *   +0x0024 -> line 104
 *   +0x0028 -> line 105
 *   +0x0038 -> line 107
 *   +0x0090 -> line 112
 *   +0x0098 -> line 115
 *   +0x00a0 -> line 118
 *   +0x00a8 -> line 121
 *   +0x00b0 -> line 124
 *   +0x00b8 -> line 126
 *   +0x00c0 -> line 133
 *   +0x00c4 -> line 134
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void SAI_fn_p_vGetTableValuePointerOf(void* _p_vValue, unsigned short _eFlags)
{
    unsigned short eIntarnalFlags;
    SAI_tdstListEntry_* hListEntry;
    void* p_vReturn;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\SAI\SAI_Pub.c lines 95–95 */
/* addr: 0x00319aa0  size: 20 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0008 -> line 95
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
unsigned char SAI_fn_bRemoveValueFromTable(void* _p_vValue, unsigned short _eFlags)
{
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\SAI\SAI_Pub.c lines 70–70 */
/* addr: 0x00319ac0  size: 28 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0008 -> line 70
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
unsigned char SAI_fn_bInsertMTHVectorInTable(void* _p_vValue, unsigned short _eFlags)
{
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\SAI\SAI_Pub.c lines 57–57 */
/* addr: 0x00319ae0  size: 28 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0008 -> line 57
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
unsigned char SAI_fn_bInsertMTHRealInTable(void* _p_vValue, unsigned short _eFlags)
{
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\SAI\SAI_Pub.c lines 51–51 */
/* addr: 0x00319b00  size: 28 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0008 -> line 51
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
unsigned char SAI_fn_bInsertPointerInTable(void* _p_vValue, unsigned short _eFlags)
{
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\SAI\SAI_Pub.c lines 36–36 */
/* addr: 0x00319b20  size: 28 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0008 -> line 36
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
unsigned char SAI_fn_bInsertLongInTable(void* _p_vValue, unsigned short _eFlags)
{
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\SAI\SAI_Pub.c lines 26–26 */
/* addr: 0x00319b40  size: 28 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0008 -> line 26
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
unsigned char SAI_fn_bInsertCharInTable(void* _p_vValue, unsigned short _eFlags)
{
    /* TODO: decompile from asm/... */
}
