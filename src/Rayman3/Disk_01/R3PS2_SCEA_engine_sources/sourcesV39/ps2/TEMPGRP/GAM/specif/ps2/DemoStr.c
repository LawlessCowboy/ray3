/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\specif\ps2\DemoStr.c */
/* Language: C */
/* Compiler: MW MIPS C Compiler */

#include <stddef.h>

/* Defined by transition.c; referenced by this PS2 stream helper TU. */
extern unsigned char g_bDoTransition;

unsigned int g_DEMO_u32ActiveBuffer;
unsigned int g_DEMO_u32StreamFileHandle;
unsigned int g_DEMO_u32StreamRequestHandle;
unsigned int g_DEMO_u32StreamFileOffset;
char g_DEMO_aEventBuffer[2][131072];
unsigned int g_DEMO_u32PlayMode;

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\specif\ps2\DemoStr.c lines 75–75 */
/* addr: 0x0028db40  size: 8 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 75
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
unsigned char fn_bDoTransition(void)
{
    return g_bDoTransition;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\specif\ps2\DemoStr.c lines 126–168 */
/* addr: 0x0028db50  size: 236 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 126
 *   +0x0004 -> line 127
 *   +0x0008 -> line 126
 *   +0x000c -> line 127
 *   +0x0028 -> line 136
 *   +0x0030 -> line 138
 *   +0x0060 -> line 140
 *   +0x0070 -> line 147
 *   +0x0078 -> line 150
 *   +0x007c -> line 154
 *   +0x0080 -> line 149
 *   +0x0088 -> line 154
 *   +0x0094 -> line 150
 *   +0x009c -> line 149
 *   +0x00a0 -> line 154
 *   +0x00a4 -> line 149
 *   +0x00a8 -> line 154
 *   +0x00bc -> line 163
 *   +0x00c0 -> line 154
 *   +0x00c4 -> line 163
 *   +0x00d8 -> line 166
 *   +0x00e0 -> line 168
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void DEMO_pcGetNextFlowSegment(void)
{
    unsigned int u32CurrentOffset;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\specif\ps2\DemoStr.c lines 115–122 */
/* addr: 0x0028dc40  size: 52 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 115
 *   +0x0008 -> line 116
 *   +0x0010 -> line 117
 *   +0x0018 -> line 119
 *   +0x001c -> line 121
 *   +0x0020 -> line 119
 *   +0x0024 -> line 120
 *   +0x0028 -> line 122
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void DEMO_fn_vStopEventFlow(void)
{
    fn_bSyncStream(g_DEMO_u32StreamRequestHandle);
    fn_vCloseStream(g_DEMO_u32StreamFileHandle);
    g_DEMO_u32StreamFileOffset = 0;
    g_DEMO_u32StreamFileHandle = -1;
    g_DEMO_u32StreamRequestHandle = -1;
}
