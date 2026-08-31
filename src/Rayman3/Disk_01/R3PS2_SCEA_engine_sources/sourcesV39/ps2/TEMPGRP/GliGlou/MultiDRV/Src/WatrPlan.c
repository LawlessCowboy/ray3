/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\MultiDRV\Src\WatrPlan.c */
/* Language: C */
/* Compiler: MW MIPS C Compiler */

#include <stddef.h>

/* Recovered aggregate layouts from MWCC debug type records. */
typedef struct GEO_tdstColor_ GEO_tdstColor_;
typedef struct MTH3D_tdstVector_ MTH3D_tdstVector_;

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
MTH3D_tdstVector_ stSinEffectVectorSaved;
MTH3D_tdstVector_ stSinEffectAmpSaved;
int a3_lSinEffectFreqRLISaved[3];
float a3_xSinEffectBaseRLISaved[3];
int a3_lSinEffectFreqMeshSaved[3];
float a3_xSinEffectBaseMeshSaved[3];
char g_cSinusEffectFlag;
float xSinusEffectDepthStart;
MTH3D_tdstVector_ stSinEffectVector;
MTH3D_tdstVector_ stSinEffectAmp;
int a3_lSinEffectFreqRLI[3];
float a3_xSinEffectBaseRLI[3];
int a3_lSinEffectFreqMesh[3];
float a3_xSinEffectBaseMesh[3];
GEO_tdstColor_ GLI_gsfWaterPlaneFogColor;
float fWaterPlaneDistance;
MTH3D_tdstVector_ stWaterPlaneNormale;
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
GEO_tdstVisualSet_* GLI_p_stCreateTMPVisualSet(int lNbLOD)
{
    GEO_tdstGeometricObject_* ppGeo;
    short xLodCounter;
    GEO_tdstVisualSet_* p_stLocalVS;
    /* TODO: decompile from asm/... */
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
    /* TODO: decompile from asm/... */
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
    /* TODO: decompile from asm/... */
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
    /* TODO: decompile from asm/... */
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
    /* TODO: decompile from asm/... */
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
    /* TODO: decompile from asm/... */
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
    /* TODO: decompile from asm/... */
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
void GLI_vUpdateEffectData(unsigned int _ulDeltaT)
{
    float xFactor;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\MultiDRV\Src\WatrPlan.c lines 982–983 */
/* addr: 0x002abd50  size: 40 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 982
 *   +0x0020 -> line 983
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void GLI_fn_SinusEffect_vSetAmplitude(MTH3D_tdstVector_* _p_stAmpVector)
{
    /* TODO: decompile from asm/... */
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
    /* TODO: decompile from asm/... */
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
    /* TODO: decompile from asm/... */
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
    /* TODO: decompile from asm/... */
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
    /* TODO: decompile from asm/... */
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
    /* TODO: decompile from asm/... */
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
    /* TODO: decompile from asm/... */
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
    /* TODO: decompile from asm/... */
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
    /* TODO: decompile from asm/... */
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
    unsigned char lIsAlreadyInit;
    /* TODO: decompile from asm/... */
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
    /* TODO: decompile from asm/... */
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
    /* TODO: decompile from asm/... */
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
    /* TODO: decompile from asm/... */
}
