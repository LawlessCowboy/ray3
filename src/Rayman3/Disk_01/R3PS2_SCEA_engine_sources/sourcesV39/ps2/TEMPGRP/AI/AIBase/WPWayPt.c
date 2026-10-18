/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIBase\WPWayPt.c */
/* Language: C */
/* Compiler: MW MIPS C Compiler */

#include <stddef.h>
#include "r3/AI.h"
#include "r3/CINE.h"
#include "r3/COL.h"
#include "r3/ENG.h"
#include "r3/GEO.h"
#include "r3/GMT.h"
#include "r3/HIE.h"
#include "r3/LST2.h"
#include "r3/MAT.h"
#include "r3/MOR.h"
#include "r3/MTH.h"
#include "r3/SECT.h"
#include "r3/WP.h"

/* Recovered aggregate layouts from MWCC debug type records. */
typedef struct GLI_tdstLight_ GLI_tdstLight_;
typedef struct GLI_tdstMaterial_ GLI_tdstMaterial_;
typedef struct GLI_tdstTexture_ GLI_tdstTexture_;
typedef struct IPO_tdstInstanciatedPhysicalObject_ IPO_tdstInstanciatedPhysicalObject_;
typedef struct IPT_tdstEntryElement_ IPT_tdstEntryElement_;
typedef struct WP_tdstListOfArc_ WP_tdstListOfArc_;
typedef struct _SND_tdstBlockEvent _SND_tdstBlockEvent;
typedef struct tdstCollSet_ tdstCollSet_;
typedef struct tdstDynam_ tdstDynam_;
typedef struct tdstLipsSynchroTable_ tdstLipsSynchroTable_;
typedef struct tdstMSLight_ tdstMSLight_;
typedef struct tdstMSWay_ tdstMSWay_;
typedef struct tdstMicro_ tdstMicro_;
typedef struct tdstObjectsTablesList_ tdstObjectsTablesList_;
typedef struct tdstParticleGenerator_ tdstParticleGenerator_;
typedef struct tdstPhysicalCollSet_ tdstPhysicalCollSet_;
typedef struct tdstSectInfo_ tdstSectInfo_;
typedef struct tdstSuperObjectLinks_ tdstSuperObjectLinks_;
typedef union anon_0 anon_0;
typedef struct tdstNodeInterpret_ tdstNodeInterpret_;

union anon_0 {
    tduIdInterpret_ uId; /* +0x0 */
    tduGetSetParamForNode_ uParam; /* +0x0 */
};

struct tdstNodeInterpret_ {
    anon_0 uDummy; /* +0x0 */
    unsigned short uwNodeToSkip; /* +0x4 */
    unsigned char ucDepth; /* +0x6 */
    unsigned char eType; /* +0x7 */
};

float g_DistanceWaypointMin;
float g_DistanceWaypointMax;

void WPG_fn_vSetAllocMode(void)
{
    GAM_fn_vPushAllocMode(2);
}

/* MatSp.h inline: the VU0 macro-mode instructions have no C form. */
inline void MAT_fn_vApplyOnVertex(MTH3D_tdstVector_* VectDest, MAT_tdstTransformation_* _hTransform, MTH3D_tdstVector_* VectA)
{
    MTH4D_tdstVector_ Vtmp;
    MTH4D_tdstMatrix_* p_stMatrix;
    MTH4D_tdstVector_* p_stVtmp;

    p_stMatrix = &_hTransform->stTransformMatrix; p_stVtmp = &Vtmp;
    *(unsigned int*)&Vtmp.xX = ((unsigned int*)VectA)[0]; *(unsigned int*)&Vtmp.xY = ((unsigned int*)VectA)[1]; *(unsigned int*)&Vtmp.xZ = ((unsigned int*)VectA)[2];
    asm {
        lqc2 vf1, 0x0(p_stVtmp)
        lqc2 vf2, 0x0(p_stMatrix)
        lqc2 vf3, 0x10(p_stMatrix)
        lqc2 vf4, 0x20(p_stMatrix)
        lqc2 vf5, 0x30(p_stMatrix)
        vmulax.xyzw ACC, vf2, vf1x
        vmadday.xyzw ACC, vf3, vf1y
        vmaddaz.xyzw ACC, vf4, vf1z
        vmaddw.xyzw vf6, vf5, vf0w
        nop
        nop
        sqc2 vf6, 0x0(p_stVtmp)
    }
    *(unsigned int*)&VectDest->xX = *(unsigned int*)&Vtmp.xX; *(unsigned int*)&VectDest->xY = *(unsigned int*)&Vtmp.xY; *(unsigned int*)&VectDest->xZ = *(unsigned int*)&Vtmp.xZ;
}

void WP_fnv_WayPoint_ComputeLocation(WP_tdstWayPoint_* _hWayPoint, MTH3D_tdstVector_* _p_stVertex)
{
    MTH3D_tdstVector_ stWPVertex;

    if (_hWayPoint->m_hSuperObject)
    {
        stWPVertex = _hWayPoint->m_stVertex;
        MAT_fn_vApplyOnVertex(_p_stVertex, _hWayPoint->m_hSuperObject->hGlobalMatrix, &stWPVertex);
    }
    else
        *_p_stVertex = _hWayPoint->m_stVertex;
}

unsigned char WP_fnb_WayPoint_IsDynamic(WP_tdstWayPoint_* _hWayPoint)
{
    return _hWayPoint->m_hSuperObject != 0;
}

void WP_fnv_WayPoint_SetRadius(WP_tdstWayPoint_* _hWayPoint, float _xNewRadius)
{
    _hWayPoint->m_xRadius = _xNewRadius;
}

float WP_fnx_WayPoint_GetRadius(WP_tdstWayPoint_* _hWayPoint)
{
    return _hWayPoint->m_xRadius;
}

void WP_fnv_WayPoint_SetVertex(WP_tdstWayPoint_* _hWayPoint, MTH3D_tdstVector_* _pstNewVector)
{
    MTH3D_tdstVector_ stNewVector = *_pstNewVector;

    _hWayPoint->m_stVertex = stNewVector;
}

void WP_fnv_WayPoint_GetVertex(WP_tdstWayPoint_* _hWayPoint, MTH3D_tdstVector_* _pstVector)
{
    MTH3D_tdstVector_ stVertex = _hWayPoint->m_stVertex;

    *_pstVector = stVertex;
}

float fn_xGetDistanceWaypointMax(void)
{
    return g_DistanceWaypointMax;
}

float fn_xGetDistanceWaypointMin(void)
{
    return g_DistanceWaypointMin;
}

void fn_vSetDistanceWaypointMax(float xDistWP)
{
    g_DistanceWaypointMax = xDistWP;
}

void fn_vSetDistanceWaypointMin(float xDistWP)
{
    g_DistanceWaypointMin = xDistWP;
}
