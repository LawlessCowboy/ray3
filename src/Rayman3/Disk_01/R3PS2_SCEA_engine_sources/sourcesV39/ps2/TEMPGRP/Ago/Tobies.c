/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ago\Tobies.c */
/* Language: C */
/* Compiler: MW MIPS C Compiler */

#include <stddef.h>
#include "r3/MTH.h"

/* Recovered aggregate layouts from MWCC debug type records. */
typedef struct GLI_tdstMaterial_ GLI_tdstMaterial_;
typedef struct _Toby_Part_ _Toby_Part_;
typedef struct _Toby_ _Toby_;
typedef struct _TobyContainer_ _TobyContainer_;

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

void HMU_fn_vFree(void** p_vPointer, unsigned char bTempMalloc);
int Toby_g_Container;
unsigned char bIsInitAllDone;
int AGO_g_TobyMaterial;
float TestTobies[4][3];

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

void Toby_AddSegment(unsigned int IDNumber, MTH3D_tdstVector_* pPos1, MTH3D_tdstVector_* pPos2)
{
    _Toby_Part_* param0;
    int iIndex;
    /* Matching idiom for the unfolded member offset (byte/char* base plus offset, dead scaled-index
       assignment); found by scanning matched functions. Not original source and needs cleaning up. */
    iIndex = IDNumber * sizeof(_Toby_);
    if (*(unsigned int*)((char*)&((_Toby_*)Toby_g_Container)->NbActualSegments + iIndex) < *(unsigned int*)((char*)Toby_g_Container + iIndex))
    {
        param0 = *(_Toby_Part_**)((char*)&((_Toby_*)Toby_g_Container)->pSegments + iIndex) + (*(unsigned int*)((char*)&((_Toby_*)Toby_g_Container)->NbActualSegments + iIndex))++;
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

void* HMU_fn_p_vMalloc(unsigned int u32Size, unsigned char bTempMalloc);
void Toby_Allocate(unsigned int IDNumber, unsigned int NumberOfSegments)
{
    int iIndex;
    /* Matching idiom for the unfolded member offset (byte/char* base plus offset, dead scaled-index
       assignment); found by scanning matched functions. Not original source and needs cleaning up. */
    if (!bIsInitAllDone)
    {
        Toby_g_Container = (int)HMU_fn_p_vMalloc(0x50, 1); ((int*)Toby_g_Container)[0] = 0; ((int*)Toby_g_Container)[1] = 0; ((int*)Toby_g_Container)[2] = 0; ((int*)Toby_g_Container)[3] = 0; ((int*)Toby_g_Container)[4] = 0; ((int*)Toby_g_Container)[5] = 0; ((int*)Toby_g_Container)[6] = 0; ((int*)Toby_g_Container)[7] = 0; ((int*)Toby_g_Container)[8] = 0; ((int*)Toby_g_Container)[9] = 0; ((int*)Toby_g_Container)[10] = 0; ((int*)Toby_g_Container)[11] = 0; ((int*)Toby_g_Container)[12] = 0; ((int*)Toby_g_Container)[13] = 0; ((int*)Toby_g_Container)[14] = 0; ((int*)Toby_g_Container)[15] = 0; ((int*)Toby_g_Container)[16] = 0; ((int*)Toby_g_Container)[17] = 0; ((int*)Toby_g_Container)[18] = 0; ((int*)Toby_g_Container)[19] = 0; bIsInitAllDone = 1;
    }

    iIndex = IDNumber * sizeof(_Toby_); if (*(int*)((char*)&((_Toby_*)Toby_g_Container)->pSegments + iIndex)) if (*(void**)((char*)&((_Toby_*)Toby_g_Container)->pSegments + iIndex)) { HMU_fn_vFree((void**)&((_Toby_*)((char*)Toby_g_Container + iIndex))->pSegments, 1); *(int*)((char*)Toby_g_Container + iIndex) = 0; *(int*)((char*)&((_Toby_*)Toby_g_Container)->NbActualSegments + iIndex) = 0; *(int*)((char*)&((_Toby_*)Toby_g_Container)->fTransparency + iIndex) = 0; *(int*)((char*)&((_Toby_*)Toby_g_Container)->pSegments + iIndex) = 0; }

    *(void**)((char*)&((_Toby_*)Toby_g_Container)->pSegments + iIndex) = HMU_fn_p_vMalloc(NumberOfSegments * 32, 1);
    *(int*)((char*)Toby_g_Container + iIndex) = NumberOfSegments;
    *(int*)((char*)&((_Toby_*)Toby_g_Container)->NbActualSegments + iIndex) = 0;
    *(float*)((char*)&((_Toby_*)Toby_g_Container)->fTransparency + iIndex) = 1.0f;
}

void Toby_SetTransparency(unsigned int IDNumber, float fAlphaValue)
{
    char* pc;
    int iIndex;
    /* Matching idiom for the unfolded member offset (byte/char* base plus offset, dead scaled-index
       assignment); found by scanning matched functions. Not original source and needs cleaning up. */
    if (fAlphaValue < 0.0f)
        fAlphaValue = 0.0f;
    if (fAlphaValue > 1.0f)
        fAlphaValue = 1.0f;
    pc = (char*)&((_Toby_*)Toby_g_Container)->fTransparency;
    *(float*)(pc + (iIndex = IDNumber * sizeof(_Toby_))) = fAlphaValue;
}

void Toby_SetMaterial(void* unused, GLI_tdstMaterial_* hVisualMaterial)
{
    AGO_g_TobyMaterial = (int)hVisualMaterial;
}

void Toby_Destroy(unsigned int IDNumber)
{
    int iIndex;
    /* Matching idiom for the unfolded member offset (byte/char* base plus offset, dead scaled-index
       assignment); found by scanning matched functions. Not original source and needs cleaning up. */
    iIndex = IDNumber * sizeof(_Toby_);
    if (*(int*)((char*)&((_Toby_*)Toby_g_Container)->pSegments + iIndex))
    {
        HMU_fn_vFree((void**)&((_Toby_*)((char*)Toby_g_Container + iIndex))->pSegments, 1);
        *(int*)((char*)Toby_g_Container + iIndex) = 0;
        *(int*)((char*)&((_Toby_*)Toby_g_Container)->NbActualSegments + iIndex) = 0;
        *(int*)((char*)&((_Toby_*)Toby_g_Container)->fTransparency + iIndex) = 0;
        *(int*)((char*)&((_Toby_*)Toby_g_Container)->pSegments + iIndex) = 0;
    }
}
