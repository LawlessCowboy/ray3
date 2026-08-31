/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\MultiDRV\Src\WatrPlan.c */
/* Language: C */
/* Compiler: MW MIPS C Compiler */

#include <stddef.h>

/* Recovered aggregate layouts from MWCC debug type records. */
typedef struct GEO_tdstColor_ GEO_tdstColor_;

struct GEO_tdstColor_ {
    float xR; /* +0x0 */
    float xG; /* +0x4 */
    float xB; /* +0x8 */
    float xA; /* +0xc */
};

static float GLI_gsWaterPlaneRefraction;
static float GLI_gsWaterPlaneDepthSizeOf2DMove;
static float GLI_gsWaterPlaneDepthStartOf2DMove;
float GLI_gsfWaterPlaneFogStart;
float g_xSinusSizeMulx;
float g_xSinusSizeMuly;
float g_xSinusSizeMulz;
float gs_xFactor;
float a3_lSinRLIAmp[3];
float a3_lSinRLIBase[3];
char g_cSinusEffectFlagSaved;
char g_cSinusEffectStateSaved;
float xSinusEffectDepthStartSaved;
/* aggregate */ int stSinEffectVectorSaved;
/* aggregate */ int stSinEffectAmpSaved;
int a3_lSinEffectFreqRLISaved[3];
float a3_xSinEffectBaseRLISaved[3];
int a3_lSinEffectFreqMeshSaved[3];
float a3_xSinEffectBaseMeshSaved[3];
char g_cSinusEffectFlag;
float xSinusEffectDepthStart;
/* aggregate */ int stSinEffectVector;
/* aggregate */ int stSinEffectAmp;
int a3_lSinEffectFreqRLI[3];
float a3_xSinEffectBaseRLI[3];
int a3_lSinEffectFreqMesh[3];
float a3_xSinEffectBaseMesh[3];
GEO_tdstColor_ GLI_gsfWaterPlaneFogColor;
float fWaterPlaneDistance;
/* aggregate */ int stWaterPlaneNormale;
int bWaterPlaneState;
float GLI_fSinEffectBase;
float GLI_fF2pow24;
int gs_lYBase;
int gs_lXBase;
float a64_fSinTable[512];
char g_cSinusEffectState;

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\MultiDRV\Src\WatrPlan.c lines 124–152 */
/* addr: 0x002ab670  size: 484 bytes */
void GLI_p_stCreateTMPVisualSet(int lNbLOD, /* function pointer */ int ppGeo, /* function pointer */ int p_stLocalVS)
{
    short xLodCounter;
    /* line map: */
    /*   line 124 @ +0x000 */
    /*   line 124 @ +0x000 */
    /*   line 126 @ +0x000 */
    /*   line 130 @ +0x000 */
    /*   line 134 @ +0x000 */
    /*   line 137 @ +0x000 */
    /*   line 140 @ +0x000 */
    /*   line 144 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\MultiDRV\Src\WatrPlan.c lines 1174–1184 */
/* addr: 0x002ab860  size: 284 bytes */
void GLI_vRestoreSinusContext(void)
{
    /* line map: */
    /*   line 1178 @ +0x000 */
    /*   line 1178 @ +0x000 */
    /*   line 1178 @ +0x000 */
    /*   line 1174 @ +0x000 */
    /*   line 1176 @ +0x000 */
    /*   line 1174 @ +0x000 */
    /*   line 1176 @ +0x000 */
    /*   line 1179 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\MultiDRV\Src\WatrPlan.c lines 1160–1169 */
/* addr: 0x002ab980  size: 284 bytes */
void GLI_vSaveSinusContext(void)
{
    /* line map: */
    /*   line 1164 @ +0x000 */
    /*   line 1164 @ +0x000 */
    /*   line 1164 @ +0x000 */
    /*   line 1160 @ +0x000 */
    /*   line 1162 @ +0x000 */
    /*   line 1160 @ +0x000 */
    /*   line 1162 @ +0x000 */
    /*   line 1165 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* addr: 0x002abaa0  size: 8 bytes */
void GLI_vSetSinEffetBase(float xBase)
{
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\MultiDRV\Src\WatrPlan.c lines 1148–1150 */
/* addr: 0x002abab0  size: 28 bytes */
void GLI_vSetSinusEffectOnRLIBase(float xRed, float xGreen, float xBlue)
{
    /* line map: */
    /*   line 1148 @ +0x000 */
    /*   line 1150 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\MultiDRV\Src\WatrPlan.c lines 1142–1144 */
/* addr: 0x002abad0  size: 28 bytes */
void GLI_vSetSinusEffectOnRLIAmp(float xRed, float xGreen, float xBlue)
{
    /* line map: */
    /*   line 1142 @ +0x000 */
    /*   line 1144 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\MultiDRV\Src\WatrPlan.c lines 1109–1137 */
/* addr: 0x002abaf0  size: 268 bytes */
void GLI_vSinusEffetOn3DVertex(/* function pointer */ int p_stVertex3D)
{
    float fFreq;
    float xZ;
    float xY;
    float xX;
    int lVertice;
    /* line map: */
    /*   line 1125 @ +0x000 */
    /*   line 1109 @ +0x000 */
    /*   line 1125 @ +0x000 */
    /*   line 1121 @ +0x000 */
    /*   line 1124 @ +0x000 */
    /*   line 1124 @ +0x000 */
    /*   line 1124 @ +0x000 */
    /*   line 1127 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\MultiDRV\Src\WatrPlan.c lines 1058–1068 */
/* addr: 0x002abc00  size: 336 bytes */
void GLI_vUpdateEffectData(unsigned int _ulDeltaT)
{
    float xFactor;
    /* line map: */
    /*   line 1058 @ +0x000 */
    /*   line 1062 @ +0x000 */
    /*   line 1062 @ +0x000 */
    /*   line 1062 @ +0x000 */
    /*   line 1064 @ +0x000 */
    /*   line 1064 @ +0x000 */
    /*   line 1064 @ +0x000 */
    /*   line 1067 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\MultiDRV\Src\WatrPlan.c lines 983–983 */
/* addr: 0x002abd50  size: 40 bytes */
void GLI_fn_SinusEffect_vSetAmplitude(/* function pointer */ int _p_stAmpVector)
{
    /* line map: */
    /*   line 983 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\MultiDRV\Src\WatrPlan.c lines 971–973 */
/* addr: 0x002abd80  size: 28 bytes */
void GLI_fn_SinusEffect_vSetFreqRLI(int _lXFreq, int _lYFreq, int _lZFreq)
{
    /* line map: */
    /*   line 971 @ +0x000 */
    /*   line 973 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\MultiDRV\Src\WatrPlan.c lines 964–966 */
/* addr: 0x002abda0  size: 28 bytes */
void GLI_fn_SinusEffect_vSetFreqMesh(int _lXFreq, int _lYFreq, int _lZFreq)
{
    /* line map: */
    /*   line 964 @ +0x000 */
    /*   line 966 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\MultiDRV\Src\WatrPlan.c lines 953–953 */
/* addr: 0x002abdc0  size: 12 bytes */
char GLI_fn_SinusEffect_cIsSecondViewportAffected(void)
{
    /* line map: */
    /*   line 953 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* addr: 0x002abdd0  size: 8 bytes */
char GLI_fn_SinusEffect_vGetFlag(void)
{
    /* TODO: decompile from asm/... */
}

/* addr: 0x002abde0  size: 8 bytes */
void GLI_fn_SinusEffect_vSetFlag(char _cFlag)
{
    /* TODO: decompile from asm/... */
}

/* addr: 0x002abdf0  size: 8 bytes */
char GLI_fn_SinusEffect_vGetState(void)
{
    /* TODO: decompile from asm/... */
}

/* addr: 0x002abe00  size: 8 bytes */
void GLI_fn_SinusEffect_vSetState(char _cState)
{
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\MultiDRV\Src\WatrPlan.c lines 906–906 */
/* addr: 0x002abe10  size: 16 bytes */
void GLI_fn_vSetSinusPreMultiplier(float X, float Y, float Z)
{
    /* line map: */
    /*   line 906 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\MultiDRV\Src\WatrPlan.c lines 832–893 */
/* addr: 0x002abe20  size: 456 bytes */
void GLI_vInitWaterplaneModule(void)
{
    int lCounter;
    unsigned char lIsAlreadyInit;
    /* line map: */
    /*   line 832 @ +0x000 */
    /*   line 832 @ +0x000 */
    /*   line 839 @ +0x000 */
    /*   line 839 @ +0x000 */
    /*   line 842 @ +0x000 */
    /*   line 842 @ +0x000 */
    /*   line 842 @ +0x000 */
    /*   line 848 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\MultiDRV\Src\WatrPlan.c lines 385–385 */
/* addr: 0x002abff0  size: 16 bytes */
void GLI_vWaterplaneDisable2DSinus(void)
{
    /* line map: */
    /*   line 385 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\MultiDRV\Src\WatrPlan.c lines 359–359 */
/* addr: 0x002ac000  size: 20 bytes */
void GLI_vSetWaterplaneOff(void)
{
    /* line map: */
    /*   line 359 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\MultiDRV\Src\WatrPlan.c lines 349–349 */
/* addr: 0x002ac020  size: 16 bytes */
void GLI_vSetWaterplaneOn(void)
{
    /* line map: */
    /*   line 349 @ +0x000 */
    /* TODO: decompile from asm/... */
}
