/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\MEC\DNMMTH.c */
/* Language: C */
/* Compiler: MW MIPS C Compiler */

#include <stddef.h>

/* Recovered aggregate layouts from MWCC debug type records. */
typedef struct MTH3D_tdstVector_ MTH3D_tdstVector_;
typedef struct MTH_stRotation MTH_stRotation;
typedef struct MTH3D_tdstMatrix_ MTH3D_tdstMatrix_;

struct MTH3D_tdstVector_ {
    float xX; /* +0x0 */
    float xY; /* +0x4 */
    float xZ; /* +0x8 */
};

struct MTH_stRotation {
    float m_xAngle; /* +0x0 */
    MTH3D_tdstVector_ m_stAxis; /* +0x4 */
};

struct MTH3D_tdstMatrix_ {
    MTH3D_tdstVector_ stCol_0; /* +0x0 */
    MTH3D_tdstVector_ stCol_1; /* +0xc */
    MTH3D_tdstVector_ stCol_2; /* +0x18 */
};

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\MEC\DNMMTH.c lines 224–299 */
/* addr: 0x00302520  size: 340 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 224
 *   +0x0004 -> line 242
 *   +0x0008 -> line 224
 *   +0x000c -> line 242
 *   +0x0010 -> line 224
 *   +0x001c -> line 242
 *   +0x0020 -> line 224
 *   +0x0024 -> line 242
 *   +0x0030 -> line 245
 *   +0x0034 -> line 246
 *   +0x0040 -> line 255
 *   +0x0044 -> line 246
 *   +0x004c -> line 247
 *   +0x0050 -> line 255
 *   +0x0060 -> line 257
 *   +0x0064 -> line 258
 *   +0x006c -> line 266
 *   +0x009c -> line 267
 *   +0x00c4 -> line 268
 *   +0x00d0 -> line 275
 *   +0x00d4 -> line 276
 *   +0x00dc -> line 277
 *   +0x00e0 -> line 281
 *   +0x00e4 -> line 284
 *   +0x00e8 -> line 281
 *   +0x00f4 -> line 284
 *   +0x00f8 -> line 287
 *   +0x010c -> line 289
 *   +0x0110 -> line 293
 *   +0x0128 -> line 295
 *   +0x012c -> line 298
 *   +0x013c -> line 299
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void DNM_fn_vDynamicsInitDefault(DNM_stDynamics* p_stDynamic)
{
    unsigned int ulEndFlags;
    DNM_stReport* p_stReport;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\MEC\DNMMTH.c lines 164–201 */
/* addr: 0x00302680  size: 636 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 164
 *   +0x0024 -> line 181
 *   +0x0028 -> line 182
 *   +0x0030 -> line 183
 *   +0x003c -> line 184
 *   +0x0040 -> line 186
 *   +0x0118 -> line 187
 *   +0x0144 -> line 189
 *   +0x0170 -> line 191
 *   +0x0178 -> line 190
 *   +0x017c -> line 189
 *   +0x0184 -> line 190
 *   +0x018c -> line 191
 *   +0x0190 -> line 190
 *   +0x0198 -> line 191
 *   +0x019c -> line 190
 *   +0x01a0 -> line 191
 *   +0x01b8 -> line 193
 *   +0x01c0 -> line 194
 *   +0x01d8 -> line 195
 *   +0x01dc -> line 200
 *   +0x01e0 -> line 195
 *   +0x0200 -> line 197
 *   +0x0230 -> line 198
 *   +0x0260 -> line 201
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
MTH3D_tdstVector_* MTH_p_stRotationMulVector(MTH_stRotation* _p_stRotation, MTH3D_tdstVector_* _p_stSource, MTH3D_tdstVector_* _p_stResult)
{
    MTH3D_tdstVector_ VectTmp;
    float xAngle;
    float xValue;
    float xSin;
    float xCos;
    MTH3D_tdstVector_* p_stAxis;
    MTH3D_tdstVector_ stTmp1;
    MTH3D_tdstVector_ stTmp0;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\MEC\DNMMTH.c lines 74–151 */
/* addr: 0x00302900  size: 576 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 74
 *   +0x000c -> line 91
 *   +0x0018 -> line 89
 *   +0x001c -> line 91
 *   +0x0064 -> line 92
 *   +0x0068 -> line 91
 *   +0x006c -> line 92
 *   +0x00c0 -> line 117
 *   +0x0120 -> line 124
 *   +0x012c -> line 125
 *   +0x0134 -> line 128
 *   +0x013c -> line 130
 *   +0x0144 -> line 133
 *   +0x01a4 -> line 135
 *   +0x01c8 -> line 136
 *   +0x01e4 -> line 138
 *   +0x01ec -> line 139
 *   +0x01f4 -> line 140
 *   +0x020c -> line 142
 *   +0x0218 -> line 143
 *   +0x0220 -> line 146
 *   +0x022c -> line 150
 *   +0x0230 -> line 151
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
MTH_stRotation* MTH_p_stRotationComputeRotationWith2Vectors(MTH_stRotation* _p_stResult, MTH3D_tdstVector_* _p_stSrcUnitVector, MTH3D_tdstVector_* _p_stImaUnitVector)
{
    float xNorm;
    MTH3D_tdstVector_* p_stAxis;
    /* TODO: decompile from asm/... */
}
