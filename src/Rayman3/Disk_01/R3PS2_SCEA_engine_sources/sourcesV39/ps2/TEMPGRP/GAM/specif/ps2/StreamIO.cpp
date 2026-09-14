/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\specif\ps2\StreamIO.cpp */
/* Language: C */
/* Compiler: MW MIPS C Compiler */

#include <stddef.h>

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
unsigned char DEMO_bInitEventFlow(char* szFileName)
{
    /* TODO: decompile from asm/... */
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
    return fs_uiGetSize(u32FileHandle);
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
    /* TODO: decompile from asm/... */
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
    return func_801C20D0(u32FileHandle, u32FilePos, pcBuffer, u32Size, u32Priority, 0, 0);
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
    func_801C20E0(u32FileHandle);
}
