/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\specif\ps2\StreamIO.cpp */
/* Language: C */
/* Compiler: MW MIPS C Compiler */

#include <stddef.h>

#pragma exceptions off

extern "C" unsigned int fs_uiGetSize__Q24usnd11CPS2FileMgrFUi(unsigned int);
extern "C" unsigned int fs_uiRead__Q24usnd11CPS2FileMgrFUiUiUiUiUiPFPv_vPv(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, void (*)(void), void*);
extern "C" unsigned int fs_bSync__Q24usnd11CPS2FileMgrFUib(unsigned int, unsigned int);
extern "C" void fs_vClose__Q24usnd11CPS2FileMgrFUi(unsigned int);

extern unsigned int g_DEMO_u32ActiveBuffer;
extern unsigned int g_DEMO_u32StreamFileHandle;
extern unsigned int g_DEMO_u32StreamFileOffset;
extern unsigned int g_DEMO_u32StreamRequestHandle;
extern char g_DEMO_aEventBuffer[2][131072];
extern "C" unsigned int fn_uiOpenStream(char* szFileName);
extern "C" unsigned int fn_uiReadStream(unsigned int u32FileHandle, unsigned int u32FilePos, char* pcBuffer, unsigned int u32Size, unsigned int u32Priority);

extern "C" unsigned char DEMO_bInitEventFlow(char* szFileName)
{
    g_DEMO_u32StreamFileHandle = fn_uiOpenStream(szFileName);
    g_DEMO_u32StreamFileOffset = 0;
    g_DEMO_u32StreamRequestHandle = fn_uiReadStream(g_DEMO_u32StreamFileHandle, 0, g_DEMO_aEventBuffer[g_DEMO_u32ActiveBuffer ^ 1], 131072, 127);
    return 1;
}

extern "C" unsigned int fn_bStreamSize(unsigned int u32FileHandle)
{
    return fs_uiGetSize__Q24usnd11CPS2FileMgrFUi(u32FileHandle);
}

extern "C" unsigned char fn_bSyncStream(unsigned int u32RequestHandle)
{
    return fs_bSync__Q24usnd11CPS2FileMgrFUib(u32RequestHandle, 1) != 0;
}

unsigned int fn_uiReadStream(unsigned int u32FileHandle, unsigned int u32FilePos, char* pcBuffer, unsigned int u32Size, unsigned int u32Priority)
{
    return fs_uiRead__Q24usnd11CPS2FileMgrFUiUiUiUiUiPFPv_vPv(u32FileHandle, u32FilePos, (unsigned int)pcBuffer, u32Size, u32Priority, 0, 0);
}

extern "C" void fn_vCloseStream(unsigned int u32FileHandle)
{
    fs_vClose__Q24usnd11CPS2FileMgrFUi(u32FileHandle);
}
