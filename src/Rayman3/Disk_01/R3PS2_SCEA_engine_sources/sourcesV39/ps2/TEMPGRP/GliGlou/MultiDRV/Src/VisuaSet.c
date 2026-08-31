/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\MultiDRV\Src\VisuaSet.c */
/* Language: C */
/* Compiler: MW MIPS C Compiler */

#include <stddef.h>

/* Recovered aggregate layouts from MWCC debug type records. */
typedef struct ISI_tdstColor_ ISI_tdstColor_;
typedef struct GEO_tdstEdge_ GEO_tdstEdge_;
typedef union GEO_tduVSObject_ GEO_tduVSObject_;

struct ISI_tdstColor_ {
    short xRed; /* +0x0 */
    short xGreen; /* +0x2 */
    short xBlue; /* +0x4 */
    short xAlpha; /* +0x6 */
};

struct GEO_tdstEdge_ {
    short xPoints[2]; /* +0x0 */
    /* array */ int st_VectorPoints[2]; /* +0x4 */
};

union GEO_tduVSObject_ {
    int p_stGeometricObject; /* +0x0 */
    int p_stMorphObject; /* +0x0 */
};

int g_p_stLightMapUForNextObjectToDraw;
int g_p_stRawRLIsForThisObject;
int g_p_stRLIForNextObjectToDraw;

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\MultiDRV\Src\VisuaSet.c lines 117–117 */
/* addr: 0x002ab360  size: 16 bytes */
void TEX_vSetTextureQualityLevel(GLI_tdstTexture_* p_stTexture, char ucTextQuality)
{
    /* line map: */
    /*   line 117 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\MultiDRV\Src\VisuaSet.c lines 461–465 */
/* addr: 0x002ab370  size: 104 bytes */
void GLI_hComputeBlendRLI(/* function pointer */ int hVisualSet, unsigned char ucIndex1, unsigned char ucIndex2, short xNumISILOD, float xPercent)
{
    /* line map: */
    /*   line 461 @ +0x000 */
    /*   line 461 @ +0x000 */
    /*   line 465 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\MultiDRV\Src\VisuaSet.c lines 452–452 */
/* addr: 0x002ab3e0  size: 48 bytes */
void GLI_hGetRLI(/* function pointer */ int hVisualSet, unsigned char ucIndex)
{
    /* line map: */
    /*   line 452 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\MultiDRV\Src\VisuaSet.c lines 432–432 */
/* addr: 0x002ab410  size: 56 bytes */
void GLI_lSendVisualSetToViewport2(/* function pointer */ int p_stVpt, /* function pointer */ int p_stVisualSet, int lDrawModeMask)
{
    /* line map: */
    /*   line 432 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\MultiDRV\Src\VisuaSet.c lines 342–359 */
/* addr: 0x002ab450  size: 188 bytes */
void GLI_lSendVisualSetToViewportWithRLI2Flag(/* function pointer */ int p_stVpt, /* function pointer */ int p_stVisualSet, int lDrawModeMask, void* hISI, unsigned int ulSuperObjectFlag)
{
    /* line map: */
    /*   line 342 @ +0x000 */
    /*   line 345 @ +0x000 */
    /*   line 345 @ +0x000 */
    /*   line 349 @ +0x000 */
    /*   line 353 @ +0x000 */
    /*   line 357 @ +0x000 */
    /*   line 359 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\MultiDRV\Src\VisuaSet.c lines 236–252 */
/* addr: 0x002ab510  size: 172 bytes */
void GLI_lSendVisualSetToViewportWithRLI2(/* function pointer */ int p_stVpt, /* function pointer */ int p_stVisualSet, int lDrawModeMask, void* hISI)
{
    /* line map: */
    /*   line 236 @ +0x000 */
    /*   line 239 @ +0x000 */
    /*   line 239 @ +0x000 */
    /*   line 243 @ +0x000 */
    /*   line 246 @ +0x000 */
    /*   line 250 @ +0x000 */
    /*   line 252 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* addr: 0x002ab5c0  size: 8 bytes */
int GLI_lGetVisualSetNumbertOfLOD(/* function pointer */ int p_stVisualSet)
{
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\MultiDRV\Src\VisuaSet.c lines 191–194 */
/* addr: 0x002ab5d0  size: 92 bytes */
void GLI_hGetVisualSetGeometricForADistance(/* function pointer */ int p_stVSE, float xThreshold)
{
    int lLod;
    /* line map: */
    /*   line 191 @ +0x000 */
    /*   line 194 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\MultiDRV\Src\VisuaSet.c lines 180–183 */
/* addr: 0x002ab630  size: 60 bytes */
void GLI_vGetVisualSetLOD(/* function pointer */ int p_stVisualSet, int lNumberOfLodToGet, float* p_xThreshold, /* function pointer */ int h_stObject)
{
    /* line map: */
    /*   line 180 @ +0x000 */
    /*   line 183 @ +0x000 */
    /* TODO: decompile from asm/... */
}
