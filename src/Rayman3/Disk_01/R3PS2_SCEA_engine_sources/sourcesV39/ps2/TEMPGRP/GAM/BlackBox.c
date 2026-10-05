/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\BlackBox.c */
/* Language: C */
/* Compiler: MW MIPS C Compiler */

#include <stddef.h>

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\BlackBox.c lines 96–112 */
/* addr: 0x0028d040  size: 188 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 96
 *   +0x0004 -> line 97
 *   +0x0008 -> line 96
 *   +0x000c -> line 97
 *   +0x0024 -> line 98
 *   +0x0038 -> line 99
 *   +0x0040 -> line 101
 *   +0x0074 -> line 103
 *   +0x0078 -> line 105
 *   +0x007c -> line 103
 *   +0x0080 -> line 105
 *   +0x0084 -> line 103
 *   +0x0088 -> line 106
 *   +0x008c -> line 103
 *   +0x0090 -> line 106
 *   +0x0094 -> line 103
 *   +0x0098 -> line 107
 *   +0x009c -> line 103
 *   +0x00a0 -> line 107
 *   +0x00a4 -> line 108
 *   +0x00a8 -> line 109
 *   +0x00ac -> line 110
 *   +0x00b0 -> line 112
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
/* SAV2 list as in GamSave2.c; the header is not used here. */
typedef struct SAV2_tdstList_ {
    unsigned char a_ucListHeader[0xb4]; /* +0x0: SAV2_tdstHeader_ stListHeader */
    struct {
        void* hFirstElementDyn; /* +0xb4 */
        void* hLastElementDyn; /* +0xb8 */
        int lNumberOfElementsDyn; /* +0xbc */
    } SAV2_ListAnchor;
} SAV2_tdstList_;

extern unsigned char g_ucSAV2ModuleId;
extern unsigned char SAV2_g_ulSizeByType[7];
extern SAV2_tdstList_ SAV2_g_stList;
extern int g_a_p_stMmgModuleBlocksInfo[255];
unsigned char Erm_fn_ucInitErrMsg(void);
void Mmg_fn_v_InitMmg(unsigned char ucModuleId, unsigned char ucMaxBlocksNb, unsigned int ulMaxNbOfMalloc);
void Mmg_fn_cCheckAlignmentValidity(void);
void Mmg_fn_vInitSpecificBlock(unsigned char _ucBlockId, unsigned char _ucModuleId, int _p_stMyBlocksInfo, unsigned int _ulSize, unsigned int _ulMaxNbOfMalloc, unsigned char _ucAlignment, unsigned char _ucMode);

void SAV2_fn_vFirstInit(void)
{
    if (g_ucSAV2ModuleId == 0xFF)
        g_ucSAV2ModuleId = Erm_fn_ucInitErrMsg();
    Mmg_fn_v_InitMmg(g_ucSAV2ModuleId, 1, 100000);
    Mmg_fn_cCheckAlignmentValidity();
    Mmg_fn_vInitSpecificBlock(0, g_ucSAV2ModuleId, g_a_p_stMmgModuleBlocksInfo[g_ucSAV2ModuleId], 0x20000, 100000, 4, 12);
    SAV2_g_stList.SAV2_ListAnchor.hFirstElementDyn = NULL;
    SAV2_g_stList.SAV2_ListAnchor.hLastElementDyn = NULL;
    SAV2_g_stList.SAV2_ListAnchor.lNumberOfElementsDyn = 0;
    SAV2_g_ulSizeByType[1] = 1;
    SAV2_g_ulSizeByType[2] = 2;
    SAV2_g_ulSizeByType[3] = 4;
    SAV2_g_ulSizeByType[4] = 4;
    SAV2_g_ulSizeByType[5] = 4;
    SAV2_g_ulSizeByType[6] = 4;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\BlackBox.c lines 330–330 */
/* addr: 0x0028d100  size: 8 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 330
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void fn_vBbFrameManagement(void)
{
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\BlackBox.c lines 307–307 */
/* addr: 0x0028d110  size: 8 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 307
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
int fn_bBbStopMonitoring(void)
{
    return 0;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\BlackBox.c lines 267–267 */
/* addr: 0x0028d120  size: 8 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 267
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
int fn_bBbStartMonitoring(void)
{
    return 0;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\BlackBox.c lines 235–235 */
/* addr: 0x0028d130  size: 8 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 235
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
short fn_wBbDeclareVariable2Monitor(void)
{
    return -1;
}
