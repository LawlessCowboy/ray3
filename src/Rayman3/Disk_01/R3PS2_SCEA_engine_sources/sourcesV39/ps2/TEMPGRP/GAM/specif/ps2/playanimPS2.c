/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\specif\ps2\playanimPS2.c */
/* Language: C */
/* Compiler: MW MIPS C Compiler */

#include <stddef.h>
#include "r3/AI.h"
#include "r3/CINE.h"
#include "r3/GMT.h"
#include "r3/SECT.h"
#include "r3/HIE.h"

/* Recovered aggregate layouts from MWCC debug type records. */
typedef struct GLI_tdstLight_ GLI_tdstLight_;
typedef struct GLI_tdstMaterial_ GLI_tdstMaterial_;
typedef struct _SND_tdstBlockEvent _SND_tdstBlockEvent;
typedef struct tdstDynam_ tdstDynam_;
typedef struct GEO_tdstDeformationVertex_ GEO_tdstDeformationVertex_;
typedef struct GEO_tdstDeformationInfluence_ GEO_tdstDeformationInfluence_;
typedef struct GEO_tdstElementDeformationSetInfo_ GEO_tdstElementDeformationSetInfo_;
typedef struct GEO_tdstDeformationBorder_ GEO_tdstDeformationBorder_;

struct GEO_tdstDeformationVertex_ {
    GEO_tdstDeformationInfluence_* p_stInfluenceTable; /* +0x0 */
    short xVertexIndex; /* +0x4 */
    unsigned char ucNumberOfInfluences; /* +0x6 */
    unsigned char Align; /* +0x7 */
};

struct GEO_tdstDeformationInfluence_ {
    unsigned short uwInfluence; /* +0x0 */
    unsigned char ucLinkNumber; /* +0x2 */
    unsigned char Align; /* +0x3 */
};

struct GEO_tdstElementDeformationSetInfo_ {
    GEO_tdstDeformationVertex_* p_stDeformationVertexTable; /* +0x0 */
    GEO_tdstDeformationBorder_* p_stBorderTable; /* +0x4 */
    short xNumberOfDeformationVertex; /* +0x8 */
    unsigned char ucNumberOfLinks; /* +0xa */
    unsigned char Align; /* +0xb */
};

struct GEO_tdstDeformationBorder_ {
    MTH3D_tdstVector_ stLinkNeutralPosition; /* +0x0 */
    MTH3D_tdstMatrix_ stLinkNeutralOrientation; /* +0xc */
    int p_xVertexTable; /* +0x30 */
    unsigned short uwNumberOfVertices; /* +0x34 */
    unsigned char ucLinkIndex; /* +0x36 */
    unsigned char Align; /* +0x37 */
};

int no_optim;
int g_iArraySizes;
int gh_st3dData;

extern unsigned char g_ucGameModuleId;
void Erm_fn_ClearLastError(unsigned int ulChannelId);
void Erm_fn_v_UpdateLastError();
tdst3dData_* fn_h_3dDataRealAlloc(void);

void fn_v3dDataAlloc(tdstEngineObject_* p_stObject)
{
    if (p_stObject == NULL)
    {
        Erm_fn_ClearLastError(0);
        Erm_fn_v_UpdateLastError(48, g_ucGameModuleId, 0, 14, -1, 255, 255, NULL);
    }
    if (p_stObject->h_3dData != NULL)
    {
        Erm_fn_ClearLastError(0);
        Erm_fn_v_UpdateLastError(48, g_ucGameModuleId, 0, 13, -1, 255, 255, NULL);
    }
    p_stObject->h_3dData = fn_h_3dDataRealAlloc();
}
