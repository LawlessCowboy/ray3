/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\BlackBox.c */
/* Language: C */
/* Compiler: MW MIPS C Compiler */

#include <stddef.h>

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

void fn_vBbFrameManagement(void)
{
}

int fn_bBbStopMonitoring(void)
{
    return 0;
}

int fn_bBbStartMonitoring(void)
{
    return 0;
}

short fn_wBbDeclareVariable2Monitor(void)
{
    return -1;
}
