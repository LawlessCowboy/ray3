/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\ERM\CpaError.c */
/* Language: C */
/* Compiler: MW MIPS C Compiler */

#include <stddef.h>

/* Recovered aggregate layouts from MWCC debug type records. */
typedef struct tdstLastErrorInfo_ tdstLastErrorInfo_;

struct tdstLastErrorInfo_ {
    unsigned short uwLastErr; /* +0x0 */
    unsigned char ucLastFailedModuleId; /* +0x2 */
    unsigned int ulChannelId; /* +0x4 */
};

unsigned char g_ucErmModuleId;
unsigned char g_ucErmNbOfModule;
int p_fn_ExitAppliCallBack;
tdstLastErrorInfo_ g_stErmTheLastErrorInfo[3];

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\ERM\CpaError.c lines 373–448 */
/* addr: 0x00258070  size: 492 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 373
 *   +0x0004 -> line 377
 *   +0x0008 -> line 373
 *   +0x000c -> line 377
 *   +0x0010 -> line 373
 *   +0x003c -> line 377
 *   +0x009c -> line 378
 *   +0x00a4 -> line 380
 *   +0x00b4 -> line 383
 *   +0x00e8 -> line 388
 *   +0x00f4 -> line 390
 *   +0x0104 -> line 393
 *   +0x0108 -> line 394
 *   +0x010c -> line 393
 *   +0x0114 -> line 394
 *   +0x0124 -> line 398
 *   +0x012c -> line 401
 *   +0x0140 -> line 403
 *   +0x0148 -> line 406
 *   +0x015c -> line 412
 *   +0x0190 -> line 419
 *   +0x0198 -> line 422
 *   +0x01ac -> line 429
 *   +0x01b4 -> line 432
 *   +0x01c8 -> line 448
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void Erm_fn_v_UpdateLastError(unsigned short uwStartOfWarningsId, unsigned char ucModuleId, unsigned int ulChannelId, unsigned short uwErrNum, char* szPersonalMsg)
{
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\ERM\CpaError.c lines 282–319 */
/* addr: 0x00258260  size: 328 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 282
 *   +0x0004 -> line 286
 *   +0x0008 -> line 282
 *   +0x000c -> line 286
 *   +0x0010 -> line 282
 *   +0x0018 -> line 286
 *   +0x0024 -> line 290
 *   +0x0050 -> line 292
 *   +0x007c -> line 296
 *   +0x0080 -> line 295
 *   +0x0084 -> line 294
 *   +0x0088 -> line 295
 *   +0x008c -> line 296
 *   +0x0094 -> line 295
 *   +0x0098 -> line 296
 *   +0x00a0 -> line 299
 *   +0x00a8 -> line 300
 *   +0x00cc -> line 302
 *   +0x00d4 -> line 307
 *   +0x00e0 -> line 310
 *   +0x00e4 -> line 309
 *   +0x00ec -> line 310
 *   +0x00f0 -> line 307
 *   +0x00f8 -> line 308
 *   +0x00fc -> line 309
 *   +0x0100 -> line 310
 *   +0x011c -> line 312
 *   +0x0124 -> line 316
 *   +0x0138 -> line 319
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void Erm_fn_ClearLastError(unsigned int ulChannelId)
{
    unsigned char ucI;
    unsigned char ucJ;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\ERM\CpaError.c lines 78–106 */
/* addr: 0x002583b0  size: 72 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 78
 *   +0x000c -> line 85
 *   +0x0010 -> line 86
 *   +0x0038 -> line 105
 *   +0x0040 -> line 106
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
unsigned char Erm_fn_ucInitErrMsg(void)
{
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\ERM\CpaError.c lines 50–50 */
/* addr: 0x00258400  size: 8 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 50
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void Erm_fn_vSetCallBackForExit(void (*_p_fn_ExitAppliCallBack)(void))
{
    /* TODO: decompile from asm/... */
}
