/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\MultiDRV\Src\Light.c */
/* Language: C */
/* Compiler: MW MIPS C Compiler */

#include <stddef.h>

/* Recovered aggregate layouts from MWCC debug type records. */
typedef struct IPO_tdstInstanciatedPhysicalObject_ IPO_tdstInstanciatedPhysicalObject_;
typedef struct PO_tdstPhysicalObject_ PO_tdstPhysicalObject_;
typedef struct SECT_tdstSector_ SECT_tdstSector_;
typedef struct tdstEngineObject_ tdstEngineObject_;
typedef struct MTH4D_tdstVector_ MTH4D_tdstVector_;
typedef struct MTH4D_tdstMatrix_ MTH4D_tdstMatrix_;
typedef struct MAT_tdstTransformation_ MAT_tdstTransformation_;
typedef struct GEO_tdstColor_ GEO_tdstColor_;
typedef struct GLI_tdstZBufferForLight_ GLI_tdstZBufferForLight_;
typedef struct MTH3D_tdstVector_ MTH3D_tdstVector_;
typedef struct GLI_tdstLight_ GLI_tdstLight_;
typedef union HIE_tduLinkedObject_ HIE_tduLinkedObject_;
typedef struct HIE_tdstSuperObject_ HIE_tdstSuperObject_;
typedef struct GEO_tdstGeometricObject_ GEO_tdstGeometricObject_;
typedef struct GEO_tdstDoubledIndex_ GEO_tdstDoubledIndex_;
typedef struct HIE_tdstModifierObject_ HIE_tdstModifierObject_;
typedef struct GEO_tdstParallelBox_ GEO_tdstParallelBox_;
typedef struct GEO_tdstEdge_ GEO_tdstEdge_;
typedef struct tdstGliCaps_ tdstGliCaps_;

typedef enum MAT_tdeTranformationType_ {
    MAT_eTransform_Uninitialized = 0,
    MAT_eTransform_Identity = 1,
    MAT_eTransform_Translation = 2,
    MAT_eTransform_Zoom = 3,
    MAT_eTransform_Scale = 4,
    MAT_eTransform_Rotation = 5,
    MAT_eTransform_RotationZoom = 6,
    MAT_eTransform_RotationScale = 7,
    MAT_eTransform_ComplexRotationScale = 8,
    MAT_eTransform_Undefined = 9,
} MAT_tdeTranformationType_;

struct MTH4D_tdstVector_ {
    float xX; /* +0x0 */
    float xY; /* +0x4 */
    float xZ; /* +0x8 */
    float xW; /* +0xc */
} __attribute__((aligned(16)));

struct MTH4D_tdstMatrix_ {
    MTH4D_tdstVector_ stCol_0; /* +0x0 */
    MTH4D_tdstVector_ stCol_1; /* +0x10 */
    MTH4D_tdstVector_ stCol_2; /* +0x20 */
    MTH4D_tdstVector_ stCol_3; /* +0x30 */
};

struct MAT_tdstTransformation_ {
    MAT_tdeTranformationType_ eType; /* +0x0 */
    unsigned char _extractor_padding_00[12]; /* implicitly added by extractor; +0x4..0xf */
    MTH4D_tdstMatrix_ stTransformMatrix; /* +0x10 */
    MTH4D_tdstVector_ stScaleVector; /* +0x50 */
};

struct GEO_tdstColor_ {
    float xR; /* +0x0 */
    float xG; /* +0x4 */
    float xB; /* +0x8 */
    float xA; /* +0xc */
};

struct GLI_tdstZBufferForLight_ {
    int lSizeX; /* +0x0 */
    int lSizeY; /* +0x4 */
    float fCoefX; /* +0x8 */
    float fCoefY; /* +0xc */
    int p_stZBufferMap; /* +0x10 */
    int p_stMiddleZBufferMap; /* +0x14 */
};

struct MTH3D_tdstVector_ {
    float xX; /* +0x0 */
    float xY; /* +0x4 */
    float xZ; /* +0x8 */
};

struct GLI_tdstLight_ {
    int b_lOnOff; /* +0x0 */
    int bThisLightIsZBuffered; /* +0x4 */
    int lTypeOfLight; /* +0x8 */
    float xFar; /* +0xc */
    float xNear; /* +0x10 */
    float xLittleAlpha; /* +0x14 */
    float xBigAlpha; /* +0x18 */
    float xLittleTangent; /* +0x1c */
    float xBigTangent; /* +0x20 */
    unsigned char _extractor_padding_00[12]; /* implicitly added by extractor; +0x24..0x2f */
    MAT_tdstTransformation_ stMatrix; /* +0x30 */
    GEO_tdstColor_ stColor; /* +0x90 */
    float SqNear; /* +0xa0 */
    float SqFar; /* +0xa4 */
    float OOSqDiv; /* +0xa8 */
    GLI_tdstZBufferForLight_ stZBuffer; /* +0xac */
    unsigned char bValid; /* +0xc4 */
    unsigned char ucObjectLighted; /* +0xc5 */
    unsigned char bIsPainting; /* +0xc6 */
    unsigned char ucIsAlpha; /* +0xc7 */
    MTH3D_tdstVector_ xInter_Min_Pos; /* +0xc8 */
    MTH3D_tdstVector_ xExter_Min_Pos; /* +0xd4 */
    MTH3D_tdstVector_ xInter_Max_Pos; /* +0xe0 */
    MTH3D_tdstVector_ xExter_Max_Pos; /* +0xec */
    MTH3D_tdstVector_ xCenterBox; /* +0xf8 */
    float xRadius; /* +0x104 */
    float xIntensity_Min; /* +0x108 */
    float xIntensity_Max; /* +0x10c */
    GEO_tdstColor_ stBackgroundColor; /* +0x110 */
    int bCreatesShadows; /* +0x120 */
};

union HIE_tduLinkedObject_ {
    HIE_tdstSuperObject_* p_stSuperObject; /* +0x0 */
    GEO_tdstGeometricObject_* p_stGeometricObject; /* +0x0 */
    PO_tdstPhysicalObject_* p_stPhysicalObject; /* +0x0 */
    IPO_tdstInstanciatedPhysicalObject_* p_stInstanciatedPhysicalObject; /* +0x0 */
    SECT_tdstSector_* p_stSector; /* +0x0 */
    tdstEngineObject_* p_stCharacter; /* +0x0 */
    GLI_tdstLight_* p_stLight; /* +0x0 */
    HIE_tdstModifierObject_* p_stModifierObject; /* +0x0 */
    int p_Void; /* +0x0 */
};

struct HIE_tdstSuperObject_ {
    unsigned int ulTypeOfLinkedObject; /* +0x0 */
    HIE_tduLinkedObject_ hLinkedObject; /* +0x4 */
    HIE_tdstSuperObject_* hFirstElementDyn; /* +0x8 */
    HIE_tdstSuperObject_* hLastElementDyn; /* +0xc */
    int lNumberOfElementsDyn; /* +0x10 */
    HIE_tdstSuperObject_* hNextBrotherDyn; /* +0x14 */
    HIE_tdstSuperObject_* hPrevBrotherDyn; /* +0x18 */
    HIE_tdstSuperObject_* hFatherDyn; /* +0x1c */
    MAT_tdstTransformation_* hLocalMatrix; /* +0x20 */
    MAT_tdstTransformation_* hGlobalMatrix; /* +0x24 */
    int lLastComputeFrame; /* +0x28 */
    int lDrawModeMask; /* +0x2c */
    unsigned int ulFlags; /* +0x30 */
    int hVisualBoundingVolume; /* +0x34 */
    int hCollideBoundingVolume; /* +0x38 */
    MTH3D_tdstVector_ stSemiLookAtVector; /* +0x3c */
    float fTransparenceLevel; /* +0x48 */
    unsigned int ulOutlineColor; /* +0x4c */
    int lDisplayPrioriry; /* +0x50 */
    int lIL_Status; /* +0x54 */
    MTH3D_tdstVector_ stIL_AmbientColor; /* +0x58 */
    MTH3D_tdstVector_ stIL_ParallelDirection; /* +0x64 */
    MTH3D_tdstVector_ stIL_ParallelColor; /* +0x70 */
    unsigned char ucSuperImposedOnWhichViewport; /* +0x7c */
    unsigned char bIsSPO; /* +0x7d */
    unsigned char xTransition; /* +0x7e */
};

struct GEO_tdstGeometricObject_ {
    MTH3D_tdstVector_* d_stListOfPoints; /* +0x0 */
    MTH3D_tdstVector_* d_stListOfPointsNormals; /* +0x4 */
    int d_dfVertexTransparency; /* +0x8 */
    int d_xListOfElementsTypes; /* +0xc */
    int d_stListOfElements; /* +0x10 */
    GEO_tdstEdge_* d_stListOfEdges; /* +0x14 */
    GEO_tdstParallelBox_* d_stListOfParallelBoxes; /* +0x18 */
    unsigned int ulType; /* +0x1c */
    short xNbPoints; /* +0x20 */
    short xNbElements; /* +0x22 */
    short xNbEdges; /* +0x24 */
    short xNbParallelBoxes; /* +0x26 */
    float xBoudingSphereRadius; /* +0x28 */
    unsigned char _extractor_padding_00[4]; /* implicitly added by extractor; +0x2c..0x2f */
    MTH4D_tdstVector_ xBoudingSphereCenter; /* +0x30 */
    GEO_tdstDoubledIndex_* d_stListOfEdgesDI; /* +0x40 */
    short xNbEdgesDI; /* +0x44 */
    short xNbOctreeEdges; /* +0x46 */
    int bUsedForShadowDrawing; /* +0x48 */
    int bUsedForShadowCreating; /* +0x4c */
    int pSDC_Data; /* +0x50 */
    unsigned int bIsStatic; /* +0x54 */
    unsigned int glDisplayList; /* +0x58 */
    unsigned char bVTForSinus; /* +0x5c */
};

struct GEO_tdstDoubledIndex_ {
    short a2_xIndex[2]; /* +0x0 */
};

struct HIE_tdstModifierObject_ {
    GEO_tdstGeometricObject_* p_stGeometricObject; /* +0x0 */
    int lMulIntensity; /* +0x4 */
    int lAddIntensity; /* +0x8 */
};

struct GEO_tdstParallelBox_ {
    MTH4D_tdstVector_ stMinPoint; /* +0x0 */
    MTH4D_tdstVector_ stMaxPoint; /* +0x10 */
};

struct GEO_tdstEdge_ {
    short xPoints[2]; /* +0x0 */
    MTH3D_tdstVector_ st_VectorPoints[2]; /* +0x4 */
};

struct tdstGliCaps_ {
    unsigned int ulSize; /* +0x0 */
    unsigned int ulDriverCaps; /* +0x4 */
    unsigned int ulTextureCaps; /* +0x8 */
    unsigned int ulSurfaceCaps; /* +0xc */
    unsigned int ulMemoryCaps; /* +0x10 */
    unsigned int ulTextureMaxSize; /* +0x14 */
    unsigned int ulTotalTextureMemory; /* +0x18 */
    unsigned int ulTotalVideoMemory; /* +0x1c */
    unsigned int ulTotalAGPMemory; /* +0x20 */
    unsigned int ulTexturePerChannelMemory[4]; /* +0x24 */
    unsigned char ucPrimarySurfacePixelFormat; /* +0x34 */
    float fRefreshRate; /* +0x38 */
};

unsigned int GLI_g_ExcluLightIsOn;
static MTH3D_tdstVector_ stPositionOfTheLightInTheObjectMatrix;
static int gs_p_stColor;
static int gs_p_stLightColor;
static float gs_xCoef;
static int GLI_vAddColorFunction;
GLI_tdstLight_ GLI_g_IL_Parallel;
GLI_tdstLight_ GLI_g_IL_Ambient;
unsigned char g_ucTableOfActiveLightsForChar[300];
int gs_CurrentNumberOfLightInViewport;
int gs_aDEF_p_CurrentListOfLight[300];
int SECT_hFatherSector;
int GLI_BIG_GLOBALS_gs_st_CurrentMatrix;

void* HMU_fn_p_vMalloc(unsigned int u32Size, unsigned char bTempMalloc);
void MAT_fn_vSetIdentity(MAT_tdstTransformation_* p_stMatrix);
int SAI_fn_bRemoveValueFromTable(void* _p_vValue, int _eFlags);
int SAI_fn_bInsertLongInTable(void* _p_vValue, int _eFlags);
int SAI_fn_bInsertMTHRealInTable(void* _p_vValue, int _eFlags);
int SAI_fn_bInsertCharInTable(void* _p_vValue, int _eFlags);
void GLI_vAddLightToViewport(int lUnused, GLI_tdstLight_* p_stLight);

extern int gs_aDEFTableOfTextureMemoryChannels;
extern int gs_aDEFTableOfTextureAlreadyRead;
extern int GLI_BIG_GLOBALS_GLI_TurnedScaledDisplecedPoint;
extern int GLI_BIG_GLOBALS_GLI_aDEF_stEnvUV;
extern void* gs_hDefaultMaterial;
extern int GLI_BIG_GLOBALS_p_stActiveFog;
extern int GLI_BIG_GLOBALS_xFogIsOn;
extern int GLI_BIG_GLOBALS_xGlobalAlpha;
extern float g_xVideoFrameDurationInSeconds;
extern int GLI_gsIsInit;
extern tdstGliCaps_ GLI_g_stCaps;

void GLI_xCreateMaterial(void** hMaterial);
void GLI_vIniTextRead(void);
void GLI_vCreateObjectsReference(void);
void GLI_vInitWaterplaneModule(void);
void GLI_vInitLensFlare(void);
void GLI_xInitMatrixStack(void);
void GLI_fn_vInitMenuBackground(void);
void GLI_DRV_xInitDriver(void* pUnused, int l1, int l2, int l3, int l4);
void GLI_vSetModifierIntensity(int lMul, int lAdd);

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\MultiDRV\Src\Light.c lines 99–169 */
/* addr: 0x002a88e0  size: 316 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 99
 *   +0x0008 -> line 103
 *   +0x0014 -> line 107
 *   +0x0024 -> line 108
 *   +0x0034 -> line 110
 *   +0x0040 -> line 111
 *   +0x0050 -> line 115
 *   +0x0064 -> line 121
 *   +0x0068 -> line 116
 *   +0x0070 -> line 121
 *   +0x0074 -> line 116
 *   +0x007c -> line 121
 *   +0x0088 -> line 132
 *   +0x008c -> line 124
 *   +0x0090 -> line 126
 *   +0x0094 -> line 132
 *   +0x009c -> line 133
 *   +0x00a4 -> line 134
 *   +0x00ac -> line 136
 *   +0x00b4 -> line 137
 *   +0x00bc -> line 138
 *   +0x00c4 -> line 139
 *   +0x00cc -> line 143
 *   +0x00d0 -> line 145
 *   +0x00ec -> line 152
 *   +0x00f8 -> line 164
 *   +0x0100 -> line 166
 *   +0x0104 -> line 164
 *   +0x0108 -> line 166
 *   +0x010c -> line 164
 *   +0x0120 -> line 166
 *   +0x0128 -> line 168
 *   +0x0130 -> line 169
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void GLI_xInitGli(void)
{
    static int lFirst = 1;
    if (lFirst)
    {
        lFirst = 0;
        gs_aDEFTableOfTextureMemoryChannels = (int)malloc(0x640);
        memset(gs_aDEFTableOfTextureMemoryChannels, 0, 0x640);
        gs_aDEFTableOfTextureAlreadyRead = (int)malloc(0x640);
        memset(gs_aDEFTableOfTextureAlreadyRead, 0, 0x640);
        GLI_BIG_GLOBALS_GLI_TurnedScaledDisplecedPoint = (int)HMU_fn_p_vMalloc(0x13890, 1);
        GLI_BIG_GLOBALS_GLI_TurnedScaledDisplecedPoint = (int)(((unsigned int)GLI_BIG_GLOBALS_GLI_TurnedScaledDisplecedPoint + 15) & 0xFFFFFFF0);
        GLI_BIG_GLOBALS_GLI_aDEF_stEnvUV = (int)HMU_fn_p_vMalloc(0x9C40, 1);
        GLI_BIG_GLOBALS_p_stActiveFog = 0;
        GLI_BIG_GLOBALS_xFogIsOn = 0;
        GLI_BIG_GLOBALS_xGlobalAlpha = 0;
        GLI_xCreateMaterial(&gs_hDefaultMaterial);
        GLI_vIniTextRead();
        GLI_vCreateObjectsReference();
        GLI_vInitWaterplaneModule();
        GLI_vInitLensFlare();
        GLI_xInitMatrixStack();
        GLI_fn_vInitMenuBackground();
    }
    GLI_g_stCaps.fRefreshRate = 0.0f;
    GLI_DRV_xInitDriver(NULL, 1, 0x280, 0x1C0, 0x20);
    GLI_g_stCaps.fRefreshRate = 60.0f;
    g_xVideoFrameDurationInSeconds = 1.0f / GLI_g_stCaps.fRefreshRate;
    GLI_vSetModifierIntensity(100, 0);
    GLI_gsIsInit = 1;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\MultiDRV\Src\Light.c lines 977–977 */
/* addr: 0x002a8a20  size: 8 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 977
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
float GLI_fn_xFogGetBlendFar(GLI_tdstLight_* p_stLight)
{
    return *(float*)((unsigned char*)p_stLight + 0x108);
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\MultiDRV\Src\Light.c lines 967–967 */
/* addr: 0x002a8a30  size: 8 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 967
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
float GLI_fn_xFogGetBlendNear(GLI_tdstLight_* p_stLight)
{
    return p_stLight->xBigAlpha;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\MultiDRV\Src\Light.c lines 957–957 */
/* addr: 0x002a8a40  size: 8 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 957
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
float GLI_fn_xFogGetInfinite(GLI_tdstLight_* p_stLight)
{
    return p_stLight->xLittleAlpha;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\MultiDRV\Src\Light.c lines 947–947 */
/* addr: 0x002a8a50  size: 8 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 947
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
float GLI_fn_xFogGetFar(GLI_tdstLight_* p_stLight)
{
    return p_stLight->xFar;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\MultiDRV\Src\Light.c lines 937–937 */
/* addr: 0x002a8a60  size: 8 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 937
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
float GLI_fn_xFogGetNear(GLI_tdstLight_* p_stLight)
{
    return p_stLight->xNear;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\MultiDRV\Src\Light.c lines 904–904 */
/* addr: 0x002a8a70  size: 8 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 904
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
unsigned char GLI_ucGetObjectLighted(GLI_tdstLight_* p_stLight)
{
    return *(unsigned char*)((unsigned char*)p_stLight + 0xC5);
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\MultiDRV\Src\Light.c lines 833–834 */
/* addr: 0x002a8a80  size: 36 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 833
 *   +0x001c -> line 834
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void GLI_xGetLightBackgroundColor(GLI_tdstLight_* p_stLight, GEO_tdstColor_* p_stColor)
{
    /* line map: */
    /*   line 834 @ +0x000 */
    *(GEO_tdstColor_*)p_stColor = *(GEO_tdstColor_* )((unsigned char*)p_stLight + 0x110);
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\MultiDRV\Src\Light.c lines 764–765 */
/* addr: 0x002a8ab0  size: 12 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 764
 *   +0x0004 -> line 765
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void GLI_vSetLightType(GLI_tdstLight_* p_stLight, unsigned short lNewType)
{
    p_stLight->lTypeOfLight = lNewType;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\MultiDRV\Src\Light.c lines 760–760 */
/* addr: 0x002a8ac0  size: 8 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 760
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
unsigned short GLI_lGetLightType(GLI_tdstLight_* p_stLight)
{
    return p_stLight->lTypeOfLight;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\MultiDRV\Src\Light.c lines 750–752 */
/* addr: 0x002a8ad0  size: 20 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 750
 *   +0x0008 -> line 751
 *   +0x000c -> line 752
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void GLI_vGetLightAlphas(GLI_tdstLight_* p_stLight, float* p_xLittleAlpha, float* p_xBigAlpha)
{
    /* line map: */
    /*   line 751 @ +0x000 */
    *p_xLittleAlpha = p_stLight->xLittleAlpha;
    *p_xBigAlpha = p_stLight->xBigAlpha;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\MultiDRV\Src\Light.c lines 741–746 */
/* addr: 0x002a8af0  size: 92 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 741
 *   +0x0004 -> line 744
 *   +0x0008 -> line 741
 *   +0x000c -> line 744
 *   +0x0010 -> line 741
 *   +0x001c -> line 742
 *   +0x0020 -> line 744
 *   +0x0024 -> line 743
 *   +0x0028 -> line 744
 *   +0x0034 -> line 745
 *   +0x0048 -> line 746
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
float tanf(float x);

void GLI_vSetLightAlphas(GLI_tdstLight_* p_stLight, float xLittleAlpha, float xBigAlpha)
{
    p_stLight->xLittleAlpha = xLittleAlpha;
    p_stLight->xBigAlpha = xBigAlpha;
    p_stLight->xLittleTangent = tanf(0.5f * xLittleAlpha);
    p_stLight->xBigTangent = tanf(0.5f * xBigAlpha);
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\MultiDRV\Src\Light.c lines 733–735 */
/* addr: 0x002a8b50  size: 20 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 733
 *   +0x0008 -> line 734
 *   +0x000c -> line 735
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void GLI_vGetLightNearFar(GLI_tdstLight_* p_stLight, float* p_xNear, float* p_xFar)
{
    /* line map: */
    /*   line 734 @ +0x000 */
    *p_xNear = p_stLight->xNear;
    *p_xFar = p_stLight->xFar;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\MultiDRV\Src\Light.c lines 718–729 */
/* addr: 0x002a8b70  size: 12 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 718
 *   +0x0004 -> line 729
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void GLI_vSetLightNearFar(GLI_tdstLight_* p_stLight, float xNear, float xFar)
{
    p_stLight->xNear = xNear;
    p_stLight->xFar = xFar;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\MultiDRV\Src\Light.c lines 704–705 */
/* addr: 0x002a8b80  size: 52 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 704
 *   +0x002c -> line 705
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void GLI_xSetLightMatrix(GLI_tdstLight_* p_stLight, MAT_tdstTransformation_* p_stMatrix)
{
    p_stLight->stMatrix = *p_stMatrix;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\MultiDRV\Src\Light.c lines 691–692 */
/* addr: 0x002a8bc0  size: 36 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 691
 *   +0x001c -> line 692
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void GLI_xGetLightColor(GLI_tdstLight_* p_stLight, GEO_tdstColor_* p_stColor)
{
    /* line map: */
    /*   line 692 @ +0x000 */
    *(GEO_tdstColor_*)p_stColor = *(GEO_tdstColor_* )((unsigned char*)p_stLight + 0x90);
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\MultiDRV\Src\Light.c lines 686–687 */
/* addr: 0x002a8bf0  size: 36 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 686
 *   +0x001c -> line 687
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void GLI_xSetLightColor(GLI_tdstLight_* p_stLight, GEO_tdstColor_* p_stColor)
{
    /* line map: */
    /*   line 687 @ +0x000 */
    *(GEO_tdstColor_* )((unsigned char*)p_stLight + 0x90) = *(GEO_tdstColor_*)p_stColor;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\MultiDRV\Src\Light.c lines 678–679 */
/* addr: 0x002a8c20  size: 12 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 678
 *   +0x0004 -> line 679
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void GLI_xGetLightState(GLI_tdstLight_* p_stLight, int* pb_lOnOff)
{
    *pb_lOnOff = p_stLight->b_lOnOff;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\MultiDRV\Src\Light.c lines 674–674 */
/* addr: 0x002a8c30  size: 8 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 674
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void GLI_xSetLightState(GLI_tdstLight_* p_stLight, int b_lOnOff)
{
    p_stLight->b_lOnOff = b_lOnOff;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\MultiDRV\Src\Light.c lines 609–625 */
/* addr: 0x002a8c40  size: 180 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 609
 *   +0x0014 -> line 610
 *   +0x001c -> line 614
 *   +0x0028 -> line 615
 *   +0x0034 -> line 616
 *   +0x0040 -> line 617
 *   +0x004c -> line 618
 *   +0x0058 -> line 619
 *   +0x0064 -> line 620
 *   +0x0070 -> line 621
 *   +0x007c -> line 622
 *   +0x0088 -> line 623
 *   +0x0094 -> line 624
 *   +0x00a0 -> line 625
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void GLI_vRemoveLightForInit(GLI_tdstLight_* p_stLight, unsigned int eUserFlags)
{
    SAI_fn_bRemoveValueFromTable(p_stLight, eUserFlags);
    SAI_fn_bRemoveValueFromTable(&p_stLight->xFar, eUserFlags);
    SAI_fn_bRemoveValueFromTable(&p_stLight->xNear, eUserFlags);
    SAI_fn_bRemoveValueFromTable(&p_stLight->xLittleAlpha, eUserFlags);
    SAI_fn_bRemoveValueFromTable(&p_stLight->xBigAlpha, eUserFlags);
    SAI_fn_bRemoveValueFromTable(&p_stLight->xLittleTangent, eUserFlags);
    SAI_fn_bRemoveValueFromTable(&p_stLight->xBigTangent, eUserFlags);
    SAI_fn_bRemoveValueFromTable(&p_stLight->stColor.xR, eUserFlags);
    SAI_fn_bRemoveValueFromTable(&p_stLight->stColor.xG, eUserFlags);
    SAI_fn_bRemoveValueFromTable(&p_stLight->stColor.xB, eUserFlags);
    SAI_fn_bRemoveValueFromTable(&p_stLight->stColor.xA, eUserFlags);
    SAI_fn_bRemoveValueFromTable(&p_stLight->ucObjectLighted, eUserFlags);
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\MultiDRV\Src\Light.c lines 590–606 */
/* addr: 0x002a8d00  size: 180 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 590
 *   +0x0014 -> line 591
 *   +0x001c -> line 595
 *   +0x0028 -> line 596
 *   +0x0034 -> line 597
 *   +0x0040 -> line 598
 *   +0x004c -> line 599
 *   +0x0058 -> line 600
 *   +0x0064 -> line 601
 *   +0x0070 -> line 602
 *   +0x007c -> line 603
 *   +0x0088 -> line 604
 *   +0x0094 -> line 605
 *   +0x00a0 -> line 606
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void GLI_vStoreLightForInit(GLI_tdstLight_* p_stLight, unsigned int eUserFlags)
{
    SAI_fn_bInsertLongInTable(p_stLight, eUserFlags);
    SAI_fn_bInsertMTHRealInTable(&p_stLight->xFar, eUserFlags);
    SAI_fn_bInsertMTHRealInTable(&p_stLight->xNear, eUserFlags);
    SAI_fn_bInsertMTHRealInTable(&p_stLight->xLittleAlpha, eUserFlags);
    SAI_fn_bInsertMTHRealInTable(&p_stLight->xBigAlpha, eUserFlags);
    SAI_fn_bInsertMTHRealInTable(&p_stLight->xLittleTangent, eUserFlags);
    SAI_fn_bInsertMTHRealInTable(&p_stLight->xBigTangent, eUserFlags);
    SAI_fn_bInsertMTHRealInTable(&p_stLight->stColor.xR, eUserFlags);
    SAI_fn_bInsertMTHRealInTable(&p_stLight->stColor.xG, eUserFlags);
    SAI_fn_bInsertMTHRealInTable(&p_stLight->stColor.xB, eUserFlags);
    SAI_fn_bInsertMTHRealInTable(&p_stLight->stColor.xA, eUserFlags);
    SAI_fn_bInsertCharInTable(&p_stLight->ucObjectLighted, eUserFlags);
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\MultiDRV\Src\Light.c lines 514–581 */
/* addr: 0x002a8dc0  size: 396 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 514
 *   +0x0004 -> line 519
 *   +0x0008 -> line 514
 *   +0x000c -> line 518
 *   +0x0010 -> line 514
 *   +0x0014 -> line 518
 *   +0x0018 -> line 514
 *   +0x001c -> line 519
 *   +0x0020 -> line 517
 *   +0x0024 -> line 518
 *   +0x0028 -> line 519
 *   +0x0030 -> line 524
 *   +0x0034 -> line 520
 *   +0x0038 -> line 524
 *   +0x003c -> line 521
 *   +0x0040 -> line 520
 *   +0x0044 -> line 533
 *   +0x0048 -> line 520
 *   +0x004c -> line 521
 *   +0x0054 -> line 533
 *   +0x005c -> line 522
 *   +0x0060 -> line 536
 *   +0x0064 -> line 522
 *   +0x0068 -> line 523
 *   +0x0070 -> line 526
 *   +0x0074 -> line 536
 *   +0x0078 -> line 526
 *   +0x007c -> line 528
 *   +0x0084 -> line 529
 *   +0x008c -> line 531
 *   +0x0090 -> line 536
 *   +0x0098 -> line 538
 *   +0x00a4 -> line 542
 *   +0x00a8 -> line 538
 *   +0x00ac -> line 540
 *   +0x00b0 -> line 538
 *   +0x00b4 -> line 541
 *   +0x00b8 -> line 538
 *   +0x00bc -> line 542
 *   +0x00c0 -> line 541
 *   +0x00c4 -> line 540
 *   +0x00c8 -> line 538
 *   +0x00cc -> line 542
 *   +0x00d4 -> line 559
 *   +0x00d8 -> line 561
 *   +0x00dc -> line 559
 *   +0x00e0 -> line 576
 *   +0x00e4 -> line 561
 *   +0x00e8 -> line 564
 *   +0x00ec -> line 561
 *   +0x00f0 -> line 560
 *   +0x00f4 -> line 563
 *   +0x00f8 -> line 560
 *   +0x00fc -> line 563
 *   +0x0104 -> line 571
 *   +0x010c -> line 576
 *   +0x0110 -> line 578
 *   +0x0114 -> line 576
 *   +0x0118 -> line 564
 *   +0x011c -> line 578
 *   +0x0120 -> line 564
 *   +0x0124 -> line 565
 *   +0x012c -> line 566
 *   +0x0134 -> line 567
 *   +0x013c -> line 569
 *   +0x0144 -> line 572
 *   +0x014c -> line 574
 *   +0x0150 -> line 578
 *   +0x0158 -> line 580
 *   +0x0178 -> line 581
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void GLI_vAddInternalLightToViewportGhost(void)
{
    GLI_tdstLight_* p_stAmbient;
    GLI_tdstLight_* p_stParallel;
    p_stAmbient = &GLI_g_IL_Ambient;
    GLI_g_IL_Ambient.lTypeOfLight = 4;
    MAT_fn_vSetIdentity(&GLI_g_IL_Ambient.stMatrix);
    GLI_g_IL_Ambient.b_lOnOff = 1;
    GLI_g_IL_Ambient.stColor.xR = 0.5f;
    GLI_g_IL_Ambient.stColor.xG = 0.5f;
    GLI_g_IL_Ambient.stColor.xB = 0.5f;
    GLI_g_IL_Ambient.stColor.xA = 0.0f;
    GLI_g_IL_Ambient.stZBuffer.p_stZBufferMap = 0;
    GLI_g_IL_Ambient.bValid = 1;
    GLI_g_IL_Ambient.bIsPainting = 0;
    GLI_g_IL_Ambient.bCreatesShadows = 0;
    GLI_g_IL_Ambient.ucObjectLighted = 2;
    if (gs_CurrentNumberOfLightInViewport != 300)
    {
        gs_aDEF_p_CurrentListOfLight[gs_CurrentNumberOfLightInViewport] = (int)p_stAmbient;
        gs_CurrentNumberOfLightInViewport++;
    }
    p_stParallel = &GLI_g_IL_Parallel;
    GLI_g_IL_Parallel.lTypeOfLight = 1;
    MAT_fn_vSetIdentity(&GLI_g_IL_Parallel.stMatrix);
    GLI_g_IL_Parallel.stMatrix.stTransformMatrix.stCol_2.xX = 0.0f;
    GLI_g_IL_Parallel.stMatrix.stTransformMatrix.stCol_2.xY = 0.0f;
    GLI_g_IL_Parallel.stMatrix.stTransformMatrix.stCol_2.xZ = -1.0f;
    GLI_g_IL_Parallel.b_lOnOff = 1;
    GLI_g_IL_Parallel.stColor.xR = 1.0f;
    GLI_g_IL_Parallel.stColor.xG = 1.0f;
    GLI_g_IL_Parallel.stColor.xB = 1.0f;
    GLI_g_IL_Parallel.stColor.xA = 1.0f;
    GLI_g_IL_Parallel.stZBuffer.p_stZBufferMap = 0;
    GLI_g_IL_Parallel.bValid = 1;
    GLI_g_IL_Parallel.bIsPainting = 0;
    GLI_g_IL_Parallel.bCreatesShadows = 0;
    GLI_g_IL_Parallel.ucObjectLighted = 2;
    if (gs_CurrentNumberOfLightInViewport != 300)
    {
        gs_aDEF_p_CurrentListOfLight[gs_CurrentNumberOfLightInViewport] = (int)p_stParallel;
        gs_CurrentNumberOfLightInViewport++;
    }
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\MultiDRV\Src\Light.c lines 458–510 */
/* addr: 0x002a8f50  size: 452 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 458
 *   +0x0004 -> line 463
 *   +0x0008 -> line 458
 *   +0x000c -> line 462
 *   +0x0010 -> line 458
 *   +0x0014 -> line 462
 *   +0x0018 -> line 458
 *   +0x0030 -> line 461
 *   +0x0034 -> line 462
 *   +0x0038 -> line 463
 *   +0x0044 -> line 464
 *   +0x0050 -> line 468
 *   +0x0054 -> line 465
 *   +0x005c -> line 477
 *   +0x0060 -> line 480
 *   +0x0068 -> line 465
 *   +0x006c -> line 466
 *   +0x0078 -> line 467
 *   +0x0084 -> line 468
 *   +0x008c -> line 477
 *   +0x0094 -> line 470
 *   +0x009c -> line 472
 *   +0x00a4 -> line 473
 *   +0x00ac -> line 475
 *   +0x00b0 -> line 480
 *   +0x00b8 -> line 482
 *   +0x00bc -> line 486
 *   +0x00c0 -> line 482
 *   +0x00cc -> line 484
 *   +0x00d0 -> line 482
 *   +0x00d4 -> line 485
 *   +0x00d8 -> line 482
 *   +0x00dc -> line 486
 *   +0x00e0 -> line 485
 *   +0x00e4 -> line 484
 *   +0x00e8 -> line 482
 *   +0x00ec -> line 486
 *   +0x00f4 -> line 488
 *   +0x00fc -> line 492
 *   +0x0100 -> line 505
 *   +0x0104 -> line 507
 *   +0x010c -> line 488
 *   +0x0110 -> line 489
 *   +0x011c -> line 490
 *   +0x0128 -> line 492
 *   +0x0130 -> line 493
 *   +0x013c -> line 494
 *   +0x0148 -> line 495
 *   +0x0154 -> line 500
 *   +0x015c -> line 505
 *   +0x0164 -> line 496
 *   +0x016c -> line 498
 *   +0x0174 -> line 501
 *   +0x017c -> line 503
 *   +0x0180 -> line 507
 *   +0x0188 -> line 509
 *   +0x01a8 -> line 510
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void GLI_vAddInternalLightToViewport(int lUnused, MTH3D_tdstVector_* pAmbientColor, MTH3D_tdstVector_* pParallelDirection, MTH3D_tdstVector_* pParallelColor)
{
    GLI_tdstLight_* p_stAmbient;
    GLI_tdstLight_* p_stParallel;
    p_stAmbient = &GLI_g_IL_Ambient;
    GLI_g_IL_Ambient.lTypeOfLight = 4;
    MAT_fn_vSetIdentity(&GLI_g_IL_Ambient.stMatrix);
    GLI_g_IL_Ambient.b_lOnOff = 1;
    GLI_g_IL_Ambient.stColor.xR = pAmbientColor->xX;
    GLI_g_IL_Ambient.stColor.xG = pAmbientColor->xY;
    GLI_g_IL_Ambient.stColor.xB = pAmbientColor->xZ;
    GLI_g_IL_Ambient.stColor.xA = 0.5f;
    GLI_g_IL_Ambient.stZBuffer.p_stZBufferMap = 0;
    GLI_g_IL_Ambient.bValid = 1;
    GLI_g_IL_Ambient.bIsPainting = 0;
    GLI_g_IL_Ambient.bCreatesShadows = 0;
    GLI_g_IL_Ambient.ucObjectLighted = 2;
    if (gs_CurrentNumberOfLightInViewport != 300)
    {
        gs_aDEF_p_CurrentListOfLight[gs_CurrentNumberOfLightInViewport] = (int)p_stAmbient;
        gs_CurrentNumberOfLightInViewport++;
    }
    p_stParallel = &GLI_g_IL_Parallel;
    GLI_g_IL_Parallel.lTypeOfLight = 1;
    MAT_fn_vSetIdentity(&GLI_g_IL_Parallel.stMatrix);
    GLI_g_IL_Parallel.stMatrix.stTransformMatrix.stCol_2.xX = pParallelDirection->xX;
    GLI_g_IL_Parallel.stMatrix.stTransformMatrix.stCol_2.xY = pParallelDirection->xY;
    GLI_g_IL_Parallel.stMatrix.stTransformMatrix.stCol_2.xZ = pParallelDirection->xZ;
    GLI_g_IL_Parallel.b_lOnOff = 1;
    GLI_g_IL_Parallel.stColor.xR = pParallelColor->xX;
    GLI_g_IL_Parallel.stColor.xG = pParallelColor->xY;
    GLI_g_IL_Parallel.stColor.xB = pParallelColor->xZ;
    GLI_g_IL_Parallel.stColor.xA = 0.0f;
    GLI_g_IL_Parallel.stZBuffer.p_stZBufferMap = 0;
    GLI_g_IL_Parallel.bValid = 1;
    GLI_g_IL_Parallel.bIsPainting = 0;
    GLI_g_IL_Parallel.bCreatesShadows = 0;
    GLI_g_IL_Parallel.ucObjectLighted = 2;
    if (gs_CurrentNumberOfLightInViewport != 300)
    {
        gs_aDEF_p_CurrentListOfLight[gs_CurrentNumberOfLightInViewport] = (int)p_stParallel;
        gs_CurrentNumberOfLightInViewport++;
    }
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\MultiDRV\Src\Light.c lines 445–445 */
/* addr: 0x002a9120  size: 8 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 445
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void GLI_vCopyLight(GLI_tdstLight_* p_stLightDst, GLI_tdstLight_* p_stLightSrc)
{
    memcpy(p_stLightDst, p_stLightSrc, 0x130);
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\MultiDRV\Src\Light.c lines 413–441 */
/* addr: 0x002a9130  size: 216 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 413
 *   +0x0018 -> line 415
 *   +0x0028 -> line 416
 *   +0x0034 -> line 419
 *   +0x0038 -> line 421
 *   +0x0044 -> line 422
 *   +0x004c -> line 423
 *   +0x0050 -> line 435
 *   +0x0054 -> line 423
 *   +0x0058 -> line 422
 *   +0x005c -> line 423
 *   +0x0064 -> line 424
 *   +0x006c -> line 425
 *   +0x0074 -> line 426
 *   +0x007c -> line 428
 *   +0x0084 -> line 430
 *   +0x008c -> line 431
 *   +0x0094 -> line 433
 *   +0x009c -> line 435
 *   +0x00a4 -> line 437
 *   +0x00ac -> line 438
 *   +0x00b4 -> line 439
 *   +0x00bc -> line 440
 *   +0x00c4 -> line 441
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void GLI_xCreateLight(GLI_tdstLight_** h_stLight, int lTypeOfLight)
{
    *h_stLight = (GLI_tdstLight_*)HMU_fn_p_vMalloc(0x130, 0);
    if (*h_stLight != NULL)
    {
        (*h_stLight)->lTypeOfLight = lTypeOfLight;
        MAT_fn_vSetIdentity(&(*h_stLight)->stMatrix);
        (*h_stLight)->b_lOnOff = 1;
        (*h_stLight)->stColor.xR = 0.8f;
        (*h_stLight)->stColor.xG = 0.8f;
        (*h_stLight)->stColor.xB = 0.8f;
        (*h_stLight)->stColor.xA = 0.8f;
        (*h_stLight)->stZBuffer.p_stZBufferMap = 0;
        (*h_stLight)->bValid = 1;
        (*h_stLight)->bIsPainting = 0;
        (*h_stLight)->bCreatesShadows = 0;
        (*h_stLight)->ucObjectLighted = 3;
        (*h_stLight)->stBackgroundColor.xR = 0.0f;
        (*h_stLight)->stBackgroundColor.xG = 0.0f;
        (*h_stLight)->stBackgroundColor.xB = 0.0f;
        (*h_stLight)->stBackgroundColor.xA = 0.0f;
    }
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\MultiDRV\Src\Light.c lines 402–405 */
/* addr: 0x002a9210  size: 80 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 402
 *   +0x000c -> line 403
 *   +0x0010 -> line 402
 *   +0x0018 -> line 403
 *   +0x0024 -> line 404
 *   +0x0048 -> line 405
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void GLI_xSetViewportLightsOnOff(unsigned char bOnOff)
{
    int i;
    GLI_g_ExcluLightIsOn = bOnOff ? 0 : 1;
    for (i = 0; i < gs_CurrentNumberOfLightInViewport; i++)
        ((GLI_tdstLight_*)gs_aDEF_p_CurrentListOfLight[i])->bValid = bOnOff;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\MultiDRV\Src\Light.c lines 388–388 */
/* addr: 0x002a9260  size: 8 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 388
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void GLI_vClearListOfLightInViewport(void)
{
    gs_CurrentNumberOfLightInViewport = 0;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\MultiDRV\Src\Light.c lines 373–376 */
/* addr: 0x002a9270  size: 36 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 373
 *   +0x000c -> line 374
 *   +0x0018 -> line 375
 *   +0x001c -> line 376
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void GLI_vPopLightsInViewport(int lUnused, unsigned int lNbLightsToPop)
{
    gs_CurrentNumberOfLightInViewport -= lNbLightsToPop;
    if (gs_CurrentNumberOfLightInViewport < 0)
        gs_CurrentNumberOfLightInViewport = 0;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\MultiDRV\Src\Light.c lines 359–362 */
/* addr: 0x002a92a0  size: 52 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 359
 *   +0x0010 -> line 361
 *   +0x002c -> line 362
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void GLI_vAddLightToViewport(int lUnused, GLI_tdstLight_* p_stLight)
{
    if (gs_CurrentNumberOfLightInViewport != 300)
    {
        gs_aDEF_p_CurrentListOfLight[gs_CurrentNumberOfLightInViewport] = (int)p_stLight;
        gs_CurrentNumberOfLightInViewport++;
    }
}
