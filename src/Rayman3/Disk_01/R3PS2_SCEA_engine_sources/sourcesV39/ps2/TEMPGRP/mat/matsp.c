/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\mat\matsp.c */
/* Language: C */
/* Compiler: MW MIPS C Compiler */

#include <stddef.h>

unsigned char g_ucMATModuleId;
int MAT_g_hTransformationIdentity;

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\mat\matsp.c lines 35–60 */
/* addr: 0x002fa270  size: 416 bytes */
void MAT_fn_vInitTransformationWithNonDiagonalScale(/* function pointer */ int _hTransform, /* function pointer */ int _p_stScale, float* _a_xQuaternion, /* function pointer */ int p_stResult)
{
    /* aggregate */ int st4DScaleVec;
    /* aggregate */ int stTempMat;
    /* line map: */
    /*   line 35 @ +0x000 */
    /*   line 35 @ +0x000 */
    /*   line 35 @ +0x000 */
    /*   line 49 @ +0x000 */
    /*   line 49 @ +0x000 */
    /*   line 54 @ +0x000 */
    /*   line 60 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\mat\matsp.c lines 1743–1794 */
/* addr: 0x002fa460  size: 1124 bytes */
unsigned char MAT_fn_bAreEquivalentWithEps(/* function pointer */ int _hTransform1, /* function pointer */ int _hTransform2, float _xEps, /* function pointer */ int p_stTrans2, /* function pointer */ int p_stTrans1, /* function pointer */ int p_stScale2, /* function pointer */ int p_stScale1)
{
    unsigned char bEquivalent;
    /* line map: */
    /*   line 1743 @ +0x000 */
    /*   line 1749 @ +0x000 */
    /*   line 1754 @ +0x000 */
    /*   line 1755 @ +0x000 */
    /*   line 1762 @ +0x000 */
    /*   line 1768 @ +0x000 */
    /*   line 1769 @ +0x000 */
    /*   line 1775 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\mat\matsp.c lines 1685–1726 */
/* addr: 0x002fa8d0  size: 884 bytes */
unsigned char MAT_fn_bAreEquivalent(/* function pointer */ int _hTransform1, /* function pointer */ int _hTransform2)
{
    unsigned char bEquivalent;
    /* line map: */
    /*   line 1685 @ +0x000 */
    /*   line 1691 @ +0x000 */
    /*   line 1700 @ +0x000 */
    /*   line 1708 @ +0x000 */
    /*   line 1717 @ +0x000 */
    /*   line 1726 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\mat\matsp.c lines 1591–1649 */
/* addr: 0x002fac50  size: 476 bytes */
void MAT_fn_vInitTransformationAndType(/* function pointer */ int _hTransform, /* aggregate */ int _eType, /* function pointer */ int _p_stI, /* function pointer */ int _p_stJ, /* function pointer */ int _p_stK, /* function pointer */ int _p_stTranslation)
{
    /* line map: */
    /*   line 1591 @ +0x000 */
    /*   line 1595 @ +0x000 */
    /*   line 1600 @ +0x000 */
    /*   line 1603 @ +0x000 */
    /*   line 1609 @ +0x000 */
    /*   line 1613 @ +0x000 */
    /*   line 1617 @ +0x000 */
    /*   line 1623 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\mat\matsp.c lines 1335–1358 */
/* addr: 0x002fae30  size: 140 bytes */
void MAT_fn_vTranslate(/* function pointer */ int _hTransform, /* function pointer */ int _p_stTranslation)
{
    /* line map: */
    /*   line 1335 @ +0x000 */
    /*   line 1335 @ +0x000 */
    /*   line 1337 @ +0x000 */
    /*   line 1358 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\mat\matsp.c lines 1041–1322 */
/* addr: 0x002faec0  size: 2480 bytes */
void MAT_fn_vComposeWithoutTranslation(/* function pointer */ int _hDest, /* function pointer */ int _hA, /* function pointer */ int _hB, /* function pointer */ int hResult)
{
    unsigned char bTestScale;
    unsigned char bComposeMatrixes;
    /* aggregate */ int stTemp;
    unsigned int uiSimplification;
    unsigned int uiTotal;
    /* line map: */
    /*   line 1041 @ +0x000 */
    /*   line 1044 @ +0x000 */
    /*   line 1047 @ +0x000 */
    /*   line 1050 @ +0x000 */
    /*   line 1056 @ +0x000 */
    /*   line 1059 @ +0x000 */
    /*   line 1063 @ +0x000 */
    /*   line 1070 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\mat\matsp.c lines 718–1014 */
/* addr: 0x002fb870  size: 2000 bytes */
void MAT_fn_vCompose(/* function pointer */ int _hDest, /* function pointer */ int _hA, /* function pointer */ int _hB, /* function pointer */ int hResult)
{
    unsigned char bTestScale;
    unsigned char bComposeTranslations;
    unsigned char bComposeMatrixes;
    /* aggregate */ int stTemp;
    unsigned int uiSimplification;
    unsigned int uiTotal;
    /* line map: */
    /*   line 718 @ +0x000 */
    /*   line 721 @ +0x000 */
    /*   line 725 @ +0x000 */
    /*   line 731 @ +0x000 */
    /*   line 733 @ +0x000 */
    /*   line 745 @ +0x000 */
    /*   line 750 @ +0x000 */
    /*   line 758 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\mat\matsp.c lines 535–685 */
/* addr: 0x002fc070  size: 1848 bytes */
void MAT_fn_vFastInvert(/* function pointer */ int _hDest, /* function pointer */ int _hSource, /* function pointer */ int p_stVec, /* function pointer */ int p_stVec, /* function pointer */ int p_stVec, /* function pointer */ int p_stTranspMatrix, /* function pointer */ int p_stVec, /* function pointer */ int p_stTranspMatrix, /* function pointer */ int p_stScale, /* function pointer */ int p_stMatrixSource, /* function pointer */ int p_stMatrixDest)
{
    float xZoom;
    /* line map: */
    /*   line 535 @ +0x000 */
    /*   line 539 @ +0x000 */
    /*   line 543 @ +0x000 */
    /*   line 546 @ +0x000 */
    /*   line 546 @ +0x000 */
    /*   line 551 @ +0x000 */
    /*   line 558 @ +0x000 */
    /*   line 562 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\mat\matsp.c lines 304–343 */
/* addr: 0x002fcf30  size: 1084 bytes */
void MAT_fn_vRotateVector(/* function pointer */ int _p_stDest, /* function pointer */ int _hTransform, /* function pointer */ int _p_stSource)
{
    /* aggregate */ int TmpMat;
    /* aggregate */ int stTemp;
    /* line map: */
    /*   line 304 @ +0x000 */
    /*   line 311 @ +0x000 */
    /*   line 316 @ +0x000 */
    /*   line 325 @ +0x000 */
    /*   line 330 @ +0x000 */
    /*   line 343 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\mat\matsp.c lines 268–289 */
/* addr: 0x002fd370  size: 448 bytes */
void MAT_fn_vApplyOnVector(/* function pointer */ int _p_stDest, /* function pointer */ int _hTransform, /* function pointer */ int _p_stSource)
{
    /* line map: */
    /*   line 268 @ +0x000 */
    /*   line 270 @ +0x000 */
    /*   line 276 @ +0x000 */
    /*   line 289 @ +0x000 */
    /* TODO: decompile from asm/... */
}
