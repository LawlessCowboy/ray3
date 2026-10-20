/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\MEC\DNMMTH.c */
/* Language: C */
/* Compiler: MW MIPS C Compiler */

#include <stddef.h>
#include "r3/DNM.h"

/* Recovered aggregate layouts from MWCC debug type records. */
typedef struct stMACDPID stMACDPID;
typedef struct DNM_stDynamics DNM_stDynamics;
typedef struct DNM_stDynamicsComplexBlock DNM_stDynamicsComplexBlock;
typedef struct HIE_tdstSuperObject_ HIE_tdstSuperObject_;

struct stMACDPID {
    float m_xData0; /* +0x0 */
    MTH3D_tdstVector_ m_stData1; /* +0x4 */
    MTH3D_tdstVector_ m_stData2; /* +0x10 */
    MTH3D_tdstVector_ m_stData3; /* +0x1c */
    float m_xData3; /* +0x28 */
    float m_xData4; /* +0x2c */
    float m_xData5; /* +0x30 */
    MTH_stRotation m_stData6; /* +0x34 */
    MTH_stRotation m_stData7; /* +0x44 */
    char m_cData8; /* +0x54 */
    unsigned short m_uwData9; /* +0x56 */
    MTH3D_tdstVector_ m_stData10; /* +0x58 */
    float m_xData11; /* +0x64 */
    float m_xData12; /* +0x68 */
    unsigned char _extractor_padding_00[8]; /* implicitly added by extractor; +0x6c..0x73 */
    float m_xData13; /* +0x74 */
    unsigned char m_bData14; /* +0x78 */
};

struct DNM_stDynamicsComplexBlock {
    float m_xTiltIntensity; /* +0x0 */
    float m_xTiltInertia; /* +0x4 */
    float m_xTiltOrigin; /* +0x8 */
    float m_xTiltAngle; /* +0xc */
    float m_xHangingLimit; /* +0x10 */
    MTH3D_tdstVector_ m_stContact; /* +0x14 */
    MTH3D_tdstVector_ m_stFallTranslation; /* +0x20 */
    stMACDPID m_stExternalDatas; /* +0x2c */
    HIE_tdstSuperObject_* m_hPlatform; /* +0xa8 */
    unsigned char _extractor_padding_00[4]; /* implicitly added by extractor; +0xac..0xaf */
    MAT_tdstTransformation_ m_stAbsolutePreviousMatrix; /* +0xb0 */
    MAT_tdstTransformation_ m_stPrevPreviousMatrix; /* +0x110 */
};

struct DNM_stDynamics {
    DNM_stDynamicsBaseBlock m_tdstDynamicsBaseBlock; /* +0x0 */
    DNM_stDynamicsAdvancedBlock m_tdstDynamicsAdvancedBlock; /* +0x170 */
    unsigned char _extractor_padding_00[8]; /* implicitly added by extractor; +0x1f8..0x1ff */
    DNM_stDynamicsComplexBlock m_tdstDynamicsComplexBlock; /* +0x200 */
};

extern DNM_stReport g_stReport;
void DNM_p_stReportDefaultInit(DNM_stReport* p_stReport);

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
    DNM_stReport* p_stReport;
    unsigned int ulEndFlags;

    p_stReport = NULL;
    memset(&g_stReport, 0, 0x274);
    p_stDynamic->m_tdstDynamicsBaseBlock.ulFlags = 0;
    p_stDynamic->m_tdstDynamicsBaseBlock.ulEndFlags &= 0x0004400Fu;
    ulEndFlags = p_stDynamic->m_tdstDynamicsBaseBlock.ulEndFlags;

    if ((ulEndFlags & 0x4000) ? 1 : 0)
    {
        p_stReport = p_stDynamic->m_tdstDynamicsBaseBlock.m_pstReport;
        DNM_p_stReportDefaultInit(p_stReport);
    }

    if ((p_stDynamic->m_tdstDynamicsBaseBlock.ulEndFlags & 0x4) ? 1 : 0)
    {
        memset(p_stDynamic, 0, sizeof(DNM_stDynamics));
    }
    else if ((p_stDynamic->m_tdstDynamicsBaseBlock.ulEndFlags & 0x2) ? 1 : 0)
    {
        memset(p_stDynamic, 0, sizeof(DNM_stDynamics) - sizeof(DNM_stDynamicsComplexBlock));
    }
    else
    {
        memset(p_stDynamic, 0, sizeof(DNM_stDynamicsBaseBlock));
    }
    p_stDynamic->m_tdstDynamicsBaseBlock.ulEndFlags = ulEndFlags;

    if (p_stReport != NULL)
    {
        p_stDynamic->m_tdstDynamicsBaseBlock.m_pstReport = p_stReport;
    }

    ulEndFlags = p_stDynamic->m_tdstDynamicsBaseBlock.ulEndFlags | 0x80;
    p_stDynamic->m_tdstDynamicsBaseBlock.ulEndFlags = ulEndFlags;
    p_stDynamic->m_tdstDynamicsBaseBlock.ulEndFlags = ulEndFlags;
    p_stDynamic->m_tdstDynamicsBaseBlock.m_ucNbFrame = 1;

    if ((p_stDynamic->m_tdstDynamicsBaseBlock.ulEndFlags & 0x2) ? 1 : 0)
    {
        p_stDynamic->m_tdstDynamicsAdvancedBlock.m_xStreamFactor = 1.0f;
    }

    if ((p_stDynamic->m_tdstDynamicsBaseBlock.ulEndFlags & 0x4) ? 1 : 0)
    {
        p_stDynamic->m_tdstDynamicsComplexBlock.m_hPlatform = NULL;
    }

    memset(&g_stReport, 0, 0x274);
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
/* PS2 MTH scalar helpers: abs.s, sqrt.s and the R5900 accumulator ops have
   no C form under the baseline. */
inline float MTH_xAbs(float _xValue)
{
    float xResult;
    asm { abs.s xResult, _xValue }
    return xResult;
}

inline float MTH_xSqrt(float _xValue)
{
    float xResult;
    asm { sqrt.s xResult, _xValue }
    return xResult;
}

inline float MTH3D_xSqrVector(MTH3D_tdstVector_* _p_stV)
{
    float xX, xY, xZ, xResult;
    xX = _p_stV->xX; xY = _p_stV->xY; xZ = _p_stV->xZ;
    asm { mula.s xX, xX }
    asm { madda.s xY, xY }
    asm { madd.s xResult, xZ, xZ }
    return xResult;
}

inline float MTH3D_xDotProductVector(MTH3D_tdstVector_* _p_stA, MTH3D_tdstVector_* _p_stB)
{
    float xAX, xBX, xAY, xBY, xAZ, xBZ, xResult;
    xBX = _p_stB->xX; xAX = _p_stA->xX; xBY = _p_stB->xY; xAY = _p_stA->xY; xBZ = _p_stB->xZ; xAZ = _p_stA->xZ;
    asm { mula.s xAX, xBX }
    asm { madda.s xAY, xBY }
    asm { madd.s xResult, xAZ, xBZ }
    return xResult;
}

float acosf(float x);

MTH_stRotation* MTH_p_stRotationComputeRotationWith2Vectors(MTH_stRotation* _p_stResult, MTH3D_tdstVector_* _p_stSrcUnitVector, MTH3D_tdstVector_* _p_stImaUnitVector)
{
    float xNorm;
    MTH3D_tdstVector_* p_stAxis;

    p_stAxis = &_p_stResult->m_stAxis;

    p_stAxis->xX = _p_stSrcUnitVector->xY * _p_stImaUnitVector->xZ - _p_stSrcUnitVector->xZ * _p_stImaUnitVector->xY;
    p_stAxis->xY = _p_stSrcUnitVector->xZ * _p_stImaUnitVector->xX - _p_stSrcUnitVector->xX * _p_stImaUnitVector->xZ;
    p_stAxis->xZ = _p_stSrcUnitVector->xX * _p_stImaUnitVector->xY - _p_stSrcUnitVector->xY * _p_stImaUnitVector->xX;

    if (MTH_xAbs(p_stAxis->xX) < 1e-5f && MTH_xAbs(p_stAxis->xY) < 1e-5f && MTH_xAbs(p_stAxis->xZ) < 1e-5f)
    {
        if (MTH_xAbs(_p_stSrcUnitVector->xX - _p_stImaUnitVector->xX) < 1e-5f && MTH_xAbs(_p_stSrcUnitVector->xY - _p_stImaUnitVector->xY) < 1e-5f && MTH_xAbs(_p_stSrcUnitVector->xZ - _p_stImaUnitVector->xZ) < 1e-5f)
        {
            _p_stResult->m_xAngle = 0.0f; p_stAxis->xX = 0.0f; p_stAxis->xY = 0.0f; p_stAxis->xZ = 0.0f;
            return _p_stResult;
        }
        _p_stResult->m_xAngle = 3.1415927f;
        return _p_stResult;
    }

    xNorm = MTH_xSqrt(MTH3D_xSqrVector(p_stAxis)); if (xNorm != 0.0f) { xNorm = 1.0f / xNorm; p_stAxis->xX = xNorm * p_stAxis->xX; p_stAxis->xY = xNorm * p_stAxis->xY; p_stAxis->xZ = xNorm * p_stAxis->xZ; }

    xNorm = MTH3D_xDotProductVector(_p_stSrcUnitVector, _p_stImaUnitVector);
    if (xNorm <= -1.0f)
    {
        _p_stResult->m_xAngle = 3.1415927f;
        return _p_stResult;
    }
    if (xNorm >= 1.0f)
    {
        _p_stResult->m_xAngle = 0.0f; p_stAxis->xX = 0.0f; p_stAxis->xY = 0.0f; p_stAxis->xZ = 0.0f;
        return _p_stResult;
    }

    _p_stResult->m_xAngle = acosf(xNorm);

    return _p_stResult;
}
