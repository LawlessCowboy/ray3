/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\Family.c */
/* Language: C */
/* Compiler: MW MIPS C Compiler */

#include <stddef.h>
#include "r3/AI.h"
#include "r3/CINE.h"
#include "r3/COL.h"
#include "r3/DNM.h"
#include "r3/FIL.h"
#include "r3/GMT.h"
#include "r3/MOR.h"
#include "r3/SECT.h"
#include "r3/WP.h"
#include "r3/HIE.h"

/* Recovered aggregate layouts from MWCC debug type records. */
typedef struct GLI_tdstLight_ GLI_tdstLight_;
typedef struct GLI_tdstMaterial_ GLI_tdstMaterial_;
typedef struct WP_tdstListOfArc_ WP_tdstListOfArc_;
typedef struct _SND_tdstBlockEvent _SND_tdstBlockEvent;
typedef struct tdstAlwaysActiveCharacter_ tdstAlwaysActiveCharacter_;
typedef struct tdstCsaList_ tdstCsaList_;
typedef struct tdstPhysicalCollSet_ tdstPhysicalCollSet_;
typedef struct tdstSuperObjectLinks_ tdstSuperObjectLinks_;
typedef struct tdstZdxList_ tdstZdxList_;
typedef struct tdstZoneSetList_ tdstZoneSetList_;
typedef struct tdstDynam_ tdstDynam_;
typedef struct anon_0 anon_0;
typedef struct anon_1 anon_1;
typedef struct stMACDPID stMACDPID;
typedef struct DNM_stDynamicsComplexBlock DNM_stDynamicsComplexBlock;
typedef struct DNM_stDynamics DNM_stDynamics;

typedef enum anon_enum_0072b0d4 {
    DNM_eMIC_Error = -1,
    DNM_eCamera = 0,
    DNM_eBase = 1,
} anon_enum_0072b0d4;

struct tdstDynam_ {
    DNM_stDynamics* p_stDynamics; /* +0x0 */
    DNM_stParsingDatas* p_stParsingDatas; /* +0x4 */
    anon_enum_0072b0d4 eUsedMechanics; /* +0x8 */
};

struct anon_0 {
    float m_xAngle; /* +0x0 */
    MTH3D_tdstVector_ m_stAxis; /* +0x4 */
};

struct anon_1 {
    float m_xAngle; /* +0x0 */
    MTH3D_tdstVector_ m_stAxis; /* +0x4 */
};

struct stMACDPID {
    float m_xData0; /* +0x0 */
    MTH3D_tdstVector_ m_stData1; /* +0x4 */
    MTH3D_tdstVector_ m_stData2; /* +0x10 */
    MTH3D_tdstVector_ m_stData3; /* +0x1c */
    float m_xData3; /* +0x28 */
    float m_xData4; /* +0x2c */
    float m_xData5; /* +0x30 */
    anon_0 m_stData6; /* +0x34 */
    anon_1 m_stData7; /* +0x44 */
    char m_cData8; /* +0x54 */
    unsigned short m_uwData9; /* +0x56 */
    MTH3D_tdstVector_ m_stData10; /* +0x58 */
    float m_xData11; /* +0x64 */
    MTH3D_tdstVector_ m_stData12; /* +0x68 */
    float m_xData13; /* +0x74 */
    unsigned char m_bData14; /* +0x78 */
};

struct DNM_stDynamicsComplexBlock {
    float m_xTiltIntensity; /* +0x0 */
    float m_xTiltInertia; /* +0x4 */
    float m_xTiltOrigin; /* +0x8 */
    float m_xTiltAngle; /* +0xc */
    float m_xHangingLimit; /* +0x10 */
    MTH3D_tdstVector_ m_stContact; /* +0x14 */
    MTH3D_tdstVector_ m_stFallTranslation; /* +0x20 */
    stMACDPID m_stExternalDatas; /* +0x2c */
    HIE_tdstSuperObject_* m_hPlatform; /* +0xa8 */
    unsigned char _extractor_padding_00[4]; /* implicitly added by extractor; +0xac..0xaf */
    MAT_tdstTransformation_ m_stAbsolutePreviousMatrix; /* +0xb0 */
    MAT_tdstTransformation_ m_stPrevPreviousMatrix; /* +0x110 */
};

struct DNM_stDynamics {
    DNM_stDynamicsBaseBlock m_tdstDynamicsBaseBlock; /* +0x0 */
    DNM_stDynamicsAdvancedBlock m_tdstDynamicsAdvancedBlock; /* +0x170 */
    DNM_stDynamicsComplexBlock m_tdstDynamicsComplexBlock; /* +0x200 */
};

tdstEngineStructure_ g_stEngineStructure;

void fn_vEmptyFunction2(void)
{
}

unsigned char fn_bGetFamilyProperty(tdstFamilyList_* h_Family, unsigned char ucPropertyMask)
{
    return (unsigned char)(h_Family->ucProperties & ucPropertyMask);
}

tdstObjectsTablesList_* fn_hGetObjectsTableOfFamilyByIndex(tdstFamilyList_* _hFamily, short _xIndex)
{
    return &_hFamily->hForObjectsTablesList.hFirstElementOpt[_xIndex];
}

COL_tdstBoundingSphere_* fn_vGetBoundingVolumeOfFamily(tdstFamilyList_* h_Family)
{
    return h_Family->hBoundingSphere;
}

void fn_vDesinitFamilyStructureForPriority(unsigned char ucPriority)
{
    tdstFamilyList_* p_stThisFamily;
    tdstFamilyList_* p_stNextFamily;

    for (p_stThisFamily = g_stEngineStructure.hFamilyList.hFirstElementDyn, p_stNextFamily = p_stThisFamily ? p_stThisFamily->hNextBrotherDyn : NULL; p_stThisFamily;
         p_stThisFamily = p_stNextFamily, p_stNextFamily = p_stThisFamily ? p_stThisFamily->hNextBrotherDyn : NULL)
    {
        if (p_stThisFamily->ucPriority == ucPriority)
        {
            if (p_stThisFamily->hNextBrotherDyn) p_stThisFamily->hNextBrotherDyn->hPrevBrotherDyn = p_stThisFamily->hPrevBrotherDyn; if (p_stThisFamily->hPrevBrotherDyn) p_stThisFamily->hPrevBrotherDyn->hNextBrotherDyn = p_stThisFamily->hNextBrotherDyn; if (p_stThisFamily->hFatherDyn) { p_stThisFamily->hFatherDyn->lNumberOfElementsDyn--; if (p_stThisFamily->hFatherDyn->hFirstElementDyn == p_stThisFamily) p_stThisFamily->hFatherDyn->hFirstElementDyn = p_stThisFamily->hNextBrotherDyn; if (p_stThisFamily->hFatherDyn->hLastElementDyn == p_stThisFamily) p_stThisFamily->hFatherDyn->hLastElementDyn = p_stThisFamily->hPrevBrotherDyn; } p_stThisFamily->hNextBrotherDyn = NULL; p_stThisFamily->hPrevBrotherDyn = NULL; p_stThisFamily->hFatherDyn = NULL;
        }
    }
}
