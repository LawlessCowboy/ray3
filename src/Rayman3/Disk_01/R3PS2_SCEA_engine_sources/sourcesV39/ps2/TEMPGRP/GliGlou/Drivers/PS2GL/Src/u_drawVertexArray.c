/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\u_drawVertexArray.c */
/* Language: C */
/* Compiler: MW MIPS C Compiler */

#include <stddef.h>

/* Recovered aggregate layouts from MWCC debug type records. */
typedef struct GLI_tdstTexture_ GLI_tdstTexture_;
typedef struct AGO_Light_ AGO_Light_;
typedef struct anon_0 anon_0;
typedef struct GEO_tdstColor_ GEO_tdstColor_;
typedef struct anon_1 anon_1;

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
    int p_TextureOfSubstitution; /* +0x44 */
    unsigned char ucBilinearMode; /* +0x48 */
    unsigned char ucCylingMode; /* +0x49 */
    char a255_cFileName[128]; /* +0x4a */
};

struct AGO_Light_ {
    float Position[4]; /* +0x0 */
    float Color[4]; /* +0x10 */
    float SqFar; /* +0x20 */
    float Far; /* +0x24 */
    float AlreadyComputed; /* +0x28 */
    float Distance; /* +0x2c */
};

struct anon_0 {
    float stMat[2][2]; /* +0x0 */
    float stTrans[2]; /* +0x10 */
};

struct GEO_tdstColor_ {
    float xR; /* +0x0 */
    float xG; /* +0x4 */
    float xB; /* +0x8 */
    float xA; /* +0xc */
};

struct anon_1 {
    int pst_Texture; /* +0x0 */
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

int g_bIsTribe;
char g_cSinusEffectState;
unsigned int AGO_g_ulNbLights;
unsigned int GLI_g_NbNormalsToRecompute;
unsigned int GLI_g_CurrentNormalToRecompute;
/* array */ int GLI_g_NormalsToRecomputeArray[50];
float GLI_g_MulVal[4];
float GLI_g_NormalPacker[4];
float GLI_g_TempArray[5000][4];
AGO_Light_ AGO_g_pLightList[8];
static int gs_keepit;
int g_waiting;

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\u_drawVertexArray.c lines 39–46 */
/* addr: 0x002bd4c0  size: 152 bytes */
void GLI_vPrepareDisplayingAGOs(/* function pointer */ int _p_stViewport, /* function pointer */ int p_stCam, /* function pointer */ int p_stWorldMatrix)
{
    /* line map: */
    /*   line 41 @ +0x000 */
    /*   line 41 @ +0x000 */
    /*   line 39 @ +0x000 */
    /*   line 40 @ +0x000 */
    /*   line 42 @ +0x000 */
    /*   line 42 @ +0x000 */
    /*   line 42 @ +0x000 */
    /*   line 46 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\u_drawVertexArray.c lines 1472–1477 */
/* addr: 0x002bd560  size: 116 bytes */
void GLI_vRecomputeNormalsWhileWaitingForVBL(/* function pointer */ int p)
{
    /* line map: */
    /*   line 1472 @ +0x000 */
    /*   line 1475 @ +0x000 */
    /*   line 1477 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\u_drawVertexArray.c lines 1464–1464 */
/* addr: 0x002bd5e0  size: 12 bytes */
void GLI_vEndNormalRecomputation(void)
{
    /* line map: */
    /*   line 1464 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\u_drawVertexArray.c lines 1447–1458 */
/* addr: 0x002bd5f0  size: 152 bytes */
void GLI_vRecomputeAllCharacterNormalsAndWaitForSyncPath(/* function pointer */ int p)
{
    int fakevblwait;
    /* line map: */
    /*   line 1447 @ +0x000 */
    /*   line 1450 @ +0x000 */
    /*   line 1453 @ +0x000 */
    /*   line 1455 @ +0x000 */
    /*   line 1458 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* addr: 0x002bd690  size: 8 bytes */
void GLI_vStartNormalRecomp(void)
{
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\u_drawVertexArray.c lines 1415–1422 */
/* addr: 0x002bd6a0  size: 76 bytes */
void GLI_vRecomputeCharacterNormals(_SDC_Instance_* pInstance, unsigned int* pInstanceNormals, /* function pointer */ int p_stEIT, /* function pointer */ int pPoints, unsigned int xNbPoints, unsigned int NbVertices, /* function pointer */ int p)
{
    /* line map: */
    /*   line 1415 @ +0x000 */
    /*   line 1418 @ +0x000 */
    /*   line 1420 @ +0x000 */
    /*   line 1422 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\u_drawVertexArray.c lines 1159–1385 */
/* addr: 0x002bd6f0  size: 700 bytes */
void GLI_vRecomputeCharacterNormalsReal(unsigned int* pInstanceNormals, /* function pointer */ int p_stEIT, /* function pointer */ int pPoints, unsigned int xNbPoints, unsigned int* pVBLWait, float (*) pTempArray[4])
{
    unsigned int FMask;
    unsigned int Mask;
    unsigned int Adder;
    short* pIndices;
    unsigned short* pIndexArray;
    void* pSPR;
    unsigned int i;
    /* line map: */
    /*   line 1171 @ +0x000 */
    /*   line 1159 @ +0x000 */
    /*   line 1159 @ +0x000 */
    /*   line 1171 @ +0x000 */
    /*   line 1177 @ +0x000 */
    /*   line 1187 @ +0x000 */
    /*   line 1187 @ +0x000 */
    /*   line 1193 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\u_drawVertexArray.c lines 1134–1145 */
/* addr: 0x002bd9b0  size: 112 bytes */
void InitNormalPacker(void)
{
    float fadd;
    /* line map: */
    /*   line 1134 @ +0x000 */
    /*   line 1134 @ +0x000 */
    /*   line 1137 @ +0x000 */
    /*   line 1137 @ +0x000 */
    /*   line 1139 @ +0x000 */
    /*   line 1141 @ +0x000 */
    /*   line 1143 @ +0x000 */
    /*   line 1145 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\u_drawVertexArray.c lines 964–993 */
/* addr: 0x002bda20  size: 196 bytes */
void GLI_vUpdateCharacterVARealInterp(float (*) pDestPV[4], /* function pointer */ int p_stEIT, /* function pointer */ int p_stPoints, /* function pointer */ int p_stPointsArg, float (*) pV[4])
{
    unsigned int offset;
    unsigned int counter;
    float z;
    float y;
    float x;
    unsigned short* pIndexArray;
    unsigned int i;
    /* line map: */
    /*   line 964 @ +0x000 */
    /*   line 967 @ +0x000 */
    /*   line 989 @ +0x000 */
    /*   line 981 @ +0x000 */
    /*   line 983 @ +0x000 */
    /*   line 986 @ +0x000 */
    /*   line 992 @ +0x000 */
    /*   line 989 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\u_drawVertexArray.c lines 909–915 */
/* addr: 0x002bdaf0  size: 216 bytes */
void TestAddAGOLight(/* function pointer */ int pPosition, float* Color, float fardist)
{
    /* line map: */
    /*   line 909 @ +0x000 */
    /*   line 909 @ +0x000 */
    /*   line 912 @ +0x000 */
    /*   line 911 @ +0x000 */
    /*   line 911 @ +0x000 */
    /*   line 913 @ +0x000 */
    /*   line 910 @ +0x000 */
    /*   line 911 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* addr: 0x002bdbd0  size: 8 bytes */
void GLI_vRemovePointLightsAfterProcessing(void)
{
    /* TODO: decompile from asm/... */
}

/* addr: 0x002bdbe0  size: 8 bytes */
void GLI_vRemoveLights(void)
{
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\u_drawVertexArray.c lines 801–851 */
/* addr: 0x002bdbf0  size: 224 bytes */
void FastPS2Copy(void* pDest_, void* pSrc_, unsigned int NbChars)
{
    unsigned int* pAlignedDestEnd;
    unsigned int* pAlignedDestStart;
    unsigned int lWordsToCopy;
    unsigned int* pSrcEnd;
    unsigned int* pSrc;
    unsigned int* pDest;
    unsigned int NbQW;
    /* line map: */
    /*   line 802 @ +0x000 */
    /*   line 802 @ +0x000 */
    /*   line 801 @ +0x000 */
    /*   line 816 @ +0x000 */
    /*   line 821 @ +0x000 */
    /*   line 827 @ +0x000 */
    /*   line 829 @ +0x000 */
    /*   line 833 @ +0x000 */
    /* TODO: decompile from asm/... */
}
