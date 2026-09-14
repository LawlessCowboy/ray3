/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\ISI\ISI.c */
/* Language: C */
/* Compiler: MW MIPS C Compiler */

#include <stddef.h>

/* Recovered aggregate layouts from MWCC debug type records. */
typedef struct ISI_tdstISI_ ISI_tdstISI_;
typedef struct ISI_tdstColor_ ISI_tdstColor_;
typedef struct GEO_tdstColor_ GEO_tdstColor_;
typedef struct ISI_tdstISILOD_ ISI_tdstISILOD_;

struct ISI_tdstISI_ {
    short xNbISILOD; /* +0x0 */
    ISI_tdstISILOD_* d_stISILOD; /* +0x4 */
};

struct ISI_tdstColor_ {
    short xRed; /* +0x0 */
    short xGreen; /* +0x2 */
    short xBlue; /* +0x4 */
    short xAlpha; /* +0x6 */
};

struct GEO_tdstColor_ {
    float xR; /* +0x0 */
    float xG; /* +0x4 */
    float xB; /* +0x8 */
    float xA; /* +0xc */
};

struct ISI_tdstISILOD_ {
    short xNbVertexRLI; /* +0x0 */
    ISI_tdstColor_* d_stVertexRLI; /* +0x4 */
    int d_fLightMapU; /* +0x8 */
};

ISI_tdstColor_* g_p_stRawRLIsForThisObject;

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\ISI\ISI.c lines 21–30 */
/* addr: 0x002f7f70  size: 96 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 23
 *   +0x0008 -> line 21
 *   +0x0010 -> line 23
 *   +0x0020 -> line 25
 *   +0x0030 -> line 26
 *   +0x003c -> line 27
 *   +0x0058 -> line 30
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
unsigned char IPT_fn_ucGetFirstValidJoystick(void)
{
    unsigned char ucReturn;
    unsigned int i;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\ISI\ISI.c lines 739–740 */
/* addr: 0x002f7fd0  size: 12 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 739
 *   +0x0004 -> line 740
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
ISI_tdstColor_* ISI_fn_dGetVertexRLI(void* _hISI)
{
    return ((ISI_tdstISI_*)_hISI)->d_stISILOD->d_stVertexRLI;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\ISI\ISI.c lines 704–705 */
/* addr: 0x002f7fe0  size: 40 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 704
 *   +0x0020 -> line 705
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
int ISI_fn_dGetVertexRLILODLightMapU(void* _hISI, short _xNumISILOD)
{
    ISI_tdstISI_* hISI;

    hISI = (ISI_tdstISI_*)_hISI;
    return hISI->d_stISILOD[_xNumISILOD].d_fLightMapU;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\ISI\ISI.c lines 680–685 */
/* addr: 0x002f8010  size: 48 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 680
 *   +0x0028 -> line 685
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
ISI_tdstColor_* ISI_fn_dGetVertexRLILOD(void* _hISI, short _xNumISILOD)
{
    ISI_tdstISI_* hISI;
    ISI_tdstColor_** pISILOD;

    hISI = (ISI_tdstISI_*)_hISI;
    pISILOD = (ISI_tdstColor_**)((char *)hISI->d_stISILOD + 4 + (int)_xNumISILOD * 12);
    g_p_stRawRLIsForThisObject = pISILOD[1];
    return g_p_stRawRLIsForThisObject;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\ISI\ISI.c lines 654–655 */
/* addr: 0x002f8040  size: 36 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 654
 *   +0x001c -> line 655
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
short ISI_fn_xGetNbVertexRLILOD(void* _hISI, short _xNumISILOD)
{
    ISI_tdstISI_* hISI;

    hISI = (ISI_tdstISI_*)_hISI;
    return hISI->d_stISILOD[_xNumISILOD].xNbVertexRLI;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\ISI\ISI.c lines 601–618 */
/* addr: 0x002f8070  size: 184 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 601
 *   +0x0014 -> line 605
 *   +0x0018 -> line 607
 *   +0x0020 -> line 609
 *   +0x0034 -> line 610
 *   +0x0040 -> line 612
 *   +0x0058 -> line 613
 *   +0x0060 -> line 615
 *   +0x0068 -> line 613
 *   +0x006c -> line 615
 *   +0x008c -> line 616
 *   +0x0098 -> line 617
 *   +0x00a4 -> line 618
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void ISI_fn_vFreeISI(void* _hISI)
{
    short xI;
    ISI_tdstISI_* hCpyISI;
    /* TODO: decompile from asm/... */
}
