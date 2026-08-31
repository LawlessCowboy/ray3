/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\mat\matsprot.c */
/* Language: C */
/* Compiler: MW MIPS C Compiler */

#include <stddef.h>

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\mat\matsprot.c lines 549–589 */
/* addr: 0x002f8130  size: 1096 bytes */
void ISI_hComputeBlendRLI(void* hRLI1, void* hRLI2, short xNumISILOD, float xPercent, ISI_tdstColor_* p_stTabCol2, ISI_tdstColor_* p_stTabCol1, ISI_tdstColor_* p_stBlendTabCol, ISI_tdstISI_* hISI2, ISI_tdstISI_* hISI1, ISI_tdstISI_* hBlendISI)
{
    float xPercentComplement;
    float* p_stTabU2;
    float* param0;
    float* p_stBlendTabU;
    short xNbVertex;
    short xI;
    void* hReturnRad;
    /* line map: */
    /*   line 550 @ +0x000 */
    /*   line 552 @ +0x000 */
    /*   line 549 @ +0x000 */
    /*   line 555 @ +0x000 */
    /*   line 555 @ +0x000 */
    /*   line 555 @ +0x000 */
    /*   line 561 @ +0x000 */
    /*   line 562 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\mat\matsprot.c lines 1293–1319 */
/* addr: 0x002f8580  size: 300 bytes */
unsigned char MAT_fn_bAreRotationEquivalent(/* function pointer */ int param0, /* function pointer */ int _hTransform2, /* function pointer */ int hSource2, /* function pointer */ int hSource1)
{
    unsigned char bUseEps;
    /* aggregate */ int stTemp2;
    /* aggregate */ int stTemp1;
    /* line map: */
    /*   line 1293 @ +0x000 */
    /*   line 1295 @ +0x000 */
    /*   line 1297 @ +0x000 */
    /*   line 1306 @ +0x000 */
    /*   line 1308 @ +0x000 */
    /*   line 1316 @ +0x000 */
    /*   line 1319 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\mat\matsprot.c lines 1143–1203 */
/* addr: 0x002f86b0  size: 676 bytes */
void MAT_fn_vSetRotationVectors(/* function pointer */ int _hTransform, /* function pointer */ int _p_stVecI, /* function pointer */ int _p_stVecJ, /* function pointer */ int _p_stVecK, /* function pointer */ int p_stMatrix, /* function pointer */ int p_stMatrix, /* function pointer */ int p_stScaleVec, /* function pointer */ int p_stMatrix, /* function pointer */ int p_stMatrix)
{
    float xZoom;
    /* line map: */
    /*   line 1143 @ +0x000 */
    /*   line 1149 @ +0x000 */
    /*   line 1152 @ +0x000 */
    /*   line 1156 @ +0x000 */
    /*   line 1164 @ +0x000 */
    /*   line 1168 @ +0x000 */
    /*   line 1171 @ +0x000 */
    /*   line 1181 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\mat\matsprot.c lines 1042–1124 */
/* addr: 0x002f8960  size: 792 bytes */
void MAT_fn_vSetRotationMatrix(/* function pointer */ int _hTransform, /* function pointer */ int _p_stRotationMatrix, /* function pointer */ int p_stMatrix, /* function pointer */ int p_stMatrix, /* function pointer */ int p_stScaleVec, /* function pointer */ int p_stMatrix, /* function pointer */ int p_stMatrix)
{
    float xQW;
    float xQZ;
    float xQY;
    float xQX;
    /* aggregate */ int TmpMat;
    float xZoom;
    /* line map: */
    /*   line 1042 @ +0x000 */
    /*   line 1051 @ +0x000 */
    /*   line 1053 @ +0x000 */
    /*   line 1056 @ +0x000 */
    /*   line 1062 @ +0x000 */
    /*   line 1069 @ +0x000 */
    /*   line 1071 @ +0x000 */
    /*   line 1076 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\mat\matsprot.c lines 865–886 */
/* addr: 0x002f8d90  size: 188 bytes */
void MAT_fn_vGetRotationVectorBaseK(/* function pointer */ int _hTransform, /* function pointer */ int _p_stVecK)
{
    /* line map: */
    /*   line 865 @ +0x000 */
    /*   line 869 @ +0x000 */
    /*   line 878 @ +0x000 */
    /*   line 886 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\mat\matsprot.c lines 796–837 */
/* addr: 0x002f8e50  size: 252 bytes */
void MAT_fn_vGetRotationVectorBaseJ(/* function pointer */ int _hTransform, /* function pointer */ int _p_stVecJ)
{
    /* aggregate */ int TmpMat;
    /* line map: */
    /*   line 796 @ +0x000 */
    /*   line 804 @ +0x000 */
    /*   line 808 @ +0x000 */
    /*   line 817 @ +0x000 */
    /*   line 837 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\mat\matsprot.c lines 753–774 */
/* addr: 0x002f8f50  size: 188 bytes */
void MAT_fn_vGetRotationVectorBaseI(/* function pointer */ int _hTransform, /* function pointer */ int _p_stVecI)
{
    /* line map: */
    /*   line 753 @ +0x000 */
    /*   line 757 @ +0x000 */
    /*   line 766 @ +0x000 */
    /*   line 774 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\mat\matsprot.c lines 679–733 */
/* addr: 0x002f9010  size: 520 bytes */
void MAT_fn_vGetRotationVectors(/* function pointer */ int _hTransform, /* function pointer */ int _p_stVecI, /* function pointer */ int _p_stVecJ, /* function pointer */ int _p_stVecK, /* function pointer */ int p_stMatrix, /* function pointer */ int p_stScaleVec)
{
    /* aggregate */ int TmpMat;
    /* line map: */
    /*   line 679 @ +0x000 */
    /*   line 687 @ +0x000 */
    /*   line 689 @ +0x000 */
    /*   line 693 @ +0x000 */
    /*   line 695 @ +0x000 */
    /*   line 705 @ +0x000 */
    /*   line 708 @ +0x000 */
    /*   line 721 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\mat\matsprot.c lines 616–653 */
/* addr: 0x002f9220  size: 456 bytes */
void MAT_fn_vGetRotationMatrix(/* function pointer */ int _hTransform, /* function pointer */ int _p_stRotationMatrix, /* function pointer */ int p_stMatrix, /* function pointer */ int p_stScaleVec)
{
    /* aggregate */ int TmpMat;
    /* line map: */
    /*   line 616 @ +0x000 */
    /*   line 624 @ +0x000 */
    /*   line 628 @ +0x000 */
    /*   line 638 @ +0x000 */
    /*   line 641 @ +0x000 */
    /*   line 653 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\mat\matsprot.c lines 536–557 */
/* addr: 0x002f93f0  size: 156 bytes */
void MAT_fn_vSetZRotation(/* function pointer */ int _hTransform, float _xXAngle)
{
    float xCos;
    float xSin;
    /* line map: */
    /*   line 536 @ +0x000 */
    /*   line 539 @ +0x000 */
    /*   line 539 @ +0x000 */
    /*   line 541 @ +0x000 */
    /*   line 549 @ +0x000 */
    /*   line 557 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\mat\matsprot.c lines 470–491 */
/* addr: 0x002f9490  size: 156 bytes */
void MAT_fn_vSetXRotation(/* function pointer */ int _hTransform, float _xXAngle)
{
    float xCos;
    float xSin;
    /* line map: */
    /*   line 470 @ +0x000 */
    /*   line 473 @ +0x000 */
    /*   line 473 @ +0x000 */
    /*   line 475 @ +0x000 */
    /*   line 483 @ +0x000 */
    /*   line 491 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\mat\matsprot.c lines 355–435 */
/* addr: 0x002f9530  size: 836 bytes */
void MAT_fn_vRotateAroundAxisNoTranslation(/* function pointer */ int _hTransform, /* function pointer */ int _p_stAxisVector, /* function pointer */ int p_stScale)
{
    /* aggregate */ int stScale;
    float xZoomFactor;
    /* aggregate */ int stSaveTranslation;
    /* aggregate */ int stMatrix;
    /* aggregate */ int stTranslation;
    float xSinAngle;
    float xCosAngle;
    /* line map: */
    /*   line 355 @ +0x000 */
    /*   line 355 @ +0x000 */
    /*   line 355 @ +0x000 */
    /*   line 357 @ +0x000 */
    /*   line 361 @ +0x000 */
    /*   line 361 @ +0x000 */
    /*   line 361 @ +0x000 */
    /*   line 370 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\mat\matsprot.c lines 233–334 */
/* addr: 0x002f9880  size: 792 bytes */
void MAT_fn_vRotateAroundAxis(/* function pointer */ int _hTransform, /* function pointer */ int _p_stAxisVector, float _xAngle, /* function pointer */ int p_stScale)
{
    /* aggregate */ int stScale;
    float xZoomFactor;
    /* aggregate */ int stMatrix;
    float xSinAngle;
    float xCosAngle;
    /* line map: */
    /*   line 233 @ +0x000 */
    /*   line 233 @ +0x000 */
    /*   line 233 @ +0x000 */
    /*   line 235 @ +0x000 */
    /*   line 239 @ +0x000 */
    /*   line 239 @ +0x000 */
    /*   line 239 @ +0x000 */
    /*   line 244 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\mat\matsprot.c lines 139–204 */
/* addr: 0x002f9bd0  size: 496 bytes */
void MAT_fn_vInvertRotation(/* function pointer */ int _hDest, /* function pointer */ int _hSource, /* function pointer */ int p_stTranspMatrix, /* function pointer */ int p_stVec)
{
    /* line map: */
    /*   line 139 @ +0x000 */
    /*   line 143 @ +0x000 */
    /*   line 147 @ +0x000 */
    /*   line 152 @ +0x000 */
    /*   line 158 @ +0x000 */
    /*   line 158 @ +0x000 */
    /*   line 160 @ +0x000 */
    /*   line 168 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\mat\matsprot.c lines 29–128 */
/* addr: 0x002f9dc0  size: 1108 bytes */
void MAT_fn_vNormalize(/* function pointer */ int _hTransform, /* function pointer */ int p_stMatrix, /* function pointer */ int p_stMat)
{
    /* aggregate */ int TmpMat;
    /* line map: */
    /*   line 29 @ +0x000 */
    /*   line 40 @ +0x000 */
    /*   line 40 @ +0x000 */
    /*   line 42 @ +0x000 */
    /*   line 55 @ +0x000 */
    /*   line 55 @ +0x000 */
    /*   line 63 @ +0x000 */
    /*   line 68 @ +0x000 */
    /* TODO: decompile from asm/... */
}
