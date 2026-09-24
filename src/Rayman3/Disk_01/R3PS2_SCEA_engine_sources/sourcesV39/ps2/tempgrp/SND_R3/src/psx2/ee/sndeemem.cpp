/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\tempgrp\SND_R3\src\psx2\ee\sndeemem.cpp */
/* Language: C++ */
/* Compiler: MW MIPS C Compiler */

#include <stddef.h>

extern "C" void* memset(void*, int, unsigned int);
extern "C" int memcmp(const void*, const void*, unsigned int);
extern "C" void* memcpy(void*, const void*, unsigned int);
extern void HMU_fn_vSndFree(void**);

#pragma exceptions off

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\tempgrp\SND_R3\src\psx2\ee\sndeemem.cpp lines 90–90 */
/* addr: 0x0018af40  size: 8 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 90
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
extern "C" void usnd_memset(void* pvDest, unsigned char uiVal, unsigned int uiSize)
{
    memset(pvDest, uiVal & 0xFF, uiSize);
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\tempgrp\SND_R3\src\psx2\ee\sndeemem.cpp lines 80–80 */
/* addr: 0x0018af50  size: 8 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 80
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
extern "C" int usnd_memcmp(void* pvDest, void* pvSrc, unsigned int uiSize)
{
    return memcmp(pvDest, pvSrc, uiSize);
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\tempgrp\SND_R3\src\psx2\ee\sndeemem.cpp lines 75–75 */
/* addr: 0x0018af60  size: 8 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 75
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
extern "C" void usnd_memcpy(void* pvDest, void* pvSrc, unsigned int uiSize)
{
    memcpy(pvDest, pvSrc, uiSize);
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\tempgrp\SND_R3\src\psx2\ee\sndeemem.cpp lines 64–71 */
/* addr: 0x0018af70  size: 32 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 64
 *   +0x000c -> line 70
 *   +0x0014 -> line 71
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void usnd_free(void* pv)
{
    HMU_fn_vSndFree(&pv);
}
