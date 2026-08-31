/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\MEC\MECOpt.c */
/* Language: C */
/* Compiler: MW MIPS C Compiler */

#include <stddef.h>

/* Recovered aggregate layouts from MWCC debug type records. */
typedef struct DNM_stDynamics DNM_stDynamics;
typedef struct DNM_stReport DNM_stReport;
typedef struct MTH_stRotation MTH_stRotation;
typedef struct stMACDPID stMACDPID;
typedef struct MTH_stMove MTH_stMove;
typedef struct anon_0 anon_0;
typedef struct anon_1 anon_1;
typedef struct GEO_tdstEdge_ GEO_tdstEdge_;
typedef struct DNM_stObstacle DNM_stObstacle;

struct DNM_stDynamics {
    /* aggregate */ int m_tdstDynamicsBaseBlock; /* +0x0 */
    /* aggregate */ int m_tdstDynamicsAdvancedBlock; /* +0x170 */
    /* aggregate */ int m_tdstDynamicsComplexBlock; /* +0x200 */
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

struct MTH_stMove {
    /* aggregate */ int m_stLinear; /* +0x0 */
    MTH_stRotation m_stAngular; /* +0xc */
};

struct anon_0 {
    float m_xAngle; /* +0x0 */
    /* aggregate */ int m_stAxis; /* +0x4 */
};

struct anon_1 {
    float m_xAngle; /* +0x0 */
    /* aggregate */ int m_stAxis; /* +0x4 */
};

struct GEO_tdstEdge_ {
    short xPoints[2]; /* +0x0 */
    /* array */ int st_VectorPoints[2]; /* +0x4 */
};

struct DNM_stObstacle {
    float m_xRate; /* +0x0 */
    /* aggregate */ int m_stNorm; /* +0x4 */
    /* aggregate */ int m_stContact; /* +0x10 */
    int hMyMaterial; /* +0x1c */
    int hCollidedMaterial; /* +0x20 */
    int mp_stSupObj; /* +0x24 */
};

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\MEC\MECOpt.c lines 58–234 */
/* addr: 0x0030e970  size: 1640 bytes */
unsigned char MEC_fn_bCollision(int* p_lObstacle, /* function pointer */ int p_stObstacle, DNM_stDynamics* p_stDynamic, /* function pointer */ int p_stSupObj, /* function pointer */ int p_stStartPosition, /* function pointer */ int p_stEndPosition, unsigned char bBackFace, /* function pointer */ int p_stTmpObstacle)
{
    unsigned char bCollisionOk;
    /* aggregate */ int stTmpHandVector;
    int lNbHandObstacle;
    unsigned char bWaterFace;
    unsigned char bObstacleOk;
    /* aggregate */ int stY;
    /* aggregate */ int stMove;
    /* aggregate */ int stHandObstacle;
    int lCounter;
    /* line map: */
    /*   line 58 @ +0x000 */
    /*   line 60 @ +0x000 */
    /*   line 67 @ +0x000 */
    /*   line 73 @ +0x000 */
    /*   line 73 @ +0x000 */
    /*   line 77 @ +0x000 */
    /*   line 81 @ +0x000 */
    /*   line 84 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\MEC\MECOpt.c lines 535–572 */
/* addr: 0x0030efe0  size: 828 bytes */
void MEC_fn_vAdjustScaleData(DNM_stDynamics* p_stDynamic, /* function pointer */ int hMatrix, /* function pointer */ int hInvMatrix, /* function pointer */ int hCurrentMatrix, /* function pointer */ int hPreviousMatrix)
{
    /* aggregate */ int stTranslation;
    /* line map: */
    /*   line 539 @ +0x000 */
    /*   line 535 @ +0x000 */
    /*   line 539 @ +0x000 */
    /*   line 546 @ +0x000 */
    /*   line 546 @ +0x000 */
    /*   line 544 @ +0x000 */
    /*   line 547 @ +0x000 */
    /*   line 550 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\MEC\MECOpt.c lines 493–522 */
/* addr: 0x0030f320  size: 776 bytes */
void MEC_fn_vSpeedLimit(DNM_stDynamics* p_stDynamic, float xDT, /* function pointer */ int hMatrix, /* function pointer */ int hInvMatrix, /* function pointer */ int hCurrentMatrix)
{
    /* aggregate */ int stMaxMove;
    /* aggregate */ int stCorrectMove;
    /* aggregate */ int stMove;
    /* line map: */
    /*   line 502 @ +0x000 */
    /*   line 499 @ +0x000 */
    /*   line 499 @ +0x000 */
    /*   line 497 @ +0x000 */
    /*   line 493 @ +0x000 */
    /*   line 502 @ +0x000 */
    /*   line 505 @ +0x000 */
    /*   line 505 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\MEC\MECOpt.c lines 431–472 */
/* addr: 0x0030f630  size: 372 bytes */
void MEC_fn_vPositionLimit(DNM_stDynamics* p_stDynamic, /* function pointer */ int p_stSafePreviousPosition, /* function pointer */ int hCurrentMatrix)
{
    float xZ;
    float xY;
    float xX;
    /* line map: */
    /*   line 431 @ +0x000 */
    /*   line 433 @ +0x000 */
    /*   line 440 @ +0x000 */
    /*   line 442 @ +0x000 */
    /*   line 446 @ +0x000 */
    /*   line 453 @ +0x000 */
    /*   line 455 @ +0x000 */
    /*   line 459 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\MEC\MECOpt.c lines 419–419 */
/* addr: 0x0030f7b0  size: 52 bytes */
void MEC_fn_vAdditionnalTranslation(DNM_stDynamics* p_stDynamic, /* function pointer */ int p_stAdditionnalTranslation)
{
    /* line map: */
    /*   line 419 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* addr: 0x0030f7f0  size: 16 bytes */
void MEC_fn_vImposeRotation(DNM_stDynamics* p_stDynamic)
{
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\MEC\MECOpt.c lines 389–393 */
/* addr: 0x0030f800  size: 96 bytes */
void MEC_fn_vAddStream(DNM_stDynamics* p_stDynamic, float xDT, unsigned char bSlide)
{
    /* aggregate */ int stTranslation;
    /* line map: */
    /*   line 389 @ +0x000 */
    /*   line 393 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\MEC\MECOpt.c lines 350–373 */
/* addr: 0x0030f860  size: 676 bytes */
void MEC_fn_vProposeSpeed(DNM_stDynamics* p_stDynamic, float xDT, /* function pointer */ int hMatrix, /* function pointer */ int hInvMatrix, /* function pointer */ int pstProposeSpeed, /* function pointer */ int hCurrentMatrix)
{
    /* aggregate */ int stTranslation;
    /* line map: */
    /*   line 360 @ +0x000 */
    /*   line 358 @ +0x000 */
    /*   line 358 @ +0x000 */
    /*   line 360 @ +0x000 */
    /*   line 360 @ +0x000 */
    /*   line 350 @ +0x000 */
    /*   line 356 @ +0x000 */
    /*   line 354 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\MEC\MECOpt.c lines 309–333 */
/* addr: 0x0030fb10  size: 704 bytes */
void MEC_fn_vAddSpeed(DNM_stDynamics* p_stDynamic, float xDT, /* function pointer */ int hMatrix, /* function pointer */ int hInvMatrix, /* function pointer */ int pstAddSpeed, /* function pointer */ int hCurrentMatrix)
{
    /* aggregate */ int stTranslation;
    /* line map: */
    /*   line 320 @ +0x000 */
    /*   line 317 @ +0x000 */
    /*   line 317 @ +0x000 */
    /*   line 320 @ +0x000 */
    /*   line 320 @ +0x000 */
    /*   line 309 @ +0x000 */
    /*   line 315 @ +0x000 */
    /*   line 313 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\MEC\MECOpt.c lines 268–291 */
/* addr: 0x0030fdd0  size: 672 bytes */
void MEC_fn_vImposeSpeed(DNM_stDynamics* p_stDynamic, float xDT, /* function pointer */ int hMatrix, /* function pointer */ int hInvMatrix, /* function pointer */ int pstImposeSpeed, /* function pointer */ int hCurrentMatrix)
{
    /* aggregate */ int stTranslation;
    /* line map: */
    /*   line 279 @ +0x000 */
    /*   line 276 @ +0x000 */
    /*   line 279 @ +0x000 */
    /*   line 276 @ +0x000 */
    /*   line 268 @ +0x000 */
    /*   line 274 @ +0x000 */
    /*   line 276 @ +0x000 */
    /*   line 276 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\MEC\MECOpt.c lines 235–249 */
/* addr: 0x00310070  size: 284 bytes */
void MEC_fn_vCancelTilt(DNM_stDynamics* p_stDynamic, /* function pointer */ int hCurrentMatrix)
{
    float xAngle;
    /* aggregate */ int stCurrentK;
    /* aggregate */ int stVector;
    /* aggregate */ int stInitialTranslation;
    /* line map: */
    /*   line 236 @ +0x000 */
    /*   line 235 @ +0x000 */
    /*   line 238 @ +0x000 */
    /*   line 241 @ +0x000 */
    /*   line 241 @ +0x000 */
    /*   line 244 @ +0x000 */
    /*   line 244 @ +0x000 */
    /*   line 244 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\MEC\MECOpt.c lines 184–220 */
/* addr: 0x00310190  size: 608 bytes */
void MEC_fn_vAddTiltSpeed(DNM_stDynamics* p_stDynamic, /* function pointer */ int hCurrentMatrix)
{
    float xInertia;
    float xInitTiltAngle;
    float xTiltAngle;
    float xAngle;
    /* aggregate */ int stOriginTranslation;
    /* aggregate */ int stVector;
    /* aggregate */ int stInitialTranslation;
    /* aggregate */ int stCurrentK;
    /* aggregate */ int stCurrentJ;
    /* aggregate */ int stPreviousI;
    /* line map: */
    /*   line 189 @ +0x000 */
    /*   line 184 @ +0x000 */
    /*   line 189 @ +0x000 */
    /*   line 192 @ +0x000 */
    /*   line 195 @ +0x000 */
    /*   line 195 @ +0x000 */
    /*   line 195 @ +0x000 */
    /*   line 195 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\MEC\MECOpt.c lines 137–159 */
/* addr: 0x003103f0  size: 332 bytes */
void MEC_fn_vInertia(DNM_stDynamics* p_stDynamic, float xDT, /* function pointer */ int hMatrix, /* function pointer */ int hInvMatrix)
{
    float xSildeFactorZ;
    float xSildeFactorY;
    float xSildeFactorX;
    float xSlide;
    float xInertiaZ;
    float xInertiaY;
    float xInertiaX;
    /* line map: */
    /*   line 137 @ +0x000 */
    /*   line 137 @ +0x000 */
    /*   line 140 @ +0x000 */
    /*   line 142 @ +0x000 */
    /*   line 147 @ +0x000 */
    /*   line 153 @ +0x000 */
    /*   line 156 @ +0x000 */
    /*   line 159 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\MEC\MECOpt.c lines 111–124 */
/* addr: 0x00310540  size: 96 bytes */
void MEC_fn_vGravitySpeed(DNM_stDynamics* p_stDynamic, float xDT, /* function pointer */ int hCurrentMatrix)
{
    float xZ;
    float xGravity;
    /* line map: */
    /*   line 111 @ +0x000 */
    /*   line 111 @ +0x000 */
    /*   line 111 @ +0x000 */
    /*   line 112 @ +0x000 */
    /*   line 113 @ +0x000 */
    /*   line 124 @ +0x000 */
    /* TODO: decompile from asm/... */
}
