/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_Array.c */
/* Language: C */
/* Compiler: MW MIPS C Compiler */

#include <stddef.h>

/* Recovered aggregate layouts from MWCC debug type records. */
typedef struct tagGLlistdatas tagGLlistdatas;
typedef struct tag_GLmaterial tag_GLmaterial;
typedef struct tagstVIFCode tagstVIFCode;
typedef struct anon_0 anon_0;
typedef struct anon_1 anon_1;
typedef struct anon_2 anon_2;
typedef struct tag_GLtexture tag_GLtexture;
typedef struct _sceDmaTag _sceDmaTag;
typedef struct tagListData tagListData;
typedef union unFunction unFunction;
typedef struct tagGLlistnode tagGLlistnode;
typedef struct tagGLlistcalls tagGLlistcalls;
typedef struct tagGLtexblock tagGLtexblock;
typedef struct tagGLprimbuf tagGLprimbuf;
typedef struct tagsceGsReg tagsceGsReg;
typedef struct anon_3 anon_3;
typedef struct anon_4 anon_4;
typedef struct anon_5 anon_5;
typedef struct anon_6 anon_6;
typedef struct anon_42 anon_42;
typedef struct anon_7 anon_7;
typedef struct anon_23 anon_23;
typedef struct anon_27 anon_27;
typedef struct anon_35 anon_35;
typedef struct anon_34 anon_34;
typedef struct anon_32 anon_32;
typedef struct anon_22 anon_22;
typedef struct anon_14 anon_14;
typedef struct anon_41 anon_41;
typedef struct anon_30 anon_30;
typedef struct anon_9 anon_9;
typedef struct anon_11 anon_11;
typedef struct anon_28 anon_28;
typedef struct anon_33 anon_33;
typedef struct anon_17 anon_17;
typedef struct anon_16 anon_16;
typedef struct anon_31 anon_31;
typedef struct anon_29 anon_29;
typedef struct anon_25 anon_25;
typedef struct anon_40 anon_40;
typedef struct anon_8 anon_8;
typedef struct anon_20 anon_20;
typedef struct anon_39 anon_39;
typedef struct anon_13 anon_13;
typedef struct anon_19 anon_19;
typedef struct anon_24 anon_24;
typedef struct anon_18 anon_18;
typedef struct anon_21 anon_21;
typedef struct anon_26 anon_26;
typedef struct anon_37 anon_37;
typedef union anon_36 anon_36;
typedef struct tagGScontext tagGScontext;
typedef struct tagGLtexindex tagGLtexindex;
typedef struct tag_GLtexture_set tag_GLtexture_set;
typedef struct tagSPRInfo tagSPRInfo;
typedef struct tagGsLoadImage tagGsLoadImage;
typedef struct anon_15 anon_15;
typedef struct tagGsSetTex tagGsSetTex;
typedef struct anon_38 anon_38;
typedef struct anon_10 anon_10;
typedef struct anon_12 anon_12;
typedef struct tagListNodeSingle tagListNodeSingle;
typedef struct tagListNode tagListNode;
typedef struct tag_GLtexture_image tag_GLtexture_image;
typedef struct tagGLlistpool tagGLlistpool;
typedef struct tagGLtexname tagGLtexname;
typedef struct tag_GLlight tag_GLlight;
typedef struct tagGLArrayInfo tagGLArrayInfo;
typedef struct tagGLcontext tagGLcontext;

struct tagGLlistdatas {
    tagGLlistdatas* pNext; /* +0x0 */
    int apData[3]; /* +0x4 */
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
};

struct tagstVIFCode {
    unsigned short IMMEDIATE; /* +0x0 */
    unsigned char NUM; /* +0x2 */
    unsigned char CMD; /* +0x3 */
};

struct anon_0 {
    unsigned long pad00 : 20; /* bit 0, byte +0x0 */
    unsigned long PSM : 6; /* bit 20, byte +0x0 */
    unsigned long pad26 : 11; /* bit 26, byte +0x0 */
    unsigned long CBP : 14; /* bit 37, byte +0x0 */
    unsigned long CPSM : 4; /* bit 51, byte +0x0 */
    unsigned long CSM : 1; /* bit 55, byte +0x0 */
    unsigned long CSA : 5; /* bit 56, byte +0x0 */
    unsigned long CLD : 3; /* bit 61, byte +0x0 */
};

struct anon_1 {
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

struct anon_2 {
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

struct _sceDmaTag {
    unsigned short qwc; /* +0x0 */
    unsigned char mark; /* +0x2 */
    unsigned char id; /* +0x3 */
    _sceDmaTag* next; /* +0x4 */
    unsigned int p[2]; /* +0x8 */
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
    anon_1 tagGif; /* +0x30 */
    int vData[4]; /* +0x40 */
};

struct tagsceGsReg {
    unsigned long DATA; /* +0x0 */
};

struct anon_3 {
    unsigned long TA0 : 8; /* bit 0, byte +0x0 */
    unsigned long pad08 : 7; /* bit 8, byte +0x0 */
    unsigned long AEM : 1; /* bit 15, byte +0x0 */
    unsigned long pad16 : 16; /* bit 16, byte +0x0 */
    unsigned long TA1 : 8; /* bit 32, byte +0x0 */
    unsigned long pad40 : 24; /* bit 40, byte +0x0 */
};

struct anon_4 {
    unsigned long AC : 1; /* bit 0, byte +0x0 */
    unsigned long pad01 : 63; /* bit 1, byte +0x0 */
};

struct anon_5 {
    unsigned long A : 2; /* bit 0, byte +0x0 */
    unsigned long B : 2; /* bit 2, byte +0x0 */
    unsigned long C : 2; /* bit 4, byte +0x0 */
    unsigned long D : 2; /* bit 6, byte +0x0 */
    unsigned long pad8 : 24; /* bit 8, byte +0x0 */
    unsigned long FIX : 8; /* bit 32, byte +0x0 */
    unsigned long pad40 : 24; /* bit 40, byte +0x0 */
};

struct anon_6 {
    unsigned long DTHE : 1; /* bit 0, byte +0x0 */
    unsigned long pad01 : 63; /* bit 1, byte +0x0 */
};

struct anon_42 {
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

struct anon_7 {
    unsigned int R : 8; /* bit 0, byte +0x0 */
    unsigned int G : 8; /* bit 8, byte +0x0 */
    unsigned int B : 8; /* bit 16, byte +0x0 */
    unsigned int A : 8; /* bit 24, byte +0x0 */
    float Q; /* +0x4 */
};

struct anon_23 {
    float S; /* +0x0 */
    float T; /* +0x4 */
};

struct anon_27 {
    unsigned long U : 14; /* bit 0, byte +0x0 */
    unsigned long pad14 : 2; /* bit 14, byte +0x0 */
    unsigned long V : 14; /* bit 16, byte +0x0 */
    unsigned long pad30 : 34; /* bit 30, byte +0x0 */
};

struct anon_35 {
    unsigned long X : 16; /* bit 0, byte +0x0 */
    unsigned long Y : 16; /* bit 16, byte +0x0 */
    unsigned long Z : 24; /* bit 32, byte +0x0 */
    unsigned long F : 8; /* bit 56, byte +0x0 */
};

struct anon_34 {
    unsigned long X : 16; /* bit 0, byte +0x0 */
    unsigned long Y : 16; /* bit 16, byte +0x0 */
    unsigned long Z : 32; /* bit 32, byte +0x0 */
};

struct anon_32 {
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

struct anon_22 {
    unsigned long WMS : 2; /* bit 0, byte +0x0 */
    unsigned long WMT : 2; /* bit 2, byte +0x0 */
    unsigned long MINU : 10; /* bit 4, byte +0x0 */
    unsigned long MAXU : 10; /* bit 14, byte +0x0 */
    unsigned long MINV : 10; /* bit 24, byte +0x0 */
    unsigned long MAXV : 10; /* bit 34, byte +0x0 */
    unsigned long pad44 : 20; /* bit 44, byte +0x0 */
};

struct anon_14 {
    unsigned long pad00 : 56; /* bit 0, byte +0x0 */
    unsigned long F : 8; /* bit 56, byte +0x0 */
};

struct anon_41 {
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

struct anon_30 {
    unsigned long OFX : 16; /* bit 0, byte +0x0 */
    unsigned long pad16 : 16; /* bit 16, byte +0x0 */
    unsigned long OFY : 16; /* bit 32, byte +0x0 */
    unsigned long pad48 : 16; /* bit 48, byte +0x0 */
};

struct anon_9 {
    unsigned long CBW : 6; /* bit 0, byte +0x0 */
    unsigned long COU : 6; /* bit 6, byte +0x0 */
    unsigned long COV : 10; /* bit 12, byte +0x0 */
    unsigned long pad22 : 42; /* bit 22, byte +0x0 */
};

struct anon_11 {
    unsigned long MSK : 2; /* bit 0, byte +0x0 */
    unsigned long pad02 : 62; /* bit 2, byte +0x0 */
};

struct anon_28 {
    unsigned long TBP1 : 14; /* bit 0, byte +0x0 */
    unsigned long TBW1 : 6; /* bit 14, byte +0x0 */
    unsigned long TBP2 : 14; /* bit 20, byte +0x0 */
    unsigned long TBW2 : 6; /* bit 34, byte +0x0 */
    unsigned long TBP3 : 14; /* bit 40, byte +0x0 */
    unsigned long TBW3 : 6; /* bit 54, byte +0x0 */
    unsigned long pad60 : 4; /* bit 60, byte +0x0 */
};

struct anon_33 {
    unsigned long TBP4 : 14; /* bit 0, byte +0x0 */
    unsigned long TBW4 : 6; /* bit 14, byte +0x0 */
    unsigned long TBP5 : 14; /* bit 20, byte +0x0 */
    unsigned long TBW5 : 6; /* bit 34, byte +0x0 */
    unsigned long TBP6 : 14; /* bit 40, byte +0x0 */
    unsigned long TBW6 : 6; /* bit 54, byte +0x0 */
    unsigned long pad60 : 4; /* bit 60, byte +0x0 */
};

struct anon_17 {
    unsigned long FCR : 8; /* bit 0, byte +0x0 */
    unsigned long FCG : 8; /* bit 8, byte +0x0 */
    unsigned long FCB : 8; /* bit 16, byte +0x0 */
    unsigned long pad24 : 40; /* bit 24, byte +0x0 */
};

struct anon_16 {
    unsigned long SCAX0 : 11; /* bit 0, byte +0x0 */
    unsigned long pad11 : 5; /* bit 11, byte +0x0 */
    unsigned long SCAX1 : 11; /* bit 16, byte +0x0 */
    unsigned long pad27 : 5; /* bit 27, byte +0x0 */
    unsigned long SCAY0 : 11; /* bit 32, byte +0x0 */
    unsigned long pad43 : 5; /* bit 43, byte +0x0 */
    unsigned long SCAY1 : 11; /* bit 48, byte +0x0 */
    unsigned long pad59 : 5; /* bit 59, byte +0x0 */
};

struct anon_31 {
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

struct anon_29 {
    unsigned long CLAMP : 1; /* bit 0, byte +0x0 */
    unsigned long pad01 : 63; /* bit 1, byte +0x0 */
};

struct anon_25 {
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

struct anon_40 {
    unsigned long PABE : 1; /* bit 0, byte +0x0 */
    unsigned long pad01 : 63; /* bit 1, byte +0x0 */
};

struct anon_8 {
    unsigned long FBA : 1; /* bit 0, byte +0x0 */
    unsigned long pad01 : 63; /* bit 1, byte +0x0 */
};

struct anon_20 {
    unsigned long FBP : 9; /* bit 0, byte +0x0 */
    unsigned long pad09 : 7; /* bit 9, byte +0x0 */
    unsigned long FBW : 6; /* bit 16, byte +0x0 */
    unsigned long pad22 : 2; /* bit 22, byte +0x0 */
    unsigned long PSM : 6; /* bit 24, byte +0x0 */
    unsigned long pad30 : 2; /* bit 30, byte +0x0 */
    unsigned long FBMSK : 32; /* bit 32, byte +0x0 */
};

struct anon_39 {
    unsigned long ZBP : 9; /* bit 0, byte +0x0 */
    unsigned long pad09 : 15; /* bit 9, byte +0x0 */
    unsigned long PSM : 4; /* bit 24, byte +0x0 */
    unsigned long pad28 : 4; /* bit 28, byte +0x0 */
    unsigned long ZMSK : 1; /* bit 32, byte +0x0 */
    unsigned long pad33 : 31; /* bit 33, byte +0x0 */
};

struct anon_13 {
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

struct anon_19 {
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

struct anon_24 {
    unsigned long RRW : 12; /* bit 0, byte +0x0 */
    unsigned long pad12 : 20; /* bit 12, byte +0x0 */
    unsigned long RRH : 12; /* bit 32, byte +0x0 */
    unsigned long pad44 : 20; /* bit 44, byte +0x0 */
};

struct anon_18 {
    unsigned long XDR : 2; /* bit 0, byte +0x0 */
    unsigned long pad02 : 62; /* bit 2, byte +0x0 */
};

struct anon_21 {
    unsigned int ID; /* +0x0 */
    unsigned int IDMSK; /* +0x4 */
};

struct anon_26 {
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

union anon_36 {
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
    anon_42 PRIM; /* +0x0 */
    anon_7 RGBAQ; /* +0x8 */
    anon_23 ST; /* +0x10 */
    anon_27 UV; /* +0x18 */
    anon_35 XYZF2; /* +0x20 */
    anon_34 XYZ2; /* +0x28 */
    anon_32 TEX0_1; /* +0x30 */
    anon_32 TEX0_2; /* +0x38 */
    anon_22 CLAMP_1; /* +0x40 */
    anon_22 CLAMP_2; /* +0x48 */
    anon_14 FOG; /* +0x50 */
    anon_35 XYZF3; /* +0x58 */
    anon_34 XYZ3; /* +0x60 */
    anon_41 TEX1_1; /* +0x68 */
    anon_41 TEX1_2; /* +0x70 */
    anon_0 TEX2_1; /* +0x78 */
    anon_0 TEX2_2; /* +0x80 */
    anon_30 XYOFFSET_1; /* +0x88 */
    anon_30 XYOFFSET_2; /* +0x90 */
    anon_4 PRMODECONT; /* +0x98 */
    anon_2 PRMODE; /* +0xa0 */
    anon_9 TEXCLUT; /* +0xa8 */
    anon_11 SCANMSK; /* +0xb0 */
    anon_28 MIPTBP1_1; /* +0xb8 */
    anon_28 MIPTBP1_2; /* +0xc0 */
    anon_33 MIPTBP2_1; /* +0xc8 */
    anon_33 MIPTBP2_2; /* +0xd0 */
    anon_3 TEXA; /* +0xd8 */
    anon_17 FOGCOL; /* +0xe0 */
    tagsceGsReg TEXFLUSH; /* +0xe8 */
    anon_16 SCISSOR_1; /* +0xf0 */
    anon_16 SCISSOR_2; /* +0xf8 */
    anon_5 ALPHA_1; /* +0x100 */
    anon_5 ALPHA_2; /* +0x108 */
    anon_31 DIMX; /* +0x110 */
    anon_6 DTHE; /* +0x118 */
    anon_29 COLCLAMP; /* +0x120 */
    anon_25 TEST_1; /* +0x128 */
    anon_25 TEST_2; /* +0x130 */
    anon_40 PABE; /* +0x138 */
    anon_8 FBA_1; /* +0x140 */
    anon_8 FBA_2; /* +0x148 */
    anon_20 FRAME_1; /* +0x150 */
    anon_20 FRAME_2; /* +0x158 */
    anon_39 ZBUF_1; /* +0x160 */
    anon_39 ZBUF_2; /* +0x168 */
    anon_13 BITBLTBUF; /* +0x170 */
    anon_19 TRXPOS; /* +0x178 */
    anon_24 TRXREG; /* +0x180 */
    anon_18 TRXDIR; /* +0x188 */
    tagsceGsReg HWREG; /* +0x190 */
    anon_21 SIGNAL; /* +0x198 */
    tagsceGsReg FINISH; /* +0x1a0 */
    anon_26 LABEL; /* +0x1a8 */
    anon_37 ModFlgs; /* +0x1b0 */
    anon_37 GlobalModFlgs; /* +0x1b8 */
    anon_36 PackageBuffer[518]; /* +0x1c0 */
    int iBufCount; /* +0x2220 */
    anon_36* pqCurrent; /* +0x2224 */
    anon_1* pCurTag; /* +0x2228 */
    signed char iRegs; /* +0x222c */
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

struct tagSPRInfo {
    unsigned int uiState; /* +0x0 */
};

struct tagGsLoadImage {
    anon_1 gifTag; /* +0x0 */
    anon_13 bitbltbuf; /* +0x10 */
    long bitbltbufaddr; /* +0x18 */
    anon_19 trxpos; /* +0x20 */
    long trxposaddr; /* +0x28 */
    anon_24 trxreg; /* +0x30 */
    long trxregaddr; /* +0x38 */
    anon_18 trxdir; /* +0x40 */
    long trxdiraddr; /* +0x48 */
};

struct anon_15 {
    unsigned long pad00; /* +0x0 */
};

struct tagGsSetTex {
    anon_1 gifTag; /* +0x0 */
    anon_15 texflush; /* +0x10 */
    long texflushaddr; /* +0x18 */
    anon_32 tex0; /* +0x20 */
    long tex0addr; /* +0x28 */
    anon_41 tex1; /* +0x30 */
    long tex1addr; /* +0x38 */
    anon_28 miptbp1; /* +0x40 */
    long miptbp1addr; /* +0x48 */
    anon_33 miptbp2; /* +0x50 */
    long miptbp2addr; /* +0x58 */
    anon_22 clamp; /* +0x60 */
    long clampaddr; /* +0x68 */
};

struct anon_38 {
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

struct anon_10 {
    anon_38 chcr; /* +0x0 */
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

struct anon_12 {
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

struct tagGLlistpool {
    unsigned int nFreeIndex; /* +0x0 */
    tagListNodeSingle aSingleIndex[64]; /* +0x4 */
    tagListNode* pFirstNode; /* +0x204 */
    tagListNode* pLastNode; /* +0x208 */
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
};

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
    anon_12* pCurParamBegin; /* +0x5ce8 */
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
    float ViewPort[4]; /* +0x6090 */
    float DepthRange[2]; /* +0x60a0 */
    float vacurColor[2][4]; /* +0x60b0 */
    float (*pvcurColor)[4]; /* +0x60d0 */
    unsigned char _extractor_padding_03[12]; /* implicitly added by extractor; +0x60d4..0x60df */
    float vcurNormal[4]; /* +0x60e0 */
    float vacurTexCoords[2][4]; /* +0x60f0 */
    unsigned int iCurTextureSet; /* +0x6110 */
    float (*pvcurTextCoord)[4]; /* +0x6114 */
    unsigned char bFinalCompile; /* +0x6118 */
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
    anon_1* pGifTagFan; /* +0x6bf8 */
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
    anon_1* pGifTagBuf0; /* +0x6c5c */
    anon_1* pGifTagBuf1; /* +0x6c60 */
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

tagSPRInfo g_stSPRInfo;
unsigned int PS2GL_SpecialMode;
int iDmaTagCount;
int g_aDmaTag;
int PS2GL_bOptimizedSprite;
tagGLcontext g_PS2glContext;
int MY_MSCNT[4];
int MY_UNPACKR[4];
tagGScontext g_gsContext;

/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_Array.c lines 3093–3207 */
/* addr: 0x0013c1c0  size: 576 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 3093
 *   +0x0004 -> line 3106
 *   +0x0008 -> line 3093
 *   +0x000c -> line 3101
 *   +0x0010 -> line 3093
 *   +0x0024 -> line 3104
 *   +0x0028 -> line 3093
 *   +0x002c -> line 3118
 *   +0x0030 -> line 3093
 *   +0x0034 -> line 3101
 *   +0x0038 -> line 3093
 *   +0x003c -> line 3096
 *   +0x0040 -> line 3093
 *   +0x0044 -> line 3106
 *   +0x0048 -> line 3108
 *   +0x004c -> line 3109
 *   +0x0050 -> line 3118
 *   +0x0058 -> line 3119
 *   +0x0060 -> line 3121
 *   +0x00a8 -> line 3122
 *   +0x00b0 -> line 3123
 *   +0x00bc -> line 3127
 *   +0x00c8 -> line 3146
 *   +0x00cc -> line 3175
 *   +0x00d0 -> line 3146
 *   +0x00d4 -> line 3175
 *   +0x00d8 -> line 3147
 *   +0x00dc -> line 3144
 *   +0x00e0 -> line 3147
 *   +0x00e4 -> line 3173
 *   +0x00e8 -> line 3176
 *   +0x00ec -> line 3177
 *   +0x00f0 -> line 3176
 *   +0x00f4 -> line 3180
 *   +0x00f8 -> line 3182
 *   +0x00fc -> line 3184
 *   +0x0100 -> line 3182
 *   +0x0104 -> line 3186
 *   +0x010c -> line 3132
 *   +0x0110 -> line 3136
 *   +0x0118 -> line 3137
 *   +0x0130 -> line 3139
 *   +0x0148 -> line 3140
 *   +0x0168 -> line 3142
 *   +0x016c -> line 3143
 *   +0x0170 -> line 3191
 *   +0x0174 -> line 3144
 *   +0x0178 -> line 3174
 *   +0x017c -> line 3145
 *   +0x0180 -> line 3186
 *   +0x0184 -> line 3146
 *   +0x0188 -> line 3191
 *   +0x018c -> line 3147
 *   +0x0190 -> line 3188
 *   +0x0194 -> line 3148
 *   +0x0198 -> line 3173
 *   +0x019c -> line 3174
 *   +0x01a8 -> line 3175
 *   +0x01ac -> line 3176
 *   +0x01b0 -> line 3177
 *   +0x01b4 -> line 3180
 *   +0x01b8 -> line 3181
 *   +0x01bc -> line 3182
 *   +0x01c0 -> line 3184
 *   +0x01c4 -> line 3186
 *   +0x01c8 -> line 3193
 *   +0x01d0 -> line 3196
 *   +0x01d4 -> line 3197
 *   +0x01e0 -> line 3200
 *   +0x01e4 -> line 3201
 *   +0x01e8 -> line 3202
 *   +0x01f0 -> line 3204
 *   +0x01fc -> line 3205
 *   +0x0200 -> line 3206
 *   +0x0204 -> line 3204
 *   +0x0210 -> line 3207
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void PS2glInternalDrawSpriteArray(int count)
{
    int iSizeBlock;
    float sy;
    float sx;
    unsigned char bFirst;
    unsigned int* pMyGifTag;
    float (*pV)[4];
    int I;
    _sceDmaTag* aDmaTagBegin;
    _sceDmaTag* aDmaTag;
    /* TODO: decompile from asm/... */
}

/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_Array.c lines 2942–3065 */
/* addr: 0x0013c400  size: 1188 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 2942
 *   +0x0020 -> line 2945
 *   +0x0028 -> line 2946
 *   +0x0030 -> line 2947
 *   +0x0038 -> line 2948
 *   +0x0040 -> line 2949
 *   +0x0048 -> line 2950
 *   +0x0050 -> line 2952
 *   +0x0078 -> line 2955
 *   +0x0080 -> line 2956
 *   +0x0084 -> line 2957
 *   +0x0098 -> line 2958
 *   +0x00a0 -> line 2960
 *   +0x00a8 -> line 2961
 *   +0x00ac -> line 2962
 *   +0x00c0 -> line 2963
 *   +0x00c8 -> line 2965
 *   +0x00d0 -> line 2966
 *   +0x00d8 -> line 2967
 *   +0x00dc -> line 2968
 *   +0x00ec -> line 2969
 *   +0x0100 -> line 2970
 *   +0x0108 -> line 2972
 *   +0x0110 -> line 2973
 *   +0x0118 -> line 2974
 *   +0x011c -> line 2975
 *   +0x012c -> line 2976
 *   +0x0140 -> line 2977
 *   +0x0148 -> line 2979
 *   +0x0150 -> line 2980
 *   +0x0158 -> line 2981
 *   +0x015c -> line 2982
 *   +0x016c -> line 2983
 *   +0x0180 -> line 2984
 *   +0x0188 -> line 2986
 *   +0x0190 -> line 2987
 *   +0x0198 -> line 2988
 *   +0x019c -> line 2989
 *   +0x01a8 -> line 2990
 *   +0x01bc -> line 2991
 *   +0x01c4 -> line 2993
 *   +0x01cc -> line 2994
 *   +0x01d4 -> line 2995
 *   +0x01dc -> line 2996
 *   +0x01e0 -> line 2997
 *   +0x01f0 -> line 2998
 *   +0x0200 -> line 2999
 *   +0x0214 -> line 3000
 *   +0x021c -> line 3002
 *   +0x0224 -> line 3003
 *   +0x022c -> line 3004
 *   +0x0230 -> line 3005
 *   +0x0240 -> line 3006
 *   +0x0254 -> line 3007
 *   +0x025c -> line 3009
 *   +0x0264 -> line 3010
 *   +0x026c -> line 3011
 *   +0x0270 -> line 3012
 *   +0x0280 -> line 3013
 *   +0x0294 -> line 3014
 *   +0x029c -> line 3016
 *   +0x02a4 -> line 3017
 *   +0x02ac -> line 3018
 *   +0x02b4 -> line 3019
 *   +0x02b8 -> line 3020
 *   +0x02c8 -> line 3021
 *   +0x02dc -> line 3022
 *   +0x02f0 -> line 3023
 *   +0x02f8 -> line 3025
 *   +0x0300 -> line 3026
 *   +0x0308 -> line 3027
 *   +0x0310 -> line 3028
 *   +0x0314 -> line 3029
 *   +0x0324 -> line 3030
 *   +0x0338 -> line 3031
 *   +0x034c -> line 3032
 *   +0x0354 -> line 3034
 *   +0x035c -> line 3035
 *   +0x0364 -> line 3036
 *   +0x036c -> line 3037
 *   +0x0370 -> line 3038
 *   +0x0380 -> line 3039
 *   +0x0390 -> line 3040
 *   +0x03a4 -> line 3041
 *   +0x03ac -> line 3043
 *   +0x03b4 -> line 3044
 *   +0x03bc -> line 3045
 *   +0x03c4 -> line 3046
 *   +0x03cc -> line 3047
 *   +0x03d0 -> line 3048
 *   +0x03e0 -> line 3049
 *   +0x03f4 -> line 3050
 *   +0x0404 -> line 3051
 *   +0x0418 -> line 3052
 *   +0x0420 -> line 3054
 *   +0x0428 -> line 3055
 *   +0x0430 -> line 3056
 *   +0x0438 -> line 3057
 *   +0x0440 -> line 3058
 *   +0x0444 -> line 3059
 *   +0x0454 -> line 3060
 *   +0x0468 -> line 3061
 *   +0x0478 -> line 3062
 *   +0x048c -> line 3065
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void impPS2glInterleavedArrays(unsigned int format, int stride, void* pointer)
{
    /* TODO: decompile from asm/... */
}

/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_Array.c lines 2917–2938 */
/* addr: 0x0013c8b0  size: 268 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 2917
 *   +0x0020 -> line 2921
 *   +0x0028 -> line 2922
 *   +0x0054 -> line 2925
 *   +0x005c -> line 2926
 *   +0x007c -> line 2927
 *   +0x0084 -> line 2929
 *   +0x0090 -> line 2930
 *   +0x00b0 -> line 2931
 *   +0x00b8 -> line 2933
 *   +0x00c4 -> line 2934
 *   +0x00e4 -> line 2936
 *   +0x00e8 -> line 2937
 *   +0x00f0 -> line 2938
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void impPS2glDrawElements(unsigned int mode, int count, unsigned int type, void* indices)
{
    int i;
    /* TODO: decompile from asm/... */
}

/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_Array.c lines 2112–2914 */
/* addr: 0x0013c9c0  size: 4380 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 2112
 *   +0x0004 -> line 2130
 *   +0x0008 -> line 2112
 *   +0x0030 -> line 2130
 *   +0x0040 -> line 2132
 *   +0x0048 -> line 2133
 *   +0x0050 -> line 2136
 *   +0x0054 -> line 2138
 *   +0x0058 -> line 2136
 *   +0x005c -> line 2139
 *   +0x0060 -> line 2138
 *   +0x0064 -> line 2139
 *   +0x0068 -> line 2138
 *   +0x006c -> line 2139
 *   +0x0070 -> line 2138
 *   +0x0074 -> line 2139
 *   +0x0080 -> line 2144
 *   +0x0084 -> line 2145
 *   +0x0088 -> line 2136
 *   +0x008c -> line 2145
 *   +0x0090 -> line 2138
 *   +0x0094 -> line 2144
 *   +0x0098 -> line 2138
 *   +0x009c -> line 2144
 *   +0x00a0 -> line 2138
 *   +0x00a4 -> line 2145
 *   +0x00a8 -> line 2138
 *   +0x00ac -> line 2144
 *   +0x00b0 -> line 2146
 *   +0x00c0 -> line 2148
 *   +0x00c8 -> line 2149
 *   +0x00d8 -> line 2151
 *   +0x00dc -> line 2152
 *   +0x00e0 -> line 2151
 *   +0x00e4 -> line 2153
 *   +0x00f0 -> line 2154
 *   +0x00fc -> line 2155
 *   +0x0108 -> line 2157
 *   +0x015c -> line 2161
 *   +0x0164 -> line 2164
 *   +0x016c -> line 2167
 *   +0x0174 -> line 2170
 *   +0x017c -> line 2173
 *   +0x0180 -> line 2179
 *   +0x0188 -> line 2181
 *   +0x01a4 -> line 2183
 *   +0x01b4 -> line 2187
 *   +0x01b8 -> line 2185
 *   +0x01bc -> line 2187
 *   +0x01c4 -> line 2188
 *   +0x01d0 -> line 2189
 *   +0x01dc -> line 2191
 *   +0x0228 -> line 2195
 *   +0x0230 -> line 2198
 *   +0x0238 -> line 2201
 *   +0x0240 -> line 2204
 *   +0x0248 -> line 2207
 *   +0x024c -> line 2213
 *   +0x0258 -> line 2215
 *   +0x0274 -> line 2217
 *   +0x0284 -> line 2220
 *   +0x0288 -> line 2221
 *   +0x028c -> line 2220
 *   +0x0290 -> line 2222
 *   +0x029c -> line 2223
 *   +0x02a8 -> line 2230
 *   +0x02b4 -> line 2232
 *   +0x0308 -> line 2236
 *   +0x0310 -> line 2239
 *   +0x0318 -> line 2242
 *   +0x0320 -> line 2245
 *   +0x0328 -> line 2248
 *   +0x032c -> line 2254
 *   +0x0334 -> line 2257
 *   +0x034c -> line 2258
 *   +0x035c -> line 2260
 *   +0x0360 -> line 2261
 *   +0x0364 -> line 2260
 *   +0x0368 -> line 2261
 *   +0x0370 -> line 2269
 *   +0x0380 -> line 2272
 *   +0x0384 -> line 2273
 *   +0x0388 -> line 2272
 *   +0x038c -> line 2274
 *   +0x0398 -> line 2275
 *   +0x03a4 -> line 2282
 *   +0x03b0 -> line 2284
 *   +0x0404 -> line 2288
 *   +0x040c -> line 2291
 *   +0x0414 -> line 2294
 *   +0x041c -> line 2297
 *   +0x0424 -> line 2300
 *   +0x0428 -> line 2306
 *   +0x0430 -> line 2311
 *   +0x0434 -> line 2310
 *   +0x0438 -> line 2311
 *   +0x043c -> line 2310
 *   +0x0450 -> line 2311
 *   +0x0458 -> line 2313
 *   +0x045c -> line 2314
 *   +0x0460 -> line 2313
 *   +0x0464 -> line 2314
 *   +0x046c -> line 2323
 *   +0x0478 -> line 2325
 *   +0x0484 -> line 2327
 *   +0x04bc -> line 2329
 *   +0x04c0 -> line 2330
 *   +0x04c8 -> line 2331
 *   +0x04d0 -> line 2333
 *   +0x04d8 -> line 2334
 *   +0x04e0 -> line 2336
 *   +0x04e8 -> line 2337
 *   +0x04f0 -> line 2339
 *   +0x04f8 -> line 2342
 *   +0x0504 -> line 2343
 *   +0x0508 -> line 2345
 *   +0x0514 -> line 2347
 *   +0x0544 -> line 2349
 *   +0x0548 -> line 2350
 *   +0x056c -> line 2352
 *   +0x0570 -> line 2353
 *   +0x0578 -> line 2354
 *   +0x0580 -> line 2356
 *   +0x0588 -> line 2359
 *   +0x0590 -> line 2361
 *   +0x05b4 -> line 2363
 *   +0x05b8 -> line 2364
 *   +0x05c0 -> line 2365
 *   +0x05c8 -> line 2367
 *   +0x05d0 -> line 2370
 *   +0x05d8 -> line 2372
 *   +0x05fc -> line 2374
 *   +0x0600 -> line 2375
 *   +0x0608 -> line 2376
 *   +0x0610 -> line 2378
 *   +0x0618 -> line 2381
 *   +0x0620 -> line 2383
 *   +0x0644 -> line 2385
 *   +0x0648 -> line 2386
 *   +0x0650 -> line 2387
 *   +0x0658 -> line 2389
 *   +0x0660 -> line 2392
 *   +0x0668 -> line 2394
 *   +0x068c -> line 2396
 *   +0x0690 -> line 2397
 *   +0x0698 -> line 2398
 *   +0x06a0 -> line 2400
 *   +0x06a8 -> line 2403
 *   +0x06b0 -> line 2405
 *   +0x06d4 -> line 2407
 *   +0x06d8 -> line 2408
 *   +0x06e0 -> line 2409
 *   +0x06e8 -> line 2411
 *   +0x06f0 -> line 2414
 *   +0x06f8 -> line 2416
 *   +0x071c -> line 2418
 *   +0x0720 -> line 2419
 *   +0x0728 -> line 2420
 *   +0x0730 -> line 2422
 *   +0x0740 -> line 2423
 *   +0x0748 -> line 2426
 *   +0x0750 -> line 2428
 *   +0x0774 -> line 2430
 *   +0x0778 -> line 2431
 *   +0x0780 -> line 2432
 *   +0x0788 -> line 2434
 *   +0x0790 -> line 2439
 *   +0x079c -> line 2440
 *   +0x07a0 -> line 2541
 *   +0x07ac -> line 2543
 *   +0x07dc -> line 2545
 *   +0x07e0 -> line 2546
 *   +0x0804 -> line 2548
 *   +0x0808 -> line 2549
 *   +0x0814 -> line 2550
 *   +0x081c -> line 2551
 *   +0x0820 -> line 2552
 *   +0x082c -> line 2555
 *   +0x0834 -> line 2556
 *   +0x0838 -> line 2557
 *   +0x085c -> line 2559
 *   +0x0860 -> line 2560
 *   +0x086c -> line 2561
 *   +0x0874 -> line 2562
 *   +0x0878 -> line 2563
 *   +0x0884 -> line 2566
 *   +0x088c -> line 2567
 *   +0x0890 -> line 2568
 *   +0x08b4 -> line 2570
 *   +0x08b8 -> line 2571
 *   +0x08c4 -> line 2572
 *   +0x08cc -> line 2573
 *   +0x08d0 -> line 2574
 *   +0x08dc -> line 2577
 *   +0x08e4 -> line 2578
 *   +0x08e8 -> line 2579
 *   +0x090c -> line 2581
 *   +0x0910 -> line 2582
 *   +0x091c -> line 2583
 *   +0x0924 -> line 2584
 *   +0x0928 -> line 2585
 *   +0x0934 -> line 2588
 *   +0x093c -> line 2589
 *   +0x0940 -> line 2590
 *   +0x0964 -> line 2592
 *   +0x0968 -> line 2593
 *   +0x0974 -> line 2594
 *   +0x097c -> line 2595
 *   +0x0980 -> line 2596
 *   +0x098c -> line 2599
 *   +0x0994 -> line 2600
 *   +0x0998 -> line 2601
 *   +0x09bc -> line 2603
 *   +0x09c0 -> line 2604
 *   +0x09cc -> line 2605
 *   +0x09d4 -> line 2606
 *   +0x09d8 -> line 2607
 *   +0x09e4 -> line 2610
 *   +0x09ec -> line 2611
 *   +0x09f0 -> line 2612
 *   +0x0a14 -> line 2614
 *   +0x0a18 -> line 2615
 *   +0x0a24 -> line 2616
 *   +0x0a2c -> line 2617
 *   +0x0a30 -> line 2618
 *   +0x0a40 -> line 2619
 *   +0x0a4c -> line 2622
 *   +0x0a54 -> line 2623
 *   +0x0a58 -> line 2624
 *   +0x0a7c -> line 2626
 *   +0x0a80 -> line 2627
 *   +0x0a8c -> line 2628
 *   +0x0a94 -> line 2629
 *   +0x0a98 -> line 2630
 *   +0x0aa4 -> line 2634
 *   +0x0aa8 -> line 2635
 *   +0x0ab4 -> line 2636
 *   +0x0ab8 -> line 2644
 *   +0x0ac4 -> line 2646
 *   +0x0afc -> line 2648
 *   +0x0b00 -> line 2649
 *   +0x0b30 -> line 2652
 *   +0x0b38 -> line 2653
 *   +0x0b40 -> line 2655
 *   +0x0b48 -> line 2656
 *   +0x0b50 -> line 2658
 *   +0x0b58 -> line 2661
 *   +0x0b60 -> line 2663
 *   +0x0b90 -> line 2666
 *   +0x0b98 -> line 2667
 *   +0x0ba0 -> line 2669
 *   +0x0ba8 -> line 2670
 *   +0x0bb0 -> line 2672
 *   +0x0bb8 -> line 2675
 *   +0x0bc0 -> line 2677
 *   +0x0bf0 -> line 2680
 *   +0x0bf8 -> line 2681
 *   +0x0c00 -> line 2683
 *   +0x0c08 -> line 2684
 *   +0x0c10 -> line 2686
 *   +0x0c20 -> line 2687
 *   +0x0c28 -> line 2690
 *   +0x0c30 -> line 2692
 *   +0x0c60 -> line 2695
 *   +0x0c68 -> line 2696
 *   +0x0c70 -> line 2698
 *   +0x0c78 -> line 2699
 *   +0x0c80 -> line 2701
 *   +0x0c88 -> line 2706
 *   +0x0c94 -> line 2707
 *   +0x0c98 -> line 2778
 *   +0x0ca4 -> line 2780
 *   +0x0cdc -> line 2782
 *   +0x0ce0 -> line 2783
 *   +0x0d10 -> line 2786
 *   +0x0d1c -> line 2787
 *   +0x0d24 -> line 2788
 *   +0x0d28 -> line 2789
 *   +0x0d34 -> line 2790
 *   +0x0d3c -> line 2791
 *   +0x0d40 -> line 2792
 *   +0x0d4c -> line 2795
 *   +0x0d54 -> line 2796
 *   +0x0d58 -> line 2797
 *   +0x0d88 -> line 2800
 *   +0x0d94 -> line 2801
 *   +0x0d9c -> line 2802
 *   +0x0da0 -> line 2803
 *   +0x0dac -> line 2804
 *   +0x0db4 -> line 2805
 *   +0x0db8 -> line 2806
 *   +0x0dc4 -> line 2809
 *   +0x0dcc -> line 2810
 *   +0x0dd0 -> line 2811
 *   +0x0e00 -> line 2814
 *   +0x0e0c -> line 2815
 *   +0x0e14 -> line 2816
 *   +0x0e18 -> line 2817
 *   +0x0e24 -> line 2818
 *   +0x0e2c -> line 2819
 *   +0x0e30 -> line 2820
 *   +0x0e40 -> line 2821
 *   +0x0e4c -> line 2824
 *   +0x0e54 -> line 2825
 *   +0x0e58 -> line 2826
 *   +0x0e88 -> line 2829
 *   +0x0e94 -> line 2830
 *   +0x0e9c -> line 2831
 *   +0x0ea0 -> line 2832
 *   +0x0eac -> line 2833
 *   +0x0eb4 -> line 2834
 *   +0x0eb8 -> line 2835
 *   +0x0ec4 -> line 2839
 *   +0x0ec8 -> line 2840
 *   +0x0ed4 -> line 2841
 *   +0x0ed8 -> line 2848
 *   +0x0ee4 -> line 2850
 *   +0x0f1c -> line 2852
 *   +0x0f20 -> line 2853
 *   +0x0f50 -> line 2856
 *   +0x0f58 -> line 2857
 *   +0x0f60 -> line 2859
 *   +0x0f68 -> line 2860
 *   +0x0f70 -> line 2862
 *   +0x0f78 -> line 2865
 *   +0x0f80 -> line 2867
 *   +0x0fb0 -> line 2870
 *   +0x0fb8 -> line 2871
 *   +0x0fc0 -> line 2873
 *   +0x0fc8 -> line 2874
 *   +0x0fd0 -> line 2876
 *   +0x0fd8 -> line 2879
 *   +0x0fe0 -> line 2881
 *   +0x1010 -> line 2884
 *   +0x1018 -> line 2885
 *   +0x1020 -> line 2887
 *   +0x1028 -> line 2888
 *   +0x1030 -> line 2890
 *   +0x1040 -> line 2891
 *   +0x1048 -> line 2894
 *   +0x1050 -> line 2896
 *   +0x1080 -> line 2899
 *   +0x1088 -> line 2900
 *   +0x1090 -> line 2902
 *   +0x1098 -> line 2903
 *   +0x10a0 -> line 2905
 *   +0x10a8 -> line 2910
 *   +0x10b4 -> line 2911
 *   +0x10b8 -> line 2912
 *   +0x10e4 -> line 2913
 *   +0x10ec -> line 2914
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void impPS2glDrawArrays(unsigned int mode, int first, int count)
{
    short iTexType;
    short iColorType;
    short iNormalType;
    short iVertexType;
    short iTexSize;
    short iColorSize;
    short iVertexSize;
    short iTexStride;
    short iColorStride;
    short iNormalStride;
    short iVertexStride;
    unsigned char* pNormal;
    unsigned char* pVertex;
    short bNormal;
    short bVertex;
    unsigned int uFlags;
    float vTemp[4];
    int i;
    /* TODO: decompile from asm/... */
}

/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_Array.c lines 1158–2109 */
/* addr: 0x0013dae0  size: 6008 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1158
 *   +0x0004 -> line 1175
 *   +0x0008 -> line 1158
 *   +0x002c -> line 1180
 *   +0x0030 -> line 1158
 *   +0x0034 -> line 1175
 *   +0x0038 -> line 1158
 *   +0x003c -> line 1161
 *   +0x0040 -> line 1175
 *   +0x0044 -> line 1184
 *   +0x0054 -> line 1186
 *   +0x0060 -> line 1187
 *   +0x0064 -> line 1190
 *   +0x0068 -> line 1186
 *   +0x006c -> line 1190
 *   +0x0070 -> line 1187
 *   +0x0074 -> line 1188
 *   +0x0078 -> line 1189
 *   +0x007c -> line 1190
 *   +0x0088 -> line 1191
 *   +0x0090 -> line 1193
 *   +0x0098 -> line 1194
 *   +0x00a4 -> line 1195
 *   +0x00ac -> line 1197
 *   +0x00b4 -> line 1198
 *   +0x00c0 -> line 1199
 *   +0x00c8 -> line 1201
 *   +0x00d0 -> line 1203
 *   +0x00dc -> line 1204
 *   +0x00e4 -> line 1206
 *   +0x00ec -> line 1207
 *   +0x00f8 -> line 1208
 *   +0x0100 -> line 1210
 *   +0x0108 -> line 1211
 *   +0x011c -> line 1213
 *   +0x0128 -> line 1214
 *   +0x0130 -> line 1215
 *   +0x0138 -> line 1219
 *   +0x013c -> line 1218
 *   +0x0140 -> line 1222
 *   +0x0148 -> line 1225
 *   +0x0154 -> line 1226
 *   +0x015c -> line 1227
 *   +0x0160 -> line 1226
 *   +0x0164 -> line 1227
 *   +0x0174 -> line 1228
 *   +0x017c -> line 1230
 *   +0x0184 -> line 1233
 *   +0x0188 -> line 1234
 *   +0x018c -> line 1233
 *   +0x0190 -> line 1234
 *   +0x0198 -> line 1235
 *   +0x01a0 -> line 1237
 *   +0x01a8 -> line 1238
 *   +0x01b4 -> line 1239
 *   +0x01bc -> line 1241
 *   +0x01c4 -> line 1242
 *   +0x01c8 -> line 1243
 *   +0x01cc -> line 1242
 *   +0x01d4 -> line 1243
 *   +0x01dc -> line 1244
 *   +0x01e4 -> line 1246
 *   +0x01ec -> line 1249
 *   +0x01f0 -> line 1247
 *   +0x01f8 -> line 1248
 *   +0x01fc -> line 1247
 *   +0x0200 -> line 1248
 *   +0x0204 -> line 1247
 *   +0x0208 -> line 1248
 *   +0x020c -> line 1249
 *   +0x0214 -> line 1250
 *   +0x021c -> line 1252
 *   +0x0224 -> line 1254
 *   +0x0234 -> line 1255
 *   +0x0248 -> line 1270
 *   +0x0290 -> line 1273
 *   +0x0294 -> line 1275
 *   +0x0298 -> line 1273
 *   +0x029c -> line 1276
 *   +0x02a4 -> line 1279
 *   +0x02b8 -> line 1281
 *   +0x02c4 -> line 1282
 *   +0x02c8 -> line 1283
 *   +0x02d0 -> line 1286
 *   +0x02e0 -> line 1289
 *   +0x02e4 -> line 1290
 *   +0x02ec -> line 1293
 *   +0x02f0 -> line 1295
 *   +0x02f4 -> line 1293
 *   +0x02f8 -> line 1296
 *   +0x02fc -> line 1295
 *   +0x0300 -> line 1293
 *   +0x0304 -> line 1297
 *   +0x030c -> line 1299
 *   +0x0310 -> line 1301
 *   +0x0314 -> line 1299
 *   +0x031c -> line 1305
 *   +0x032c -> line 1307
 *   +0x0338 -> line 1308
 *   +0x0354 -> line 1309
 *   +0x0368 -> line 1310
 *   +0x0374 -> line 1313
 *   +0x037c -> line 1315
 *   +0x0380 -> line 1317
 *   +0x038c -> line 1319
 *   +0x03a0 -> line 1321
 *   +0x03b0 -> line 1322
 *   +0x03b8 -> line 1323
 *   +0x03c0 -> line 1326
 *   +0x03cc -> line 1327
 *   +0x03d4 -> line 1329
 *   +0x03fc -> line 1330
 *   +0x0404 -> line 1331
 *   +0x0408 -> line 1333
 *   +0x040c -> line 1331
 *   +0x0410 -> line 1333
 *   +0x0430 -> line 1334
 *   +0x0438 -> line 1336
 *   +0x043c -> line 1337
 *   +0x0444 -> line 1339
 *   +0x0448 -> line 1344
 *   +0x0480 -> line 1346
 *   +0x0488 -> line 1349
 *   +0x049c -> line 1351
 *   +0x04a4 -> line 1356
 *   +0x04b0 -> line 1357
 *   +0x04d0 -> line 1359
 *   +0x04e0 -> line 1360
 *   +0x0500 -> line 1364
 *   +0x0508 -> line 1366
 *   +0x050c -> line 1364
 *   +0x0510 -> line 1365
 *   +0x0514 -> line 1368
 *   +0x0518 -> line 1366
 *   +0x051c -> line 1368
 *   +0x0520 -> line 1367
 *   +0x0524 -> line 1369
 *   +0x0528 -> line 1368
 *   +0x052c -> line 1369
 *   +0x0534 -> line 1370
 *   +0x0538 -> line 1372
 *   +0x0544 -> line 1374
 *   +0x0548 -> line 1379
 *   +0x054c -> line 1375
 *   +0x0550 -> line 1381
 *   +0x0554 -> line 1376
 *   +0x0558 -> line 1377
 *   +0x055c -> line 1378
 *   +0x0560 -> line 1379
 *   +0x0564 -> line 1380
 *   +0x0568 -> line 1381
 *   +0x0578 -> line 1383
 *   +0x057c -> line 1384
 *   +0x0584 -> line 1383
 *   +0x058c -> line 1385
 *   +0x0594 -> line 1386
 *   +0x05a0 -> line 1387
 *   +0x05b0 -> line 1389
 *   +0x05b8 -> line 1390
 *   +0x05c4 -> line 1392
 *   +0x05c8 -> line 1393
 *   +0x05d8 -> line 1392
 *   +0x05e0 -> line 1394
 *   +0x05e8 -> line 1395
 *   +0x05f8 -> line 1396
 *   +0x0600 -> line 1398
 *   +0x0608 -> line 1400
 *   +0x0610 -> line 1402
 *   +0x061c -> line 1404
 *   +0x0620 -> line 1406
 *   +0x0624 -> line 1405
 *   +0x0628 -> line 1408
 *   +0x062c -> line 1406
 *   +0x0630 -> line 1411
 *   +0x0634 -> line 1408
 *   +0x0638 -> line 1407
 *   +0x063c -> line 1409
 *   +0x0640 -> line 1408
 *   +0x0644 -> line 1409
 *   +0x064c -> line 1410
 *   +0x0650 -> line 1411
 *   +0x0660 -> line 1413
 *   +0x066c -> line 1415
 *   +0x0670 -> line 1416
 *   +0x0678 -> line 1415
 *   +0x0680 -> line 1417
 *   +0x0688 -> line 1418
 *   +0x0698 -> line 1419
 *   +0x06a8 -> line 1421
 *   +0x06b0 -> line 1424
 *   +0x06b4 -> line 1425
 *   +0x06bc -> line 1424
 *   +0x06c4 -> line 1426
 *   +0x06cc -> line 1427
 *   +0x06d8 -> line 1428
 *   +0x06e0 -> line 1430
 *   +0x06e8 -> line 1431
 *   +0x06f4 -> line 1433
 *   +0x06f8 -> line 1434
 *   +0x0700 -> line 1433
 *   +0x0708 -> line 1435
 *   +0x0710 -> line 1436
 *   +0x0720 -> line 1437
 *   +0x0728 -> line 1439
 *   +0x0730 -> line 1441
 *   +0x0738 -> line 1443
 *   +0x0744 -> line 1445
 *   +0x0748 -> line 1447
 *   +0x074c -> line 1446
 *   +0x0750 -> line 1449
 *   +0x0754 -> line 1447
 *   +0x0758 -> line 1452
 *   +0x075c -> line 1449
 *   +0x0760 -> line 1448
 *   +0x0768 -> line 1450
 *   +0x076c -> line 1449
 *   +0x0770 -> line 1450
 *   +0x0778 -> line 1451
 *   +0x077c -> line 1452
 *   +0x078c -> line 1454
 *   +0x0790 -> line 1456
 *   +0x0798 -> line 1454
 *   +0x07a0 -> line 1455
 *   +0x07ac -> line 1457
 *   +0x07b4 -> line 1458
 *   +0x07c0 -> line 1459
 *   +0x07d8 -> line 1462
 *   +0x07e0 -> line 1464
 *   +0x07e8 -> line 1467
 *   +0x07f0 -> line 1470
 *   +0x07f4 -> line 1475
 *   +0x07f8 -> line 1473
 *   +0x07fc -> line 1475
 *   +0x0800 -> line 1472
 *   +0x0804 -> line 1476
 *   +0x0808 -> line 1472
 *   +0x080c -> line 1473
 *   +0x0814 -> line 1474
 *   +0x0818 -> line 1476
 *   +0x081c -> line 1467
 *   +0x0820 -> line 1470
 *   +0x0824 -> line 1467
 *   +0x0828 -> line 1470
 *   +0x083c -> line 1472
 *   +0x084c -> line 1473
 *   +0x085c -> line 1474
 *   +0x0860 -> line 1475
 *   +0x0864 -> line 1476
 *   +0x0868 -> line 1478
 *   +0x0874 -> line 1480
 *   +0x0878 -> line 1483
 *   +0x087c -> line 1480
 *   +0x0880 -> line 1483
 *   +0x0888 -> line 1485
 *   +0x088c -> line 1488
 *   +0x0890 -> line 1483
 *   +0x0894 -> line 1484
 *   +0x0898 -> line 1485
 *   +0x089c -> line 1488
 *   +0x08ac -> line 1489
 *   +0x08d0 -> line 1492
 *   +0x08e8 -> line 1493
 *   +0x08ec -> line 1492
 *   +0x08f4 -> line 1493
 *   +0x0904 -> line 1494
 *   +0x0908 -> line 1495
 *   +0x090c -> line 1497
 *   +0x0918 -> line 1500
 *   +0x0920 -> line 1501
 *   +0x0924 -> line 1502
 *   +0x0928 -> line 1503
 *   +0x0930 -> line 1508
 *   +0x0934 -> line 1503
 *   +0x093c -> line 1508
 *   +0x094c -> line 1510
 *   +0x0954 -> line 1512
 *   +0x0958 -> line 1515
 *   +0x095c -> line 1510
 *   +0x0960 -> line 1511
 *   +0x0964 -> line 1514
 *   +0x0968 -> line 1512
 *   +0x096c -> line 1514
 *   +0x0970 -> line 1513
 *   +0x0974 -> line 1515
 *   +0x0978 -> line 1514
 *   +0x097c -> line 1515
 *   +0x0980 -> line 1516
 *   +0x0984 -> line 1527
 *   +0x0990 -> line 1529
 *   +0x0994 -> line 1534
 *   +0x0998 -> line 1530
 *   +0x099c -> line 1536
 *   +0x09a0 -> line 1531
 *   +0x09a4 -> line 1532
 *   +0x09ac -> line 1533
 *   +0x09b0 -> line 1534
 *   +0x09b4 -> line 1535
 *   +0x09b8 -> line 1536
 *   +0x09c8 -> line 1538
 *   +0x09cc -> line 1539
 *   +0x09d4 -> line 1538
 *   +0x09dc -> line 1540
 *   +0x09e4 -> line 1541
 *   +0x09f0 -> line 1542
 *   +0x0a00 -> line 1544
 *   +0x0a08 -> line 1546
 *   +0x0a10 -> line 1548
 *   +0x0a1c -> line 1550
 *   +0x0a20 -> line 1552
 *   +0x0a24 -> line 1551
 *   +0x0a28 -> line 1554
 *   +0x0a2c -> line 1552
 *   +0x0a30 -> line 1554
 *   +0x0a34 -> line 1553
 *   +0x0a3c -> line 1555
 *   +0x0a40 -> line 1554
 *   +0x0a44 -> line 1555
 *   +0x0a4c -> line 1557
 *   +0x0a58 -> line 1559
 *   +0x0a60 -> line 1563
 *   +0x0a68 -> line 1568
 *   +0x0a6c -> line 1569
 *   +0x0a70 -> line 1568
 *   +0x0a74 -> line 1569
 *   +0x0a78 -> line 1564
 *   +0x0a7c -> line 1574
 *   +0x0a80 -> line 1565
 *   +0x0a88 -> line 1566
 *   +0x0a90 -> line 1567
 *   +0x0a94 -> line 1563
 *   +0x0a98 -> line 1570
 *   +0x0a9c -> line 1574
 *   +0x0aa0 -> line 1576
 *   +0x0aa4 -> line 1563
 *   +0x0aa8 -> line 1564
 *   +0x0aac -> line 1565
 *   +0x0abc -> line 1566
 *   +0x0acc -> line 1567
 *   +0x0ad0 -> line 1568
 *   +0x0ad4 -> line 1569
 *   +0x0ad8 -> line 1570
 *   +0x0adc -> line 1574
 *   +0x0ae4 -> line 1577
 *   +0x0ae8 -> line 1583
 *   +0x0aec -> line 1580
 *   +0x0af4 -> line 1581
 *   +0x0af8 -> line 1583
 *   +0x0b00 -> line 1585
 *   +0x0b0c -> line 1586
 *   +0x0b18 -> line 1588
 *   +0x0b24 -> line 1591
 *   +0x0b28 -> line 1592
 *   +0x0b30 -> line 1595
 *   +0x0b34 -> line 1596
 *   +0x0b38 -> line 1598
 *   +0x0b40 -> line 1599
 *   +0x0b48 -> line 1602
 *   +0x0b50 -> line 1607
 *   +0x0b5c -> line 1608
 *   +0x0b80 -> line 1610
 *   +0x0b90 -> line 1611
 *   +0x0bb0 -> line 1615
 *   +0x0bb8 -> line 1617
 *   +0x0bbc -> line 1615
 *   +0x0bc0 -> line 1616
 *   +0x0bc4 -> line 1619
 *   +0x0bc8 -> line 1617
 *   +0x0bcc -> line 1619
 *   +0x0bd0 -> line 1618
 *   +0x0bd4 -> line 1620
 *   +0x0bd8 -> line 1619
 *   +0x0bdc -> line 1620
 *   +0x0be4 -> line 1621
 *   +0x0be8 -> line 1623
 *   +0x0bf4 -> line 1625
 *   +0x0bf8 -> line 1630
 *   +0x0bfc -> line 1626
 *   +0x0c00 -> line 1627
 *   +0x0c04 -> line 1628
 *   +0x0c08 -> line 1629
 *   +0x0c0c -> line 1630
 *   +0x0c10 -> line 1632
 *   +0x0c18 -> line 1634
 *   +0x0c20 -> line 1636
 *   +0x0c2c -> line 1638
 *   +0x0c30 -> line 1640
 *   +0x0c34 -> line 1639
 *   +0x0c38 -> line 1642
 *   +0x0c3c -> line 1640
 *   +0x0c40 -> line 1642
 *   +0x0c44 -> line 1641
 *   +0x0c48 -> line 1643
 *   +0x0c4c -> line 1642
 *   +0x0c50 -> line 1643
 *   +0x0c58 -> line 1645
 *   +0x0c60 -> line 1647
 *   +0x0c68 -> line 1649
 *   +0x0c74 -> line 1651
 *   +0x0c78 -> line 1653
 *   +0x0c7c -> line 1652
 *   +0x0c80 -> line 1655
 *   +0x0c84 -> line 1653
 *   +0x0c88 -> line 1655
 *   +0x0c8c -> line 1654
 *   +0x0c94 -> line 1656
 *   +0x0c98 -> line 1655
 *   +0x0c9c -> line 1656
 *   +0x0ca4 -> line 1658
 *   +0x0cb0 -> line 1660
 *   +0x0cb8 -> line 1663
 *   +0x0cc0 -> line 1666
 *   +0x0cc4 -> line 1671
 *   +0x0cc8 -> line 1669
 *   +0x0ccc -> line 1671
 *   +0x0cd0 -> line 1668
 *   +0x0cd4 -> line 1672
 *   +0x0cd8 -> line 1668
 *   +0x0cdc -> line 1669
 *   +0x0ce4 -> line 1670
 *   +0x0ce8 -> line 1672
 *   +0x0cec -> line 1663
 *   +0x0cf0 -> line 1666
 *   +0x0cf4 -> line 1663
 *   +0x0cf8 -> line 1666
 *   +0x0d0c -> line 1668
 *   +0x0d1c -> line 1669
 *   +0x0d2c -> line 1670
 *   +0x0d30 -> line 1671
 *   +0x0d34 -> line 1672
 *   +0x0d38 -> line 1674
 *   +0x0d44 -> line 1676
 *   +0x0d48 -> line 1679
 *   +0x0d4c -> line 1676
 *   +0x0d50 -> line 1679
 *   +0x0d58 -> line 1681
 *   +0x0d5c -> line 1684
 *   +0x0d60 -> line 1679
 *   +0x0d64 -> line 1680
 *   +0x0d68 -> line 1681
 *   +0x0d6c -> line 1684
 *   +0x0d7c -> line 1685
 *   +0x0da0 -> line 1688
 *   +0x0db8 -> line 1689
 *   +0x0dbc -> line 1688
 *   +0x0dc4 -> line 1689
 *   +0x0dd4 -> line 1690
 *   +0x0dd8 -> line 1691
 *   +0x0ddc -> line 1693
 *   +0x0de8 -> line 1696
 *   +0x0df0 -> line 1697
 *   +0x0df4 -> line 1698
 *   +0x0df8 -> line 1699
 *   +0x0e00 -> line 1704
 *   +0x0e04 -> line 1699
 *   +0x0e0c -> line 1704
 *   +0x0e1c -> line 1706
 *   +0x0e24 -> line 1708
 *   +0x0e28 -> line 1711
 *   +0x0e2c -> line 1706
 *   +0x0e30 -> line 1707
 *   +0x0e34 -> line 1710
 *   +0x0e38 -> line 1708
 *   +0x0e3c -> line 1710
 *   +0x0e40 -> line 1709
 *   +0x0e44 -> line 1711
 *   +0x0e48 -> line 1710
 *   +0x0e4c -> line 1711
 *   +0x0e50 -> line 1712
 *   +0x0e54 -> line 1723
 *   +0x0e60 -> line 1725
 *   +0x0e64 -> line 1730
 *   +0x0e68 -> line 1726
 *   +0x0e6c -> line 1727
 *   +0x0e70 -> line 1728
 *   +0x0e78 -> line 1729
 *   +0x0e7c -> line 1730
 *   +0x0e80 -> line 1732
 *   +0x0e88 -> line 1734
 *   +0x0e90 -> line 1736
 *   +0x0e9c -> line 1738
 *   +0x0ea0 -> line 1740
 *   +0x0ea4 -> line 1739
 *   +0x0ea8 -> line 1742
 *   +0x0eac -> line 1740
 *   +0x0eb0 -> line 1742
 *   +0x0eb4 -> line 1741
 *   +0x0ebc -> line 1743
 *   +0x0ec0 -> line 1742
 *   +0x0ec4 -> line 1743
 *   +0x0ecc -> line 1745
 *   +0x0ed8 -> line 1747
 *   +0x0ee0 -> line 1751
 *   +0x0ee8 -> line 1756
 *   +0x0eec -> line 1757
 *   +0x0ef0 -> line 1756
 *   +0x0ef4 -> line 1757
 *   +0x0ef8 -> line 1752
 *   +0x0efc -> line 1762
 *   +0x0f00 -> line 1753
 *   +0x0f08 -> line 1754
 *   +0x0f10 -> line 1755
 *   +0x0f14 -> line 1751
 *   +0x0f18 -> line 1758
 *   +0x0f1c -> line 1762
 *   +0x0f20 -> line 1764
 *   +0x0f24 -> line 1751
 *   +0x0f28 -> line 1752
 *   +0x0f2c -> line 1753
 *   +0x0f3c -> line 1754
 *   +0x0f4c -> line 1755
 *   +0x0f50 -> line 1756
 *   +0x0f54 -> line 1757
 *   +0x0f58 -> line 1758
 *   +0x0f5c -> line 1762
 *   +0x0f64 -> line 1765
 *   +0x0f68 -> line 1771
 *   +0x0f6c -> line 1768
 *   +0x0f74 -> line 1769
 *   +0x0f78 -> line 1771
 *   +0x0f80 -> line 1773
 *   +0x0f8c -> line 1774
 *   +0x0f98 -> line 1776
 *   +0x0fa4 -> line 1779
 *   +0x0fa8 -> line 1780
 *   +0x0fb0 -> line 1783
 *   +0x0fb4 -> line 1784
 *   +0x0fb8 -> line 1786
 *   +0x0fc0 -> line 1788
 *   +0x0fc8 -> line 1791
 *   +0x0fd0 -> line 1796
 *   +0x0fdc -> line 1797
 *   +0x1000 -> line 1799
 *   +0x1010 -> line 1800
 *   +0x1030 -> line 1804
 *   +0x1038 -> line 1806
 *   +0x103c -> line 1804
 *   +0x1040 -> line 1805
 *   +0x1044 -> line 1808
 *   +0x1048 -> line 1806
 *   +0x104c -> line 1808
 *   +0x1050 -> line 1807
 *   +0x1054 -> line 1809
 *   +0x1058 -> line 1808
 *   +0x105c -> line 1809
 *   +0x1064 -> line 1810
 *   +0x1068 -> line 1812
 *   +0x1074 -> line 1814
 *   +0x1078 -> line 1819
 *   +0x107c -> line 1815
 *   +0x1080 -> line 1816
 *   +0x1084 -> line 1817
 *   +0x1088 -> line 1818
 *   +0x108c -> line 1819
 *   +0x1090 -> line 1821
 *   +0x1098 -> line 1823
 *   +0x10a0 -> line 1825
 *   +0x10ac -> line 1827
 *   +0x10b0 -> line 1829
 *   +0x10b4 -> line 1828
 *   +0x10b8 -> line 1831
 *   +0x10bc -> line 1829
 *   +0x10c0 -> line 1831
 *   +0x10c4 -> line 1830
 *   +0x10c8 -> line 1832
 *   +0x10cc -> line 1831
 *   +0x10d0 -> line 1832
 *   +0x10d8 -> line 1834
 *   +0x10e0 -> line 1836
 *   +0x10e8 -> line 1838
 *   +0x10f4 -> line 1840
 *   +0x10f8 -> line 1842
 *   +0x10fc -> line 1841
 *   +0x1100 -> line 1844
 *   +0x1104 -> line 1842
 *   +0x1108 -> line 1844
 *   +0x110c -> line 1843
 *   +0x1114 -> line 1845
 *   +0x1118 -> line 1844
 *   +0x111c -> line 1845
 *   +0x1124 -> line 1847
 *   +0x1130 -> line 1849
 *   +0x1138 -> line 1855
 *   +0x113c -> line 1856
 *   +0x1140 -> line 1859
 *   +0x1144 -> line 1856
 *   +0x1148 -> line 1857
 *   +0x1150 -> line 1859
 *   +0x1154 -> line 1860
 *   +0x1158 -> line 1859
 *   +0x115c -> line 1860
 *   +0x1164 -> line 1862
 *   +0x1170 -> line 1864
 *   +0x1174 -> line 1869
 *   +0x1178 -> line 1865
 *   +0x117c -> line 1866
 *   +0x1180 -> line 1867
 *   +0x1188 -> line 1868
 *   +0x118c -> line 1870
 *   +0x1198 -> line 1872
 *   +0x11a0 -> line 1874
 *   +0x11ac -> line 1876
 *   +0x11b0 -> line 1877
 *   +0x11b8 -> line 1878
 *   +0x11c0 -> line 1879
 *   +0x11c4 -> line 1880
 *   +0x11cc -> line 1881
 *   +0x11d4 -> line 1879
 *   +0x11d8 -> line 1880
 *   +0x11dc -> line 1882
 *   +0x11e8 -> line 1884
 *   +0x11f0 -> line 1886
 *   +0x11fc -> line 1888
 *   +0x1200 -> line 1889
 *   +0x1208 -> line 1890
 *   +0x1210 -> line 1891
 *   +0x1214 -> line 1892
 *   +0x121c -> line 1893
 *   +0x1224 -> line 1891
 *   +0x1228 -> line 1892
 *   +0x122c -> line 1894
 *   +0x1238 -> line 1896
 *   +0x1240 -> line 1901
 *   +0x1248 -> line 1904
 *   +0x124c -> line 1909
 *   +0x1250 -> line 1907
 *   +0x1254 -> line 1909
 *   +0x1258 -> line 1906
 *   +0x125c -> line 1910
 *   +0x1260 -> line 1906
 *   +0x1264 -> line 1907
 *   +0x126c -> line 1908
 *   +0x1270 -> line 1910
 *   +0x1274 -> line 1901
 *   +0x1278 -> line 1904
 *   +0x127c -> line 1901
 *   +0x1280 -> line 1904
 *   +0x1294 -> line 1906
 *   +0x12a4 -> line 1907
 *   +0x12b4 -> line 1908
 *   +0x12b8 -> line 1909
 *   +0x12bc -> line 1910
 *   +0x12c0 -> line 1913
 *   +0x12cc -> line 1915
 *   +0x12d0 -> line 1918
 *   +0x12d4 -> line 1915
 *   +0x12d8 -> line 1918
 *   +0x12e0 -> line 1920
 *   +0x12e4 -> line 1923
 *   +0x12e8 -> line 1918
 *   +0x12ec -> line 1919
 *   +0x12f0 -> line 1920
 *   +0x12f4 -> line 1923
 *   +0x1304 -> line 1924
 *   +0x1328 -> line 1927
 *   +0x1340 -> line 1928
 *   +0x1344 -> line 1927
 *   +0x134c -> line 1928
 *   +0x135c -> line 1929
 *   +0x1360 -> line 1930
 *   +0x1364 -> line 1932
 *   +0x1370 -> line 1935
 *   +0x1378 -> line 1936
 *   +0x137c -> line 1937
 *   +0x1380 -> line 1938
 *   +0x1388 -> line 1942
 *   +0x138c -> line 1938
 *   +0x1394 -> line 1942
 *   +0x13a4 -> line 1944
 *   +0x13ac -> line 1946
 *   +0x13b0 -> line 1949
 *   +0x13b4 -> line 1944
 *   +0x13b8 -> line 1945
 *   +0x13bc -> line 1948
 *   +0x13c0 -> line 1946
 *   +0x13c4 -> line 1948
 *   +0x13c8 -> line 1947
 *   +0x13cc -> line 1949
 *   +0x13d0 -> line 1948
 *   +0x13d4 -> line 1949
 *   +0x13d8 -> line 1950
 *   +0x13dc -> line 1960
 *   +0x13e8 -> line 1962
 *   +0x13ec -> line 1967
 *   +0x13f0 -> line 1963
 *   +0x13f4 -> line 1964
 *   +0x13f8 -> line 1965
 *   +0x1400 -> line 1966
 *   +0x1404 -> line 1967
 *   +0x1408 -> line 1969
 *   +0x1410 -> line 1971
 *   +0x1418 -> line 1973
 *   +0x1424 -> line 1975
 *   +0x1428 -> line 1977
 *   +0x142c -> line 1976
 *   +0x1430 -> line 1979
 *   +0x1434 -> line 1977
 *   +0x1438 -> line 1979
 *   +0x143c -> line 1978
 *   +0x1444 -> line 1980
 *   +0x1448 -> line 1979
 *   +0x144c -> line 1980
 *   +0x1454 -> line 1982
 *   +0x1460 -> line 1984
 *   +0x1468 -> line 1990
 *   +0x146c -> line 1991
 *   +0x1470 -> line 1994
 *   +0x1474 -> line 1991
 *   +0x1478 -> line 1992
 *   +0x1480 -> line 1994
 *   +0x1484 -> line 1995
 *   +0x1488 -> line 1994
 *   +0x148c -> line 1995
 *   +0x1494 -> line 2004
 *   +0x14a0 -> line 2006
 *   +0x14a4 -> line 2011
 *   +0x14a8 -> line 2007
 *   +0x14ac -> line 2008
 *   +0x14b0 -> line 2009
 *   +0x14b8 -> line 2010
 *   +0x14bc -> line 2012
 *   +0x14c8 -> line 2014
 *   +0x14d0 -> line 2016
 *   +0x14dc -> line 2018
 *   +0x14e0 -> line 2019
 *   +0x14e8 -> line 2020
 *   +0x14f0 -> line 2021
 *   +0x14f4 -> line 2022
 *   +0x14fc -> line 2023
 *   +0x1504 -> line 2021
 *   +0x1508 -> line 2022
 *   +0x150c -> line 2024
 *   +0x1518 -> line 2026
 *   +0x1520 -> line 2031
 *   +0x1528 -> line 2036
 *   +0x152c -> line 2037
 *   +0x1530 -> line 2036
 *   +0x1534 -> line 2037
 *   +0x1538 -> line 2032
 *   +0x153c -> line 2042
 *   +0x1540 -> line 2033
 *   +0x1548 -> line 2034
 *   +0x1550 -> line 2035
 *   +0x1554 -> line 2031
 *   +0x1558 -> line 2038
 *   +0x155c -> line 2042
 *   +0x1560 -> line 2044
 *   +0x1564 -> line 2031
 *   +0x1568 -> line 2032
 *   +0x156c -> line 2033
 *   +0x157c -> line 2034
 *   +0x158c -> line 2035
 *   +0x1590 -> line 2036
 *   +0x1594 -> line 2037
 *   +0x1598 -> line 2038
 *   +0x159c -> line 2042
 *   +0x15a4 -> line 2045
 *   +0x15a8 -> line 2051
 *   +0x15ac -> line 2048
 *   +0x15b4 -> line 2049
 *   +0x15b8 -> line 2051
 *   +0x15c0 -> line 2053
 *   +0x15cc -> line 2054
 *   +0x15d8 -> line 2057
 *   +0x15e4 -> line 2060
 *   +0x15e8 -> line 2061
 *   +0x15f0 -> line 2064
 *   +0x15f4 -> line 2065
 *   +0x15f8 -> line 2067
 *   +0x1600 -> line 2079
 *   +0x160c -> line 2081
 *   +0x1618 -> line 2082
 *   +0x161c -> line 2081
 *   +0x1624 -> line 2083
 *   +0x162c -> line 2086
 *   +0x1638 -> line 2088
 *   +0x163c -> line 2086
 *   +0x1644 -> line 2087
 *   +0x1648 -> line 2086
 *   +0x164c -> line 2087
 *   +0x1678 -> line 2088
 *   +0x167c -> line 2090
 *   +0x1688 -> line 2094
 *   +0x1694 -> line 2095
 *   +0x16a0 -> line 2096
 *   +0x16b0 -> line 2097
 *   +0x16e0 -> line 2098
 *   +0x16f0 -> line 2100
 *   +0x16fc -> line 2101
 *   +0x1708 -> line 2103
 *   +0x1718 -> line 2104
 *   +0x171c -> line 2103
 *   +0x1720 -> line 2104
 *   +0x1738 -> line 2105
 *   +0x1744 -> line 2108
 *   +0x1748 -> line 2109
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void PS2glInternalDrawArrays(unsigned int mode, int first, int count, int flag, unsigned char bImmediate)
{
    int iSizeBlock;
    unsigned char bPackageBoundingSphere;
    unsigned char bTexture1;
    unsigned char bTexture0;
    unsigned char bColor1;
    unsigned char bColor0;
    unsigned char bNormal;
    unsigned char bUseSPR;
    unsigned char bTriangleFan;
    unsigned char bFirst;
    int iAdd;
    int iTransfer;
    int iOffset;
    anon_1* pGifTag;
    float (*pC_b)[4];
    float (*pT_b)[4];
    float (*pC)[4];
    float (*pT)[4];
    float (*pN)[4];
    float (*pV)[4];
    int I;
    _sceDmaTag* aDmaTagBegin;
    _sceDmaTag* aDmaTag;
    anon_10* d8;
    /* TODO: decompile from asm/... */
}

/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_Array.c lines 1142–1150 */
/* addr: 0x0013f260  size: 56 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1142
 *   +0x0010 -> line 1146
 *   +0x0030 -> line 1150
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void WaitDMAFromSPR(void)
{
    /* TODO: decompile from asm/... */
}

/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_Array.c lines 982–1010 */
/* addr: 0x0013f2a0  size: 180 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 982
 *   +0x0008 -> line 984
 *   +0x001c -> line 985
 *   +0x0020 -> line 987
 *   +0x0034 -> line 988
 *   +0x0038 -> line 991
 *   +0x0068 -> line 995
 *   +0x006c -> line 997
 *   +0x007c -> line 999
 *   +0x0084 -> line 1002
 *   +0x0088 -> line 1003
 *   +0x008c -> line 1004
 *   +0x0090 -> line 1009
 *   +0x00ac -> line 1010
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
int PS2glInternalArraysSize(unsigned int mode, int count)
{
    int iSizePerElement;
    int iCountPerBuf;
    /* TODO: decompile from asm/... */
}

/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_Array.c lines 173–934 */
/* addr: 0x0013f360  size: 3888 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 173
 *   +0x0004 -> line 175
 *   +0x0008 -> line 173
 *   +0x000c -> line 177
 *   +0x0010 -> line 173
 *   +0x0014 -> line 177
 *   +0x0018 -> line 173
 *   +0x001c -> line 178
 *   +0x0020 -> line 173
 *   +0x0024 -> line 178
 *   +0x0028 -> line 173
 *   +0x002c -> line 177
 *   +0x0030 -> line 173
 *   +0x0034 -> line 177
 *   +0x0038 -> line 173
 *   +0x003c -> line 178
 *   +0x0040 -> line 173
 *   +0x0044 -> line 184
 *   +0x0048 -> line 173
 *   +0x004c -> line 184
 *   +0x0050 -> line 175
 *   +0x0054 -> line 177
 *   +0x0058 -> line 178
 *   +0x005c -> line 184
 *   +0x0060 -> line 185
 *   +0x0070 -> line 177
 *   +0x0078 -> line 190
 *   +0x007c -> line 177
 *   +0x0080 -> line 178
 *   +0x008c -> line 190
 *   +0x0094 -> line 193
 *   +0x009c -> line 194
 *   +0x00a4 -> line 195
 *   +0x00ac -> line 196
 *   +0x00b4 -> line 198
 *   +0x0108 -> line 202
 *   +0x0110 -> line 205
 *   +0x0118 -> line 208
 *   +0x0120 -> line 211
 *   +0x0128 -> line 214
 *   +0x012c -> line 220
 *   +0x0138 -> line 222
 *   +0x0150 -> line 224
 *   +0x015c -> line 228
 *   +0x0164 -> line 229
 *   +0x016c -> line 230
 *   +0x0174 -> line 232
 *   +0x01c0 -> line 236
 *   +0x01c8 -> line 239
 *   +0x01d0 -> line 242
 *   +0x01d8 -> line 245
 *   +0x01e0 -> line 248
 *   +0x01e4 -> line 254
 *   +0x01f4 -> line 256
 *   +0x020c -> line 258
 *   +0x0218 -> line 262
 *   +0x021c -> line 261
 *   +0x0220 -> line 262
 *   +0x0224 -> line 261
 *   +0x0228 -> line 263
 *   +0x0230 -> line 264
 *   +0x0238 -> line 271
 *   +0x0240 -> line 273
 *   +0x0294 -> line 277
 *   +0x029c -> line 280
 *   +0x02a4 -> line 283
 *   +0x02ac -> line 286
 *   +0x02b4 -> line 289
 *   +0x02b8 -> line 295
 *   +0x02c4 -> line 298
 *   +0x02d8 -> line 299
 *   +0x02dc -> line 298
 *   +0x02e0 -> line 299
 *   +0x02e8 -> line 302
 *   +0x02ec -> line 301
 *   +0x02f0 -> line 302
 *   +0x02f4 -> line 301
 *   +0x02f8 -> line 302
 *   +0x0300 -> line 310
 *   +0x030c -> line 313
 *   +0x0310 -> line 314
 *   +0x0318 -> line 313
 *   +0x031c -> line 315
 *   +0x0320 -> line 316
 *   +0x0324 -> line 314
 *   +0x0328 -> line 316
 *   +0x032c -> line 315
 *   +0x0330 -> line 314
 *   +0x0334 -> line 316
 *   +0x0338 -> line 314
 *   +0x033c -> line 315
 *   +0x0340 -> line 316
 *   +0x0344 -> line 315
 *   +0x0348 -> line 323
 *   +0x0350 -> line 325
 *   +0x03a4 -> line 329
 *   +0x03ac -> line 332
 *   +0x03b4 -> line 335
 *   +0x03bc -> line 338
 *   +0x03c4 -> line 341
 *   +0x03c8 -> line 347
 *   +0x03d4 -> line 351
 *   +0x03e0 -> line 352
 *   +0x03e4 -> line 351
 *   +0x03f0 -> line 352
 *   +0x03f8 -> line 355
 *   +0x03fc -> line 354
 *   +0x0400 -> line 355
 *   +0x0404 -> line 354
 *   +0x0408 -> line 355
 *   +0x0410 -> line 364
 *   +0x0418 -> line 366
 *   +0x044c -> line 369
 *   +0x0454 -> line 370
 *   +0x045c -> line 372
 *   +0x0464 -> line 373
 *   +0x046c -> line 375
 *   +0x0474 -> line 376
 *   +0x047c -> line 378
 *   +0x0484 -> line 383
 *   +0x0490 -> line 385
 *   +0x04bc -> line 388
 *   +0x04e0 -> line 391
 *   +0x04e8 -> line 392
 *   +0x04f0 -> line 394
 *   +0x04f8 -> line 397
 *   +0x0500 -> line 399
 *   +0x0524 -> line 402
 *   +0x052c -> line 403
 *   +0x0534 -> line 405
 *   +0x053c -> line 408
 *   +0x0544 -> line 410
 *   +0x0568 -> line 413
 *   +0x0570 -> line 414
 *   +0x0578 -> line 416
 *   +0x0580 -> line 419
 *   +0x0588 -> line 421
 *   +0x05ac -> line 424
 *   +0x05b4 -> line 425
 *   +0x05bc -> line 427
 *   +0x05c4 -> line 430
 *   +0x05cc -> line 432
 *   +0x05f0 -> line 435
 *   +0x05f8 -> line 436
 *   +0x0600 -> line 438
 *   +0x0608 -> line 441
 *   +0x0610 -> line 443
 *   +0x0634 -> line 446
 *   +0x063c -> line 447
 *   +0x0644 -> line 449
 *   +0x064c -> line 452
 *   +0x0654 -> line 454
 *   +0x0678 -> line 457
 *   +0x0680 -> line 458
 *   +0x0688 -> line 460
 *   +0x0698 -> line 461
 *   +0x06a0 -> line 464
 *   +0x06a8 -> line 466
 *   +0x06cc -> line 469
 *   +0x06d4 -> line 470
 *   +0x06dc -> line 472
 *   +0x06e4 -> line 478
 *   +0x06f0 -> line 480
 *   +0x071c -> line 483
 *   +0x0740 -> line 486
 *   +0x074c -> line 487
 *   +0x0754 -> line 489
 *   +0x0760 -> line 492
 *   +0x0768 -> line 494
 *   +0x078c -> line 497
 *   +0x0798 -> line 498
 *   +0x07a0 -> line 500
 *   +0x07ac -> line 503
 *   +0x07b4 -> line 505
 *   +0x07d8 -> line 508
 *   +0x07e4 -> line 509
 *   +0x07ec -> line 511
 *   +0x07f8 -> line 514
 *   +0x0800 -> line 516
 *   +0x0824 -> line 519
 *   +0x0830 -> line 520
 *   +0x0838 -> line 522
 *   +0x0844 -> line 525
 *   +0x084c -> line 527
 *   +0x0870 -> line 530
 *   +0x087c -> line 531
 *   +0x0884 -> line 533
 *   +0x0890 -> line 536
 *   +0x0898 -> line 538
 *   +0x08bc -> line 541
 *   +0x08c8 -> line 542
 *   +0x08d0 -> line 544
 *   +0x08dc -> line 547
 *   +0x08e4 -> line 549
 *   +0x0908 -> line 552
 *   +0x0914 -> line 553
 *   +0x091c -> line 555
 *   +0x092c -> line 556
 *   +0x0938 -> line 559
 *   +0x0940 -> line 561
 *   +0x0964 -> line 564
 *   +0x0970 -> line 565
 *   +0x0978 -> line 567
 *   +0x0984 -> line 675
 *   +0x0990 -> line 677
 *   +0x09c4 -> line 680
 *   +0x09f4 -> line 683
 *   +0x09fc -> line 684
 *   +0x0a04 -> line 686
 *   +0x0a0c -> line 687
 *   +0x0a14 -> line 689
 *   +0x0a1c -> line 692
 *   +0x0a24 -> line 694
 *   +0x0a54 -> line 697
 *   +0x0a5c -> line 698
 *   +0x0a64 -> line 700
 *   +0x0a6c -> line 701
 *   +0x0a74 -> line 703
 *   +0x0a7c -> line 706
 *   +0x0a84 -> line 708
 *   +0x0ab4 -> line 711
 *   +0x0abc -> line 712
 *   +0x0ac4 -> line 714
 *   +0x0acc -> line 715
 *   +0x0ad4 -> line 717
 *   +0x0ae4 -> line 718
 *   +0x0aec -> line 721
 *   +0x0af4 -> line 723
 *   +0x0b24 -> line 726
 *   +0x0b2c -> line 727
 *   +0x0b34 -> line 729
 *   +0x0b3c -> line 730
 *   +0x0b44 -> line 732
 *   +0x0b4c -> line 738
 *   +0x0b58 -> line 740
 *   +0x0b8c -> line 743
 *   +0x0bbc -> line 746
 *   +0x0bc8 -> line 747
 *   +0x0bd0 -> line 749
 *   +0x0bdc -> line 750
 *   +0x0be4 -> line 752
 *   +0x0bf0 -> line 755
 *   +0x0bf8 -> line 757
 *   +0x0c28 -> line 760
 *   +0x0c34 -> line 761
 *   +0x0c3c -> line 763
 *   +0x0c48 -> line 764
 *   +0x0c50 -> line 766
 *   +0x0c5c -> line 769
 *   +0x0c64 -> line 771
 *   +0x0c94 -> line 774
 *   +0x0ca0 -> line 775
 *   +0x0ca8 -> line 777
 *   +0x0cb4 -> line 778
 *   +0x0cbc -> line 780
 *   +0x0ccc -> line 781
 *   +0x0cd8 -> line 784
 *   +0x0ce0 -> line 786
 *   +0x0d10 -> line 789
 *   +0x0d1c -> line 790
 *   +0x0d24 -> line 792
 *   +0x0d30 -> line 793
 *   +0x0d38 -> line 795
 *   +0x0d44 -> line 871
 *   +0x0d4c -> line 873
 *   +0x0d80 -> line 876
 *   +0x0db0 -> line 879
 *   +0x0db8 -> line 880
 *   +0x0dc0 -> line 882
 *   +0x0dc8 -> line 883
 *   +0x0dd0 -> line 885
 *   +0x0dd8 -> line 888
 *   +0x0de0 -> line 890
 *   +0x0e10 -> line 893
 *   +0x0e18 -> line 894
 *   +0x0e20 -> line 896
 *   +0x0e28 -> line 897
 *   +0x0e30 -> line 899
 *   +0x0e38 -> line 902
 *   +0x0e40 -> line 904
 *   +0x0e70 -> line 907
 *   +0x0e78 -> line 908
 *   +0x0e80 -> line 910
 *   +0x0e88 -> line 911
 *   +0x0e90 -> line 913
 *   +0x0e9c -> line 914
 *   +0x0ea4 -> line 917
 *   +0x0eac -> line 919
 *   +0x0edc -> line 922
 *   +0x0ee4 -> line 923
 *   +0x0eec -> line 925
 *   +0x0ef4 -> line 926
 *   +0x0efc -> line 928
 *   +0x0f04 -> line 934
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void impPS2glArrayElement(int iIndex)
{
    float vTemp[4];
    short iTexType;
    short iColorType;
    short iNormalType;
    short iVertexType;
    short iTexSize;
    short iColorSize;
    short iVertexSize;
    short iTexStride;
    short iColorStride;
    short iNormalStride;
    short iVertexStride;
    int pTex[2];
    int pColor[2];
    unsigned char* pNormal;
    unsigned char* pVertex;
    short bTex[2];
    short bColor[2];
    short bNormal;
    short bVertex;
    unsigned int uFlags;
    int i;
    /* TODO: decompile from asm/... */
}

/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_Array.c lines 132–170 */
/* addr: 0x00140290  size: 152 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 132
 *   +0x0034 -> line 136
 *   +0x003c -> line 139
 *   +0x0044 -> line 142
 *   +0x0054 -> line 148
 *   +0x005c -> line 151
 *   +0x0064 -> line 155
 *   +0x0074 -> line 161
 *   +0x007c -> line 163
 *   +0x0080 -> line 169
 *   +0x0090 -> line 170
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void impPS2glDisableClientState(unsigned int array)
{
    unsigned int uMask;
    /* TODO: decompile from asm/... */
}

/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_Array.c lines 89–126 */
/* addr: 0x00140330  size: 152 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 89
 *   +0x0034 -> line 93
 *   +0x003c -> line 96
 *   +0x0044 -> line 99
 *   +0x0054 -> line 105
 *   +0x005c -> line 108
 *   +0x0064 -> line 111
 *   +0x0074 -> line 117
 *   +0x007c -> line 119
 *   +0x0080 -> line 125
 *   +0x0090 -> line 126
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void impPS2glEnableClientState(unsigned int array)
{
    unsigned int uMask;
    /* TODO: decompile from asm/... */
}

/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_Array.c lines 79–83 */
/* addr: 0x001403d0  size: 36 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 79
 *   +0x0008 -> line 80
 *   +0x0010 -> line 81
 *   +0x0018 -> line 82
 *   +0x001c -> line 83
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void impPS2glVertexPointer(int size, unsigned int type, int stride, void* pointer)
{
    /* TODO: decompile from asm/... */
}

/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_Array.c lines 64–74 */
/* addr: 0x00140400  size: 116 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 64
 *   +0x000c -> line 65
 *   +0x0010 -> line 66
 *   +0x0014 -> line 67
 *   +0x0018 -> line 64
 *   +0x001c -> line 65
 *   +0x0020 -> line 66
 *   +0x0024 -> line 67
 *   +0x0028 -> line 64
 *   +0x002c -> line 65
 *   +0x0030 -> line 64
 *   +0x0038 -> line 65
 *   +0x0040 -> line 66
 *   +0x0044 -> line 65
 *   +0x004c -> line 66
 *   +0x0054 -> line 67
 *   +0x0058 -> line 66
 *   +0x0060 -> line 67
 *   +0x006c -> line 74
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void impPS2glTexCoordPointer(int size, unsigned int type, int stride, void* pointer)
{
    /* TODO: decompile from asm/... */
}

/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_Array.c lines 54–57 */
/* addr: 0x00140480  size: 28 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 54
 *   +0x0008 -> line 55
 *   +0x0010 -> line 56
 *   +0x0014 -> line 57
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void impPS2glNormalPointer(unsigned int type, int stride, void* pointer)
{
    /* TODO: decompile from asm/... */
}

/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_Array.c lines 46–49 */
/* addr: 0x001404a0  size: 28 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 46
 *   +0x0008 -> line 47
 *   +0x0010 -> line 48
 *   +0x0014 -> line 49
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void impPS2glIndexPointer(unsigned int type, int stride, void* pointer)
{
    /* TODO: decompile from asm/... */
}

/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_Array.c lines 39–41 */
/* addr: 0x001404c0  size: 20 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 39
 *   +0x0008 -> line 40
 *   +0x000c -> line 41
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void impPS2glEdgeFlagPointer(int stride, void* pointer)
{
    /* TODO: decompile from asm/... */
}

/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_Array.c lines 24–34 */
/* addr: 0x001404e0  size: 116 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 24
 *   +0x000c -> line 25
 *   +0x0010 -> line 26
 *   +0x0014 -> line 27
 *   +0x0018 -> line 24
 *   +0x001c -> line 25
 *   +0x0020 -> line 26
 *   +0x0024 -> line 27
 *   +0x0028 -> line 24
 *   +0x002c -> line 25
 *   +0x0030 -> line 24
 *   +0x0038 -> line 25
 *   +0x0040 -> line 26
 *   +0x0044 -> line 25
 *   +0x004c -> line 26
 *   +0x0054 -> line 27
 *   +0x0058 -> line 26
 *   +0x0060 -> line 27
 *   +0x006c -> line 34
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void impPS2glColorPointer(int size, unsigned int type, int stride, void* pointer)
{
    /* TODO: decompile from asm/... */
}
