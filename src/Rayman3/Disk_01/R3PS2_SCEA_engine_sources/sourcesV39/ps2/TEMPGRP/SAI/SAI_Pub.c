/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\SAI\SAI_Pub.c */
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

/* aggregate */ int SAI_g_stInternalStructure;

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\SAI\SAI_Pub.c lines 86–109 */
/* addr: 0x00319870  size: 276 bytes */
unsigned short SAI_fn_eVerifyFlags(unsigned short eFlags)
{
    /* line map: */
    /*   line 86 @ +0x000 */
    /*   line 92 @ +0x000 */
    /*   line 97 @ +0x000 */
    /*   line 101 @ +0x000 */
    /*   line 105 @ +0x000 */
    /*   line 109 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* addr: 0x00319990  size: 12 bytes */
unsigned char SAI_fn_bInitAllWhen(unsigned short _eUserFlags)
{
    /* TODO: decompile from asm/... */
}

/* addr: 0x003199a0  size: 28 bytes */
unsigned char SAI_fn_bInsertArrayInTable(void* param0, unsigned int _ulSize, unsigned short _eFlags)
{
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\SAI\SAI_Pub.c lines 104–134 */
/* addr: 0x003199c0  size: 216 bytes */
void SAI_fn_p_vGetTableValuePointerOf(void* _p_vValue, unsigned short _eFlags, /* function pointer */ int hListEntry)
{
    unsigned short eIntarnalFlags;
    void* p_vReturn;
    /* line map: */
    /*   line 104 @ +0x000 */
    /*   line 104 @ +0x000 */
    /*   line 107 @ +0x000 */
    /*   line 115 @ +0x000 */
    /*   line 121 @ +0x000 */
    /*   line 126 @ +0x000 */
    /*   line 134 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* addr: 0x00319aa0  size: 20 bytes */
unsigned char SAI_fn_bRemoveValueFromTable(void* _p_vValue, unsigned short _eFlags)
{
    /* TODO: decompile from asm/... */
}

/* addr: 0x00319ac0  size: 28 bytes */
unsigned char SAI_fn_bInsertMTHVectorInTable(void* _p_vValue, unsigned short _eFlags)
{
    /* TODO: decompile from asm/... */
}

/* addr: 0x00319ae0  size: 28 bytes */
unsigned char SAI_fn_bInsertMTHRealInTable(void* _p_vValue, unsigned short _eFlags)
{
    /* TODO: decompile from asm/... */
}

/* addr: 0x00319b00  size: 28 bytes */
unsigned char SAI_fn_bInsertPointerInTable(void* _p_vValue, unsigned short _eFlags)
{
    /* TODO: decompile from asm/... */
}

/* addr: 0x00319b20  size: 28 bytes */
unsigned char SAI_fn_bInsertLongInTable(void* _p_vValue, unsigned short _eFlags)
{
    /* TODO: decompile from asm/... */
}

/* addr: 0x00319b40  size: 28 bytes */
unsigned char SAI_fn_bInsertCharInTable(void* _p_vValue, unsigned short _eFlags)
{
    /* TODO: decompile from asm/... */
}
