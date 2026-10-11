/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\tempgrp\rm3\engmain.c */
/* Language: C++ */
/* Compiler: MW MIPS C Compiler */

#include <stddef.h>

float g_fVersionNum;
int p_fn_v_EngMain_ReadInput;
int p_fn_v_EngMain_Net;
int p_fn_v_EngMain_Engine;
int p_fn_v_EngMain_Display;

void fn_v_EngMain_VBLCallback(void)
{
    PS2_fn_vWakeupMainThread();
}

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

void fn_v_EngMain_GlobalInitAfterCreateFrame(void)
{
}

void fn_v_EngMain_GlobalInitBeforeCreateFrame(void)
{
    fn_vInitEngineWhenInitApplication();
}

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
