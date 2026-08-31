/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\MEC\DNMMTH.c */
/* Language: C */
/* Compiler: MW MIPS C Compiler */

#include <stddef.h>

/* Recovered aggregate layouts from MWCC debug type records. */
typedef struct MTH_stRotation MTH_stRotation;

struct MTH_stRotation {
    float m_xAngle; /* +0x0 */
    /* aggregate */ int m_stAxis; /* +0x4 */
};

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\MEC\DNMMTH.c lines 242–299 */
/* addr: 0x00302520  size: 340 bytes */
void DNM_fn_vDynamicsInitDefault(DNM_stDynamics* p_stDynamic, DNM_stReport* p_stReport)
{
    unsigned int ulEndFlags;
    /* line map: */
    /*   line 242 @ +0x000 */
    /*   line 242 @ +0x000 */
    /*   line 242 @ +0x000 */
    /*   line 242 @ +0x000 */
    /*   line 246 @ +0x000 */
    /*   line 246 @ +0x000 */
    /*   line 255 @ +0x000 */
    /*   line 258 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\MEC\DNMMTH.c lines 181–198 */
/* addr: 0x00302680  size: 636 bytes */
void MTH_p_stRotationMulVector(MTH_stRotation* _p_stRotation, /* function pointer */ int _p_stSource, /* function pointer */ int _p_stResult, /* function pointer */ int p_stAxis)
{
    /* aggregate */ int VectTmp;
    float xAngle;
    float xValue;
    float xSin;
    float xCos;
    /* aggregate */ int stTmp1;
    /* aggregate */ int stTmp0;
    /* line map: */
    /*   line 181 @ +0x000 */
    /*   line 183 @ +0x000 */
    /*   line 186 @ +0x000 */
    /*   line 189 @ +0x000 */
    /*   line 190 @ +0x000 */
    /*   line 190 @ +0x000 */
    /*   line 190 @ +0x000 */
    /*   line 190 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\MEC\DNMMTH.c lines 91–150 */
/* addr: 0x00302900  size: 576 bytes */
void MTH_p_stRotationComputeRotationWith2Vectors(MTH_stRotation* _p_stResult, /* function pointer */ int _p_stSrcUnitVector, /* function pointer */ int _p_stImaUnitVector, /* function pointer */ int p_stAxis)
{
    float xNorm;
    /* line map: */
    /*   line 91 @ +0x000 */
    /*   line 91 @ +0x000 */
    /*   line 91 @ +0x000 */
    /*   line 117 @ +0x000 */
    /*   line 125 @ +0x000 */
    /*   line 130 @ +0x000 */
    /*   line 135 @ +0x000 */
    /*   line 138 @ +0x000 */
    /* TODO: decompile from asm/... */
}
