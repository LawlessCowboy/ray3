/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\tempgrp\rm3\engmain.c */
/* Language: C++ */
/* Compiler: MW MIPS C Compiler */

#include <stddef.h>

float g_fVersionNum;
int p_fn_v_EngMain_ReadInput;
int p_fn_v_EngMain_Net;
int p_fn_v_EngMain_Engine;
int p_fn_v_EngMain_Display;

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\tempgrp\rm3\engmain.c lines 297–297 */
/* addr: 0x0012bed0  size: 8 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 297
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void fn_v_EngMain_VBLCallback(void)
{
    PS2_fn_vWakeupMainThread();
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\tempgrp\rm3\engmain.c lines 257–286 */
/* addr: 0x0012bee0  size: 148 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 257
 *   +0x0008 -> line 261
 *   +0x0018 -> line 263
 *   +0x0034 -> line 265
 *   +0x0048 -> line 280
 *   +0x0050 -> line 282
 *   +0x0070 -> line 283
 *   +0x0078 -> line 284
 *   +0x0088 -> line 286
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
extern void fn_v_EngMain_EmptyFunction__Fv(void);
extern unsigned char fn_bEndOfGame(void);
extern unsigned char fn_bEndOfOneStep(void);
extern void fn_vChooseTheGoodInit(void);
extern void fn_vChooseTheGoodDesInit(void);
extern void fn_vOneTrame(void);

void fn_v_EngMain_MainLoop(void)
{
    while (!fn_bEndOfGame())
    {
        p_fn_v_EngMain_Display = p_fn_v_EngMain_Engine = p_fn_v_EngMain_Net = p_fn_v_EngMain_ReadInput = (int)fn_v_EngMain_EmptyFunction__Fv;
        fn_vChooseTheGoodInit();
        while (!fn_bEndOfOneStep())
        {
            fn_vOneTrame();
        }
        fn_vChooseTheGoodDesInit();
    }
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\tempgrp\rm3\engmain.c lines 91–91 */
/* addr: 0x0012bf80  size: 8 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 91
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void fn_v_EngMain_GlobalInitAfterCreateFrame(void)
{
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\tempgrp\rm3\engmain.c lines 81–81 */
/* addr: 0x0012bf90  size: 8 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 81
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void fn_v_EngMain_GlobalInitBeforeCreateFrame(void)
{
    fn_vInitEngineWhenInitApplication();
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\tempgrp\rm3\engmain.c lines 60–69 */
/* addr: 0x0012bfa0  size: 96 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 60
 *   +0x0004 -> line 62
 *   +0x0008 -> line 60
 *   +0x000c -> line 62
 *   +0x0024 -> line 63
 *   +0x0040 -> line 64
 *   +0x004c -> line 65
 *   +0x0054 -> line 69
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
extern unsigned char g_ucErmModuleId;
extern unsigned char g_ucMmgModuleId;
extern unsigned char Erm_fn_ucInitErrMsg(void);
extern void Mmg_fn_vFirstInitMmgModule(unsigned char ucMaxNbChannel);
extern void GMT_fn_vInitFor3DOS(void);

void fn_v_EngMain_ModuleInit(void)
{
    if (g_ucErmModuleId == 0xff) g_ucErmModuleId = Erm_fn_ucInitErrMsg();
    if (g_ucMmgModuleId == 0xff) g_ucMmgModuleId = Erm_fn_ucInitErrMsg();
    Mmg_fn_vFirstInitMmgModule(10);
    GMT_fn_vInitFor3DOS();
}
