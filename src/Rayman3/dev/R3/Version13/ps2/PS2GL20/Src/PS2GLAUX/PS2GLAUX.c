/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GLAUX\PS2GLAUX.c */
/* Language: C */
/* Compiler: MW MIPS C Compiler */

#include <stddef.h>

/* Recovered aggregate layouts from MWCC debug type records. */
typedef struct anon_0 anon_0;
typedef union unFunction unFunction;
typedef struct tagGLlistnode tagGLlistnode;
typedef struct tagGLlistcalls tagGLlistcalls;
typedef struct tag_GLmaterial tag_GLmaterial;
typedef struct anon_1 anon_1;
typedef struct tagGLtexname tagGLtexname;
typedef struct _AUX_EVENTREC _AUX_EVENTREC;
typedef struct tagGLlistdatas tagGLlistdatas;
typedef struct tagstVIFCode tagstVIFCode;
typedef struct _sceDmaTag _sceDmaTag;
typedef struct tag_AUXFILE tag_AUXFILE;
typedef struct tagsceGsReg tagsceGsReg;
typedef struct tag_stKeyMap tag_stKeyMap;
typedef struct anon_2 anon_2;
typedef struct tag_GLtexture tag_GLtexture;
typedef struct anon_3 anon_3;
typedef struct anon_4 anon_4;
typedef struct tagListData tagListData;
typedef struct anon_9 anon_9;
typedef struct anon_27 anon_27;
typedef struct anon_31 anon_31;
typedef struct anon_41 anon_41;
typedef struct anon_40 anon_40;
typedef struct anon_38 anon_38;
typedef struct anon_26 anon_26;
typedef struct anon_17 anon_17;
typedef struct anon_46 anon_46;
typedef struct anon_34 anon_34;
typedef struct anon_6 anon_6;
typedef struct anon_11 anon_11;
typedef struct anon_15 anon_15;
typedef struct anon_32 anon_32;
typedef struct anon_39 anon_39;
typedef struct anon_5 anon_5;
typedef struct anon_20 anon_20;
typedef struct anon_19 anon_19;
typedef struct anon_7 anon_7;
typedef struct anon_36 anon_36;
typedef struct anon_8 anon_8;
typedef struct anon_33 anon_33;
typedef struct anon_29 anon_29;
typedef struct anon_44 anon_44;
typedef struct anon_10 anon_10;
typedef struct anon_23 anon_23;
typedef struct anon_43 anon_43;
typedef struct anon_16 anon_16;
typedef struct anon_22 anon_22;
typedef struct anon_28 anon_28;
typedef struct anon_21 anon_21;
typedef struct anon_24 anon_24;
typedef struct anon_30 anon_30;
typedef struct anon_37 anon_37;
typedef union anon_35 anon_35;
typedef struct tagGScontext tagGScontext;
typedef struct tagGLtexblock tagGLtexblock;
typedef struct tagGLprimbuf tagGLprimbuf;
typedef struct tag_auxPadData tag_auxPadData;
typedef struct tagGsLoadImage tagGsLoadImage;
typedef struct tagGLtexindex tagGLtexindex;
typedef struct tag_GLtexture_set tag_GLtexture_set;
typedef struct anon_18 anon_18;
typedef struct tagGsSetTex tagGsSetTex;
typedef struct anon_12 anon_12;
typedef struct anon_42 anon_42;
typedef struct anon_13 anon_13;
typedef struct anon_14 anon_14;
typedef struct tagListNodeSingle tagListNodeSingle;
typedef struct tagListNode tagListNode;
typedef struct tag_GLtexture_image tag_GLtexture_image;
typedef struct anon_25 anon_25;
typedef struct tagGLlistpool tagGLlistpool;
typedef struct _GL_BUFFERINFO _GL_BUFFERINFO;
typedef struct tag_GLlight tag_GLlight;
typedef struct tagGLArrayInfo tagGLArrayInfo;
typedef struct tagGLcontext tagGLcontext;
typedef struct anon_45 anon_45;

struct anon_0 {
    unsigned long PRIM : 3; /* bit 0, byte +0x0 */
    unsigned long IIP : 1; /* bit 3, byte +0x0 */
    unsigned long TME : 1; /* bit 4, byte +0x0 */
    unsigned long FGE : 1; /* bit 5, byte +0x0 */
    unsigned long ABE : 1; /* bit 6, byte +0x0 */
    unsigned long AA1 : 1; /* bit 7, byte +0x0 */
    unsigned long FST : 1; /* bit 8, byte +0x0 */
    unsigned long CTXT : 1; /* bit 9, byte +0x0 */
    unsigned long FIX : 1; /* bit 10, byte +0x0 */
    unsigned long pad11 : 53; /* bit 11, byte +0x0 */
};

union unFunction {
    void (*pfnPlayVoid)(void); /* +0x0 */
    void (*pfnPlayParam)(void*); /* +0x0 */
};

struct tagGLlistnode {
    unFunction pfns; /* +0x0 */
    int cbParamCount; /* +0x4 */
    unsigned char aParams[4]; /* +0x8 */
};

struct tagGLlistcalls {
    tagGLlistcalls* pNext; /* +0x0 */
    unsigned int cbCalls; /* +0x4 */
    tagGLlistnode aNodes[1]; /* +0x8 */
};

struct tag_GLmaterial {
    float vAmbient[4]; /* +0x0 */
    float vDiffuse[4]; /* +0x10 */
    float vSpecular[4]; /* +0x20 */
    float vEmission[4]; /* +0x30 */
    float fShininess; /* +0x40 */
    float fAmbientIndex; /* +0x44 */
    float fDiffuseIndex; /* +0x48 */
    float fSpecularIndex; /* +0x4c */
} __attribute__((aligned(16)));

struct anon_1 {
    int mouseField; /* +0x0 */
    void (*MouseFunc)(_AUX_EVENTREC*); /* +0x4 */
};

struct tagGLtexname {
    unsigned char bAllocated; /* +0x0 */
    unsigned char bResident; /* +0x1 */
    float fPrioritize; /* +0x4 */
    unsigned int eDimension; /* +0x8 */
    int iTexBlock; /* +0xc */
    tag_GLtexture* pTex1D; /* +0x10 */
    tag_GLtexture* pTex2D; /* +0x14 */
    tag_GLtexture* pTexCube; /* +0x18 */
};

struct _AUX_EVENTREC {
    int event; /* +0x0 */
    int data[4]; /* +0x4 */
};

struct tagGLlistdatas {
    tagGLlistdatas* pNext; /* +0x0 */
    int apData[3]; /* +0x4 */
};

struct tagstVIFCode {
    unsigned short IMMEDIATE; /* +0x0 */
    unsigned char NUM; /* +0x2 */
    unsigned char CMD; /* +0x3 */
};

struct _sceDmaTag {
    unsigned short qwc; /* +0x0 */
    unsigned char mark; /* +0x2 */
    unsigned char id; /* +0x3 */
    _sceDmaTag* next; /* +0x4 */
    unsigned int p[2]; /* +0x8 */
};

struct tag_AUXFILE {
    int hFile; /* +0x0 */
    int pBuffer; /* +0x4 */
    long lSize; /* +0x8 */
    long lPosition; /* +0x10 */
};

struct tagsceGsReg {
    unsigned long DATA; /* +0x0 */
};

struct tag_stKeyMap {
    unsigned int button; /* +0x0 */
    int key; /* +0x4 */
};

struct anon_2 {
    unsigned long pad00 : 20; /* bit 0, byte +0x0 */
    unsigned long PSM : 6; /* bit 20, byte +0x0 */
    unsigned long pad26 : 11; /* bit 26, byte +0x0 */
    unsigned long CBP : 14; /* bit 37, byte +0x0 */
    unsigned long CPSM : 4; /* bit 51, byte +0x0 */
    unsigned long CSM : 1; /* bit 55, byte +0x0 */
    unsigned long CSA : 5; /* bit 56, byte +0x0 */
    unsigned long CLD : 3; /* bit 61, byte +0x0 */
};

struct tag_GLtexture {
    float vTexBorderColor[4]; /* +0x0 */
    unsigned int eDimension; /* +0x10 */
    unsigned int eTexFilterMin; /* +0x14 */
    unsigned int eTexFilterMag; /* +0x18 */
    unsigned int eTexWrapS; /* +0x1c */
    unsigned int eTexWrapT; /* +0x20 */
    int Image[7]; /* +0x24 */
    int iClutOffset; /* +0x40 */
    int iClutSize; /* +0x44 */
    int clut; /* +0x48 */
    unsigned char bClutUserMaintain; /* +0x4c */
};

struct anon_3 {
    unsigned long pad00 : 3; /* bit 0, byte +0x0 */
    unsigned long IIP : 1; /* bit 3, byte +0x0 */
    unsigned long TME : 1; /* bit 4, byte +0x0 */
    unsigned long FGE : 1; /* bit 5, byte +0x0 */
    unsigned long ABE : 1; /* bit 6, byte +0x0 */
    unsigned long AA1 : 1; /* bit 7, byte +0x0 */
    unsigned long FST : 1; /* bit 8, byte +0x0 */
    unsigned long CTXT : 1; /* bit 9, byte +0x0 */
    unsigned long FIX : 1; /* bit 10, byte +0x0 */
    unsigned long pad11 : 53; /* bit 11, byte +0x0 */
};

struct anon_4 {
    unsigned long NLOOP : 15; /* bit 0, byte +0x0 */
    unsigned long EOP : 1; /* bit 15, byte +0x0 */
    unsigned long pad16 : 16; /* bit 16, byte +0x0 */
    unsigned long id : 14; /* bit 32, byte +0x0 */
    unsigned long PRE : 1; /* bit 46, byte +0x0 */
    unsigned long PRIM : 11; /* bit 47, byte +0x0 */
    unsigned long FLG : 2; /* bit 58, byte +0x0 */
    unsigned long NREG : 4; /* bit 60, byte +0x0 */
    unsigned long REGS0 : 4; /* bit 0, byte +0x8 */
    unsigned long REGS1 : 4; /* bit 4, byte +0x8 */
    unsigned long REGS2 : 4; /* bit 8, byte +0x8 */
    unsigned long REGS3 : 4; /* bit 12, byte +0x8 */
    unsigned long REGS4 : 4; /* bit 16, byte +0x8 */
    unsigned long REGS5 : 4; /* bit 20, byte +0x8 */
    unsigned long REGS6 : 4; /* bit 24, byte +0x8 */
    unsigned long REGS7 : 4; /* bit 28, byte +0x8 */
    unsigned long REGS8 : 4; /* bit 32, byte +0x8 */
    unsigned long REGS9 : 4; /* bit 36, byte +0x8 */
    unsigned long REGS10 : 4; /* bit 40, byte +0x8 */
    unsigned long REGS11 : 4; /* bit 44, byte +0x8 */
    unsigned long REGS12 : 4; /* bit 48, byte +0x8 */
    unsigned long REGS13 : 4; /* bit 52, byte +0x8 */
    unsigned long REGS14 : 4; /* bit 56, byte +0x8 */
    unsigned long REGS15 : 4; /* bit 60, byte +0x8 */
};

struct tagListData {
    unsigned int eMode; /* +0x0 */
    tagGLlistcalls* pCalls; /* +0x4 */
    tagGLlistdatas* pDatas; /* +0x8 */
    tagGLprimbuf* pPrimBufHead; /* +0xc */
    tagGLprimbuf* pPrimBufTail; /* +0x10 */
    float (*pDmaBuffer)[4]; /* +0x14 */
    unsigned int uiSDLSize; /* +0x18 */
    int pSDLIndices; /* +0x1c */
    unsigned int uiSDLIndicesSize; /* +0x20 */
    unsigned int uiSDLBits; /* +0x24 */
    unsigned long ModFlgs; /* +0x28 */
    float (*pLastExecDmaBuffer)[4]; /* +0x30 */
    signed char ucSDLObjectReserveSize; /* +0x34 */
};

struct anon_9 {
    unsigned int R : 8; /* bit 0, byte +0x0 */
    unsigned int G : 8; /* bit 8, byte +0x0 */
    unsigned int B : 8; /* bit 16, byte +0x0 */
    unsigned int A : 8; /* bit 24, byte +0x0 */
    float Q; /* +0x4 */
};

struct anon_27 {
    float S; /* +0x0 */
    float T; /* +0x4 */
};

struct anon_31 {
    unsigned long U : 14; /* bit 0, byte +0x0 */
    unsigned long pad14 : 2; /* bit 14, byte +0x0 */
    unsigned long V : 14; /* bit 16, byte +0x0 */
    unsigned long pad30 : 34; /* bit 30, byte +0x0 */
};

struct anon_41 {
    unsigned long X : 16; /* bit 0, byte +0x0 */
    unsigned long Y : 16; /* bit 16, byte +0x0 */
    unsigned long Z : 24; /* bit 32, byte +0x0 */
    unsigned long F : 8; /* bit 56, byte +0x0 */
};

struct anon_40 {
    unsigned long X : 16; /* bit 0, byte +0x0 */
    unsigned long Y : 16; /* bit 16, byte +0x0 */
    unsigned long Z : 32; /* bit 32, byte +0x0 */
};

struct anon_38 {
    unsigned long TBP0 : 14; /* bit 0, byte +0x0 */
    unsigned long TBW : 6; /* bit 14, byte +0x0 */
    unsigned long PSM : 6; /* bit 20, byte +0x0 */
    unsigned long TW : 4; /* bit 26, byte +0x0 */
    unsigned long TH : 4; /* bit 30, byte +0x0 */
    unsigned long TCC : 1; /* bit 34, byte +0x0 */
    unsigned long TFX : 2; /* bit 35, byte +0x0 */
    unsigned long CBP : 14; /* bit 37, byte +0x0 */
    unsigned long CPSM : 4; /* bit 51, byte +0x0 */
    unsigned long CSM : 1; /* bit 55, byte +0x0 */
    unsigned long CSA : 5; /* bit 56, byte +0x0 */
    unsigned long CLD : 3; /* bit 61, byte +0x0 */
};

struct anon_26 {
    unsigned long WMS : 2; /* bit 0, byte +0x0 */
    unsigned long WMT : 2; /* bit 2, byte +0x0 */
    unsigned long MINU : 10; /* bit 4, byte +0x0 */
    unsigned long MAXU : 10; /* bit 14, byte +0x0 */
    unsigned long MINV : 10; /* bit 24, byte +0x0 */
    unsigned long MAXV : 10; /* bit 34, byte +0x0 */
    unsigned long pad44 : 20; /* bit 44, byte +0x0 */
};

struct anon_17 {
    unsigned long pad00 : 56; /* bit 0, byte +0x0 */
    unsigned long F : 8; /* bit 56, byte +0x0 */
};

struct anon_46 {
    unsigned long LCM : 1; /* bit 0, byte +0x0 */
    unsigned long pad01 : 1; /* bit 1, byte +0x0 */
    unsigned long MXL : 3; /* bit 2, byte +0x0 */
    unsigned long MMAG : 1; /* bit 5, byte +0x0 */
    unsigned long MMIN : 3; /* bit 6, byte +0x0 */
    unsigned long MTBA : 1; /* bit 9, byte +0x0 */
    unsigned long pad10 : 9; /* bit 10, byte +0x0 */
    unsigned long L : 2; /* bit 19, byte +0x0 */
    unsigned long pad21 : 11; /* bit 21, byte +0x0 */
    unsigned long K : 12; /* bit 32, byte +0x0 */
    unsigned long pad44 : 20; /* bit 44, byte +0x0 */
};

struct anon_34 {
    unsigned long OFX : 16; /* bit 0, byte +0x0 */
    unsigned long pad16 : 16; /* bit 16, byte +0x0 */
    unsigned long OFY : 16; /* bit 32, byte +0x0 */
    unsigned long pad48 : 16; /* bit 48, byte +0x0 */
};

struct anon_6 {
    unsigned long AC : 1; /* bit 0, byte +0x0 */
    unsigned long pad01 : 63; /* bit 1, byte +0x0 */
};

struct anon_11 {
    unsigned long CBW : 6; /* bit 0, byte +0x0 */
    unsigned long COU : 6; /* bit 6, byte +0x0 */
    unsigned long COV : 10; /* bit 12, byte +0x0 */
    unsigned long pad22 : 42; /* bit 22, byte +0x0 */
};

struct anon_15 {
    unsigned long MSK : 2; /* bit 0, byte +0x0 */
    unsigned long pad02 : 62; /* bit 2, byte +0x0 */
};

struct anon_32 {
    unsigned long TBP1 : 14; /* bit 0, byte +0x0 */
    unsigned long TBW1 : 6; /* bit 14, byte +0x0 */
    unsigned long TBP2 : 14; /* bit 20, byte +0x0 */
    unsigned long TBW2 : 6; /* bit 34, byte +0x0 */
    unsigned long TBP3 : 14; /* bit 40, byte +0x0 */
    unsigned long TBW3 : 6; /* bit 54, byte +0x0 */
    unsigned long pad60 : 4; /* bit 60, byte +0x0 */
};

struct anon_39 {
    unsigned long TBP4 : 14; /* bit 0, byte +0x0 */
    unsigned long TBW4 : 6; /* bit 14, byte +0x0 */
    unsigned long TBP5 : 14; /* bit 20, byte +0x0 */
    unsigned long TBW5 : 6; /* bit 34, byte +0x0 */
    unsigned long TBP6 : 14; /* bit 40, byte +0x0 */
    unsigned long TBW6 : 6; /* bit 54, byte +0x0 */
    unsigned long pad60 : 4; /* bit 60, byte +0x0 */
};

struct anon_5 {
    unsigned long TA0 : 8; /* bit 0, byte +0x0 */
    unsigned long pad08 : 7; /* bit 8, byte +0x0 */
    unsigned long AEM : 1; /* bit 15, byte +0x0 */
    unsigned long pad16 : 16; /* bit 16, byte +0x0 */
    unsigned long TA1 : 8; /* bit 32, byte +0x0 */
    unsigned long pad40 : 24; /* bit 40, byte +0x0 */
};

struct anon_20 {
    unsigned long FCR : 8; /* bit 0, byte +0x0 */
    unsigned long FCG : 8; /* bit 8, byte +0x0 */
    unsigned long FCB : 8; /* bit 16, byte +0x0 */
    unsigned long pad24 : 40; /* bit 24, byte +0x0 */
};

struct anon_19 {
    unsigned long SCAX0 : 11; /* bit 0, byte +0x0 */
    unsigned long pad11 : 5; /* bit 11, byte +0x0 */
    unsigned long SCAX1 : 11; /* bit 16, byte +0x0 */
    unsigned long pad27 : 5; /* bit 27, byte +0x0 */
    unsigned long SCAY0 : 11; /* bit 32, byte +0x0 */
    unsigned long pad43 : 5; /* bit 43, byte +0x0 */
    unsigned long SCAY1 : 11; /* bit 48, byte +0x0 */
    unsigned long pad59 : 5; /* bit 59, byte +0x0 */
};

struct anon_7 {
    unsigned long A : 2; /* bit 0, byte +0x0 */
    unsigned long B : 2; /* bit 2, byte +0x0 */
    unsigned long C : 2; /* bit 4, byte +0x0 */
    unsigned long D : 2; /* bit 6, byte +0x0 */
    unsigned long pad8 : 24; /* bit 8, byte +0x0 */
    unsigned long FIX : 8; /* bit 32, byte +0x0 */
    unsigned long pad40 : 24; /* bit 40, byte +0x0 */
};

struct anon_36 {
    unsigned long DIMX00 : 3; /* bit 0, byte +0x0 */
    unsigned long pad00 : 1; /* bit 3, byte +0x0 */
    unsigned long DIMX01 : 3; /* bit 4, byte +0x0 */
    unsigned long pad01 : 1; /* bit 7, byte +0x0 */
    unsigned long DIMX02 : 3; /* bit 8, byte +0x0 */
    unsigned long pad02 : 1; /* bit 11, byte +0x0 */
    unsigned long DIMX03 : 3; /* bit 12, byte +0x0 */
    unsigned long pad03 : 1; /* bit 15, byte +0x0 */
    unsigned long DIMX10 : 3; /* bit 16, byte +0x0 */
    unsigned long pad10 : 1; /* bit 19, byte +0x0 */
    unsigned long DIMX11 : 3; /* bit 20, byte +0x0 */
    unsigned long pad11 : 1; /* bit 23, byte +0x0 */
    unsigned long DIMX12 : 3; /* bit 24, byte +0x0 */
    unsigned long pad12 : 1; /* bit 27, byte +0x0 */
    unsigned long DIMX13 : 3; /* bit 28, byte +0x0 */
    unsigned long pad13 : 1; /* bit 31, byte +0x0 */
    unsigned long DIMX20 : 3; /* bit 32, byte +0x0 */
    unsigned long pad20 : 1; /* bit 35, byte +0x0 */
    unsigned long DIMX21 : 3; /* bit 36, byte +0x0 */
    unsigned long pad21 : 1; /* bit 39, byte +0x0 */
    unsigned long DIMX22 : 3; /* bit 40, byte +0x0 */
    unsigned long pad22 : 1; /* bit 43, byte +0x0 */
    unsigned long DIMX23 : 3; /* bit 44, byte +0x0 */
    unsigned long pad23 : 1; /* bit 47, byte +0x0 */
    unsigned long DIMX30 : 3; /* bit 48, byte +0x0 */
    unsigned long pad30 : 1; /* bit 51, byte +0x0 */
    unsigned long DIMX31 : 3; /* bit 52, byte +0x0 */
    unsigned long pad31 : 1; /* bit 55, byte +0x0 */
    unsigned long DIMX32 : 3; /* bit 56, byte +0x0 */
    unsigned long pad32 : 1; /* bit 59, byte +0x0 */
    unsigned long DIMX33 : 3; /* bit 60, byte +0x0 */
    unsigned long pad33 : 1; /* bit 63, byte +0x0 */
};

struct anon_8 {
    unsigned long DTHE : 1; /* bit 0, byte +0x0 */
    unsigned long pad01 : 63; /* bit 1, byte +0x0 */
};

struct anon_33 {
    unsigned long CLAMP : 1; /* bit 0, byte +0x0 */
    unsigned long pad01 : 63; /* bit 1, byte +0x0 */
};

struct anon_29 {
    unsigned long ATE : 1; /* bit 0, byte +0x0 */
    unsigned long ATST : 3; /* bit 1, byte +0x0 */
    unsigned long AREF : 8; /* bit 4, byte +0x0 */
    unsigned long AFAIL : 2; /* bit 12, byte +0x0 */
    unsigned long DATE : 1; /* bit 14, byte +0x0 */
    unsigned long DATM : 1; /* bit 15, byte +0x0 */
    unsigned long ZTE : 1; /* bit 16, byte +0x0 */
    unsigned long ZTST : 2; /* bit 17, byte +0x0 */
    unsigned long pad19 : 45; /* bit 19, byte +0x0 */
};

struct anon_44 {
    unsigned long PABE : 1; /* bit 0, byte +0x0 */
    unsigned long pad01 : 63; /* bit 1, byte +0x0 */
};

struct anon_10 {
    unsigned long FBA : 1; /* bit 0, byte +0x0 */
    unsigned long pad01 : 63; /* bit 1, byte +0x0 */
};

struct anon_23 {
    unsigned long FBP : 9; /* bit 0, byte +0x0 */
    unsigned long pad09 : 7; /* bit 9, byte +0x0 */
    unsigned long FBW : 6; /* bit 16, byte +0x0 */
    unsigned long pad22 : 2; /* bit 22, byte +0x0 */
    unsigned long PSM : 6; /* bit 24, byte +0x0 */
    unsigned long pad30 : 2; /* bit 30, byte +0x0 */
    unsigned long FBMSK : 32; /* bit 32, byte +0x0 */
};

struct anon_43 {
    unsigned long ZBP : 9; /* bit 0, byte +0x0 */
    unsigned long pad09 : 15; /* bit 9, byte +0x0 */
    unsigned long PSM : 4; /* bit 24, byte +0x0 */
    unsigned long pad28 : 4; /* bit 28, byte +0x0 */
    unsigned long ZMSK : 1; /* bit 32, byte +0x0 */
    unsigned long pad33 : 31; /* bit 33, byte +0x0 */
};

struct anon_16 {
    unsigned long SBP : 14; /* bit 0, byte +0x0 */
    unsigned long pad14 : 2; /* bit 14, byte +0x0 */
    unsigned long SBW : 6; /* bit 16, byte +0x0 */
    unsigned long pad22 : 2; /* bit 22, byte +0x0 */
    unsigned long SPSM : 6; /* bit 24, byte +0x0 */
    unsigned long pad30 : 2; /* bit 30, byte +0x0 */
    unsigned long DBP : 14; /* bit 32, byte +0x0 */
    unsigned long pad46 : 2; /* bit 46, byte +0x0 */
    unsigned long DBW : 6; /* bit 48, byte +0x0 */
    unsigned long pad54 : 2; /* bit 54, byte +0x0 */
    unsigned long DPSM : 6; /* bit 56, byte +0x0 */
    unsigned long pad62 : 2; /* bit 62, byte +0x0 */
};

struct anon_22 {
    unsigned long SSAX : 11; /* bit 0, byte +0x0 */
    unsigned long pad11 : 5; /* bit 11, byte +0x0 */
    unsigned long SSAY : 11; /* bit 16, byte +0x0 */
    unsigned long pad27 : 5; /* bit 27, byte +0x0 */
    unsigned long DSAX : 11; /* bit 32, byte +0x0 */
    unsigned long pad43 : 5; /* bit 43, byte +0x0 */
    unsigned long DSAY : 11; /* bit 48, byte +0x0 */
    unsigned long DIR : 2; /* bit 59, byte +0x0 */
    unsigned long pad61 : 3; /* bit 61, byte +0x0 */
};

struct anon_28 {
    unsigned long RRW : 12; /* bit 0, byte +0x0 */
    unsigned long pad12 : 20; /* bit 12, byte +0x0 */
    unsigned long RRH : 12; /* bit 32, byte +0x0 */
    unsigned long pad44 : 20; /* bit 44, byte +0x0 */
};

struct anon_21 {
    unsigned long XDR : 2; /* bit 0, byte +0x0 */
    unsigned long pad02 : 62; /* bit 2, byte +0x0 */
};

struct anon_24 {
    unsigned int ID; /* +0x0 */
    unsigned int IDMSK; /* +0x4 */
};

struct anon_30 {
    unsigned int ID; /* +0x0 */
    unsigned int IDMSK; /* +0x4 */
};

struct anon_37 {
    unsigned long PRIM_Modified : 1; /* bit 0, byte +0x0 */
    unsigned long RGBAQ_Modified : 1; /* bit 1, byte +0x0 */
    unsigned long ST_Modified : 1; /* bit 2, byte +0x0 */
    unsigned long UV_Modified : 1; /* bit 3, byte +0x0 */
    unsigned long XYZF2_Modified : 1; /* bit 4, byte +0x0 */
    unsigned long XYZ2_Modified : 1; /* bit 5, byte +0x0 */
    unsigned long TEX0_1_Modified : 1; /* bit 6, byte +0x0 */
    unsigned long TEX0_2_Modified : 1; /* bit 7, byte +0x0 */
    unsigned long CLAMP_1_Modified : 1; /* bit 8, byte +0x0 */
    unsigned long CLAMP_2_Modified : 1; /* bit 9, byte +0x0 */
    unsigned long FOG_Modified : 1; /* bit 10, byte +0x0 */
    unsigned long XYZF3_Modified : 1; /* bit 11, byte +0x0 */
    unsigned long XYZ3_Modified : 1; /* bit 12, byte +0x0 */
    unsigned long TEX1_1_Modified : 1; /* bit 13, byte +0x0 */
    unsigned long TEX1_2_Modified : 1; /* bit 14, byte +0x0 */
    unsigned long TEX2_1_Modified : 1; /* bit 15, byte +0x0 */
    unsigned long TEX2_2_Modified : 1; /* bit 16, byte +0x0 */
    unsigned long XYOFFSET_1_Modified : 1; /* bit 17, byte +0x0 */
    unsigned long XYOFFSET_2_Modified : 1; /* bit 18, byte +0x0 */
    unsigned long PRMODECONT_Modified : 1; /* bit 19, byte +0x0 */
    unsigned long PRMODE_Modified : 1; /* bit 20, byte +0x0 */
    unsigned long TEXCLUT_Modified : 1; /* bit 21, byte +0x0 */
    unsigned long SCANMSK_Modified : 1; /* bit 22, byte +0x0 */
    unsigned long MIPTBP1_1_Modified : 1; /* bit 23, byte +0x0 */
    unsigned long MIPTBP1_2_Modified : 1; /* bit 24, byte +0x0 */
    unsigned long MIPTBP2_1_Modified : 1; /* bit 25, byte +0x0 */
    unsigned long MIPTBP2_2_Modified : 1; /* bit 26, byte +0x0 */
    unsigned long TEXA_Modified : 1; /* bit 27, byte +0x0 */
    unsigned long FOGCOL_Modified : 1; /* bit 28, byte +0x0 */
    unsigned long TEXFLUSH_Modified : 1; /* bit 29, byte +0x0 */
    unsigned long SCISSOR_1_Modified : 1; /* bit 30, byte +0x0 */
    unsigned long SCISSOR_2_Modified : 1; /* bit 31, byte +0x0 */
    unsigned long ALPHA_1_Modified : 1; /* bit 32, byte +0x0 */
    unsigned long ALPHA_2_Modified : 1; /* bit 33, byte +0x0 */
    unsigned long DIMX_Modified : 1; /* bit 34, byte +0x0 */
    unsigned long DTHE_Modified : 1; /* bit 35, byte +0x0 */
    unsigned long COLCLAMP_Modified : 1; /* bit 36, byte +0x0 */
    unsigned long TEST_1_Modified : 1; /* bit 37, byte +0x0 */
    unsigned long TEST_2_Modified : 1; /* bit 38, byte +0x0 */
    unsigned long PABE_Modified : 1; /* bit 39, byte +0x0 */
    unsigned long FBA_1_Modified : 1; /* bit 40, byte +0x0 */
    unsigned long FBA_2_Modified : 1; /* bit 41, byte +0x0 */
    unsigned long FRAME_1_Modified : 1; /* bit 42, byte +0x0 */
    unsigned long FRAME_2_Modified : 1; /* bit 43, byte +0x0 */
    unsigned long ZBUF_1_Modified : 1; /* bit 44, byte +0x0 */
    unsigned long ZBUF_2_Modified : 1; /* bit 45, byte +0x0 */
    unsigned long BITBLTBUF_Modified : 1; /* bit 46, byte +0x0 */
    unsigned long TRXPOS_Modified : 1; /* bit 47, byte +0x0 */
    unsigned long TRXREG_Modified : 1; /* bit 48, byte +0x0 */
    unsigned long TRXDIR_Modified : 1; /* bit 49, byte +0x0 */
    unsigned long HWREG_Modified : 1; /* bit 50, byte +0x0 */
    unsigned long SIGNAL_Modified : 1; /* bit 51, byte +0x0 */
    unsigned long FINISH_Modified : 1; /* bit 52, byte +0x0 */
    unsigned long LABEL_Modified : 1; /* bit 53, byte +0x0 */
};

union anon_35 {
    signed char bData[16]; /* +0x0 */
    unsigned char ubData[16]; /* +0x0 */
    short sData[8]; /* +0x0 */
    unsigned short usData[8]; /* +0x0 */
    int iData[4]; /* +0x0 */
    unsigned int uiData[4]; /* +0x0 */
    long i64Data[2]; /* +0x0 */
    unsigned long u64Data[2]; /* +0x0 */
    float fData[4]; /* +0x0 */
    double dData[2]; /* +0x0 */
};

struct tagGScontext {
    anon_0 PRIM; /* +0x0 */
    anon_9 RGBAQ; /* +0x8 */
    anon_27 ST; /* +0x10 */
    anon_31 UV; /* +0x18 */
    anon_41 XYZF2; /* +0x20 */
    anon_40 XYZ2; /* +0x28 */
    anon_38 TEX0_1; /* +0x30 */
    anon_38 TEX0_2; /* +0x38 */
    anon_26 CLAMP_1; /* +0x40 */
    anon_26 CLAMP_2; /* +0x48 */
    anon_17 FOG; /* +0x50 */
    anon_41 XYZF3; /* +0x58 */
    anon_40 XYZ3; /* +0x60 */
    anon_46 TEX1_1; /* +0x68 */
    anon_46 TEX1_2; /* +0x70 */
    anon_2 TEX2_1; /* +0x78 */
    anon_2 TEX2_2; /* +0x80 */
    anon_34 XYOFFSET_1; /* +0x88 */
    anon_34 XYOFFSET_2; /* +0x90 */
    anon_6 PRMODECONT; /* +0x98 */
    anon_3 PRMODE; /* +0xa0 */
    anon_11 TEXCLUT; /* +0xa8 */
    anon_15 SCANMSK; /* +0xb0 */
    anon_32 MIPTBP1_1; /* +0xb8 */
    anon_32 MIPTBP1_2; /* +0xc0 */
    anon_39 MIPTBP2_1; /* +0xc8 */
    anon_39 MIPTBP2_2; /* +0xd0 */
    anon_5 TEXA; /* +0xd8 */
    anon_20 FOGCOL; /* +0xe0 */
    tagsceGsReg TEXFLUSH; /* +0xe8 */
    anon_19 SCISSOR_1; /* +0xf0 */
    anon_19 SCISSOR_2; /* +0xf8 */
    anon_7 ALPHA_1; /* +0x100 */
    anon_7 ALPHA_2; /* +0x108 */
    anon_36 DIMX; /* +0x110 */
    anon_8 DTHE; /* +0x118 */
    anon_33 COLCLAMP; /* +0x120 */
    anon_29 TEST_1; /* +0x128 */
    anon_29 TEST_2; /* +0x130 */
    anon_44 PABE; /* +0x138 */
    anon_10 FBA_1; /* +0x140 */
    anon_10 FBA_2; /* +0x148 */
    anon_23 FRAME_1; /* +0x150 */
    anon_23 FRAME_2; /* +0x158 */
    anon_43 ZBUF_1; /* +0x160 */
    anon_43 ZBUF_2; /* +0x168 */
    anon_16 BITBLTBUF; /* +0x170 */
    anon_22 TRXPOS; /* +0x178 */
    anon_28 TRXREG; /* +0x180 */
    anon_21 TRXDIR; /* +0x188 */
    tagsceGsReg HWREG; /* +0x190 */
    anon_24 SIGNAL; /* +0x198 */
    tagsceGsReg FINISH; /* +0x1a0 */
    anon_30 LABEL; /* +0x1a8 */
    anon_37 ModFlgs; /* +0x1b0 */
    anon_37 GlobalModFlgs; /* +0x1b8 */
    anon_35 PackageBuffer[518]; /* +0x1c0 */
    int iBufCount; /* +0x2220 */
    anon_35* pqCurrent; /* +0x2224 */
    anon_4* pCurTag; /* +0x2228 */
    signed char iRegs; /* +0x222c */
};

struct tagGLtexblock {
    unsigned int nTexID : 10; /* bit 0, byte +0x0 */
    int nStart : 11; /* bit 10, byte +0x0 */
    int nLength : 11; /* bit 21, byte +0x0 */
};

struct tagGLprimbuf {
    tagGLprimbuf* pNext; /* +0x0 */
    unsigned int nCount; /* +0x4 */
    unsigned char bEOP; /* +0x8 */
    int pCode; /* +0xc */
    float (*pData)[4]; /* +0x10 */
    int pTexUnit; /* +0x14 */
    unsigned char _extractor_padding_00[8]; /* implicitly added by extractor; +0x18..0x1f */
    _sceDmaTag tagDma; /* +0x20 */
    anon_4 tagGif; /* +0x30 */
    int vData[4]; /* +0x40 */
};

struct tag_auxPadData {
    unsigned char nFlag; /* +0x0 */
    unsigned char nID_Len; /* +0x1 */
    unsigned short nButton; /* +0x2 */
    unsigned char r3h; /* +0x4 */
    unsigned char r3v; /* +0x5 */
    unsigned char l3h; /* +0x6 */
    unsigned char l3v; /* +0x7 */
    unsigned char aPlaceHolder[24]; /* +0x8 */
};

struct tagGsLoadImage {
    anon_4 gifTag; /* +0x0 */
    anon_16 bitbltbuf; /* +0x10 */
    long bitbltbufaddr; /* +0x18 */
    anon_22 trxpos; /* +0x20 */
    long trxposaddr; /* +0x28 */
    anon_28 trxreg; /* +0x30 */
    long trxregaddr; /* +0x38 */
    anon_21 trxdir; /* +0x40 */
    long trxdiraddr; /* +0x48 */
};

struct tagGLtexindex {
    unsigned int nTexID : 10; /* bit 0, byte +0x0 */
    int nStart : 11; /* bit 10, byte +0x0 */
};

struct tag_GLtexture_set {
    float vTexEnvColor[4]; /* +0x0 */
    unsigned int eTexEnvMode; /* +0x10 */
    unsigned int nTexGenBits; /* +0x14 */
    unsigned short nTexGenModeS; /* +0x18 */
    unsigned short nTexGenModeT; /* +0x1a */
    unsigned short nTexGenModeR; /* +0x1c */
    unsigned short nTexGenModeQ; /* +0x1e */
    float vTexGenCoeffS[4]; /* +0x20 */
    float vTexGenCoeffT[4]; /* +0x30 */
    float vTexGenCoeffR[4]; /* +0x40 */
    float vTexGenCoeffQ[4]; /* +0x50 */
};

struct anon_18 {
    unsigned long pad00; /* +0x0 */
};

struct tagGsSetTex {
    anon_4 gifTag; /* +0x0 */
    anon_18 texflush; /* +0x10 */
    long texflushaddr; /* +0x18 */
    anon_38 tex0; /* +0x20 */
    long tex0addr; /* +0x28 */
    anon_46 tex1; /* +0x30 */
    long tex1addr; /* +0x38 */
    anon_32 miptbp1; /* +0x40 */
    long miptbp1addr; /* +0x48 */
    anon_39 miptbp2; /* +0x50 */
    long miptbp2addr; /* +0x58 */
    anon_26 clamp; /* +0x60 */
    long clampaddr; /* +0x68 */
};

struct anon_12 {
    unsigned long pad00; /* +0x0 */
};

struct anon_42 {
    unsigned int DIR : 1; /* bit 0, byte +0x0 */
    unsigned int p0 : 1; /* bit 1, byte +0x0 */
    unsigned int MOD : 2; /* bit 2, byte +0x0 */
    unsigned int ASP : 2; /* bit 4, byte +0x0 */
    unsigned int TTE : 1; /* bit 6, byte +0x0 */
    unsigned int TIE : 1; /* bit 7, byte +0x0 */
    unsigned int STR : 1; /* bit 8, byte +0x0 */
    unsigned int p1 : 7; /* bit 9, byte +0x0 */
    unsigned int TAG : 16; /* bit 16, byte +0x0 */
};

struct anon_13 {
    anon_42 chcr; /* +0x0 */
    unsigned int p0[3]; /* +0x4 */
    int madr; /* +0x10 */
    unsigned int p1[3]; /* +0x14 */
    unsigned int qwc; /* +0x20 */
    unsigned int p2[3]; /* +0x24 */
    _sceDmaTag* tadr; /* +0x30 */
    unsigned int p3[3]; /* +0x34 */
    int as0; /* +0x40 */
    unsigned int p4[3]; /* +0x44 */
    int as1; /* +0x50 */
    unsigned int p5[3]; /* +0x54 */
    unsigned int p6[4]; /* +0x60 */
    unsigned int p7[4]; /* +0x70 */
    int sadr; /* +0x80 */
    unsigned int p8[3]; /* +0x84 */
};

struct anon_14 {
    float vObjectBS[4]; /* +0x0 */
    unsigned char bFinalCompile; /* +0x10 */
    unsigned int mode; /* +0x14 */
    tagGLprimbuf* pPrimBuf; /* +0x18 */
};

struct tagListNodeSingle {
    unsigned int nIndex; /* +0x0 */
    tagListData* pData; /* +0x4 */
};

struct tagListNode {
    tagListNode* pNext; /* +0x0 */
    unsigned int nIndex; /* +0x4 */
    int iSize; /* +0x8 */
    int apData[1]; /* +0xc */
};

struct tag_GLtexture_image {
    unsigned int target; /* +0x0 */
    int inputComponents; /* +0x4 */
    int width; /* +0x8 */
    int height; /* +0xc */
    unsigned int format; /* +0x10 */
    int pixels; /* +0x14 */
    int pixelsAux; /* +0x18 */
    int cbPixels; /* +0x1c */
    int cbPixelsAux; /* +0x20 */
    unsigned char pixelsChanged; /* +0x24 */
    unsigned char bConverted; /* +0x25 */
    unsigned char bUserMaintain; /* +0x26 */
    unsigned int uiSpan; /* +0x28 */
};

struct anon_25 {
    unsigned int vifcode[4]; /* +0x0 */
    anon_4 giftag; /* +0x10 */
    anon_16 bitbltbuf; /* +0x20 */
    long bitbltbufaddr; /* +0x28 */
    anon_22 trxpos; /* +0x30 */
    long trxposaddr; /* +0x38 */
    anon_28 trxreg; /* +0x40 */
    long trxregaddr; /* +0x48 */
    anon_12 finish; /* +0x50 */
    long finishaddr; /* +0x58 */
    anon_21 trxdir; /* +0x60 */
    long trxdiraddr; /* +0x68 */
};

struct tagGLlistpool {
    unsigned int nFreeIndex; /* +0x0 */
    tagListNodeSingle aSingleIndex[64]; /* +0x4 */
    tagListNode* pFirstNode; /* +0x204 */
    tagListNode* pLastNode; /* +0x208 */
};

struct _GL_BUFFERINFO {
    int iFrameBufferDepth; /* +0x0 */
    int iDepthBufferDepth; /* +0x4 */
    int iStencilBufferDepth; /* +0x8 */
    int iAccumBufferDepth; /* +0xc */
    int iAuxBufferBase; /* +0x10 */
    int iAuxBufferSize; /* +0x14 */
    int iAuxBufferPSM; /* +0x18 */
    int iAccumBufferBase; /* +0x1c */
    int iAccumBufferPSM; /* +0x20 */
    unsigned char bDoubleBufferMode; /* +0x24 */
    unsigned char bPlainBufferMode; /* +0x25 */
    int iScreenWidth; /* +0x28 */
    int iScreenHeight; /* +0x2c */
    int iSecondBufferWidth; /* +0x30 */
    int iSecondBufferHeight; /* +0x34 */
    int iSecondBufferWidthPower; /* +0x38 */
    int iSecondBufferHeightPower; /* +0x3c */
    int iSecondBufferBase; /* +0x40 */
    int iSecondBufferZBase; /* +0x44 */
    int iSecondBufferPSM; /* +0x48 */
    int iSecondBufferZPSM; /* +0x4c */
    int iSuperWidth; /* +0x50 */
    int iSuperHeight; /* +0x54 */
};

struct tag_GLlight {
    float vAmbient[4]; /* +0x0 */
    float vDiffuse[4]; /* +0x10 */
    float vSpecular[4]; /* +0x20 */
    float vPosition[4]; /* +0x30 */
    float vDirection[4]; /* +0x40 */
    float fSpotExponent; /* +0x50 */
    float fSpotCutoff; /* +0x54 */
    float fCosCutoff; /* +0x58 */
    float fConstantAttenuation; /* +0x5c */
    float fLinearAttenuation; /* +0x60 */
    float fQuadraticAttenuation; /* +0x64 */
} __attribute__((aligned(16)));

struct tagGLArrayInfo {
    int size; /* +0x0 */
    unsigned int type; /* +0x4 */
    int stride; /* +0x8 */
    int pointer; /* +0xc */
};

struct tagGLcontext {
    unsigned int nEnableBits; /* +0x0 */
    float fPointSize; /* +0x4 */
    int iLineFactor; /* +0x8 */
    unsigned short nLineMask; /* +0xc */
    float fLineWidth; /* +0x10 */
    unsigned int eCullFaceMode; /* +0x14 */
    unsigned int eFrontFaceMode; /* +0x18 */
    unsigned int ePolygonMode[2]; /* +0x1c */
    unsigned char aPolygonMask[128]; /* +0x24 */
    unsigned int eClippingFunction; /* +0xa4 */
    unsigned int eSPRMode; /* +0xa8 */
    unsigned char bSPRSynchronization; /* +0xac */
    unsigned int eTexConvMode; /* +0xb0 */
    unsigned int eClutConvMode; /* +0xb4 */
    unsigned int eTexUserMaintainMode; /* +0xb8 */
    unsigned int uiMotionBlurIntensity; /* +0xbc */
    unsigned short iAccumDepth; /* +0xc0 */
    unsigned char bAlphaChannelReduce; /* +0xc2 */
    unsigned int uiCurrentDmaBuffer; /* +0xc4 */
    unsigned short usDontUpdateBits; /* +0xc8 */
    unsigned int uiFastPathBits; /* +0xcc */
    unsigned int uiDmaOmitDataBits; /* +0xd0 */
    unsigned int uiBoundingSphereBits; /* +0xd4 */
    unsigned int uiStaticDisplayListMaxSize; /* +0xd8 */
    unsigned int uiStaticDisplayListBits; /* +0xdc */
    signed char ucSDLObjectReserveSize; /* +0xe0 */
    unsigned char _extractor_padding_08[15]; /* explicit retail gap; +0xe1..0xef */
    float vScissorBox[4]; /* +0xf0 */
    float fIndexClearValue; /* +0x100 */
    unsigned int eAlphaTestFunc; /* +0x104 */
    float fAlphaTestRef; /* +0x108 */
    unsigned char _extractor_padding_00[4]; /* implicitly added by extractor; +0x10c..0x10f */
    float vAccumClearValue[4]; /* +0x110 */
    unsigned int eBlendSrcFactor; /* +0x120 */
    unsigned int eBlendDstFactor; /* +0x124 */
    unsigned int eDrawBuffer; /* +0x128 */
    unsigned int eBufferReadMode; /* +0x12c */
    float vColorClearValue[4]; /* +0x130 */
    unsigned char abColorMask[4]; /* +0x140 */
    unsigned int eDepthFunc; /* +0x144 */
    float fDepthClearValue; /* +0x148 */
    unsigned char eDepthWriteMask; /* +0x14c */
    unsigned int eStencilFunc; /* +0x150 */
    int iStencilRef; /* +0x154 */
    unsigned int nStencilValueMask; /* +0x158 */
    unsigned int nStencilWriteMask; /* +0x15c */
    unsigned int eOpFail; /* +0x160 */
    unsigned int eOpZFail; /* +0x164 */
    unsigned int eOpZPass; /* +0x168 */
    int iStencilClearValue; /* +0x16c */
    unsigned int eLogicOpCode; /* +0x170 */
    unsigned int nLightBits; /* +0x174 */
    unsigned int bPointLighting; /* +0x178 */
    unsigned int nTextureEnableBits; /* +0x17c */
    tag_GLtexture_set TextureSet[2]; /* +0x180 */
    tag_GLtexture_set* pCurTexture; /* +0x240 */
    unsigned char _extractor_padding_01[12]; /* implicitly added by extractor; +0x244..0x24f */
    tagGsLoadImage stGsLoadImage; /* +0x250 */
    tagGsSetTex astGsSetTex[2]; /* +0x2a0 */
    tagGsSetTex* pstCurGsSetTex; /* +0x380 */
    unsigned int anCurTexName1D[2]; /* +0x384 */
    unsigned int anCurTexName2D[2]; /* +0x38c */
    unsigned int nCurTexNameCube; /* +0x394 */
    tagGLtexname aTexName[512]; /* +0x398 */
    unsigned int eTexLastBindTarget; /* +0x3b98 */
    unsigned int nTexLastBindName; /* +0x3b9c */
    int iMaxTexBlockCount; /* +0x3ba0 */
    tagGLtexblock aBlockMap[604]; /* +0x3ba4 */
    unsigned int nTexMemBegin; /* +0x4514 */
    unsigned int nTexMemEnd; /* +0x4518 */
    int aTexLevelCount[10]; /* +0x451c */
    tagGLtexindex aTexLevelIndex[1203]; /* +0x4544 */
    int iClutSize; /* +0x5810 */
    unsigned char bClutResident; /* +0x5814 */
    int clut; /* +0x5818 */
    unsigned char bMatrixChanged; /* +0x581c */
    unsigned char bBSParamChanged; /* +0x581d */
    unsigned char bLightsChanged; /* +0x581e */
    unsigned char bMaterialChanged; /* +0x581f */
    unsigned char bFogChanged; /* +0x5820 */
    unsigned char bCullfaceChanged; /* +0x5821 */
    unsigned int eOldBeginMode; /* +0x5824 */
    unsigned char abTex1DChanged[2]; /* +0x5828 */
    unsigned char abTex2DChanged[2]; /* +0x582a */
    unsigned char bTexCubeChanged; /* +0x582c */
    int pfnLastCall; /* +0x5830 */
    unsigned int nEvaluatorBits; /* +0x5834 */
    unsigned char bNeedNormal; /* +0x5838 */
    tag_GLlight Lights[8]; /* +0x5840 */
    unsigned char bLocalViewer; /* +0x5bc0 */
    unsigned char bLightModelTwoSide; /* +0x5bc1 */
    unsigned char _extractor_padding_09[14]; /* explicit retail gap; +0x5bc2..0x5bcf */
    float vAmbient[4]; /* +0x5bd0 */
    unsigned int eColorControl; /* +0x5be0 */
    unsigned char bLightModelDiffuseOnly; /* +0x5be4 */
    tag_GLmaterial Materials[2]; /* +0x5bf0 */
    unsigned int eColorMaterialFace; /* +0x5c90 */
    unsigned int eColorMaterialMode; /* +0x5c94 */
    unsigned int eShadeModel; /* +0x5c98 */
    unsigned int eFogMode; /* +0x5c9c */
    int ivFogColor[4]; /* +0x5ca0 */
    float fFogDensity; /* +0x5cb0 */
    float fFogLinearStart; /* +0x5cb4 */
    float fFogLinearEnd; /* +0x5cb8 */
    float fFogIndex; /* +0x5cbc */
    unsigned int eHintPerspectiveCorrection; /* +0x5cc0 */
    unsigned int eHintSmoothPoint; /* +0x5cc4 */
    unsigned int eHintSmoothLine; /* +0x5cc8 */
    unsigned int eHintSmoothPolygon; /* +0x5ccc */
    unsigned int eHintFog; /* +0x5cd0 */
    unsigned int uiListBase; /* +0x5cd4 */
    tagListData* pCurListData; /* +0x5cd8 */
    tagGLlistcalls* pCurListCalls; /* +0x5cdc */
    tagGLlistcalls* pPreListCalls; /* +0x5ce0 */
    tagGLprimbuf* pCurPrimBuf; /* +0x5ce4 */
    anon_14* pCurParamBegin; /* +0x5ce8 */
    tagGLprimbuf** ppCurPrimBufHead; /* +0x5cec */
    float (*pCurListVData)[4]; /* +0x5cf0 */
    int pCurListVCode; /* +0x5cf4 */
    int pCurListTexUnit; /* +0x5cf8 */
    tagGLlistpool ListPool; /* +0x5cfc */
    unsigned int nClientEnableBits; /* +0x5f08 */
    tagGLArrayInfo VertexArray; /* +0x5f0c */
    tagGLArrayInfo ColorArray[2]; /* +0x5f1c */
    tagGLArrayInfo NormalArray; /* +0x5f3c */
    tagGLArrayInfo TexArray[2]; /* +0x5f4c */
    tagGLArrayInfo IndexArray; /* +0x5f6c */
    tagGLArrayInfo EdgeFlagArray; /* +0x5f7c */
    unsigned int iCurClientTextureSet; /* +0x5f8c */
    unsigned int iFrameCount; /* +0x5f90 */
    unsigned int iDepthBuffer; /* +0x5f94 */
    unsigned int iDepthBufferBitDepth; /* +0x5f98 */
    unsigned int iFrameBufferBitDepth; /* +0x5f9c */
    unsigned int iFrameBuffer0; /* +0x5fa0 */
    unsigned int iFrameBuffer1; /* +0x5fa4 */
    unsigned int iFrameBufferFront; /* +0x5fa8 */
    unsigned int iFrameBufferBack; /* +0x5fac */
    int iPackAlignment; /* +0x5fb0 */
    unsigned char bFrameMode; /* +0x5fb4 */
    int iMipMapCoeff; /* +0x5fb8 */
    int iAlignMask; /* +0x5fbc */
    unsigned char bMapColor; /* +0x5fc0 */
    unsigned char bMapStencil; /* +0x5fc1 */
    int iIndexShift; /* +0x5fc4 */
    int iIndexOffset; /* +0x5fc8 */
    float fRedBias; /* +0x5fcc */
    float fRedScale; /* +0x5fd0 */
    float fGreenBias; /* +0x5fd4 */
    float fGreenScale; /* +0x5fd8 */
    float fBlueBias; /* +0x5fdc */
    float fBlueScale; /* +0x5fe0 */
    float fAlphaBias; /* +0x5fe4 */
    float fAlphaScale; /* +0x5fe8 */
    float fDepthBias; /* +0x5fec */
    float fDepthScale; /* +0x5ff0 */
    float fPixelZoomX; /* +0x5ff4 */
    float fPixelZoomY; /* +0x5ff8 */
    unsigned int nClipBits; /* +0x5ffc */
    int iMaxClipPlanes; /* +0x6000 */
    unsigned char _extractor_padding_02[12]; /* implicitly added by extractor; +0x6004..0x600f */
    float avClipPlane[6][4]; /* +0x6010 */
    unsigned int eMatrixMode; /* +0x6070 */
    float (*pCurMatrix)[4][4]; /* +0x6074 */
    float (*pCurStack)[4][4]; /* +0x6078 */
    int piCurStackDepth; /* +0x607c */
    float ViewOrg[2]; /* +0x6080 */
    unsigned char _extractor_padding_10[8]; /* explicit retail gap; +0x6088..0x608f */
    float ViewPort[4]; /* +0x6090 */
    float DepthRange[2]; /* +0x60a0 */
    unsigned char _extractor_padding_11[8]; /* explicit retail gap; +0x60a8..0x60af */
    float vacurColor[2][4]; /* +0x60b0 */
    float (*pvcurColor)[4]; /* +0x60d0 */
    unsigned char _extractor_padding_03[12]; /* implicitly added by extractor; +0x60d4..0x60df */
    float vcurNormal[4]; /* +0x60e0 */
    float vacurTexCoords[2][4]; /* +0x60f0 */
    unsigned int iCurTextureSet; /* +0x6110 */
    float (*pvcurTextCoord)[4]; /* +0x6114 */
    unsigned char bFinalCompile; /* +0x6118 */
    unsigned char _extractor_padding_12[7]; /* explicit retail gap; +0x6119..0x611f */
    float valistColor[2][4]; /* +0x6120 */
    float (*pvlistColor)[4]; /* +0x6140 */
    unsigned char _extractor_padding_04[12]; /* implicitly added by extractor; +0x6144..0x614f */
    float vlistNormal[4]; /* +0x6150 */
    float valistTexCoords[2][4]; /* +0x6160 */
    unsigned int ilistTexSet; /* +0x6180 */
    float (*pvlistTexCoord)[4]; /* +0x6184 */
    unsigned char bRasterPosValid; /* +0x6188 */
    float fRasterPos[4]; /* +0x618c */
    float fRasterDistance; /* +0x619c */
    float fRasterColor[2][4]; /* +0x61a0 */
    float RasterMultiTexCoords[2][4]; /* +0x61c0 */
    float (*pvRasterTexCoord)[4]; /* +0x61e0 */
    unsigned char bEdgeFlag; /* +0x61e4 */
    unsigned char _extractor_padding_13[11]; /* explicit retail gap; +0x61e5..0x61ef */
    float mFrustumNormal[4][4]; /* +0x61f0 */
    float mGuardBandNormal[4][4]; /* +0x6230 */
    float vZNearFar[4]; /* +0x6270 */
    float vObjectBS[4]; /* +0x6280 */
    float (*pfvPackaeBSs)[4]; /* +0x6290 */
    int iPackageBSIndex; /* +0x6294 */
    float faObjectBoundingBox[6]; /* +0x6298 */
    float ModelViewMatrix[4][4]; /* +0x62b0 */
    float NormalMatrix[4][4]; /* +0x62f0 */
    unsigned int nModelViewStackDepth; /* +0x6330 */
    unsigned char _extractor_padding_05[12]; /* implicitly added by extractor; +0x6334..0x633f */
    float ModelViewStack[16][4][4]; /* +0x6340 */
    float ProjectionMatrix[4][4]; /* +0x6740 */
    float GuardBandProjectionMatrix[4][4]; /* +0x6780 */
    unsigned int nProjectionStackDepth; /* +0x67c0 */
    unsigned char _extractor_padding_06[12]; /* implicitly added by extractor; +0x67c4..0x67cf */
    float ProjectionStack[4][4][4]; /* +0x67d0 */
    float NearFarStack[4][2]; /* +0x68d0 */
    float TextureMatrix[2][4][4]; /* +0x68f0 */
    unsigned int nTextureStackDepths[2]; /* +0x6970 */
    unsigned char _extractor_padding_14[8]; /* explicit retail gap; +0x6978..0x697f */
    float TextureStacks[2][4][4][4]; /* +0x6980 */
    float (*pTextureMatrix)[4][4]; /* +0x6b80 */
    int pnTextureStackDepth; /* +0x6b84 */
    float (*pTextureStack)[4][4]; /* +0x6b88 */
    unsigned int eBeginMode; /* +0x6b8c */
    unsigned char bInBeginEndPair; /* +0x6b90 */
    unsigned char bInDisplayListExecution; /* +0x6b91 */
    int iBufLimit; /* +0x6b94 */
    int iBufCount; /* +0x6b98 */
    float (*pVBuf)[4]; /* +0x6b9c */
    float (*pCBuf)[4]; /* +0x6ba0 */
    float (*pNBuf)[4]; /* +0x6ba4 */
    float (*pTBuf)[4]; /* +0x6ba8 */
    float (*pCBuf_b)[4]; /* +0x6bac */
    float (*pTBuf_b)[4]; /* +0x6bb0 */
    float (*pVIFDMABuf)[4]; /* +0x6bb4 */
    float (*pVIFDMABufUnaligned)[4]; /* +0x6bb8 */
    float (*pVIFInBuf)[4]; /* +0x6bbc */
    float (*pVIFOutBuf)[4]; /* +0x6bc0 */
    float (*pVIFIBufTail)[4]; /* +0x6bc4 */
    float (*pVIFOBufTail)[4]; /* +0x6bc8 */
    int iLightModel; /* +0x6bcc */
    _sceDmaTag* pVU1_DMA_parameters; /* +0x6bd0 */
    _sceDmaTag* pVU1_DMA_buf0; /* +0x6bd4 */
    _sceDmaTag* pVU1_DMA_buf1; /* +0x6bd8 */
    float (*pmClipping)[4][4]; /* +0x6bdc */
    float (*pmNormal)[4][4]; /* +0x6be0 */
    float (*pmClippingScreen)[4][4]; /* +0x6be4 */
    float (*pmLocalScreen)[4][4]; /* +0x6be8 */
    float (*pmModelView)[4][4]; /* +0x6bec */
    float (*pvClampLimit)[4]; /* +0x6bf0 */
    int (*pClippingFlags)[4]; /* +0x6bf4 */
    anon_4* pGifTagFan; /* +0x6bf8 */
    float (*pmD)[4][4]; /* +0x6bfc */
    float (*pmVP)[4][4]; /* +0x6c00 */
    float (*pmS)[4][4]; /* +0x6c04 */
    float (*pmh)[4][4]; /* +0x6c08 */
    float (*pvAmbient)[4]; /* +0x6c0c */
    float (*pvEmission)[4]; /* +0x6c10 */
    float (*pvScreenScale)[4]; /* +0x6c14 */
    float (*pvColorRange)[4]; /* +0x6c18 */
    int pfAlpha; /* +0x6c1c */
    int pfShininess; /* +0x6c20 */
    int pnColorMatMasks; /* +0x6c24 */
    int pbFogging; /* +0x6c28 */
    int peFogMode; /* +0x6c2c */
    int pfFogDensity; /* +0x6c30 */
    int pfFogLinearStart; /* +0x6c34 */
    int pfFogLinearEnd; /* +0x6c38 */
    int pbTriangleFan; /* +0x6c3c */
    int pnClipMask; /* +0x6c40 */
    int piClipStep; /* +0x6c44 */
    int pbNormalize; /* +0x6c48 */
    int piReturnAddress; /* +0x6c4c */
    int piEntryAddress; /* +0x6c50 */
    int peClippingMode; /* +0x6c54 */
    int peUseClippingMode; /* +0x6c58 */
    anon_4* pGifTagBuf0; /* +0x6c5c */
    anon_4* pGifTagBuf1; /* +0x6c60 */
    int iCurBuf; /* +0x6c64 */
    float (*pVBuf0)[4]; /* +0x6c68 */
    float (*pNBuf0)[4]; /* +0x6c6c */
    float (*pCBuf0)[4]; /* +0x6c70 */
    float (*pTBuf0)[4]; /* +0x6c74 */
    float (*pCBuf0_b)[4]; /* +0x6c78 */
    float (*pTBuf0_b)[4]; /* +0x6c7c */
    float (*pVBuf1)[4]; /* +0x6c80 */
    float (*pNBuf1)[4]; /* +0x6c84 */
    float (*pCBuf1)[4]; /* +0x6c88 */
    float (*pTBuf1)[4]; /* +0x6c8c */
    float (*pCBuf1_b)[4]; /* +0x6c90 */
    float (*pTBuf1_b)[4]; /* +0x6c94 */
    tagstVIFCode* pMSCAL; /* +0x6c98 */
    unsigned char _extractor_padding_07[4]; /* implicitly added by extractor; +0x6c9c..0x6c9f */
    unsigned char VU1Package[10000]; /* +0x6ca0 */
};

struct anon_45 {
    int keyField; /* +0x0 */
    unsigned int keyStatus; /* +0x4 */
    void (*KeyFunc)(void); /* +0x8 */
};

static unsigned int g_eDisplayMode;
static int g_iScreenWidth;
static int g_iScreenHeight;
static int g_iSuperWidth;
static int g_iSuperHeight;
static int g_iSecondBufferHeight;
static int g_iSecondBufferWidth;
static int g_iSecondBufferHeightPower;
static int g_iSecondBufferWidthPower;
static unsigned char g_bInitDisplayModeInvoked;
static unsigned char g_bSingleBuffer;
static int g_keyTableCount;
static int g_mouseDownTableCount;
static int g_mouseUpTableCount;
static int g_mouseLocTableCount;
static int g_xMousePos;
static int g_yMousePos;
static unsigned int g_eMouseBtnStatus;
static unsigned char g_bPadInput;
static unsigned char g_bMouseInput;
static unsigned char g_bNetPad;
static unsigned char g_abMouseInfo[128];
static char g_abMouseData[128];
static unsigned char g_bQuit;
static int g_iTimer;
static int ExposeFunc;
static int ReshapeFunc;
static int DisplayFunc;
static int KeyDownFunc;
static int MouseDownFunc;
static int MouseUpFunc;
static int MouseMoveFunc;
static int IdleFunc;
float PS2auxRGBMap[20][3];
static unsigned int fps_dwPreTickCount;
static int fpsCounter;
char strAuxIrxPath[50];
static tag_stKeyMap keyMapPad0[16];
static tag_stKeyMap keyMapPad1[16];
static unsigned int tickcount;
static long double pad_dma_buf1[16];
static long double pad_dma_buf0[16];
static tag_auxPadData g_padNet;
static tag_auxPadData g_pad1;
static tag_auxPadData g_pad0;
static anon_1 mouseLocTable[20];
static anon_1 mouseUpTable[20];
static anon_1 mouseDownTable[20];
static anon_45 keyTable[200];
int PS2glLiberator;
int PS2glAllocator;
tagGLcontext g_PS2glContext;
_GL_BUFFERINFO g_stBufferInfo;
tagGScontext g_gsContext;
void Timer(int, unsigned short, void*);
unsigned int KeyDown(int, unsigned int);
unsigned int MouseLoc(int, int, unsigned int);
unsigned int MouseDown(int, int, unsigned int);
unsigned int MouseUp(int, int, unsigned int);
void DefaultHandleExpose(int, int);
void DefaultHandleReshape(int, int);
unsigned char g_bEnvInitialized;
int SwapBufferNotifyFunc;

/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GLAUX\PS2GLAUX.c lines 177–215 */
/* addr: 0x00185930  size: 136 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 177
 *   +0x0004 -> line 198
 *   +0x0008 -> line 177
 *   +0x0014 -> line 198
 *   +0x0024 -> line 199
 *   +0x002c -> line 200
 *   +0x003c -> line 201
 *   +0x0044 -> line 202
 *   +0x0050 -> line 204
 *   +0x0054 -> line 211
 *   +0x0058 -> line 204
 *   +0x005c -> line 212
 *   +0x0060 -> line 206
 *   +0x0068 -> line 211
 *   +0x0070 -> line 212
 *   +0x0078 -> line 215
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void VU1SendPackage(_sceDmaTag* pTag)
{
    /* TODO: decompile from asm/... */
}

/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GLAUX\PS2GLAUX.c lines 584–643 */
/* addr: 0x001859c0  size: 400 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 584
 *   +0x0008 -> line 593
 *   +0x0014 -> line 597
 *   +0x0020 -> line 598
 *   +0x0028 -> line 604
 *   +0x0038 -> line 605
 *   +0x0040 -> line 608
 *   +0x0048 -> line 609
 *   +0x004c -> line 608
 *   +0x0050 -> line 609
 *   +0x005c -> line 608
 *   +0x0060 -> line 610
 *   +0x006c -> line 609
 *   +0x0070 -> line 611
 *   +0x0090 -> line 612
 *   +0x0098 -> line 613
 *   +0x00a8 -> line 615
 *   +0x00b8 -> line 616
 *   +0x00bc -> line 619
 *   +0x00c0 -> line 617
 *   +0x00c4 -> line 616
 *   +0x00cc -> line 617
 *   +0x00d0 -> line 616
 *   +0x00d4 -> line 618
 *   +0x00dc -> line 620
 *   +0x00e0 -> line 618
 *   +0x00e4 -> line 621
 *   +0x00e8 -> line 618
 *   +0x00ec -> line 623
 *   +0x00f0 -> line 624
 *   +0x00f4 -> line 622
 *   +0x00f8 -> line 617
 *   +0x00fc -> line 628
 *   +0x0100 -> line 619
 *   +0x0104 -> line 620
 *   +0x0108 -> line 623
 *   +0x010c -> line 624
 *   +0x0110 -> line 625
 *   +0x0114 -> line 626
 *   +0x0118 -> line 621
 *   +0x011c -> line 622
 *   +0x0120 -> line 625
 *   +0x0124 -> line 628
 *   +0x012c -> line 630
 *   +0x0138 -> line 634
 *   +0x013c -> line 632
 *   +0x0140 -> line 634
 *   +0x0144 -> line 635
 *   +0x0148 -> line 634
 *   +0x014c -> line 635
 *   +0x0150 -> line 636
 *   +0x0154 -> line 635
 *   +0x0158 -> line 636
 *   +0x015c -> line 637
 *   +0x0160 -> line 636
 *   +0x0164 -> line 637
 *   +0x0168 -> line 638
 *   +0x016c -> line 637
 *   +0x0170 -> line 638
 *   +0x0174 -> line 639
 *   +0x0178 -> line 638
 *   +0x017c -> line 639
 *   +0x0184 -> line 643
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
unsigned int PS2auxInitWindow(void)
{
    _GL_BUFFERINFO stBufferInfo;
    unsigned int eReturn;
    /* TODO: decompile from asm/... */
}

/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GLAUX\PS2GLAUX.c lines 495–580 */
/* addr: 0x00185b50  size: 496 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 495
 *   +0x000c -> line 496
 *   +0x0018 -> line 497
 *   +0x0020 -> line 498
 *   +0x002c -> line 499
 *   +0x0038 -> line 500
 *   +0x0044 -> line 502
 *   +0x0048 -> line 504
 *   +0x0054 -> line 505
 *   +0x0060 -> line 506
 *   +0x0068 -> line 507
 *   +0x0074 -> line 508
 *   +0x0080 -> line 509
 *   +0x008c -> line 510
 *   +0x0094 -> line 511
 *   +0x00a0 -> line 512
 *   +0x00ac -> line 513
 *   +0x00b8 -> line 515
 *   +0x00bc -> line 517
 *   +0x00c8 -> line 519
 *   +0x00cc -> line 520
 *   +0x00d0 -> line 519
 *   +0x00d4 -> line 521
 *   +0x00dc -> line 522
 *   +0x00e4 -> line 524
 *   +0x00e8 -> line 525
 *   +0x00ec -> line 524
 *   +0x00f0 -> line 526
 *   +0x00f8 -> line 527
 *   +0x0104 -> line 529
 *   +0x0108 -> line 530
 *   +0x010c -> line 529
 *   +0x0110 -> line 531
 *   +0x0118 -> line 532
 *   +0x0120 -> line 535
 *   +0x0124 -> line 534
 *   +0x0128 -> line 536
 *   +0x0130 -> line 539
 *   +0x0134 -> line 540
 *   +0x0138 -> line 543
 *   +0x0144 -> line 545
 *   +0x0148 -> line 546
 *   +0x014c -> line 545
 *   +0x0150 -> line 547
 *   +0x0158 -> line 548
 *   +0x0160 -> line 551
 *   +0x0164 -> line 550
 *   +0x0168 -> line 552
 *   +0x0170 -> line 553
 *   +0x017c -> line 555
 *   +0x0180 -> line 556
 *   +0x0184 -> line 555
 *   +0x0188 -> line 557
 *   +0x0190 -> line 558
 *   +0x0198 -> line 561
 *   +0x019c -> line 560
 *   +0x01a0 -> line 562
 *   +0x01a8 -> line 563
 *   +0x01b4 -> line 565
 *   +0x01b8 -> line 566
 *   +0x01bc -> line 565
 *   +0x01c0 -> line 567
 *   +0x01c8 -> line 568
 *   +0x01d0 -> line 571
 *   +0x01d4 -> line 570
 *   +0x01d8 -> line 572
 *   +0x01e0 -> line 575
 *   +0x01e4 -> line 576
 *   +0x01e8 -> line 580
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void PS2auxInitPosition(int x, int y, int w, int h)
{
    /* TODO: decompile from asm/... */
}

/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GLAUX\PS2GLAUX.c lines 471–482 */
/* addr: 0x00185d40  size: 44 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 471
 *   +0x0008 -> line 476
 *   +0x0014 -> line 478
 *   +0x0018 -> line 480
 *   +0x0020 -> line 482
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void PS2glInit(void);

void PS2auxInitDisplayMode(unsigned int eMode)
{
    g_eDisplayMode = eMode;
    if (!g_bInitDisplayModeInvoked) {
        g_bInitDisplayModeInvoked = 1;
        PS2glInit();
    }
}

/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GLAUX\PS2GLAUX.c lines 337–337 */
/* addr: 0x00185d70  size: 8 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 337
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void PS2auxSwapBuffers(void)
{
    PS2glSwapBuffers();
}

/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GLAUX\PS2GLAUX.c lines 240–257 */
/* addr: 0x00185d80  size: 172 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 240
 *   +0x0024 -> line 245
 *   +0x0030 -> line 247
 *   +0x003c -> line 249
 *   +0x005c -> line 251
 *   +0x0068 -> line 252
 *   +0x006c -> line 253
 *   +0x0070 -> line 252
 *   +0x0074 -> line 254
 *   +0x0088 -> line 256
 *   +0x008c -> line 257
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
unsigned int KeyDown(int key, unsigned int status)
{
    int i;
    unsigned int flag;
    /* TODO: decompile from asm/... */
}

/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GLAUX\PS2GLAUX.c lines 203–237 */
/* addr: 0x00185e30  size: 308 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 203
 *   +0x0010 -> line 209
 *   +0x0014 -> line 203
 *   +0x0038 -> line 209
 *   +0x0040 -> line 211
 *   +0x0058 -> line 213
 *   +0x005c -> line 212
 *   +0x0060 -> line 215
 *   +0x0064 -> line 214
 *   +0x0068 -> line 215
 *   +0x006c -> line 216
 *   +0x0078 -> line 217
 *   +0x007c -> line 218
 *   +0x0080 -> line 219
 *   +0x0090 -> line 221
 *   +0x0094 -> line 220
 *   +0x0098 -> line 223
 *   +0x009c -> line 222
 *   +0x00a0 -> line 223
 *   +0x00a4 -> line 224
 *   +0x00b0 -> line 225
 *   +0x00b4 -> line 226
 *   +0x00b8 -> line 227
 *   +0x00c8 -> line 229
 *   +0x00cc -> line 228
 *   +0x00d0 -> line 231
 *   +0x00d4 -> line 230
 *   +0x00d8 -> line 231
 *   +0x00dc -> line 232
 *   +0x00e8 -> line 233
 *   +0x00ec -> line 234
 *   +0x00f0 -> line 233
 *   +0x00f4 -> line 235
 *   +0x0108 -> line 236
 *   +0x010c -> line 237
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
unsigned int MouseDown(int x, int y, unsigned int button)
{
    int i;
    unsigned int flag;
    _AUX_EVENTREC info;
    /* TODO: decompile from asm/... */
}

/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GLAUX\PS2GLAUX.c lines 166–200 */
/* addr: 0x00185f70  size: 308 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 166
 *   +0x0010 -> line 172
 *   +0x0014 -> line 166
 *   +0x0038 -> line 172
 *   +0x0040 -> line 174
 *   +0x0058 -> line 176
 *   +0x005c -> line 175
 *   +0x0060 -> line 178
 *   +0x0064 -> line 177
 *   +0x0068 -> line 178
 *   +0x006c -> line 179
 *   +0x0078 -> line 180
 *   +0x007c -> line 181
 *   +0x0080 -> line 182
 *   +0x0090 -> line 184
 *   +0x0094 -> line 183
 *   +0x0098 -> line 186
 *   +0x009c -> line 185
 *   +0x00a0 -> line 186
 *   +0x00a4 -> line 187
 *   +0x00b0 -> line 188
 *   +0x00b4 -> line 189
 *   +0x00b8 -> line 190
 *   +0x00c8 -> line 192
 *   +0x00cc -> line 191
 *   +0x00d0 -> line 194
 *   +0x00d4 -> line 193
 *   +0x00d8 -> line 194
 *   +0x00dc -> line 195
 *   +0x00e8 -> line 196
 *   +0x00ec -> line 197
 *   +0x00f0 -> line 196
 *   +0x00f4 -> line 198
 *   +0x0108 -> line 199
 *   +0x010c -> line 200
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
unsigned int MouseUp(int x, int y, unsigned int button)
{
    int i;
    unsigned int flag;
    _AUX_EVENTREC info;
    /* TODO: decompile from asm/... */
}

/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GLAUX\PS2GLAUX.c lines 129–163 */
/* addr: 0x001860b0  size: 308 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 129
 *   +0x0010 -> line 135
 *   +0x0014 -> line 129
 *   +0x0038 -> line 135
 *   +0x0040 -> line 137
 *   +0x0058 -> line 139
 *   +0x005c -> line 138
 *   +0x0060 -> line 141
 *   +0x0064 -> line 140
 *   +0x0068 -> line 141
 *   +0x006c -> line 142
 *   +0x0078 -> line 143
 *   +0x007c -> line 144
 *   +0x0080 -> line 145
 *   +0x0090 -> line 147
 *   +0x0094 -> line 146
 *   +0x0098 -> line 149
 *   +0x009c -> line 148
 *   +0x00a0 -> line 149
 *   +0x00a4 -> line 150
 *   +0x00b0 -> line 151
 *   +0x00b4 -> line 152
 *   +0x00b8 -> line 153
 *   +0x00c8 -> line 155
 *   +0x00cc -> line 154
 *   +0x00d0 -> line 157
 *   +0x00d4 -> line 156
 *   +0x00d8 -> line 157
 *   +0x00dc -> line 158
 *   +0x00e8 -> line 159
 *   +0x00ec -> line 160
 *   +0x00f0 -> line 159
 *   +0x00f4 -> line 161
 *   +0x0108 -> line 162
 *   +0x010c -> line 163
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
unsigned int MouseLoc(int x, int y, unsigned int button)
{
    int i;
    unsigned int flag;
    _AUX_EVENTREC info;
    /* TODO: decompile from asm/... */
}

/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GLAUX\PS2GLAUX.c lines 126–126 */
/* addr: 0x001861f0  size: 8 bytes */
/* Signature completed from the same-TU declaration record (MWCC omits unreferenced parameters from definitions). */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 126
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void DefaultHandleExpose(int param0, int param1)
{
    /* TODO: decompile from asm/... */
}
