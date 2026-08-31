/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\mat\matutils.c */
/* Language: C */
/* Compiler: MW MIPS C Compiler */

#include <stddef.h>

/* Recovered aggregate layouts from MWCC debug type records. */
typedef struct MTH4D_tdstVector_ MTH4D_tdstVector_;
typedef struct MTH4D_tdstMatrix_ MTH4D_tdstMatrix_;

struct MTH4D_tdstVector_ {
    float xX; /* +0x0 */
    float xY; /* +0x4 */
    float xZ; /* +0x8 */
    float xW; /* +0xc */
};

struct MTH4D_tdstMatrix_ {
    MTH4D_tdstVector_ stCol_0; /* +0x0 */
    MTH4D_tdstVector_ stCol_1; /* +0x10 */
    MTH4D_tdstVector_ stCol_2; /* +0x20 */
    MTH4D_tdstVector_ stCol_3; /* +0x30 */
};

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\mat\matutils.c lines 25–90 */
/* addr: 0x002fe4d0  size: 400 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 25
 *   +0x0034 -> line 34
 *   +0x0060 -> line 39
 *   +0x0068 -> line 41
 *   +0x0074 -> line 46
 *   +0x0080 -> line 47
 *   +0x0088 -> line 51
 *   +0x0090 -> line 57
 *   +0x00b4 -> line 62
 *   +0x00e0 -> line 63
 *   +0x0108 -> line 64
 *   +0x0130 -> line 65
 *   +0x0138 -> line 68
 *   +0x0140 -> line 75
 *   +0x014c -> line 76
 *   +0x0158 -> line 77
 *   +0x0164 -> line 80
 *   +0x0188 -> line 90
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void MAT_fn_vZoom(MAT_tdstTransformation_* _hTransform, float _xZoomFactor)
{
    MTH4D_tdstMatrix_* p_stMatrix;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\mat\matutils.c lines 178–211 */
/* addr: 0x002fe660  size: 172 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 180
 *   +0x0004 -> line 192
 *   +0x0008 -> line 179
 *   +0x000c -> line 178
 *   +0x0010 -> line 190
 *   +0x0014 -> line 182
 *   +0x0018 -> line 185
 *   +0x001c -> line 188
 *   +0x0020 -> line 184
 *   +0x0024 -> line 187
 *   +0x0028 -> line 189
 *   +0x002c -> line 192
 *   +0x0034 -> line 183
 *   +0x0038 -> line 186
 *   +0x003c -> line 192
 *   +0x0044 -> line 198
 *   +0x0048 -> line 204
 *   +0x004c -> line 198
 *   +0x0050 -> line 204
 *   +0x0054 -> line 193
 *   +0x005c -> line 194
 *   +0x0064 -> line 197
 *   +0x0068 -> line 195
 *   +0x006c -> line 197
 *   +0x0070 -> line 198
 *   +0x0074 -> line 199
 *   +0x007c -> line 202
 *   +0x0080 -> line 200
 *   +0x0084 -> line 203
 *   +0x0088 -> line 202
 *   +0x008c -> line 203
 *   +0x0090 -> line 204
 *   +0x0094 -> line 205
 *   +0x0098 -> line 207
 *   +0x009c -> line 208
 *   +0x00a0 -> line 209
 *   +0x00a4 -> line 211
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void MAT_fn_vNormQuatToMatrix(MTH4D_tdstMatrix_* _p_stMatrix, float _xX, float _xY, float _xZ, float _xW)
{
    float xZz;
    float xYz;
    float xYy;
    float xXz;
    float xXy;
    float xXx;
    float xWz;
    float xWy;
    float xWx;
    float xZs;
    float xYs;
    float xXs;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\mat\matutils.c lines 112–160 */
/* addr: 0x002fe710  size: 220 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 112
 *   +0x0028 -> line 121
 *   +0x002c -> line 122
 *   +0x0030 -> line 129
 *   +0x0034 -> line 120
 *   +0x0038 -> line 123
 *   +0x003c -> line 128
 *   +0x0040 -> line 127
 *   +0x0044 -> line 139
 *   +0x0048 -> line 131
 *   +0x004c -> line 134
 *   +0x0050 -> line 137
 *   +0x0054 -> line 141
 *   +0x0060 -> line 153
 *   +0x0064 -> line 132
 *   +0x0068 -> line 135
 *   +0x006c -> line 147
 *   +0x0070 -> line 136
 *   +0x0074 -> line 133
 *   +0x0078 -> line 138
 *   +0x007c -> line 142
 *   +0x0084 -> line 143
 *   +0x008c -> line 146
 *   +0x0090 -> line 144
 *   +0x0094 -> line 146
 *   +0x0098 -> line 147
 *   +0x00a0 -> line 148
 *   +0x00a8 -> line 151
 *   +0x00ac -> line 149
 *   +0x00b0 -> line 152
 *   +0x00b4 -> line 151
 *   +0x00b8 -> line 153
 *   +0x00bc -> line 152
 *   +0x00c0 -> line 153
 *   +0x00c4 -> line 154
 *   +0x00c8 -> line 156
 *   +0x00cc -> line 157
 *   +0x00d0 -> line 158
 *   +0x00d4 -> line 160
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void MAT_fn_vQuatToMatrix(MTH4D_tdstMatrix_* _p_stMatrix, float _xX, float _xY, float _xZ, float _xW)
{
    float xInvNorm;
    float xZz;
    float xYz;
    float xYy;
    float xXz;
    float xXy;
    float xXx;
    float xWz;
    float xWy;
    float xWx;
    float xZs;
    float xYs;
    float xXs;
    /* TODO: decompile from asm/... */
}
