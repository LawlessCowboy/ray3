/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_DataInput.c */
/* Language: C */
/* Compiler: MW MIPS C Compiler */

#include <stddef.h>

typedef struct { float f[4]; } __attribute__((aligned(16))) quad;

/* Recovered aggregate layouts from MWCC debug type records. */
typedef struct tagGLtexblock tagGLtexblock;
typedef struct _sceDmaTag _sceDmaTag;
typedef struct anon_7 anon_7;
typedef struct tagGLprimbuf tagGLprimbuf;
typedef struct anon_0 anon_0;
typedef struct anon_1 anon_1;
typedef struct anon_2 anon_2;
typedef struct anon_3 anon_3;
typedef struct anon_9 anon_9;
typedef struct anon_16 anon_16;
typedef struct anon_21 anon_21;
typedef struct anon_15 anon_15;
typedef struct tagGsLoadImage tagGsLoadImage;
typedef struct tagGLtexindex tagGLtexindex;
typedef struct tag_GLtexture_set tag_GLtexture_set;
typedef struct anon_4 anon_4;
typedef struct tagListData tagListData;
typedef struct anon_5 anon_5;
typedef struct anon_6 anon_6;
typedef union unFunction unFunction;
typedef struct tagGLlistnode tagGLlistnode;
typedef struct tagGLlistcalls tagGLlistcalls;
typedef struct anon_12 anon_12;
typedef struct anon_31 anon_31;
typedef struct anon_37 anon_37;
typedef struct anon_25 anon_25;
typedef struct anon_32 anon_32;
typedef struct anon_19 anon_19;
typedef struct tagGsSetTex tagGsSetTex;
typedef struct anon_8 anon_8;
typedef struct anon_10 anon_10;
typedef struct anon_11 anon_11;
typedef struct tagListNodeSingle tagListNodeSingle;
typedef struct anon_13 anon_13;
typedef struct anon_14 anon_14;
typedef struct tag_GLlight tag_GLlight;
typedef struct tagPS2glApiTable tagPS2glApiTable;
typedef struct tagListNode tagListNode;
typedef struct anon_17 anon_17;
typedef struct tag_GLtexture_image tag_GLtexture_image;
typedef struct anon_18 anon_18;
typedef struct anon_20 anon_20;
typedef struct anon_22 anon_22;
typedef struct anon_23 anon_23;
typedef struct anon_24 anon_24;
typedef struct tag_GLtexture tag_GLtexture;
typedef struct anon_26 anon_26;
typedef struct tagGLlistpool tagGLlistpool;
typedef union anon_27 anon_27;
typedef struct anon_28 anon_28;
typedef struct anon_29 anon_29;
typedef struct anon_30 anon_30;
typedef struct tagGLtexname tagGLtexname;
typedef struct tag_GLmaterial tag_GLmaterial;
typedef struct tagGLArrayInfo tagGLArrayInfo;
typedef struct tagGLcontext tagGLcontext;
typedef struct anon_33 anon_33;
typedef struct anon_34 anon_34;
typedef struct anon_35 anon_35;
typedef struct anon_36 anon_36;
typedef struct anon_38 anon_38;
typedef struct tagstVIFCode tagstVIFCode;
typedef struct tagsceGsReg tagsceGsReg;
typedef struct tagGLlistdatas tagGLlistdatas;
typedef struct anon_39 anon_39;
typedef struct anon_40 anon_40;
typedef struct tagGScontext tagGScontext;

struct tagGLtexblock {
    unsigned int nTexID : 10; /* bit 0, byte +0x0 */
    int nStart : 11; /* bit 10, byte +0x0 */
    int nLength : 11; /* bit 21, byte +0x0 */
};

struct _sceDmaTag {
    unsigned short qwc; /* +0x0 */
    unsigned char mark; /* +0x2 */
    unsigned char id; /* +0x3 */
    _sceDmaTag* next; /* +0x4 */
    unsigned int p[2]; /* +0x8 */
};

struct anon_7 {
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

struct tagGLprimbuf {
    tagGLprimbuf* pNext; /* +0x0 */
    unsigned int nCount; /* +0x4 */
    unsigned char bEOP; /* +0x8 */
    int pCode; /* +0xc */
    float (*pData)[4]; /* +0x10 */
    int pTexUnit; /* +0x14 */
    unsigned char _extractor_padding_00[8]; /* implicitly added by extractor; +0x18..0x1f */
    _sceDmaTag tagDma; /* +0x20 */
    anon_7 tagGif; /* +0x30 */
    int vData[4]; /* +0x40 */
};

struct anon_0 {
    unsigned long TA0 : 8; /* bit 0, byte +0x0 */
    unsigned long pad08 : 7; /* bit 8, byte +0x0 */
    unsigned long AEM : 1; /* bit 15, byte +0x0 */
    unsigned long pad16 : 16; /* bit 16, byte +0x0 */
    unsigned long TA1 : 8; /* bit 32, byte +0x0 */
    unsigned long pad40 : 24; /* bit 40, byte +0x0 */
};

struct anon_1 {
    unsigned long AC : 1; /* bit 0, byte +0x0 */
    unsigned long pad01 : 63; /* bit 1, byte +0x0 */
};

struct anon_2 {
    unsigned long A : 2; /* bit 0, byte +0x0 */
    unsigned long B : 2; /* bit 2, byte +0x0 */
    unsigned long C : 2; /* bit 4, byte +0x0 */
    unsigned long D : 2; /* bit 6, byte +0x0 */
    unsigned long pad8 : 24; /* bit 8, byte +0x0 */
    unsigned long FIX : 8; /* bit 32, byte +0x0 */
    unsigned long pad40 : 24; /* bit 40, byte +0x0 */
};

struct anon_3 {
    unsigned long DTHE : 1; /* bit 0, byte +0x0 */
    unsigned long pad01 : 63; /* bit 1, byte +0x0 */
};

struct anon_9 {
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

struct anon_16 {
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

struct anon_21 {
    unsigned long RRW : 12; /* bit 0, byte +0x0 */
    unsigned long pad12 : 20; /* bit 12, byte +0x0 */
    unsigned long RRH : 12; /* bit 32, byte +0x0 */
    unsigned long pad44 : 20; /* bit 44, byte +0x0 */
};

struct anon_15 {
    unsigned long XDR : 2; /* bit 0, byte +0x0 */
    unsigned long pad02 : 62; /* bit 2, byte +0x0 */
};

struct tagGsLoadImage {
    anon_7 gifTag; /* +0x0 */
    anon_9 bitbltbuf; /* +0x10 */
    long bitbltbufaddr; /* +0x18 */
    anon_16 trxpos; /* +0x20 */
    long trxposaddr; /* +0x28 */
    anon_21 trxreg; /* +0x30 */
    long trxregaddr; /* +0x38 */
    anon_15 trxdir; /* +0x40 */
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

struct anon_4 {
    unsigned int R : 8; /* bit 0, byte +0x0 */
    unsigned int G : 8; /* bit 8, byte +0x0 */
    unsigned int B : 8; /* bit 16, byte +0x0 */
    unsigned int A : 8; /* bit 24, byte +0x0 */
    float Q; /* +0x4 */
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

struct anon_5 {
    unsigned long FBA : 1; /* bit 0, byte +0x0 */
    unsigned long pad01 : 63; /* bit 1, byte +0x0 */
};

struct anon_6 {
    unsigned long CBW : 6; /* bit 0, byte +0x0 */
    unsigned long COU : 6; /* bit 6, byte +0x0 */
    unsigned long COV : 10; /* bit 12, byte +0x0 */
    unsigned long pad22 : 42; /* bit 22, byte +0x0 */
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

struct anon_12 {
    unsigned long pad00; /* +0x0 */
};

struct anon_31 {
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

struct anon_37 {
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

struct anon_25 {
    unsigned long TBP1 : 14; /* bit 0, byte +0x0 */
    unsigned long TBW1 : 6; /* bit 14, byte +0x0 */
    unsigned long TBP2 : 14; /* bit 20, byte +0x0 */
    unsigned long TBW2 : 6; /* bit 34, byte +0x0 */
    unsigned long TBP3 : 14; /* bit 40, byte +0x0 */
    unsigned long TBW3 : 6; /* bit 54, byte +0x0 */
    unsigned long pad60 : 4; /* bit 60, byte +0x0 */
};

struct anon_32 {
    unsigned long TBP4 : 14; /* bit 0, byte +0x0 */
    unsigned long TBW4 : 6; /* bit 14, byte +0x0 */
    unsigned long TBP5 : 14; /* bit 20, byte +0x0 */
    unsigned long TBW5 : 6; /* bit 34, byte +0x0 */
    unsigned long TBP6 : 14; /* bit 40, byte +0x0 */
    unsigned long TBW6 : 6; /* bit 54, byte +0x0 */
    unsigned long pad60 : 4; /* bit 60, byte +0x0 */
};

struct anon_19 {
    unsigned long WMS : 2; /* bit 0, byte +0x0 */
    unsigned long WMT : 2; /* bit 2, byte +0x0 */
    unsigned long MINU : 10; /* bit 4, byte +0x0 */
    unsigned long MAXU : 10; /* bit 14, byte +0x0 */
    unsigned long MINV : 10; /* bit 24, byte +0x0 */
    unsigned long MAXV : 10; /* bit 34, byte +0x0 */
    unsigned long pad44 : 20; /* bit 44, byte +0x0 */
};

struct tagGsSetTex {
    anon_7 gifTag; /* +0x0 */
    anon_12 texflush; /* +0x10 */
    long texflushaddr; /* +0x18 */
    anon_31 tex0; /* +0x20 */
    long tex0addr; /* +0x28 */
    anon_37 tex1; /* +0x30 */
    long tex1addr; /* +0x38 */
    anon_25 miptbp1; /* +0x40 */
    long miptbp1addr; /* +0x48 */
    anon_32 miptbp2; /* +0x50 */
    long miptbp2addr; /* +0x58 */
    anon_19 clamp; /* +0x60 */
    long clampaddr; /* +0x68 */
};

struct anon_8 {
    unsigned long MSK : 2; /* bit 0, byte +0x0 */
    unsigned long pad02 : 62; /* bit 2, byte +0x0 */
};

struct anon_10 {
    float vObjectBS[4]; /* +0x0 */
    unsigned char bFinalCompile; /* +0x10 */
    unsigned int mode; /* +0x14 */
    tagGLprimbuf* pPrimBuf; /* +0x18 */
};

struct anon_11 {
    unsigned long pad00 : 56; /* bit 0, byte +0x0 */
    unsigned long F : 8; /* bit 56, byte +0x0 */
};

struct tagListNodeSingle {
    unsigned int nIndex; /* +0x0 */
    tagListData* pData; /* +0x4 */
};

struct anon_13 {
    unsigned long SCAX0 : 11; /* bit 0, byte +0x0 */
    unsigned long pad11 : 5; /* bit 11, byte +0x0 */
    unsigned long SCAX1 : 11; /* bit 16, byte +0x0 */
    unsigned long pad27 : 5; /* bit 27, byte +0x0 */
    unsigned long SCAY0 : 11; /* bit 32, byte +0x0 */
    unsigned long pad43 : 5; /* bit 43, byte +0x0 */
    unsigned long SCAY1 : 11; /* bit 48, byte +0x0 */
    unsigned long pad59 : 5; /* bit 59, byte +0x0 */
};

struct anon_14 {
    unsigned long FCR : 8; /* bit 0, byte +0x0 */
    unsigned long FCG : 8; /* bit 8, byte +0x0 */
    unsigned long FCB : 8; /* bit 16, byte +0x0 */
    unsigned long pad24 : 40; /* bit 24, byte +0x0 */
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

struct tagPS2glApiTable {
    void (*pfn_PS2glAccum)(unsigned int, float); /* +0x0 */
    void (*pfn_PS2glAlphaFunc)(unsigned int, float); /* +0x4 */
    unsigned char (*pfn_PS2glAreTexturesResident)(int, unsigned int*, unsigned char*); /* +0x8 */
    void (*pfn_PS2glArrayElement)(int); /* +0xc */
    void (*pfn_PS2glBegin)(unsigned int); /* +0x10 */
    void (*pfn_PS2glBindTexture)(unsigned int, unsigned int); /* +0x14 */
    void (*pfn_PS2glBitmap)(int, int, float, float, float, float, unsigned char*); /* +0x18 */
    void (*pfn_PS2glBlendFunc)(unsigned int, unsigned int); /* +0x1c */
    void (*pfn_PS2glCallList)(unsigned int); /* +0x20 */
    void (*pfn_PS2glCallLists)(int, unsigned int, void*); /* +0x24 */
    void (*pfn_PS2glClear)(unsigned int); /* +0x28 */
    void (*pfn_PS2glClearAccum)(float, float, float, float); /* +0x2c */
    void (*pfn_PS2glClearColor)(float, float, float, float); /* +0x30 */
    void (*pfn_PS2glClearDepth)(double); /* +0x34 */
    void (*pfn_PS2glClearIndex)(float); /* +0x38 */
    void (*pfn_PS2glClearStencil)(int); /* +0x3c */
    void (*pfn_PS2glClipPlane)(unsigned int, double*); /* +0x40 */
    void (*pfn_PS2glColor3b)(signed char, signed char, signed char); /* +0x44 */
    void (*pfn_PS2glColor3bv)(signed char*); /* +0x48 */
    void (*pfn_PS2glColor3d)(double, double, double); /* +0x4c */
    void (*pfn_PS2glColor3dv)(double*); /* +0x50 */
    void (*pfn_PS2glColor3f)(float, float, float); /* +0x54 */
    void (*pfn_PS2glColor3fv)(float*); /* +0x58 */
    void (*pfn_PS2glColor3i)(int, int, int); /* +0x5c */
    void (*pfn_PS2glColor3iv)(int*); /* +0x60 */
    void (*pfn_PS2glColor3s)(short, short, short); /* +0x64 */
    void (*pfn_PS2glColor3sv)(short*); /* +0x68 */
    void (*pfn_PS2glColor3ub)(unsigned char, unsigned char, unsigned char); /* +0x6c */
    void (*pfn_PS2glColor3ubv)(unsigned char*); /* +0x70 */
    void (*pfn_PS2glColor3ui)(unsigned int, unsigned int, unsigned int); /* +0x74 */
    void (*pfn_PS2glColor3uiv)(unsigned int*); /* +0x78 */
    void (*pfn_PS2glColor3us)(unsigned short, unsigned short, unsigned short); /* +0x7c */
    void (*pfn_PS2glColor3usv)(unsigned short*); /* +0x80 */
    void (*pfn_PS2glColor4b)(signed char, signed char, signed char, signed char); /* +0x84 */
    void (*pfn_PS2glColor4bv)(signed char*); /* +0x88 */
    void (*pfn_PS2glColor4d)(double, double, double, double); /* +0x8c */
    void (*pfn_PS2glColor4dv)(double*); /* +0x90 */
    void (*pfn_PS2glColor4f)(float, float, float, float); /* +0x94 */
    void (*pfn_PS2glColor4fv)(float*); /* +0x98 */
    void (*pfn_PS2glColor4i)(int, int, int, int); /* +0x9c */
    void (*pfn_PS2glColor4iv)(int*); /* +0xa0 */
    void (*pfn_PS2glColor4s)(short, short, short, short); /* +0xa4 */
    void (*pfn_PS2glColor4sv)(short*); /* +0xa8 */
    void (*pfn_PS2glColor4ub)(unsigned char, unsigned char, unsigned char, unsigned char); /* +0xac */
    void (*pfn_PS2glColor4ubv)(unsigned char*); /* +0xb0 */
    void (*pfn_PS2glColor4ui)(unsigned int, unsigned int, unsigned int, unsigned int); /* +0xb4 */
    void (*pfn_PS2glColor4uiv)(unsigned int*); /* +0xb8 */
    void (*pfn_PS2glColor4us)(unsigned short, unsigned short, unsigned short, unsigned short); /* +0xbc */
    void (*pfn_PS2glColor4usv)(unsigned short*); /* +0xc0 */
    void (*pfn_PS2glColorMask)(unsigned char, unsigned char, unsigned char, unsigned char); /* +0xc4 */
    void (*pfn_PS2glColorMaterial)(unsigned int, unsigned int); /* +0xc8 */
    void (*pfn_PS2glColorPointer)(int, unsigned int, int, void*); /* +0xcc */
    void (*pfn_PS2glCopyPixels)(int, int, int, int, unsigned int); /* +0xd0 */
    void (*pfn_PS2glCopyTexImage1D)(unsigned int, int, unsigned int, int, int, int, int); /* +0xd4 */
    void (*pfn_PS2glCopyTexImage2D)(unsigned int, int, unsigned int, int, int, int, int, int); /* +0xd8 */
    void (*pfn_PS2glCopyTexSubImage1D)(unsigned int, int, int, int, int, int); /* +0xdc */
    void (*pfn_PS2glCopyTexSubImage2D)(unsigned int, int, int, int, int, int, int, int); /* +0xe0 */
    void (*pfn_PS2glCullFace)(unsigned int); /* +0xe4 */
    void (*pfn_PS2glDeleteLists)(unsigned int, int); /* +0xe8 */
    void (*pfn_PS2glDeleteTextures)(int, unsigned int*); /* +0xec */
    void (*pfn_PS2glDepthFunc)(unsigned int); /* +0xf0 */
    void (*pfn_PS2glDepthMask)(unsigned char); /* +0xf4 */
    void (*pfn_PS2glDepthRange)(double, double); /* +0xf8 */
    void (*pfn_PS2glDisable)(unsigned int); /* +0xfc */
    void (*pfn_PS2glDisableClientState)(unsigned int); /* +0x100 */
    void (*pfn_PS2glDrawArrays)(unsigned int, int, int); /* +0x104 */
    void (*pfn_PS2glDrawBuffer)(unsigned int); /* +0x108 */
    void (*pfn_PS2glDrawElements)(unsigned int, int, unsigned int, void*); /* +0x10c */
    void (*pfn_PS2glDrawPixels)(int, int, unsigned int, unsigned int, void*); /* +0x110 */
    void (*pfn_PS2glEdgeFlag)(unsigned char); /* +0x114 */
    void (*pfn_PS2glEdgeFlagPointer)(int, void*); /* +0x118 */
    void (*pfn_PS2glEdgeFlagv)(unsigned char*); /* +0x11c */
    void (*pfn_PS2glEnable)(unsigned int); /* +0x120 */
    void (*pfn_PS2glEnableClientState)(unsigned int); /* +0x124 */
    void (*pfn_PS2glEnd)(void); /* +0x128 */
    void (*pfn_PS2glEndList)(void); /* +0x12c */
    void (*pfn_PS2glEvalCoord1d)(double); /* +0x130 */
    void (*pfn_PS2glEvalCoord1dv)(double*); /* +0x134 */
    void (*pfn_PS2glEvalCoord1f)(float); /* +0x138 */
    void (*pfn_PS2glEvalCoord1fv)(float*); /* +0x13c */
    void (*pfn_PS2glEvalCoord2d)(double, double); /* +0x140 */
    void (*pfn_PS2glEvalCoord2dv)(double*); /* +0x144 */
    void (*pfn_PS2glEvalCoord2f)(float, float); /* +0x148 */
    void (*pfn_PS2glEvalCoord2fv)(float*); /* +0x14c */
    void (*pfn_PS2glEvalMesh1)(unsigned int, int, int); /* +0x150 */
    void (*pfn_PS2glEvalMesh2)(unsigned int, int, int, int, int); /* +0x154 */
    void (*pfn_PS2glEvalPoint1)(int); /* +0x158 */
    void (*pfn_PS2glEvalPoint2)(int, int); /* +0x15c */
    void (*pfn_PS2glFeedbackBuffer)(int, unsigned int, float*); /* +0x160 */
    void (*pfn_PS2glFinish)(void); /* +0x164 */
    void (*pfn_PS2glFlush)(void); /* +0x168 */
    void (*pfn_PS2glFogf)(unsigned int, float); /* +0x16c */
    void (*pfn_PS2glFogfv)(unsigned int, float*); /* +0x170 */
    void (*pfn_PS2glFogi)(unsigned int, int); /* +0x174 */
    void (*pfn_PS2glFogiv)(unsigned int, int*); /* +0x178 */
    void (*pfn_PS2glFrontFace)(unsigned int); /* +0x17c */
    void (*pfn_PS2glFrustum)(double, double, double, double, double, double); /* +0x180 */
    unsigned int (*pfn_PS2glGenLists)(int); /* +0x184 */
    void (*pfn_PS2glGenTextures)(int, unsigned int*); /* +0x188 */
    void (*pfn_PS2glGetBooleanv)(unsigned int, unsigned char*); /* +0x18c */
    void (*pfn_PS2glGetClipPlane)(unsigned int, double*); /* +0x190 */
    void (*pfn_PS2glGetDoublev)(unsigned int, double*); /* +0x194 */
    unsigned int (*pfn_PS2glGetError)(void); /* +0x198 */
    void (*pfn_PS2glGetFloatv)(unsigned int, float*); /* +0x19c */
    void (*pfn_PS2glGetIntegerv)(unsigned int, int*); /* +0x1a0 */
    void (*pfn_PS2glGetLightfv)(unsigned int, unsigned int, float*); /* +0x1a4 */
    void (*pfn_PS2glGetLightiv)(unsigned int, unsigned int, int*); /* +0x1a8 */
    void (*pfn_PS2glGetMapdv)(unsigned int, unsigned int, double*); /* +0x1ac */
    void (*pfn_PS2glGetMapfv)(unsigned int, unsigned int, float*); /* +0x1b0 */
    void (*pfn_PS2glGetMapiv)(unsigned int, unsigned int, int*); /* +0x1b4 */
    void (*pfn_PS2glGetMaterialfv)(unsigned int, unsigned int, float*); /* +0x1b8 */
    void (*pfn_PS2glGetMaterialiv)(unsigned int, unsigned int, int*); /* +0x1bc */
    void (*pfn_PS2glGetPixelMapfv)(unsigned int, float*); /* +0x1c0 */
    void (*pfn_PS2glGetPixelMapuiv)(unsigned int, unsigned int*); /* +0x1c4 */
    void (*pfn_PS2glGetPixelMapusv)(unsigned int, unsigned short*); /* +0x1c8 */
    void (*pfn_PS2glGetPointerv)(unsigned int, char**); /* +0x1cc */
    void (*pfn_PS2glGetPolygonStipple)(unsigned char*); /* +0x1d0 */
    unsigned char* (*pfn_PS2glGetString)(unsigned int); /* +0x1d4 */
    void (*pfn_PS2glGetTexEnvfv)(unsigned int, unsigned int, float*); /* +0x1d8 */
    void (*pfn_PS2glGetTexEnviv)(unsigned int, unsigned int, int*); /* +0x1dc */
    void (*pfn_PS2glGetTexGendv)(unsigned int, unsigned int, double*); /* +0x1e0 */
    void (*pfn_PS2glGetTexGenfv)(unsigned int, unsigned int, float*); /* +0x1e4 */
    void (*pfn_PS2glGetTexGeniv)(unsigned int, unsigned int, int*); /* +0x1e8 */
    void (*pfn_PS2glGetTexImage)(unsigned int, int, unsigned int, unsigned int, void*); /* +0x1ec */
    void (*pfn_PS2glGetTexLevelParameterfv)(unsigned int, int, unsigned int, float*); /* +0x1f0 */
    void (*pfn_PS2glGetTexLevelParameteriv)(unsigned int, int, unsigned int, int*); /* +0x1f4 */
    void (*pfn_PS2glGetTexParameterfv)(unsigned int, unsigned int, float*); /* +0x1f8 */
    void (*pfn_PS2glGetTexParameteriv)(unsigned int, unsigned int, int*); /* +0x1fc */
    void (*pfn_PS2glHint)(unsigned int, unsigned int); /* +0x200 */
    void (*pfn_PS2glIndexMask)(unsigned int); /* +0x204 */
    void (*pfn_PS2glIndexPointer)(unsigned int, int, void*); /* +0x208 */
    void (*pfn_PS2glIndexd)(double); /* +0x20c */
    void (*pfn_PS2glIndexdv)(double*); /* +0x210 */
    void (*pfn_PS2glIndexf)(float); /* +0x214 */
    void (*pfn_PS2glIndexfv)(float*); /* +0x218 */
    void (*pfn_PS2glIndexi)(int); /* +0x21c */
    void (*pfn_PS2glIndexiv)(int*); /* +0x220 */
    void (*pfn_PS2glIndexs)(short); /* +0x224 */
    void (*pfn_PS2glIndexsv)(short*); /* +0x228 */
    void (*pfn_PS2glIndexub)(unsigned char); /* +0x22c */
    void (*pfn_PS2glIndexubv)(unsigned char*); /* +0x230 */
    void (*pfn_PS2glInitNames)(void); /* +0x234 */
    void (*pfn_PS2glInterleavedArrays)(unsigned int, int, void*); /* +0x238 */
    unsigned char (*pfn_PS2glIsEnabled)(unsigned int); /* +0x23c */
    unsigned char (*pfn_PS2glIsList)(unsigned int); /* +0x240 */
    unsigned char (*pfn_PS2glIsTexture)(unsigned int); /* +0x244 */
    void (*pfn_PS2glLightModelf)(unsigned int, float); /* +0x248 */
    void (*pfn_PS2glLightModelfv)(unsigned int, float*); /* +0x24c */
    void (*pfn_PS2glLightModeli)(unsigned int, int); /* +0x250 */
    void (*pfn_PS2glLightModeliv)(unsigned int, int*); /* +0x254 */
    void (*pfn_PS2glLightf)(unsigned int, unsigned int, float); /* +0x258 */
    void (*pfn_PS2glLightfv)(unsigned int, unsigned int, float*); /* +0x25c */
    void (*pfn_PS2glLighti)(unsigned int, unsigned int, int); /* +0x260 */
    void (*pfn_PS2glLightiv)(unsigned int, unsigned int, int*); /* +0x264 */
    void (*pfn_PS2glLineStipple)(int, unsigned short); /* +0x268 */
    void (*pfn_PS2glLineWidth)(float); /* +0x26c */
    void (*pfn_PS2glListBase)(unsigned int); /* +0x270 */
    void (*pfn_PS2glLoadIdentity)(void); /* +0x274 */
    void (*pfn_PS2glLoadMatrixd)(double*); /* +0x278 */
    void (*pfn_PS2glLoadMatrixf)(float*); /* +0x27c */
    void (*pfn_PS2glLoadName)(unsigned int); /* +0x280 */
    void (*pfn_PS2glLogicOp)(unsigned int); /* +0x284 */
    void (*pfn_PS2glMap1d)(unsigned int, double, double, int, int, double*); /* +0x288 */
    void (*pfn_PS2glMap1f)(unsigned int, float, float, int, int, float*); /* +0x28c */
    void (*pfn_PS2glMap2d)(unsigned int, double, double, int, int, double, double, int, int, double*); /* +0x290 */
    void (*pfn_PS2glMap2f)(unsigned int, float, float, int, int, float, float, int, int, float*); /* +0x294 */
    void (*pfn_PS2glMapGrid1d)(int, double, double); /* +0x298 */
    void (*pfn_PS2glMapGrid1f)(int, float, float); /* +0x29c */
    void (*pfn_PS2glMapGrid2d)(int, double, double, int, double, double); /* +0x2a0 */
    void (*pfn_PS2glMapGrid2f)(int, float, float, int, float, float); /* +0x2a4 */
    void (*pfn_PS2glMaterialf)(unsigned int, unsigned int, float); /* +0x2a8 */
    void (*pfn_PS2glMaterialfv)(unsigned int, unsigned int, float*); /* +0x2ac */
    void (*pfn_PS2glMateriali)(unsigned int, unsigned int, int); /* +0x2b0 */
    void (*pfn_PS2glMaterialiv)(unsigned int, unsigned int, int*); /* +0x2b4 */
    void (*pfn_PS2glMatrixMode)(unsigned int); /* +0x2b8 */
    void (*pfn_PS2glMultMatrixd)(double*); /* +0x2bc */
    void (*pfn_PS2glMultMatrixf)(float*); /* +0x2c0 */
    void (*pfn_PS2glNewList)(unsigned int, unsigned int); /* +0x2c4 */
    void (*pfn_PS2glNormal3b)(signed char, signed char, signed char); /* +0x2c8 */
    void (*pfn_PS2glNormal3bv)(signed char*); /* +0x2cc */
    void (*pfn_PS2glNormal3d)(double, double, double); /* +0x2d0 */
    void (*pfn_PS2glNormal3dv)(double*); /* +0x2d4 */
    void (*pfn_PS2glNormal3f)(float, float, float); /* +0x2d8 */
    void (*pfn_PS2glNormal3fv)(float*); /* +0x2dc */
    void (*pfn_PS2glNormal3i)(int, int, int); /* +0x2e0 */
    void (*pfn_PS2glNormal3iv)(int*); /* +0x2e4 */
    void (*pfn_PS2glNormal3s)(short, short, short); /* +0x2e8 */
    void (*pfn_PS2glNormal3sv)(short*); /* +0x2ec */
    void (*pfn_PS2glNormalPointer)(unsigned int, int, void*); /* +0x2f0 */
    void (*pfn_PS2glOrtho)(float, float, float, float, float, float); /* +0x2f4 */
    void (*pfn_PS2glPassThrough)(float); /* +0x2f8 */
    void (*pfn_PS2glPixelMapfv)(unsigned int, int, float*); /* +0x2fc */
    void (*pfn_PS2glPixelMapuiv)(unsigned int, int, unsigned int*); /* +0x300 */
    void (*pfn_PS2glPixelMapusv)(unsigned int, int, unsigned short*); /* +0x304 */
    void (*pfn_PS2glPixelStoref)(unsigned int, float); /* +0x308 */
    void (*pfn_PS2glPixelStorei)(unsigned int, int); /* +0x30c */
    void (*pfn_PS2glPixelTransferf)(unsigned int, float); /* +0x310 */
    void (*pfn_PS2glPixelTransferi)(unsigned int, int); /* +0x314 */
    void (*pfn_PS2glPixelZoom)(float, float); /* +0x318 */
    void (*pfn_PS2glPointSize)(float); /* +0x31c */
    void (*pfn_PS2glPolygonMode)(unsigned int, unsigned int); /* +0x320 */
    void (*pfn_PS2glPolygonOffset)(float, float); /* +0x324 */
    void (*pfn_PS2glPolygonStipple)(unsigned char*); /* +0x328 */
    void (*pfn_PS2glPopAttrib)(void); /* +0x32c */
    void (*pfn_PS2glPopClientAttrib)(void); /* +0x330 */
    void (*pfn_PS2glPopMatrix)(void); /* +0x334 */
    void (*pfn_PS2glPopName)(void); /* +0x338 */
    void (*pfn_PS2glPrioritizeTextures)(int, unsigned int*, float*); /* +0x33c */
    void (*pfn_PS2glPushAttrib)(unsigned int); /* +0x340 */
    void (*pfn_PS2glPushClientAttrib)(unsigned int); /* +0x344 */
    void (*pfn_PS2glPushMatrix)(void); /* +0x348 */
    void (*pfn_PS2glPushName)(unsigned int); /* +0x34c */
    void (*pfn_PS2glRasterPos2d)(double, double); /* +0x350 */
    void (*pfn_PS2glRasterPos2dv)(double*); /* +0x354 */
    void (*pfn_PS2glRasterPos2f)(float, float); /* +0x358 */
    void (*pfn_PS2glRasterPos2fv)(float*); /* +0x35c */
    void (*pfn_PS2glRasterPos2i)(int, int); /* +0x360 */
    void (*pfn_PS2glRasterPos2iv)(int*); /* +0x364 */
    void (*pfn_PS2glRasterPos2s)(short, short); /* +0x368 */
    void (*pfn_PS2glRasterPos2sv)(short*); /* +0x36c */
    void (*pfn_PS2glRasterPos3d)(double, double, double); /* +0x370 */
    void (*pfn_PS2glRasterPos3dv)(double*); /* +0x374 */
    void (*pfn_PS2glRasterPos3f)(float, float, float); /* +0x378 */
    void (*pfn_PS2glRasterPos3fv)(float*); /* +0x37c */
    void (*pfn_PS2glRasterPos3i)(int, int, int); /* +0x380 */
    void (*pfn_PS2glRasterPos3iv)(int*); /* +0x384 */
    void (*pfn_PS2glRasterPos3s)(short, short, short); /* +0x388 */
    void (*pfn_PS2glRasterPos3sv)(short*); /* +0x38c */
    void (*pfn_PS2glRasterPos4d)(double, double, double, double); /* +0x390 */
    void (*pfn_PS2glRasterPos4dv)(double*); /* +0x394 */
    void (*pfn_PS2glRasterPos4f)(float, float, float, float); /* +0x398 */
    void (*pfn_PS2glRasterPos4fv)(float*); /* +0x39c */
    void (*pfn_PS2glRasterPos4i)(int, int, int, int); /* +0x3a0 */
    void (*pfn_PS2glRasterPos4iv)(int*); /* +0x3a4 */
    void (*pfn_PS2glRasterPos4s)(short, short, short, short); /* +0x3a8 */
    void (*pfn_PS2glRasterPos4sv)(short*); /* +0x3ac */
    void (*pfn_PS2glReadBuffer)(unsigned int); /* +0x3b0 */
    void (*pfn_PS2glReadPixels)(int, int, int, int, unsigned int, unsigned int, void*); /* +0x3b4 */
    void (*pfn_PS2glRectd)(double, double, double, double); /* +0x3b8 */
    void (*pfn_PS2glRectdv)(double*, double*); /* +0x3bc */
    void (*pfn_PS2glRectf)(float, float, float, float); /* +0x3c0 */
    void (*pfn_PS2glRectfv)(float*, float*); /* +0x3c4 */
    void (*pfn_PS2glRecti)(int, int, int, int); /* +0x3c8 */
    void (*pfn_PS2glRectiv)(int*, int*); /* +0x3cc */
    void (*pfn_PS2glRects)(short, short, short, short); /* +0x3d0 */
    void (*pfn_PS2glRectsv)(short*, short*); /* +0x3d4 */
    int (*pfn_PS2glRenderMode)(unsigned int); /* +0x3d8 */
    void (*pfn_PS2glRotated)(double, double, double, double); /* +0x3dc */
    void (*pfn_PS2glRotatef)(float, float, float, float); /* +0x3e0 */
    void (*pfn_PS2glScaled)(double, double, double); /* +0x3e4 */
    void (*pfn_PS2glScalef)(float, float, float); /* +0x3e8 */
    void (*pfn_PS2glScissor)(int, int, int, int); /* +0x3ec */
    void (*pfn_PS2glSelectBuffer)(int, unsigned int*); /* +0x3f0 */
    void (*pfn_PS2glShadeModel)(unsigned int); /* +0x3f4 */
    void (*pfn_PS2glStencilFunc)(unsigned int, int, unsigned int); /* +0x3f8 */
    void (*pfn_PS2glStencilMask)(unsigned int); /* +0x3fc */
    void (*pfn_PS2glStencilOp)(unsigned int, unsigned int, unsigned int); /* +0x400 */
    void (*pfn_PS2glTexCoord1d)(double); /* +0x404 */
    void (*pfn_PS2glTexCoord1dv)(double*); /* +0x408 */
    void (*pfn_PS2glTexCoord1f)(float); /* +0x40c */
    void (*pfn_PS2glTexCoord1fv)(float*); /* +0x410 */
    void (*pfn_PS2glTexCoord1i)(int); /* +0x414 */
    void (*pfn_PS2glTexCoord1iv)(int*); /* +0x418 */
    void (*pfn_PS2glTexCoord1s)(short); /* +0x41c */
    void (*pfn_PS2glTexCoord1sv)(short*); /* +0x420 */
    void (*pfn_PS2glTexCoord2d)(double, double); /* +0x424 */
    void (*pfn_PS2glTexCoord2dv)(double*); /* +0x428 */
    void (*pfn_PS2glTexCoord2f)(float, float); /* +0x42c */
    void (*pfn_PS2glTexCoord2fv)(float*); /* +0x430 */
    void (*pfn_PS2glTexCoord2i)(int, int); /* +0x434 */
    void (*pfn_PS2glTexCoord2iv)(int*); /* +0x438 */
    void (*pfn_PS2glTexCoord2s)(short, short); /* +0x43c */
    void (*pfn_PS2glTexCoord2sv)(short*); /* +0x440 */
    void (*pfn_PS2glTexCoord3d)(double, double, double); /* +0x444 */
    void (*pfn_PS2glTexCoord3dv)(double*); /* +0x448 */
    void (*pfn_PS2glTexCoord3f)(float, float, float); /* +0x44c */
    void (*pfn_PS2glTexCoord3fv)(float*); /* +0x450 */
    void (*pfn_PS2glTexCoord3i)(int, int, int); /* +0x454 */
    void (*pfn_PS2glTexCoord3iv)(int*); /* +0x458 */
    void (*pfn_PS2glTexCoord3s)(short, short, short); /* +0x45c */
    void (*pfn_PS2glTexCoord3sv)(short*); /* +0x460 */
    void (*pfn_PS2glTexCoord4d)(double, double, double, double); /* +0x464 */
    void (*pfn_PS2glTexCoord4dv)(double*); /* +0x468 */
    void (*pfn_PS2glTexCoord4f)(float, float, float, float); /* +0x46c */
    void (*pfn_PS2glTexCoord4fv)(float*); /* +0x470 */
    void (*pfn_PS2glTexCoord4i)(int, int, int, int); /* +0x474 */
    void (*pfn_PS2glTexCoord4iv)(int*); /* +0x478 */
    void (*pfn_PS2glTexCoord4s)(short, short, short, short); /* +0x47c */
    void (*pfn_PS2glTexCoord4sv)(short*); /* +0x480 */
    void (*pfn_PS2glTexCoordPointer)(int, unsigned int, int, void*); /* +0x484 */
    void (*pfn_PS2glTexEnvf)(unsigned int, unsigned int, float); /* +0x488 */
    void (*pfn_PS2glTexEnvfv)(unsigned int, unsigned int, float*); /* +0x48c */
    void (*pfn_PS2glTexEnvi)(unsigned int, unsigned int, int); /* +0x490 */
    void (*pfn_PS2glTexEnviv)(unsigned int, unsigned int, int*); /* +0x494 */
    void (*pfn_PS2glTexGend)(unsigned int, unsigned int, double); /* +0x498 */
    void (*pfn_PS2glTexGendv)(unsigned int, unsigned int, double*); /* +0x49c */
    void (*pfn_PS2glTexGenf)(unsigned int, unsigned int, float); /* +0x4a0 */
    void (*pfn_PS2glTexGenfv)(unsigned int, unsigned int, float*); /* +0x4a4 */
    void (*pfn_PS2glTexGeni)(unsigned int, unsigned int, int); /* +0x4a8 */
    void (*pfn_PS2glTexGeniv)(unsigned int, unsigned int, int*); /* +0x4ac */
    void (*pfn_PS2glTexImage1D)(unsigned int, int, int, int, int, unsigned int, unsigned int, void*); /* +0x4b0 */
    void (*pfn_PS2glTexImage2D)(unsigned int, int, int, int, int, int, unsigned int, unsigned int, void*); /* +0x4b4 */
    void (*pfn_PS2glTexParameterf)(unsigned int, unsigned int, float); /* +0x4b8 */
    void (*pfn_PS2glTexParameterfv)(unsigned int, unsigned int, float*); /* +0x4bc */
    void (*pfn_PS2glTexParameteri)(unsigned int, unsigned int, int); /* +0x4c0 */
    void (*pfn_PS2glTexParameteriv)(unsigned int, unsigned int, int*); /* +0x4c4 */
    void (*pfn_PS2glTexSubImage1D)(unsigned int, int, int, int, unsigned int, unsigned int, void*); /* +0x4c8 */
    void (*pfn_PS2glTexSubImage2D)(unsigned int, int, int, int, int, int, unsigned int, unsigned int, void*); /* +0x4cc */
    void (*pfn_PS2glTranslated)(double, double, double); /* +0x4d0 */
    void (*pfn_PS2glTranslatef)(float, float, float); /* +0x4d4 */
    void (*pfn_PS2glVertex2d)(double, double); /* +0x4d8 */
    void (*pfn_PS2glVertex2dv)(double*); /* +0x4dc */
    void (*pfn_PS2glVertex2f)(float, float); /* +0x4e0 */
    void (*pfn_PS2glVertex2fv)(float*); /* +0x4e4 */
    void (*pfn_PS2glVertex2i)(int, int); /* +0x4e8 */
    void (*pfn_PS2glVertex2iv)(int*); /* +0x4ec */
    void (*pfn_PS2glVertex2s)(short, short); /* +0x4f0 */
    void (*pfn_PS2glVertex2sv)(short*); /* +0x4f4 */
    void (*pfn_PS2glVertex3d)(double, double, double); /* +0x4f8 */
    void (*pfn_PS2glVertex3dv)(double*); /* +0x4fc */
    void (*pfn_PS2glVertex3f)(float, float, float); /* +0x500 */
    void (*pfn_PS2glVertex3fv)(float*); /* +0x504 */
    void (*pfn_PS2glVertex3i)(int, int, int); /* +0x508 */
    void (*pfn_PS2glVertex3iv)(int*); /* +0x50c */
    void (*pfn_PS2glVertex3s)(short, short, short); /* +0x510 */
    void (*pfn_PS2glVertex3sv)(short*); /* +0x514 */
    void (*pfn_PS2glVertex4d)(double, double, double, double); /* +0x518 */
    void (*pfn_PS2glVertex4dv)(double*); /* +0x51c */
    void (*pfn_PS2glVertex4f)(float, float, float, float); /* +0x520 */
    void (*pfn_PS2glVertex4fv)(float*); /* +0x524 */
    void (*pfn_PS2glVertex4i)(int, int, int, int); /* +0x528 */
    void (*pfn_PS2glVertex4iv)(int*); /* +0x52c */
    void (*pfn_PS2glVertex4s)(short, short, short, short); /* +0x530 */
    void (*pfn_PS2glVertex4sv)(short*); /* +0x534 */
    void (*pfn_PS2glVertexPointer)(int, unsigned int, int, void*); /* +0x538 */
    void (*pfn_PS2glViewport)(int, int, int, int); /* +0x53c */
    void (*pfn_PS2glColorTableEXT)(unsigned int, unsigned int, int, unsigned int, unsigned int, void*); /* +0x540 */
    void (*pfn_PS2glColorSubTableEXT)(unsigned int, int, int, unsigned int, unsigned int, void*); /* +0x544 */
    void (*pfn_PS2glGetColorTableEXT)(unsigned int, unsigned int, unsigned int, void*); /* +0x548 */
    void (*pfn_PS2glGetColorTableParameterivEXT)(unsigned int, unsigned int, int*); /* +0x54c */
    void (*pfn_PS2glGetColorTableParameterfvEXT)(unsigned int, unsigned int, float*); /* +0x550 */
    void (*pfn_PS2glSetGsRegister)(int, unsigned long, unsigned long); /* +0x554 */
    void (*pfn_PS2glGetGsRegister)(int, unsigned long*); /* +0x558 */
    void (*pfn_PS2glActiveTextureARB)(unsigned int); /* +0x55c */
    void (*pfn_PS2glClientActiveTextureARB)(unsigned int); /* +0x560 */
    void (*pfn_PS2glMultiTexCoord1dARB)(unsigned int, double); /* +0x564 */
    void (*pfn_PS2glMultiTexCoord1dvARB)(unsigned int, double*); /* +0x568 */
    void (*pfn_PS2glMultiTexCoord1fARB)(unsigned int, float); /* +0x56c */
    void (*pfn_PS2glMultiTexCoord1fvARB)(unsigned int, float*); /* +0x570 */
    void (*pfn_PS2glMultiTexCoord1iARB)(unsigned int, int); /* +0x574 */
    void (*pfn_PS2glMultiTexCoord1ivARB)(unsigned int, int*); /* +0x578 */
    void (*pfn_PS2glMultiTexCoord1sARB)(unsigned int, short); /* +0x57c */
    void (*pfn_PS2glMultiTexCoord1svARB)(unsigned int, short*); /* +0x580 */
    void (*pfn_PS2glMultiTexCoord2dARB)(unsigned int, double, double); /* +0x584 */
    void (*pfn_PS2glMultiTexCoord2dvARB)(unsigned int, double*); /* +0x588 */
    void (*pfn_PS2glMultiTexCoord2fARB)(unsigned int, float, float); /* +0x58c */
    void (*pfn_PS2glMultiTexCoord2fvARB)(unsigned int, float*); /* +0x590 */
    void (*pfn_PS2glMultiTexCoord2iARB)(unsigned int, int, int); /* +0x594 */
    void (*pfn_PS2glMultiTexCoord2ivARB)(unsigned int, int*); /* +0x598 */
    void (*pfn_PS2glMultiTexCoord2sARB)(unsigned int, short, short); /* +0x59c */
    void (*pfn_PS2glMultiTexCoord2svARB)(unsigned int, short*); /* +0x5a0 */
    void (*pfn_PS2glMultiTexCoord3dARB)(unsigned int, double, double, double); /* +0x5a4 */
    void (*pfn_PS2glMultiTexCoord3dvARB)(unsigned int, double*); /* +0x5a8 */
    void (*pfn_PS2glMultiTexCoord3fARB)(unsigned int, float, float, float); /* +0x5ac */
    void (*pfn_PS2glMultiTexCoord3fvARB)(unsigned int, float*); /* +0x5b0 */
    void (*pfn_PS2glMultiTexCoord3iARB)(unsigned int, int, int, int); /* +0x5b4 */
    void (*pfn_PS2glMultiTexCoord3ivARB)(unsigned int, int*); /* +0x5b8 */
    void (*pfn_PS2glMultiTexCoord3sARB)(unsigned int, short, short, short); /* +0x5bc */
    void (*pfn_PS2glMultiTexCoord3svARB)(unsigned int, short*); /* +0x5c0 */
    void (*pfn_PS2glMultiTexCoord4dARB)(unsigned int, double, double, double, double); /* +0x5c4 */
    void (*pfn_PS2glMultiTexCoord4dvARB)(unsigned int, double*); /* +0x5c8 */
    void (*pfn_PS2glMultiTexCoord4fARB)(unsigned int, float, float, float, float); /* +0x5cc */
    void (*pfn_PS2glMultiTexCoord4fvARB)(unsigned int, float*); /* +0x5d0 */
    void (*pfn_PS2glMultiTexCoord4iARB)(unsigned int, int, int, int, int); /* +0x5d4 */
    void (*pfn_PS2glMultiTexCoord4ivARB)(unsigned int, int*); /* +0x5d8 */
    void (*pfn_PS2glMultiTexCoord4sARB)(unsigned int, short, short, short, short); /* +0x5dc */
    void (*pfn_PS2glMultiTexCoord4svARB)(unsigned int, short*); /* +0x5e0 */
    void (*pfn_PS2glMultiColor3bARB)(unsigned int, signed char, signed char, signed char); /* +0x5e4 */
    void (*pfn_PS2glMultiColor3bvARB)(unsigned int, signed char*); /* +0x5e8 */
    void (*pfn_PS2glMultiColor3dARB)(unsigned int, double, double, double); /* +0x5ec */
    void (*pfn_PS2glMultiColor3dvARB)(unsigned int, double*); /* +0x5f0 */
    void (*pfn_PS2glMultiColor3fARB)(unsigned int, float, float, float); /* +0x5f4 */
    void (*pfn_PS2glMultiColor3fvARB)(unsigned int, float*); /* +0x5f8 */
    void (*pfn_PS2glMultiColor3iARB)(unsigned int, int, int, int); /* +0x5fc */
    void (*pfn_PS2glMultiColor3ivARB)(unsigned int, int*); /* +0x600 */
    void (*pfn_PS2glMultiColor3sARB)(unsigned int, short, short, short); /* +0x604 */
    void (*pfn_PS2glMultiColor3svARB)(unsigned int, short*); /* +0x608 */
    void (*pfn_PS2glMultiColor3ubARB)(unsigned int, unsigned char, unsigned char, unsigned char); /* +0x60c */
    void (*pfn_PS2glMultiColor3ubvARB)(unsigned int, unsigned char*); /* +0x610 */
    void (*pfn_PS2glMultiColor3uiARB)(unsigned int, unsigned int, unsigned int, unsigned int); /* +0x614 */
    void (*pfn_PS2glMultiColor3uivARB)(unsigned int, unsigned int*); /* +0x618 */
    void (*pfn_PS2glMultiColor3usARB)(unsigned int, unsigned short, unsigned short, unsigned short); /* +0x61c */
    void (*pfn_PS2glMultiColor3usvARB)(unsigned int, unsigned short*); /* +0x620 */
    void (*pfn_PS2glMultiColor4bARB)(unsigned int, signed char, signed char, signed char, signed char); /* +0x624 */
    void (*pfn_PS2glMultiColor4bvARB)(unsigned int, signed char*); /* +0x628 */
    void (*pfn_PS2glMultiColor4dARB)(unsigned int, double, double, double, double); /* +0x62c */
    void (*pfn_PS2glMultiColor4dvARB)(unsigned int, double*); /* +0x630 */
    void (*pfn_PS2glMultiColor4fARB)(unsigned int, float, float, float, float); /* +0x634 */
    void (*pfn_PS2glMultiColor4fvARB)(unsigned int, float*); /* +0x638 */
    void (*pfn_PS2glMultiColor4iARB)(unsigned int, int, int, int, int); /* +0x63c */
    void (*pfn_PS2glMultiColor4ivARB)(unsigned int, int*); /* +0x640 */
    void (*pfn_PS2glMultiColor4sARB)(unsigned int, short, short, short, short); /* +0x644 */
    void (*pfn_PS2glMultiColor4svARB)(unsigned int, short*); /* +0x648 */
    void (*pfn_PS2glMultiColor4ubARB)(unsigned int, unsigned char, unsigned char, unsigned char, unsigned char); /* +0x64c */
    void (*pfn_PS2glMultiColor4ubvARB)(unsigned int, unsigned char*); /* +0x650 */
    void (*pfn_PS2glMultiColor4uiARB)(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int); /* +0x654 */
    void (*pfn_PS2glMultiColor4uivARB)(unsigned int, unsigned int*); /* +0x658 */
    void (*pfn_PS2glMultiColor4usARB)(unsigned int, unsigned short, unsigned short, unsigned short, unsigned short); /* +0x65c */
    void (*pfn_PS2glMultiColor4usvARB)(unsigned int, unsigned short*); /* +0x660 */
    void (*pfn_PS2glMultiColorMaskARB)(unsigned int, unsigned char, unsigned char, unsigned char, unsigned char); /* +0x664 */
    void (*pfn_PS2glMultiColorMaterialARB)(unsigned int, unsigned int, unsigned int); /* +0x668 */
    void (*pfn_PS2glMultiColorPointerARB)(unsigned int, int, unsigned int, int, void*); /* +0x66c */
};

struct tagListNode {
    tagListNode* pNext; /* +0x0 */
    unsigned int nIndex; /* +0x4 */
    int iSize; /* +0x8 */
    int apData[1]; /* +0xc */
};

struct anon_17 {
    unsigned long FBP : 9; /* bit 0, byte +0x0 */
    unsigned long pad09 : 7; /* bit 9, byte +0x0 */
    unsigned long FBW : 6; /* bit 16, byte +0x0 */
    unsigned long pad22 : 2; /* bit 22, byte +0x0 */
    unsigned long PSM : 6; /* bit 24, byte +0x0 */
    unsigned long pad30 : 2; /* bit 30, byte +0x0 */
    unsigned long FBMSK : 32; /* bit 32, byte +0x0 */
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

struct anon_18 {
    unsigned int ID; /* +0x0 */
    unsigned int IDMSK; /* +0x4 */
};

struct anon_20 {
    float S; /* +0x0 */
    float T; /* +0x4 */
};

struct anon_22 {
    unsigned short ATE : 1; /* bit 0, byte +0x0 */
    unsigned short ATST : 3; /* bit 1, byte +0x0 */
    unsigned short AREF : 8; /* bit 4, byte +0x0 */
    unsigned short AFAIL : 2; /* bit 12, byte +0x0 */
    unsigned short DATE : 1; /* bit 14, byte +0x0 */
    unsigned short DATM : 1; /* bit 15, byte +0x0 */
    unsigned char ZTE : 1; /* bit 16, byte +0x2 */
    unsigned char ZTST : 2; /* bit 17, byte +0x2 */
    unsigned char pad19 : 5; /* bit 19, byte +0x2 */
    unsigned char _extractor_padding_00[4];
};

struct anon_23 {
    unsigned int ID; /* +0x0 */
    unsigned int IDMSK; /* +0x4 */
};

struct anon_24 {
    unsigned long U : 14; /* bit 0, byte +0x0 */
    unsigned long pad14 : 2; /* bit 14, byte +0x0 */
    unsigned long V : 14; /* bit 16, byte +0x0 */
    unsigned long pad30 : 34; /* bit 30, byte +0x0 */
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

struct anon_26 {
    unsigned long CLAMP : 1; /* bit 0, byte +0x0 */
    unsigned long pad01 : 63; /* bit 1, byte +0x0 */
};

struct tagGLlistpool {
    unsigned int nFreeIndex; /* +0x0 */
    tagListNodeSingle aSingleIndex[64]; /* +0x4 */
    tagListNode* pFirstNode; /* +0x204 */
    tagListNode* pLastNode; /* +0x208 */
};

union anon_27 {
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

struct anon_28 {
    unsigned char PRIM_Modified : 1; /* bit 0, byte +0x0 */
    unsigned char RGBAQ_Modified : 1; /* bit 1, byte +0x0 */
    unsigned char ST_Modified : 1; /* bit 2, byte +0x0 */
    unsigned char UV_Modified : 1; /* bit 3, byte +0x0 */
    unsigned char XYZF2_Modified : 1; /* bit 4, byte +0x0 */
    unsigned char XYZ2_Modified : 1; /* bit 5, byte +0x0 */
    unsigned char TEX0_1_Modified : 1; /* bit 6, byte +0x0 */
    unsigned char TEX0_2_Modified : 1; /* bit 7, byte +0x0 */
    unsigned char CLAMP_1_Modified : 1; /* bit 8, byte +0x0 */
    unsigned char CLAMP_2_Modified : 1; /* bit 9, byte +0x0 */
    unsigned char FOG_Modified : 1; /* bit 10, byte +0x0 */
    unsigned char XYZF3_Modified : 1; /* bit 11, byte +0x0 */
    unsigned char XYZ3_Modified : 1; /* bit 12, byte +0x0 */
    unsigned char TEX1_1_Modified : 1; /* bit 13, byte +0x0 */
    unsigned char TEX1_2_Modified : 1; /* bit 14, byte +0x0 */
    unsigned char TEX2_1_Modified : 1; /* bit 15, byte +0x0 */
    unsigned char TEX2_2_Modified : 1; /* bit 16, byte +0x0 */
    unsigned char XYOFFSET_1_Modified : 1; /* bit 17, byte +0x0 */
    unsigned char XYOFFSET_2_Modified : 1; /* bit 18, byte +0x0 */
    unsigned char PRMODECONT_Modified : 1; /* bit 19, byte +0x0 */
    unsigned char PRMODE_Modified : 1; /* bit 20, byte +0x0 */
    unsigned char TEXCLUT_Modified : 1; /* bit 21, byte +0x0 */
    unsigned char SCANMSK_Modified : 1; /* bit 22, byte +0x0 */
    unsigned char MIPTBP1_1_Modified : 1; /* bit 23, byte +0x0 */
    unsigned char MIPTBP1_2_Modified : 1; /* bit 24, byte +0x0 */
    unsigned char MIPTBP2_1_Modified : 1; /* bit 25, byte +0x0 */
    unsigned char MIPTBP2_2_Modified : 1; /* bit 26, byte +0x0 */
    unsigned char TEXA_Modified : 1; /* bit 27, byte +0x0 */
    unsigned char FOGCOL_Modified : 1; /* bit 28, byte +0x0 */
    unsigned char TEXFLUSH_Modified : 1; /* bit 29, byte +0x0 */
    unsigned char SCISSOR_1_Modified : 1; /* bit 30, byte +0x0 */
    unsigned char SCISSOR_2_Modified : 1; /* bit 31, byte +0x0 */
    unsigned char ALPHA_1_Modified : 1; /* bit 32, byte +0x0 */
    unsigned char ALPHA_2_Modified : 1; /* bit 33, byte +0x0 */
    unsigned char DIMX_Modified : 1; /* bit 34, byte +0x0 */
    unsigned char DTHE_Modified : 1; /* bit 35, byte +0x0 */
    unsigned char COLCLAMP_Modified : 1; /* bit 36, byte +0x0 */
    unsigned char TEST_1_Modified : 1; /* bit 37, byte +0x0 */
    unsigned char TEST_2_Modified : 1; /* bit 38, byte +0x0 */
    unsigned char PABE_Modified : 1; /* bit 39, byte +0x0 */
    unsigned char FBA_1_Modified : 1; /* bit 40, byte +0x0 */
    unsigned char FBA_2_Modified : 1; /* bit 41, byte +0x0 */
    unsigned char FRAME_1_Modified : 1; /* bit 42, byte +0x0 */
    unsigned char FRAME_2_Modified : 1; /* bit 43, byte +0x0 */
    unsigned char ZBUF_1_Modified : 1; /* bit 44, byte +0x0 */
    unsigned char ZBUF_2_Modified : 1; /* bit 45, byte +0x0 */
    unsigned char BITBLTBUF_Modified : 1; /* bit 46, byte +0x0 */
    unsigned char TRXPOS_Modified : 1; /* bit 47, byte +0x0 */
    unsigned char TRXREG_Modified : 1; /* bit 48, byte +0x0 */
    unsigned char TRXDIR_Modified : 1; /* bit 49, byte +0x0 */
    unsigned char HWREG_Modified : 1; /* bit 50, byte +0x0 */
    unsigned char SIGNAL_Modified : 1; /* bit 51, byte +0x0 */
    unsigned char FINISH_Modified : 1; /* bit 52, byte +0x0 */
    unsigned char LABEL_Modified : 1; /* bit 53, byte +0x6 */
    unsigned char _extractor_padding_00[1];
};

struct anon_29 {
    unsigned long OFX : 16; /* bit 0, byte +0x0 */
    unsigned long pad16 : 16; /* bit 16, byte +0x0 */
    unsigned long OFY : 16; /* bit 32, byte +0x0 */
    unsigned long pad48 : 16; /* bit 48, byte +0x0 */
};

struct anon_30 {
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
    anon_10* pCurParamBegin; /* +0x5ce8 */
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
    anon_7* pGifTagFan; /* +0x6bf8 */
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
    int* pnColorMatMasks; /* +0x6c24 */
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
    anon_7* pGifTagBuf0; /* +0x6c5c */
    anon_7* pGifTagBuf1; /* +0x6c60 */
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

struct anon_33 {
    unsigned long X : 16; /* bit 0, byte +0x0 */
    unsigned long Y : 16; /* bit 16, byte +0x0 */
    unsigned long Z : 32; /* bit 32, byte +0x0 */
};

struct anon_34 {
    unsigned long X : 16; /* bit 0, byte +0x0 */
    unsigned long Y : 16; /* bit 16, byte +0x0 */
    unsigned long Z : 24; /* bit 32, byte +0x0 */
    unsigned long F : 8; /* bit 56, byte +0x0 */
};

struct anon_35 {
    unsigned long ZBP : 9; /* bit 0, byte +0x0 */
    unsigned long pad09 : 15; /* bit 9, byte +0x0 */
    unsigned long PSM : 4; /* bit 24, byte +0x0 */
    unsigned long pad28 : 4; /* bit 28, byte +0x0 */
    unsigned long ZMSK : 1; /* bit 32, byte +0x0 */
    unsigned long pad33 : 31; /* bit 33, byte +0x0 */
};

struct anon_36 {
    unsigned long PABE : 1; /* bit 0, byte +0x0 */
    unsigned long pad01 : 63; /* bit 1, byte +0x0 */
};

struct anon_38 {
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

struct tagstVIFCode {
    unsigned short IMMEDIATE; /* +0x0 */
    unsigned char NUM; /* +0x2 */
    unsigned char CMD; /* +0x3 */
};

struct tagsceGsReg {
    unsigned long DATA; /* +0x0 */
};

struct tagGLlistdatas {
    tagGLlistdatas* pNext; /* +0x0 */
    int apData[3]; /* +0x4 */
};

struct anon_39 {
    unsigned long pad00 : 20; /* bit 0, byte +0x0 */
    unsigned long PSM : 6; /* bit 20, byte +0x0 */
    unsigned long pad26 : 11; /* bit 26, byte +0x0 */
    unsigned long CBP : 14; /* bit 37, byte +0x0 */
    unsigned long CPSM : 4; /* bit 51, byte +0x0 */
    unsigned long CSM : 1; /* bit 55, byte +0x0 */
    unsigned long CSA : 5; /* bit 56, byte +0x0 */
    unsigned long CLD : 3; /* bit 61, byte +0x0 */
};

struct anon_40 {
    unsigned char pad00 : 3; /* bit 0, byte +0x0 */
    unsigned char IIP : 1; /* bit 3, byte +0x0 */
    unsigned char TME : 1; /* bit 4, byte +0x0 */
    unsigned char FGE : 1; /* bit 5, byte +0x0 */
    unsigned char ABE : 1; /* bit 6, byte +0x0 */
    unsigned char AA1 : 1; /* bit 7, byte +0x0 */
    unsigned char FST : 1; /* bit 8, byte +0x1 */
    unsigned char CTXT : 1; /* bit 9, byte +0x1 */
    unsigned char FIX : 1; /* bit 10, byte +0x1 */
    unsigned char pad11 : 5; /* bit 11, byte +0x1 */
    unsigned char _extractor_padding_anon40[6]; /* +0x2..0x7 */
};

struct tagGScontext {
    anon_38 PRIM; /* +0x0 */
    anon_4 RGBAQ; /* +0x8 */
    anon_20 ST; /* +0x10 */
    anon_24 UV; /* +0x18 */
    anon_34 XYZF2; /* +0x20 */
    anon_33 XYZ2; /* +0x28 */
    anon_31 TEX0_1; /* +0x30 */
    anon_31 TEX0_2; /* +0x38 */
    anon_19 CLAMP_1; /* +0x40 */
    anon_19 CLAMP_2; /* +0x48 */
    anon_11 FOG; /* +0x50 */
    anon_34 XYZF3; /* +0x58 */
    anon_33 XYZ3; /* +0x60 */
    anon_37 TEX1_1; /* +0x68 */
    anon_37 TEX1_2; /* +0x70 */
    anon_39 TEX2_1; /* +0x78 */
    anon_39 TEX2_2; /* +0x80 */
    anon_29 XYOFFSET_1; /* +0x88 */
    anon_29 XYOFFSET_2; /* +0x90 */
    anon_1 PRMODECONT; /* +0x98 */
    anon_40 PRMODE; /* +0xa0 */
    anon_6 TEXCLUT; /* +0xa8 */
    anon_8 SCANMSK; /* +0xb0 */
    anon_25 MIPTBP1_1; /* +0xb8 */
    anon_25 MIPTBP1_2; /* +0xc0 */
    anon_32 MIPTBP2_1; /* +0xc8 */
    anon_32 MIPTBP2_2; /* +0xd0 */
    anon_0 TEXA; /* +0xd8 */
    anon_14 FOGCOL; /* +0xe0 */
    tagsceGsReg TEXFLUSH; /* +0xe8 */
    anon_13 SCISSOR_1; /* +0xf0 */
    anon_13 SCISSOR_2; /* +0xf8 */
    anon_2 ALPHA_1; /* +0x100 */
    anon_2 ALPHA_2; /* +0x108 */
    anon_30 DIMX; /* +0x110 */
    anon_3 DTHE; /* +0x118 */
    anon_26 COLCLAMP; /* +0x120 */
    anon_22 TEST_1; /* +0x128 */
    anon_22 TEST_2; /* +0x130 */
    anon_36 PABE; /* +0x138 */
    anon_5 FBA_1; /* +0x140 */
    anon_5 FBA_2; /* +0x148 */
    anon_17 FRAME_1; /* +0x150 */
    anon_17 FRAME_2; /* +0x158 */
    anon_35 ZBUF_1; /* +0x160 */
    anon_35 ZBUF_2; /* +0x168 */
    anon_9 BITBLTBUF; /* +0x170 */
    anon_16 TRXPOS; /* +0x178 */
    anon_21 TRXREG; /* +0x180 */
    anon_15 TRXDIR; /* +0x188 */
    tagsceGsReg HWREG; /* +0x190 */
    anon_18 SIGNAL; /* +0x198 */
    tagsceGsReg FINISH; /* +0x1a0 */
    anon_23 LABEL; /* +0x1a8 */
    anon_28 ModFlgs; /* +0x1b0 */
    anon_28 GlobalModFlgs; /* +0x1b8 */
    anon_27 PackageBuffer[518]; /* +0x1c0 */
    int iBufCount; /* +0x2220 */
    anon_27* pqCurrent; /* +0x2224 */
    anon_7* pCurTag; /* +0x2228 */
    signed char iRegs; /* +0x222c */
};

tagGLcontext g_PS2glContext;

void PS2glFlushBuffer(int bForce);
void impPS2glLightfv(unsigned int light, unsigned int pname, float* params);
void impPS2glLightf(unsigned int light, unsigned int pname, float param);
tagPS2glApiTable g_PS2glApiTableList;
int g_pPS2glApiTable;
tagGScontext g_gsContext;
int Bug_Please_ReloadMenu_40;

/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_DataInput.c lines 1804–1924 */
/* addr: 0x001439c0  size: 624 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1804
 *   +0x0004 -> line 1813
 *   +0x0008 -> line 1804
 *   +0x000c -> line 1813
 *   +0x0010 -> line 1817
 *   +0x002c -> line 1819
 *   +0x0034 -> line 1820
 *   +0x003c -> line 1821
 *   +0x0044 -> line 1822
 *   +0x004c -> line 1824
 *   +0x0054 -> line 1825
 *   +0x0058 -> line 1827
 *   +0x0060 -> line 1831
 *   +0x0068 -> line 1832
 *   +0x0070 -> line 1833
 *   +0x0078 -> line 1835
 *   +0x0080 -> line 1836
 *   +0x008c -> line 1846
 *   +0x0090 -> line 1855
 *   +0x0094 -> line 1846
 *   +0x0098 -> line 1864
 *   +0x009c -> line 1846
 *   +0x00a0 -> line 1864
 *   +0x00a4 -> line 1846
 *   +0x00a8 -> line 1847
 *   +0x00ac -> line 1848
 *   +0x00b0 -> line 1849
 *   +0x00b4 -> line 1851
 *   +0x00b8 -> line 1855
 *   +0x00bc -> line 1852
 *   +0x00c0 -> line 1856
 *   +0x00c4 -> line 1857
 *   +0x00c8 -> line 1858
 *   +0x00cc -> line 1860
 *   +0x00d0 -> line 1864
 *   +0x00d8 -> line 1866
 *   +0x00dc -> line 1873
 *   +0x00e0 -> line 1866
 *   +0x00e4 -> line 1867
 *   +0x00ec -> line 1868
 *   +0x00f4 -> line 1869
 *   +0x00fc -> line 1870
 *   +0x0104 -> line 1871
 *   +0x010c -> line 1873
 *   +0x011c -> line 1875
 *   +0x0124 -> line 1876
 *   +0x012c -> line 1877
 *   +0x0134 -> line 1878
 *   +0x013c -> line 1879
 *   +0x0144 -> line 1880
 *   +0x0148 -> line 1881
 *   +0x0150 -> line 1884
 *   +0x0158 -> line 1885
 *   +0x0160 -> line 1886
 *   +0x0168 -> line 1887
 *   +0x0170 -> line 1888
 *   +0x0178 -> line 1889
 *   +0x0180 -> line 1891
 *   +0x0188 -> line 1892
 *   +0x0190 -> line 1893
 *   +0x0198 -> line 1894
 *   +0x01a0 -> line 1895
 *   +0x01a8 -> line 1896
 *   +0x01b0 -> line 1900
 *   +0x01b4 -> line 1922
 *   +0x01b8 -> line 1916
 *   +0x01bc -> line 1922
 *   +0x01c0 -> line 1916
 *   +0x01cc -> line 1917
 *   +0x01dc -> line 1900
 *   +0x01e0 -> line 1901
 *   +0x01e8 -> line 1902
 *   +0x01f0 -> line 1903
 *   +0x01f8 -> line 1904
 *   +0x0200 -> line 1905
 *   +0x0208 -> line 1917
 *   +0x020c -> line 1907
 *   +0x0210 -> line 1916
 *   +0x0214 -> line 1907
 *   +0x0218 -> line 1908
 *   +0x0220 -> line 1909
 *   +0x0228 -> line 1910
 *   +0x0230 -> line 1911
 *   +0x0238 -> line 1912
 *   +0x0240 -> line 1917
 *   +0x0244 -> line 1922
 *   +0x0250 -> line 1923
 *   +0x0264 -> line 1924
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void PS2glAssembleQuads(void)
{
    int I;
    int iQuadCount;
    float (*pT1_b)[4];
    float (*pT_b)[4];
    float (*pC1_b)[4];
    float (*pC_b)[4];
    float (*pT1)[4];
    float (*pT)[4];
    float (*pC1)[4];
    float (*pC)[4];
    float (*pN1)[4];
    float (*param0)[4];
    float (*pV1)[4];
    float (*pV)[4];
    /* TODO: decompile from asm/... */
}

/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_DataInput.c lines 1796–1800 */
/* addr: 0x00143c30  size: 80 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1796
 *   +0x0024 -> line 1798
 *   +0x002c -> line 1799
 *   +0x0048 -> line 1800
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void impPS2glGetClipPlane(unsigned int plane, double* equation)
{
    if ((plane < 0x3000) || (plane >= 0x3000 + g_PS2glContext.iMaxClipPlanes))
        return;
    *(quad*)equation = *(quad*)g_PS2glContext.avClipPlane[plane - 0x3000];
}

/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_DataInput.c lines 1787–1791 */
/* addr: 0x00143c80  size: 80 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1787
 *   +0x0024 -> line 1789
 *   +0x002c -> line 1790
 *   +0x0048 -> line 1791
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void impPS2glClipPlane(unsigned int plane, double* equation)
{
    if ((plane < 0x3000) || (plane >= 0x3000 + g_PS2glContext.iMaxClipPlanes))
        return;
    *(quad*)g_PS2glContext.avClipPlane[plane - 0x3000] = *(quad*)equation;
}

/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_DataInput.c lines 1780–1781 */
/* addr: 0x00143cd0  size: 20 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1780
 *   +0x000c -> line 1781
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void impPS2glMultiTexCoord4fvARB(unsigned int texture, float* v)
{
    *(quad*)g_PS2glContext.pvcurTextCoord = *(quad*)v;
}

/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_DataInput.c lines 1774–1776 */
/* addr: 0x00143cf0  size: 180 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1774
 *   +0x0020 -> line 1775
 *   +0x0094 -> line 1776
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void impPS2glMultiTexCoord4dvARB(unsigned int texture, double* v)
{
    float s, t, r, q;
    q = (float)v[3]; r = (float)v[2]; t = (float)v[1]; s = (float)v[0]; g_PS2glContext.vacurTexCoords[texture][0] = s; g_PS2glContext.vacurTexCoords[texture][1] = t; g_PS2glContext.vacurTexCoords[texture][2] = r; g_PS2glContext.vacurTexCoords[texture][3] = q;
}

/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_DataInput.c lines 1769–1771 */
/* addr: 0x00143db0  size: 128 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1769
 *   +0x0078 -> line 1771
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void impPS2glMultiTexCoord4ivARB(unsigned int texture, int* v)
{
    float s, t, r, q;
    q = (float)v[3] / 2147483648.0f; r = (float)v[2] / 2147483648.0f; t = (float)v[1] / 2147483648.0f; s = (float)v[0] / 2147483648.0f; g_PS2glContext.vacurTexCoords[texture][0] = s; g_PS2glContext.vacurTexCoords[texture][1] = t; g_PS2glContext.vacurTexCoords[texture][2] = r; g_PS2glContext.vacurTexCoords[texture][3] = q;
}

/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_DataInput.c lines 1763–1765 */
/* addr: 0x00143e30  size: 152 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1763
 *   +0x0090 -> line 1765
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void impPS2glMultiTexCoord4svARB(unsigned int texture, short* v)
{
    float s, t, r, q;
    q = (float)v[3] / 32767.0f; r = (float)v[2] / 32767.0f; t = (float)v[1] / 32767.0f; s = (float)v[0] / 32767.0f; g_PS2glContext.vacurTexCoords[texture][0] = s; g_PS2glContext.vacurTexCoords[texture][1] = t; g_PS2glContext.vacurTexCoords[texture][2] = r; g_PS2glContext.vacurTexCoords[texture][3] = q;
}

/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_DataInput.c lines 1755–1759 */
/* addr: 0x00143ed0  size: 72 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1755
 *   +0x0004 -> line 1756
 *   +0x0008 -> line 1755
 *   +0x000c -> line 1756
 *   +0x0010 -> line 1755
 *   +0x0018 -> line 1756
 *   +0x001c -> line 1757
 *   +0x0020 -> line 1755
 *   +0x0024 -> line 1757
 *   +0x0028 -> line 1756
 *   +0x002c -> line 1757
 *   +0x0034 -> line 1758
 *   +0x0040 -> line 1759
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void impPS2glMultiTexCoord4fARB(unsigned int texture, float s, float t, float r, float q)
{
    g_PS2glContext.vacurTexCoords[texture][0] = s;
    g_PS2glContext.vacurTexCoords[texture][1] = t;
    g_PS2glContext.vacurTexCoords[texture][2] = r;
    g_PS2glContext.vacurTexCoords[texture][3] = q;
}

/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_DataInput.c lines 1749–1751 */
/* addr: 0x00143f20  size: 168 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1749
 *   +0x0028 -> line 1750
 *   +0x008c -> line 1751
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void impPS2glMultiTexCoord4dARB(unsigned int texture, double s, double t, double r, double q)
{
    g_PS2glContext.vacurTexCoords[texture][0] = (float)s; g_PS2glContext.vacurTexCoords[texture][1] = (float)t; g_PS2glContext.vacurTexCoords[texture][2] = (float)r; g_PS2glContext.vacurTexCoords[texture][3] = (float)q;
}

/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_DataInput.c lines 1744–1746 */
/* addr: 0x00143fd0  size: 136 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1744
 *   +0x0080 -> line 1746
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void impPS2glMultiTexCoord4iARB(unsigned int texture, int s, int t, int r, int q)
{
    g_PS2glContext.vacurTexCoords[texture][0] = (float)s / 2147483648.0f; g_PS2glContext.vacurTexCoords[texture][1] = (float)t / 2147483648.0f; g_PS2glContext.vacurTexCoords[texture][2] = (float)r / 2147483648.0f; g_PS2glContext.vacurTexCoords[texture][3] = (float)q / 2147483648.0f;
}

/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_DataInput.c lines 1738–1740 */
/* addr: 0x00144060  size: 136 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1738
 *   +0x0080 -> line 1740
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void impPS2glMultiTexCoord4sARB(unsigned int texture, short s, short t, short r, short q)
{
    g_PS2glContext.vacurTexCoords[texture][0] = (float)s / 32767.0f; g_PS2glContext.vacurTexCoords[texture][1] = (float)t / 32767.0f; g_PS2glContext.vacurTexCoords[texture][2] = (float)r / 32767.0f; g_PS2glContext.vacurTexCoords[texture][3] = (float)q / 32767.0f;
}

/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_DataInput.c lines 1732–1733 */
/* addr: 0x001440f0  size: 68 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1732
 *   +0x003c -> line 1733
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void impPS2glMultiTexCoord3fvARB(unsigned int texture, float* v)
{
    float s, t, r;
    r = v[2]; t = v[1]; s = v[0]; g_PS2glContext.vacurTexCoords[texture][0] = s; g_PS2glContext.vacurTexCoords[texture][1] = t; g_PS2glContext.vacurTexCoords[texture][2] = r;
}

/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_DataInput.c lines 1726–1728 */
/* addr: 0x00144140  size: 144 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1726
 *   +0x001c -> line 1727
 *   +0x0074 -> line 1728
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void impPS2glMultiTexCoord3dvARB(unsigned int texture, double* v)
{
    float s, t, r;
    r = (float)v[2]; t = (float)v[1]; s = (float)v[0]; g_PS2glContext.vacurTexCoords[texture][0] = s; g_PS2glContext.vacurTexCoords[texture][1] = t; g_PS2glContext.vacurTexCoords[texture][2] = r;
}

/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_DataInput.c lines 1722–1723 */
/* addr: 0x001441d0  size: 100 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1722
 *   +0x005c -> line 1723
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void impPS2glMultiTexCoord3ivARB(unsigned int texture, int* v)
{
    float s, t, r;
    r = (float)v[2] / 2147483648.0f; t = (float)v[1] / 2147483648.0f; s = (float)v[0] / 2147483648.0f; g_PS2glContext.vacurTexCoords[texture][0] = s; g_PS2glContext.vacurTexCoords[texture][1] = t; g_PS2glContext.vacurTexCoords[texture][2] = r;
}

/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_DataInput.c lines 1717–1718 */
/* addr: 0x00144240  size: 124 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1717
 *   +0x0074 -> line 1718
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void impPS2glMultiTexCoord3svARB(unsigned int texture, short* v)
{
    float s, t, r;
    r = (float)v[2] / 32767.0f; t = (float)v[1] / 32767.0f; s = (float)v[0] / 32767.0f; g_PS2glContext.vacurTexCoords[texture][0] = s; g_PS2glContext.vacurTexCoords[texture][1] = t; g_PS2glContext.vacurTexCoords[texture][2] = r;
}

/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_DataInput.c lines 1710–1713 */
/* addr: 0x001442c0  size: 56 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1710
 *   +0x0004 -> line 1711
 *   +0x0008 -> line 1710
 *   +0x000c -> line 1711
 *   +0x0010 -> line 1710
 *   +0x0018 -> line 1711
 *   +0x001c -> line 1712
 *   +0x0020 -> line 1710
 *   +0x0024 -> line 1712
 *   +0x0028 -> line 1711
 *   +0x002c -> line 1712
 *   +0x0030 -> line 1713
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void impPS2glMultiTexCoord3fARB(unsigned int texture, float s, float t, float r)
{
    g_PS2glContext.vacurTexCoords[texture][0] = s;
    g_PS2glContext.vacurTexCoords[texture][1] = t;
    g_PS2glContext.vacurTexCoords[texture][2] = r;
}

/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_DataInput.c lines 1704–1706 */
/* addr: 0x00144300  size: 132 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1704
 *   +0x0020 -> line 1705
 *   +0x006c -> line 1706
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void impPS2glMultiTexCoord3dARB(unsigned int texture, double s, double t, double r)
{
    g_PS2glContext.vacurTexCoords[texture][0] = (float)s; g_PS2glContext.vacurTexCoords[texture][1] = (float)t; g_PS2glContext.vacurTexCoords[texture][2] = (float)r;
}

/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_DataInput.c lines 1700–1701 */
/* addr: 0x00144390  size: 104 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1700
 *   +0x0060 -> line 1701
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void impPS2glMultiTexCoord3iARB(unsigned int texture, int s, int t, int r)
{
    g_PS2glContext.vacurTexCoords[texture][0] = (float)s / 2147483648.0f; g_PS2glContext.vacurTexCoords[texture][1] = (float)t / 2147483648.0f; g_PS2glContext.vacurTexCoords[texture][2] = (float)r / 2147483648.0f;
}

/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_DataInput.c lines 1695–1696 */
/* addr: 0x00144400  size: 108 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1695
 *   +0x0064 -> line 1696
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void impPS2glMultiTexCoord3sARB(unsigned int texture, short s, short t, short r)
{
    g_PS2glContext.vacurTexCoords[texture][0] = (float)s / 32767.0f; g_PS2glContext.vacurTexCoords[texture][1] = (float)t / 32767.0f; g_PS2glContext.vacurTexCoords[texture][2] = (float)r / 32767.0f;
}

/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_DataInput.c lines 1689–1690 */
/* addr: 0x00144470  size: 48 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1689
 *   +0x0028 -> line 1690
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void impPS2glMultiTexCoord2fvARB(unsigned int texture, float* v)
{
    float t = v[1], s = v[0]; g_PS2glContext.vacurTexCoords[texture][0] = s; g_PS2glContext.vacurTexCoords[texture][1] = t;
}

/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_DataInput.c lines 1683–1685 */
/* addr: 0x001444a0  size: 108 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1683
 *   +0x0018 -> line 1684
 *   +0x0054 -> line 1685
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void impPS2glMultiTexCoord2dvARB(unsigned int texture, double* v)
{
    float s, t;
    t = (float)v[1]; s = (float)v[0]; g_PS2glContext.vacurTexCoords[texture][0] = s; g_PS2glContext.vacurTexCoords[texture][1] = t;
}

/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_DataInput.c lines 1679–1680 */
/* addr: 0x00144510  size: 72 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1679
 *   +0x0040 -> line 1680
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void impPS2glMultiTexCoord2ivARB(unsigned int texture, int* v)
{
    float s, t;
    t = (float)v[1] / 2147483648.0f; s = (float)v[0] / 2147483648.0f; g_PS2glContext.vacurTexCoords[texture][0] = s; g_PS2glContext.vacurTexCoords[texture][1] = t;
}

/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_DataInput.c lines 1674–1675 */
/* addr: 0x00144560  size: 88 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1674
 *   +0x0050 -> line 1675
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void impPS2glMultiTexCoord2svARB(unsigned int texture, short* v)
{
    float s, t;
    t = (float)v[1] / 32767.0f; s = (float)v[0] / 32767.0f; g_PS2glContext.vacurTexCoords[texture][0] = s; g_PS2glContext.vacurTexCoords[texture][1] = t;
}

/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_DataInput.c lines 1668–1670 */
/* addr: 0x001445c0  size: 40 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1668
 *   +0x0004 -> line 1669
 *   +0x0008 -> line 1668
 *   +0x000c -> line 1669
 *   +0x0010 -> line 1668
 *   +0x0014 -> line 1669
 *   +0x0018 -> line 1668
 *   +0x0020 -> line 1670
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void impPS2glMultiTexCoord2fARB(unsigned int texture, float s, float t)
{
    g_PS2glContext.vacurTexCoords[texture][0] = s;
    g_PS2glContext.vacurTexCoords[texture][1] = t;
}

/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_DataInput.c lines 1662–1664 */
/* addr: 0x001445f0  size: 96 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1662
 *   +0x0018 -> line 1663
 *   +0x004c -> line 1664
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void impPS2glMultiTexCoord2dARB(unsigned int texture, double s, double t)
{
    g_PS2glContext.vacurTexCoords[texture][0] = (float)s; g_PS2glContext.vacurTexCoords[texture][1] = (float)t;
}

/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_DataInput.c lines 1658–1659 */
/* addr: 0x00144650  size: 76 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1658
 *   +0x0044 -> line 1659
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void impPS2glMultiTexCoord2iARB(unsigned int texture, int s, int t)
{
    g_PS2glContext.vacurTexCoords[texture][0] = (float)s / 2147483648.0f; g_PS2glContext.vacurTexCoords[texture][1] = (float)t / 2147483648.0f;
}

/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_DataInput.c lines 1653–1654 */
/* addr: 0x001446a0  size: 76 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1653
 *   +0x0044 -> line 1654
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void impPS2glMultiTexCoord2sARB(unsigned int texture, short s, short t)
{
    g_PS2glContext.vacurTexCoords[texture][0] = (float)s / 32767.0f; g_PS2glContext.vacurTexCoords[texture][1] = (float)t / 32767.0f;
}

/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_DataInput.c lines 1647–1648 */
/* addr: 0x001446f0  size: 44 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1647
 *   +0x0024 -> line 1648
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void impPS2glMultiTexCoord1fvARB(unsigned int texture, float* v)
{
    g_PS2glContext.vacurTexCoords[texture][0] = v[0]; g_PS2glContext.vacurTexCoords[texture][1] = 0.0f;
}

/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_DataInput.c lines 1641–1643 */
/* addr: 0x00144720  size: 76 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1641
 *   +0x0010 -> line 1642
 *   +0x003c -> line 1643
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void impPS2glMultiTexCoord1dvARB(unsigned int texture, double* v)
{
    g_PS2glContext.vacurTexCoords[texture][0] = (float)v[0]; g_PS2glContext.vacurTexCoords[texture][1] = 0.0f;
}

/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_DataInput.c lines 1637–1638 */
/* addr: 0x00144770  size: 60 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1637
 *   +0x0034 -> line 1638
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void impPS2glMultiTexCoord1ivARB(unsigned int texture, int* v)
{
    g_PS2glContext.vacurTexCoords[texture][0] = (float)v[0] / 2147483648.0f; g_PS2glContext.vacurTexCoords[texture][1] = 0.0f;
}

/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_DataInput.c lines 1632–1633 */
/* addr: 0x001447b0  size: 68 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1632
 *   +0x003c -> line 1633
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void impPS2glMultiTexCoord1svARB(unsigned int texture, short* v)
{
    g_PS2glContext.vacurTexCoords[texture][0] = (float)v[0] / 32767.0f; g_PS2glContext.vacurTexCoords[texture][1] = 0.0f;
}

/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_DataInput.c lines 1626–1628 */
/* addr: 0x00144800  size: 40 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1626
 *   +0x0004 -> line 1627
 *   +0x0008 -> line 1626
 *   +0x000c -> line 1627
 *   +0x0010 -> line 1626
 *   +0x0014 -> line 1627
 *   +0x0018 -> line 1626
 *   +0x0020 -> line 1628
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void impPS2glMultiTexCoord1fARB(unsigned int texture, float s)
{
    g_PS2glContext.vacurTexCoords[texture][0] = s;
    g_PS2glContext.vacurTexCoords[texture][1] = 0.0f;
}

/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_DataInput.c lines 1620–1622 */
/* addr: 0x00144830  size: 76 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1620
 *   +0x0010 -> line 1621
 *   +0x003c -> line 1622
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void impPS2glMultiTexCoord1dARB(unsigned int texture, double s)
{
    g_PS2glContext.vacurTexCoords[texture][0] = (float)s; g_PS2glContext.vacurTexCoords[texture][1] = 0.0f;
}

/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_DataInput.c lines 1616–1617 */
/* addr: 0x00144880  size: 60 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1616
 *   +0x0034 -> line 1617
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void impPS2glMultiTexCoord1iARB(unsigned int texture, int s)
{
    g_PS2glContext.vacurTexCoords[texture][0] = (float)s / 2147483648.0f; g_PS2glContext.vacurTexCoords[texture][1] = 0.0f;
}

/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_DataInput.c lines 1611–1612 */
/* addr: 0x001448c0  size: 64 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1611
 *   +0x0038 -> line 1612
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void impPS2glMultiTexCoord1sARB(unsigned int texture, short s)
{
    g_PS2glContext.vacurTexCoords[texture][0] = (float)s / 32767.0f; g_PS2glContext.vacurTexCoords[texture][1] = 0.0f;
}

/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_DataInput.c lines 1605–1606 */
/* addr: 0x00144900  size: 20 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1605
 *   +0x000c -> line 1606
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void impPS2glTexCoord4fv(float* v)
{
    *(quad*)g_PS2glContext.pvcurTextCoord = *(quad*)v;
}

/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_DataInput.c lines 1599–1601 */
/* addr: 0x00144920  size: 132 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1599
 *   +0x001c -> line 1600
 *   +0x0068 -> line 1601
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void impPS2glTexCoord4dv(double* v)
{
    float s, t, r, q;
    q = (float)v[3]; r = (float)v[2]; t = (float)v[1]; s = (float)v[0]; g_PS2glContext.vacurTexCoords[0][0] = s; g_PS2glContext.vacurTexCoords[0][1] = t; g_PS2glContext.vacurTexCoords[0][2] = r; g_PS2glContext.vacurTexCoords[0][3] = q;
}

/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_DataInput.c lines 1594–1596 */
/* addr: 0x001449b0  size: 92 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1594
 *   +0x0054 -> line 1596
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void impPS2glTexCoord4iv(int* v)
{
    float s, t, r, q;
    q = (float)v[3] / 2147483648.0f; r = (float)v[2] / 2147483648.0f; t = (float)v[1] / 2147483648.0f; s = (float)v[0] / 2147483648.0f; g_PS2glContext.vacurTexCoords[0][0] = s; g_PS2glContext.vacurTexCoords[0][1] = t; g_PS2glContext.vacurTexCoords[0][2] = r; g_PS2glContext.vacurTexCoords[0][3] = q;
}

/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_DataInput.c lines 1588–1590 */
/* addr: 0x00144a10  size: 116 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1588
 *   +0x006c -> line 1590
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void impPS2glTexCoord4sv(short* v)
{
    float s, t, r, q;
    q = (float)v[3] / 32767.0f; r = (float)v[2] / 32767.0f; t = (float)v[1] / 32767.0f; s = (float)v[0] / 32767.0f; g_PS2glContext.vacurTexCoords[0][0] = s; g_PS2glContext.vacurTexCoords[0][1] = t; g_PS2glContext.vacurTexCoords[0][2] = r; g_PS2glContext.vacurTexCoords[0][3] = q;
}

/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_DataInput.c lines 1567–1584 */
/* addr: 0x00144a90  size: 36 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1567
 *   +0x0008 -> line 1568
 *   +0x0010 -> line 1569
 *   +0x0018 -> line 1570
 *   +0x001c -> line 1584
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void impPS2glTexCoord4f(float s, float t, float r, float q)
{
    g_PS2glContext.vacurTexCoords[0][0] = s;
    g_PS2glContext.vacurTexCoords[0][1] = t;
    g_PS2glContext.vacurTexCoords[0][2] = r;
    g_PS2glContext.vacurTexCoords[0][3] = q;
}

/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_DataInput.c lines 1559–1561 */
/* addr: 0x00144ac0  size: 116 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1559
 *   +0x001c -> line 1560
 *   +0x005c -> line 1561
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void impPS2glTexCoord4d(double s, double t, double r, double q)
{
    g_PS2glContext.vacurTexCoords[0][0] = (float)s; g_PS2glContext.vacurTexCoords[0][1] = (float)t; g_PS2glContext.vacurTexCoords[0][2] = (float)r; g_PS2glContext.vacurTexCoords[0][3] = (float)q;
}

/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_DataInput.c lines 1554–1556 */
/* addr: 0x00144b40  size: 92 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1554
 *   +0x0054 -> line 1556
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void impPS2glTexCoord4i(int s, int t, int r, int q)
{
    g_PS2glContext.vacurTexCoords[0][0] = (float)s / 2147483648.0f; g_PS2glContext.vacurTexCoords[0][1] = (float)t / 2147483648.0f; g_PS2glContext.vacurTexCoords[0][2] = (float)r / 2147483648.0f; g_PS2glContext.vacurTexCoords[0][3] = (float)q / 2147483648.0f;
}

/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_DataInput.c lines 1548–1550 */
/* addr: 0x00144ba0  size: 100 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1548
 *   +0x005c -> line 1550
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void impPS2glTexCoord4s(short s, short t, short r, short q)
{
    g_PS2glContext.vacurTexCoords[0][0] = (float)s / 32767.0f; g_PS2glContext.vacurTexCoords[0][1] = (float)t / 32767.0f; g_PS2glContext.vacurTexCoords[0][2] = (float)r / 32767.0f; g_PS2glContext.vacurTexCoords[0][3] = (float)q / 32767.0f;
}

/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_DataInput.c lines 1542–1543 */
/* addr: 0x00144c10  size: 40 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1542
 *   +0x0020 -> line 1543
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void impPS2glTexCoord3fv(float* v)
{
    float s, t, r;
    r = v[2]; t = v[1]; s = v[0]; g_PS2glContext.vacurTexCoords[0][0] = s; g_PS2glContext.vacurTexCoords[0][1] = t; g_PS2glContext.vacurTexCoords[0][2] = r;
}

/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_DataInput.c lines 1536–1538 */
/* addr: 0x00144c40  size: 104 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1536
 *   +0x0018 -> line 1537
 *   +0x0050 -> line 1538
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void impPS2glTexCoord3dv(double* v)
{
    float s, t, r;
    r = (float)v[2]; t = (float)v[1]; s = (float)v[0]; g_PS2glContext.vacurTexCoords[0][0] = s; g_PS2glContext.vacurTexCoords[0][1] = t; g_PS2glContext.vacurTexCoords[0][2] = r;
}

/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_DataInput.c lines 1532–1533 */
/* addr: 0x00144cb0  size: 76 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1532
 *   +0x0044 -> line 1533
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void impPS2glTexCoord3iv(int* v)
{
    float s, t, r;
    r = (float)v[2] / 2147483648.0f; t = (float)v[1] / 2147483648.0f; s = (float)v[0] / 2147483648.0f; g_PS2glContext.vacurTexCoords[0][0] = s; g_PS2glContext.vacurTexCoords[0][1] = t; g_PS2glContext.vacurTexCoords[0][2] = r;
}

/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_DataInput.c lines 1527–1528 */
/* addr: 0x00144d00  size: 92 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1527
 *   +0x0054 -> line 1528
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void impPS2glTexCoord3sv(short* v)
{
    float s, t, r;
    r = (float)v[2] / 32767.0f; t = (float)v[1] / 32767.0f; s = (float)v[0] / 32767.0f; g_PS2glContext.vacurTexCoords[0][0] = s; g_PS2glContext.vacurTexCoords[0][1] = t; g_PS2glContext.vacurTexCoords[0][2] = r;
}

/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_DataInput.c lines 1509–1523 */
/* addr: 0x00144d60  size: 28 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1509
 *   +0x0008 -> line 1510
 *   +0x0010 -> line 1511
 *   +0x0014 -> line 1523
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void impPS2glTexCoord3f(float s, float t, float r)
{
    g_PS2glContext.vacurTexCoords[0][0] = s;
    g_PS2glContext.vacurTexCoords[0][1] = t;
    g_PS2glContext.vacurTexCoords[0][2] = r;
}

/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_DataInput.c lines 1501–1503 */
/* addr: 0x00144d80  size: 88 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1501
 *   +0x0014 -> line 1502
 *   +0x0044 -> line 1503
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void impPS2glTexCoord3d(double s, double t, double r)
{
    g_PS2glContext.vacurTexCoords[0][0] = (float)s; g_PS2glContext.vacurTexCoords[0][1] = (float)t; g_PS2glContext.vacurTexCoords[0][2] = (float)r;
}

/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_DataInput.c lines 1497–1498 */
/* addr: 0x00144de0  size: 72 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1497
 *   +0x0040 -> line 1498
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void impPS2glTexCoord3i(int s, int t, int r)
{
    g_PS2glContext.vacurTexCoords[0][0] = (float)s / 2147483648.0f; g_PS2glContext.vacurTexCoords[0][1] = (float)t / 2147483648.0f; g_PS2glContext.vacurTexCoords[0][2] = (float)r / 2147483648.0f;
}

/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_DataInput.c lines 1492–1493 */
/* addr: 0x00144e30  size: 80 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1492
 *   +0x0048 -> line 1493
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void impPS2glTexCoord3s(short s, short t, short r)
{
    g_PS2glContext.vacurTexCoords[0][0] = (float)s / 32767.0f; g_PS2glContext.vacurTexCoords[0][1] = (float)t / 32767.0f; g_PS2glContext.vacurTexCoords[0][2] = (float)r / 32767.0f;
}

/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_DataInput.c lines 1486–1487 */
/* addr: 0x00144e80  size: 28 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1486
 *   +0x0014 -> line 1487
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void impPS2glTexCoord2fv(float* v)
{
    float t = v[1], s = v[0]; g_PS2glContext.vacurTexCoords[0][0] = s; g_PS2glContext.vacurTexCoords[0][1] = t;
}

/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_DataInput.c lines 1480–1482 */
/* addr: 0x00144ea0  size: 76 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1480
 *   +0x0014 -> line 1481
 *   +0x0038 -> line 1482
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void impPS2glTexCoord2dv(double* v)
{
    float s, t;
    t = (float)v[1]; s = (float)v[0]; g_PS2glContext.vacurTexCoords[0][0] = s; g_PS2glContext.vacurTexCoords[0][1] = t;
}

/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_DataInput.c lines 1476–1477 */
/* addr: 0x00144ef0  size: 52 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1476
 *   +0x002c -> line 1477
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void impPS2glTexCoord2iv(int* v)
{
    float s, t;
    t = (float)v[1] / 2147483648.0f; s = (float)v[0] / 2147483648.0f; g_PS2glContext.vacurTexCoords[0][0] = s; g_PS2glContext.vacurTexCoords[0][1] = t;
}

/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_DataInput.c lines 1471–1472 */
/* addr: 0x00144f30  size: 64 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1471
 *   +0x0038 -> line 1472
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void impPS2glTexCoord2sv(short* v)
{
    float s, t;
    t = (float)v[1] / 32767.0f; s = (float)v[0] / 32767.0f; g_PS2glContext.vacurTexCoords[0][0] = s; g_PS2glContext.vacurTexCoords[0][1] = t;
}

/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_DataInput.c lines 1456–1467 */
/* addr: 0x00144f70  size: 20 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1456
 *   +0x0008 -> line 1457
 *   +0x000c -> line 1467
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void impPS2glTexCoord2f(float s, float t)
{
    g_PS2glContext.vacurTexCoords[0][0] = s;
    g_PS2glContext.vacurTexCoords[0][1] = t;
}

/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_DataInput.c lines 1448–1450 */
/* addr: 0x00144f90  size: 60 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1448
 *   +0x000c -> line 1449
 *   +0x002c -> line 1450
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void impPS2glTexCoord2d(double s, double t)
{
    g_PS2glContext.vacurTexCoords[0][0] = (float)s; g_PS2glContext.vacurTexCoords[0][1] = (float)t;
}

/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_DataInput.c lines 1444–1445 */
/* addr: 0x00144fd0  size: 52 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1444
 *   +0x002c -> line 1445
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void impPS2glTexCoord2i(int s, int t)
{
    g_PS2glContext.vacurTexCoords[0][0] = (float)s / 2147483648.0f; g_PS2glContext.vacurTexCoords[0][1] = (float)t / 2147483648.0f;
}

/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_DataInput.c lines 1439–1440 */
/* addr: 0x00145010  size: 60 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1439
 *   +0x0034 -> line 1440
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void impPS2glTexCoord2s(short s, short t)
{
    g_PS2glContext.vacurTexCoords[0][0] = (float)s / 32767.0f; g_PS2glContext.vacurTexCoords[0][1] = (float)t / 32767.0f;
}

/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_DataInput.c lines 1433–1434 */
/* addr: 0x00145050  size: 24 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1433
 *   +0x0010 -> line 1434
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void impPS2glTexCoord1fv(float* v)
{
    g_PS2glContext.vacurTexCoords[0][0] = v[0]; g_PS2glContext.vacurTexCoords[0][1] = 0.0f;
}

/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_DataInput.c lines 1427–1429 */
/* addr: 0x00145070  size: 44 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1427
 *   +0x0008 -> line 1428
 *   +0x0020 -> line 1429
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void impPS2glTexCoord1dv(double* v)
{
    g_PS2glContext.vacurTexCoords[0][0] = (float)v[0]; g_PS2glContext.vacurTexCoords[0][1] = 0.0f;
}

/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_DataInput.c lines 1423–1424 */
/* addr: 0x001450a0  size: 44 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1423
 *   +0x0024 -> line 1424
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void impPS2glTexCoord1iv(int* v)
{
    g_PS2glContext.vacurTexCoords[0][0] = (float)v[0] / 2147483648.0f; g_PS2glContext.vacurTexCoords[0][1] = 0.0f;
}

/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_DataInput.c lines 1418–1419 */
/* addr: 0x001450d0  size: 48 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1418
 *   +0x0028 -> line 1419
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void impPS2glTexCoord1sv(short* v)
{
    g_PS2glContext.vacurTexCoords[0][0] = (float)v[0] / 32767.0f; g_PS2glContext.vacurTexCoords[0][1] = 0.0f;
}

/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_DataInput.c lines 1403–1414 */
/* addr: 0x00145100  size: 20 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1403
 *   +0x0008 -> line 1404
 *   +0x000c -> line 1414
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void impPS2glTexCoord1f(float s)
{
    g_PS2glContext.vacurTexCoords[0][0] = s;
    g_PS2glContext.vacurTexCoords[0][1] = 0.0f;
}

/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_DataInput.c lines 1395–1397 */
/* addr: 0x00145120  size: 44 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1395
 *   +0x0008 -> line 1396
 *   +0x0020 -> line 1397
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void impPS2glTexCoord1d(double s)
{
    g_PS2glContext.vacurTexCoords[0][0] = (float)s; g_PS2glContext.vacurTexCoords[0][1] = 0.0f;
}

/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_DataInput.c lines 1391–1392 */
/* addr: 0x00145150  size: 44 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1391
 *   +0x0024 -> line 1392
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void impPS2glTexCoord1i(int s)
{
    g_PS2glContext.vacurTexCoords[0][0] = (float)s / 2147483648.0f; g_PS2glContext.vacurTexCoords[0][1] = 0.0f;
}

/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_DataInput.c lines 1386–1387 */
/* addr: 0x00145180  size: 48 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1386
 *   +0x0028 -> line 1387
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void impPS2glTexCoord1s(short s)
{
    g_PS2glContext.vacurTexCoords[0][0] = (float)s / 32767.0f; g_PS2glContext.vacurTexCoords[0][1] = 0.0f;
}

/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_DataInput.c lines 1356–1379 */
/* addr: 0x001451b0  size: 148 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1356
 *   +0x0004 -> line 1359
 *   +0x0040 -> line 1369
 *   +0x004c -> line 1370
 *   +0x0058 -> line 1371
 *   +0x0064 -> line 1372
 *   +0x006c -> line 1374
 *   +0x0078 -> line 1375
 *   +0x0080 -> line 1378
 *   +0x0088 -> line 1379
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void impPS2glLightiv(unsigned int light, unsigned int pname, int* params)
{
    float fparams[4];

    switch (pname)
    {
    case 0x1200:
    case 0x1201:
    case 0x1202:
    case 0x1203:
    case 0x1204:
        fparams[0] = (float)params[0];
        fparams[1] = (float)params[1];
        fparams[2] = (float)params[2];
        fparams[3] = (float)params[3];
        impPS2glLightfv(light, pname, fparams);
        break;
    default:
        impPS2glLightf(light, pname, (float)params[0]);
    }
}

/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_DataInput.c lines 1278–1353 */
/* addr: 0x00145250  size: 604 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1278
 *   +0x0014 -> line 1285
 *   +0x002c -> line 1286
 *   +0x0034 -> line 1288
 *   +0x0040 -> line 1289
 *   +0x005c -> line 1291
 *   +0x006c -> line 1293
 *   +0x0078 -> line 1295
 *   +0x007c -> line 1293
 *   +0x0088 -> line 1295
 *   +0x008c -> line 1293
 *   +0x0090 -> line 1295
 *   +0x00b4 -> line 1297
 *   +0x00c8 -> line 1298
 *   +0x00dc -> line 1299
 *   +0x00f0 -> line 1307
 *   +0x00fc -> line 1310
 *   +0x0118 -> line 1311
 *   +0x011c -> line 1313
 *   +0x0124 -> line 1310
 *   +0x0128 -> line 1313
 *   +0x0138 -> line 1315
 *   +0x0140 -> line 1317
 *   +0x0154 -> line 1319
 *   +0x0170 -> line 1321
 *   +0x0178 -> line 1324
 *   +0x0188 -> line 1325
 *   +0x0190 -> line 1326
 *   +0x01a8 -> line 1327
 *   +0x01b4 -> line 1328
 *   +0x01bc -> line 1331
 *   +0x01c4 -> line 1332
 *   +0x01cc -> line 1335
 *   +0x01d0 -> line 1336
 *   +0x01d4 -> line 1335
 *   +0x01d8 -> line 1336
 *   +0x01e4 -> line 1335
 *   +0x01e8 -> line 1336
 *   +0x0208 -> line 1337
 *   +0x0210 -> line 1340
 *   +0x0218 -> line 1341
 *   +0x0220 -> line 1344
 *   +0x0228 -> line 1345
 *   +0x0230 -> line 1348
 *   +0x023c -> line 1352
 *   +0x0248 -> line 1353
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void impPS2glLightfv(unsigned int light, unsigned int pname, float* params)
{
    unsigned char bDirectionalLight;
    float (*pVector)[4];
    tag_GLlight* pLight;
    float vParams[4];
    /* TODO: decompile from asm/... */
}

/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_DataInput.c lines 1274–1274 */
/* addr: 0x001454b0  size: 12 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1274
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void impPS2glLightf(unsigned int light, unsigned int pname, float param);
void impPS2glLighti(unsigned int light, unsigned int pname, int param)
{
    impPS2glLightf(light, pname, (float)param);
}

/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_DataInput.c lines 1235–1269 */
/* addr: 0x001454c0  size: 240 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1235
 *   +0x0004 -> line 1240
 *   +0x0008 -> line 1235
 *   +0x000c -> line 1240
 *   +0x0020 -> line 1241
 *   +0x0028 -> line 1243
 *   +0x003c -> line 1244
 *   +0x0040 -> line 1243
 *   +0x0048 -> line 1244
 *   +0x0088 -> line 1248
 *   +0x0090 -> line 1252
 *   +0x009c -> line 1251
 *   +0x00a0 -> line 1252
 *   +0x00b8 -> line 1253
 *   +0x00c0 -> line 1257
 *   +0x00c8 -> line 1261
 *   +0x00d0 -> line 1264
 *   +0x00d4 -> line 1268
 *   +0x00e0 -> line 1269
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void impPS2glLightf(unsigned int light, unsigned int pname, float param)
{
    tag_GLlight* pLight;
    /* TODO: decompile from asm/... */
}

/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_DataInput.c lines 1212–1232 */
/* addr: 0x001455b0  size: 244 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1212
 *   +0x0034 -> line 1215
 *   +0x0040 -> line 1216
 *   +0x0048 -> line 1218
 *   +0x0054 -> line 1219
 *   +0x005c -> line 1221
 *   +0x0068 -> line 1222
 *   +0x0070 -> line 1225
 *   +0x0074 -> line 1226
 *   +0x0078 -> line 1225
 *   +0x0084 -> line 1226
 *   +0x0088 -> line 1225
 *   +0x00d8 -> line 1226
 *   +0x00e0 -> line 1231
 *   +0x00ec -> line 1232
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void impPS2glLightModeliv(unsigned int pname, int* params)
{
    switch (pname) {
    case 0xF00:
        g_PS2glContext.bLightModelDiffuseOnly = (params[0] != 0);
        break;
    case 0xB51:
        g_PS2glContext.bLocalViewer = (params[0] != 0);
        break;
    case 0xB52:
        g_PS2glContext.bLightModelTwoSide = (params[0] != 0);
        break;
    case 0xB53: {
        float v[4] = { 0.0f, 0.0f, 0.0f, 0.0f };
        v[0] = (float)params[0] / 2147483648.0f; v[1] = (float)params[1] / 2147483648.0f; v[2] = (float)params[2] / 2147483648.0f; v[3] = (float)params[3] / 2147483648.0f;
        *(quad*)g_PS2glContext.vAmbient = *(quad*)v;
        break;
    }
    }

    g_PS2glContext.bLightsChanged = 1;
}

/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_DataInput.c lines 1175–1189 */
/* addr: 0x00145770  size: 92 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1175
 *   +0x002c -> line 1178
 *   +0x0030 -> line 1179
 *   +0x0038 -> line 1181
 *   +0x003c -> line 1182
 *   +0x0044 -> line 1184
 *   +0x004c -> line 1188
 *   +0x0054 -> line 1189
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
#pragma auto_inline on
void impPS2glLightModeli(unsigned int pname, int param)
{
    switch (pname) {
    case 0xF00:
        g_PS2glContext.bLightModelDiffuseOnly = (param != 0);
        break;
    case 0xB51:
        g_PS2glContext.bLocalViewer = (param != 0);
        break;
    case 0xB52:
        g_PS2glContext.bLightModelTwoSide = (param != 0);
        break;
    }

    g_PS2glContext.bLightsChanged = 1;
}
#pragma auto_inline reset

/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_DataInput.c lines 1194–1207 */
/* addr: 0x001456b0  size: 184 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1194
 *   +0x0030 -> line 1199
 *   +0x0090 -> line 1200
 *   +0x0098 -> line 1202
 *   +0x00a8 -> line 1206
 *   +0x00b0 -> line 1207
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void impPS2glLightModelfv(unsigned int pname, float* params)
{
    switch (pname) {
    case 0xF00:
    case 0xB51:
    case 0xB52:
        impPS2glLightModeli(pname, (int)params[0]);
        break;
    case 0xB53:
        *(quad*)g_PS2glContext.vAmbient = *(quad*)params;
        break;
    }

    g_PS2glContext.bLightsChanged = 1;
}


/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_DataInput.c lines 1156–1170 */
/* addr: 0x001457d0  size: 172 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1156
 *   +0x0028 -> line 1159
 *   +0x0048 -> line 1160
 *   +0x0050 -> line 1162
 *   +0x0070 -> line 1163
 *   +0x0078 -> line 1165
 *   +0x009c -> line 1169
 *   +0x00a4 -> line 1170
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void impPS2glLightModelf(unsigned int pname, float param)
{
    switch (pname) {
    case 0xF00:
        g_PS2glContext.bLightModelDiffuseOnly = (param != 0.0f);
        break;
    case 0xB51:
        g_PS2glContext.bLocalViewer = (param != 0.0f);
        break;
    case 0xB52:
        g_PS2glContext.bLightModelTwoSide = (param != 0.0f);
        break;
    }

    g_PS2glContext.bLightsChanged = 1;
}

/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_DataInput.c lines 1141–1151 */
/* addr: 0x00145880  size: 76 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1141
 *   +0x0008 -> line 1145
 *   +0x0014 -> line 1146
 *   +0x0020 -> line 1147
 *   +0x002c -> line 1148
 *   +0x0034 -> line 1150
 *   +0x0040 -> line 1151
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void impPS2glMaterialfv(unsigned int face, unsigned int pname, float* params);
void impPS2glMaterialiv(unsigned int face, unsigned int pname, int* params)
{
    float fparams[4];

    fparams[0] = (float)params[0];
    fparams[1] = (float)params[1];
    fparams[2] = (float)params[2];
    fparams[3] = (float)params[3];
    impPS2glMaterialfv(face, pname, fparams);
}

/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_DataInput.c lines 1106–1138 */
/* addr: 0x001458d0  size: 300 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1106
 *   +0x0004 -> line 1110
 *   +0x0008 -> line 1106
 *   +0x0018 -> line 1110
 *   +0x0020 -> line 1112
 *   +0x0028 -> line 1113
 *   +0x0038 -> line 1114
 *   +0x0040 -> line 1117
 *   +0x0060 -> line 1119
 *   +0x00b0 -> line 1122
 *   +0x00b8 -> line 1123
 *   +0x00c4 -> line 1124
 *   +0x00d0 -> line 1125
 *   +0x00dc -> line 1126
 *   +0x00e8 -> line 1128
 *   +0x00f4 -> line 1131
 *   +0x00fc -> line 1132
 *   +0x0104 -> line 1133
 *   +0x010c -> line 1137
 *   +0x0118 -> line 1138
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void impPS2glMaterialfv(unsigned int face, unsigned int pname, float* params)
{
    tag_GLmaterial* pMaterial;

    if (face == 0x408) {
        impPS2glMaterialfv(0x404, pname, params);
        impPS2glMaterialfv(0x405, pname, params);
        return;
    }

    if (face == 0x404)
        pMaterial = &g_PS2glContext.Materials[0];
    else
        pMaterial = &g_PS2glContext.Materials[1];

    switch (pname) {
    case 0x1602: *(quad*)pMaterial->vDiffuse = *(quad*)params;
    case 0x1200: *(quad*)pMaterial->vAmbient = *(quad*)params; break;
    case 0x1201: *(quad*)pMaterial->vDiffuse = *(quad*)params; break;
    case 0x1202: *(quad*)pMaterial->vSpecular = *(quad*)params; break;
    case 0x1600: *(quad*)pMaterial->vEmission = *(quad*)params; break;
    case 0x1601:
        pMaterial->fShininess = params[0]; break;
    case 0x1603:
        pMaterial->fAmbientIndex = params[0];
        pMaterial->fDiffuseIndex = params[1];
        pMaterial->fSpecularIndex = params[2];
        break;
    }

    g_PS2glContext.bMaterialChanged = 1;
}

/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_DataInput.c lines 1102–1103 */
/* addr: 0x00145a00  size: 120 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1102
 *   +0x0070 -> line 1103
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void impPS2glMateriali(unsigned int face, unsigned int pname, int param)
{
    if (pname == 0x1601) { switch (face) { case 0x408: g_PS2glContext.Materials[0].fShininess = (float)param; case 0x405: g_PS2glContext.Materials[1].fShininess = (float)param; break; case 0x404: g_PS2glContext.Materials[0].fShininess = (float)param; break; }  g_PS2glContext.bMaterialChanged = 1; }
}

/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_DataInput.c lines 1082–1097 */
/* addr: 0x00145a80  size: 92 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1082
 *   +0x000c -> line 1084
 *   +0x0034 -> line 1087
 *   +0x0038 -> line 1089
 *   +0x003c -> line 1090
 *   +0x0044 -> line 1092
 *   +0x0048 -> line 1096
 *   +0x0054 -> line 1097
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void impPS2glMaterialf(unsigned int face, unsigned int pname, float param)
{
    if (pname == 0x1601) {
        switch (face) {
        case 0x408:
            g_PS2glContext.Materials[0].fShininess = param;
        case 0x405:
            g_PS2glContext.Materials[1].fShininess = param;
            break;
        case 0x404:
            g_PS2glContext.Materials[0].fShininess = param;
            break;
        }

        g_PS2glContext.bMaterialChanged = 1;
    }
}

/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_DataInput.c lines 1049–1077 */
/* addr: 0x00145ae0  size: 268 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1049
 *   +0x0004 -> line 1052
 *   +0x0008 -> line 1049
 *   +0x000c -> line 1050
 *   +0x0010 -> line 1052
 *   +0x0050 -> line 1055
 *   +0x0058 -> line 1056
 *   +0x005c -> line 1055
 *   +0x0068 -> line 1056
 *   +0x0074 -> line 1057
 *   +0x007c -> line 1060
 *   +0x0084 -> line 1061
 *   +0x0088 -> line 1060
 *   +0x0094 -> line 1061
 *   +0x00a0 -> line 1062
 *   +0x00a8 -> line 1065
 *   +0x00b8 -> line 1066
 *   +0x00c0 -> line 1069
 *   +0x00c8 -> line 1070
 *   +0x00cc -> line 1069
 *   +0x00d8 -> line 1070
 *   +0x00e4 -> line 1071
 *   +0x00ec -> line 1074
 *   +0x0104 -> line 1077
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void impPS2glColorMaterial(unsigned int face, unsigned int mode)
{
    g_PS2glContext.eColorMaterialFace = face;
    g_PS2glContext.eColorMaterialMode = mode;

    switch (mode)
    {
    case 0x1600:
        *g_PS2glContext.pnColorMatMasks = (*g_PS2glContext.pnColorMatMasks & 1) | 2;
        *g_PS2glContext.pnColorMatMasks = *g_PS2glContext.pnColorMatMasks | 0x20;
        break;
    case 0x1200:
        *g_PS2glContext.pnColorMatMasks = (*g_PS2glContext.pnColorMatMasks & 1) | 4;
        *g_PS2glContext.pnColorMatMasks = *g_PS2glContext.pnColorMatMasks | 0x20;
        break;
    case 0x1201:
        *g_PS2glContext.pnColorMatMasks = (*g_PS2glContext.pnColorMatMasks & 1) | 8;
        break;
    case 0x1602:
        *g_PS2glContext.pnColorMatMasks = (*g_PS2glContext.pnColorMatMasks & 1) | 0xC;
        *g_PS2glContext.pnColorMatMasks = *g_PS2glContext.pnColorMatMasks | 0x20;
        break;
    case 0x1202:
        *g_PS2glContext.pnColorMatMasks = (*g_PS2glContext.pnColorMatMasks & 1) | 0x10;
        break;
    }
}

/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_DataInput.c lines 1040–1042 */
/* addr: 0x00145bf0  size: 1508 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1040
 *   +0x0028 -> line 1041
 *   +0x05c8 -> line 1042
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void impPS2glRects(short x1, short y1, short x2, short y2)
{
    /* TODO: decompile from asm/... */
}

/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_DataInput.c lines 1035–1037 */
/* addr: 0x001461e0  size: 1508 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1035
 *   +0x0028 -> line 1036
 *   +0x05c8 -> line 1037
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void impPS2glRecti(int x1, int y1, int x2, int y2)
{
    /* TODO: decompile from asm/... */
}

/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_DataInput.c lines 1024–1032 */
/* addr: 0x001467d0  size: 1444 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1024
 *   +0x0004 -> line 1026
 *   +0x0008 -> line 1024
 *   +0x0028 -> line 1026
 *   +0x0030 -> line 1027
 *   +0x0170 -> line 1028
 *   +0x0174 -> line 1027
 *   +0x0178 -> line 1028
 *   +0x017c -> line 1027
 *   +0x0184 -> line 1028
 *   +0x02bc -> line 1029
 *   +0x02c0 -> line 1028
 *   +0x02c4 -> line 1029
 *   +0x02c8 -> line 1028
 *   +0x02d0 -> line 1029
 *   +0x0408 -> line 1030
 *   +0x040c -> line 1029
 *   +0x0410 -> line 1030
 *   +0x0414 -> line 1029
 *   +0x041c -> line 1030
 *   +0x048c -> line 1031
 *   +0x0490 -> line 1030
 *   +0x0558 -> line 1031
 *   +0x055c -> line 1030
 *   +0x0560 -> line 1031
 *   +0x0564 -> line 1030
 *   +0x0568 -> line 1031
 *   +0x0588 -> line 1032
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void impPS2glRectf(float x1, float y1, float x2, float y2)
{
    /* TODO: decompile from asm/... */
}

/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_DataInput.c lines 1019–1021 */
/* addr: 0x00146d80  size: 1524 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1019
 *   +0x0028 -> line 1020
 *   +0x05d8 -> line 1021
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void impPS2glRectd(double x1, double y1, double x2, double y2)
{
    /* TODO: decompile from asm/... */
}

/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_DataInput.c lines 1014–1016 */
/* addr: 0x00147380  size: 1488 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1014
 *   +0x0018 -> line 1015
 *   +0x05b4 -> line 1016
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void impPS2glRectsv(short* v1, short* v2)
{
    /* TODO: decompile from asm/... */
}

/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_DataInput.c lines 1009–1011 */
/* addr: 0x00147950  size: 1460 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1009
 *   +0x0018 -> line 1010
 *   +0x0598 -> line 1011
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void impPS2glRectiv(int* v1, int* v2)
{
    /* TODO: decompile from asm/... */
}

/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_DataInput.c lines 1004–1006 */
/* addr: 0x00147f10  size: 1444 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1004
 *   +0x0018 -> line 1005
 *   +0x0588 -> line 1006
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void impPS2glRectfv(float* v1, float* v2)
{
    /* TODO: decompile from asm/... */
}

/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_DataInput.c lines 999–1001 */
/* addr: 0x001484c0  size: 1500 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 999
 *   +0x0024 -> line 1000
 *   +0x05b8 -> line 1001
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void impPS2glRectdv(double* v1, double* v2)
{
    /* TODO: decompile from asm/... */
}

/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_DataInput.c lines 991–994 */
/* addr: 0x00148aa0  size: 432 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 991
 *   +0x0004 -> line 992
 *   +0x0008 -> line 991
 *   +0x001c -> line 992
 *   +0x0194 -> line 994
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void impPS2glVertex4sv(short* v)
{
    /* TODO: decompile from asm/... */
}

/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_DataInput.c lines 985–988 */
/* addr: 0x00148c50  size: 408 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 985
 *   +0x0004 -> line 986
 *   +0x0008 -> line 985
 *   +0x001c -> line 986
 *   +0x017c -> line 988
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void impPS2glVertex4iv(int* v)
{
    float x, y, z, w;
    quad* pQuad;
    w = (float)v[3]; z = (float)v[2]; y = (float)v[1]; x = (float)v[0]; if (g_PS2glContext.iBufCount >= g_PS2glContext.iBufLimit) { if (g_PS2glContext.eBeginMode == 7) PS2glAssembleQuads(); PS2glFlushBuffer(0); } (*g_PS2glContext.pVBuf)[0] = x; (*g_PS2glContext.pVBuf)[1] = y; (*g_PS2glContext.pVBuf)[2] = z; (*g_PS2glContext.pVBuf++)[3] = w; pQuad = (quad*)g_PS2glContext.pNBuf++; *pQuad = *(quad*)g_PS2glContext.vcurNormal; pQuad = (quad*)g_PS2glContext.pCBuf++; *pQuad = *(quad*)g_PS2glContext.vacurColor[0]; pQuad = (quad*)g_PS2glContext.pCBuf_b++; *pQuad = *(quad*)g_PS2glContext.vacurColor[1]; pQuad = (quad*)g_PS2glContext.pTBuf++; *pQuad = *(quad*)g_PS2glContext.vacurTexCoords[0]; pQuad = (quad*)g_PS2glContext.pTBuf_b++; *pQuad = *(quad*)g_PS2glContext.vacurTexCoords[1]; g_PS2glContext.iBufCount++;
}

/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_DataInput.c lines 947–982 */
/* addr: 0x00148df0  size: 328 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 947
 *   +0x0004 -> line 948
 *   +0x0008 -> line 947
 *   +0x0014 -> line 948
 *   +0x002c -> line 950
 *   +0x0040 -> line 951
 *   +0x0048 -> line 952
 *   +0x0054 -> line 955
 *   +0x0058 -> line 956
 *   +0x005c -> line 955
 *   +0x0060 -> line 966
 *   +0x0064 -> line 967
 *   +0x0068 -> line 969
 *   +0x006c -> line 970
 *   +0x0070 -> line 956
 *   +0x0074 -> line 966
 *   +0x0078 -> line 967
 *   +0x007c -> line 969
 *   +0x0080 -> line 970
 *   +0x0084 -> line 955
 *   +0x0094 -> line 956
 *   +0x0098 -> line 955
 *   +0x009c -> line 956
 *   +0x00b0 -> line 966
 *   +0x00b4 -> line 956
 *   +0x00b8 -> line 966
 *   +0x00cc -> line 967
 *   +0x00d0 -> line 966
 *   +0x00d4 -> line 967
 *   +0x00e8 -> line 969
 *   +0x00ec -> line 967
 *   +0x00f0 -> line 969
 *   +0x0104 -> line 970
 *   +0x0108 -> line 969
 *   +0x010c -> line 970
 *   +0x0120 -> line 981
 *   +0x0124 -> line 970
 *   +0x0128 -> line 981
 *   +0x0138 -> line 982
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void impPS2glVertex4fv(float* v)
{
    quad* pQuad;
    if (g_PS2glContext.iBufCount >= g_PS2glContext.iBufLimit)
    {
        if (g_PS2glContext.eBeginMode == 7)
            PS2glAssembleQuads();
        PS2glFlushBuffer(0);
    }
    pQuad = (quad*)g_PS2glContext.pVBuf++; *pQuad = *(quad*)v;
    pQuad = (quad*)g_PS2glContext.pNBuf++; *pQuad = *(quad*)g_PS2glContext.vcurNormal;
    pQuad = (quad*)g_PS2glContext.pCBuf++; *pQuad = *(quad*)g_PS2glContext.vacurColor[0];
    pQuad = (quad*)g_PS2glContext.pCBuf_b++; *pQuad = *(quad*)g_PS2glContext.vacurColor[1];
    pQuad = (quad*)g_PS2glContext.pTBuf++; *pQuad = *(quad*)g_PS2glContext.vacurTexCoords[0];
    pQuad = (quad*)g_PS2glContext.pTBuf_b++; *pQuad = *(quad*)g_PS2glContext.vacurTexCoords[1];
    g_PS2glContext.iBufCount++;
}

/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_DataInput.c lines 942–944 */
/* addr: 0x00148f40  size: 436 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 942
 *   +0x0020 -> line 943
 *   +0x0194 -> line 944
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void impPS2glVertex4dv(double* v)
{
    /* TODO: decompile from asm/... */
}

/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_DataInput.c lines 937–939 */
/* addr: 0x00149100  size: 412 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 937
 *   +0x0004 -> line 938
 *   +0x0008 -> line 937
 *   +0x0018 -> line 938
 *   +0x0184 -> line 939
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void impPS2glVertex3sv(short* v)
{
    float x, y, z;
    quad* pQuad;
    z = (float)v[2]; y = (float)v[1]; x = (float)v[0]; if (g_PS2glContext.iBufCount >= g_PS2glContext.iBufLimit) { if (g_PS2glContext.eBeginMode == 7) PS2glAssembleQuads(); PS2glFlushBuffer(0); } (*g_PS2glContext.pVBuf)[0] = x; (*g_PS2glContext.pVBuf)[1] = y; (*g_PS2glContext.pVBuf)[2] = z; (*g_PS2glContext.pVBuf++)[3] = 1.0f; pQuad = (quad*)g_PS2glContext.pNBuf++; *pQuad = *(quad*)g_PS2glContext.vcurNormal; pQuad = (quad*)g_PS2glContext.pCBuf++; *pQuad = *(quad*)g_PS2glContext.vacurColor[0]; pQuad = (quad*)g_PS2glContext.pCBuf_b++; *pQuad = *(quad*)g_PS2glContext.vacurColor[1]; pQuad = (quad*)g_PS2glContext.pTBuf++; *pQuad = *(quad*)g_PS2glContext.vacurTexCoords[0]; pQuad = (quad*)g_PS2glContext.pTBuf_b++; *pQuad = *(quad*)g_PS2glContext.vacurTexCoords[1]; g_PS2glContext.iBufCount++;
}

/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_DataInput.c lines 932–934 */
/* addr: 0x001492a0  size: 396 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 932
 *   +0x0004 -> line 933
 *   +0x0008 -> line 932
 *   +0x0018 -> line 933
 *   +0x0174 -> line 934
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void impPS2glVertex3iv(int* v)
{
    float x, y, z;
    quad* pQuad;
    z = (float)v[2]; y = (float)v[1]; x = (float)v[0]; if (g_PS2glContext.iBufCount >= g_PS2glContext.iBufLimit) { if (g_PS2glContext.eBeginMode == 7) PS2glAssembleQuads(); PS2glFlushBuffer(0); } (*g_PS2glContext.pVBuf)[0] = x; (*g_PS2glContext.pVBuf)[1] = y; (*g_PS2glContext.pVBuf)[2] = z; (*g_PS2glContext.pVBuf++)[3] = 1.0f; pQuad = (quad*)g_PS2glContext.pNBuf++; *pQuad = *(quad*)g_PS2glContext.vcurNormal; pQuad = (quad*)g_PS2glContext.pCBuf++; *pQuad = *(quad*)g_PS2glContext.vacurColor[0]; pQuad = (quad*)g_PS2glContext.pCBuf_b++; *pQuad = *(quad*)g_PS2glContext.vacurColor[1]; pQuad = (quad*)g_PS2glContext.pTBuf++; *pQuad = *(quad*)g_PS2glContext.vacurTexCoords[0]; pQuad = (quad*)g_PS2glContext.pTBuf_b++; *pQuad = *(quad*)g_PS2glContext.vacurTexCoords[1]; g_PS2glContext.iBufCount++;
}

/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_DataInput.c lines 927–929 */
/* addr: 0x00149430  size: 388 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 927
 *   +0x0004 -> line 928
 *   +0x0008 -> line 927
 *   +0x0018 -> line 928
 *   +0x016c -> line 929
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void impPS2glVertex3fv(float* v)
{
    float x, y, z;
    quad* pQuad;
    z = v[2]; y = v[1]; x = v[0]; if (g_PS2glContext.iBufCount >= g_PS2glContext.iBufLimit) { if (g_PS2glContext.eBeginMode == 7) PS2glAssembleQuads(); PS2glFlushBuffer(0); } (*g_PS2glContext.pVBuf)[0] = x; (*g_PS2glContext.pVBuf)[1] = y; (*g_PS2glContext.pVBuf)[2] = z; (*g_PS2glContext.pVBuf++)[3] = 1.0f; pQuad = (quad*)g_PS2glContext.pNBuf++; *pQuad = *(quad*)g_PS2glContext.vcurNormal; pQuad = (quad*)g_PS2glContext.pCBuf++; *pQuad = *(quad*)g_PS2glContext.vacurColor[0]; pQuad = (quad*)g_PS2glContext.pCBuf_b++; *pQuad = *(quad*)g_PS2glContext.vacurColor[1]; pQuad = (quad*)g_PS2glContext.pTBuf++; *pQuad = *(quad*)g_PS2glContext.vacurTexCoords[0]; pQuad = (quad*)g_PS2glContext.pTBuf_b++; *pQuad = *(quad*)g_PS2glContext.vacurTexCoords[1]; g_PS2glContext.iBufCount++;
}

/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_DataInput.c lines 922–924 */
/* addr: 0x001495c0  size: 420 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 922
 *   +0x001c -> line 923
 *   +0x0188 -> line 924
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void impPS2glVertex3dv(double* v)
{
    /* TODO: decompile from asm/... */
}

/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_DataInput.c lines 917–919 */
/* addr: 0x00149770  size: 392 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 917
 *   +0x0004 -> line 918
 *   +0x0008 -> line 917
 *   +0x0014 -> line 918
 *   +0x0174 -> line 919
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void impPS2glVertex2sv(short* v)
{
    float x, y;
    quad* pQuad;
    y = (float)v[1]; x = (float)v[0]; if (g_PS2glContext.iBufCount >= g_PS2glContext.iBufLimit) { if (g_PS2glContext.eBeginMode == 7) PS2glAssembleQuads(); PS2glFlushBuffer(0); } (*g_PS2glContext.pVBuf)[0] = x; (*g_PS2glContext.pVBuf)[1] = y; (*g_PS2glContext.pVBuf)[2] = 0.0f; (*g_PS2glContext.pVBuf++)[3] = 1.0f; pQuad = (quad*)g_PS2glContext.pNBuf++; *pQuad = *(quad*)g_PS2glContext.vcurNormal; pQuad = (quad*)g_PS2glContext.pCBuf++; *pQuad = *(quad*)g_PS2glContext.vacurColor[0]; pQuad = (quad*)g_PS2glContext.pCBuf_b++; *pQuad = *(quad*)g_PS2glContext.vacurColor[1]; pQuad = (quad*)g_PS2glContext.pTBuf++; *pQuad = *(quad*)g_PS2glContext.vacurTexCoords[0]; pQuad = (quad*)g_PS2glContext.pTBuf_b++; *pQuad = *(quad*)g_PS2glContext.vacurTexCoords[1]; g_PS2glContext.iBufCount++;
}

/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_DataInput.c lines 912–914 */
/* addr: 0x00149900  size: 380 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 912
 *   +0x0004 -> line 913
 *   +0x0008 -> line 912
 *   +0x0014 -> line 913
 *   +0x0168 -> line 914
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void impPS2glVertex2iv(int* v)
{
    float x, y;
    quad* pQuad;
    y = (float)v[1]; x = (float)v[0]; if (g_PS2glContext.iBufCount >= g_PS2glContext.iBufLimit) { if (g_PS2glContext.eBeginMode == 7) PS2glAssembleQuads(); PS2glFlushBuffer(0); } (*g_PS2glContext.pVBuf)[0] = x; (*g_PS2glContext.pVBuf)[1] = y; (*g_PS2glContext.pVBuf)[2] = 0.0f; (*g_PS2glContext.pVBuf++)[3] = 1.0f; pQuad = (quad*)g_PS2glContext.pNBuf++; *pQuad = *(quad*)g_PS2glContext.vcurNormal; pQuad = (quad*)g_PS2glContext.pCBuf++; *pQuad = *(quad*)g_PS2glContext.vacurColor[0]; pQuad = (quad*)g_PS2glContext.pCBuf_b++; *pQuad = *(quad*)g_PS2glContext.vacurColor[1]; pQuad = (quad*)g_PS2glContext.pTBuf++; *pQuad = *(quad*)g_PS2glContext.vacurTexCoords[0]; pQuad = (quad*)g_PS2glContext.pTBuf_b++; *pQuad = *(quad*)g_PS2glContext.vacurTexCoords[1]; g_PS2glContext.iBufCount++;
}

/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_DataInput.c lines 907–909 */
/* addr: 0x00149a80  size: 376 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 907
 *   +0x0004 -> line 908
 *   +0x0008 -> line 907
 *   +0x0014 -> line 908
 *   +0x0164 -> line 909
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void impPS2glVertex2fv(float* v)
{
    float x, y;
    quad* pQuad;
    y = v[1]; x = v[0]; if (g_PS2glContext.iBufCount >= g_PS2glContext.iBufLimit) { if (g_PS2glContext.eBeginMode == 7) PS2glAssembleQuads(); PS2glFlushBuffer(0); } (*g_PS2glContext.pVBuf)[0] = x; (*g_PS2glContext.pVBuf)[1] = y; (*g_PS2glContext.pVBuf)[2] = 0.0f; (*g_PS2glContext.pVBuf++)[3] = 1.0f; pQuad = (quad*)g_PS2glContext.pNBuf++; *pQuad = *(quad*)g_PS2glContext.vcurNormal; pQuad = (quad*)g_PS2glContext.pCBuf++; *pQuad = *(quad*)g_PS2glContext.vacurColor[0]; pQuad = (quad*)g_PS2glContext.pCBuf_b++; *pQuad = *(quad*)g_PS2glContext.vacurColor[1]; pQuad = (quad*)g_PS2glContext.pTBuf++; *pQuad = *(quad*)g_PS2glContext.vacurTexCoords[0]; pQuad = (quad*)g_PS2glContext.pTBuf_b++; *pQuad = *(quad*)g_PS2glContext.vacurTexCoords[1]; g_PS2glContext.iBufCount++;
}

/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_DataInput.c lines 902–904 */
/* addr: 0x00149c00  size: 400 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 902
 *   +0x0018 -> line 903
 *   +0x0178 -> line 904
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void impPS2glVertex2dv(double* v)
{
    /* TODO: decompile from asm/... */
}

/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_DataInput.c lines 897–899 */
/* addr: 0x00149d90  size: 428 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 897
 *   +0x0004 -> line 898
 *   +0x0008 -> line 897
 *   +0x0028 -> line 898
 *   +0x0190 -> line 899
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void impPS2glVertex4s(short x, short y, short z, short w)
{
    quad* pQuad;
    if (g_PS2glContext.iBufCount >= g_PS2glContext.iBufLimit) { if (g_PS2glContext.eBeginMode == 7) PS2glAssembleQuads(); PS2glFlushBuffer(0); } (*g_PS2glContext.pVBuf)[0] = (float)x; (*g_PS2glContext.pVBuf)[1] = (float)y; (*g_PS2glContext.pVBuf)[2] = (float)z; (*g_PS2glContext.pVBuf++)[3] = (float)w; pQuad = (quad*)g_PS2glContext.pNBuf++; *pQuad = *(quad*)g_PS2glContext.vcurNormal; pQuad = (quad*)g_PS2glContext.pCBuf++; *pQuad = *(quad*)g_PS2glContext.vacurColor[0]; pQuad = (quad*)g_PS2glContext.pCBuf_b++; *pQuad = *(quad*)g_PS2glContext.vacurColor[1]; pQuad = (quad*)g_PS2glContext.pTBuf++; *pQuad = *(quad*)g_PS2glContext.vacurTexCoords[0]; pQuad = (quad*)g_PS2glContext.pTBuf_b++; *pQuad = *(quad*)g_PS2glContext.vacurTexCoords[1]; g_PS2glContext.iBufCount++;
}

/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_DataInput.c lines 892–894 */
/* addr: 0x00149f40  size: 428 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 892
 *   +0x0004 -> line 893
 *   +0x0008 -> line 892
 *   +0x0028 -> line 893
 *   +0x0190 -> line 894
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void impPS2glVertex4i(int x, int y, int z, int w)
{
    /* TODO: decompile from asm/... */
}

/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_DataInput.c lines 887–889 */
/* addr: 0x0014a0f0  size: 424 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 887
 *   +0x0004 -> line 888
 *   +0x0008 -> line 887
 *   +0x0028 -> line 888
 *   +0x018c -> line 889
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void impPS2glVertex4d(double X, double Y, double Z, double W)
{
    /* TODO: decompile from asm/... */
}

/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_DataInput.c lines 844–884 */
/* addr: 0x0014a2a0  size: 392 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 844
 *   +0x0004 -> line 845
 *   +0x0008 -> line 844
 *   +0x001c -> line 845
 *   +0x0040 -> line 847
 *   +0x0054 -> line 848
 *   +0x005c -> line 849
 *   +0x0068 -> line 852
 *   +0x006c -> line 857
 *   +0x0070 -> line 852
 *   +0x0074 -> line 867
 *   +0x0078 -> line 868
 *   +0x007c -> line 870
 *   +0x0080 -> line 871
 *   +0x0084 -> line 857
 *   +0x0088 -> line 867
 *   +0x008c -> line 868
 *   +0x0090 -> line 870
 *   +0x0094 -> line 871
 *   +0x0098 -> line 852
 *   +0x009c -> line 853
 *   +0x00a8 -> line 854
 *   +0x00b4 -> line 855
 *   +0x00cc -> line 857
 *   +0x00e4 -> line 867
 *   +0x00e8 -> line 857
 *   +0x00ec -> line 867
 *   +0x0100 -> line 868
 *   +0x0104 -> line 867
 *   +0x0108 -> line 868
 *   +0x011c -> line 870
 *   +0x0120 -> line 868
 *   +0x0124 -> line 870
 *   +0x0138 -> line 871
 *   +0x013c -> line 870
 *   +0x0140 -> line 871
 *   +0x0154 -> line 883
 *   +0x0158 -> line 871
 *   +0x015c -> line 883
 *   +0x016c -> line 884
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void impPS2glVertex4f(float x, float y, float z, float w)
{
    if (g_PS2glContext.iBufCount >= g_PS2glContext.iBufLimit) {
        if (g_PS2glContext.eBeginMode == 7)
            PS2glAssembleQuads();
        PS2glFlushBuffer(0);
    }

    (*g_PS2glContext.pVBuf)[0] = x;
    (*g_PS2glContext.pVBuf)[1] = y;
    (*g_PS2glContext.pVBuf)[2] = z;
    (*g_PS2glContext.pVBuf++)[3] = w;

    *(quad*)g_PS2glContext.pNBuf++ = *(quad*)g_PS2glContext.vcurNormal;
    *(quad*)g_PS2glContext.pCBuf++ = *(quad*)g_PS2glContext.vacurColor[0];
    *(quad*)g_PS2glContext.pCBuf_b++ = *(quad*)g_PS2glContext.vacurColor[1];
    *(quad*)g_PS2glContext.pTBuf++ = *(quad*)g_PS2glContext.vacurTexCoords[0];
    *(quad*)g_PS2glContext.pTBuf_b++ = *(quad*)g_PS2glContext.vacurTexCoords[1];

    g_PS2glContext.iBufCount++;
}

/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_DataInput.c lines 839–841 */
/* addr: 0x0014a430  size: 412 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 839
 *   +0x0004 -> line 840
 *   +0x0008 -> line 839
 *   +0x0020 -> line 840
 *   +0x0184 -> line 841
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void impPS2glVertex3s(short x, short y, short z)
{
    quad* pQuad;
    if (g_PS2glContext.iBufCount >= g_PS2glContext.iBufLimit) { if (g_PS2glContext.eBeginMode == 7) PS2glAssembleQuads(); PS2glFlushBuffer(0); } (*g_PS2glContext.pVBuf)[0] = (float)x; (*g_PS2glContext.pVBuf)[1] = (float)y; (*g_PS2glContext.pVBuf)[2] = (float)z; (*g_PS2glContext.pVBuf++)[3] = 1.0f; pQuad = (quad*)g_PS2glContext.pNBuf++; *pQuad = *(quad*)g_PS2glContext.vcurNormal; pQuad = (quad*)g_PS2glContext.pCBuf++; *pQuad = *(quad*)g_PS2glContext.vacurColor[0]; pQuad = (quad*)g_PS2glContext.pCBuf_b++; *pQuad = *(quad*)g_PS2glContext.vacurColor[1]; pQuad = (quad*)g_PS2glContext.pTBuf++; *pQuad = *(quad*)g_PS2glContext.vacurTexCoords[0]; pQuad = (quad*)g_PS2glContext.pTBuf_b++; *pQuad = *(quad*)g_PS2glContext.vacurTexCoords[1]; g_PS2glContext.iBufCount++;
}

/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_DataInput.c lines 834–836 */
/* addr: 0x0014a5d0  size: 412 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 834
 *   +0x0004 -> line 835
 *   +0x0008 -> line 834
 *   +0x0020 -> line 835
 *   +0x0184 -> line 836
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void impPS2glVertex3i(int x, int y, int z)
{
    quad* pQuad;
    if (g_PS2glContext.iBufCount >= g_PS2glContext.iBufLimit) { if (g_PS2glContext.eBeginMode == 7) PS2glAssembleQuads(); PS2glFlushBuffer(0); } (*g_PS2glContext.pVBuf)[0] = (float)x; (*g_PS2glContext.pVBuf)[1] = (float)y; (*g_PS2glContext.pVBuf)[2] = (float)z; (*g_PS2glContext.pVBuf++)[3] = 1.0f; pQuad = (quad*)g_PS2glContext.pNBuf++; *pQuad = *(quad*)g_PS2glContext.vcurNormal; pQuad = (quad*)g_PS2glContext.pCBuf++; *pQuad = *(quad*)g_PS2glContext.vacurColor[0]; pQuad = (quad*)g_PS2glContext.pCBuf_b++; *pQuad = *(quad*)g_PS2glContext.vacurColor[1]; pQuad = (quad*)g_PS2glContext.pTBuf++; *pQuad = *(quad*)g_PS2glContext.vacurTexCoords[0]; pQuad = (quad*)g_PS2glContext.pTBuf_b++; *pQuad = *(quad*)g_PS2glContext.vacurTexCoords[1]; g_PS2glContext.iBufCount++;
}

/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_DataInput.c lines 829–831 */
/* addr: 0x0014a770  size: 384 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 829
 *   +0x0004 -> line 830
 *   +0x0008 -> line 829
 *   +0x0018 -> line 830
 *   +0x0168 -> line 831
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void impPS2glVertex3f(float x, float y, float z)
{
    quad* pQuad;
    if (g_PS2glContext.iBufCount >= g_PS2glContext.iBufLimit) { if (g_PS2glContext.eBeginMode == 7) PS2glAssembleQuads(); PS2glFlushBuffer(0); } (*g_PS2glContext.pVBuf)[0] = x; (*g_PS2glContext.pVBuf)[1] = y; (*g_PS2glContext.pVBuf)[2] = z; (*g_PS2glContext.pVBuf++)[3] = 1.0f; pQuad = (quad*)g_PS2glContext.pNBuf++; *pQuad = *(quad*)g_PS2glContext.vcurNormal; pQuad = (quad*)g_PS2glContext.pCBuf++; *pQuad = *(quad*)g_PS2glContext.vacurColor[0]; pQuad = (quad*)g_PS2glContext.pCBuf_b++; *pQuad = *(quad*)g_PS2glContext.vacurColor[1]; pQuad = (quad*)g_PS2glContext.pTBuf++; *pQuad = *(quad*)g_PS2glContext.vacurTexCoords[0]; pQuad = (quad*)g_PS2glContext.pTBuf_b++; *pQuad = *(quad*)g_PS2glContext.vacurTexCoords[1]; g_PS2glContext.iBufCount++;
}

/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_DataInput.c lines 824–826 */
/* addr: 0x0014a8f0  size: 408 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 824
 *   +0x0004 -> line 825
 *   +0x0008 -> line 824
 *   +0x0020 -> line 825
 *   +0x0180 -> line 826
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void impPS2glVertex3d(double x, double y, double z)
{
    /* TODO: decompile from asm/... */
}

/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_DataInput.c lines 819–821 */
/* addr: 0x0014aa90  size: 392 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 819
 *   +0x0004 -> line 820
 *   +0x0008 -> line 819
 *   +0x0018 -> line 820
 *   +0x0174 -> line 821
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void impPS2glVertex2s(short x, short y)
{
    quad* pQuad;
    if (g_PS2glContext.iBufCount >= g_PS2glContext.iBufLimit) { if (g_PS2glContext.eBeginMode == 7) PS2glAssembleQuads(); PS2glFlushBuffer(0); } (*g_PS2glContext.pVBuf)[0] = (float)x; (*g_PS2glContext.pVBuf)[1] = (float)y; (*g_PS2glContext.pVBuf)[2] = 0.0f; (*g_PS2glContext.pVBuf++)[3] = 1.0f; pQuad = (quad*)g_PS2glContext.pNBuf++; *pQuad = *(quad*)g_PS2glContext.vcurNormal; pQuad = (quad*)g_PS2glContext.pCBuf++; *pQuad = *(quad*)g_PS2glContext.vacurColor[0]; pQuad = (quad*)g_PS2glContext.pCBuf_b++; *pQuad = *(quad*)g_PS2glContext.vacurColor[1]; pQuad = (quad*)g_PS2glContext.pTBuf++; *pQuad = *(quad*)g_PS2glContext.vacurTexCoords[0]; pQuad = (quad*)g_PS2glContext.pTBuf_b++; *pQuad = *(quad*)g_PS2glContext.vacurTexCoords[1]; g_PS2glContext.iBufCount++;
}

/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_DataInput.c lines 814–816 */
/* addr: 0x0014ac20  size: 392 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 814
 *   +0x0004 -> line 815
 *   +0x0008 -> line 814
 *   +0x0018 -> line 815
 *   +0x0174 -> line 816
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void impPS2glVertex2i(int x, int y)
{
    quad* pQuad;
    if (g_PS2glContext.iBufCount >= g_PS2glContext.iBufLimit) { if (g_PS2glContext.eBeginMode == 7) PS2glAssembleQuads(); PS2glFlushBuffer(0); } (*g_PS2glContext.pVBuf)[0] = (float)x; (*g_PS2glContext.pVBuf)[1] = (float)y; (*g_PS2glContext.pVBuf)[2] = 0.0f; (*g_PS2glContext.pVBuf++)[3] = 1.0f; pQuad = (quad*)g_PS2glContext.pNBuf++; *pQuad = *(quad*)g_PS2glContext.vcurNormal; pQuad = (quad*)g_PS2glContext.pCBuf++; *pQuad = *(quad*)g_PS2glContext.vacurColor[0]; pQuad = (quad*)g_PS2glContext.pCBuf_b++; *pQuad = *(quad*)g_PS2glContext.vacurColor[1]; pQuad = (quad*)g_PS2glContext.pTBuf++; *pQuad = *(quad*)g_PS2glContext.vacurTexCoords[0]; pQuad = (quad*)g_PS2glContext.pTBuf_b++; *pQuad = *(quad*)g_PS2glContext.vacurTexCoords[1]; g_PS2glContext.iBufCount++;
}

/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_DataInput.c lines 809–811 */
/* addr: 0x0014adb0  size: 372 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 809
 *   +0x0004 -> line 810
 *   +0x0008 -> line 809
 *   +0x0014 -> line 810
 *   +0x0160 -> line 811
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void impPS2glVertex2f(float x, float y)
{
    quad* pQuad;
    if (g_PS2glContext.iBufCount >= g_PS2glContext.iBufLimit) { if (g_PS2glContext.eBeginMode == 7) PS2glAssembleQuads(); PS2glFlushBuffer(0); } (*g_PS2glContext.pVBuf)[0] = x; (*g_PS2glContext.pVBuf)[1] = y; (*g_PS2glContext.pVBuf)[2] = 0.0f; (*g_PS2glContext.pVBuf++)[3] = 1.0f; pQuad = (quad*)g_PS2glContext.pNBuf++; *pQuad = *(quad*)g_PS2glContext.vcurNormal; pQuad = (quad*)g_PS2glContext.pCBuf++; *pQuad = *(quad*)g_PS2glContext.vacurColor[0]; pQuad = (quad*)g_PS2glContext.pCBuf_b++; *pQuad = *(quad*)g_PS2glContext.vacurColor[1]; pQuad = (quad*)g_PS2glContext.pTBuf++; *pQuad = *(quad*)g_PS2glContext.vacurTexCoords[0]; pQuad = (quad*)g_PS2glContext.pTBuf_b++; *pQuad = *(quad*)g_PS2glContext.vacurTexCoords[1]; g_PS2glContext.iBufCount++;
}

/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_DataInput.c lines 804–806 */
/* addr: 0x0014af30  size: 388 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 804
 *   +0x0004 -> line 805
 *   +0x0008 -> line 804
 *   +0x0018 -> line 805
 *   +0x0170 -> line 806
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void impPS2glVertex2d(double x, double y)
{
    /* TODO: decompile from asm/... */
}

/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_DataInput.c lines 793–797 */
/* addr: 0x0014b0c0  size: 48 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 793
 *   +0x000c -> line 794
 *   +0x0018 -> line 795
 *   +0x0024 -> line 796
 *   +0x0028 -> line 797
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void impPS2glNormal3fv(float* v)
{
    g_PS2glContext.vcurNormal[0] = v[0];
    g_PS2glContext.vcurNormal[1] = v[1];
    g_PS2glContext.vcurNormal[2] = v[2];
    g_PS2glContext.vcurNormal[3] = 0.0f;
}

/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_DataInput.c lines 787–789 */
/* addr: 0x0014b0f0  size: 112 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 787
 *   +0x0018 -> line 788
 *   +0x0058 -> line 789
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void impPS2glNormal3dv(double* v)
{
    float nx, ny, nz;
    nz = (float)v[2]; ny = (float)v[1]; nx = (float)v[0]; g_PS2glContext.vcurNormal[0] = nx; g_PS2glContext.vcurNormal[1] = ny; g_PS2glContext.vcurNormal[2] = nz; g_PS2glContext.vcurNormal[3] = 0.0f;
}

/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_DataInput.c lines 783–784 */
/* addr: 0x0014b160  size: 84 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 783
 *   +0x004c -> line 784
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void impPS2glNormal3iv(int* v)
{
    float nx, ny, nz;
    nz = (float)v[2] / 2147483648.0f; ny = (float)v[1] / 2147483648.0f; nx = (float)v[0] / 2147483648.0f; g_PS2glContext.vcurNormal[0] = nx; g_PS2glContext.vcurNormal[1] = ny; g_PS2glContext.vcurNormal[2] = nz; g_PS2glContext.vcurNormal[3] = 0.0f;
}

/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_DataInput.c lines 778–779 */
/* addr: 0x0014b1c0  size: 100 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 778
 *   +0x005c -> line 779
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void impPS2glNormal3sv(short* v)
{
    float nx, ny, nz;
    nz = (float)v[2] / 32767.0f; ny = (float)v[1] / 32767.0f; nx = (float)v[0] / 32767.0f; g_PS2glContext.vcurNormal[0] = nx; g_PS2glContext.vcurNormal[1] = ny; g_PS2glContext.vcurNormal[2] = nz; g_PS2glContext.vcurNormal[3] = 0.0f;
}

/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_DataInput.c lines 773–774 */
/* addr: 0x0014b230  size: 96 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 773
 *   +0x0058 -> line 774
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void impPS2glNormal3bv(signed char* v)
{
    float nx, ny, nz;
    nz = (float)v[2] / 127.0f; ny = (float)v[1] / 127.0f; nx = (float)v[0] / 127.0f; g_PS2glContext.vcurNormal[0] = nx; g_PS2glContext.vcurNormal[1] = ny; g_PS2glContext.vcurNormal[2] = nz; g_PS2glContext.vcurNormal[3] = 0.0f;
}

/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_DataInput.c lines 765–769 */
/* addr: 0x0014b290  size: 36 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 765
 *   +0x0008 -> line 766
 *   +0x0010 -> line 767
 *   +0x0018 -> line 768
 *   +0x001c -> line 769
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void impPS2glNormal3f(float nx, float ny, float nz)
{
    g_PS2glContext.vcurNormal[0] = nx;
    g_PS2glContext.vcurNormal[1] = ny;
    g_PS2glContext.vcurNormal[2] = nz;
    g_PS2glContext.vcurNormal[3] = 0.0f;
}

/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_DataInput.c lines 759–761 */
/* addr: 0x0014b2c0  size: 96 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 759
 *   +0x0014 -> line 760
 *   +0x004c -> line 761
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void impPS2glNormal3d(double nx, double ny, double nz)
{
    g_PS2glContext.vcurNormal[0] = (float)nx; g_PS2glContext.vcurNormal[1] = (float)ny; g_PS2glContext.vcurNormal[2] = (float)nz; g_PS2glContext.vcurNormal[3] = 0.0f;
}

/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_DataInput.c lines 755–756 */
/* addr: 0x0014b320  size: 84 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 755
 *   +0x004c -> line 756
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void impPS2glNormal3i(int nx, int ny, int nz)
{
    g_PS2glContext.vcurNormal[0] = (float)nx / 2147483648.0f; g_PS2glContext.vcurNormal[1] = (float)ny / 2147483648.0f; g_PS2glContext.vcurNormal[2] = (float)nz / 2147483648.0f; g_PS2glContext.vcurNormal[3] = 0.0f;
}

/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_DataInput.c lines 750–751 */
/* addr: 0x0014b380  size: 84 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 750
 *   +0x004c -> line 751
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void impPS2glNormal3s(short nx, short ny, short nz)
{
    g_PS2glContext.vcurNormal[0] = (float)nx / 32767.0f; g_PS2glContext.vcurNormal[1] = (float)ny / 32767.0f; g_PS2glContext.vcurNormal[2] = (float)nz / 32767.0f; g_PS2glContext.vcurNormal[3] = 0.0f;
}

/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_DataInput.c lines 745–746 */
/* addr: 0x0014b3e0  size: 84 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 745
 *   +0x004c -> line 746
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void impPS2glNormal3b(signed char nx, signed char ny, signed char nz)
{
    g_PS2glContext.vcurNormal[0] = (float)nx / 127.0f; g_PS2glContext.vcurNormal[1] = (float)ny / 127.0f; g_PS2glContext.vcurNormal[2] = (float)nz / 127.0f; g_PS2glContext.vcurNormal[3] = 0.0f;
}

/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_DataInput.c lines 735–737 */
/* addr: 0x0014b440  size: 328 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 735
 *   +0x0140 -> line 737
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void impPS2glMultiColor4usvARB(unsigned int texture, unsigned short* v)
{
    float red, green, blue, alpha;
    alpha = (float)v[3] / 65535.0f; blue = (float)v[2] / 65535.0f; green = (float)v[1] / 65535.0f; red = (float)v[0] / 65535.0f; g_PS2glContext.vacurColor[texture][0] = red; g_PS2glContext.vacurColor[texture][1] = green; g_PS2glContext.vacurColor[texture][2] = blue; g_PS2glContext.vacurColor[texture][3] = alpha;
}

/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_DataInput.c lines 729–731 */
/* addr: 0x0014b590  size: 312 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 729
 *   +0x0130 -> line 731
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void impPS2glMultiColor4uivARB(unsigned int texture, unsigned int* v)
{
    float red, green, blue, alpha;
    alpha = (float)v[3] / 4294967295.0f; blue = (float)v[2] / 4294967295.0f; green = (float)v[1] / 4294967295.0f; red = (float)v[0] / 4294967295.0f; g_PS2glContext.vacurColor[texture][0] = red; g_PS2glContext.vacurColor[texture][1] = green; g_PS2glContext.vacurColor[texture][2] = blue; g_PS2glContext.vacurColor[texture][3] = alpha;
}

/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_DataInput.c lines 723–725 */
/* addr: 0x0014b6d0  size: 312 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 723
 *   +0x0130 -> line 725
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void impPS2glMultiColor4ubvARB(unsigned int texture, unsigned char* v)
{
    float red, green, blue, alpha;
    alpha = (float)v[3] / 255.0f; blue = (float)v[2] / 255.0f; green = (float)v[1] / 255.0f; red = (float)v[0] / 255.0f; g_PS2glContext.vacurColor[texture][0] = red; g_PS2glContext.vacurColor[texture][1] = green; g_PS2glContext.vacurColor[texture][2] = blue; g_PS2glContext.vacurColor[texture][3] = alpha;
}

/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_DataInput.c lines 717–719 */
/* addr: 0x0014b810  size: 152 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 717
 *   +0x0090 -> line 719
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void impPS2glMultiColor4svARB(unsigned int texture, short* v)
{
    float red, green, blue, alpha;
    alpha = (float)v[3] / 32767.0f; blue = (float)v[2] / 32767.0f; green = (float)v[1] / 32767.0f; red = (float)v[0] / 32767.0f; g_PS2glContext.vacurColor[texture][0] = red; g_PS2glContext.vacurColor[texture][1] = green; g_PS2glContext.vacurColor[texture][2] = blue; g_PS2glContext.vacurColor[texture][3] = alpha;
}

/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_DataInput.c lines 711–713 */
/* addr: 0x0014b8b0  size: 128 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 711
 *   +0x0078 -> line 713
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void impPS2glMultiColor4ivARB(unsigned int texture, int* v)
{
    float red, green, blue, alpha;
    alpha = (float)v[3] / 2147483648.0f; blue = (float)v[2] / 2147483648.0f; green = (float)v[1] / 2147483648.0f; red = (float)v[0] / 2147483648.0f; g_PS2glContext.vacurColor[texture][0] = red; g_PS2glContext.vacurColor[texture][1] = green; g_PS2glContext.vacurColor[texture][2] = blue; g_PS2glContext.vacurColor[texture][3] = alpha;
}

/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_DataInput.c lines 703–707 */
/* addr: 0x0014b930  size: 88 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 703
 *   +0x0014 -> line 704
 *   +0x0020 -> line 703
 *   +0x0024 -> line 705
 *   +0x0028 -> line 704
 *   +0x002c -> line 705
 *   +0x0034 -> line 706
 *   +0x0040 -> line 704
 *   +0x0044 -> line 705
 *   +0x004c -> line 706
 *   +0x0050 -> line 707
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void impPS2glMultiColor4fvARB(unsigned int texture, float* v)
{
    g_PS2glContext.vacurColor[texture][0] = v[0];
    g_PS2glContext.vacurColor[texture][1] = v[1];
    g_PS2glContext.vacurColor[texture][2] = v[2];
    g_PS2glContext.vacurColor[texture][3] = v[3];
}

/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_DataInput.c lines 697–699 */
/* addr: 0x0014b990  size: 180 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 697
 *   +0x0020 -> line 698
 *   +0x0094 -> line 699
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void impPS2glMultiColor4dvARB(unsigned int texture, double* v)
{
    float red, green, blue, alpha;
    alpha = (float)v[3]; blue = (float)v[2]; green = (float)v[1]; red = (float)v[0]; g_PS2glContext.vacurColor[texture][0] = red; g_PS2glContext.vacurColor[texture][1] = green; g_PS2glContext.vacurColor[texture][2] = blue; g_PS2glContext.vacurColor[texture][3] = alpha;
}

/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_DataInput.c lines 693–694 */
/* addr: 0x0014ba50  size: 152 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 693
 *   +0x0090 -> line 694
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void impPS2glMultiColor4bvARB(unsigned int texture, signed char* v)
{
    float red, green, blue, alpha;
    alpha = (float)v[3] / 127.0f; blue = (float)v[2] / 127.0f; green = (float)v[1] / 127.0f; red = (float)v[0] / 127.0f; g_PS2glContext.vacurColor[texture][0] = red; g_PS2glContext.vacurColor[texture][1] = green; g_PS2glContext.vacurColor[texture][2] = blue; g_PS2glContext.vacurColor[texture][3] = alpha;
}

/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_DataInput.c lines 688–689 */
/* addr: 0x0014baf0  size: 268 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 688
 *   +0x0104 -> line 689
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void impPS2glMultiColor3usvARB(unsigned int texture, unsigned short* v)
{
    float red, green, blue;
    blue = (float)v[2] / 65535.0f; green = (float)v[1] / 65535.0f; red = (float)v[0] / 65535.0f; g_PS2glContext.vacurColor[texture][0] = red; g_PS2glContext.vacurColor[texture][1] = green; g_PS2glContext.vacurColor[texture][2] = blue; g_PS2glContext.vacurColor[texture][3] = 1.0f;
}

/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_DataInput.c lines 683–684 */
/* addr: 0x0014bc00  size: 256 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 683
 *   +0x00f8 -> line 684
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void impPS2glMultiColor3uivARB(unsigned int texture, unsigned int* v)
{
    float red, green, blue;
    blue = (float)v[2] / 4294967295.0f; green = (float)v[1] / 4294967295.0f; red = (float)v[0] / 4294967295.0f; g_PS2glContext.vacurColor[texture][0] = red; g_PS2glContext.vacurColor[texture][1] = green; g_PS2glContext.vacurColor[texture][2] = blue; g_PS2glContext.vacurColor[texture][3] = 1.0f;
}

/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_DataInput.c lines 678–679 */
/* addr: 0x0014bd00  size: 256 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 678
 *   +0x00f8 -> line 679
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void impPS2glMultiColor3ubvARB(unsigned int texture, unsigned char* v)
{
    float red, green, blue;
    blue = (float)v[2] / 255.0f; green = (float)v[1] / 255.0f; red = (float)v[0] / 255.0f; g_PS2glContext.vacurColor[texture][0] = red; g_PS2glContext.vacurColor[texture][1] = green; g_PS2glContext.vacurColor[texture][2] = blue; g_PS2glContext.vacurColor[texture][3] = 1.0f;
}

/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_DataInput.c lines 673–674 */
/* addr: 0x0014be00  size: 140 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 673
 *   +0x0084 -> line 674
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void impPS2glMultiColor3svARB(unsigned int texture, short* v)
{
    float red, green, blue;
    blue = (float)v[2] / 32767.0f; green = (float)v[1] / 32767.0f; red = (float)v[0] / 32767.0f; g_PS2glContext.vacurColor[texture][0] = red; g_PS2glContext.vacurColor[texture][1] = green; g_PS2glContext.vacurColor[texture][2] = blue; g_PS2glContext.vacurColor[texture][3] = 1.0f;
}

/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_DataInput.c lines 668–669 */
/* addr: 0x0014be90  size: 120 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 668
 *   +0x0070 -> line 669
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void impPS2glMultiColor3ivARB(unsigned int texture, int* v)
{
    float red, green, blue;
    blue = (float)v[2] / 2147483648.0f; green = (float)v[1] / 2147483648.0f; red = (float)v[0] / 2147483648.0f; g_PS2glContext.vacurColor[texture][0] = red; g_PS2glContext.vacurColor[texture][1] = green; g_PS2glContext.vacurColor[texture][2] = blue; g_PS2glContext.vacurColor[texture][3] = 1.0f;
}

/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_DataInput.c lines 663–664 */
/* addr: 0x0014bf10  size: 88 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 663
 *   +0x0050 -> line 664
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void impPS2glMultiColor3fvARB(unsigned int texture, float* v)
{
    float red, green, blue;
    blue = v[2]; green = v[1]; red = v[0]; g_PS2glContext.vacurColor[texture][0] = red; g_PS2glContext.vacurColor[texture][1] = green; g_PS2glContext.vacurColor[texture][2] = blue; g_PS2glContext.vacurColor[texture][3] = 1.0f;
}

/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_DataInput.c lines 657–659 */
/* addr: 0x0014bf70  size: 164 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 657
 *   +0x001c -> line 658
 *   +0x0088 -> line 659
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void impPS2glMultiColor3dvARB(unsigned int texture, double* v)
{
    float red, green, blue;
    blue = (float)v[2]; green = (float)v[1]; red = (float)v[0]; g_PS2glContext.vacurColor[texture][0] = red; g_PS2glContext.vacurColor[texture][1] = green; g_PS2glContext.vacurColor[texture][2] = blue; g_PS2glContext.vacurColor[texture][3] = 1.0f;
}

/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_DataInput.c lines 653–654 */
/* addr: 0x0014c020  size: 136 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 653
 *   +0x0080 -> line 654
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void impPS2glMultiColor3bvARB(unsigned int texture, signed char* v)
{
    float red, green, blue;
    blue = (float)v[2] / 127.0f; green = (float)v[1] / 127.0f; red = (float)v[0] / 127.0f; g_PS2glContext.vacurColor[texture][0] = red; g_PS2glContext.vacurColor[texture][1] = green; g_PS2glContext.vacurColor[texture][2] = blue; g_PS2glContext.vacurColor[texture][3] = 1.0f;
}

/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_DataInput.c lines 647–649 */
/* addr: 0x0014c0b0  size: 316 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 647
 *   +0x0134 -> line 649
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void impPS2glMultiColor4usARB(unsigned int texture, unsigned short red, unsigned short green, unsigned short blue, unsigned short alpha)
{
    g_PS2glContext.vacurColor[texture][0] = (float)red / 65535.0f; g_PS2glContext.vacurColor[texture][1] = (float)green / 65535.0f; g_PS2glContext.vacurColor[texture][2] = (float)blue / 65535.0f; g_PS2glContext.vacurColor[texture][3] = (float)alpha / 65535.0f;
}

/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_DataInput.c lines 641–643 */
/* addr: 0x0014c1f0  size: 300 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 641
 *   +0x0124 -> line 643
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void impPS2glMultiColor4uiARB(unsigned int texture, unsigned int red, unsigned int green, unsigned int blue, unsigned int alpha)
{
    g_PS2glContext.vacurColor[texture][0] = (float)red / 4294967295.0f; g_PS2glContext.vacurColor[texture][1] = (float)green / 4294967295.0f; g_PS2glContext.vacurColor[texture][2] = (float)blue / 4294967295.0f; g_PS2glContext.vacurColor[texture][3] = (float)alpha / 4294967295.0f;
}

/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_DataInput.c lines 635–637 */
/* addr: 0x0014c320  size: 300 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 635
 *   +0x0124 -> line 637
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void impPS2glMultiColor4ubARB(unsigned int texture, unsigned char red, unsigned char green, unsigned char blue, unsigned char alpha)
{
    g_PS2glContext.vacurColor[texture][0] = (float)red / 255.0f; g_PS2glContext.vacurColor[texture][1] = (float)green / 255.0f; g_PS2glContext.vacurColor[texture][2] = (float)blue / 255.0f; g_PS2glContext.vacurColor[texture][3] = (float)alpha / 255.0f;
}

/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_DataInput.c lines 629–631 */
/* addr: 0x0014c450  size: 136 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 629
 *   +0x0080 -> line 631
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void impPS2glMultiColor4sARB(unsigned int texture, short red, short green, short blue, short alpha)
{
    g_PS2glContext.vacurColor[texture][0] = (float)red / 32767.0f; g_PS2glContext.vacurColor[texture][1] = (float)green / 32767.0f; g_PS2glContext.vacurColor[texture][2] = (float)blue / 32767.0f; g_PS2glContext.vacurColor[texture][3] = (float)alpha / 32767.0f;
}

/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_DataInput.c lines 623–625 */
/* addr: 0x0014c4e0  size: 136 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 623
 *   +0x0080 -> line 625
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void impPS2glMultiColor4iARB(unsigned int texture, int red, int green, int blue, int alpha)
{
    g_PS2glContext.vacurColor[texture][0] = (float)red / 2147483648.0f; g_PS2glContext.vacurColor[texture][1] = (float)green / 2147483648.0f; g_PS2glContext.vacurColor[texture][2] = (float)blue / 2147483648.0f; g_PS2glContext.vacurColor[texture][3] = (float)alpha / 2147483648.0f;
}

/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_DataInput.c lines 617–619 */
/* addr: 0x0014c570  size: 168 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 617
 *   +0x0028 -> line 618
 *   +0x008c -> line 619
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void impPS2glMultiColor4dARB(unsigned int texture, double R, double G, double B, double A)
{
    g_PS2glContext.vacurColor[texture][0] = (float)R; g_PS2glContext.vacurColor[texture][1] = (float)G; g_PS2glContext.vacurColor[texture][2] = (float)B; g_PS2glContext.vacurColor[texture][3] = (float)A;
}

/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_DataInput.c lines 610–614 */
/* addr: 0x0014c620  size: 72 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 610
 *   +0x0004 -> line 611
 *   +0x0008 -> line 610
 *   +0x000c -> line 611
 *   +0x0010 -> line 610
 *   +0x0018 -> line 611
 *   +0x001c -> line 612
 *   +0x0020 -> line 610
 *   +0x0024 -> line 612
 *   +0x0028 -> line 611
 *   +0x002c -> line 612
 *   +0x0034 -> line 613
 *   +0x0040 -> line 614
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void impPS2glMultiColor4fARB(unsigned int texture, float red, float green, float blue, float alpha)
{
    g_PS2glContext.vacurColor[texture][0] = red;
    g_PS2glContext.vacurColor[texture][1] = green;
    g_PS2glContext.vacurColor[texture][2] = blue;
    g_PS2glContext.vacurColor[texture][3] = alpha;
}

/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_DataInput.c lines 604–606 */
/* addr: 0x0014c670  size: 136 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 604
 *   +0x0080 -> line 606
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void impPS2glMultiColor4bARB(unsigned int texture, signed char red, signed char green, signed char blue, signed char alpha)
{
    g_PS2glContext.vacurColor[texture][0] = (float)red / 127.0f; g_PS2glContext.vacurColor[texture][1] = (float)green / 127.0f; g_PS2glContext.vacurColor[texture][2] = (float)blue / 127.0f; g_PS2glContext.vacurColor[texture][3] = (float)alpha / 127.0f;
}

/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_DataInput.c lines 598–600 */
/* addr: 0x0014c700  size: 256 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 598
 *   +0x00f8 -> line 600
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void impPS2glMultiColor3usARB(unsigned int texture, unsigned short red, unsigned short green, unsigned short blue)
{
    g_PS2glContext.vacurColor[texture][0] = (float)red / 65535.0f; g_PS2glContext.vacurColor[texture][1] = (float)green / 65535.0f; g_PS2glContext.vacurColor[texture][2] = (float)blue / 65535.0f; g_PS2glContext.vacurColor[texture][3] = 1.0f;
}

/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_DataInput.c lines 593–594 */
/* addr: 0x0014c800  size: 248 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 593
 *   +0x00f0 -> line 594
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void impPS2glMultiColor3uiARB(unsigned int texture, unsigned int red, unsigned int green, unsigned int blue)
{
    g_PS2glContext.vacurColor[texture][0] = (float)red / 4294967295.0f; g_PS2glContext.vacurColor[texture][1] = (float)green / 4294967295.0f; g_PS2glContext.vacurColor[texture][2] = (float)blue / 4294967295.0f; g_PS2glContext.vacurColor[texture][3] = 1.0f;
}

/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_DataInput.c lines 588–589 */
/* addr: 0x0014c900  size: 248 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 588
 *   +0x00f0 -> line 589
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void impPS2glMultiColor3ubARB(unsigned int texture, unsigned char red, unsigned char green, unsigned char blue)
{
    g_PS2glContext.vacurColor[texture][0] = (float)red / 255.0f; g_PS2glContext.vacurColor[texture][1] = (float)green / 255.0f; g_PS2glContext.vacurColor[texture][2] = (float)blue / 255.0f; g_PS2glContext.vacurColor[texture][3] = 1.0f;
}

/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_DataInput.c lines 583–584 */
/* addr: 0x0014ca00  size: 128 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 583
 *   +0x0078 -> line 584
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void impPS2glMultiColor3sARB(unsigned int texture, short red, short green, short blue)
{
    g_PS2glContext.vacurColor[texture][0] = (float)red / 32767.0f; g_PS2glContext.vacurColor[texture][1] = (float)green / 32767.0f; g_PS2glContext.vacurColor[texture][2] = (float)blue / 32767.0f; g_PS2glContext.vacurColor[texture][3] = 1.0f;
}

/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_DataInput.c lines 578–579 */
/* addr: 0x0014ca80  size: 124 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 578
 *   +0x0074 -> line 579
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void impPS2glMultiColor3iARB(unsigned int texture, int red, int green, int blue)
{
    g_PS2glContext.vacurColor[texture][0] = (float)red / 2147483648.0f; g_PS2glContext.vacurColor[texture][1] = (float)green / 2147483648.0f; g_PS2glContext.vacurColor[texture][2] = (float)blue / 2147483648.0f; g_PS2glContext.vacurColor[texture][3] = 1.0f;
}

/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_DataInput.c lines 573–574 */
/* addr: 0x0014cb00  size: 76 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 573
 *   +0x0044 -> line 574
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void impPS2glMultiColor3fARB(unsigned int texture, float red, float green, float blue)
{
    g_PS2glContext.vacurColor[texture][0] = red; g_PS2glContext.vacurColor[texture][1] = green; g_PS2glContext.vacurColor[texture][2] = blue; g_PS2glContext.vacurColor[texture][3] = 1.0f;
}

/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_DataInput.c lines 567–569 */
/* addr: 0x0014cb50  size: 152 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 567
 *   +0x0020 -> line 568
 *   +0x0080 -> line 569
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void impPS2glMultiColor3dARB(unsigned int texture, double red, double green, double blue)
{
    g_PS2glContext.vacurColor[texture][0] = (float)red; g_PS2glContext.vacurColor[texture][1] = (float)green; g_PS2glContext.vacurColor[texture][2] = (float)blue; g_PS2glContext.vacurColor[texture][3] = 1.0f;
}

/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_DataInput.c lines 563–564 */
/* addr: 0x0014cbf0  size: 124 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 563
 *   +0x0074 -> line 564
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void impPS2glMultiColor3bARB(unsigned int texture, signed char red, signed char green, signed char blue)
{
    g_PS2glContext.vacurColor[texture][0] = (float)red / 127.0f; g_PS2glContext.vacurColor[texture][1] = (float)green / 127.0f; g_PS2glContext.vacurColor[texture][2] = (float)blue / 127.0f; g_PS2glContext.vacurColor[texture][3] = 1.0f;
}

/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_DataInput.c lines 556–558 */
/* addr: 0x0014cc70  size: 292 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 556
 *   +0x011c -> line 558
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void impPS2glColor4usv(unsigned short* v)
{
    float red, green, blue, alpha;
    alpha = (float)v[3] / 65535.0f; blue = (float)v[2] / 65535.0f; green = (float)v[1] / 65535.0f; red = (float)v[0] / 65535.0f; g_PS2glContext.vacurColor[0][0] = red; g_PS2glContext.vacurColor[0][1] = green; g_PS2glContext.vacurColor[0][2] = blue; g_PS2glContext.vacurColor[0][3] = alpha;
}

/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_DataInput.c lines 550–552 */
/* addr: 0x0014cda0  size: 276 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 550
 *   +0x010c -> line 552
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void impPS2glColor4uiv(unsigned int* v)
{
    float red, green, blue, alpha;
    alpha = (float)v[3] / 4294967295.0f; blue = (float)v[2] / 4294967295.0f; green = (float)v[1] / 4294967295.0f; red = (float)v[0] / 4294967295.0f; g_PS2glContext.vacurColor[0][0] = red; g_PS2glContext.vacurColor[0][1] = green; g_PS2glContext.vacurColor[0][2] = blue; g_PS2glContext.vacurColor[0][3] = alpha;
}

/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_DataInput.c lines 544–546 */
/* addr: 0x0014cec0  size: 276 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 544
 *   +0x010c -> line 546
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void impPS2glColor4ubv(unsigned char* v)
{
    float red, green, blue, alpha;
    alpha = (float)v[3] / 255.0f; blue = (float)v[2] / 255.0f; green = (float)v[1] / 255.0f; red = (float)v[0] / 255.0f; g_PS2glContext.vacurColor[0][0] = red; g_PS2glContext.vacurColor[0][1] = green; g_PS2glContext.vacurColor[0][2] = blue; g_PS2glContext.vacurColor[0][3] = alpha;
}

/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_DataInput.c lines 538–540 */
/* addr: 0x0014cfe0  size: 116 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 538
 *   +0x006c -> line 540
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void impPS2glColor4sv(short* v)
{
    float red, green, blue, alpha;
    alpha = (float)v[3] / 32767.0f; blue = (float)v[2] / 32767.0f; green = (float)v[1] / 32767.0f; red = (float)v[0] / 32767.0f; g_PS2glContext.vacurColor[0][0] = red; g_PS2glContext.vacurColor[0][1] = green; g_PS2glContext.vacurColor[0][2] = blue; g_PS2glContext.vacurColor[0][3] = alpha;
}

/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_DataInput.c lines 532–534 */
/* addr: 0x0014d060  size: 92 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 532
 *   +0x0054 -> line 534
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void impPS2glColor4iv(int* v)
{
    float red, green, blue, alpha;
    alpha = (float)v[3] / 2147483648.0f; blue = (float)v[2] / 2147483648.0f; green = (float)v[1] / 2147483648.0f; red = (float)v[0] / 2147483648.0f; g_PS2glContext.vacurColor[0][0] = red; g_PS2glContext.vacurColor[0][1] = green; g_PS2glContext.vacurColor[0][2] = blue; g_PS2glContext.vacurColor[0][3] = alpha;
}

/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_DataInput.c lines 511–528 */
/* addr: 0x0014d0c0  size: 52 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 511
 *   +0x000c -> line 512
 *   +0x0018 -> line 513
 *   +0x0024 -> line 514
 *   +0x002c -> line 528
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void impPS2glColor4fv(float* v)
{
    g_PS2glContext.vacurColor[0][0] = v[0];
    g_PS2glContext.vacurColor[0][1] = v[1];
    g_PS2glContext.vacurColor[0][2] = v[2];
    g_PS2glContext.vacurColor[0][3] = v[3];
}

/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_DataInput.c lines 503–505 */
/* addr: 0x0014d100  size: 132 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 503
 *   +0x001c -> line 504
 *   +0x0068 -> line 505
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void impPS2glColor4dv(double* v)
{
    float red, green, blue, alpha;
    alpha = (float)v[3]; blue = (float)v[2]; green = (float)v[1]; red = (float)v[0]; g_PS2glContext.vacurColor[0][0] = red; g_PS2glContext.vacurColor[0][1] = green; g_PS2glContext.vacurColor[0][2] = blue; g_PS2glContext.vacurColor[0][3] = alpha;
}

/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_DataInput.c lines 499–500 */
/* addr: 0x0014d190  size: 112 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 499
 *   +0x0068 -> line 500
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void impPS2glColor4bv(signed char* v)
{
    float red, green, blue, alpha;
    alpha = (float)v[3] / 127.0f; blue = (float)v[2] / 127.0f; green = (float)v[1] / 127.0f; red = (float)v[0] / 127.0f; g_PS2glContext.vacurColor[0][0] = red; g_PS2glContext.vacurColor[0][1] = green; g_PS2glContext.vacurColor[0][2] = blue; g_PS2glContext.vacurColor[0][3] = alpha;
}

/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_DataInput.c lines 494–495 */
/* addr: 0x0014d200  size: 232 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 494
 *   +0x00e0 -> line 495
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void impPS2glColor3usv(unsigned short* v)
{
    float red, green, blue;
    blue = (float)v[2] / 65535.0f; green = (float)v[1] / 65535.0f; red = (float)v[0] / 65535.0f; g_PS2glContext.vacurColor[0][0] = red; g_PS2glContext.vacurColor[0][1] = green; g_PS2glContext.vacurColor[0][2] = blue; g_PS2glContext.vacurColor[0][3] = 1.0f;
}

/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_DataInput.c lines 489–490 */
/* addr: 0x0014d2f0  size: 220 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 489
 *   +0x00d4 -> line 490
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void impPS2glColor3uiv(unsigned int* v)
{
    float red, green, blue;
    blue = (float)v[2] / 4294967295.0f; green = (float)v[1] / 4294967295.0f; red = (float)v[0] / 4294967295.0f; g_PS2glContext.vacurColor[0][0] = red; g_PS2glContext.vacurColor[0][1] = green; g_PS2glContext.vacurColor[0][2] = blue; g_PS2glContext.vacurColor[0][3] = 1.0f;
}

/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_DataInput.c lines 484–485 */
/* addr: 0x0014d3d0  size: 220 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 484
 *   +0x00d4 -> line 485
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void impPS2glColor3ubv(unsigned char* v)
{
    float red, green, blue;
    blue = (float)v[2] / 255.0f; green = (float)v[1] / 255.0f; red = (float)v[0] / 255.0f; g_PS2glContext.vacurColor[0][0] = red; g_PS2glContext.vacurColor[0][1] = green; g_PS2glContext.vacurColor[0][2] = blue; g_PS2glContext.vacurColor[0][3] = 1.0f;
}

/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_DataInput.c lines 479–480 */
/* addr: 0x0014d4b0  size: 100 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 479
 *   +0x005c -> line 480
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void impPS2glColor3sv(short* v)
{
    float red, green, blue;
    blue = (float)v[2] / 32767.0f; green = (float)v[1] / 32767.0f; red = (float)v[0] / 32767.0f; g_PS2glContext.vacurColor[0][0] = red; g_PS2glContext.vacurColor[0][1] = green; g_PS2glContext.vacurColor[0][2] = blue; g_PS2glContext.vacurColor[0][3] = 1.0f;
}

/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_DataInput.c lines 474–475 */
/* addr: 0x0014d520  size: 84 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 474
 *   +0x004c -> line 475
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void impPS2glColor3iv(int* v)
{
    float red, green, blue;
    blue = (float)v[2] / 2147483648.0f; green = (float)v[1] / 2147483648.0f; red = (float)v[0] / 2147483648.0f; g_PS2glContext.vacurColor[0][0] = red; g_PS2glContext.vacurColor[0][1] = green; g_PS2glContext.vacurColor[0][2] = blue; g_PS2glContext.vacurColor[0][3] = 1.0f;
}

/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_DataInput.c lines 469–470 */
/* addr: 0x0014d580  size: 52 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 469
 *   +0x002c -> line 470
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void impPS2glColor3fv(float* v)
{
    float red, green, blue;
    blue = v[2]; green = v[1]; red = v[0]; g_PS2glContext.vacurColor[0][0] = red; g_PS2glContext.vacurColor[0][1] = green; g_PS2glContext.vacurColor[0][2] = blue; g_PS2glContext.vacurColor[0][3] = 1.0f;
}

/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_DataInput.c lines 463–465 */
/* addr: 0x0014d5c0  size: 116 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 463
 *   +0x0018 -> line 464
 *   +0x005c -> line 465
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void impPS2glColor3dv(double* v)
{
    float red, green, blue;
    blue = (float)v[2]; green = (float)v[1]; red = (float)v[0]; g_PS2glContext.vacurColor[0][0] = red; g_PS2glContext.vacurColor[0][1] = green; g_PS2glContext.vacurColor[0][2] = blue; g_PS2glContext.vacurColor[0][3] = 1.0f;
}

/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_DataInput.c lines 459–460 */
/* addr: 0x0014d640  size: 96 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 459
 *   +0x0058 -> line 460
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void impPS2glColor3bv(signed char* v)
{
    float red, green, blue;
    blue = (float)v[2] / 127.0f; green = (float)v[1] / 127.0f; red = (float)v[0] / 127.0f; g_PS2glContext.vacurColor[0][0] = red; g_PS2glContext.vacurColor[0][1] = green; g_PS2glContext.vacurColor[0][2] = blue; g_PS2glContext.vacurColor[0][3] = 1.0f;
}

/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_DataInput.c lines 453–455 */
/* addr: 0x0014d6a0  size: 292 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 453
 *   +0x011c -> line 455
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void impPS2glColor4us(unsigned short red, unsigned short green, unsigned short blue, unsigned short alpha)
{
    g_PS2glContext.vacurColor[0][0] = (float)red / 65535.0f; g_PS2glContext.vacurColor[0][1] = (float)green / 65535.0f; g_PS2glContext.vacurColor[0][2] = (float)blue / 65535.0f; g_PS2glContext.vacurColor[0][3] = (float)alpha / 65535.0f;
}

/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_DataInput.c lines 447–449 */
/* addr: 0x0014d7d0  size: 276 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 447
 *   +0x010c -> line 449
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void impPS2glColor4ui(unsigned int red, unsigned int green, unsigned int blue, unsigned int alpha)
{
    g_PS2glContext.vacurColor[0][0] = (float)red / 4294967295.0f; g_PS2glContext.vacurColor[0][1] = (float)green / 4294967295.0f; g_PS2glContext.vacurColor[0][2] = (float)blue / 4294967295.0f; g_PS2glContext.vacurColor[0][3] = (float)alpha / 4294967295.0f;
}

/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_DataInput.c lines 441–443 */
/* addr: 0x0014d8f0  size: 276 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 441
 *   +0x010c -> line 443
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void impPS2glColor4ub(unsigned char red, unsigned char green, unsigned char blue, unsigned char alpha)
{
    g_PS2glContext.vacurColor[0][0] = (float)red / 255.0f; g_PS2glContext.vacurColor[0][1] = (float)green / 255.0f; g_PS2glContext.vacurColor[0][2] = (float)blue / 255.0f; g_PS2glContext.vacurColor[0][3] = (float)alpha / 255.0f;
}

/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_DataInput.c lines 435–437 */
/* addr: 0x0014da10  size: 100 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 435
 *   +0x005c -> line 437
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void impPS2glColor4s(short red, short green, short blue, short alpha)
{
    g_PS2glContext.vacurColor[0][0] = (float)red / 32767.0f; g_PS2glContext.vacurColor[0][1] = (float)green / 32767.0f; g_PS2glContext.vacurColor[0][2] = (float)blue / 32767.0f; g_PS2glContext.vacurColor[0][3] = (float)alpha / 32767.0f;
}

/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_DataInput.c lines 429–431 */
/* addr: 0x0014da80  size: 92 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 429
 *   +0x0054 -> line 431
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void impPS2glColor4i(int red, int green, int blue, int alpha)
{
    g_PS2glContext.vacurColor[0][0] = (float)red / 2147483648.0f; g_PS2glContext.vacurColor[0][1] = (float)green / 2147483648.0f; g_PS2glContext.vacurColor[0][2] = (float)blue / 2147483648.0f; g_PS2glContext.vacurColor[0][3] = (float)alpha / 2147483648.0f;
}

/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_DataInput.c lines 423–425 */
/* addr: 0x0014dae0  size: 116 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 423
 *   +0x001c -> line 424
 *   +0x005c -> line 425
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void impPS2glColor4d(double R, double G, double B, double A)
{
    g_PS2glContext.vacurColor[0][0] = (float)R; g_PS2glContext.vacurColor[0][1] = (float)G; g_PS2glContext.vacurColor[0][2] = (float)B; g_PS2glContext.vacurColor[0][3] = (float)A;
}

/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_DataInput.c lines 403–420 */
/* addr: 0x0014db60  size: 36 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 403
 *   +0x0008 -> line 404
 *   +0x0010 -> line 405
 *   +0x0018 -> line 406
 *   +0x001c -> line 420
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void impPS2glColor4f(float red, float green, float blue, float alpha)
{
    g_PS2glContext.vacurColor[0][0] = red;
    g_PS2glContext.vacurColor[0][1] = green;
    g_PS2glContext.vacurColor[0][2] = blue;
    g_PS2glContext.vacurColor[0][3] = alpha;
}

/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_DataInput.c lines 395–397 */
/* addr: 0x0014db90  size: 92 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 395
 *   +0x0054 -> line 397
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void impPS2glColor4b(signed char red, signed char green, signed char blue, signed char alpha)
{
    g_PS2glContext.vacurColor[0][0] = (float)red / 127.0f; g_PS2glContext.vacurColor[0][1] = (float)green / 127.0f; g_PS2glContext.vacurColor[0][2] = (float)blue / 127.0f; g_PS2glContext.vacurColor[0][3] = (float)alpha / 127.0f;
}

/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_DataInput.c lines 389–391 */
/* addr: 0x0014dbf0  size: 232 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 389
 *   +0x00e0 -> line 391
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void impPS2glColor3us(unsigned short red, unsigned short green, unsigned short blue)
{
    g_PS2glContext.vacurColor[0][0] = (float)red / 65535.0f; g_PS2glContext.vacurColor[0][1] = (float)green / 65535.0f; g_PS2glContext.vacurColor[0][2] = (float)blue / 65535.0f; g_PS2glContext.vacurColor[0][3] = 1.0f;
}

/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_DataInput.c lines 384–385 */
/* addr: 0x0014dce0  size: 216 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 384
 *   +0x00d0 -> line 385
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void impPS2glColor3ui(unsigned int red, unsigned int green, unsigned int blue)
{
    g_PS2glContext.vacurColor[0][0] = (float)red / 4294967295.0f; g_PS2glContext.vacurColor[0][1] = (float)green / 4294967295.0f; g_PS2glContext.vacurColor[0][2] = (float)blue / 4294967295.0f; g_PS2glContext.vacurColor[0][3] = 1.0f;
}

/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_DataInput.c lines 379–380 */
/* addr: 0x0014ddc0  size: 216 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 379
 *   +0x00d0 -> line 380
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void impPS2glColor3ub(unsigned char red, unsigned char green, unsigned char blue)
{
    g_PS2glContext.vacurColor[0][0] = (float)red / 255.0f; g_PS2glContext.vacurColor[0][1] = (float)green / 255.0f; g_PS2glContext.vacurColor[0][2] = (float)blue / 255.0f; g_PS2glContext.vacurColor[0][3] = 1.0f;
}

/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_DataInput.c lines 374–375 */
/* addr: 0x0014dea0  size: 92 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 374
 *   +0x0054 -> line 375
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void impPS2glColor3s(short red, short green, short blue)
{
    g_PS2glContext.vacurColor[0][0] = (float)red / 32767.0f; g_PS2glContext.vacurColor[0][1] = (float)green / 32767.0f; g_PS2glContext.vacurColor[0][2] = (float)blue / 32767.0f; g_PS2glContext.vacurColor[0][3] = 1.0f;
}

/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_DataInput.c lines 369–370 */
/* addr: 0x0014df00  size: 84 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 369
 *   +0x004c -> line 370
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void impPS2glColor3i(int red, int green, int blue)
{
    g_PS2glContext.vacurColor[0][0] = (float)red / 2147483648.0f; g_PS2glContext.vacurColor[0][1] = (float)green / 2147483648.0f; g_PS2glContext.vacurColor[0][2] = (float)blue / 2147483648.0f; g_PS2glContext.vacurColor[0][3] = 1.0f;
}

/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_DataInput.c lines 364–365 */
/* addr: 0x0014df60  size: 40 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 364
 *   +0x0020 -> line 365
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void impPS2glColor3f(float red, float green, float blue)
{
    g_PS2glContext.vacurColor[0][0] = red; g_PS2glContext.vacurColor[0][1] = green; g_PS2glContext.vacurColor[0][2] = blue; g_PS2glContext.vacurColor[0][3] = 1.0f;
}

/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_DataInput.c lines 358–360 */
/* addr: 0x0014df90  size: 100 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 358
 *   +0x0014 -> line 359
 *   +0x0050 -> line 360
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void impPS2glColor3d(double red, double green, double blue)
{
    g_PS2glContext.vacurColor[0][0] = (float)red; g_PS2glContext.vacurColor[0][1] = (float)green; g_PS2glContext.vacurColor[0][2] = (float)blue; g_PS2glContext.vacurColor[0][3] = 1.0f;
}

/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_DataInput.c lines 354–355 */
/* addr: 0x0014e000  size: 84 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 354
 *   +0x004c -> line 355
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void impPS2glColor3b(signed char red, signed char green, signed char blue)
{
    g_PS2glContext.vacurColor[0][0] = (float)red / 127.0f; g_PS2glContext.vacurColor[0][1] = (float)green / 127.0f; g_PS2glContext.vacurColor[0][2] = (float)blue / 127.0f; g_PS2glContext.vacurColor[0][3] = 1.0f;
}

/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_DataInput.c lines 277–303 */
/* addr: 0x0014e060  size: 68 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 277
 *   +0x0004 -> line 290
 *   +0x0008 -> line 277
 *   +0x000c -> line 290
 *   +0x001c -> line 291
 *   +0x0024 -> line 293
 *   +0x0030 -> line 297
 *   +0x0038 -> line 303
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void impPS2glEnd(void)
{
    if (g_PS2glContext.eBeginMode == 7)
        PS2glAssembleQuads();
    PS2glFlushBuffer(1);
    g_PS2glContext.bInBeginEndPair = 0;
}

/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_DataInput.c lines 127–274 */
/* addr: 0x0014e0b0  size: 952 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 127
 *   +0x000c -> line 184
 *   +0x00c8 -> line 186
 *   +0x00d0 -> line 188
 *   +0x00e0 -> line 190
 *   +0x00e4 -> line 191
 *   +0x00e8 -> line 190
 *   +0x00ec -> line 191
 *   +0x00f4 -> line 192
 *   +0x011c -> line 194
 *   +0x0124 -> line 195
 *   +0x0130 -> line 197
 *   +0x0144 -> line 199
 *   +0x014c -> line 200
 *   +0x0150 -> line 202
 *   +0x0158 -> line 203
 *   +0x0164 -> line 206
 *   +0x0178 -> line 208
 *   +0x0180 -> line 209
 *   +0x0184 -> line 211
 *   +0x018c -> line 213
 *   +0x0194 -> line 212
 *   +0x0198 -> line 214
 *   +0x01a0 -> line 215
 *   +0x01a8 -> line 216
 *   +0x01b0 -> line 217
 *   +0x01b8 -> line 218
 *   +0x01c0 -> line 219
 *   +0x01c8 -> line 221
 *   +0x01d0 -> line 222
 *   +0x01d8 -> line 225
 *   +0x01f8 -> line 227
 *   +0x020c -> line 229
 *   +0x0230 -> line 230
 *   +0x0244 -> line 232
 *   +0x0260 -> line 233
 *   +0x0274 -> line 234
 *   +0x0290 -> line 235
 *   +0x02a0 -> line 237
 *   +0x02ac -> line 238
 *   +0x02d0 -> line 239
 *   +0x02e4 -> line 240
 *   +0x0300 -> line 241
 *   +0x0310 -> line 242
 *   +0x031c -> line 251
 *   +0x0330 -> line 253
 *   +0x0340 -> line 254
 *   +0x0348 -> line 255
 *   +0x0350 -> line 258
 *   +0x035c -> line 259
 *   +0x0364 -> line 263
 *   +0x037c -> line 264
 *   +0x038c -> line 269
 *   +0x0390 -> line 267
 *   +0x0394 -> line 269
 *   +0x0398 -> line 267
 *   +0x03a0 -> line 269
 *   +0x03a8 -> line 274
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void impPS2glBegin(unsigned int mode)
{
    signed char iPrimMode;
    /* TODO: decompile from asm/... */
}

/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_DataInput.c lines 112–122 */
/* addr: 0x0014e470  size: 248 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 112
 *   +0x0004 -> line 114
 *   +0x0008 -> line 112
 *   +0x0010 -> line 114
 *   +0x00b0 -> line 119
 *   +0x00e0 -> line 120
 *   +0x00e8 -> line 122
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
extern int sceGsSyncPath(int mode, unsigned short timeout);
extern int printf(const char*, ...);
extern void sceDevVu1Pause(void);
extern int sceDevVif1Reset(void);
extern void sceDevVu1Reset(void);
extern void sceDevGifReset(void);
extern void sceDevVu1Exec(unsigned short addr);
extern void PS2glFlushNotify(void);
extern void GsUpdate(void);
extern void VU1FlushBuffer(void);

void impPS2glFinish(void)
{
    int iRet;

    g_PS2glContext.uiCurrentDmaBuffer++; while (sceGsSyncPath(1, 0) & 4) { if (sceGsSyncPath(0, 100)) { printf("****** VU1 busy ...\n"); sceDevVu1Pause(); sceDevVif1Reset(); sceDevVu1Reset(); sceDevGifReset(); sceDevVu1Exec(0); break; } } PS2glFlushNotify(); if (*(unsigned long*)&g_gsContext.ModFlgs) GsUpdate(); VU1FlushBuffer();

    iRet = sceGsSyncPath(0, 0); if (iRet) { printf("\n\n************************************************\n************ sceGsSyncPath timeout.*************\n************************************************\n\n"); Bug_Please_ReloadMenu_40 = 1; }
    if (iRet) printf("In PS2glFinish, SyncPath failure!\n");
}

/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_DataInput.c lines 84–109 */
/* addr: 0x0014e570  size: 188 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 84
 *   +0x0004 -> line 85
 *   +0x0008 -> line 84
 *   +0x000c -> line 85
 *   +0x0018 -> line 87
 *   +0x0088 -> line 89
 *   +0x0090 -> line 102
 *   +0x00a0 -> line 103
 *   +0x00a8 -> line 107
 *   +0x00b0 -> line 109
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void impPS2glFlush(void)
{
    g_PS2glContext.uiCurrentDmaBuffer++;
    while (sceGsSyncPath(1, 0) & 4) { if (sceGsSyncPath(0, 100)) { printf("****** VU1 busy ...\n"); sceDevVu1Pause(); sceDevVif1Reset(); sceDevVu1Reset(); sceDevGifReset(); sceDevVu1Exec(0); break; } } PS2glFlushNotify(); if (*(unsigned long*)&g_gsContext.ModFlgs) GsUpdate(); VU1FlushBuffer();
}

/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_DataInput.c lines 47–74 */
/* addr: 0x0014e630  size: 72 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 47
 *   +0x0004 -> line 50
 *   +0x0008 -> line 47
 *   +0x000c -> line 50
 *   +0x001c -> line 51
 *   +0x0024 -> line 53
 *   +0x002c -> line 54
 *   +0x0034 -> line 64
 *   +0x0038 -> line 74
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
int PS2glGsSyncPath(void)
{
    int bReturn;

    bReturn = sceGsSyncPath(0, 0);
    if (bReturn != 0)
    {
        printf("\n\n************************************************\n************ sceGsSyncPath timeout.*************\n************************************************\n\n");
        Bug_Please_ReloadMenu_40 = 1;
    }
    return bReturn;
}
