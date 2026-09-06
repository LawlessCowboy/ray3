/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\ERM\Specif\cpaerps2.c */
/* Language: C */
/* Compiler: MW MIPS C Compiler */

#include <stddef.h>

extern void Erm_fn_v_PrintErrMsgCore(char*, char*, char*);

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\ERM\Specif\cpaerps2.c lines 162–162 */
/* addr: 0x00258410  size: 28 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0008 -> line 162
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void Erm_fn_v_PrintErrMsgWithPersonalMsg(char* param0, char* p_cTxt2, char* p_cTxt3)
{
    Erm_fn_v_PrintErrMsgCore("%s %s", p_cTxt2, p_cTxt3);
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\ERM\Specif\cpaerps2.c lines 129–129 */
/* addr: 0x00258430  size: 24 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0008 -> line 129
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void Erm_fn_v_PrintErrMsg(char* p_cTxt1, char* p_cTxt2)
{
    Erm_fn_v_PrintErrMsgCore("%s %s", p_cTxt1, p_cTxt2);
}
