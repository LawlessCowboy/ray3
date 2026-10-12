/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\PIC\Picking.c */
/* Language: C */
/* Compiler: MW MIPS C Compiler */

#include <stddef.h>
#include "r3/GEO.h"
#include "r3/COL.h"
#include "r3/HIE.h"

/* Recovered aggregate layouts from MWCC debug type records. */
typedef struct tdstPhysicalCollSet_ tdstPhysicalCollSet_;
typedef struct GLI_tdstDataOfElement_ GLI_tdstDataOfElement_;
typedef struct PIC_tdstPickedObject_ PIC_tdstPickedObject_;

/* Four collision-set handles are laid out consecutively in the debug type. */
struct tdstPhysicalCollSet_ {
    COL_tdstCollideObject_* hZdm; /* +0x0 */
    COL_tdstCollideObject_* hZdd; /* +0x4 */
    COL_tdstCollideObject_* hZde; /* +0x8 */
    COL_tdstCollideObject_* hZdr; /* +0xc */
};

typedef enum PIC_tdeModePicking_ {
    PIC_C_ModePickingFace = 0,
    PIC_C_ModePickingEdge = 1,
    PIC_C_ModePickingPoint = 2,
} PIC_tdeModePicking_;

struct GLI_tdstDataOfElement_ {
    MTH3D_tdstVector_ stHit; /* +0x0 */
    float xDistance; /* +0xc */
    short xElements; /* +0x10 */
    short xIndexOfFace; /* +0x12 */
    short xIndexOfEdge; /* +0x14 */
    short xIndexOfPoint; /* +0x16 */
};

struct PIC_tdstPickedObject_ {
    PIC_tdeModePicking_ xModePicking; /* +0x0 */
    short xNbElements; /* +0x4 */
    GLI_tdstDataOfElement_ aDEF_stDataOfElement[3]; /* +0x8 */
};

int g_p_stCurrentMatrix;

COL_tdstCollideObject_* PCS_fn_hGetZddGeoObjOfPhysicalCollSet(tdstPhysicalCollSet_* _hPhyCollSet)
{
    return _hPhyCollSet->hZdd;
}
