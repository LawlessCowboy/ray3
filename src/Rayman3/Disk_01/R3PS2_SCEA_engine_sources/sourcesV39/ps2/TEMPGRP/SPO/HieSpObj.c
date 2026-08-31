/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\SPO\HieSpObj.c */
/* Language: C */
/* Compiler: MW MIPS C Compiler */

#include <stddef.h>

/* Recovered aggregate layouts from MWCC debug type records. */
typedef struct GEO_tdstEdge_ GEO_tdstEdge_;

struct GEO_tdstEdge_ {
    short xPoints[2]; /* +0x0 */
    /* array */ int st_VectorPoints[2]; /* +0x4 */
};

unsigned char g_ucContext;
unsigned int PS2_MatStackIndex;
/* array */ int PS2_MatStack[51];
int g_pstMatrix;
unsigned char gd_ucContextOfSPOSave[32];
int HIE_gs_lCurrentFrame;
/* aggregate */ int Global_tempCamStackMatrix;
int HIE_g_hCurrentMatrix;
/* array */ int HIE_g_a_stCameraMatrixStack[51];
int g_p_stCurrentMatrix;
/* aggregate */ int HIE_g_a_hMatrixStack;
int HIE_g_lNbMatrixInStack;
short g_xFixIndexSave;
short g_xFixIndex;
/* aggregate */ int gd_hFixSPO;
/* aggregate */ int gd_hFixSPOSave;

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\SPO\HieSpObj.c lines 675–907 */
/* addr: 0x00320e90  size: 1580 bytes */
short fn_xIntersectSegmentWithRepositioningSuperObject(/* function pointer */ int p_stVertexA, /* function pointer */ int p_stVectAB, /* function pointer */ int _hSprObj, /* function pointer */ int p_stPickInfo, short* p_xNbPickInfo, /* function pointer */ int hCollSet, /* function pointer */ int hCollSet, /* function pointer */ int p_stMaxPoint, /* function pointer */ int p_stMinPoint, /* function pointer */ int hChild, /* function pointer */ int hSentObject, /* function pointer */ int hParallelBox, /* function pointer */ int hBoundingSphere)
{
    unsigned int ulSpoFlags;
    unsigned char bIntersect;
    /* aggregate */ int stPickedObject;
    /* aggregate */ int stVectAB;
    /* aggregate */ int stVertexALocal;
    /* aggregate */ int stInvMatrix;
    int lType;
    /* aggregate */ int stMaxPoint;
    /* aggregate */ int stMinPoint;
    unsigned char bBoxBoundingVolume;
    /* line map: */
    /*   line 675 @ +0x000 */
    /*   line 675 @ +0x000 */
    /*   line 679 @ +0x000 */
    /*   line 687 @ +0x000 */
    /*   line 687 @ +0x000 */
    /*   line 690 @ +0x000 */
    /*   line 696 @ +0x000 */
    /*   line 700 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* addr: 0x003214c0  size: 8 bytes */
void HIE_fn_pGetCurrentInCamCoordsMatrix(void)
{
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\SPO\HieSpObj.c lines 689–723 */
/* addr: 0x003214d0  size: 148 bytes */
void HIE_fn_pGetCurrentInCamCoordsMatrixFastPS2(void)
{
    /* line map: */
    /*   line 689 @ +0x000 */
    /*   line 691 @ +0x000 */
    /*   line 693 @ +0x000 */
    /*   line 695 @ +0x000 */
    /*   line 698 @ +0x000 */
    /*   line 700 @ +0x000 */
    /*   line 703 @ +0x000 */
    /*   line 706 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* addr: 0x00321570  size: 8 bytes */
void HIE_fn_vStartPS2MatStack(void)
{
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\SPO\HieSpObj.c lines 657–664 */
/* addr: 0x00321580  size: 288 bytes */
void HIE_fn_vInitPS2MatStack(unsigned int i)
{
    /* line map: */
    /*   line 657 @ +0x000 */
    /*   line 657 @ +0x000 */
    /*   line 657 @ +0x000 */
    /*   line 658 @ +0x000 */
    /*   line 659 @ +0x000 */
    /*   line 661 @ +0x000 */
    /*   line 661 @ +0x000 */
    /*   line 661 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\SPO\HieSpObj.c lines 508–511 */
/* addr: 0x00321760  size: 256 bytes */
void HIE_fn_vInvalidateHierarchy(/* function pointer */ int _hSprObj, /* function pointer */ int hChild)
{
    /* line map: */
    /*   line 508 @ +0x000 */
    /*   line 508 @ +0x000 */
    /*   line 511 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\SPO\HieSpObj.c lines 495–501 */
/* addr: 0x00321860  size: 800 bytes */
void HIE_fn_vRefreshHierarchy(/* function pointer */ int _hSprObj, /* function pointer */ int hChild)
{
    /* line map: */
    /*   line 495 @ +0x000 */
    /*   line 498 @ +0x000 */
    /*   line 501 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\SPO\HieSpObj.c lines 473–483 */
/* addr: 0x00321b80  size: 584 bytes */
void HIE_fn_vChangeFather(/* function pointer */ int _hSprObj, /* function pointer */ int _hNewFather, unsigned char _bAtHead)
{
    /* line map: */
    /*   line 473 @ +0x000 */
    /*   line 476 @ +0x000 */
    /*   line 480 @ +0x000 */
    /*   line 483 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\SPO\HieSpObj.c lines 466–468 */
/* addr: 0x00321dd0  size: 64 bytes */
void HIE_fn_vComputeNewRelativeMatrix(/* function pointer */ int _hSprObj)
{
    /* aggregate */ int stLocalMatrix;
    /* line map: */
    /*   line 466 @ +0x000 */
    /*   line 468 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\SPO\HieSpObj.c lines 424–437 */
/* addr: 0x00321e10  size: 284 bytes */
void HIE_fn_vPushMatrix(/* function pointer */ int _hSprObj)
{
    /* line map: */
    /*   line 424 @ +0x000 */
    /*   line 427 @ +0x000 */
    /*   line 434 @ +0x000 */
    /*   line 437 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\SPO\HieSpObj.c lines 417–420 */
/* addr: 0x00321f30  size: 32 bytes */
void HIE_fn_vInitGlobalMatrixFrameCounter(int lValue)
{
    /* line map: */
    /*   line 417 @ +0x000 */
    /*   line 420 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\SPO\HieSpObj.c lines 398–406 */
/* addr: 0x00321f50  size: 56 bytes */
void HIE_fn_vInvalidateOneGlobalMatrix(/* function pointer */ int _hSprObj)
{
    /* line map: */
    /*   line 398 @ +0x000 */
    /*   line 401 @ +0x000 */
    /*   line 406 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\SPO\HieSpObj.c lines 387–387 */
/* addr: 0x00321f90  size: 40 bytes */
void HIE_fn_vInvalidateAllGlobalMatrices(void)
{
    /* line map: */
    /*   line 387 @ +0x000 */
    /*   line 387 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\SPO\HieSpObj.c lines 382–382 */
/* addr: 0x00321fc0  size: 60 bytes */
void HIE_fn_hGetChildNumber(/* function pointer */ int _hParent, int _lNumber, /* function pointer */ int hChild)
{
    short i;
    /* line map: */
    /*   line 382 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\SPO\HieSpObj.c lines 365–369 */
/* addr: 0x00322000  size: 196 bytes */
void HIE_fn_vUpdateGlobalMatrix(/* function pointer */ int hSO)
{
    /* line map: */
    /*   line 365 @ +0x000 */
    /*   line 365 @ +0x000 */
    /*   line 369 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\SPO\HieSpObj.c lines 351–359 */
/* addr: 0x003220d0  size: 204 bytes */
int HIE_fn_vRecUpdateGlobalMatrix(/* function pointer */ int hSO)
{
    /* line map: */
    /*   line 351 @ +0x000 */
    /*   line 354 @ +0x000 */
    /*   line 359 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\SPO\HieSpObj.c lines 343–343 */
/* addr: 0x003221a0  size: 28 bytes */
void HIE_fn_hForceGetSuperObjectPrevBrother(/* function pointer */ int _hSprObj)
{
    /* line map: */
    /*   line 343 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\SPO\HieSpObj.c lines 335–335 */
/* addr: 0x003221c0  size: 28 bytes */
void HIE_fn_hForceGetSuperObjectNextBrother(/* function pointer */ int _hSprObj)
{
    /* line map: */
    /*   line 335 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\SPO\HieSpObj.c lines 278–324 */
/* addr: 0x003221e0  size: 328 bytes */
void HIE_fn_p_stCreateSuperObjectTab(int lSize, int lIndex, /* function pointer */ int hNewSuperObject, /* function pointer */ int hNewSuperObjectTab)
{
    /* line map: */
    /*   line 278 @ +0x000 */
    /*   line 278 @ +0x000 */
    /*   line 281 @ +0x000 */
    /*   line 281 @ +0x000 */
    /*   line 281 @ +0x000 */
    /*   line 283 @ +0x000 */
    /*   line 286 @ +0x000 */
    /*   line 291 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\SPO\HieSpObj.c lines 202–202 */
/* addr: 0x00322330  size: 136 bytes */
void HIE_fn_vIsolate(/* function pointer */ int _hSprObj)
{
    /* line map: */
    /*   line 202 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\SPO\HieSpObj.c lines 154–183 */
/* addr: 0x003223c0  size: 716 bytes */
void HIE_fn_SO_SwitchSuperImposedTab(int lParam)
{
    int i;
    /* line map: */
    /*   line 154 @ +0x000 */
    /*   line 159 @ +0x000 */
    /*   line 162 @ +0x000 */
    /*   line 162 @ +0x000 */
    /*   line 162 @ +0x000 */
    /*   line 162 @ +0x000 */
    /*   line 162 @ +0x000 */
    /*   line 162 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\SPO\HieSpObj.c lines 143–143 */
/* addr: 0x00322690  size: 24 bytes */
void HIE_fn_SO_UnsetSuperImposedClipping(/* function pointer */ int _hSO)
{
    /* line map: */
    /*   line 143 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\SPO\HieSpObj.c lines 131–136 */
/* addr: 0x003226b0  size: 72 bytes */
void HIE_fn_SO_SetSuperImposedClipping(/* function pointer */ int _hSO, int _lTop, int _lLeft, int _lBottom, int _lRight)
{
    /* line map: */
    /*   line 131 @ +0x000 */
    /*   line 131 @ +0x000 */
    /*   line 136 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\SPO\HieSpObj.c lines 113–118 */
/* addr: 0x00322700  size: 56 bytes */
void HIE_fn_SO_vSetOutLineMode(/* function pointer */ int _hSO, unsigned char bMode, unsigned int ulColor)
{
    /* line map: */
    /*   line 113 @ +0x000 */
    /*   line 118 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\SPO\HieSpObj.c lines 88–107 */
/* addr: 0x00322740  size: 184 bytes */
void HIE_fn_SO_vClearSuperimposedFlag(/* function pointer */ int _hSO)
{
    short xIndex;
    /* line map: */
    /*   line 88 @ +0x000 */
    /*   line 95 @ +0x000 */
    /*   line 100 @ +0x000 */
    /*   line 102 @ +0x000 */
    /*   line 104 @ +0x000 */
    /*   line 107 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\SPO\HieSpObj.c lines 67–77 */
/* addr: 0x00322800  size: 76 bytes */
void HIE_fn_SO_vSetSuperimposedFlag(/* function pointer */ int _hSO)
{
    /* line map: */
    /*   line 67 @ +0x000 */
    /*   line 73 @ +0x000 */
    /*   line 77 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\SPO\HieSpObj.c lines 58–58 */
/* addr: 0x00322850  size: 56 bytes */
void HIE_fn_hGetElementFormFixViewport(short xIndex)
{
    /* line map: */
    /*   line 58 @ +0x000 */
    /* TODO: decompile from asm/... */
}
