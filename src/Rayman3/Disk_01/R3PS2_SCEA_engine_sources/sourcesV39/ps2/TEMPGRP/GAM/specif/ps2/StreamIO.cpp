/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\specif\ps2\StreamIO.cpp */
/* Language: C */
/* Compiler: MW MIPS C Compiler */

#include <stddef.h>

#pragma exceptions off

extern "C" unsigned int fs_uiGetSize__Q24usnd11CPS2FileMgrFUi(unsigned int);
extern "C" unsigned int fs_uiRead__Q24usnd11CPS2FileMgrFUiUiUiUiUiPFPv_vPv(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, void (*)(void), void*);
extern "C" unsigned int fs_bSync__Q24usnd11CPS2FileMgrFUib(unsigned int, unsigned int);
extern "C" void fs_vClose__Q24usnd11CPS2FileMgrFUi(unsigned int);

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\specif\ps2\StreamIO.cpp lines 93–111 */
/* addr: 0x0028dc80  size: 88 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 93
 *   +0x0008 -> line 96
 *   +0x0010 -> line 103
 *   +0x0018 -> line 96
 *   +0x001c -> line 103
 *   +0x0030 -> line 101
 *   +0x0034 -> line 103
 *   +0x0048 -> line 111
 *   +0x004c -> line 110
 *   +0x0050 -> line 111
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
extern unsigned int g_DEMO_u32ActiveBuffer;
extern unsigned int g_DEMO_u32StreamFileHandle;
extern unsigned int g_DEMO_u32StreamFileOffset;
extern unsigned int g_DEMO_u32StreamRequestHandle;
extern char g_DEMO_aEventBuffer[2][131072];
extern "C" unsigned int fn_uiOpenStream(char* szFileName);
extern "C" unsigned int fn_uiReadStream(unsigned int u32FileHandle, unsigned int u32FilePos, char* pcBuffer, unsigned int u32Size, unsigned int u32Priority);

unsigned char DEMO_bInitEventFlow(char* szFileName)
{
    g_DEMO_u32StreamFileHandle = fn_uiOpenStream(szFileName);
    g_DEMO_u32StreamFileOffset = 0;
    g_DEMO_u32StreamRequestHandle = fn_uiReadStream(g_DEMO_u32StreamFileHandle, 0, g_DEMO_aEventBuffer[g_DEMO_u32ActiveBuffer ^ 1], 131072, 127);
    return 1;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\specif\ps2\StreamIO.cpp lines 51–51 */
/* addr: 0x0028dce0  size: 8 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 51
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
unsigned int fn_bStreamSize(unsigned int u32FileHandle)
{
    return fs_uiGetSize__Q24usnd11CPS2FileMgrFUi(u32FileHandle);
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\specif\ps2\StreamIO.cpp lines 34–39 */
/* addr: 0x0028dcf0  size: 32 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 34
 *   +0x0008 -> line 36
 *   +0x0010 -> line 39
 *   +0x0014 -> line 36
 *   +0x0018 -> line 39
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
unsigned char fn_bSyncStream(unsigned int u32RequestHandle)
{
    return fs_bSync__Q24usnd11CPS2FileMgrFUib(u32RequestHandle, 1) != 0;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\specif\ps2\StreamIO.cpp lines 29–29 */
/* addr: 0x0028dd10  size: 12 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 29
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
unsigned int fn_uiReadStream(unsigned int u32FileHandle, unsigned int u32FilePos, char* pcBuffer, unsigned int u32Size, unsigned int u32Priority)
{
    return fs_uiRead__Q24usnd11CPS2FileMgrFUiUiUiUiUiPFPv_vPv(u32FileHandle, u32FilePos, (unsigned int)pcBuffer, u32Size, u32Priority, 0, 0);
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\specif\ps2\StreamIO.cpp lines 23–23 */
/* addr: 0x0028dd20  size: 8 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 23
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void fn_vCloseStream(unsigned int u32FileHandle)
{
    fs_vClose__Q24usnd11CPS2FileMgrFUi(u32FileHandle);
}
