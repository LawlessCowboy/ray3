/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\SAI\SAI_Priv.c */
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

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\SAI\SAI_Priv.c lines 33–44 */
/* addr: 0x003191f0  size: 56 bytes */
/*type_0x00*/ int SAI_fn_vFirstInit(void)
{
    /* line map: */
    /*   line 33 @ +0x000 */
    /*   line 33 @ +0x000 */
    /*   line 44 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\SAI\SAI_Priv.c lines 357–367 */
/* addr: 0x00319230  size: 104 bytes */
unsigned char SAI_fn_bInitAllTableWhen(/* function pointer */ int p_stInternalStructure, unsigned short eUserFlags, /* function pointer */ int hListEntry)
{
    /* line map: */
    /*   line 357 @ +0x000 */
    /*   line 361 @ +0x000 */
    /*   line 363 @ +0x000 */
    /*   line 367 @ +0x000 */
    /*   line 367 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\SAI\SAI_Priv.c lines 311–353 */
/* addr: 0x003192a0  size: 268 bytes */
unsigned char SAI_fn_bRestoreAnElementFromList(/* function pointer */ int hListEntry)
{
    unsigned char bReturn;
    /* line map: */
    /*   line 311 @ +0x000 */
    /*   line 311 @ +0x000 */
    /*   line 315 @ +0x000 */
    /*   line 318 @ +0x000 */
    /*   line 321 @ +0x000 */
    /*   line 324 @ +0x000 */
    /*   line 327 @ +0x000 */
    /*   line 332 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\SAI\SAI_Priv.c lines 178–301 */
/* addr: 0x003193b0  size: 924 bytes */
unsigned char SAI_fn_bInsertAnElementInList(/* function pointer */ int p_stInternalStructure, void* p_stData, unsigned int ulSizeOfData, unsigned short eTypeOfData, unsigned short eUserFlags, /* function pointer */ int hListEntry)
{
    void* p_vBeginBloc;
    unsigned short uwBlocId;
    unsigned char bReturn;
    /* line map: */
    /*   line 178 @ +0x000 */
    /*   line 183 @ +0x000 */
    /*   line 186 @ +0x000 */
    /*   line 194 @ +0x000 */
    /*   line 196 @ +0x000 */
    /*   line 200 @ +0x000 */
    /*   line 205 @ +0x000 */
    /*   line 207 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\SAI\SAI_Priv.c lines 130–173 */
/* addr: 0x00319750  size: 208 bytes */
unsigned char SAI_fn_bFreeAnElementFromList(/* function pointer */ int p_stInternalStructure, void* p_stData, unsigned short eUserFlags, /* function pointer */ int p_stListEntry, /* function pointer */ int p_stPreviousListEntry)
{
    unsigned char bFound;
    /* line map: */
    /*   line 131 @ +0x000 */
    /*   line 130 @ +0x000 */
    /*   line 133 @ +0x000 */
    /*   line 137 @ +0x000 */
    /*   line 143 @ +0x000 */
    /*   line 145 @ +0x000 */
    /*   line 157 @ +0x000 */
    /*   line 161 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\SAI\SAI_Priv.c lines 116–125 */
/* addr: 0x00319820  size: 76 bytes */
void fn_hSearchAnElementInList(/* function pointer */ int p_stInternalStructure, void* p_vData, unsigned short eUserFlags, /* function pointer */ int hListEntry)
{
    /* line map: */
    /*   line 116 @ +0x000 */
    /*   line 119 @ +0x000 */
    /*   line 122 @ +0x000 */
    /*   line 125 @ +0x000 */
    /* TODO: decompile from asm/... */
}
