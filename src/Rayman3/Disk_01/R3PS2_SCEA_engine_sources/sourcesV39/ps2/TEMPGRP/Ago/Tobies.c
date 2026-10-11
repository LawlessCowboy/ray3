/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ago\Tobies.c */
/* Language: C */
/* Compiler: MW MIPS C Compiler */

#include <stddef.h>

/* Recovered aggregate layouts from MWCC debug type records. */
typedef struct GLI_tdstMaterial_ GLI_tdstMaterial_;
typedef struct MTH3D_tdstVector_ MTH3D_tdstVector_;
typedef struct _Toby_Part_ _Toby_Part_;
typedef struct _Toby_ _Toby_;
typedef struct _TobyContainer_ _TobyContainer_;

struct MTH3D_tdstVector_ {
    float xX; /* +0x0 */
    float xY; /* +0x4 */
    float xZ; /* +0x8 */
};

struct _Toby_Part_ {
    float pStart[4]; /* +0x0 */
    float pEnd[4]; /* +0x10 */
};

struct _Toby_ {
    unsigned int NbAllocatedSegments; /* +0x0 */
    unsigned int NbActualSegments; /* +0x4 */
    float fTransparency; /* +0x8 */
    _Toby_Part_* pSegments; /* +0xc */
};

struct _TobyContainer_ {
    _Toby_ pTobies[5]; /* +0x0 */
};

int Toby_g_Container;
unsigned char bIsInitAllDone;
int AGO_g_TobyMaterial;
float TestTobies[4][3];

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ago\Tobies.c lines 400–406 */
/* addr: 0x001ea150  size: 120 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 400
 *   +0x0014 -> line 404
 *   +0x001c -> line 405
 *   +0x0060 -> line 406
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
extern unsigned int g_ulNumberOfAgos2;
extern float AGO2_g_pfCosTable[512];
void AGO2_MEM_Init(void);
float PS2_dl_cosf(float x);

void AGO2_vReInit(void)
{
    g_ulNumberOfAgos2 = 0;
    AGO2_MEM_Init();
    { int i; float fAngle = 0.0f; for (i = 0; i < 512; i++) { AGO2_g_pfCosTable[i] = PS2_dl_cosf(fAngle); fAngle += 6.2831855f / 512.0f; } }
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ago\Tobies.c lines 136–150 */
/* addr: 0x001ea1d0  size: 132 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 136
 *   +0x0028 -> line 138
 *   +0x003c -> line 140
 *   +0x0040 -> line 138
 *   +0x0044 -> line 143
 *   +0x0048 -> line 140
 *   +0x004c -> line 141
 *   +0x0054 -> line 142
 *   +0x005c -> line 143
 *   +0x0060 -> line 145
 *   +0x0068 -> line 146
 *   +0x0070 -> line 147
 *   +0x0078 -> line 148
 *   +0x007c -> line 150
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void Toby_AddSegment(unsigned int IDNumber, MTH3D_tdstVector_* pPos1, MTH3D_tdstVector_* pPos2)
{
    _Toby_Part_* param0;
    _Toby_* toby = ((_Toby_*)Toby_g_Container) + IDNumber;
    if (toby->NbActualSegments < toby->NbAllocatedSegments)
    {
        param0 = toby->pSegments + toby->NbActualSegments++;
        param0->pStart[0] = pPos1->xX;
        param0->pStart[1] = pPos1->xY;
        param0->pStart[2] = pPos1->xZ;
        param0->pStart[3] = 1.0f;
        param0->pEnd[0] = pPos2->xX;
        param0->pEnd[1] = pPos2->xY;
        param0->pEnd[2] = pPos2->xZ;
        param0->pEnd[3] = 1.0f;
    }
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ago\Tobies.c lines 117–130 */
/* addr: 0x001ea260  size: 424 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 117
 *   +0x0014 -> line 119
 *   +0x0020 -> line 120
 *   +0x00d8 -> line 124
 *   +0x0148 -> line 126
 *   +0x0158 -> line 129
 *   +0x015c -> line 126
 *   +0x0168 -> line 127
 *   +0x0174 -> line 128
 *   +0x0184 -> line 129
 *   +0x0194 -> line 130
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void Toby_Allocate(unsigned int IDNumber, unsigned int NumberOfSegments)
{
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ago\Tobies.c lines 110–113 */
/* addr: 0x001ea410  size: 80 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 110
 *   +0x001c -> line 111
 *   +0x0038 -> line 112
 *   +0x0048 -> line 113
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void Toby_SetTransparency(unsigned int IDNumber, float fAlphaValue)
{
    if (fAlphaValue < 0.0f)
        fAlphaValue = 0.0f;
    if (fAlphaValue > 1.0f)
        fAlphaValue = 1.0f;
    *(float*)((char*)&((_Toby_*)Toby_g_Container)->fTransparency + IDNumber * sizeof(_Toby_)) = fAlphaValue;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ago\Tobies.c lines 105–105 */
/* addr: 0x001ea460  size: 8 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 105
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void Toby_SetMaterial(void* unused, GLI_tdstMaterial_* hVisualMaterial)
{
    AGO_g_TobyMaterial = (int)hVisualMaterial;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ago\Tobies.c lines 88–99 */
/* addr: 0x001ea470  size: 132 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 88
 *   +0x000c -> line 91
 *   +0x0028 -> line 93
 *   +0x0038 -> line 94
 *   +0x0044 -> line 95
 *   +0x0054 -> line 96
 *   +0x0064 -> line 97
 *   +0x0074 -> line 99
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void Toby_Destroy(unsigned int IDNumber)
{
    /* TODO: decompile from asm/... */
}
