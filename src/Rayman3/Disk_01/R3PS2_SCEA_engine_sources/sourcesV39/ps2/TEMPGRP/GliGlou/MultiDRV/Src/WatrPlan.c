/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\MultiDRV\Src\WatrPlan.c */
/* Language: C */
/* Compiler: MW MIPS C Compiler */

#include <stddef.h>

/* Recovered aggregate layouts from MWCC debug type records. */
typedef struct GEO_tdstGeometricObject_ GEO_tdstGeometricObject_;
typedef struct GEO_tdstVisualSet_ GEO_tdstVisualSet_;
typedef struct GEO_tdstColor_ GEO_tdstColor_;
typedef struct MTH3D_tdstVector_ MTH3D_tdstVector_;
typedef union GLI_tdstSinEffectAmp_ GLI_tdstSinEffectAmp_;
typedef union GLI_tdstWaterPlaneColor_ GLI_tdstWaterPlaneColor_;
typedef union GLI_tdstWaterPlaneNormale_ GLI_tdstWaterPlaneNormale_;
typedef union GLI_tdstFloatInt_ GLI_tdstFloatInt_;

struct GEO_tdstColor_ {
    float xR; /* +0x0 */
    float xG; /* +0x4 */
    float xB; /* +0x8 */
    float xA; /* +0xc */
};

struct MTH3D_tdstVector_ {
    float xX; /* +0x0 */
    float xY; /* +0x4 */
    float xZ; /* +0x8 */
};

/* A scalar with both an int and a float view: the retail code stores raw
 * float bit patterns with integer stores. */
union GLI_tdstFloatInt_ {
    float f;
    int i;
};

/* The retail code initialises these globals with integer stores of raw float
 * bit patterns, so they carry an int view next to the float one. */
union GLI_tdstWaterPlaneColor_ {
    struct {
        int xR;
        int xG;
        int xB;
        int xA;
    } l;
    GEO_tdstColor_ v;
};

union GLI_tdstWaterPlaneNormale_ {
    struct {
        int xX;
        int xY;
        int xZ;
    } l;
    MTH3D_tdstVector_ v;
};

/* The retail code writes the amplitude with integer stores (raw float bit
 * patterns) and reads it back as floats, so both views live in one union. */
union GLI_tdstSinEffectAmp_ {
    struct {
        int xX;
        int xY;
        int xZ;
    } l;
    MTH3D_tdstVector_ v;
};

static int GLI_gsWaterPlaneRefraction;
static int GLI_gsWaterPlaneDepthSizeOf2DMove;
static int GLI_gsWaterPlaneDepthStartOf2DMove;
int GLI_gsfWaterPlaneFogStart;
GLI_tdstFloatInt_ g_xSinusSizeMulx;
GLI_tdstFloatInt_ g_xSinusSizeMuly;
GLI_tdstFloatInt_ g_xSinusSizeMulz;
float gs_xFactor;
float a3_lSinRLIAmp[3];
float a3_lSinRLIBase[3];
char g_cSinusEffectFlagSaved;
char g_cSinusEffectStateSaved;
GLI_tdstFloatInt_ xSinusEffectDepthStartSaved;
MTH3D_tdstVector_ stSinEffectVectorSaved;
GLI_tdstSinEffectAmp_ stSinEffectAmpSaved; /* debug record: MTH3D_tdstVector_; retail save/restore copies need the same 8-aligned type as stSinEffectAmp */
int a3_lSinEffectFreqRLISaved[3];
float a3_xSinEffectBaseRLISaved[3];
int a3_lSinEffectFreqMeshSaved[3];
float a3_xSinEffectBaseMeshSaved[3];
char g_cSinusEffectFlag;
GLI_tdstFloatInt_ xSinusEffectDepthStart;
MTH3D_tdstVector_ stSinEffectVector;
GLI_tdstSinEffectAmp_ stSinEffectAmp;
int a3_lSinEffectFreqRLI[3];
float a3_xSinEffectBaseRLI[3];
int a3_lSinEffectFreqMesh[3];
float a3_xSinEffectBaseMesh[3];
GLI_tdstWaterPlaneColor_ GLI_gsfWaterPlaneFogColor;
int fWaterPlaneDistance;
GLI_tdstWaterPlaneNormale_ stWaterPlaneNormale;
int bWaterPlaneState;
float GLI_fSinEffectBase;
float GLI_fF2pow24;
int gs_lYBase;
int gs_lXBase;
float a64_fSinTable[512];
char g_cSinusEffectState;

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\MultiDRV\Src\WatrPlan.c lines 118–152 */
/* addr: 0x002ab670  size: 484 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 118
 *   +0x0004 -> line 124
 *   +0x0008 -> line 118
 *   +0x001c -> line 124
 *   +0x0028 -> line 125
 *   +0x0030 -> line 126
 *   +0x0038 -> line 129
 *   +0x0048 -> line 130
 *   +0x0054 -> line 131
 *   +0x005c -> line 134
 *   +0x0064 -> line 135
 *   +0x0068 -> line 137
 *   +0x0074 -> line 138
 *   +0x007c -> line 140
 *   +0x0080 -> line 142
 *   +0x0098 -> line 144
 *   +0x009c -> line 145
 *   +0x00ac -> line 144
 *   +0x00b4 -> line 145
 *   +0x0178 -> line 142
 *   +0x0180 -> line 145
 *   +0x0184 -> line 146
 *   +0x0190 -> line 145
 *   +0x01a8 -> line 146
 *   +0x01c0 -> line 148
 *   +0x01c4 -> line 149
 *   +0x01c8 -> line 151
 *   +0x01cc -> line 152
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void* HMU_fn_p_vMalloc(unsigned int u32Size, unsigned char bTempMalloc);
float powf(float x, float y);
float cosf(float x);

struct GEO_tdstVisualSet_ {
    float xLastDistance;                            /* +0x0 */
    short xNbLodDefinitions;                        /* +0x4 */
    short xType;                                    /* +0x6 */
    GEO_tdstGeometricObject_** d_xThresholdsTable;  /* +0x8 */
    void** d_p_stLodDefinitions;                    /* +0xc */
    void* d_hRLI;                                   /* +0x10 */
    int lNumberOfRLI;                               /* +0x14 */
};

GEO_tdstVisualSet_* GLI_p_stCreateTMPVisualSet(int lNbLOD)
{
    GEO_tdstGeometricObject_** ppGeo;
    short xLodCounter;
    GEO_tdstVisualSet_* p_stLocalVS;
    void** ppLod;

    p_stLocalVS = (GEO_tdstVisualSet_*)HMU_fn_p_vMalloc(sizeof(GEO_tdstVisualSet_), 1);
    if (p_stLocalVS == NULL)
        return NULL;


    ppGeo = (GEO_tdstGeometricObject_**)HMU_fn_p_vMalloc(lNbLOD * sizeof(GEO_tdstGeometricObject_*), 1); p_stLocalVS->d_xThresholdsTable = ppGeo;
    if (p_stLocalVS->d_xThresholdsTable == NULL)
        return NULL;


    ppLod = (void**)HMU_fn_p_vMalloc(lNbLOD * sizeof(void*), 1);
    p_stLocalVS->d_p_stLodDefinitions = ppLod;

    if (p_stLocalVS->d_p_stLodDefinitions == NULL)
        return NULL;

    p_stLocalVS->xNbLodDefinitions = lNbLOD;

    for (xLodCounter = 0; xLodCounter < lNbLOD; xLodCounter++)
    {
        ((int*)p_stLocalVS->d_xThresholdsTable)[xLodCounter] = 0;
        ((int*)p_stLocalVS->d_p_stLodDefinitions)[xLodCounter] = 0;
    }

    p_stLocalVS->lNumberOfRLI = 0;
    p_stLocalVS->d_hRLI = NULL;

    return p_stLocalVS;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\MultiDRV\Src\WatrPlan.c lines 1173–1184 */
/* addr: 0x002ab860  size: 284 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1173
 *   +0x0004 -> line 1178
 *   +0x0008 -> line 1173
 *   +0x000c -> line 1178
 *   +0x0010 -> line 1179
 *   +0x0018 -> line 1178
 *   +0x0020 -> line 1179
 *   +0x0028 -> line 1174
 *   +0x0030 -> line 1175
 *   +0x0038 -> line 1176
 *   +0x0050 -> line 1173
 *   +0x0058 -> line 1174
 *   +0x0060 -> line 1175
 *   +0x0068 -> line 1176
 *   +0x00e0 -> line 1178
 *   +0x00f0 -> line 1179
 *   +0x0100 -> line 1180
 *   +0x0104 -> line 1181
 *   +0x0108 -> line 1182
 *   +0x010c -> line 1180
 *   +0x0110 -> line 1181
 *   +0x0114 -> line 1184
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void GLI_vRestoreSinusContext(void)
{
    int i;

    for (i = 0; i < 3; i++)
    {
        a3_xSinEffectBaseMesh[i] = a3_xSinEffectBaseMeshSaved[i];
        a3_lSinEffectFreqMesh[i] = a3_lSinEffectFreqMeshSaved[i];
        a3_xSinEffectBaseRLI[i] = a3_xSinEffectBaseRLISaved[i];
        a3_lSinEffectFreqRLI[i] = a3_lSinEffectFreqRLISaved[i];
    }

    stSinEffectAmp = stSinEffectAmpSaved;
    stSinEffectVector = stSinEffectVectorSaved;
    xSinusEffectDepthStart.f = xSinusEffectDepthStartSaved.f;
    g_cSinusEffectState = g_cSinusEffectStateSaved;
    g_cSinusEffectFlag = g_cSinusEffectFlagSaved;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\MultiDRV\Src\WatrPlan.c lines 1159–1169 */
/* addr: 0x002ab980  size: 284 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1159
 *   +0x0004 -> line 1164
 *   +0x0008 -> line 1159
 *   +0x000c -> line 1164
 *   +0x0010 -> line 1165
 *   +0x0018 -> line 1164
 *   +0x0020 -> line 1165
 *   +0x0028 -> line 1160
 *   +0x0030 -> line 1161
 *   +0x0038 -> line 1162
 *   +0x0050 -> line 1159
 *   +0x0058 -> line 1160
 *   +0x0060 -> line 1161
 *   +0x0068 -> line 1162
 *   +0x00e0 -> line 1164
 *   +0x00f0 -> line 1165
 *   +0x0100 -> line 1166
 *   +0x0104 -> line 1167
 *   +0x0108 -> line 1168
 *   +0x010c -> line 1166
 *   +0x0110 -> line 1167
 *   +0x0114 -> line 1169
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void GLI_vSaveSinusContext(void)
{
    int i;

    for (i = 0; i < 3; i++)
    {
        a3_xSinEffectBaseMeshSaved[i] = a3_xSinEffectBaseMesh[i];
        a3_lSinEffectFreqMeshSaved[i] = a3_lSinEffectFreqMesh[i];
        a3_xSinEffectBaseRLISaved[i] = a3_xSinEffectBaseRLI[i];
        a3_lSinEffectFreqRLISaved[i] = a3_lSinEffectFreqRLI[i];
    }

    stSinEffectAmpSaved = stSinEffectAmp;
    stSinEffectVectorSaved = stSinEffectVector;
    xSinusEffectDepthStartSaved.f = xSinusEffectDepthStart.f;
    g_cSinusEffectStateSaved = g_cSinusEffectState;
    g_cSinusEffectFlagSaved = g_cSinusEffectFlag;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\MultiDRV\Src\WatrPlan.c lines 1154–1154 */
/* addr: 0x002abaa0  size: 8 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1154
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void GLI_vSetSinEffetBase(float xBase)
{
    GLI_fSinEffectBase = xBase;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\MultiDRV\Src\WatrPlan.c lines 1147–1150 */
/* addr: 0x002abab0  size: 28 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1147
 *   +0x0008 -> line 1148
 *   +0x0010 -> line 1149
 *   +0x0014 -> line 1150
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void GLI_vSetSinusEffectOnRLIBase(float xRed, float xGreen, float xBlue)
{
    a3_lSinRLIBase[0] = xRed;
    a3_lSinRLIBase[1] = xGreen;
    a3_lSinRLIBase[2] = xBlue;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\MultiDRV\Src\WatrPlan.c lines 1141–1144 */
/* addr: 0x002abad0  size: 28 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1141
 *   +0x0008 -> line 1142
 *   +0x0010 -> line 1143
 *   +0x0014 -> line 1144
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void GLI_vSetSinusEffectOnRLIAmp(float xRed, float xGreen, float xBlue)
{
    a3_lSinRLIAmp[0] = xRed;
    a3_lSinRLIAmp[1] = xGreen;
    a3_lSinRLIAmp[2] = xBlue;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\MultiDRV\Src\WatrPlan.c lines 1109–1137 */
/* addr: 0x002abaf0  size: 268 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1124
 *   +0x000c -> line 1125
 *   +0x0010 -> line 1124
 *   +0x0014 -> line 1109
 *   +0x0018 -> line 1124
 *   +0x001c -> line 1125
 *   +0x0020 -> line 1124
 *   +0x0024 -> line 1121
 *   +0x0028 -> line 1127
 *   +0x002c -> line 1124
 *   +0x0030 -> line 1125
 *   +0x0038 -> line 1124
 *   +0x0044 -> line 1127
 *   +0x0048 -> line 1124
 *   +0x004c -> line 1125
 *   +0x0050 -> line 1127
 *   +0x0054 -> line 1125
 *   +0x0058 -> line 1127
 *   +0x005c -> line 1125
 *   +0x0064 -> line 1127
 *   +0x0068 -> line 1125
 *   +0x006c -> line 1127
 *   +0x0070 -> line 1128
 *   +0x0074 -> line 1127
 *   +0x0078 -> line 1125
 *   +0x007c -> line 1128
 *   +0x0080 -> line 1127
 *   +0x0088 -> line 1125
 *   +0x008c -> line 1130
 *   +0x0090 -> line 1128
 *   +0x0098 -> line 1130
 *   +0x009c -> line 1128
 *   +0x00a4 -> line 1130
 *   +0x00a8 -> line 1128
 *   +0x00ac -> line 1125
 *   +0x00b0 -> line 1131
 *   +0x00b4 -> line 1130
 *   +0x00c0 -> line 1128
 *   +0x00c4 -> line 1130
 *   +0x00c8 -> line 1131
 *   +0x00cc -> line 1130
 *   +0x00d0 -> line 1128
 *   +0x00d4 -> line 1131
 *   +0x00d8 -> line 1128
 *   +0x00dc -> line 1131
 *   +0x00f4 -> line 1133
 *   +0x00f8 -> line 1131
 *   +0x00fc -> line 1134
 *   +0x0100 -> line 1135
 *   +0x0104 -> line 1137
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void GLI_vSinusEffetOn3DVertex(MTH3D_tdstVector_* p_stVertex3D)
{
    float fFreq;
    float xZ;
    float xY;
    float xX;
    int lVertice;

    fFreq = GLI_fF2pow24 + (a3_xSinEffectBaseMesh[0] + (p_stVertex3D->xY * g_xSinusSizeMuly.f + p_stVertex3D->xZ * g_xSinusSizeMulz.f));
    lVertice = *(int*)&fFreq & 0x1FF; xX = p_stVertex3D->xX + stSinEffectAmp.v.xX * a64_fSinTable[lVertice];
    fFreq = GLI_fF2pow24 + (a3_xSinEffectBaseMesh[1] + (p_stVertex3D->xZ * g_xSinusSizeMulz.f + p_stVertex3D->xX * g_xSinusSizeMulx.f));
    lVertice = *(int*)&fFreq & 0x1FF; xY = p_stVertex3D->xY + stSinEffectAmp.v.xY * a64_fSinTable[lVertice];
    fFreq = GLI_fF2pow24 + (a3_xSinEffectBaseMesh[2] + (p_stVertex3D->xY * g_xSinusSizeMuly.f + p_stVertex3D->xX * g_xSinusSizeMulx.f));
    lVertice = *(int*)&fFreq & 0x1FF; xZ = p_stVertex3D->xZ + stSinEffectAmp.v.xZ * a64_fSinTable[lVertice];
    p_stVertex3D->xX = xX;
    p_stVertex3D->xY = xY;
    p_stVertex3D->xZ = xZ;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\MultiDRV\Src\WatrPlan.c lines 1055–1075 */
/* addr: 0x002abc00  size: 336 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1055
 *   +0x000c -> line 1058
 *   +0x002c -> line 1060
 *   +0x0064 -> line 1062
 *   +0x006c -> line 1060
 *   +0x0070 -> line 1062
 *   +0x007c -> line 1063
 *   +0x0084 -> line 1062
 *   +0x0088 -> line 1063
 *   +0x0094 -> line 1064
 *   +0x009c -> line 1063
 *   +0x00a0 -> line 1064
 *   +0x00ac -> line 1066
 *   +0x00b4 -> line 1064
 *   +0x00b8 -> line 1066
 *   +0x00c4 -> line 1067
 *   +0x00cc -> line 1066
 *   +0x00d0 -> line 1067
 *   +0x00dc -> line 1068
 *   +0x00e4 -> line 1067
 *   +0x00e8 -> line 1068
 *   +0x00f4 -> line 1062
 *   +0x0100 -> line 1068
 *   +0x0104 -> line 1063
 *   +0x0110 -> line 1064
 *   +0x011c -> line 1066
 *   +0x0128 -> line 1067
 *   +0x0134 -> line 1068
 *   +0x0140 -> line 1075
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
unsigned char fn_bIsEngineInPause(void);
unsigned char EngineIsFrozen(void);

void GLI_vUpdateEffectData(unsigned int _ulDeltaT)
{
    float xFactor;

    /* Both tests share one exit block, so they stay on a single source line. */
    if (fn_bIsEngineInPause()) { return; } if (EngineIsFrozen()) { return; }

    xFactor = 0.0128f * (float)_ulDeltaT; gs_xFactor = xFactor;

    a3_xSinEffectBaseMesh[0] += (float)a3_lSinEffectFreqMesh[0] * xFactor;
    a3_xSinEffectBaseMesh[1] += (float)a3_lSinEffectFreqMesh[1] * xFactor;
    a3_xSinEffectBaseMesh[2] += (float)a3_lSinEffectFreqMesh[2] * xFactor;

    a3_xSinEffectBaseRLI[0] += (float)a3_lSinEffectFreqRLI[0] * xFactor;
    a3_xSinEffectBaseRLI[1] += (float)a3_lSinEffectFreqRLI[1] * xFactor;
    a3_xSinEffectBaseRLI[2] += (float)a3_lSinEffectFreqRLI[2] * xFactor;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\MultiDRV\Src\WatrPlan.c lines 982–983 */
/* addr: 0x002abd50  size: 40 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 982
 *   +0x0020 -> line 983
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void GLI_fn_SinusEffect_vSetAmplitude(GLI_tdstSinEffectAmp_* _p_stAmpVector)
{
    stSinEffectAmp.l.xX = _p_stAmpVector->l.xX;
    stSinEffectAmp.l.xY = _p_stAmpVector->l.xY;
    stSinEffectAmp.l.xZ = _p_stAmpVector->l.xZ;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\MultiDRV\Src\WatrPlan.c lines 970–973 */
/* addr: 0x002abd80  size: 28 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 970
 *   +0x0008 -> line 971
 *   +0x0010 -> line 972
 *   +0x0014 -> line 973
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void GLI_fn_SinusEffect_vSetFreqRLI(int _lXFreq, int _lYFreq, int _lZFreq)
{
    a3_lSinEffectFreqRLI[0] = _lXFreq;
    a3_lSinEffectFreqRLI[1] = _lYFreq;
    a3_lSinEffectFreqRLI[2] = _lZFreq;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\MultiDRV\Src\WatrPlan.c lines 963–966 */
/* addr: 0x002abda0  size: 28 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 963
 *   +0x0008 -> line 964
 *   +0x0010 -> line 965
 *   +0x0014 -> line 966
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void GLI_fn_SinusEffect_vSetFreqMesh(int _lXFreq, int _lYFreq, int _lZFreq)
{
    a3_lSinEffectFreqMesh[0] = _lXFreq;
    a3_lSinEffectFreqMesh[1] = _lYFreq;
    a3_lSinEffectFreqMesh[2] = _lZFreq;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\MultiDRV\Src\WatrPlan.c lines 952–953 */
/* addr: 0x002abdc0  size: 12 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 952
 *   +0x0004 -> line 953
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
char GLI_fn_SinusEffect_cIsSecondViewportAffected(void)
{
    return g_cSinusEffectFlag & 1;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\MultiDRV\Src\WatrPlan.c lines 941–941 */
/* addr: 0x002abdd0  size: 8 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 941
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
char GLI_fn_SinusEffect_vGetFlag(void)
{
    return g_cSinusEffectFlag;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\MultiDRV\Src\WatrPlan.c lines 936–936 */
/* addr: 0x002abde0  size: 8 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 936
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void GLI_fn_SinusEffect_vSetFlag(char _cFlag)
{
    g_cSinusEffectFlag = _cFlag;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\MultiDRV\Src\WatrPlan.c lines 926–926 */
/* addr: 0x002abdf0  size: 8 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 926
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
char GLI_fn_SinusEffect_vGetState(void)
{
    return g_cSinusEffectState;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\MultiDRV\Src\WatrPlan.c lines 921–921 */
/* addr: 0x002abe00  size: 8 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 921
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void GLI_fn_SinusEffect_vSetState(char _cState)
{
    g_cSinusEffectState = _cState;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\MultiDRV\Src\WatrPlan.c lines 905–909 */
/* addr: 0x002abe10  size: 16 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 905
 *   +0x0004 -> line 906
 *   +0x0008 -> line 909
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void GLI_fn_vSetSinusPreMultiplier(float X, float Y, float Z)
{
    g_xSinusSizeMulx.f = X;
    g_xSinusSizeMuly.f = Y;
    g_xSinusSizeMulz.f = Z;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\MultiDRV\Src\WatrPlan.c lines 832–893 */
/* addr: 0x002abe20  size: 456 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 837
 *   +0x0004 -> line 832
 *   +0x0008 -> line 837
 *   +0x000c -> line 832
 *   +0x0014 -> line 837
 *   +0x0028 -> line 839
 *   +0x002c -> line 837
 *   +0x0038 -> line 839
 *   +0x0040 -> line 840
 *   +0x0048 -> line 842
 *   +0x0074 -> line 843
 *   +0x0078 -> line 842
 *   +0x0080 -> line 843
 *   +0x0084 -> line 842
 *   +0x0088 -> line 843
 *   +0x0090 -> line 848
 *   +0x0098 -> line 858
 *   +0x009c -> line 849
 *   +0x00a8 -> line 872
 *   +0x00ac -> line 849
 *   +0x00b0 -> line 856
 *   +0x00b4 -> line 850
 *   +0x00b8 -> line 856
 *   +0x00bc -> line 850
 *   +0x00c4 -> line 845
 *   +0x00c8 -> line 850
 *   +0x00cc -> line 857
 *   +0x00d0 -> line 851
 *   +0x00d4 -> line 857
 *   +0x00d8 -> line 851
 *   +0x00e0 -> line 846
 *   +0x00e4 -> line 851
 *   +0x00e8 -> line 863
 *   +0x00ec -> line 852
 *   +0x00f0 -> line 863
 *   +0x00f4 -> line 852
 *   +0x00f8 -> line 858
 *   +0x00fc -> line 852
 *   +0x0100 -> line 858
 *   +0x0104 -> line 853
 *   +0x0108 -> line 862
 *   +0x010c -> line 853
 *   +0x0110 -> line 862
 *   +0x0114 -> line 864
 *   +0x0118 -> line 853
 *   +0x011c -> line 864
 *   +0x0120 -> line 854
 *   +0x0124 -> line 872
 *   +0x0128 -> line 854
 *   +0x012c -> line 872
 *   +0x0130 -> line 855
 *   +0x0134 -> line 880
 *   +0x0138 -> line 855
 *   +0x013c -> line 880
 *   +0x0140 -> line 888
 *   +0x0144 -> line 873
 *   +0x0148 -> line 847
 *   +0x014c -> line 873
 *   +0x0150 -> line 874
 *   +0x0154 -> line 859
 *   +0x0158 -> line 874
 *   +0x015c -> line 876
 *   +0x0160 -> line 888
 *   +0x0164 -> line 876
 *   +0x0168 -> line 877
 *   +0x016c -> line 867
 *   +0x0170 -> line 877
 *   +0x0174 -> line 878
 *   +0x0178 -> line 868
 *   +0x017c -> line 878
 *   +0x0180 -> line 881
 *   +0x0184 -> line 869
 *   +0x0188 -> line 881
 *   +0x018c -> line 882
 *   +0x0190 -> line 890
 *   +0x0194 -> line 882
 *   +0x0198 -> line 884
 *   +0x019c -> line 891
 *   +0x01a0 -> line 884
 *   +0x01a4 -> line 885
 *   +0x01ac -> line 886
 *   +0x01b4 -> line 893
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void GLI_vInitWaterplaneModule(void)
{
    int lCounter;
    static unsigned char lIsAlreadyInit;
    /* The retail code loads the powf() constants left to right, so the
     * arguments are passed through named locals to keep that order. */
    float xPowBase;
    float xPowExp;

    xPowBase = 2.0f;
    xPowExp = 20.0f;
    GLI_fF2pow24 = 3.0f * powf(xPowBase, xPowExp);
    if (lIsAlreadyInit)
    {
        for (lCounter = 0; lCounter < 512; lCounter++)
        {
            a64_fSinTable[lCounter] = 2.0f * cosf(6.2831855f / 512.0f * (float)lCounter);
        }
    }
    lIsAlreadyInit = 0;
    bWaterPlaneState = 0;
    gs_lXBase = 0;
    gs_lYBase = 0x20;
    GLI_gsfWaterPlaneFogColor.l.xR = 0xBF19999A;
    GLI_gsfWaterPlaneFogColor.l.xG = 0xBE99999A;
    stWaterPlaneNormale.l.xX = 0;
    GLI_gsfWaterPlaneFogColor.l.xB = 0xBECCCCCD;
    stWaterPlaneNormale.l.xZ = 0;
    fWaterPlaneDistance = 0;
    stSinEffectAmp.l.xY = 0;
    GLI_gsWaterPlaneRefraction = 0x3F333333;
    GLI_gsWaterPlaneDepthSizeOf2DMove = 0x3FB33333;
    GLI_gsWaterPlaneDepthStartOf2DMove = 0xC0A00000;
    GLI_gsfWaterPlaneFogStart = 0x40E00000;
    stWaterPlaneNormale.l.xY = 0x3F800000;
    stSinEffectAmp.l.xX = 0x3F800000;
    stSinEffectAmp.l.xZ = 0;
    g_xSinusSizeMulx.i = 0x3F800000;
    g_xSinusSizeMuly.i = 0x3F800000;
    g_xSinusSizeMulz.i = 0x3F800000;
    a3_lSinEffectFreqMesh[0] = 1;
    a3_lSinEffectFreqRLI[0] = 1;
    a3_lSinEffectFreqMesh[1] = 0;
    a3_lSinEffectFreqMesh[2] = 0;
    a3_xSinEffectBaseMesh[0] = 0;
    a3_xSinEffectBaseMesh[1] = 0;
    a3_xSinEffectBaseMesh[2] = 0;
    a3_lSinEffectFreqRLI[1] = 0;
    a3_lSinEffectFreqRLI[2] = 0;
    a3_xSinEffectBaseRLI[0] = 0;
    a3_xSinEffectBaseRLI[1] = 0;
    a3_xSinEffectBaseRLI[2] = 0;
    xSinusEffectDepthStart.i = 0x41200000;
    g_cSinusEffectState = 0;
    g_cSinusEffectFlag = 0;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\MultiDRV\Src\WatrPlan.c lines 384–385 */
/* addr: 0x002abff0  size: 16 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 384
 *   +0x0008 -> line 385
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void GLI_vWaterplaneDisable2DSinus(void)
{
    bWaterPlaneState |= 0x20;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\MultiDRV\Src\WatrPlan.c lines 358–359 */
/* addr: 0x002ac000  size: 20 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 358
 *   +0x000c -> line 359
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void GLI_vSetWaterplaneOff(void)
{
    bWaterPlaneState &= ~1;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\MultiDRV\Src\WatrPlan.c lines 348–349 */
/* addr: 0x002ac020  size: 16 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 348
 *   +0x0008 -> line 349
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void GLI_vSetWaterplaneOn(void)
{
    bWaterPlaneState |= 1;
}
