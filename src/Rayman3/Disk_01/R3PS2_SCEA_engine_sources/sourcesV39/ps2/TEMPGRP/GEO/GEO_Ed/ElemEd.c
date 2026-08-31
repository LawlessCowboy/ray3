/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GEO\GEO_Ed\ElemEd.c */
/* Language: C */
/* Compiler: MW MIPS C Compiler */

#include <stddef.h>

/* Recovered aggregate layouts from MWCC debug type records. */
typedef struct GEO_tdstEdge_ GEO_tdstEdge_;
typedef struct GEO_tdstColor_ GEO_tdstColor_;

struct GEO_tdstEdge_ {
    short xPoints[2]; /* +0x0 */
    /* array */ int st_VectorPoints[2]; /* +0x4 */
};

struct GEO_tdstColor_ {
    float xR; /* +0x0 */
    float xG; /* +0x4 */
    float xB; /* +0x8 */
    float xA; /* +0xc */
};

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GEO\GEO_Ed\ElemEd.c lines 183–187 */
/* addr: 0x002a3f80  size: 128 bytes */
int GEO_lCullingSphere(/* function pointer */ int p_stVpt, /* function pointer */ int p_stSphereCenter, float xRadius, /* function pointer */ int p_stMatrix, int _lCullingResult)
{
    /* aggregate */ int stTempMatrix;
    /* line map: */
    /*   line 183 @ +0x000 */
    /*   line 187 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GEO\GEO_Ed\ElemEd.c lines 1169–1169 */
/* addr: 0x002a4000  size: 32 bytes */
void GEO_vSetElementVisibleInPortalFlag(/* function pointer */ int hObject, short hElement)
{
    /* line map: */
    /*   line 1169 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GEO\GEO_Ed\ElemEd.c lines 352–352 */
/* addr: 0x002a4020  size: 32 bytes */
void GEO_vSetVisualMaterialOfIndexedTriangles(/* function pointer */ int hObject, short hElement, /* function pointer */ int hVisualMaterial)
{
    /* line map: */
    /*   line 352 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GEO\GEO_Ed\ElemEd.c lines 326–326 */
/* addr: 0x002a4040  size: 64 bytes */
void GEO_vSetUVOfIndexedTriangles(/* function pointer */ int hObject, short hElement, short xIndexOfUV, /* function pointer */ int p_stUV)
{
    /* line map: */
    /*   line 326 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GEO\GEO_Ed\ElemEd.c lines 311–311 */
/* addr: 0x002a4080  size: 32 bytes */
int GEO_lGetIndexedTriangleNbFaces(/* function pointer */ int hObject, short hElement)
{
    /* line map: */
    /*   line 311 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GEO\GEO_Ed\ElemEd.c lines 232–234 */
/* addr: 0x002a40a0  size: 92 bytes */
void GEO_vSetIndexedUVOfFaceOfIndexedTriangles(/* function pointer */ int hObject, short hElement, short xIndexOfFace, short xUV1, short xUV2, short xUV3, /* function pointer */ int param6)
{
    /* line map: */
    /*   line 232 @ +0x000 */
    /*   line 232 @ +0x000 */
    /*   line 234 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GEO\GEO_Ed\ElemEd.c lines 213–215 */
/* addr: 0x002a4100  size: 104 bytes */
void GEO_vGetFaceOfIndexedTriangles(/* function pointer */ int hObject, short hElement, short xIndexOfFace, short* p_xPoint1, short* p_xPoint2, short* p_xPoint3, /* function pointer */ int param6)
{
    /* line map: */
    /*   line 213 @ +0x000 */
    /*   line 213 @ +0x000 */
    /*   line 215 @ +0x000 */
    /* TODO: decompile from asm/... */
}
