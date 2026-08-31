/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\MEC\DNMRepor.c */
/* Language: C */
/* Compiler: MW MIPS C Compiler */

#include <stddef.h>

/* Recovered aggregate layouts from MWCC debug type records. */
typedef struct MTH_fn_vVectorPlaneProjection MTH_fn_vVectorPlaneProjection;
typedef struct MTH_stRotation MTH_stRotation;
typedef struct DNM_stObstacle DNM_stObstacle;
typedef struct MTH_stMove MTH_stMove;
typedef struct DNM_stReport DNM_stReport;

struct MTH_fn_vVectorPlaneProjection {
    float xDotProduct; /* +0x0 */
};

struct MTH_stRotation {
    float m_xAngle; /* +0x0 */
    /* aggregate */ int m_stAxis; /* +0x4 */
};

struct DNM_stObstacle {
    float m_xRate; /* +0x0 */
    /* aggregate */ int m_stNorm; /* +0x4 */
    /* aggregate */ int m_stContact; /* +0x10 */
    int hMyMaterial; /* +0x1c */
    int hCollidedMaterial; /* +0x20 */
    int mp_stSupObj; /* +0x24 */
};

struct MTH_stMove {
    /* aggregate */ int m_stLinear; /* +0x0 */
    MTH_stRotation m_stAngular; /* +0xc */
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

/* aggregate */ int g_stReport;

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\MEC\DNMRepor.c lines 46–61 */
/* addr: 0x00302b40  size: 272 bytes */
void MTH_fn_vVectorPlaneProjection(/* function pointer */ int _p_stResult, /* function pointer */ int _p_stSource, /* function pointer */ int _p_stPlaneNorm, /* function pointer */ int _p_stProjDirection, /* function pointer */ int p_stTmp)
{
    float xDotProduct;
    float xAlpha;
    /* array */ int a_stVector[1];
    /* line map: */
    /*   line 46 @ +0x000 */
    /*   line 49 @ +0x000 */
    /*   line 53 @ +0x000 */
    /*   line 53 @ +0x000 */
    /*   line 56 @ +0x000 */
    /*   line 59 @ +0x000 */
    /*   line 61 @ +0x000 */
    /* TODO: decompile from asm/... */
}
