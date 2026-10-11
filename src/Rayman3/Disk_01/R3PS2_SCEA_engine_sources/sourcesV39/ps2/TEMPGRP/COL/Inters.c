/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\COL\Inters.c */
/* Language: C */
/* Compiler: MW MIPS C Compiler */

#include <stddef.h>

/* R5900 accumulator multiply-add (mula.s/madda.s/madd.s), as in MECBhv.c. */
#define MTH_SQR3_TO(_result, _x, _y, _z) \
    asm { mula.s _x, _x }                  \
    asm { madda.s _y, _y }                 \
    asm { madd.s _result, _z, _z }

/* Recovered aggregate layouts from MWCC debug type records. */
typedef struct MTH3D_tdstVector_ MTH3D_tdstVector_;

struct MTH3D_tdstVector_ {
    float xX; /* +0x0 */
    float xY; /* +0x4 */
    float xZ; /* +0x8 */
};

MTH3D_tdstVector_ COL_g_a6_stBoxSidesNormal[6];

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\COL\Inters.c lines 2043–2065 */
/* addr: 0x002525e0  size: 312 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 2043
 *   +0x0044 -> line 2045
 *   +0x005c -> line 2048
 *   +0x0060 -> line 2045
 *   +0x0064 -> line 2048
 *   +0x0068 -> line 2045
 *   +0x0070 -> line 2048
 *   +0x0090 -> line 2051
 *   +0x00d0 -> line 2053
 *   +0x00d8 -> line 2056
 *   +0x00dc -> line 2058
 *   +0x00f4 -> line 2061
 *   +0x0130 -> line 2065
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
float INT_fn_xDistancePointToLine(MTH3D_tdstVector_* p_stPoint, MTH3D_tdstVector_* p_stVertexA, MTH3D_tdstVector_* p_stVectAB, float* p_xT, MTH3D_tdstVector_* p_stHit)
{
    if ((p_stVectAB->xX != 0.0f) || (p_stVectAB->xY != 0.0f) || (p_stVectAB->xZ != 0.0f))
    {
        *p_xT = ((p_stPoint->xX - p_stVertexA->xX) * p_stVectAB->xX +
                 (p_stPoint->xY - p_stVertexA->xY) * p_stVectAB->xY +
                 (p_stPoint->xZ - p_stVertexA->xZ) * p_stVectAB->xZ) /
                (p_stVectAB->xX * p_stVectAB->xX +
                 p_stVectAB->xY * p_stVectAB->xY +
                 p_stVectAB->xZ * p_stVectAB->xZ);

        p_stHit->xX = p_stVertexA->xX + *p_xT * p_stVectAB->xX;
        p_stHit->xY = p_stVertexA->xY + *p_xT * p_stVectAB->xY;
        p_stHit->xZ = p_stVertexA->xZ + *p_xT * p_stVectAB->xZ;
    }
    else
    {
        *p_xT = 0.0f;
        *p_stHit = *p_stVertexA;
    }

    return __builtin_sqrt((p_stHit->xX - p_stPoint->xX) * (p_stHit->xX - p_stPoint->xX) +
                          (p_stHit->xY - p_stPoint->xY) * (p_stHit->xY - p_stPoint->xY) +
                          (p_stHit->xZ - p_stPoint->xZ) * (p_stHit->xZ - p_stPoint->xZ));
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\COL\Inters.c lines 1826–1997 */
/* addr: 0x00252720  size: 1388 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1826
 *   +0x0004 -> line 1852
 *   +0x0008 -> line 1826
 *   +0x000c -> line 1852
 *   +0x0010 -> line 1826
 *   +0x0058 -> line 1848
 *   +0x0070 -> line 1852
 *   +0x0074 -> line 1849
 *   +0x008c -> line 1848
 *   +0x0098 -> line 1849
 *   +0x00a0 -> line 1852
 *   +0x00ac -> line 1853
 *   +0x00b0 -> line 1852
 *   +0x00b4 -> line 1853
 *   +0x00c8 -> line 1856
 *   +0x00dc -> line 1861
 *   +0x00fc -> line 1863
 *   +0x0104 -> line 1867
 *   +0x0118 -> line 1872
 *   +0x0138 -> line 1874
 *   +0x0140 -> line 1878
 *   +0x015c -> line 1879
 *   +0x0160 -> line 1878
 *   +0x0164 -> line 1879
 *   +0x0178 -> line 1882
 *   +0x018c -> line 1887
 *   +0x01ac -> line 1889
 *   +0x01b4 -> line 1893
 *   +0x01c8 -> line 1898
 *   +0x01e8 -> line 1900
 *   +0x01f0 -> line 1904
 *   +0x020c -> line 1905
 *   +0x0210 -> line 1904
 *   +0x0214 -> line 1905
 *   +0x0228 -> line 1908
 *   +0x023c -> line 1913
 *   +0x025c -> line 1915
 *   +0x0264 -> line 1919
 *   +0x0278 -> line 1924
 *   +0x0298 -> line 1926
 *   +0x02a0 -> line 1929
 *   +0x02a8 -> line 1931
 *   +0x02b4 -> line 1932
 *   +0x02cc -> line 1933
 *   +0x02d4 -> line 1934
 *   +0x02e0 -> line 1935
 *   +0x02ec -> line 1936
 *   +0x02f8 -> line 1938
 *   +0x02fc -> line 1939
 *   +0x0304 -> line 1941
 *   +0x0334 -> line 1945
 *   +0x0338 -> line 1943
 *   +0x033c -> line 1946
 *   +0x0348 -> line 1943
 *   +0x0350 -> line 1947
 *   +0x035c -> line 1949
 *   +0x0368 -> line 1950
 *   +0x0374 -> line 1951
 *   +0x0378 -> line 1952
 *   +0x0380 -> line 1955
 *   +0x0384 -> line 1952
 *   +0x0388 -> line 1955
 *   +0x03c8 -> line 1958
 *   +0x03d4 -> line 1959
 *   +0x0408 -> line 1961
 *   +0x0410 -> line 1965
 *   +0x0418 -> line 1967
 *   +0x0450 -> line 1970
 *   +0x0458 -> line 1972
 *   +0x0464 -> line 1978
 *   +0x0470 -> line 1981
 *   +0x0474 -> line 1978
 *   +0x04b0 -> line 1980
 *   +0x04c0 -> line 1981
 *   +0x04ec -> line 1983
 *   +0x04f0 -> line 1985
 *   +0x04f4 -> line 1983
 *   +0x0528 -> line 1985
 *   +0x0530 -> line 1989
 *   +0x0534 -> line 1997
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
unsigned char INT_fn_bIntersectSegmentWithCylinder(MTH3D_tdstVector_* p_stVertex1, MTH3D_tdstVector_* p_stVect12, MTH3D_tdstVector_* p_stVertexA, MTH3D_tdstVector_* p_stVectAB, float xCylinderRadius, float* p_xTSegment, MTH3D_tdstVector_* p_stHitSegment, MTH3D_tdstVector_* p_stHitLine)
{
    unsigned char bGreaterZero2;
    unsigned char bGreaterZero1;
    float xTmp;
    float xT2;
    float xT1;
    float xB;
    float xM;
    float xTLine;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\COL\Inters.c lines 1702–1805 */
/* addr: 0x00252c90  size: 712 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1702
 *   +0x0018 -> line 1703
 *   +0x001c -> line 1702
 *   +0x0020 -> line 1703
 *   +0x0024 -> line 1702
 *   +0x002c -> line 1703
 *   +0x0038 -> line 1706
 *   +0x003c -> line 1703
 *   +0x0040 -> line 1704
 *   +0x0044 -> line 1709
 *   +0x0060 -> line 1710
 *   +0x0068 -> line 1713
 *   +0x0084 -> line 1714
 *   +0x008c -> line 1716
 *   +0x00a4 -> line 1718
 *   +0x00b4 -> line 1719
 *   +0x00bc -> line 1720
 *   +0x00cc -> line 1721
 *   +0x00d4 -> line 1725
 *   +0x00e4 -> line 1726
 *   +0x00ec -> line 1727
 *   +0x00fc -> line 1728
 *   +0x0104 -> line 1731
 *   +0x011c -> line 1733
 *   +0x012c -> line 1734
 *   +0x0134 -> line 1735
 *   +0x0144 -> line 1736
 *   +0x014c -> line 1740
 *   +0x015c -> line 1741
 *   +0x0164 -> line 1742
 *   +0x0174 -> line 1743
 *   +0x017c -> line 1746
 *   +0x0194 -> line 1748
 *   +0x01a4 -> line 1749
 *   +0x01ac -> line 1750
 *   +0x01bc -> line 1751
 *   +0x01c4 -> line 1755
 *   +0x01d4 -> line 1756
 *   +0x01dc -> line 1757
 *   +0x01ec -> line 1758
 *   +0x01f4 -> line 1762
 *   +0x0200 -> line 1763
 *   +0x0218 -> line 1765
 *   +0x0220 -> line 1768
 *   +0x022c -> line 1771
 *   +0x0240 -> line 1772
 *   +0x0248 -> line 1779
 *   +0x024c -> line 1783
 *   +0x0254 -> line 1784
 *   +0x0258 -> line 1785
 *   +0x0268 -> line 1786
 *   +0x0270 -> line 1790
 *   +0x0278 -> line 1791
 *   +0x0280 -> line 1792
 *   +0x0290 -> line 1793
 *   +0x0298 -> line 1797
 *   +0x02a0 -> line 1798
 *   +0x02a8 -> line 1800
 *   +0x02c0 -> line 1805
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
unsigned char INT_fn_bDetectIntersectSegmentWithSphere(MTH3D_tdstVector_* p_stVertexA, MTH3D_tdstVector_* p_stVectAB, MTH3D_tdstVector_* p_stSphereCenter, float xSphereRadius)
{
    float xSpecialRadius;
    float xTemp;
    float xdist;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\COL\Inters.c lines 1618–1675 */
/* addr: 0x00252f60  size: 724 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1618
 *   +0x003c -> line 1628
 *   +0x004c -> line 1630
 *   +0x0054 -> line 1633
 *   +0x006c -> line 1634
 *   +0x0070 -> line 1633
 *   +0x0074 -> line 1634
 *   +0x007c -> line 1633
 *   +0x0084 -> line 1634
 *   +0x0090 -> line 1636
 *   +0x009c -> line 1637
 *   +0x00a0 -> line 1638
 *   +0x00a8 -> line 1641
 *   +0x00ac -> line 1638
 *   +0x00b0 -> line 1641
 *   +0x00e0 -> line 1644
 *   +0x00ec -> line 1645
 *   +0x011c -> line 1650
 *   +0x0128 -> line 1647
 *   +0x012c -> line 1648
 *   +0x0168 -> line 1649
 *   +0x0198 -> line 1651
 *   +0x01b8 -> line 1652
 *   +0x01c0 -> line 1656
 *   +0x01c8 -> line 1660
 *   +0x01fc -> line 1662
 *   +0x0200 -> line 1665
 *   +0x0208 -> line 1663
 *   +0x0250 -> line 1664
 *   +0x0280 -> line 1666
 *   +0x02a0 -> line 1667
 *   +0x02a8 -> line 1674
 *   +0x02ac -> line 1675
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
unsigned char INT_fn_bIntersectSegmentWithSphere(MTH3D_tdstVector_* p_stVertex1, MTH3D_tdstVector_* p_stVect12, MTH3D_tdstVector_* p_stSphereCenter, float xSphereRadius, float* p_xT, MTH3D_tdstVector_* p_stHit, MTH3D_tdstVector_* p_stNormal)
{
    float xInvR;
    float xT2;
    float xT1;
    float xB;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\COL\Inters.c lines 1537–1587 */
/* addr: 0x00253240  size: 428 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1537
 *   +0x0018 -> line 1538
 *   +0x0024 -> line 1537
 *   +0x0028 -> line 1541
 *   +0x002c -> line 1537
 *   +0x0034 -> line 1538
 *   +0x0040 -> line 1541
 *   +0x0050 -> line 1543
 *   +0x0060 -> line 1544
 *   +0x0068 -> line 1545
 *   +0x0078 -> line 1546
 *   +0x0080 -> line 1550
 *   +0x0090 -> line 1551
 *   +0x0098 -> line 1552
 *   +0x00a8 -> line 1553
 *   +0x00b0 -> line 1556
 *   +0x00c8 -> line 1558
 *   +0x00d8 -> line 1559
 *   +0x00e0 -> line 1560
 *   +0x00f0 -> line 1561
 *   +0x00f8 -> line 1565
 *   +0x0108 -> line 1566
 *   +0x0110 -> line 1567
 *   +0x0120 -> line 1568
 *   +0x0128 -> line 1571
 *   +0x0140 -> line 1573
 *   +0x0150 -> line 1574
 *   +0x0158 -> line 1575
 *   +0x0168 -> line 1576
 *   +0x0170 -> line 1580
 *   +0x0180 -> line 1581
 *   +0x0188 -> line 1582
 *   +0x0198 -> line 1583
 *   +0x01a0 -> line 1586
 *   +0x01a4 -> line 1587
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
unsigned char INT_fn_bFastRejectIntersectSegmentWithSphere(MTH3D_tdstVector_* p_stVertex1, MTH3D_tdstVector_* p_stVect12, MTH3D_tdstVector_* p_stSphereCenter, float xSphereRadius)
{
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\COL\Inters.c lines 1514–1515 */
/* addr: 0x002533f0  size: 80 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1514
 *   +0x0048 -> line 1515
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
unsigned char INT_fn_bGetInclusionPointInSphere(MTH3D_tdstVector_* p_stPoint, MTH3D_tdstVector_* p_stSphereCenter, float xSphereRadius)
{
    float xDx, xDy, xDz, xSqrNorm;
    xDz = p_stPoint->xZ - p_stSphereCenter->xZ; xDy = p_stPoint->xY - p_stSphereCenter->xY; xDx = p_stPoint->xX - p_stSphereCenter->xX; MTH_SQR3_TO(xSqrNorm, xDx, xDy, xDz); return (xSqrNorm <= xSphereRadius * xSphereRadius);
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\COL\Inters.c lines 1283–1322 */
/* addr: 0x00253440  size: 352 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1283
 *   +0x003c -> line 1289
 *   +0x004c -> line 1290
 *   +0x0054 -> line 1293
 *   +0x0078 -> line 1296
 *   +0x0090 -> line 1298
 *   +0x00a8 -> line 1301
 *   +0x00b8 -> line 1304
 *   +0x00e4 -> line 1310
 *   +0x00f8 -> line 1307
 *   +0x0124 -> line 1310
 *   +0x0134 -> line 1315
 *   +0x0138 -> line 1322
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
unsigned char INT_fn_bDetectIntersectSegmentWithTriangle(MTH3D_tdstVector_* p_stVertexA, MTH3D_tdstVector_* p_stVectAB, MTH3D_tdstVector_* p_stVertex1, MTH3D_tdstVector_* p_stVertex2, MTH3D_tdstVector_* p_stVertex3, MTH3D_tdstVector_* p_stNormal, float xDPlan)
{
    MTH3D_tdstVector_ stHit;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\COL\Inters.c lines 1213–1264 */
/* addr: 0x002535a0  size: 472 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1213
 *   +0x0054 -> line 1217
 *   +0x0064 -> line 1218
 *   +0x006c -> line 1220
 *   +0x0090 -> line 1230
 *   +0x0094 -> line 1220
 *   +0x0098 -> line 1230
 *   +0x00d4 -> line 1232
 *   +0x00d8 -> line 1234
 *   +0x00dc -> line 1233
 *   +0x00f0 -> line 1234
 *   +0x00f8 -> line 1238
 *   +0x0124 -> line 1243
 *   +0x0130 -> line 1249
 *   +0x0144 -> line 1246
 *   +0x0148 -> line 1243
 *   +0x014c -> line 1246
 *   +0x017c -> line 1249
 *   +0x018c -> line 1251
 *   +0x0190 -> line 1252
 *   +0x0198 -> line 1256
 *   +0x01a0 -> line 1262
 *   +0x01a4 -> line 1264
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
unsigned char INT_fn_bIntersectSegmentWithTriangle2(MTH3D_tdstVector_* p_stVertexA, MTH3D_tdstVector_* p_stVectAB, MTH3D_tdstVector_* p_stVertex1, MTH3D_tdstVector_* p_stVertex2, MTH3D_tdstVector_* p_stVertex3, MTH3D_tdstVector_* p_stNormal, float xDPlan, float xDotProduct, float* p_xT, MTH3D_tdstVector_* p_stHit)
{
    float xDivid;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\COL\Inters.c lines 1154–1199 */
/* addr: 0x00253780  size: 396 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1154
 *   +0x004c -> line 1159
 *   +0x005c -> line 1160
 *   +0x0064 -> line 1163
 *   +0x0088 -> line 1166
 *   +0x00a0 -> line 1168
 *   +0x00bc -> line 1170
 *   +0x00e0 -> line 1173
 *   +0x00ec -> line 1179
 *   +0x0100 -> line 1173
 *   +0x0104 -> line 1176
 *   +0x0134 -> line 1179
 *   +0x0144 -> line 1181
 *   +0x0148 -> line 1182
 *   +0x0150 -> line 1186
 *   +0x0158 -> line 1192
 *   +0x015c -> line 1199
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
unsigned char INT_fn_bIntersectSegmentWithTriangle(MTH3D_tdstVector_* p_stVertexA, MTH3D_tdstVector_* p_stVectAB, MTH3D_tdstVector_* p_stVertex1, MTH3D_tdstVector_* p_stVertex2, MTH3D_tdstVector_* p_stVertex3, MTH3D_tdstVector_* p_stNormal, float xDPlan, float* p_xT, MTH3D_tdstVector_* p_stHit)
{
    float xDivid;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\COL\Inters.c lines 1055–1133 */
/* addr: 0x00253910  size: 1000 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1055
 *   +0x0004 -> line 1058
 *   +0x0008 -> line 1055
 *   +0x001c -> line 1058
 *   +0x0024 -> line 1055
 *   +0x002c -> line 1058
 *   +0x0044 -> line 1061
 *   +0x0050 -> line 1064
 *   +0x00b8 -> line 1066
 *   +0x00c8 -> line 1068
 *   +0x00d0 -> line 1072
 *   +0x00e4 -> line 1075
 *   +0x014c -> line 1077
 *   +0x015c -> line 1079
 *   +0x0164 -> line 1083
 *   +0x0184 -> line 1086
 *   +0x0190 -> line 1089
 *   +0x01f8 -> line 1091
 *   +0x0208 -> line 1093
 *   +0x0210 -> line 1097
 *   +0x0224 -> line 1100
 *   +0x028c -> line 1102
 *   +0x029c -> line 1104
 *   +0x02a4 -> line 1108
 *   +0x02c4 -> line 1111
 *   +0x02d0 -> line 1114
 *   +0x0338 -> line 1116
 *   +0x0348 -> line 1118
 *   +0x0350 -> line 1122
 *   +0x0364 -> line 1125
 *   +0x03cc -> line 1127
 *   +0x03dc -> line 1129
 *   +0x03e0 -> line 1133
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
unsigned char INT_fn_bFastRejectIntersectSegmentWithTriangle(MTH3D_tdstVector_* p_stVertexA, MTH3D_tdstVector_* p_stVectAB, MTH3D_tdstVector_* p_stVertex1, MTH3D_tdstVector_* p_stVertex2, MTH3D_tdstVector_* p_stVertex3)
{
    unsigned char bGreaterZero;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\COL\Inters.c lines 962–1033 */
/* addr: 0x00253d00  size: 884 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 962
 *   +0x0004 -> line 967
 *   +0x0008 -> line 962
 *   +0x000c -> line 967
 *   +0x0010 -> line 963
 *   +0x0014 -> line 964
 *   +0x0018 -> line 962
 *   +0x0020 -> line 963
 *   +0x0024 -> line 962
 *   +0x0028 -> line 963
 *   +0x002c -> line 964
 *   +0x0030 -> line 962
 *   +0x0034 -> line 964
 *   +0x0038 -> line 963
 *   +0x003c -> line 962
 *   +0x0044 -> line 963
 *   +0x0048 -> line 964
 *   +0x0050 -> line 967
 *   +0x0054 -> line 964
 *   +0x0058 -> line 967
 *   +0x0064 -> line 962
 *   +0x0068 -> line 967
 *   +0x0078 -> line 969
 *   +0x0080 -> line 970
 *   +0x00c8 -> line 972
 *   +0x00d0 -> line 973
 *   +0x0110 -> line 975
 *   +0x0118 -> line 976
 *   +0x015c -> line 980
 *   +0x0164 -> line 985
 *   +0x016c -> line 990
 *   +0x0184 -> line 992
 *   +0x018c -> line 993
 *   +0x01d4 -> line 995
 *   +0x01dc -> line 996
 *   +0x021c -> line 998
 *   +0x0224 -> line 999
 *   +0x0268 -> line 1003
 *   +0x0270 -> line 1008
 *   +0x0278 -> line 1013
 *   +0x0280 -> line 1014
 *   +0x02cc -> line 1016
 *   +0x02d4 -> line 1017
 *   +0x0314 -> line 1019
 *   +0x031c -> line 1020
 *   +0x0360 -> line 1024
 *   +0x0368 -> line 1029
 *   +0x036c -> line 1033
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
unsigned char INT_fn_bGetPointInTriangle(MTH3D_tdstVector_* p_stPoint, MTH3D_tdstVector_* p_stVertex0, MTH3D_tdstVector_* p_stVertex1, MTH3D_tdstVector_* p_stVertex2, MTH3D_tdstVector_* p_stNormal)
{
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\COL\Inters.c lines 742–936 */
/* addr: 0x00254080  size: 1152 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 742
 *   +0x0030 -> line 750
 *   +0x0038 -> line 752
 *   +0x003c -> line 754
 *   +0x0044 -> line 757
 *   +0x0048 -> line 758
 *   +0x004c -> line 762
 *   +0x0060 -> line 763
 *   +0x0068 -> line 766
 *   +0x006c -> line 767
 *   +0x0074 -> line 770
 *   +0x0078 -> line 772
 *   +0x007c -> line 770
 *   +0x0080 -> line 772
 *   +0x0088 -> line 770
 *   +0x00ac -> line 772
 *   +0x00b4 -> line 773
 *   +0x00bc -> line 776
 *   +0x00c0 -> line 777
 *   +0x00cc -> line 780
 *   +0x00d4 -> line 784
 *   +0x00dc -> line 787
 *   +0x00e0 -> line 788
 *   +0x00ec -> line 792
 *   +0x00f4 -> line 793
 *   +0x00fc -> line 795
 *   +0x0104 -> line 797
 *   +0x0110 -> line 798
 *   +0x0118 -> line 801
 *   +0x0128 -> line 803
 *   +0x012c -> line 804
 *   +0x0130 -> line 803
 *   +0x0140 -> line 804
 *   +0x0148 -> line 806
 *   +0x0154 -> line 810
 *   +0x015c -> line 811
 *   +0x0164 -> line 813
 *   +0x016c -> line 815
 *   +0x0178 -> line 816
 *   +0x0180 -> line 819
 *   +0x0190 -> line 821
 *   +0x0194 -> line 822
 *   +0x0198 -> line 821
 *   +0x01a8 -> line 822
 *   +0x01b0 -> line 824
 *   +0x01b8 -> line 828
 *   +0x01c0 -> line 829
 *   +0x01c8 -> line 831
 *   +0x01d0 -> line 833
 *   +0x01dc -> line 834
 *   +0x01e4 -> line 837
 *   +0x01f4 -> line 839
 *   +0x01f8 -> line 840
 *   +0x01fc -> line 839
 *   +0x020c -> line 840
 *   +0x0214 -> line 846
 *   +0x0220 -> line 849
 *   +0x0224 -> line 855
 *   +0x0228 -> line 849
 *   +0x022c -> line 855
 *   +0x023c -> line 849
 *   +0x0244 -> line 854
 *   +0x0254 -> line 855
 *   +0x026c -> line 857
 *   +0x0274 -> line 861
 *   +0x0280 -> line 864
 *   +0x0284 -> line 870
 *   +0x0288 -> line 864
 *   +0x028c -> line 870
 *   +0x029c -> line 864
 *   +0x02a4 -> line 869
 *   +0x02b4 -> line 870
 *   +0x02cc -> line 872
 *   +0x02d4 -> line 876
 *   +0x02e0 -> line 879
 *   +0x02e4 -> line 885
 *   +0x02e8 -> line 879
 *   +0x02ec -> line 885
 *   +0x02fc -> line 879
 *   +0x0304 -> line 884
 *   +0x0314 -> line 885
 *   +0x032c -> line 887
 *   +0x0334 -> line 891
 *   +0x0340 -> line 894
 *   +0x0344 -> line 900
 *   +0x0348 -> line 894
 *   +0x034c -> line 900
 *   +0x035c -> line 894
 *   +0x0364 -> line 899
 *   +0x0374 -> line 900
 *   +0x038c -> line 902
 *   +0x0394 -> line 906
 *   +0x03a0 -> line 909
 *   +0x03a4 -> line 915
 *   +0x03a8 -> line 909
 *   +0x03ac -> line 915
 *   +0x03bc -> line 909
 *   +0x03c4 -> line 914
 *   +0x03d4 -> line 915
 *   +0x03ec -> line 917
 *   +0x03f4 -> line 921
 *   +0x0400 -> line 924
 *   +0x0404 -> line 930
 *   +0x0408 -> line 924
 *   +0x040c -> line 930
 *   +0x041c -> line 924
 *   +0x0424 -> line 929
 *   +0x0434 -> line 930
 *   +0x044c -> line 932
 *   +0x0454 -> line 935
 *   +0x0458 -> line 936
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
unsigned char INT_fn_bDetectIntersectSegmentWithBox(MTH3D_tdstVector_* p_stVertex1, MTH3D_tdstVector_* p_stVect12, MTH3D_tdstVector_* p_stMinPoint, MTH3D_tdstVector_* p_stMaxPoint, float* _p_xT)
{
    unsigned char bWithxT;
    unsigned char bResult;
    MTH3D_tdstVector_ stVertex2;
    float* p_xT;
    float xT;
    unsigned int ulExploredPlan;
    unsigned int ulVertex2Test;
    unsigned int ulVertex1Test;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\COL\Inters.c lines 625–732 */
/* addr: 0x00254500  size: 536 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 629
 *   +0x000c -> line 625
 *   +0x0010 -> line 629
 *   +0x0034 -> line 632
 *   +0x0038 -> line 634
 *   +0x0040 -> line 638
 *   +0x0048 -> line 641
 *   +0x004c -> line 650
 *   +0x005c -> line 651
 *   +0x0060 -> line 650
 *   +0x0064 -> line 651
 *   +0x0068 -> line 650
 *   +0x006c -> line 651
 *   +0x0074 -> line 655
 *   +0x008c -> line 656
 *   +0x0094 -> line 658
 *   +0x00a8 -> line 661
 *   +0x00b8 -> line 662
 *   +0x00bc -> line 661
 *   +0x00c0 -> line 662
 *   +0x00c8 -> line 666
 *   +0x00e0 -> line 667
 *   +0x00e8 -> line 669
 *   +0x00fc -> line 671
 *   +0x0104 -> line 679
 *   +0x011c -> line 680
 *   +0x0124 -> line 682
 *   +0x0138 -> line 684
 *   +0x0140 -> line 695
 *   +0x0158 -> line 696
 *   +0x0160 -> line 698
 *   +0x0174 -> line 701
 *   +0x0184 -> line 702
 *   +0x0188 -> line 701
 *   +0x018c -> line 702
 *   +0x0194 -> line 706
 *   +0x01ac -> line 707
 *   +0x01b4 -> line 709
 *   +0x01c8 -> line 711
 *   +0x01d0 -> line 719
 *   +0x01e8 -> line 720
 *   +0x01f0 -> line 722
 *   +0x0204 -> line 724
 *   +0x020c -> line 731
 *   +0x0210 -> line 732
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
unsigned char ucPlaneCrossingdetect(MTH3D_tdstVector_* p_stVertex1, MTH3D_tdstVector_* p_stVect12, MTH3D_tdstVector_* p_stMinPoint, MTH3D_tdstVector_* p_stMaxPoint, float xT, char cFace)
{
    float xTmp;
    unsigned int idx2;
    unsigned int idx1;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\COL\Inters.c lines 505–605 */
/* addr: 0x00254720  size: 1728 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 505
 *   +0x004c -> line 511
 *   +0x005c -> line 512
 *   +0x0064 -> line 513
 *   +0x006c -> line 514
 *   +0x0078 -> line 515
 *   +0x0084 -> line 516
 *   +0x008c -> line 520
 *   +0x0098 -> line 522
 *   +0x00b0 -> line 523
 *   +0x00b8 -> line 524
 *   +0x00d0 -> line 525
 *   +0x00e8 -> line 527
 *   +0x0164 -> line 530
 *   +0x0168 -> line 529
 *   +0x0184 -> line 530
 *   +0x018c -> line 534
 *   +0x0198 -> line 536
 *   +0x01b0 -> line 537
 *   +0x01b8 -> line 538
 *   +0x01d0 -> line 539
 *   +0x01e8 -> line 541
 *   +0x0264 -> line 544
 *   +0x0268 -> line 543
 *   +0x0284 -> line 544
 *   +0x028c -> line 548
 *   +0x0298 -> line 550
 *   +0x02b0 -> line 551
 *   +0x02c8 -> line 552
 *   +0x02d0 -> line 553
 *   +0x02e8 -> line 555
 *   +0x0364 -> line 558
 *   +0x0368 -> line 557
 *   +0x0384 -> line 558
 *   +0x038c -> line 562
 *   +0x0398 -> line 564
 *   +0x03b0 -> line 565
 *   +0x03c8 -> line 566
 *   +0x03d0 -> line 567
 *   +0x03e8 -> line 569
 *   +0x0464 -> line 572
 *   +0x0468 -> line 571
 *   +0x0484 -> line 572
 *   +0x048c -> line 576
 *   +0x0498 -> line 578
 *   +0x04b0 -> line 579
 *   +0x04c8 -> line 580
 *   +0x04e0 -> line 581
 *   +0x04e8 -> line 583
 *   +0x0564 -> line 586
 *   +0x0568 -> line 585
 *   +0x0584 -> line 586
 *   +0x058c -> line 590
 *   +0x0598 -> line 592
 *   +0x05b0 -> line 593
 *   +0x05c8 -> line 594
 *   +0x05e0 -> line 595
 *   +0x05e8 -> line 597
 *   +0x0664 -> line 600
 *   +0x0668 -> line 599
 *   +0x0684 -> line 600
 *   +0x068c -> line 604
 *   +0x0690 -> line 605
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
unsigned char INT_fn_bIntersectSegmentWithBox(MTH3D_tdstVector_* p_stVertex1, MTH3D_tdstVector_* p_stVertex2, MTH3D_tdstVector_* p_stVect12, MTH3D_tdstVector_* p_stMinPoint, MTH3D_tdstVector_* p_stMaxPoint, float* p_xT, MTH3D_tdstVector_* p_stHit, MTH3D_tdstVector_* p_stNormal)
{
    unsigned int ulVertex2Test;
    unsigned int ulVertex1Test;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\COL\Inters.c lines 320–334 */
/* addr: 0x00254de0  size: 188 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 320
 *   +0x0018 -> line 321
 *   +0x0020 -> line 322
 *   +0x0034 -> line 323
 *   +0x003c -> line 324
 *   +0x0054 -> line 325
 *   +0x005c -> line 326
 *   +0x0070 -> line 327
 *   +0x0078 -> line 328
 *   +0x0090 -> line 329
 *   +0x0098 -> line 331
 *   +0x00b4 -> line 334
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
unsigned char INT_fn_bGetInclusionPointInBox(MTH3D_tdstVector_* p_stPoint, MTH3D_tdstVector_* p_stMinPoint, MTH3D_tdstVector_* p_stMaxPoint)
{
    if (p_stPoint->xX < p_stMinPoint->xX)
        return 0;
    if (p_stPoint->xX > p_stMaxPoint->xX)
        return 0;
    if (p_stPoint->xY < p_stMinPoint->xY)
        return 0;
    if (p_stPoint->xY > p_stMaxPoint->xY)
        return 0;
    if (p_stPoint->xZ < p_stMinPoint->xZ)
        return 0;
    return !(p_stPoint->xZ > p_stMaxPoint->xZ);
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\COL\Inters.c lines 216–230 */
/* addr: 0x00254ea0  size: 176 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 216
 *   +0x0018 -> line 217
 *   +0x0020 -> line 218
 *   +0x0034 -> line 219
 *   +0x0038 -> line 220
 *   +0x0050 -> line 221
 *   +0x0058 -> line 222
 *   +0x006c -> line 223
 *   +0x0070 -> line 224
 *   +0x0088 -> line 225
 *   +0x0090 -> line 226
 *   +0x00a4 -> line 227
 *   +0x00a8 -> line 230
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
unsigned int INT_fn_ulGetPositionPointWithBox(MTH3D_tdstVector_* p_stPoint, MTH3D_tdstVector_* p_stMinPoint, MTH3D_tdstVector_* p_stMaxPoint)
{
    unsigned int ulOutCode;
    ulOutCode = 0;
    if (p_stPoint->xX < p_stMinPoint->xX)
        ulOutCode |= 1;
    else if (p_stPoint->xX > p_stMaxPoint->xX)
        ulOutCode |= 2;
    if (p_stPoint->xY < p_stMinPoint->xY)
        ulOutCode |= 4;
    else if (p_stPoint->xY > p_stMaxPoint->xY)
        ulOutCode |= 8;
    if (p_stPoint->xZ < p_stMinPoint->xZ)
        ulOutCode |= 16;
    else if (p_stPoint->xZ > p_stMaxPoint->xZ)
        ulOutCode |= 32;
    return ulOutCode;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\COL\Inters.c lines 195–196 */
/* addr: 0x00254f50  size: 84 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 195
 *   +0x004c -> line 196
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
unsigned char INT_fn_bIntersectSphereWithSphere(MTH3D_tdstVector_* p_stCenter1, float xRadius1, MTH3D_tdstVector_* p_stCenter2, float xRadius2)
{
    return ((p_stCenter1->xX - p_stCenter2->xX) * (p_stCenter1->xX - p_stCenter2->xX) +
            (p_stCenter1->xY - p_stCenter2->xY) * (p_stCenter1->xY - p_stCenter2->xY) +
            (p_stCenter1->xZ - p_stCenter2->xZ) * (p_stCenter1->xZ - p_stCenter2->xZ)) <=
           ((xRadius1 + xRadius2) * (xRadius1 + xRadius2));
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\COL\Inters.c lines 139–178 */
/* addr: 0x00254fb0  size: 256 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 141
 *   +0x0008 -> line 139
 *   +0x0010 -> line 141
 *   +0x0020 -> line 143
 *   +0x0028 -> line 144
 *   +0x0030 -> line 147
 *   +0x0044 -> line 149
 *   +0x0050 -> line 153
 *   +0x0068 -> line 155
 *   +0x0070 -> line 156
 *   +0x0078 -> line 159
 *   +0x008c -> line 161
 *   +0x0098 -> line 165
 *   +0x00b0 -> line 167
 *   +0x00b8 -> line 168
 *   +0x00c0 -> line 171
 *   +0x00d4 -> line 173
 *   +0x00e0 -> line 177
 *   +0x00f8 -> line 178
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
unsigned char INT_fn_bIntersectSphereWithBox(MTH3D_tdstVector_* p_stCenter, float xRadius, MTH3D_tdstVector_* p_stMinPoint, MTH3D_tdstVector_* p_stMaxPoint)
{
    float xDist;
    xDist = 0.0f;
    if (p_stCenter->xX < p_stMinPoint->xX)
        xDist += (p_stCenter->xX - p_stMinPoint->xX) * (p_stCenter->xX - p_stMinPoint->xX);
    else if (p_stCenter->xX > p_stMaxPoint->xX)
        xDist += (p_stCenter->xX - p_stMaxPoint->xX) * (p_stCenter->xX - p_stMaxPoint->xX);
    if (p_stCenter->xY < p_stMinPoint->xY)
        xDist += (p_stCenter->xY - p_stMinPoint->xY) * (p_stCenter->xY - p_stMinPoint->xY);
    else if (p_stCenter->xY > p_stMaxPoint->xY)
        xDist += (p_stCenter->xY - p_stMaxPoint->xY) * (p_stCenter->xY - p_stMaxPoint->xY);
    if (p_stCenter->xZ < p_stMinPoint->xZ)
        xDist += (p_stCenter->xZ - p_stMinPoint->xZ) * (p_stCenter->xZ - p_stMinPoint->xZ);
    else if (p_stCenter->xZ > p_stMaxPoint->xZ)
        xDist += (p_stCenter->xZ - p_stMaxPoint->xZ) * (p_stCenter->xZ - p_stMaxPoint->xZ);
    return xDist < xRadius * xRadius;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\COL\Inters.c lines 108–120 */
/* addr: 0x002550b0  size: 172 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 108
 *   +0x00a4 -> line 120
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
unsigned char INT_fn_bIntersectBoxWithBox(MTH3D_tdstVector_* p_stMinPoint1, MTH3D_tdstVector_* p_stMaxPoint1, MTH3D_tdstVector_* p_stMinPoint2, MTH3D_tdstVector_* p_stMaxPoint2)
{
    return (((p_stMinPoint1->xX > p_stMinPoint2->xX) ? p_stMinPoint1->xX : p_stMinPoint2->xX) <=
            ((p_stMaxPoint1->xX < p_stMaxPoint2->xX) ? p_stMaxPoint1->xX : p_stMaxPoint2->xX)) &&
           (((p_stMinPoint1->xY > p_stMinPoint2->xY) ? p_stMinPoint1->xY : p_stMinPoint2->xY) <=
            ((p_stMaxPoint1->xY < p_stMaxPoint2->xY) ? p_stMaxPoint1->xY : p_stMaxPoint2->xY)) &&
           (((p_stMinPoint1->xZ > p_stMinPoint2->xZ) ? p_stMinPoint1->xZ : p_stMinPoint2->xZ) <=
            ((p_stMaxPoint1->xZ < p_stMaxPoint2->xZ) ? p_stMaxPoint1->xZ : p_stMaxPoint2->xZ));
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\COL\Inters.c lines 49–91 */
/* addr: 0x00255160  size: 232 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 49
 *   +0x0018 -> line 51
 *   +0x0028 -> line 52
 *   +0x0038 -> line 54
 *   +0x003c -> line 56
 *   +0x0040 -> line 59
 *   +0x0044 -> line 56
 *   +0x004c -> line 55
 *   +0x0050 -> line 56
 *   +0x0054 -> line 57
 *   +0x0058 -> line 58
 *   +0x005c -> line 57
 *   +0x0060 -> line 58
 *   +0x0064 -> line 57
 *   +0x0068 -> line 59
 *   +0x0070 -> line 63
 *   +0x0080 -> line 65
 *   +0x0088 -> line 69
 *   +0x0098 -> line 71
 *   +0x009c -> line 72
 *   +0x00a0 -> line 71
 *   +0x00ac -> line 72
 *   +0x00b4 -> line 79
 *   +0x00c4 -> line 81
 *   +0x00d0 -> line 82
 *   +0x00d4 -> line 81
 *   +0x00d8 -> line 82
 *   +0x00e0 -> line 91
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
short INT_fn_xTrinomeResolution(float xA, float xB, float xC, float* p_xT1, float* p_xT2)
{
    float xDiv;
    float xDelta;
    /* TODO: decompile from asm/... */
}
