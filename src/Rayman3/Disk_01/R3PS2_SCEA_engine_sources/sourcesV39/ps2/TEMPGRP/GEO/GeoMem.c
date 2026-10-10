/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GEO\GeoMem.c */
/* Language: C */
/* Compiler: MW MIPS C Compiler */

#include <stddef.h>

unsigned char g_ucGEOModuleId;

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GEO\GeoMem.c lines 16–37 */
/* addr: 0x002a06d0  size: 428 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 16
 *   +0x0004 -> line 22
 *   +0x0008 -> line 16
 *   +0x000c -> line 20
 *   +0x0014 -> line 22
 *   +0x0018 -> line 19
 *   +0x001c -> line 22
 *   +0x0028 -> line 21
 *   +0x002c -> line 20
 *   +0x0030 -> line 21
 *   +0x0034 -> line 19
 *   +0x0038 -> line 22
 *   +0x003c -> line 21
 *   +0x0040 -> line 22
 *   +0x0088 -> line 26
 *   +0x008c -> line 22
 *   +0x0090 -> line 26
 *   +0x0094 -> line 24
 *   +0x0098 -> line 26
 *   +0x00a4 -> line 30
 *   +0x00a8 -> line 28
 *   +0x00b0 -> line 30
 *   +0x00b4 -> line 28
 *   +0x00bc -> line 30
 *   +0x00d0 -> line 28
 *   +0x00d4 -> line 33
 *   +0x00d8 -> line 32
 *   +0x00dc -> line 33
 *   +0x00e0 -> line 32
 *   +0x00e4 -> line 28
 *   +0x00f4 -> line 30
 *   +0x0180 -> line 32
 *   +0x0184 -> line 33
 *   +0x0190 -> line 35
 *   +0x0198 -> line 37
 *   +0x019c -> line 35
 *   +0x01a4 -> line 37
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
/* Partial layouts: only the members used here are named. */
typedef struct GEOMEM_tdstTransformation_ {
    unsigned char _pad_00[0x44]; /* +0x0 */
    float xTranslationY; /* +0x44: stTransformMatrix.stCol_3.xY */
} GEOMEM_tdstTransformation_;

typedef struct GEOMEM_tdstSuperObject_ {
    unsigned char _pad_00[0x24]; /* +0x0 */
    GEOMEM_tdstTransformation_* hGlobalMatrix; /* +0x24 */
} GEOMEM_tdstSuperObject_;

typedef struct GEOMEM_tdstEngineStructure_ {
    unsigned char _pad_000[0x68]; /* +0x0 */
    unsigned int ulTrameNumber; /* +0x68: stEngineTimer.ulTrameNumber */
    unsigned char _pad_06c[0x5c]; /* +0x6c */
    unsigned int ulRealTimeLowPart; /* +0xc8: stEngineTimer.stRealTimeCount.m_ulLowPart */
    unsigned char _pad_0cc[0x560]; /* +0xcc */
    GEOMEM_tdstSuperObject_* h_StdCamCaracter; /* +0x62c */
} GEOMEM_tdstEngineStructure_;

extern GEOMEM_tdstEngineStructure_ g_stEngineStructure;
extern unsigned int g_uiAnotherRandom;

unsigned int fn_uiGetSomeBytes(unsigned int* _puiArray, unsigned int NbInts, unsigned int SomeOtherValue)
{
    unsigned int Seeds[6];
    unsigned int i;
    unsigned int j;

    Seeds[0] = g_uiAnotherRandom;
    Seeds[1] = g_stEngineStructure.ulRealTimeLowPart;
    Seeds[2] = g_stEngineStructure.ulTrameNumber;
    Seeds[3] = (unsigned int)(12345.0f * g_stEngineStructure.h_StdCamCaracter->hGlobalMatrix->xTranslationY);
    Seeds[4] = (unsigned int)_puiArray;
    Seeds[5] = SomeOtherValue;

    for (i = 0; i < NbInts; i++)
    {
        Seeds[0] = (Seeds[0] * 0x126CDD7 + 0x1E240) | 1;
        for (j = 1; j < 6; j++)
            Seeds[j] = Seeds[j - 1] ^ ((Seeds[j] + (Seeds[j - 1] >> 7)) * 0x127C3D1);
        _puiArray[i] = Seeds[5];
    }

    return _puiArray[i - 1];
}
