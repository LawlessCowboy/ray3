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

unsigned char fn_bDoTransition(void)
{
    return g_bDoTransition;
}

unsigned int DEMO_fn_u32GetCurrentEventOffset(void);
char* DEMO_fn_pcGetAddressForEventOffset(unsigned int u32Offset);

/* Debug signature records no return type; the target returns the segment
   address in v0. */
char* DEMO_pcGetNextFlowSegment(void)
{
    unsigned int u32CurrentOffset;

    switch (g_DEMO_u32PlayMode)
    {
    case 1:
        u32CurrentOffset = DEMO_fn_u32GetCurrentEventOffset();

        if ((u32CurrentOffset & 0x1FFFF) && (u32CurrentOffset & 0x1FFFF) && (0x20000 - (u32CurrentOffset & 0x1FFFF)) < 0x20000) u32CurrentOffset += 0x20000 - (u32CurrentOffset & 0x1FFFF);

        return DEMO_fn_pcGetAddressForEventOffset(u32CurrentOffset);

    case 2:
        fn_bSyncStream(g_DEMO_u32StreamRequestHandle);

        g_DEMO_u32StreamFileOffset += 0x20000;
        g_DEMO_u32ActiveBuffer ^= 1;

        g_DEMO_u32StreamRequestHandle = fn_uiReadStream(g_DEMO_u32StreamFileHandle, g_DEMO_u32StreamFileOffset, g_DEMO_aEventBuffer[g_DEMO_u32ActiveBuffer ^ 1], 0x20000, 0x7F);

        return g_DEMO_aEventBuffer[g_DEMO_u32ActiveBuffer];

    default:
        printf("DEMO_pcGetNextFlowSegment() : incorrect playback mode\n");
    }
}

void DEMO_fn_vStopEventFlow(void)
{
    fn_bSyncStream(g_DEMO_u32StreamRequestHandle);
    fn_vCloseStream(g_DEMO_u32StreamFileHandle);
    g_DEMO_u32StreamFileOffset = 0;
    g_DEMO_u32StreamFileHandle = -1;
    g_DEMO_u32StreamRequestHandle = -1;
}
