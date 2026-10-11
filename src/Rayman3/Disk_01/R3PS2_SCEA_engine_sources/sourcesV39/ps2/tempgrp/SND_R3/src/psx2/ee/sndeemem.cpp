/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\tempgrp\SND_R3\src\psx2\ee\sndeemem.cpp */
/* Language: C++ */
/* Compiler: MW MIPS C Compiler */

#include <stddef.h>

extern "C" void* memset(void*, int, unsigned int);
extern "C" int memcmp(const void*, const void*, unsigned int);
extern "C" void* memcpy(void*, const void*, unsigned int);
extern "C" void HMU_fn_vSndFree(void**);

#pragma exceptions off

extern "C" void usnd_memset(void* pvDest, unsigned char uiVal, unsigned int uiSize)
{
    memset(pvDest, uiVal & 0xFF, uiSize);
}

extern "C" int usnd_memcmp(void* pvDest, void* pvSrc, unsigned int uiSize)
{
    return memcmp(pvDest, pvSrc, uiSize);
}

extern "C" void usnd_memcpy(void* pvDest, void* pvSrc, unsigned int uiSize)
{
    memcpy(pvDest, pvSrc, uiSize);
}

void usnd_free(void* pv)
{
    HMU_fn_vSndFree(&pv);
}
