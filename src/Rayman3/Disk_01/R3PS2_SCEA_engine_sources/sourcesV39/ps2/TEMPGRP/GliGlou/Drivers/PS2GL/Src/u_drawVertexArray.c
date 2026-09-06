/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\u_drawVertexArray.c */
/* Language: C */
/* Compiler: MW MIPS C Compiler */

#include <stddef.h>

/* Recovered aggregate layouts from MWCC debug type records. */
typedef struct GLD_tdstViewportAttributes_ GLD_tdstViewportAttributes_;
typedef struct GLI_tdstCamera_ GLI_tdstCamera_;
typedef struct MTH4D_tdstMatrix_ MTH4D_tdstMatrix_;
typedef struct _SDC_Instance_ _SDC_Instance_;
typedef struct GLI_tdstAnimatedTextureNode_ GLI_tdstAnimatedTextureNode_;
typedef struct GLI_tdstNormalsToRecompute_ GLI_tdstNormalsToRecompute_;
typedef struct GLI_tdstTexture_ GLI_tdstTexture_;
typedef struct GEO_tdstTripledIndex_ GEO_tdstTripledIndex_;
typedef struct AGO_Light_ AGO_Light_;
typedef struct MTH3D_tdstVector_ MTH3D_tdstVector_;
typedef struct GEO_tdstElementIndexedTriangles_ GEO_tdstElementIndexedTriangles_;
typedef struct GEO_tdstColor_ GEO_tdstColor_;
typedef struct anon_0 anon_0;
typedef struct anon_1 anon_1;
typedef struct GLI_tdstMaterial_ GLI_tdstMaterial_;
typedef struct ACP_tdst2DUVValues_ ACP_tdst2DUVValues_;

struct GLI_tdstAnimatedTextureNode_ {
    GLI_tdstTexture_* p_stTexture; /* +0x0 */
    float xDisplayTime; /* +0x4 */
    GLI_tdstAnimatedTextureNode_* p_stNextDisplayNode; /* +0x8 */
};

struct GLI_tdstNormalsToRecompute_ {
    _SDC_Instance_* pInstance; /* +0x0 */
    int pInstanceNormals; /* +0x4 */
    GEO_tdstElementIndexedTriangles_* p_stEIT; /* +0x8 */
    MTH3D_tdstVector_* pPoints; /* +0xc */
    unsigned int xNbPoints; /* +0x10 */
    unsigned int NbVertices; /* +0x14 */
};

struct GLI_tdstTexture_ {
    int bIsAvailable; /* +0x0 */
    int lTextureQuality; /* +0x4 */
    int p_vBitMap; /* +0x8 */
    int p_vColorTable; /* +0xc */
    int p_stSpecParam; /* +0x10 */
    int lTextureCaps; /* +0x14 */
    unsigned short lHeight; /* +0x18 */
    unsigned short lWidth; /* +0x1a */
    unsigned short lRealHeight; /* +0x1c */
    unsigned short lRealWidth; /* +0x1e */
    float fAddU; /* +0x20 */
    float fAddV; /* +0x24 */
    int lIncrementIsEnable; /* +0x28 */
    unsigned int lChromakeyColorRGBA; /* +0x2c */
    unsigned int ulBlendColorRGBA; /* +0x30 */
    int lNumberOfLod; /* +0x34 */
    unsigned int lCompressionCounter; /* +0x38 */
    unsigned int lTypeOfCompression; /* +0x3c */
    unsigned int lTypeOfMipMapping; /* +0x40 */
    GLI_tdstTexture_* p_TextureOfSubstitution; /* +0x44 */
    unsigned char ucBilinearMode; /* +0x48 */
    unsigned char ucCylingMode; /* +0x49 */
    char a255_cFileName[128]; /* +0x4a */
};

struct GEO_tdstTripledIndex_ {
    short a3_xIndex[3]; /* +0x0 */
};

struct AGO_Light_ {
    float Position[4]; /* +0x0 */
    float Color[4]; /* +0x10 */
    float SqFar; /* +0x20 */
    float Far; /* +0x24 */
    float AlreadyComputed; /* +0x28 */
    float Distance; /* +0x2c */
};

struct MTH3D_tdstVector_ {
    float xX; /* +0x0 */
    float xY; /* +0x4 */
    float xZ; /* +0x8 */
};

struct GEO_tdstElementIndexedTriangles_ {
    GLI_tdstMaterial_* hVisualMaterial; /* +0x0 */
    short xNbFaces; /* +0x4 */
    short xNbElementUV; /* +0x6 */
    short xNbUVStages; /* +0x8 */
    GEO_tdstTripledIndex_* d_stListOfFacesTripled; /* +0xc */
    GEO_tdstTripledIndex_* d_stListOfFacesTripledIndexUV; /* +0x10 */
    MTH3D_tdstVector_* d_stListOfFacesNormals; /* +0x14 */
    ACP_tdst2DUVValues_* d_stListOfElementUV; /* +0x18 */
    GEO_tdstTripledIndex_* d_stListOfFacesEdges; /* +0x1c */
    GEO_tdstTripledIndex_* d_stListOfFacesAdjacent; /* +0x20 */
    int d_stListOfIndexUsedByThisElement; /* +0x24 */
    short xNumberOfIndexsUsed; /* +0x28 */
    short xIndexOfParallelBox; /* +0x2a */
    unsigned int glDisplayList; /* +0x2c */
    int p_xSpecialValue; /* +0x30 */
    unsigned char bVisibleInPortal; /* +0x34 */
    unsigned int pVertexArrays[4]; /* +0x38 */
};

struct GEO_tdstColor_ {
    float xR; /* +0x0 */
    float xG; /* +0x4 */
    float xB; /* +0x8 */
    float xA; /* +0xc */
};

struct anon_0 {
    float stMat[2][2]; /* +0x0 */
    float stTrans[2]; /* +0x10 */
};

struct anon_1 {
    GLI_tdstTexture_* pst_Texture; /* +0x0 */
    char c_Operator; /* +0x4 */
    char c_ColorOperator; /* +0x5 */
    char c_UVSource; /* +0x6 */
    char c_Flags; /* +0x7 */
    unsigned int ulTextureProperties; /* +0x8 */
    anon_0 st_UVStaticPos; /* +0xc */
    anon_0 st_UVDynamicPos; /* +0x24 */
    float fDynamicAngle; /* +0x3c */
    float fStaticAngle; /* +0x40 */
    unsigned int ulSetMaterialFunction; /* +0x44 */
    float fScaleU; /* +0x48 */
    float fScaleV; /* +0x4c */
};

struct GLI_tdstMaterial_ {
    unsigned int xMaterialType; /* +0x0 */
    GEO_tdstColor_ stAmbient; /* +0x4 */
    GEO_tdstColor_ stDiffuse; /* +0x14 */
    GEO_tdstColor_ stSpecular; /* +0x24 */
    GEO_tdstColor_ stColor; /* +0x34 */
    unsigned int lMaterialAdditionnalType; /* +0x44 */
    int lSpecularExponent; /* +0x48 */
    GLI_tdstTexture_* p_stTexture; /* +0x4c */
    float fAddU; /* +0x50 */
    float fAddV; /* +0x54 */
    float fConstantAddU; /* +0x58 */
    float fConstantAddV; /* +0x5c */
    int lIncrementIsEnable; /* +0x60 */
    unsigned int lActualRefreshNumber; /* +0x64 */
    GLI_tdstAnimatedTextureNode_* p_stFistAnimatedTExtureNode; /* +0x68 */
    GLI_tdstAnimatedTextureNode_* p_stActualAnimatedTExtureNode; /* +0x6c */
    int lNumberOfDisplayNode; /* +0x70 */
    float xActualDisplayTimeSinceStartOfLastTexture; /* +0x74 */
    unsigned char xIsLocked; /* +0x78 */
    unsigned int uiFlags; /* +0x7c */
    unsigned int ulMultiTextureType; /* +0x80 */
    unsigned int ulNbTextureStages; /* +0x84 */
    anon_1 a_stMultiMaterial[4]; /* +0x88 */
};

struct ACP_tdst2DUVValues_ {
    float xU; /* +0x0 */
    float xV; /* +0x4 */
};

int g_bIsTribe;
char g_cSinusEffectState;
unsigned int AGO_g_ulNbLights;
unsigned int GLI_g_NbNormalsToRecompute;
unsigned int GLI_g_CurrentNormalToRecompute;
GLI_tdstNormalsToRecompute_ GLI_g_NormalsToRecomputeArray[50];
float GLI_g_MulVal[4];
float GLI_g_NormalPacker[4];
float GLI_g_TempArray[5000][4];
AGO_Light_ AGO_g_pLightList[8];
static int gs_keepit;
int g_waiting;

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\u_drawVertexArray.c lines 35–47 */
/* addr: 0x002bd4c0  size: 152 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 35
 *   +0x0004 -> line 41
 *   +0x0008 -> line 35
 *   +0x000c -> line 41
 *   +0x0010 -> line 35
 *   +0x0014 -> line 39
 *   +0x0020 -> line 41
 *   +0x0028 -> line 40
 *   +0x002c -> line 41
 *   +0x0060 -> line 42
 *   +0x0064 -> line 41
 *   +0x006c -> line 42
 *   +0x0070 -> line 41
 *   +0x0074 -> line 42
 *   +0x007c -> line 44
 *   +0x0084 -> line 46
 *   +0x0088 -> line 47
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void GLI_vPrepareDisplayingAGOs(GLD_tdstViewportAttributes_* _p_stViewport)
{
    GLI_tdstCamera_* p_stCam;
    MTH4D_tdstMatrix_* p_stWorldMatrix;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\u_drawVertexArray.c lines 1469–1478 */
/* addr: 0x002bd560  size: 116 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1469
 *   +0x0004 -> line 1472
 *   +0x000c -> line 1474
 *   +0x0020 -> line 1475
 *   +0x003c -> line 1476
 *   +0x0048 -> line 1477
 *   +0x0068 -> line 1478
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void GLI_vRecomputeNormalsWhileWaitingForVBL(void)
{
    GLI_tdstNormalsToRecompute_* p;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\u_drawVertexArray.c lines 1462–1464 */
/* addr: 0x002bd5e0  size: 12 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1462
 *   +0x0004 -> line 1464
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void GLI_vEndNormalRecomputation(void)
{
    GLI_g_CurrentNormalToRecompute = 0;
    GLI_g_NbNormalsToRecompute = 0;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\u_drawVertexArray.c lines 1446–1458 */
/* addr: 0x002bd5f0  size: 152 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1446
 *   +0x0004 -> line 1447
 *   +0x0008 -> line 1446
 *   +0x000c -> line 1450
 *   +0x0014 -> line 1452
 *   +0x0030 -> line 1453
 *   +0x004c -> line 1454
 *   +0x0058 -> line 1455
 *   +0x0080 -> line 1457
 *   +0x008c -> line 1458
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void GLI_vRecomputeAllCharacterNormalsAndWaitForSyncPath(void)
{
    GLI_tdstNormalsToRecompute_* p;
    int fakevblwait;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\u_drawVertexArray.c lines 1429–1429 */
/* addr: 0x002bd690  size: 8 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1429
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void GLI_vStartNormalRecomp(void)
{
    GLI_g_CurrentNormalToRecompute = 0;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\u_drawVertexArray.c lines 1413–1424 */
/* addr: 0x002bd6a0  size: 76 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1413
 *   +0x0010 -> line 1415
 *   +0x002c -> line 1417
 *   +0x0030 -> line 1418
 *   +0x0034 -> line 1419
 *   +0x0038 -> line 1420
 *   +0x003c -> line 1421
 *   +0x0040 -> line 1422
 *   +0x0044 -> line 1424
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void GLI_vRecomputeCharacterNormals(_SDC_Instance_* pInstance, unsigned int* pInstanceNormals, GEO_tdstElementIndexedTriangles_* p_stEIT, MTH3D_tdstVector_* pPoints, unsigned int xNbPoints, unsigned int NbVertices)
{
    GLI_tdstNormalsToRecompute_* p;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\u_drawVertexArray.c lines 1157–1385 */
/* addr: 0x002bd6f0  size: 700 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1157
 *   +0x001c -> line 1171
 *   +0x0020 -> line 1157
 *   +0x003c -> line 1159
 *   +0x0040 -> line 1157
 *   +0x0044 -> line 1159
 *   +0x0048 -> line 1175
 *   +0x0050 -> line 1171
 *   +0x0054 -> line 1175
 *   +0x005c -> line 1177
 *   +0x0060 -> line 1181
 *   +0x0064 -> line 1187
 *   +0x0068 -> line 1183
 *   +0x006c -> line 1187
 *   +0x0074 -> line 1190
 *   +0x007c -> line 1193
 *   +0x008c -> line 1195
 *   +0x0098 -> line 1198
 *   +0x00a0 -> line 1201
 *   +0x00a4 -> line 1203
 *   +0x00a8 -> line 1204
 *   +0x00ac -> line 1207
 *   +0x00b4 -> line 1212
 *   +0x00b8 -> line 1213
 *   +0x00bc -> line 1214
 *   +0x00c0 -> line 1215
 *   +0x00c4 -> line 1216
 *   +0x00c8 -> line 1217
 *   +0x00cc -> line 1220
 *   +0x00d0 -> line 1221
 *   +0x00d4 -> line 1222
 *   +0x00d8 -> line 1223
 *   +0x00dc -> line 1224
 *   +0x00e0 -> line 1225
 *   +0x00e4 -> line 1226
 *   +0x00e8 -> line 1227
 *   +0x00ec -> line 1228
 *   +0x00f0 -> line 1230
 *   +0x00f4 -> line 1231
 *   +0x00f8 -> line 1232
 *   +0x00fc -> line 1234
 *   +0x0100 -> line 1235
 *   +0x0104 -> line 1236
 *   +0x0108 -> line 1237
 *   +0x010c -> line 1238
 *   +0x0110 -> line 1239
 *   +0x0114 -> line 1241
 *   +0x0118 -> line 1242
 *   +0x011c -> line 1243
 *   +0x0120 -> line 1245
 *   +0x0124 -> line 1246
 *   +0x0128 -> line 1248
 *   +0x012c -> line 1249
 *   +0x0130 -> line 1250
 *   +0x0134 -> line 1252
 *   +0x0138 -> line 1253
 *   +0x013c -> line 1254
 *   +0x0140 -> line 1255
 *   +0x0144 -> line 1256
 *   +0x0148 -> line 1258
 *   +0x014c -> line 1259
 *   +0x0150 -> line 1261
 *   +0x0154 -> line 1262
 *   +0x0158 -> line 1263
 *   +0x015c -> line 1265
 *   +0x0160 -> line 1266
 *   +0x0164 -> line 1268
 *   +0x0168 -> line 1270
 *   +0x016c -> line 1272
 *   +0x0170 -> line 1274
 *   +0x0174 -> line 1276
 *   +0x0178 -> line 1278
 *   +0x017c -> line 1279
 *   +0x0180 -> line 1280
 *   +0x0184 -> line 1282
 *   +0x0188 -> line 1283
 *   +0x018c -> line 1284
 *   +0x0190 -> line 1291
 *   +0x0194 -> line 1294
 *   +0x01b0 -> line 1296
 *   +0x01b4 -> line 1298
 *   +0x01c0 -> line 1300
 *   +0x01c4 -> line 1302
 *   +0x01d4 -> line 1304
 *   +0x01d8 -> line 1305
 *   +0x01dc -> line 1307
 *   +0x01e0 -> line 1309
 *   +0x01e4 -> line 1310
 *   +0x01e8 -> line 1311
 *   +0x01ec -> line 1313
 *   +0x01f0 -> line 1314
 *   +0x01f4 -> line 1316
 *   +0x01f8 -> line 1319
 *   +0x01fc -> line 1320
 *   +0x0200 -> line 1322
 *   +0x0204 -> line 1323
 *   +0x0208 -> line 1325
 *   +0x020c -> line 1326
 *   +0x0210 -> line 1327
 *   +0x0214 -> line 1329
 *   +0x0218 -> line 1331
 *   +0x021c -> line 1333
 *   +0x0220 -> line 1335
 *   +0x0224 -> line 1337
 *   +0x0228 -> line 1339
 *   +0x022c -> line 1340
 *   +0x0230 -> line 1341
 *   +0x0234 -> line 1342
 *   +0x0238 -> line 1343
 *   +0x023c -> line 1345
 *   +0x0240 -> line 1346
 *   +0x0244 -> line 1351
 *   +0x0248 -> line 1352
 *   +0x024c -> line 1353
 *   +0x0250 -> line 1354
 *   +0x0258 -> line 1355
 *   +0x025c -> line 1357
 *   +0x0260 -> line 1359
 *   +0x0264 -> line 1360
 *   +0x0268 -> line 1365
 *   +0x026c -> line 1366
 *   +0x0270 -> line 1368
 *   +0x0274 -> line 1369
 *   +0x0278 -> line 1371
 *   +0x027c -> line 1372
 *   +0x0280 -> line 1375
 *   +0x0284 -> line 1384
 *   +0x028c -> line 1385
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void GLI_vRecomputeCharacterNormalsReal(unsigned int* pInstanceNormals, GEO_tdstElementIndexedTriangles_* p_stEIT, MTH3D_tdstVector_* pPoints, unsigned int xNbPoints, unsigned int* pVBLWait)
{
    unsigned int FMask;
    unsigned int Mask;
    unsigned int Adder;
    short* pIndices;
    unsigned short* pIndexArray;
    float (*pTempArray)[4];
    void* pSPR;
    unsigned int i;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\u_drawVertexArray.c lines 1134–1145 */
/* addr: 0x002bd9b0  size: 112 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1136
 *   +0x0004 -> line 1134
 *   +0x0008 -> line 1136
 *   +0x000c -> line 1134
 *   +0x0010 -> line 1136
 *   +0x0020 -> line 1137
 *   +0x0024 -> line 1141
 *   +0x0028 -> line 1137
 *   +0x002c -> line 1138
 *   +0x0034 -> line 1139
 *   +0x003c -> line 1140
 *   +0x0044 -> line 1141
 *   +0x004c -> line 1142
 *   +0x0054 -> line 1143
 *   +0x005c -> line 1144
 *   +0x0064 -> line 1145
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void InitNormalPacker(void)
{
    float fadd;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\u_drawVertexArray.c lines 951–994 */
/* addr: 0x002bda20  size: 196 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 951
 *   +0x0008 -> line 964
 *   +0x0014 -> line 966
 *   +0x0020 -> line 967
 *   +0x0028 -> line 979
 *   +0x0030 -> line 989
 *   +0x0038 -> line 985
 *   +0x003c -> line 981
 *   +0x0040 -> line 982
 *   +0x0044 -> line 983
 *   +0x0048 -> line 985
 *   +0x004c -> line 986
 *   +0x0058 -> line 988
 *   +0x005c -> line 992
 *   +0x0060 -> line 988
 *   +0x0068 -> line 989
 *   +0x0080 -> line 990
 *   +0x0090 -> line 991
 *   +0x009c -> line 992
 *   +0x00a8 -> line 993
 *   +0x00b8 -> line 994
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void GLI_vUpdateCharacterVARealInterp(float (*pDestPV)[4], GEO_tdstElementIndexedTriangles_* p_stEIT, MTH3D_tdstVector_* p_stPoints, unsigned int NbPoints)
{
    unsigned int offset;
    unsigned int counter;
    float z;
    float y;
    float x;
    unsigned short* pIndexArray;
    MTH3D_tdstVector_* p_stPointsArg;
    float (*pV)[4];
    unsigned int i;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\u_drawVertexArray.c lines 905–917 */
/* addr: 0x002bdaf0  size: 216 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 905
 *   +0x0010 -> line 909
 *   +0x0028 -> line 910
 *   +0x002c -> line 909
 *   +0x0030 -> line 910
 *   +0x0038 -> line 912
 *   +0x003c -> line 909
 *   +0x0040 -> line 911
 *   +0x0044 -> line 910
 *   +0x0048 -> line 911
 *   +0x0050 -> line 912
 *   +0x005c -> line 913
 *   +0x0060 -> line 912
 *   +0x0064 -> line 910
 *   +0x0068 -> line 913
 *   +0x006c -> line 911
 *   +0x0070 -> line 912
 *   +0x0074 -> line 913
 *   +0x007c -> line 914
 *   +0x0088 -> line 911
 *   +0x008c -> line 912
 *   +0x00bc -> line 913
 *   +0x00c0 -> line 914
 *   +0x00c4 -> line 915
 *   +0x00d0 -> line 917
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void TestAddAGOLight(MTH3D_tdstVector_* pPosition, float* Color, float fardist)
{
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\u_drawVertexArray.c lines 896–896 */
/* addr: 0x002bdbd0  size: 8 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 896
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void GLI_vRemovePointLightsAfterProcessing(void)
{
    AGO_g_ulNbLights = 0;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\u_drawVertexArray.c lines 891–891 */
/* addr: 0x002bdbe0  size: 8 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 891
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void GLI_vRemoveLights(void)
{
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\u_drawVertexArray.c lines 801–858 */
/* addr: 0x002bdbf0  size: 224 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0004 -> line 801
 *   +0x000c -> line 802
 *   +0x0010 -> line 801
 *   +0x0014 -> line 802
 *   +0x0018 -> line 809
 *   +0x001c -> line 801
 *   +0x0020 -> line 809
 *   +0x0048 -> line 816
 *   +0x0060 -> line 819
 *   +0x0068 -> line 821
 *   +0x0070 -> line 826
 *   +0x0074 -> line 827
 *   +0x0078 -> line 828
 *   +0x007c -> line 829
 *   +0x0080 -> line 831
 *   +0x0084 -> line 833
 *   +0x0088 -> line 834
 *   +0x008c -> line 835
 *   +0x0090 -> line 836
 *   +0x0094 -> line 838
 *   +0x0098 -> line 839
 *   +0x009c -> line 849
 *   +0x00a4 -> line 850
 *   +0x00ac -> line 851
 *   +0x00d8 -> line 858
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void FastPS2Copy(void* pDest_, void* pSrc_, unsigned int NbChars)
{
    unsigned int* pAlignedDestEnd;
    unsigned int* pAlignedDestStart;
    unsigned int lWordsToCopy;
    unsigned int* pSrcEnd;
    unsigned int* pSrc;
    unsigned int* pDest;
    unsigned int NbQW;
    /* TODO: decompile from asm/... */
}
