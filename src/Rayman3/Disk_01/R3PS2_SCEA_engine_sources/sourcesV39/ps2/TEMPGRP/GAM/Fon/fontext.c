/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\Fon\fontext.c */
/* Language: C */
/* Compiler: MW MIPS C Compiler */

#include <stddef.h>
#include "r3/CINE.h"
#include "r3/COL.h"
#include "r3/FIL.h"
#include "r3/MOR.h"
#include "r3/SECT.h"
#include "r3/HIE.h"

extern unsigned char g_ucFONModuleId;
extern unsigned char Erm_fn_ucInitErrMsg(unsigned char);

/* Recovered aggregate layouts from MWCC debug type records. */
typedef struct GLI_tdstLight_ GLI_tdstLight_;
typedef struct WP_tdstGraph_ WP_tdstGraph_;
typedef struct _SND_tdstBlockEvent _SND_tdstBlockEvent;
typedef struct tdstAlwaysActiveCharacter_ tdstAlwaysActiveCharacter_;
typedef struct tdstPhysicalCollSet_ tdstPhysicalCollSet_;
typedef struct tdstSuperObjectLinks_ tdstSuperObjectLinks_;

FON_tdstGeneral_ FON_g_stGeneral;
tdstEngineStructure_ g_stEngineStructure;

void FON_fn_vFirstInit(void)
{
    if (g_ucFONModuleId == 255)
        g_ucFONModuleId = Erm_fn_ucInitErrMsg(g_ucFONModuleId);
}
