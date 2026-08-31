/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\COL\Inters.c */
/* Language: C */
/* Compiler: MW MIPS C Compiler */

#include <stddef.h>

/* array */ int COL_g_a6_stBoxSidesNormal[6];

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\COL\Inters.c lines 135–164 */
/* addr: 0x00252510  size: 208 bytes */
void COL_fn_vEnlargeSphereIfNecessary(/* function pointer */ int p_stGV)
{
    float xNewRadius;
    /* line map: */
    /*   line 135 @ +0x000 */
    /*   line 140 @ +0x000 */
    /*   line 147 @ +0x000 */
    /*   line 157 @ +0x000 */
    /*   line 150 @ +0x000 */
    /*   line 158 @ +0x000 */
    /*   line 150 @ +0x000 */
    /*   line 161 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\COL\Inters.c lines 2045–2061 */
/* addr: 0x002525e0  size: 312 bytes */
float INT_fn_xDistancePointToLine(/* function pointer */ int p_stPoint, /* function pointer */ int p_stVertexA, /* function pointer */ int p_stVectAB, float* p_xT, /* function pointer */ int p_stHit)
{
    /* line map: */
    /*   line 2045 @ +0x000 */
    /*   line 2045 @ +0x000 */
    /*   line 2045 @ +0x000 */
    /*   line 2051 @ +0x000 */
    /*   line 2056 @ +0x000 */
    /*   line 2061 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\COL\Inters.c lines 1848–1997 */
/* addr: 0x00252720  size: 1388 bytes */
unsigned char INT_fn_bIntersectSegmentWithCylinder(/* function pointer */ int p_stVertex1, /* function pointer */ int p_stVect12, /* function pointer */ int p_stVertexA, /* function pointer */ int p_stVectAB, float xCylinderRadius, float* p_xTSegment, /* function pointer */ int p_stHitSegment, /* function pointer */ int p_stHitLine)
{
    unsigned char bGreaterZero2;
    unsigned char bGreaterZero1;
    float xTmp;
    float xT2;
    float xT1;
    float xB;
    float xM;
    float xTLine;
    /* line map: */
    /*   line 1852 @ +0x000 */
    /*   line 1852 @ +0x000 */
    /*   line 1848 @ +0x000 */
    /*   line 1849 @ +0x000 */
    /*   line 1849 @ +0x000 */
    /*   line 1853 @ +0x000 */
    /*   line 1853 @ +0x000 */
    /*   line 1861 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\COL\Inters.c lines 1703–1800 */
/* addr: 0x00252c90  size: 712 bytes */
unsigned char INT_fn_bDetectIntersectSegmentWithSphere(/* function pointer */ int p_stVertexA, /* function pointer */ int p_stVectAB, /* function pointer */ int p_stSphereCenter, float xSphereRadius)
{
    float xSpecialRadius;
    float xTemp;
    float xdist;
    /* line map: */
    /*   line 1703 @ +0x000 */
    /*   line 1703 @ +0x000 */
    /*   line 1703 @ +0x000 */
    /*   line 1703 @ +0x000 */
    /*   line 1709 @ +0x000 */
    /*   line 1713 @ +0x000 */
    /*   line 1716 @ +0x000 */
    /*   line 1719 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\COL\Inters.c lines 1628–1674 */
/* addr: 0x00252f60  size: 724 bytes */
unsigned char INT_fn_bIntersectSegmentWithSphere(/* function pointer */ int p_stVertex1, /* function pointer */ int p_stVect12, /* function pointer */ int p_stSphereCenter, float xSphereRadius, float* p_xT, /* function pointer */ int p_stHit, /* function pointer */ int p_stNormal)
{
    float xInvR;
    float xT2;
    float xT1;
    float xB;
    /* line map: */
    /*   line 1628 @ +0x000 */
    /*   line 1633 @ +0x000 */
    /*   line 1633 @ +0x000 */
    /*   line 1633 @ +0x000 */
    /*   line 1636 @ +0x000 */
    /*   line 1638 @ +0x000 */
    /*   line 1638 @ +0x000 */
    /*   line 1644 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\COL\Inters.c lines 1538–1586 */
/* addr: 0x00253240  size: 428 bytes */
unsigned char INT_fn_bFastRejectIntersectSegmentWithSphere(/* function pointer */ int p_stVertex1, /* function pointer */ int p_stVect12, /* function pointer */ int p_stSphereCenter, float xSphereRadius)
{
    /* line map: */
    /*   line 1538 @ +0x000 */
    /*   line 1541 @ +0x000 */
    /*   line 1538 @ +0x000 */
    /*   line 1543 @ +0x000 */
    /*   line 1545 @ +0x000 */
    /*   line 1550 @ +0x000 */
    /*   line 1552 @ +0x000 */
    /*   line 1556 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\COL\Inters.c lines 1515–1515 */
/* addr: 0x002533f0  size: 80 bytes */
unsigned char INT_fn_bGetInclusionPointInSphere(/* function pointer */ int p_stPoint, /* function pointer */ int p_stSphereCenter, float xSphereRadius)
{
    /* line map: */
    /*   line 1515 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\COL\Inters.c lines 1289–1315 */
/* addr: 0x00253440  size: 352 bytes */
unsigned char INT_fn_bDetectIntersectSegmentWithTriangle(/* function pointer */ int p_stVertexA, /* function pointer */ int p_stVectAB, /* function pointer */ int p_stVertex1, /* function pointer */ int p_stVertex2, /* function pointer */ int p_stVertex3, /* function pointer */ int p_stNormal, float xDPlan)
{
    /* aggregate */ int stHit;
    /* line map: */
    /*   line 1289 @ +0x000 */
    /*   line 1293 @ +0x000 */
    /*   line 1298 @ +0x000 */
    /*   line 1304 @ +0x000 */
    /*   line 1307 @ +0x000 */
    /*   line 1315 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\COL\Inters.c lines 1217–1262 */
/* addr: 0x002535a0  size: 472 bytes */
unsigned char INT_fn_bIntersectSegmentWithTriangle2(/* function pointer */ int p_stVertexA, /* function pointer */ int p_stVectAB, /* function pointer */ int p_stVertex1, /* function pointer */ int p_stVertex2, /* function pointer */ int p_stVertex3, /* function pointer */ int p_stNormal, float xDPlan, float xDotProduct, float* p_xT, /* function pointer */ int p_stHit)
{
    float xDivid;
    /* line map: */
    /*   line 1217 @ +0x000 */
    /*   line 1220 @ +0x000 */
    /*   line 1220 @ +0x000 */
    /*   line 1232 @ +0x000 */
    /*   line 1233 @ +0x000 */
    /*   line 1238 @ +0x000 */
    /*   line 1249 @ +0x000 */
    /*   line 1243 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\COL\Inters.c lines 1159–1192 */
/* addr: 0x00253780  size: 396 bytes */
unsigned char INT_fn_bIntersectSegmentWithTriangle(/* function pointer */ int p_stVertexA, /* function pointer */ int p_stVectAB, /* function pointer */ int p_stVertex1, /* function pointer */ int p_stVertex2, /* function pointer */ int p_stVertex3, /* function pointer */ int p_stNormal, float xDPlan, float* p_xT, /* function pointer */ int p_stHit)
{
    float xDivid;
    /* line map: */
    /*   line 1159 @ +0x000 */
    /*   line 1163 @ +0x000 */
    /*   line 1168 @ +0x000 */
    /*   line 1173 @ +0x000 */
    /*   line 1173 @ +0x000 */
    /*   line 1179 @ +0x000 */
    /*   line 1182 @ +0x000 */
    /*   line 1192 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\COL\Inters.c lines 1058–1129 */
/* addr: 0x00253910  size: 1000 bytes */
unsigned char INT_fn_bFastRejectIntersectSegmentWithTriangle(/* function pointer */ int p_stVertexA, /* function pointer */ int p_stVectAB, /* function pointer */ int p_stVertex1, /* function pointer */ int p_stVertex2, /* function pointer */ int p_stVertex3)
{
    unsigned char bGreaterZero;
    /* line map: */
    /*   line 1058 @ +0x000 */
    /*   line 1058 @ +0x000 */
    /*   line 1058 @ +0x000 */
    /*   line 1064 @ +0x000 */
    /*   line 1068 @ +0x000 */
    /*   line 1075 @ +0x000 */
    /*   line 1079 @ +0x000 */
    /*   line 1086 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\COL\Inters.c lines 962–1033 */
/* addr: 0x00253d00  size: 884 bytes */
unsigned char INT_fn_bGetPointInTriangle(/* function pointer */ int p_stPoint, /* function pointer */ int p_stVertex0, /* function pointer */ int p_stVertex1, /* function pointer */ int p_stVertex2, /* function pointer */ int p_stNormal)
{
    /* line map: */
    /*   line 967 @ +0x000 */
    /*   line 967 @ +0x000 */
    /*   line 964 @ +0x000 */
    /*   line 963 @ +0x000 */
    /*   line 963 @ +0x000 */
    /*   line 962 @ +0x000 */
    /*   line 963 @ +0x000 */
    /*   line 963 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\COL\Inters.c lines 750–935 */
/* addr: 0x00254080  size: 1152 bytes */
unsigned char INT_fn_bDetectIntersectSegmentWithBox(/* function pointer */ int p_stVertex1, /* function pointer */ int p_stVect12, /* function pointer */ int p_stMinPoint, /* function pointer */ int p_stMaxPoint, float* _p_xT)
{
    unsigned char bWithxT;
    unsigned char bResult;
    /* aggregate */ int stVertex2;
    float* p_xT;
    float xT;
    unsigned int ulExploredPlan;
    unsigned int ulVertex2Test;
    unsigned int ulVertex1Test;
    /* line map: */
    /*   line 750 @ +0x000 */
    /*   line 754 @ +0x000 */
    /*   line 758 @ +0x000 */
    /*   line 763 @ +0x000 */
    /*   line 767 @ +0x000 */
    /*   line 772 @ +0x000 */
    /*   line 772 @ +0x000 */
    /*   line 772 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\COL\Inters.c lines 625–731 */
/* addr: 0x00254500  size: 536 bytes */
unsigned char ucPlaneCrossingdetect(/* function pointer */ int p_stVertex1, /* function pointer */ int p_stVect12, /* function pointer */ int p_stMinPoint, /* function pointer */ int p_stMaxPoint, float xT, char cFace)
{
    float xTmp;
    unsigned int idx2;
    unsigned int idx1;
    /* line map: */
    /*   line 625 @ +0x000 */
    /*   line 632 @ +0x000 */
    /*   line 638 @ +0x000 */
    /*   line 650 @ +0x000 */
    /*   line 650 @ +0x000 */
    /*   line 650 @ +0x000 */
    /*   line 655 @ +0x000 */
    /*   line 658 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\COL\Inters.c lines 511–604 */
/* addr: 0x00254720  size: 1728 bytes */
unsigned char INT_fn_bIntersectSegmentWithBox(/* function pointer */ int p_stVertex1, /* function pointer */ int p_stVertex2, /* function pointer */ int p_stVect12, /* function pointer */ int p_stMinPoint, /* function pointer */ int p_stMaxPoint, float* p_xT, /* function pointer */ int p_stHit, /* function pointer */ int p_stNormal)
{
    unsigned int ulVertex2Test;
    unsigned int ulVertex1Test;
    /* line map: */
    /*   line 511 @ +0x000 */
    /*   line 513 @ +0x000 */
    /*   line 515 @ +0x000 */
    /*   line 520 @ +0x000 */
    /*   line 523 @ +0x000 */
    /*   line 525 @ +0x000 */
    /*   line 530 @ +0x000 */
    /*   line 530 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\COL\Inters.c lines 321–334 */
/* addr: 0x00254de0  size: 188 bytes */
unsigned char INT_fn_bGetInclusionPointInBox(/* function pointer */ int p_stPoint, /* function pointer */ int p_stMinPoint, /* function pointer */ int p_stMaxPoint)
{
    /* line map: */
    /*   line 321 @ +0x000 */
    /*   line 323 @ +0x000 */
    /*   line 325 @ +0x000 */
    /*   line 327 @ +0x000 */
    /*   line 329 @ +0x000 */
    /*   line 334 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\COL\Inters.c lines 217–227 */
/* addr: 0x00254ea0  size: 176 bytes */
unsigned int INT_fn_ulGetPositionPointWithBox(/* function pointer */ int p_stPoint, /* function pointer */ int p_stMinPoint, /* function pointer */ int p_stMaxPoint)
{
    unsigned int ulOutCode;
    /* line map: */
    /*   line 217 @ +0x000 */
    /*   line 219 @ +0x000 */
    /*   line 221 @ +0x000 */
    /*   line 223 @ +0x000 */
    /*   line 225 @ +0x000 */
    /*   line 227 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\COL\Inters.c lines 196–196 */
/* addr: 0x00254f50  size: 84 bytes */
unsigned char INT_fn_bIntersectSphereWithSphere(/* function pointer */ int p_stCenter1, float xRadius1, /* function pointer */ int p_stCenter2, float xRadius2)
{
    /* line map: */
    /*   line 196 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\COL\Inters.c lines 139–177 */
/* addr: 0x00254fb0  size: 256 bytes */
unsigned char INT_fn_bIntersectSphereWithBox(/* function pointer */ int p_stCenter, float xRadius, /* function pointer */ int p_stMinPoint, /* function pointer */ int p_stMaxPoint)
{
    float xDist;
    /* line map: */
    /*   line 139 @ +0x000 */
    /*   line 143 @ +0x000 */
    /*   line 147 @ +0x000 */
    /*   line 153 @ +0x000 */
    /*   line 156 @ +0x000 */
    /*   line 161 @ +0x000 */
    /*   line 167 @ +0x000 */
    /*   line 171 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\COL\Inters.c lines 120–120 */
/* addr: 0x002550b0  size: 172 bytes */
unsigned char INT_fn_bIntersectBoxWithBox(/* function pointer */ int p_stMinPoint1, /* function pointer */ int p_stMaxPoint1, /* function pointer */ int p_stMinPoint2, /* function pointer */ int p_stMaxPoint2)
{
    /* line map: */
    /*   line 120 @ +0x000 */
    /* TODO: decompile from asm/... */
}
