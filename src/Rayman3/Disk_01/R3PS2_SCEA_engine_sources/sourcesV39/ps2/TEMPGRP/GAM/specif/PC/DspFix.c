/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\specif\PC\DspFix.c */
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

typedef enum anon_enum_008d273e {
    DNM_eMIC_Error = -1,
    DNM_eCamera = 0,
    DNM_eBase = 1,
} anon_enum_008d273e;

struct tdstDynam_ {
    DNM_stDynamics* p_stDynamics; /* +0x0 */
    DNM_stParsingDatas* p_stParsingDatas; /* +0x4 */
    anon_enum_008d273e eUsedMechanics; /* +0x8 */
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

unsigned int GAM_g_dwClipping_Top;
unsigned int GAM_g_dwClipping_Left;
unsigned int GAM_g_dwClipping_Right;
unsigned int GAM_g_dwClipping_Bottom;
unsigned int GAM_g_dwOldRight;
unsigned int GAM_g_dwOldBottom;
unsigned int GAM_g_dwOldLeft;
unsigned int GAM_g_dwOldTop;
tdstDisplayVignetteDuringPlaying_ g_stDisplayVignetteDuringPlaying;
unsigned char g_ucGameModuleId;
tdstEngineStructure_ g_stEngineStructure;
int g_InGameMenu2DActivated;

extern tdstSubMapPosition_* gs_hFirstSubMapPosition;

MAT_tdstTransformation_* GAM_fn_hGetSubMapPosition(int _lSubMapNumber, int _lEntryNumber)
{
    int lAbsolute;
    tdstSubMapPosition_* hSubMapPosition;
    lAbsolute = ((unsigned short)_lSubMapNumber << 16) + (unsigned short)_lEntryNumber;
    hSubMapPosition = gs_hFirstSubMapPosition;

    while (hSubMapPosition != NULL)
    {
        if (hSubMapPosition->lSubMap == lAbsolute)
            return hSubMapPosition->hPosition;

        hSubMapPosition = hSubMapPosition->p_stNextPosition;
    }
    return NULL;
}

void GAM_fn_vResetClipFixObject(GLD_tdstViewportAttributes_* _p_stFixViewportAttr)
{
    _p_stFixViewportAttr->dwClipTopInPix = GAM_g_dwOldTop;
    _p_stFixViewportAttr->dwClipLeftInPix = GAM_g_dwOldLeft;
    _p_stFixViewportAttr->dwClipBottomInPix = GAM_g_dwOldBottom;
    _p_stFixViewportAttr->dwClipRightInPix = GAM_g_dwOldRight;
    GLI_vRemoveScissors(_p_stFixViewportAttr);
}

void GAM_fn_vClipFixObject(GLD_tdstViewportAttributes_* _p_stFixViewportAttr)
{
    unsigned int ulClipValue;

    ulClipValue = _p_stFixViewportAttr->dwClipTopInPix;
    GAM_g_dwOldTop = ulClipValue;
    ulClipValue = _p_stFixViewportAttr->dwClipLeftInPix;
    GAM_g_dwOldLeft = ulClipValue;
    ulClipValue = _p_stFixViewportAttr->dwClipBottomInPix;
    GAM_g_dwOldBottom = ulClipValue;
    ulClipValue = _p_stFixViewportAttr->dwClipRightInPix;
    GAM_g_dwOldRight = ulClipValue;
    _p_stFixViewportAttr->dwClipTopInPix = GAM_g_dwClipping_Top;
    _p_stFixViewportAttr->dwClipLeftInPix = GAM_g_dwClipping_Left;
    _p_stFixViewportAttr->dwClipBottomInPix = GAM_g_dwClipping_Right;
    _p_stFixViewportAttr->dwClipRightInPix = GAM_g_dwClipping_Bottom;
    GLI_vSetScissors(_p_stFixViewportAttr);
}

void GAM_fn_vSetFixClippingCoordinates(int _lTop, int _lLeft, int _lBottom, int _lRight)
{
    GAM_g_dwClipping_Top = _lTop;
    GAM_g_dwClipping_Left = _lLeft;
    GAM_g_dwClipping_Right = _lBottom;
    GAM_g_dwClipping_Bottom = _lRight;
}

void fn_vAskToDisplayVignette(void)
{
    g_stDisplayVignetteDuringPlaying.bAskToDisplayVignette = 0;
}
