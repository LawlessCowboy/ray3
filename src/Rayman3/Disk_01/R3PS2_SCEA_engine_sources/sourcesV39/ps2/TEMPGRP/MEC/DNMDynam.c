/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\MEC\DNMDynam.c */
/* Language: C */
/* Compiler: MW MIPS C Compiler */

#include <stddef.h>

/* Recovered aggregate layouts from MWCC debug type records. */
typedef struct stMACDPID stMACDPID;
typedef struct DNM_stDynamics DNM_stDynamics;
typedef struct anon_0 anon_0;
typedef struct anon_1 anon_1;
typedef struct MTH_stMove MTH_stMove;
typedef struct DNM_stObstacle DNM_stObstacle;
typedef struct GEO_tdstEdge_ GEO_tdstEdge_;
typedef struct DNM_stReport DNM_stReport;
typedef struct MTH_stRotation MTH_stRotation;

struct stMACDPID {
    float m_xData0; /* +0x0 */
    /* aggregate */ int m_stData1; /* +0x4 */
    /* aggregate */ int m_stData2; /* +0x10 */
    /* aggregate */ int m_stData3; /* +0x1c */
    float m_xData3; /* +0x28 */
    float m_xData4; /* +0x2c */
    float m_xData5; /* +0x30 */
    anon_0 m_stData6; /* +0x34 */
    anon_1 m_stData7; /* +0x44 */
    char m_cData8; /* +0x54 */
    unsigned short m_uwData9; /* +0x56 */
    /* aggregate */ int m_stData10; /* +0x58 */
    float m_xData11; /* +0x64 */
    /* aggregate */ int m_stData12; /* +0x68 */
    float m_xData13; /* +0x74 */
    unsigned char m_bData14; /* +0x78 */
};

struct DNM_stDynamics {
    /* aggregate */ int m_tdstDynamicsBaseBlock; /* +0x0 */
    /* aggregate */ int m_tdstDynamicsAdvancedBlock; /* +0x170 */
    /* aggregate */ int m_tdstDynamicsComplexBlock; /* +0x200 */
};

struct anon_0 {
    float m_xAngle; /* +0x0 */
    /* aggregate */ int m_stAxis; /* +0x4 */
};

struct anon_1 {
    float m_xAngle; /* +0x0 */
    /* aggregate */ int m_stAxis; /* +0x4 */
};

struct MTH_stMove {
    /* aggregate */ int m_stLinear; /* +0x0 */
    MTH_stRotation m_stAngular; /* +0xc */
};

struct DNM_stObstacle {
    float m_xRate; /* +0x0 */
    /* aggregate */ int m_stNorm; /* +0x4 */
    /* aggregate */ int m_stContact; /* +0x10 */
    int hMyMaterial; /* +0x1c */
    int hCollidedMaterial; /* +0x20 */
    int mp_stSupObj; /* +0x24 */
};

struct GEO_tdstEdge_ {
    short xPoints[2]; /* +0x0 */
    /* array */ int st_VectorPoints[2]; /* +0x4 */
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

struct MTH_stRotation {
    float m_xAngle; /* +0x0 */
    /* aggregate */ int m_stAxis; /* +0x4 */
};

/* aggregate */ int g_stReport;

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\MEC\DNMDynam.c lines 72–100 */
/* addr: 0x00301b90  size: 776 bytes */
float CAM_fn_xComputeHorizontalAngle(/* function pointer */ int _p_stOrgVector, /* function pointer */ int _p_stDestVector, /* function pointer */ int _p_stAxisZ)
{
    float xNorm;
    float xNorm;
    float xAngle;
    MTH_stRotation stRotation;
    /* aggregate */ int stAxisZ;
    /* aggregate */ int stVect2;
    /* aggregate */ int stVect1;
    /* line map: */
    /*   line 72 @ +0x000 */
    /*   line 73 @ +0x000 */
    /*   line 74 @ +0x000 */
    /*   line 74 @ +0x000 */
    /*   line 80 @ +0x000 */
    /*   line 83 @ +0x000 */
    /*   line 85 @ +0x000 */
    /*   line 88 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\MEC\DNMDynam.c lines 415–430 */
/* addr: 0x00301ea0  size: 236 bytes */
void DNM_fn_vDynamicsCopyClone(DNM_stDynamics* _p_stDst, DNM_stDynamics* _p_stSrc, DNM_stReport* p_stReport)
{
    /* line map: */
    /*   line 415 @ +0x000 */
    /*   line 415 @ +0x000 */
    /*   line 422 @ +0x000 */
    /*   line 424 @ +0x000 */
    /*   line 428 @ +0x000 */
    /*   line 430 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\MEC\DNMDynam.c lines 403–406 */
/* addr: 0x00301f90  size: 68 bytes */
void DNM_fn_vChangeIdCard(DNM_stDynamics* _p_stDynamics, void* _hNewIdCard)
{
    /* line map: */
    /*   line 403 @ +0x000 */
    /*   line 403 @ +0x000 */
    /*   line 406 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\MEC\DNMDynam.c lines 315–362 */
/* addr: 0x00301fe0  size: 1316 bytes */
void DNM_fn_vInitDynamic(DNM_stDynamics* p_stDynamic, void* hIdCard, /* function pointer */ int p_IdCard)
{
    /* line map: */
    /*   line 315 @ +0x000 */
    /*   line 317 @ +0x000 */
    /*   line 319 @ +0x000 */
    /*   line 321 @ +0x000 */
    /*   line 323 @ +0x000 */
    /*   line 325 @ +0x000 */
    /*   line 327 @ +0x000 */
    /*   line 329 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* addr: 0x00302510  size: 8 bytes */
void DNM_fn_vInitBaseMechanic(DNM_stDynamics* p_stDynamic)
{
    /* TODO: decompile from asm/... */
}
