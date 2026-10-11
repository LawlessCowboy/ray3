/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\SFX\FxList.cpp */
/* Language: C++ */
/* Compiler: MW MIPS C Compiler */

#include <stddef.h>

typedef int anon_0;

/* Recovered aggregate layouts from MWCC debug type records. */
typedef struct tdstBaseFxListElement_ tdstBaseFxListElement_;
typedef struct C_BaseFx C_BaseFx;
typedef struct C_FxList C_FxList;

struct tdstBaseFxListElement_ {
    C_BaseFx* pFx; /* +0x0 */
    tdstBaseFxListElement_* pNext; /* +0x4 */
};

struct C_BaseFx {
    unsigned int m_FogIsOn_saved; /* +0x0 */
    unsigned int m_FogColor_saved; /* +0x4 */
    float m_fFogOOStartMinusEnd_saved; /* +0x8 */
    float m_fFogEnd_saved; /* +0xc */
    unsigned int m_FogIsOn; /* +0x10 */
    unsigned int m_FogColor; /* +0x14 */
    float m_fFogOOStartMinusEnd; /* +0x18 */
    float m_fFogEnd; /* +0x1c */
    int m_pSearchKey; /* +0x20 */
    /* vtable pointer at +0x24 (retail __vt__8C_BaseFx: ~C_BaseFx, DeleteSDLs). */
    virtual ~C_BaseFx();
    virtual void DeleteSDLs(void);
};

struct C_FxList {
    tdstBaseFxListElement_* pFirst; /* +0x0 */
    C_FxList();
    ~C_FxList();
    C_BaseFx* SearchElement(void* pSearchKey);
    void vAddElement(C_BaseFx* pElement);
    void DeleteAllSDLs(void);
    void DeleteAllNoFree(void);
    void DeleteAll(void);
};

int PS2glAllocator64;
int PS2glLiberator;

int GLI_BIG_GLOBALS_xFogIsOn;
float g_fFogEnd;
float GLI_g_OOStartMinusEnd;
unsigned int GLI_g_CurrentSDLFogColor;

typedef struct GLI_tdstMaterial_ GLI_tdstMaterial_;

struct C_Vector {
    float Vector[4]; /* +0x0 */
} __attribute__((aligned(16)));

struct C_FireFx : C_BaseFx {
    C_Vector m_Position; /* +0x30 */
    GLI_tdstMaterial_* m_pMat1; /* +0x40 */
    C_Vector* m_pData; /* +0x44 */
    unsigned int m_NbParticles; /* +0x48 */
    virtual ~C_FireFx();
};

inline C_BaseFx::~C_BaseFx()
{
}

C_FireFx::~C_FireFx()
{
    if (m_pData)
    {
        ((void (*)(void*))PS2glLiberator)(m_pData);
        m_pData = 0;
    }
}

C_BaseFx* C_FxList::SearchElement(void* pSearchKey)
{
    tdstBaseFxListElement_* p;

    p = pFirst;
    while (p && (p->pFx->m_pSearchKey != (int)pSearchKey))
        p = p->pNext;
    if (p && (p->pFx->m_pSearchKey == (int)pSearchKey))
        return p->pFx;
    return NULL;
}

void C_FxList::vAddElement(C_BaseFx* pElement)
{
    tdstBaseFxListElement_* pNew;
    tdstBaseFxListElement_* p;

    pNew = ((tdstBaseFxListElement_* (*)(int))PS2glAllocator64)(8);
    pNew->pFx = pElement;
    pNew->pNext = NULL;
    if (pFirst == NULL)
    {
        pFirst = pNew;
        return;
    }
    p = pFirst;
    while (p->pNext)
        p = p->pNext;
    p->pNext = pNew;
}

void C_FxList::DeleteAllSDLs(void)
{
    tdstBaseFxListElement_* p;
    tdstBaseFxListElement_* pNext;

    p = pFirst;
    while (p)
    {
        pNext = p->pNext;
        p->pFx->DeleteSDLs();
        p = pNext;
    }
}

void C_FxList::DeleteAllNoFree(void)
{
    tdstBaseFxListElement_* p;
    tdstBaseFxListElement_* pNext;

    p = pFirst;
    while (p)
    {
        pNext = p->pNext;
        ((void (*)(void*))PS2glLiberator)(p);
        p = pNext;
    }
    pFirst = NULL;
}

#pragma auto_inline on
void C_FxList::DeleteAll(void)
{
    tdstBaseFxListElement_* p;
    tdstBaseFxListElement_* pNext;

    p = pFirst;
    while (p)
    {
        pNext = p->pNext;
        delete p->pFx;
        ((void (*)(void*))PS2glLiberator)(p);
        p = pNext;
    }
    pFirst = NULL;
}
#pragma auto_inline reset

C_FxList::~C_FxList()
{
    DeleteAll();
}

C_FxList::C_FxList(void)
{
    pFirst = 0;
}
