/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\MEC\hidcard.c */
/* Language: C */
/* Compiler: MW MIPS C Compiler */

#include <stddef.h>
extern void* memset(void*, int, unsigned int);

/* Recovered aggregate layouts from MWCC debug type records. */
typedef struct DNM_stReport DNM_stReport;

typedef enum anon_enum_00bb26b6 {
    DNM_eMIC_Error = -1,
    DNM_eCamera = 0,
    DNM_eBase = 1,
} anon_enum_00bb26b6;

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\MEC\hidcard.c lines 19–28 */
/* addr: 0x00302c50  size: 48 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 19
 *   +0x0004 -> line 25
 *   +0x0008 -> line 19
 *   +0x000c -> line 25
 *   +0x0010 -> line 19
 *   +0x0014 -> line 25
 *   +0x001c -> line 27
 *   +0x0020 -> line 28
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
DNM_stReport* DNM_p_stReportDefaultInit(DNM_stReport* _p_stReport)
{
    memset(_p_stReport, 0, 0x16C);
    return _p_stReport;
}
