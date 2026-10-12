/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\MEC\DNMRepor.c */
/* Language: C */
/* Compiler: MW MIPS C Compiler */

#include <stddef.h>
#include "r3/HIE.h"

/* Recovered aggregate layouts from MWCC debug type records. */
typedef struct DNM_stObstacle DNM_stObstacle;
typedef struct GMT_tdstGameMaterial_ GMT_tdstGameMaterial_;
typedef struct DNM_stMecMatCharacteristics DNM_stMecMatCharacteristics;
typedef struct DNM_stMecObstacle DNM_stMecObstacle;
typedef struct DNM_stReport DNM_stReport;
typedef struct GMT_tdstCollideMaterial_ GMT_tdstCollideMaterial_;
typedef struct DNM_stMecReport DNM_stMecReport;

typedef enum anon_enum_00bb199c {
    DNM_ObsType_Nothing = 0,
    DNM_ObsType_Scenery = 1,
    DNM_ObsType_Mobile = 2,
    DNM_ObsType_DoubleEdge = 4,
    DNM_ObsType_MobileWall = 9,
    DNM_Dummy_For_Align = 2147483647,
} anon_enum_00bb199c;

struct DNM_stObstacle {
    float m_xRate; /* +0x0 */
    MTH3D_tdstVector_ m_stNorm; /* +0x4 */
    MTH3D_tdstVector_ m_stContact; /* +0x10 */
    GMT_tdstGameMaterial_* hMyMaterial; /* +0x1c */
    GMT_tdstGameMaterial_* hCollidedMaterial; /* +0x20 */
    HIE_tdstSuperObject_* mp_stSupObj; /* +0x24 */
};

struct GMT_tdstGameMaterial_ {
    int hSoundMaterial; /* +0x0 */
    GMT_tdstCollideMaterial_* hCollideMaterial; /* +0x4 */
};

struct DNM_stMecMatCharacteristics {
    float m_xSlide; /* +0x0 */
    float m_xRebound; /* +0x4 */
};

struct DNM_stMecObstacle {
    float m_xRate; /* +0x0 */
    MTH3D_tdstVector_ m_stNorm; /* +0x4 */
    MTH3D_tdstVector_ m_stContact; /* +0x10 */
    GMT_tdstGameMaterial_* hMyMaterial; /* +0x1c */
    GMT_tdstGameMaterial_* hCollidedMaterial; /* +0x20 */
    HIE_tdstSuperObject_* mp_stSupObj; /* +0x24 */
    anon_enum_00bb199c m_eType; /* +0x28 */
    short m_xMyEntity; /* +0x2c */
    short m_xCollidedEntity; /* +0x2e */
    MTH3D_tdstVector_ m_stTranslation; /* +0x30 */
    MTH3D_tdstVector_ m_stZoneMove; /* +0x3c */
    MTH3D_tdstVector_ m_stZonePosition; /* +0x48 */
    float m_xZoneRadius; /* +0x54 */
    DNM_stMecMatCharacteristics m_stProperties; /* +0x58 */
    DNM_stMecMatCharacteristics m_stMyProperties; /* +0x60 */
};

struct DNM_stReport {
    unsigned int m_ulPrevSurfaceState; /* +0x0 */
    unsigned int m_ulCurrSurfaceState; /* +0x4 */
    DNM_stObstacle m_stObstacle; /* +0x8 */
    DNM_stObstacle m_stGround; /* +0x30 */
    DNM_stObstacle m_stWall; /* +0x58 */
    DNM_stObstacle m_stCharacter; /* +0x80 */
    DNM_stObstacle m_stWater; /* +0xa8 */
    DNM_stObstacle m_stCeil; /* +0xd0 */
    MTH_stMove m_stAbsolutePrevSpeed; /* +0xf8 */
    MTH_stMove m_stAbsoluteCurrSpeed; /* +0x114 */
    MTH_stMove m_stAbsolutePrevPosition; /* +0x130 */
    MTH_stMove m_stAbsoluteCurrPosition; /* +0x14c */
    char m_cBitField; /* +0x168 */
};

struct GMT_tdstCollideMaterial_ {
    short wTypeOfZone; /* +0x0 */
    unsigned short xIdentifier; /* +0x2 */
    MTH3D_tdstVector_ stDirection; /* +0x4 */
    float xCoeff; /* +0x10 */
    unsigned short wTypeForAi; /* +0x14 */
};

struct DNM_stMecReport {
    unsigned int m_ulCurrSurfaceState; /* +0x0 */
    DNM_stMecObstacle m_stObstacle; /* +0x4 */
    DNM_stMecObstacle m_stGround; /* +0x6c */
    DNM_stMecObstacle m_stWall; /* +0xd4 */
    DNM_stMecObstacle m_stCharacter; /* +0x13c */
    DNM_stMecObstacle m_stWater; /* +0x1a4 */
    DNM_stMecObstacle m_stCeil; /* +0x20c */
};

DNM_stMecReport g_stReport;

/* Recovered PS2 MTH dot product: the R5900 accumulator ops have no C form
   under the baseline. */
#define MTH_DOT3_TO(_result, _ax, _bx, _ay, _by, _az, _bz) \
    asm { mula.s _ax, _bx }                                 \
    asm { madda.s _ay, _by }                                \
    asm { madd.s _result, _az, _bz }

void MTH_fn_vVectorPlaneProjection(MTH3D_tdstVector_* _p_stResult, MTH3D_tdstVector_* _p_stSource, MTH3D_tdstVector_* _p_stPlaneNorm, MTH3D_tdstVector_* _p_stProjDirection)
{
    float xDotProduct;
    float xAlpha;
    MTH3D_tdstVector_* p_stTmp;
    MTH3D_tdstVector_ a_stVector[1];

    p_stTmp = a_stVector;
    if (_p_stProjDirection != _p_stPlaneNorm)
    {
        float xAX, xBX, xAY, xBY, xAZ, xBZ;
        xBX = _p_stPlaneNorm->xX; xAX = _p_stProjDirection->xX; xBY = _p_stPlaneNorm->xY; xAY = _p_stProjDirection->xY; xBZ = _p_stPlaneNorm->xZ; xAZ = _p_stProjDirection->xZ; MTH_DOT3_TO(xDotProduct, xAX, xBX, xAY, xBY, xAZ, xBZ)
    }
    else
        xDotProduct = 1.0f;

    if (xDotProduct != 0.0f)
    {
        {
            float xAX, xBX, xAY, xBY, xAZ, xBZ;
            float xDot;
            xBX = _p_stPlaneNorm->xX; xAX = _p_stSource->xX; xBY = _p_stPlaneNorm->xY; xAY = _p_stSource->xY; xBZ = _p_stPlaneNorm->xZ; xAZ = _p_stSource->xZ; MTH_DOT3_TO(xDot, xAX, xBX, xAY, xBY, xAZ, xBZ) xAlpha = -xDot;
        }
        xAlpha /= xDotProduct;

        *(int*)&p_stTmp->xX = *(int*)&_p_stProjDirection->xX; *(int*)&p_stTmp->xY = *(int*)&_p_stProjDirection->xY; *(int*)&p_stTmp->xZ = *(int*)&_p_stProjDirection->xZ;
        p_stTmp->xX = xAlpha * p_stTmp->xX; p_stTmp->xY = xAlpha * p_stTmp->xY; p_stTmp->xZ = xAlpha * p_stTmp->xZ;

        if (_p_stResult != _p_stSource)
        {
            *(int*)&_p_stResult->xX = *(int*)&_p_stSource->xX; *(int*)&_p_stResult->xY = *(int*)&_p_stSource->xY; *(int*)&_p_stResult->xZ = *(int*)&_p_stSource->xZ;
        }
        _p_stResult->xX = _p_stResult->xX + p_stTmp->xX; _p_stResult->xY = _p_stResult->xY + p_stTmp->xY; _p_stResult->xZ = _p_stResult->xZ + p_stTmp->xZ;
    }
}
