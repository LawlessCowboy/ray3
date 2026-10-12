/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\Ps2\tempgrp\IPO\Specif\IPO.c */
/* Language: C */
/* Compiler: MW MIPS C Compiler */

#include <stddef.h>
#include "r3/CINE.h"
#include "r3/COL.h"
#include "r3/GMT.h"
#include "r3/SECT.h"
#include "r3/HIE.h"

/* Recovered aggregate layouts from MWCC debug type records. */
typedef struct AI_tdstMind_ AI_tdstMind_;
typedef struct GLI_tdstLight_ GLI_tdstLight_;
typedef struct GLI_tdstMaterial_ GLI_tdstMaterial_;
typedef struct _SND_tdstBlockEvent _SND_tdstBlockEvent;
typedef struct tdstDynam_ tdstDynam_;

unsigned char IPO_g_ucNumberOfRLITables;

/* These controller globals are owned by the INO PS2 implementation.  The
 * original TU consumed them through the shared engine headers; keep the
 * recovered IPO TU self-contained without creating duplicate definitions. */
typedef struct IPO_tdstPadMapping_ {
    int iPort;
    int iSlot;
    int iStatus;
} IPO_tdstPadMapping_;

extern int INO_gs_a_bIsForceFeedBack[2];
extern IPO_tdstPadMapping_ g_axPadMapping[2];
extern int scePadInfoMode(int, int, int, int);

void fn_vUpdateIsFfbTable(unsigned char _ucJoyNb)
{
    INO_gs_a_bIsForceFeedBack[_ucJoyNb] = scePadInfoMode(
        g_axPadMapping[_ucJoyNb].iPort,
        g_axPadMapping[_ucJoyNb].iSlot,
        2,
        0);
}

HIE_tdstSuperObject_* fn_hGetPortalCamera(IPO_tdstInstanciatedPhysicalObject_* hIPO)
{
    return hIPO->hPortalCamera;
}

int IPO_fn_hGetRadiosity(IPO_tdstInstanciatedPhysicalObject_* _hInstanciatedPhysicalObject)
{
    return _hInstanciatedPhysicalObject->_hCurrentRadiosity;
}
