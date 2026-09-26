/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_BufferControl.c */
/* Language: C */
/* Compiler: MW MIPS C Compiler */

#include <stddef.h>

/* Recovered aggregate layouts from MWCC debug type records. */
typedef struct tag_GLmaterial tag_GLmaterial;
typedef struct _GL_BUFFERINFO _GL_BUFFERINFO;
typedef struct anon_0 anon_0;
typedef struct tag_GLtexture tag_GLtexture;
typedef struct anon_1 anon_1;
typedef struct anon_2 anon_2;
typedef struct _sceDmaTag _sceDmaTag;
typedef struct tagListData tagListData;
typedef struct anon_28 anon_28;
typedef struct anon_45 anon_45;
typedef struct tag_stDoubleBufAdd tag_stDoubleBufAdd;
typedef struct anon_3 anon_3;
typedef union unFunction unFunction;
typedef struct tagGLlistnode tagGLlistnode;
typedef struct tagGLlistcalls tagGLlistcalls;
typedef struct anon_53 anon_53;
typedef struct anon_10 anon_10;
typedef struct anon_23 anon_23;
typedef struct anon_27 anon_27;
typedef struct anon_4 anon_4;
typedef struct tagGLlistdatas tagGLlistdatas;
typedef struct tagGLtexblock tagGLtexblock;
typedef struct tagGLprimbuf tagGLprimbuf;
typedef struct tagsceGsReg tagsceGsReg;
typedef struct anon_5 anon_5;
typedef struct anon_6 anon_6;
typedef struct anon_26 anon_26;
typedef struct anon_49 anon_49;
typedef struct anon_40 anon_40;
typedef struct anon_19 anon_19;
typedef struct anon_39 anon_39;
typedef struct anon_9 anon_9;
typedef struct anon_34 anon_34;
typedef struct anon_7 anon_7;
typedef struct anon_8 anon_8;
typedef struct anon_52 anon_52;
typedef struct anon_11 anon_11;
typedef struct anon_31 anon_31;
typedef struct anon_38 anon_38;
typedef struct anon_46 anon_46;
typedef struct anon_44 anon_44;
typedef struct anon_42 anon_42;
typedef struct anon_30 anon_30;
typedef struct anon_17 anon_17;
typedef struct anon_51 anon_51;
typedef struct anon_13 anon_13;
typedef struct anon_15 anon_15;
typedef struct anon_37 anon_37;
typedef struct anon_43 anon_43;
typedef struct anon_21 anon_21;
typedef struct anon_41 anon_41;
typedef struct anon_50 anon_50;
typedef struct anon_12 anon_12;
typedef struct anon_16 anon_16;
typedef struct anon_24 anon_24;
typedef struct anon_32 anon_32;
typedef struct anon_20 anon_20;
typedef struct anon_29 anon_29;
typedef struct anon_35 anon_35;
typedef struct anon_48 anon_48;
typedef union anon_47 anon_47;
typedef struct tagGScontext tagGScontext;
typedef struct tagGLtexindex tagGLtexindex;
typedef struct tag_GLtexture_set tag_GLtexture_set;
typedef struct anon_18 anon_18;
typedef struct tagGsSetTex tagGsSetTex;
typedef struct tagGsLoadImage tagGsLoadImage;
typedef struct anon_14 anon_14;
typedef struct tagListNodeSingle tagListNodeSingle;
typedef struct anon_22 anon_22;
typedef struct tagListNode tagListNode;
typedef struct anon_25 anon_25;
typedef struct tag_GLtexture_image tag_GLtexture_image;
typedef struct anon_36 anon_36;
typedef struct anon_33 anon_33;
typedef struct tagGLlistpool tagGLlistpool;
typedef struct tagGLtexname tagGLtexname;
typedef struct tag_GLlight tag_GLlight;
typedef struct tagGLArrayInfo tagGLArrayInfo;
typedef struct tagGLcontext tagGLcontext;
typedef struct tagstVIFCode tagstVIFCode;

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

struct anon_28 {
    unsigned int FBP : 9; /* bit 0, byte +0x0 */
    unsigned int FBW : 6; /* bit 9, byte +0x0 */
    unsigned int PSM : 5; /* bit 15, byte +0x0 */
    unsigned int p0 : 12; /* bit 20, byte +0x0 */
    unsigned int DBX : 11; /* bit 0, byte +0x4 */
    unsigned int DBY : 11; /* bit 11, byte +0x4 */
    unsigned int p1 : 10; /* bit 22, byte +0x4 */
};

struct anon_45 {
    unsigned int DX : 12; /* bit 0, byte +0x0 */
    unsigned int DY : 11; /* bit 12, byte +0x0 */
    unsigned int MAGH : 4; /* bit 23, byte +0x0 */
    unsigned int MAGV : 2; /* bit 27, byte +0x0 */
    unsigned int p0 : 3; /* bit 29, byte +0x0 */
    unsigned int DW : 12; /* bit 0, byte +0x4 */
    unsigned int DH : 11; /* bit 12, byte +0x4 */
    unsigned int p1 : 9; /* bit 23, byte +0x4 */
};

struct tag_stDoubleBufAdd {
    anon_28 dispfb1[2]; /* +0x0 */
    anon_45 display1[2]; /* +0x10 */
};

struct anon_3 {
    unsigned int FBP : 9; /* bit 0, byte +0x0 */
    unsigned int FBW : 6; /* bit 9, byte +0x0 */
    unsigned int PSM : 5; /* bit 15, byte +0x0 */
    unsigned int p0 : 12; /* bit 20, byte +0x0 */
    unsigned int DBX : 11; /* bit 0, byte +0x4 */
    unsigned int DBY : 11; /* bit 11, byte +0x4 */
    unsigned int p1 : 10; /* bit 22, byte +0x4 */
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

struct anon_53 {
    unsigned int EN1 : 1; /* bit 0, byte +0x0 */
    unsigned int EN2 : 1; /* bit 1, byte +0x0 */
    unsigned int CRTMD : 3; /* bit 2, byte +0x0 */
    unsigned int MMOD : 1; /* bit 5, byte +0x0 */
    unsigned int AMOD : 1; /* bit 6, byte +0x0 */
    unsigned int SLBG : 1; /* bit 7, byte +0x0 */
    unsigned int ALP : 8; /* bit 8, byte +0x0 */
    unsigned int p0 : 16; /* bit 16, byte +0x0 */
    unsigned int p1; /* +0x4 */
};

struct anon_10 {
    unsigned int INT : 1; /* bit 0, byte +0x0 */
    unsigned int FFMD : 1; /* bit 1, byte +0x0 */
    unsigned int DPMS : 2; /* bit 2, byte +0x0 */
    unsigned int p0 : 28; /* bit 4, byte +0x0 */
    unsigned int p1; /* +0x4 */
};

struct anon_23 {
    unsigned int DX : 12; /* bit 0, byte +0x0 */
    unsigned int DY : 11; /* bit 12, byte +0x0 */
    unsigned int MAGH : 4; /* bit 23, byte +0x0 */
    unsigned int MAGV : 2; /* bit 27, byte +0x0 */
    unsigned int p0 : 3; /* bit 29, byte +0x0 */
    unsigned int DW : 12; /* bit 0, byte +0x4 */
    unsigned int DH : 11; /* bit 12, byte +0x4 */
    unsigned int p1 : 9; /* bit 23, byte +0x4 */
};

struct anon_27 {
    unsigned int R : 8; /* bit 0, byte +0x0 */
    unsigned int G : 8; /* bit 8, byte +0x0 */
    unsigned int B : 8; /* bit 16, byte +0x0 */
    unsigned int p0 : 8; /* bit 24, byte +0x0 */
    unsigned int p1; /* +0x4 */
};

struct anon_4 {
    anon_53 pmode; /* +0x0 */
    anon_10 smode2; /* +0x8 */
    anon_3 dispfb; /* +0x10 */
    anon_23 display; /* +0x18 */
    anon_27 bgcolor; /* +0x20 */
};

struct tagGLlistdatas {
    tagGLlistdatas* pNext; /* +0x0 */
    int apData[3]; /* +0x4 */
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

struct anon_5 {
    unsigned long TA0 : 8; /* bit 0, byte +0x0 */
    unsigned long pad08 : 7; /* bit 8, byte +0x0 */
    unsigned long AEM : 1; /* bit 15, byte +0x0 */
    unsigned long pad16 : 16; /* bit 16, byte +0x0 */
    unsigned long TA1 : 8; /* bit 32, byte +0x0 */
    unsigned long pad40 : 24; /* bit 40, byte +0x0 */
};

struct anon_6 {
    unsigned long AC : 1; /* bit 0, byte +0x0 */
    unsigned long pad01 : 63; /* bit 1, byte +0x0 */
};

struct anon_26 {
    unsigned long FBP : 9; /* bit 0, byte +0x0 */
    unsigned long pad09 : 7; /* bit 9, byte +0x0 */
    unsigned long FBW : 6; /* bit 16, byte +0x0 */
    unsigned long pad22 : 2; /* bit 22, byte +0x0 */
    unsigned long PSM : 6; /* bit 24, byte +0x0 */
    unsigned long pad30 : 2; /* bit 30, byte +0x0 */
    unsigned long FBMSK : 32; /* bit 32, byte +0x0 */
};

struct anon_49 {
    unsigned long ZBP : 9; /* bit 0, byte +0x0 */
    unsigned long pad09 : 15; /* bit 9, byte +0x0 */
    unsigned long PSM : 4; /* bit 24, byte +0x0 */
    unsigned long pad28 : 4; /* bit 28, byte +0x0 */
    unsigned long ZMSK : 1; /* bit 32, byte +0x0 */
    unsigned long pad33 : 31; /* bit 33, byte +0x0 */
};

struct anon_40 {
    unsigned long OFX : 16; /* bit 0, byte +0x0 */
    unsigned long pad16 : 16; /* bit 16, byte +0x0 */
    unsigned long OFY : 16; /* bit 32, byte +0x0 */
    unsigned long pad48 : 16; /* bit 48, byte +0x0 */
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

struct anon_39 {
    unsigned long CLAMP : 1; /* bit 0, byte +0x0 */
    unsigned long pad01 : 63; /* bit 1, byte +0x0 */
};

struct anon_9 {
    unsigned long DTHE : 1; /* bit 0, byte +0x0 */
    unsigned long pad01 : 63; /* bit 1, byte +0x0 */
};

struct anon_34 {
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

struct anon_7 {
    anon_26 frame1; /* +0x0 */
    unsigned long frame1addr; /* +0x8 */
    anon_49 zbuf1; /* +0x10 */
    long zbuf1addr; /* +0x18 */
    anon_40 xyoffset1; /* +0x20 */
    long xyoffset1addr; /* +0x28 */
    anon_19 scissor1; /* +0x30 */
    long scissor1addr; /* +0x38 */
    anon_6 prmodecont; /* +0x40 */
    long prmodecontaddr; /* +0x48 */
    anon_39 colclamp; /* +0x50 */
    long colclampaddr; /* +0x58 */
    anon_9 dthe; /* +0x60 */
    long dtheaddr; /* +0x68 */
    anon_34 test1; /* +0x70 */
    long test1addr; /* +0x78 */
};

struct anon_8 {
    unsigned long A : 2; /* bit 0, byte +0x0 */
    unsigned long B : 2; /* bit 2, byte +0x0 */
    unsigned long C : 2; /* bit 4, byte +0x0 */
    unsigned long D : 2; /* bit 6, byte +0x0 */
    unsigned long pad8 : 24; /* bit 8, byte +0x0 */
    unsigned long FIX : 8; /* bit 32, byte +0x0 */
    unsigned long pad40 : 24; /* bit 40, byte +0x0 */
};

struct anon_52 {
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

struct anon_11 {
    unsigned int R : 8; /* bit 0, byte +0x0 */
    unsigned int G : 8; /* bit 8, byte +0x0 */
    unsigned int B : 8; /* bit 16, byte +0x0 */
    unsigned int A : 8; /* bit 24, byte +0x0 */
    float Q; /* +0x4 */
};

struct anon_31 {
    float S; /* +0x0 */
    float T; /* +0x4 */
};

struct anon_38 {
    unsigned long U : 14; /* bit 0, byte +0x0 */
    unsigned long pad14 : 2; /* bit 14, byte +0x0 */
    unsigned long V : 14; /* bit 16, byte +0x0 */
    unsigned long pad30 : 34; /* bit 30, byte +0x0 */
};

struct anon_46 {
    unsigned long X : 16; /* bit 0, byte +0x0 */
    unsigned long Y : 16; /* bit 16, byte +0x0 */
    unsigned long Z : 24; /* bit 32, byte +0x0 */
    unsigned long F : 8; /* bit 56, byte +0x0 */
};

struct anon_44 {
    unsigned long X : 16; /* bit 0, byte +0x0 */
    unsigned long Y : 16; /* bit 16, byte +0x0 */
    unsigned long Z : 32; /* bit 32, byte +0x0 */
};

struct anon_42 {
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

struct anon_30 {
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

struct anon_51 {
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

struct anon_13 {
    unsigned long CBW : 6; /* bit 0, byte +0x0 */
    unsigned long COU : 6; /* bit 6, byte +0x0 */
    unsigned long COV : 10; /* bit 12, byte +0x0 */
    unsigned long pad22 : 42; /* bit 22, byte +0x0 */
};

struct anon_15 {
    unsigned long MSK : 2; /* bit 0, byte +0x0 */
    unsigned long pad02 : 62; /* bit 2, byte +0x0 */
};

struct anon_37 {
    unsigned long TBP1 : 14; /* bit 0, byte +0x0 */
    unsigned long TBW1 : 6; /* bit 14, byte +0x0 */
    unsigned long TBP2 : 14; /* bit 20, byte +0x0 */
    unsigned long TBW2 : 6; /* bit 34, byte +0x0 */
    unsigned long TBP3 : 14; /* bit 40, byte +0x0 */
    unsigned long TBW3 : 6; /* bit 54, byte +0x0 */
    unsigned long pad60 : 4; /* bit 60, byte +0x0 */
};

struct anon_43 {
    unsigned long TBP4 : 14; /* bit 0, byte +0x0 */
    unsigned long TBW4 : 6; /* bit 14, byte +0x0 */
    unsigned long TBP5 : 14; /* bit 20, byte +0x0 */
    unsigned long TBW5 : 6; /* bit 34, byte +0x0 */
    unsigned long TBP6 : 14; /* bit 40, byte +0x0 */
    unsigned long TBW6 : 6; /* bit 54, byte +0x0 */
    unsigned long pad60 : 4; /* bit 60, byte +0x0 */
};

struct anon_21 {
    unsigned long FCR : 8; /* bit 0, byte +0x0 */
    unsigned long FCG : 8; /* bit 8, byte +0x0 */
    unsigned long FCB : 8; /* bit 16, byte +0x0 */
    unsigned long pad24 : 40; /* bit 24, byte +0x0 */
};

struct anon_41 {
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

struct anon_50 {
    unsigned long PABE : 1; /* bit 0, byte +0x0 */
    unsigned long pad01 : 63; /* bit 1, byte +0x0 */
};

struct anon_12 {
    unsigned long FBA : 1; /* bit 0, byte +0x0 */
    unsigned long pad01 : 63; /* bit 1, byte +0x0 */
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

struct anon_24 {
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

struct anon_32 {
    unsigned long RRW : 12; /* bit 0, byte +0x0 */
    unsigned long pad12 : 20; /* bit 12, byte +0x0 */
    unsigned long RRH : 12; /* bit 32, byte +0x0 */
    unsigned long pad44 : 20; /* bit 44, byte +0x0 */
};

struct anon_20 {
    unsigned long XDR : 2; /* bit 0, byte +0x0 */
    unsigned long pad02 : 62; /* bit 2, byte +0x0 */
};

struct anon_29 {
    unsigned int ID; /* +0x0 */
    unsigned int IDMSK; /* +0x4 */
};

struct anon_35 {
    unsigned int ID; /* +0x0 */
    unsigned int IDMSK; /* +0x4 */
};

struct anon_48 {
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

union anon_47 {
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
    anon_52 PRIM; /* +0x0 */
    anon_11 RGBAQ; /* +0x8 */
    anon_31 ST; /* +0x10 */
    anon_38 UV; /* +0x18 */
    anon_46 XYZF2; /* +0x20 */
    anon_44 XYZ2; /* +0x28 */
    anon_42 TEX0_1; /* +0x30 */
    anon_42 TEX0_2; /* +0x38 */
    anon_30 CLAMP_1; /* +0x40 */
    anon_30 CLAMP_2; /* +0x48 */
    anon_17 FOG; /* +0x50 */
    anon_46 XYZF3; /* +0x58 */
    anon_44 XYZ3; /* +0x60 */
    anon_51 TEX1_1; /* +0x68 */
    anon_51 TEX1_2; /* +0x70 */
    anon_0 TEX2_1; /* +0x78 */
    anon_0 TEX2_2; /* +0x80 */
    anon_40 XYOFFSET_1; /* +0x88 */
    anon_40 XYOFFSET_2; /* +0x90 */
    anon_6 PRMODECONT; /* +0x98 */
    anon_2 PRMODE; /* +0xa0 */
    anon_13 TEXCLUT; /* +0xa8 */
    anon_15 SCANMSK; /* +0xb0 */
    anon_37 MIPTBP1_1; /* +0xb8 */
    anon_37 MIPTBP1_2; /* +0xc0 */
    anon_43 MIPTBP2_1; /* +0xc8 */
    anon_43 MIPTBP2_2; /* +0xd0 */
    anon_5 TEXA; /* +0xd8 */
    anon_21 FOGCOL; /* +0xe0 */
    tagsceGsReg TEXFLUSH; /* +0xe8 */
    anon_19 SCISSOR_1; /* +0xf0 */
    anon_19 SCISSOR_2; /* +0xf8 */
    anon_8 ALPHA_1; /* +0x100 */
    anon_8 ALPHA_2; /* +0x108 */
    anon_41 DIMX; /* +0x110 */
    anon_9 DTHE; /* +0x118 */
    anon_39 COLCLAMP; /* +0x120 */
    anon_34 TEST_1; /* +0x128 */
    anon_34 TEST_2; /* +0x130 */
    anon_50 PABE; /* +0x138 */
    anon_12 FBA_1; /* +0x140 */
    anon_12 FBA_2; /* +0x148 */
    anon_26 FRAME_1; /* +0x150 */
    anon_26 FRAME_2; /* +0x158 */
    anon_49 ZBUF_1; /* +0x160 */
    anon_49 ZBUF_2; /* +0x168 */
    anon_16 BITBLTBUF; /* +0x170 */
    anon_24 TRXPOS; /* +0x178 */
    anon_32 TRXREG; /* +0x180 */
    anon_20 TRXDIR; /* +0x188 */
    tagsceGsReg HWREG; /* +0x190 */
    anon_29 SIGNAL; /* +0x198 */
    tagsceGsReg FINISH; /* +0x1a0 */
    anon_35 LABEL; /* +0x1a8 */
    anon_48 ModFlgs; /* +0x1b0 */
    anon_48 GlobalModFlgs; /* +0x1b8 */
    anon_47 PackageBuffer[518]; /* +0x1c0 */
    int iBufCount; /* +0x2220 */
    anon_47* pqCurrent; /* +0x2224 */
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

struct anon_18 {
    unsigned long pad00; /* +0x0 */
};

struct tagGsSetTex {
    anon_1 gifTag; /* +0x0 */
    anon_18 texflush; /* +0x10 */
    long texflushaddr; /* +0x18 */
    anon_42 tex0; /* +0x20 */
    long tex0addr; /* +0x28 */
    anon_51 tex1; /* +0x30 */
    long tex1addr; /* +0x38 */
    anon_37 miptbp1; /* +0x40 */
    long miptbp1addr; /* +0x48 */
    anon_43 miptbp2; /* +0x50 */
    long miptbp2addr; /* +0x58 */
    anon_30 clamp; /* +0x60 */
    long clampaddr; /* +0x68 */
};

struct tagGsLoadImage {
    anon_1 gifTag; /* +0x0 */
    anon_16 bitbltbuf; /* +0x10 */
    long bitbltbufaddr; /* +0x18 */
    anon_24 trxpos; /* +0x20 */
    long trxposaddr; /* +0x28 */
    anon_32 trxreg; /* +0x30 */
    long trxregaddr; /* +0x38 */
    anon_20 trxdir; /* +0x40 */
    long trxdiraddr; /* +0x48 */
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

struct anon_22 {
    anon_1 giftag0; /* +0x0 */
    anon_16 bitbltbuf; /* +0x10 */
    long bitbltbufaddr; /* +0x18 */
    anon_24 trxpos; /* +0x20 */
    long trxposaddr; /* +0x28 */
    anon_32 trxreg; /* +0x30 */
    long trxregaddr; /* +0x38 */
    anon_20 trxdir; /* +0x40 */
    long trxdiraddr; /* +0x48 */
    anon_1 giftag1; /* +0x50 */
};

struct tagListNode {
    tagListNode* pNext; /* +0x0 */
    unsigned int nIndex; /* +0x4 */
    int iSize; /* +0x8 */
    int apData[1]; /* +0xc */
};

struct anon_25 {
    anon_26 frame2; /* +0x0 */
    unsigned long frame2addr; /* +0x8 */
    anon_49 zbuf2; /* +0x10 */
    long zbuf2addr; /* +0x18 */
    anon_40 xyoffset2; /* +0x20 */
    long xyoffset2addr; /* +0x28 */
    anon_19 scissor2; /* +0x30 */
    long scissor2addr; /* +0x38 */
    anon_6 prmodecont; /* +0x40 */
    long prmodecontaddr; /* +0x48 */
    anon_39 colclamp; /* +0x50 */
    long colclampaddr; /* +0x58 */
    anon_9 dthe; /* +0x60 */
    long dtheaddr; /* +0x68 */
    anon_34 test2; /* +0x70 */
    long test2addr; /* +0x78 */
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

struct anon_36 {
    anon_34 testa; /* +0x0 */
    long testaaddr; /* +0x8 */
    anon_52 prim; /* +0x10 */
    long primaddr; /* +0x18 */
    anon_11 rgbaq; /* +0x20 */
    long rgbaqaddr; /* +0x28 */
    anon_44 xyz2a; /* +0x30 */
    long xyz2aaddr; /* +0x38 */
    anon_44 xyz2b; /* +0x40 */
    long xyz2baddr; /* +0x48 */
    anon_34 testb; /* +0x50 */
    long testbaddr; /* +0x58 */
};

struct anon_33 {
    anon_4 disp[2]; /* +0x0 */
    anon_1 giftag0; /* +0x50 */
    anon_7 draw01; /* +0x60 */
    anon_25 draw02; /* +0xe0 */
    anon_36 clear0; /* +0x160 */
    anon_1 giftag1; /* +0x1c0 */
    anon_7 draw11; /* +0x1d0 */
    anon_25 draw12; /* +0x250 */
    anon_36 clear1; /* +0x2d0 */
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

struct tagstVIFCode {
    unsigned short IMMEDIATE; /* +0x0 */
    unsigned char NUM; /* +0x2 */
    unsigned char CMD; /* +0x3 */
};

int SwapBufferNotifyFunc;
int PS2GL_g_bProgressiveScan;
static unsigned int g_iFrame;
unsigned char bNeedSwapBuffer;
int g_UseOwnVBLHandler;
unsigned char g_bEnvInitialized;
int PS2GLBufferIsInverted;
anon_33 g_stDoubleBuf;
tag_stDoubleBufAdd g_stDoubleBufAdd;
_GL_BUFFERINFO g_stBufferInfo;
tagGScontext g_gsContext;
tagGLcontext g_PS2glContext;
int VBLCallback(int);
int PS2glLiberator;
int PS2glAllocator64;

/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_BufferControl.c lines 1570–1570 */
/* addr: 0x00140560  size: 8 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1570
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void PS2glSwapBufferNotifyFunc(void (*Func)(void))
{
    SwapBufferNotifyFunc = (int)Func;
}

/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_BufferControl.c lines 1492–1548 */
/* addr: 0x00140570  size: 452 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1492
 *   +0x0004 -> line 1493
 *   +0x0008 -> line 1492
 *   +0x000c -> line 1493
 *   +0x0018 -> line 1498
 *   +0x0020 -> line 1500
 *   +0x0038 -> line 1502
 *   +0x003c -> line 1505
 *   +0x0048 -> line 1508
 *   +0x0058 -> line 1510
 *   +0x0070 -> line 1511
 *   +0x0074 -> line 1510
 *   +0x0078 -> line 1511
 *   +0x007c -> line 1510
 *   +0x0080 -> line 1511
 *   +0x008c -> line 1510
 *   +0x0090 -> line 1511
 *   +0x0094 -> line 1510
 *   +0x0098 -> line 1511
 *   +0x00a0 -> line 1512
 *   +0x00a8 -> line 1515
 *   +0x00bc -> line 1516
 *   +0x00c0 -> line 1515
 *   +0x00c4 -> line 1516
 *   +0x00c8 -> line 1515
 *   +0x00cc -> line 1516
 *   +0x00d8 -> line 1515
 *   +0x00dc -> line 1516
 *   +0x00e0 -> line 1515
 *   +0x00e4 -> line 1516
 *   +0x00ec -> line 1526
 *   +0x00f4 -> line 1530
 *   +0x0104 -> line 1531
 *   +0x011c -> line 1532
 *   +0x0120 -> line 1531
 *   +0x0124 -> line 1532
 *   +0x0128 -> line 1531
 *   +0x012c -> line 1532
 *   +0x0138 -> line 1531
 *   +0x013c -> line 1532
 *   +0x0140 -> line 1531
 *   +0x0144 -> line 1532
 *   +0x014c -> line 1533
 *   +0x0154 -> line 1534
 *   +0x0168 -> line 1535
 *   +0x016c -> line 1534
 *   +0x0170 -> line 1535
 *   +0x0174 -> line 1534
 *   +0x0178 -> line 1535
 *   +0x0184 -> line 1534
 *   +0x0188 -> line 1535
 *   +0x018c -> line 1534
 *   +0x0190 -> line 1535
 *   +0x019c -> line 1544
 *   +0x01a8 -> line 1545
 *   +0x01b0 -> line 1547
 *   +0x01b8 -> line 1548
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void PS2glSwapBuffers(void)
{
    /* TODO: decompile from asm/... */
}

/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_BufferControl.c lines 1401–1487 */
/* addr: 0x00140740  size: 632 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1401
 *   +0x0008 -> line 1404
 *   +0x0014 -> line 1407
 *   +0x0018 -> line 1406
 *   +0x001c -> line 1407
 *   +0x0024 -> line 1409
 *   +0x0038 -> line 1412
 *   +0x0048 -> line 1415
 *   +0x0058 -> line 1417
 *   +0x0070 -> line 1418
 *   +0x0074 -> line 1417
 *   +0x0078 -> line 1418
 *   +0x007c -> line 1417
 *   +0x0080 -> line 1418
 *   +0x008c -> line 1417
 *   +0x0090 -> line 1418
 *   +0x0094 -> line 1417
 *   +0x0098 -> line 1418
 *   +0x00a0 -> line 1419
 *   +0x00a8 -> line 1422
 *   +0x00bc -> line 1423
 *   +0x00c0 -> line 1422
 *   +0x00c4 -> line 1423
 *   +0x00c8 -> line 1422
 *   +0x00cc -> line 1423
 *   +0x00d8 -> line 1422
 *   +0x00dc -> line 1423
 *   +0x00e0 -> line 1422
 *   +0x00e4 -> line 1423
 *   +0x00ec -> line 1433
 *   +0x00f4 -> line 1437
 *   +0x0104 -> line 1438
 *   +0x011c -> line 1439
 *   +0x0120 -> line 1438
 *   +0x0124 -> line 1439
 *   +0x0128 -> line 1438
 *   +0x012c -> line 1439
 *   +0x0138 -> line 1438
 *   +0x013c -> line 1439
 *   +0x0140 -> line 1438
 *   +0x0144 -> line 1439
 *   +0x014c -> line 1440
 *   +0x0154 -> line 1441
 *   +0x0168 -> line 1442
 *   +0x016c -> line 1441
 *   +0x0170 -> line 1442
 *   +0x0174 -> line 1441
 *   +0x0178 -> line 1442
 *   +0x0184 -> line 1441
 *   +0x0188 -> line 1442
 *   +0x018c -> line 1441
 *   +0x0190 -> line 1442
 *   +0x019c -> line 1451
 *   +0x01a8 -> line 1454
 *   +0x01b4 -> line 1455
 *   +0x01bc -> line 1456
 *   +0x01c8 -> line 1459
 *   +0x01f8 -> line 1460
 *   +0x0228 -> line 1467
 *   +0x0238 -> line 1480
 *   +0x0240 -> line 1481
 *   +0x0248 -> line 1482
 *   +0x0250 -> line 1483
 *   +0x0258 -> line 1485
 *   +0x0264 -> line 1486
 *   +0x026c -> line 1487
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void PS2glFakeSwapBuffers(void)
{
    short odev;
    /* TODO: decompile from asm/... */
}

/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_BufferControl.c lines 1384–1392 */
/* addr: 0x001409c0  size: 76 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1384
 *   +0x0004 -> line 1385
 *   +0x0008 -> line 1384
 *   +0x000c -> line 1385
 *   +0x0018 -> line 1387
 *   +0x0038 -> line 1390
 *   +0x0040 -> line 1392
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void PS2glFlushNotify(void)
{
    /* TODO: decompile from asm/... */
}

/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_BufferControl.c lines 1115–1381 */
/* addr: 0x00140a10  size: 2952 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1115
 *   +0x0004 -> line 1123
 *   +0x0008 -> line 1115
 *   +0x000c -> line 1125
 *   +0x0010 -> line 1123
 *   +0x0014 -> line 1125
 *   +0x0020 -> line 1126
 *   +0x0028 -> line 1128
 *   +0x0038 -> line 1130
 *   +0x0048 -> line 1135
 *   +0x004c -> line 1146
 *   +0x0050 -> line 1135
 *   +0x0054 -> line 1146
 *   +0x0058 -> line 1135
 *   +0x005c -> line 1136
 *   +0x0060 -> line 1137
 *   +0x0064 -> line 1144
 *   +0x0068 -> line 1135
 *   +0x0074 -> line 1136
 *   +0x0078 -> line 1135
 *   +0x007c -> line 1136
 *   +0x0080 -> line 1135
 *   +0x0084 -> line 1136
 *   +0x0090 -> line 1137
 *   +0x0094 -> line 1136
 *   +0x0098 -> line 1137
 *   +0x009c -> line 1136
 *   +0x00a0 -> line 1137
 *   +0x00ac -> line 1139
 *   +0x00b0 -> line 1137
 *   +0x00b4 -> line 1139
 *   +0x00b8 -> line 1137
 *   +0x00bc -> line 1139
 *   +0x00c8 -> line 1135
 *   +0x00cc -> line 1139
 *   +0x00d0 -> line 1135
 *   +0x00d4 -> line 1139
 *   +0x00d8 -> line 1136
 *   +0x00e0 -> line 1137
 *   +0x00e8 -> line 1140
 *   +0x00f0 -> line 1139
 *   +0x00f4 -> line 1140
 *   +0x00f8 -> line 1139
 *   +0x00fc -> line 1140
 *   +0x0100 -> line 1146
 *   +0x0104 -> line 1140
 *   +0x0108 -> line 1146
 *   +0x0118 -> line 1141
 *   +0x011c -> line 1140
 *   +0x0120 -> line 1141
 *   +0x0124 -> line 1140
 *   +0x0128 -> line 1141
 *   +0x0134 -> line 1143
 *   +0x0138 -> line 1141
 *   +0x013c -> line 1143
 *   +0x0140 -> line 1141
 *   +0x0144 -> line 1143
 *   +0x0150 -> line 1144
 *   +0x0164 -> line 1140
 *   +0x016c -> line 1141
 *   +0x0174 -> line 1143
 *   +0x0184 -> line 1144
 *   +0x0188 -> line 1145
 *   +0x0190 -> line 1144
 *   +0x0198 -> line 1145
 *   +0x019c -> line 1144
 *   +0x01a0 -> line 1145
 *   +0x01a8 -> line 1146
 *   +0x01ac -> line 1145
 *   +0x01b0 -> line 1146
 *   +0x01b4 -> line 1145
 *   +0x01b8 -> line 1148
 *   +0x01bc -> line 1146
 *   +0x01c0 -> line 1148
 *   +0x01d0 -> line 1149
 *   +0x01d4 -> line 1148
 *   +0x01d8 -> line 1149
 *   +0x01dc -> line 1148
 *   +0x01e0 -> line 1149
 *   +0x01ec -> line 1150
 *   +0x01f0 -> line 1149
 *   +0x01f4 -> line 1150
 *   +0x01f8 -> line 1149
 *   +0x01fc -> line 1145
 *   +0x0200 -> line 1150
 *   +0x0204 -> line 1145
 *   +0x0208 -> line 1146
 *   +0x0210 -> line 1148
 *   +0x0214 -> line 1146
 *   +0x0218 -> line 1148
 *   +0x021c -> line 1146
 *   +0x0220 -> line 1149
 *   +0x0224 -> line 1146
 *   +0x0228 -> line 1149
 *   +0x022c -> line 1146
 *   +0x0230 -> line 1150
 *   +0x0234 -> line 1146
 *   +0x0238 -> line 1150
 *   +0x023c -> line 1151
 *   +0x0240 -> line 1150
 *   +0x0244 -> line 1151
 *   +0x0248 -> line 1150
 *   +0x024c -> line 1146
 *   +0x0250 -> line 1151
 *   +0x0254 -> line 1146
 *   +0x0258 -> line 1150
 *   +0x0260 -> line 1151
 *   +0x0280 -> line 1163
 *   +0x0288 -> line 1179
 *   +0x028c -> line 1168
 *   +0x0290 -> line 1179
 *   +0x0294 -> line 1168
 *   +0x0298 -> line 1169
 *   +0x029c -> line 1170
 *   +0x02a0 -> line 1177
 *   +0x02a4 -> line 1168
 *   +0x02b0 -> line 1169
 *   +0x02b4 -> line 1168
 *   +0x02b8 -> line 1169
 *   +0x02bc -> line 1168
 *   +0x02c0 -> line 1169
 *   +0x02cc -> line 1170
 *   +0x02d0 -> line 1169
 *   +0x02d4 -> line 1170
 *   +0x02d8 -> line 1169
 *   +0x02dc -> line 1170
 *   +0x02e8 -> line 1172
 *   +0x02ec -> line 1170
 *   +0x02f0 -> line 1172
 *   +0x02f4 -> line 1170
 *   +0x02f8 -> line 1172
 *   +0x0304 -> line 1168
 *   +0x0308 -> line 1172
 *   +0x030c -> line 1168
 *   +0x0310 -> line 1172
 *   +0x0314 -> line 1169
 *   +0x031c -> line 1170
 *   +0x0324 -> line 1173
 *   +0x032c -> line 1172
 *   +0x0330 -> line 1173
 *   +0x0334 -> line 1172
 *   +0x0338 -> line 1173
 *   +0x033c -> line 1179
 *   +0x0340 -> line 1173
 *   +0x0344 -> line 1179
 *   +0x0354 -> line 1174
 *   +0x0358 -> line 1173
 *   +0x035c -> line 1174
 *   +0x0360 -> line 1173
 *   +0x0364 -> line 1174
 *   +0x0370 -> line 1176
 *   +0x0374 -> line 1174
 *   +0x0378 -> line 1176
 *   +0x037c -> line 1174
 *   +0x0380 -> line 1176
 *   +0x038c -> line 1177
 *   +0x03a0 -> line 1173
 *   +0x03a8 -> line 1174
 *   +0x03b0 -> line 1176
 *   +0x03c0 -> line 1177
 *   +0x03c4 -> line 1178
 *   +0x03cc -> line 1177
 *   +0x03d4 -> line 1178
 *   +0x03d8 -> line 1177
 *   +0x03dc -> line 1178
 *   +0x03e4 -> line 1179
 *   +0x03e8 -> line 1178
 *   +0x03ec -> line 1179
 *   +0x03f0 -> line 1178
 *   +0x03f4 -> line 1181
 *   +0x03f8 -> line 1179
 *   +0x03fc -> line 1181
 *   +0x040c -> line 1182
 *   +0x0410 -> line 1181
 *   +0x0414 -> line 1182
 *   +0x0418 -> line 1181
 *   +0x041c -> line 1182
 *   +0x0428 -> line 1183
 *   +0x042c -> line 1182
 *   +0x0430 -> line 1183
 *   +0x0434 -> line 1182
 *   +0x0438 -> line 1178
 *   +0x043c -> line 1183
 *   +0x0440 -> line 1178
 *   +0x0444 -> line 1179
 *   +0x044c -> line 1181
 *   +0x0450 -> line 1179
 *   +0x0454 -> line 1181
 *   +0x0458 -> line 1179
 *   +0x045c -> line 1182
 *   +0x0460 -> line 1179
 *   +0x0464 -> line 1182
 *   +0x0468 -> line 1179
 *   +0x046c -> line 1183
 *   +0x0470 -> line 1179
 *   +0x0474 -> line 1183
 *   +0x0478 -> line 1184
 *   +0x047c -> line 1183
 *   +0x0480 -> line 1184
 *   +0x0484 -> line 1183
 *   +0x0488 -> line 1179
 *   +0x048c -> line 1184
 *   +0x0490 -> line 1179
 *   +0x0494 -> line 1183
 *   +0x049c -> line 1184
 *   +0x04bc -> line 1197
 *   +0x04c4 -> line 1200
 *   +0x04d4 -> line 1205
 *   +0x04d8 -> line 1216
 *   +0x04dc -> line 1205
 *   +0x04e0 -> line 1216
 *   +0x04e4 -> line 1205
 *   +0x04e8 -> line 1206
 *   +0x04ec -> line 1207
 *   +0x04f0 -> line 1214
 *   +0x04f4 -> line 1205
 *   +0x0500 -> line 1206
 *   +0x0504 -> line 1205
 *   +0x0508 -> line 1206
 *   +0x050c -> line 1205
 *   +0x0510 -> line 1206
 *   +0x051c -> line 1207
 *   +0x0520 -> line 1206
 *   +0x0524 -> line 1207
 *   +0x0528 -> line 1206
 *   +0x052c -> line 1207
 *   +0x0538 -> line 1209
 *   +0x053c -> line 1207
 *   +0x0540 -> line 1209
 *   +0x0544 -> line 1207
 *   +0x0548 -> line 1209
 *   +0x0554 -> line 1205
 *   +0x0558 -> line 1209
 *   +0x055c -> line 1205
 *   +0x0560 -> line 1209
 *   +0x0564 -> line 1206
 *   +0x056c -> line 1207
 *   +0x0574 -> line 1210
 *   +0x057c -> line 1209
 *   +0x0580 -> line 1210
 *   +0x0584 -> line 1209
 *   +0x0588 -> line 1210
 *   +0x058c -> line 1216
 *   +0x0590 -> line 1210
 *   +0x0594 -> line 1216
 *   +0x05a4 -> line 1211
 *   +0x05a8 -> line 1210
 *   +0x05ac -> line 1211
 *   +0x05b0 -> line 1210
 *   +0x05b4 -> line 1211
 *   +0x05c0 -> line 1213
 *   +0x05c4 -> line 1211
 *   +0x05c8 -> line 1213
 *   +0x05cc -> line 1211
 *   +0x05d0 -> line 1213
 *   +0x05dc -> line 1214
 *   +0x05f0 -> line 1210
 *   +0x05f8 -> line 1211
 *   +0x0600 -> line 1213
 *   +0x0610 -> line 1214
 *   +0x0614 -> line 1215
 *   +0x061c -> line 1214
 *   +0x0624 -> line 1215
 *   +0x0628 -> line 1214
 *   +0x062c -> line 1215
 *   +0x0634 -> line 1216
 *   +0x0638 -> line 1215
 *   +0x063c -> line 1216
 *   +0x0640 -> line 1215
 *   +0x0644 -> line 1218
 *   +0x0648 -> line 1216
 *   +0x064c -> line 1218
 *   +0x065c -> line 1219
 *   +0x0660 -> line 1218
 *   +0x0664 -> line 1219
 *   +0x0668 -> line 1218
 *   +0x066c -> line 1219
 *   +0x0678 -> line 1220
 *   +0x067c -> line 1219
 *   +0x0680 -> line 1220
 *   +0x0684 -> line 1219
 *   +0x0688 -> line 1215
 *   +0x068c -> line 1220
 *   +0x0690 -> line 1215
 *   +0x0694 -> line 1216
 *   +0x069c -> line 1218
 *   +0x06a0 -> line 1216
 *   +0x06a4 -> line 1218
 *   +0x06a8 -> line 1216
 *   +0x06ac -> line 1219
 *   +0x06b0 -> line 1216
 *   +0x06b4 -> line 1219
 *   +0x06b8 -> line 1216
 *   +0x06bc -> line 1220
 *   +0x06c0 -> line 1216
 *   +0x06c4 -> line 1220
 *   +0x06c8 -> line 1221
 *   +0x06cc -> line 1220
 *   +0x06d0 -> line 1221
 *   +0x06d4 -> line 1220
 *   +0x06d8 -> line 1216
 *   +0x06dc -> line 1221
 *   +0x06e0 -> line 1216
 *   +0x06e4 -> line 1220
 *   +0x06ec -> line 1221
 *   +0x070c -> line 1233
 *   +0x0714 -> line 1249
 *   +0x0718 -> line 1238
 *   +0x071c -> line 1249
 *   +0x0720 -> line 1238
 *   +0x0724 -> line 1239
 *   +0x0728 -> line 1240
 *   +0x072c -> line 1247
 *   +0x0730 -> line 1238
 *   +0x073c -> line 1239
 *   +0x0740 -> line 1238
 *   +0x0744 -> line 1239
 *   +0x0748 -> line 1238
 *   +0x074c -> line 1239
 *   +0x0758 -> line 1240
 *   +0x075c -> line 1239
 *   +0x0760 -> line 1240
 *   +0x0764 -> line 1239
 *   +0x0768 -> line 1240
 *   +0x0774 -> line 1242
 *   +0x0778 -> line 1240
 *   +0x077c -> line 1242
 *   +0x0780 -> line 1240
 *   +0x0784 -> line 1242
 *   +0x0790 -> line 1238
 *   +0x0794 -> line 1242
 *   +0x0798 -> line 1238
 *   +0x079c -> line 1242
 *   +0x07a0 -> line 1239
 *   +0x07a8 -> line 1240
 *   +0x07b0 -> line 1243
 *   +0x07b8 -> line 1242
 *   +0x07bc -> line 1243
 *   +0x07c0 -> line 1242
 *   +0x07c4 -> line 1243
 *   +0x07c8 -> line 1249
 *   +0x07cc -> line 1243
 *   +0x07d0 -> line 1249
 *   +0x07e0 -> line 1244
 *   +0x07e4 -> line 1243
 *   +0x07e8 -> line 1244
 *   +0x07ec -> line 1243
 *   +0x07f0 -> line 1246
 *   +0x07f4 -> line 1244
 *   +0x07f8 -> line 1246
 *   +0x07fc -> line 1244
 *   +0x0800 -> line 1246
 *   +0x080c -> line 1247
 *   +0x0820 -> line 1248
 *   +0x0828 -> line 1243
 *   +0x082c -> line 1248
 *   +0x0830 -> line 1243
 *   +0x0834 -> line 1244
 *   +0x083c -> line 1246
 *   +0x0848 -> line 1247
 *   +0x084c -> line 1246
 *   +0x0850 -> line 1247
 *   +0x085c -> line 1248
 *   +0x0864 -> line 1249
 *   +0x0868 -> line 1248
 *   +0x086c -> line 1249
 *   +0x0870 -> line 1248
 *   +0x0874 -> line 1251
 *   +0x0878 -> line 1249
 *   +0x087c -> line 1251
 *   +0x088c -> line 1252
 *   +0x0890 -> line 1251
 *   +0x0894 -> line 1252
 *   +0x0898 -> line 1251
 *   +0x089c -> line 1252
 *   +0x08a8 -> line 1253
 *   +0x08ac -> line 1252
 *   +0x08b0 -> line 1253
 *   +0x08b4 -> line 1252
 *   +0x08b8 -> line 1248
 *   +0x08bc -> line 1253
 *   +0x08c0 -> line 1248
 *   +0x08c4 -> line 1249
 *   +0x08cc -> line 1251
 *   +0x08d4 -> line 1252
 *   +0x08d8 -> line 1249
 *   +0x08dc -> line 1252
 *   +0x08e0 -> line 1249
 *   +0x08e4 -> line 1253
 *   +0x08e8 -> line 1249
 *   +0x08ec -> line 1253
 *   +0x08f0 -> line 1249
 *   +0x08f8 -> line 1254
 *   +0x08fc -> line 1253
 *   +0x0900 -> line 1254
 *   +0x0904 -> line 1253
 *   +0x0908 -> line 1249
 *   +0x090c -> line 1254
 *   +0x0910 -> line 1249
 *   +0x0914 -> line 1253
 *   +0x091c -> line 1254
 *   +0x0940 -> line 1271
 *   +0x094c -> line 1272
 *   +0x0950 -> line 1271
 *   +0x0958 -> line 1272
 *   +0x0960 -> line 1271
 *   +0x0964 -> line 1272
 *   +0x096c -> line 1275
 *   +0x0974 -> line 1277
 *   +0x0988 -> line 1279
 *   +0x0998 -> line 1280
 *   +0x09a0 -> line 1287
 *   +0x09ac -> line 1288
 *   +0x09bc -> line 1293
 *   +0x09c4 -> line 1294
 *   +0x09d8 -> line 1299
 *   +0x09e0 -> line 1302
 *   +0x09f0 -> line 1306
 *   +0x09f8 -> line 1309
 *   +0x0a08 -> line 1310
 *   +0x0a14 -> line 1312
 *   +0x0a20 -> line 1315
 *   +0x0a30 -> line 1320
 *   +0x0a38 -> line 1323
 *   +0x0a4c -> line 1325
 *   +0x0a5c -> line 1326
 *   +0x0a64 -> line 1333
 *   +0x0a70 -> line 1334
 *   +0x0a80 -> line 1339
 *   +0x0a88 -> line 1340
 *   +0x0a9c -> line 1346
 *   +0x0acc -> line 1347
 *   +0x0afc -> line 1352
 *   +0x0b04 -> line 1354
 *   +0x0b14 -> line 1359
 *   +0x0b1c -> line 1362
 *   +0x0b2c -> line 1363
 *   +0x0b38 -> line 1365
 *   +0x0b44 -> line 1367
 *   +0x0b54 -> line 1373
 *   +0x0b60 -> line 1374
 *   +0x0b64 -> line 1375
 *   +0x0b68 -> line 1374
 *   +0x0b6c -> line 1375
 *   +0x0b74 -> line 1376
 *   +0x0b7c -> line 1381
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void PS2glExecSwapBuffers(void)
{
    short odev;
    /* TODO: decompile from asm/... */
}

/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_BufferControl.c lines 1088–1110 */
/* addr: 0x001415a0  size: 152 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1088
 *   +0x0038 -> line 1091
 *   +0x003c -> line 1092
 *   +0x0044 -> line 1094
 *   +0x004c -> line 1095
 *   +0x0054 -> line 1097
 *   +0x0058 -> line 1098
 *   +0x0060 -> line 1100
 *   +0x006c -> line 1101
 *   +0x0080 -> line 1103
 *   +0x0090 -> line 1110
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
unsigned int PS2glInternalGetScreenCalebration(unsigned int target)
{
    unsigned int uiReturn;
    /* TODO: decompile from asm/... */
}

/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_BufferControl.c lines 1050–1082 */
/* addr: 0x00141640  size: 720 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1050
 *   +0x0038 -> line 1053
 *   +0x00a4 -> line 1057
 *   +0x00ac -> line 1059
 *   +0x0144 -> line 1063
 *   +0x014c -> line 1065
 *   +0x01b8 -> line 1069
 *   +0x01c0 -> line 1071
 *   +0x01fc -> line 1075
 *   +0x0200 -> line 1071
 *   +0x0204 -> line 1075
 *   +0x0208 -> line 1071
 *   +0x0260 -> line 1075
 *   +0x0280 -> line 1077
 *   +0x0284 -> line 1078
 *   +0x0288 -> line 1077
 *   +0x0290 -> line 1078
 *   +0x0294 -> line 1077
 *   +0x029c -> line 1078
 *   +0x02a0 -> line 1077
 *   +0x02a4 -> line 1078
 *   +0x02a8 -> line 1077
 *   +0x02ac -> line 1078
 *   +0x02c8 -> line 1082
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void PS2glInternalSetScreenCalebration(unsigned int target, unsigned int uiNewValue)
{
    /* TODO: decompile from asm/... */
}

/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_BufferControl.c lines 1016–1046 */
/* addr: 0x00141910  size: 700 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1016
 *   +0x0004 -> line 1019
 *   +0x0008 -> line 1016
 *   +0x000c -> line 1020
 *   +0x0010 -> line 1016
 *   +0x0014 -> line 1019
 *   +0x0024 -> line 1020
 *   +0x0030 -> line 1021
 *   +0x0038 -> line 1022
 *   +0x0040 -> line 1023
 *   +0x0048 -> line 1025
 *   +0x004c -> line 1026
 *   +0x0050 -> line 1019
 *   +0x0054 -> line 1020
 *   +0x0058 -> line 1019
 *   +0x005c -> line 1026
 *   +0x0060 -> line 1020
 *   +0x0064 -> line 1026
 *   +0x0068 -> line 1025
 *   +0x006c -> line 1026
 *   +0x0070 -> line 1020
 *   +0x0098 -> line 1021
 *   +0x00c8 -> line 1022
 *   +0x00f8 -> line 1023
 *   +0x0128 -> line 1026
 *   +0x0130 -> line 1029
 *   +0x0164 -> line 1032
 *   +0x0168 -> line 1029
 *   +0x0170 -> line 1032
 *   +0x0178 -> line 1029
 *   +0x0198 -> line 1032
 *   +0x01a0 -> line 1033
 *   +0x01bc -> line 1034
 *   +0x01dc -> line 1033
 *   +0x01e4 -> line 1034
 *   +0x01e8 -> line 1033
 *   +0x01ec -> line 1034
 *   +0x0278 -> line 1036
 *   +0x028c -> line 1037
 *   +0x0298 -> line 1039
 *   +0x02a0 -> line 1040
 *   +0x02a4 -> line 1045
 *   +0x02ac -> line 1046
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void PS2glMotionBlur(void)
{
    anon_47 qOldAlpha;
    anon_47 qword;
    /* TODO: decompile from asm/... */
}

/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_BufferControl.c lines 949–990 */
/* addr: 0x00141bd0  size: 516 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 949
 *   +0x0004 -> line 952
 *   +0x0010 -> line 954
 *   +0x0028 -> line 957
 *   +0x003c -> line 958
 *   +0x0044 -> line 962
 *   +0x005c -> line 964
 *   +0x0070 -> line 965
 *   +0x0078 -> line 964
 *   +0x00a0 -> line 965
 *   +0x00a4 -> line 964
 *   +0x00a8 -> line 965
 *   +0x00d8 -> line 968
 *   +0x00dc -> line 966
 *   +0x00ec -> line 967
 *   +0x00f8 -> line 968
 *   +0x0100 -> line 970
 *   +0x0108 -> line 973
 *   +0x0120 -> line 976
 *   +0x0134 -> line 977
 *   +0x013c -> line 981
 *   +0x0154 -> line 983
 *   +0x0178 -> line 984
 *   +0x017c -> line 983
 *   +0x0198 -> line 984
 *   +0x01d0 -> line 987
 *   +0x01d4 -> line 985
 *   +0x01e4 -> line 986
 *   +0x01f0 -> line 987
 *   +0x01f8 -> line 990
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void MySwapBuff3Dc(anon_33* db, int bufferNum)
{
    /* TODO: decompile from asm/... */
}

/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_BufferControl.c lines 194–878 */
/* addr: 0x00141de0  size: 6208 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 194
 *   +0x0030 -> line 198
 *   +0x0034 -> line 195
 *   +0x0038 -> line 198
 *   +0x0040 -> line 200
 *   +0x0048 -> line 207
 *   +0x005c -> line 209
 *   +0x0060 -> line 208
 *   +0x0064 -> line 209
 *   +0x0074 -> line 210
 *   +0x0080 -> line 211
 *   +0x00a8 -> line 212
 *   +0x00b0 -> line 214
 *   +0x00d0 -> line 215
 *   +0x00d8 -> line 217
 *   +0x00dc -> line 218
 *   +0x00f4 -> line 219
 *   +0x00f8 -> line 223
 *   +0x0108 -> line 224
 *   +0x0114 -> line 225
 *   +0x0118 -> line 227
 *   +0x0138 -> line 229
 *   +0x0140 -> line 230
 *   +0x014c -> line 231
 *   +0x0150 -> line 232
 *   +0x0158 -> line 234
 *   +0x0170 -> line 236
 *   +0x017c -> line 237
 *   +0x0188 -> line 238
 *   +0x018c -> line 239
 *   +0x0190 -> line 241
 *   +0x0198 -> line 243
 *   +0x019c -> line 246
 *   +0x01a8 -> line 249
 *   +0x01b4 -> line 253
 *   +0x01c4 -> line 254
 *   +0x01d4 -> line 261
 *   +0x01dc -> line 266
 *   +0x01e8 -> line 268
 *   +0x01f0 -> line 269
 *   +0x01f8 -> line 272
 *   +0x0200 -> line 276
 *   +0x0264 -> line 279
 *   +0x02d0 -> line 282
 *   +0x0318 -> line 291
 *   +0x0334 -> line 293
 *   +0x0338 -> line 292
 *   +0x033c -> line 293
 *   +0x0344 -> line 295
 *   +0x0354 -> line 296
 *   +0x0368 -> line 305
 *   +0x0374 -> line 316
 *   +0x0380 -> line 318
 *   +0x03a8 -> line 321
 *   +0x03bc -> line 322
 *   +0x03cc -> line 323
 *   +0x03d0 -> line 326
 *   +0x03d4 -> line 328
 *   +0x03e4 -> line 330
 *   +0x0448 -> line 332
 *   +0x04a0 -> line 359
 *   +0x04b0 -> line 361
 *   +0x04b4 -> line 359
 *   +0x04b8 -> line 361
 *   +0x04bc -> line 359
 *   +0x04c0 -> line 362
 *   +0x04c4 -> line 361
 *   +0x04c8 -> line 362
 *   +0x04cc -> line 361
 *   +0x04d0 -> line 359
 *   +0x04d4 -> line 362
 *   +0x04d8 -> line 359
 *   +0x04dc -> line 362
 *   +0x04e0 -> line 361
 *   +0x04e8 -> line 362
 *   +0x04f0 -> line 366
 *   +0x04fc -> line 369
 *   +0x0500 -> line 372
 *   +0x0504 -> line 369
 *   +0x050c -> line 372
 *   +0x0510 -> line 385
 *   +0x0514 -> line 372
 *   +0x0518 -> line 369
 *   +0x051c -> line 372
 *   +0x0520 -> line 369
 *   +0x0524 -> line 373
 *   +0x0528 -> line 372
 *   +0x052c -> line 373
 *   +0x0530 -> line 372
 *   +0x0534 -> line 374
 *   +0x0538 -> line 373
 *   +0x053c -> line 374
 *   +0x0540 -> line 373
 *   +0x0544 -> line 375
 *   +0x0548 -> line 374
 *   +0x054c -> line 375
 *   +0x0550 -> line 374
 *   +0x0554 -> line 376
 *   +0x0558 -> line 375
 *   +0x055c -> line 376
 *   +0x0560 -> line 375
 *   +0x0564 -> line 377
 *   +0x0568 -> line 376
 *   +0x056c -> line 377
 *   +0x0570 -> line 369
 *   +0x0574 -> line 377
 *   +0x0578 -> line 369
 *   +0x057c -> line 376
 *   +0x0580 -> line 372
 *   +0x0584 -> line 377
 *   +0x0588 -> line 372
 *   +0x058c -> line 373
 *   +0x0594 -> line 374
 *   +0x059c -> line 375
 *   +0x05a4 -> line 376
 *   +0x05ac -> line 377
 *   +0x05b4 -> line 385
 *   +0x05c0 -> line 386
 *   +0x05c8 -> line 388
 *   +0x05cc -> line 389
 *   +0x05d4 -> line 395
 *   +0x05d8 -> line 393
 *   +0x05dc -> line 408
 *   +0x05e0 -> line 395
 *   +0x05e4 -> line 393
 *   +0x05e8 -> line 395
 *   +0x05ec -> line 393
 *   +0x05f0 -> line 396
 *   +0x05f4 -> line 395
 *   +0x05f8 -> line 396
 *   +0x05fc -> line 395
 *   +0x0600 -> line 397
 *   +0x0604 -> line 396
 *   +0x0608 -> line 397
 *   +0x060c -> line 396
 *   +0x0610 -> line 398
 *   +0x0614 -> line 397
 *   +0x0618 -> line 398
 *   +0x061c -> line 397
 *   +0x0620 -> line 399
 *   +0x0624 -> line 398
 *   +0x0628 -> line 399
 *   +0x062c -> line 398
 *   +0x0630 -> line 400
 *   +0x0634 -> line 399
 *   +0x0638 -> line 400
 *   +0x063c -> line 393
 *   +0x0640 -> line 400
 *   +0x0644 -> line 393
 *   +0x0648 -> line 399
 *   +0x064c -> line 395
 *   +0x0650 -> line 400
 *   +0x0654 -> line 395
 *   +0x0658 -> line 396
 *   +0x0660 -> line 397
 *   +0x0668 -> line 398
 *   +0x0670 -> line 399
 *   +0x0678 -> line 400
 *   +0x0680 -> line 408
 *   +0x068c -> line 409
 *   +0x0698 -> line 411
 *   +0x069c -> line 415
 *   +0x06a0 -> line 417
 *   +0x06a4 -> line 415
 *   +0x06a8 -> line 417
 *   +0x06ac -> line 418
 *   +0x06b0 -> line 420
 *   +0x06b4 -> line 418
 *   +0x06b8 -> line 417
 *   +0x06bc -> line 418
 *   +0x06c0 -> line 421
 *   +0x06c4 -> line 422
 *   +0x06c8 -> line 416
 *   +0x06d0 -> line 417
 *   +0x06d8 -> line 418
 *   +0x06e0 -> line 420
 *   +0x06e4 -> line 418
 *   +0x06e8 -> line 420
 *   +0x06ec -> line 433
 *   +0x06f0 -> line 415
 *   +0x06f8 -> line 416
 *   +0x06fc -> line 421
 *   +0x0700 -> line 416
 *   +0x0704 -> line 429
 *   +0x070c -> line 417
 *   +0x071c -> line 418
 *   +0x0720 -> line 422
 *   +0x0724 -> line 418
 *   +0x0728 -> line 421
 *   +0x072c -> line 418
 *   +0x0730 -> line 421
 *   +0x0734 -> line 418
 *   +0x0748 -> line 424
 *   +0x074c -> line 421
 *   +0x0750 -> line 424
 *   +0x0754 -> line 425
 *   +0x075c -> line 426
 *   +0x0764 -> line 427
 *   +0x0768 -> line 426
 *   +0x076c -> line 427
 *   +0x0770 -> line 426
 *   +0x0774 -> line 430
 *   +0x0778 -> line 427
 *   +0x077c -> line 430
 *   +0x0780 -> line 424
 *   +0x0784 -> line 430
 *   +0x0788 -> line 424
 *   +0x078c -> line 425
 *   +0x0794 -> line 418
 *   +0x079c -> line 421
 *   +0x07a8 -> line 430
 *   +0x07ac -> line 426
 *   +0x07b4 -> line 430
 *   +0x07bc -> line 422
 *   +0x07c4 -> line 427
 *   +0x07c8 -> line 422
 *   +0x07cc -> line 427
 *   +0x07d0 -> line 422
 *   +0x07d4 -> line 431
 *   +0x07d8 -> line 427
 *   +0x07dc -> line 431
 *   +0x07e0 -> line 422
 *   +0x07e4 -> line 431
 *   +0x07e8 -> line 422
 *   +0x07ec -> line 431
 *   +0x07f4 -> line 427
 *   +0x07f8 -> line 431
 *   +0x07fc -> line 427
 *   +0x0814 -> line 433
 *   +0x0838 -> line 434
 *   +0x0844 -> line 435
 *   +0x0850 -> line 436
 *   +0x0858 -> line 439
 *   +0x08bc -> line 441
 *   +0x0904 -> line 450
 *   +0x0914 -> line 452
 *   +0x0918 -> line 450
 *   +0x091c -> line 452
 *   +0x0920 -> line 450
 *   +0x0924 -> line 453
 *   +0x0928 -> line 452
 *   +0x092c -> line 453
 *   +0x0930 -> line 452
 *   +0x0934 -> line 450
 *   +0x0938 -> line 453
 *   +0x093c -> line 450
 *   +0x0940 -> line 453
 *   +0x0944 -> line 452
 *   +0x094c -> line 453
 *   +0x0954 -> line 457
 *   +0x0960 -> line 460
 *   +0x0964 -> line 462
 *   +0x0968 -> line 460
 *   +0x0974 -> line 462
 *   +0x0978 -> line 477
 *   +0x097c -> line 462
 *   +0x0980 -> line 460
 *   +0x0984 -> line 462
 *   +0x0988 -> line 460
 *   +0x098c -> line 463
 *   +0x0990 -> line 462
 *   +0x0994 -> line 463
 *   +0x0998 -> line 462
 *   +0x099c -> line 465
 *   +0x09a0 -> line 463
 *   +0x09a4 -> line 465
 *   +0x09a8 -> line 463
 *   +0x09ac -> line 466
 *   +0x09b0 -> line 465
 *   +0x09b4 -> line 466
 *   +0x09b8 -> line 465
 *   +0x09bc -> line 468
 *   +0x09c0 -> line 466
 *   +0x09c4 -> line 468
 *   +0x09c8 -> line 466
 *   +0x09cc -> line 469
 *   +0x09d0 -> line 468
 *   +0x09d4 -> line 469
 *   +0x09d8 -> line 460
 *   +0x09dc -> line 469
 *   +0x09e0 -> line 460
 *   +0x09e4 -> line 468
 *   +0x09e8 -> line 462
 *   +0x09ec -> line 469
 *   +0x09f0 -> line 462
 *   +0x09f4 -> line 463
 *   +0x09fc -> line 465
 *   +0x0a04 -> line 466
 *   +0x0a0c -> line 468
 *   +0x0a14 -> line 469
 *   +0x0a1c -> line 477
 *   +0x0a28 -> line 478
 *   +0x0a34 -> line 480
 *   +0x0a38 -> line 481
 *   +0x0a40 -> line 487
 *   +0x0a44 -> line 485
 *   +0x0a48 -> line 490
 *   +0x0a50 -> line 487
 *   +0x0a54 -> line 502
 *   +0x0a58 -> line 487
 *   +0x0a5c -> line 485
 *   +0x0a60 -> line 487
 *   +0x0a64 -> line 485
 *   +0x0a68 -> line 488
 *   +0x0a6c -> line 487
 *   +0x0a70 -> line 488
 *   +0x0a74 -> line 487
 *   +0x0a78 -> line 490
 *   +0x0a7c -> line 488
 *   +0x0a80 -> line 490
 *   +0x0a84 -> line 488
 *   +0x0a88 -> line 491
 *   +0x0a8c -> line 490
 *   +0x0a90 -> line 491
 *   +0x0a94 -> line 490
 *   +0x0a98 -> line 493
 *   +0x0a9c -> line 491
 *   +0x0aa0 -> line 493
 *   +0x0aa4 -> line 491
 *   +0x0aa8 -> line 494
 *   +0x0aac -> line 493
 *   +0x0ab0 -> line 494
 *   +0x0ab4 -> line 485
 *   +0x0ab8 -> line 494
 *   +0x0abc -> line 485
 *   +0x0ac0 -> line 493
 *   +0x0ac4 -> line 487
 *   +0x0ac8 -> line 494
 *   +0x0acc -> line 487
 *   +0x0ad0 -> line 488
 *   +0x0ad8 -> line 490
 *   +0x0ae0 -> line 491
 *   +0x0ae8 -> line 493
 *   +0x0af0 -> line 494
 *   +0x0af8 -> line 502
 *   +0x0b04 -> line 503
 *   +0x0b0c -> line 505
 *   +0x0b14 -> line 509
 *   +0x0b18 -> line 511
 *   +0x0b1c -> line 509
 *   +0x0b20 -> line 511
 *   +0x0b24 -> line 512
 *   +0x0b28 -> line 514
 *   +0x0b2c -> line 512
 *   +0x0b30 -> line 511
 *   +0x0b34 -> line 512
 *   +0x0b38 -> line 515
 *   +0x0b3c -> line 516
 *   +0x0b40 -> line 510
 *   +0x0b48 -> line 511
 *   +0x0b50 -> line 512
 *   +0x0b58 -> line 514
 *   +0x0b5c -> line 512
 *   +0x0b60 -> line 514
 *   +0x0b64 -> line 527
 *   +0x0b68 -> line 509
 *   +0x0b70 -> line 510
 *   +0x0b74 -> line 515
 *   +0x0b78 -> line 510
 *   +0x0b7c -> line 523
 *   +0x0b84 -> line 511
 *   +0x0b94 -> line 512
 *   +0x0b98 -> line 516
 *   +0x0b9c -> line 512
 *   +0x0ba0 -> line 515
 *   +0x0ba4 -> line 512
 *   +0x0ba8 -> line 515
 *   +0x0bac -> line 512
 *   +0x0bc0 -> line 518
 *   +0x0bc4 -> line 515
 *   +0x0bc8 -> line 518
 *   +0x0bcc -> line 519
 *   +0x0bd4 -> line 520
 *   +0x0bdc -> line 521
 *   +0x0be0 -> line 520
 *   +0x0be4 -> line 521
 *   +0x0be8 -> line 520
 *   +0x0bec -> line 524
 *   +0x0bf0 -> line 521
 *   +0x0bf4 -> line 524
 *   +0x0bf8 -> line 518
 *   +0x0bfc -> line 524
 *   +0x0c00 -> line 518
 *   +0x0c04 -> line 519
 *   +0x0c0c -> line 512
 *   +0x0c14 -> line 515
 *   +0x0c20 -> line 524
 *   +0x0c24 -> line 520
 *   +0x0c2c -> line 524
 *   +0x0c34 -> line 516
 *   +0x0c3c -> line 521
 *   +0x0c40 -> line 516
 *   +0x0c44 -> line 521
 *   +0x0c48 -> line 516
 *   +0x0c4c -> line 525
 *   +0x0c50 -> line 521
 *   +0x0c54 -> line 525
 *   +0x0c58 -> line 516
 *   +0x0c5c -> line 525
 *   +0x0c60 -> line 516
 *   +0x0c64 -> line 525
 *   +0x0c6c -> line 521
 *   +0x0c70 -> line 525
 *   +0x0c74 -> line 521
 *   +0x0c8c -> line 527
 *   +0x0cb0 -> line 528
 *   +0x0cbc -> line 529
 *   +0x0cc8 -> line 532
 *   +0x0cd0 -> line 533
 *   +0x0cd8 -> line 534
 *   +0x0ce0 -> line 535
 *   +0x0ce8 -> line 534
 *   +0x0cec -> line 537
 *   +0x0cf4 -> line 535
 *   +0x0cf8 -> line 534
 *   +0x0d00 -> line 535
 *   +0x0d04 -> line 537
 *   +0x0d0c -> line 541
 *   +0x0d10 -> line 539
 *   +0x0d14 -> line 541
 *   +0x0d18 -> line 539
 *   +0x0d20 -> line 540
 *   +0x0d24 -> line 542
 *   +0x0d2c -> line 544
 *   +0x0d38 -> line 546
 *   +0x0d50 -> line 550
 *   +0x0d58 -> line 552
 *   +0x0d64 -> line 553
 *   +0x0d74 -> line 555
 *   +0x0d80 -> line 556
 *   +0x0d84 -> line 557
 *   +0x0d90 -> line 560
 *   +0x0d94 -> line 559
 *   +0x0d98 -> line 561
 *   +0x0da0 -> line 563
 *   +0x0dac -> line 565
 *   +0x0db4 -> line 568
 *   +0x0dd0 -> line 570
 *   +0x0dd8 -> line 576
 *   +0x0de8 -> line 578
 *   +0x0e2c -> line 581
 *   +0x0e90 -> line 593
 *   +0x0eb8 -> line 594
 *   +0x0ec4 -> line 598
 *   +0x0ed0 -> line 601
 *   +0x0eec -> line 602
 *   +0x0ef4 -> line 605
 *   +0x0efc -> line 608
 *   +0x0f40 -> line 611
 *   +0x0f94 -> line 619
 *   +0x0fbc -> line 620
 *   +0x0fc8 -> line 624
 *   +0x0fd4 -> line 627
 *   +0x0ff0 -> line 628
 *   +0x0ffc -> line 630
 *   +0x1000 -> line 632
 *   +0x1008 -> line 633
 *   +0x1010 -> line 634
 *   +0x1018 -> line 635
 *   +0x1020 -> line 634
 *   +0x1024 -> line 637
 *   +0x1028 -> line 635
 *   +0x102c -> line 637
 *   +0x1030 -> line 634
 *   +0x1038 -> line 635
 *   +0x1044 -> line 637
 *   +0x104c -> line 641
 *   +0x1050 -> line 639
 *   +0x1054 -> line 641
 *   +0x1058 -> line 639
 *   +0x1060 -> line 640
 *   +0x1064 -> line 642
 *   +0x106c -> line 644
 *   +0x1078 -> line 646
 *   +0x1090 -> line 650
 *   +0x1098 -> line 652
 *   +0x10a4 -> line 653
 *   +0x10b4 -> line 655
 *   +0x10c0 -> line 656
 *   +0x10c4 -> line 657
 *   +0x10d0 -> line 660
 *   +0x10d4 -> line 659
 *   +0x10d8 -> line 661
 *   +0x10e0 -> line 663
 *   +0x10f0 -> line 667
 *   +0x1100 -> line 671
 *   +0x1104 -> line 674
 *   +0x1108 -> line 671
 *   +0x1114 -> line 673
 *   +0x111c -> line 674
 *   +0x1120 -> line 675
 *   +0x113c -> line 678
 *   +0x1144 -> line 681
 *   +0x1148 -> line 680
 *   +0x114c -> line 681
 *   +0x1150 -> line 680
 *   +0x1158 -> line 681
 *   +0x115c -> line 685
 *   +0x1168 -> line 689
 *   +0x1170 -> line 686
 *   +0x1174 -> line 689
 *   +0x1178 -> line 697
 *   +0x117c -> line 698
 *   +0x1184 -> line 700
 *   +0x1188 -> line 702
 *   +0x119c -> line 703
 *   +0x11a0 -> line 705
 *   +0x11ac -> line 710
 *   +0x11bc -> line 719
 *   +0x11c4 -> line 720
 *   +0x11cc -> line 722
 *   +0x11d0 -> line 711
 *   +0x11d4 -> line 710
 *   +0x11d8 -> line 711
 *   +0x11dc -> line 710
 *   +0x11e0 -> line 712
 *   +0x11e4 -> line 711
 *   +0x11e8 -> line 712
 *   +0x11ec -> line 711
 *   +0x11f0 -> line 713
 *   +0x11f4 -> line 712
 *   +0x11f8 -> line 713
 *   +0x11fc -> line 712
 *   +0x1200 -> line 718
 *   +0x1204 -> line 713
 *   +0x1208 -> line 718
 *   +0x120c -> line 719
 *   +0x1220 -> line 710
 *   +0x1224 -> line 719
 *   +0x1228 -> line 710
 *   +0x122c -> line 713
 *   +0x1230 -> line 711
 *   +0x1234 -> line 719
 *   +0x1238 -> line 711
 *   +0x123c -> line 720
 *   +0x1240 -> line 712
 *   +0x1244 -> line 721
 *   +0x1248 -> line 712
 *   +0x124c -> line 723
 *   +0x1250 -> line 713
 *   +0x1254 -> line 721
 *   +0x1258 -> line 713
 *   +0x125c -> line 725
 *   +0x1260 -> line 719
 *   +0x1268 -> line 718
 *   +0x1274 -> line 724
 *   +0x1278 -> line 719
 *   +0x1284 -> line 720
 *   +0x1288 -> line 727
 *   +0x128c -> line 720
 *   +0x12a0 -> line 722
 *   +0x12a4 -> line 720
 *   +0x12a8 -> line 722
 *   +0x12ac -> line 720
 *   +0x12b0 -> line 724
 *   +0x12b4 -> line 722
 *   +0x12b8 -> line 724
 *   +0x12bc -> line 722
 *   +0x12c0 -> line 726
 *   +0x12c4 -> line 724
 *   +0x12c8 -> line 726
 *   +0x12cc -> line 724
 *   +0x12d0 -> line 728
 *   +0x12d4 -> line 726
 *   +0x12d8 -> line 728
 *   +0x12dc -> line 726
 *   +0x12e0 -> line 720
 *   +0x12e4 -> line 728
 *   +0x12e8 -> line 720
 *   +0x12ec -> line 728
 *   +0x12f0 -> line 720
 *   +0x12f8 -> line 722
 *   +0x1300 -> line 724
 *   +0x1308 -> line 726
 *   +0x130c -> line 759
 *   +0x1310 -> line 726
 *   +0x1314 -> line 728
 *   +0x131c -> line 759
 *   +0x1320 -> line 770
 *   +0x1324 -> line 759
 *   +0x1328 -> line 770
 *   +0x132c -> line 759
 *   +0x1330 -> line 770
 *   +0x1334 -> line 759
 *   +0x1338 -> line 760
 *   +0x1348 -> line 761
 *   +0x1358 -> line 762
 *   +0x1368 -> line 763
 *   +0x1378 -> line 764
 *   +0x1388 -> line 721
 *   +0x13a0 -> line 723
 *   +0x13a4 -> line 721
 *   +0x13a8 -> line 723
 *   +0x13ac -> line 721
 *   +0x13b0 -> line 725
 *   +0x13b4 -> line 723
 *   +0x13b8 -> line 725
 *   +0x13bc -> line 723
 *   +0x13c0 -> line 727
 *   +0x13c4 -> line 725
 *   +0x13c8 -> line 727
 *   +0x13cc -> line 725
 *   +0x13d0 -> line 729
 *   +0x13d8 -> line 730
 *   +0x13e0 -> line 721
 *   +0x13f0 -> line 723
 *   +0x13f8 -> line 725
 *   +0x1400 -> line 727
 *   +0x140c -> line 729
 *   +0x1410 -> line 727
 *   +0x1414 -> line 729
 *   +0x1420 -> line 722
 *   +0x1424 -> line 730
 *   +0x1428 -> line 722
 *   +0x142c -> line 730
 *   +0x1434 -> line 722
 *   +0x1438 -> line 730
 *   +0x143c -> line 722
 *   +0x1440 -> line 731
 *   +0x1448 -> line 732
 *   +0x144c -> line 731
 *   +0x1450 -> line 732
 *   +0x1454 -> line 731
 *   +0x1458 -> line 734
 *   +0x145c -> line 732
 *   +0x1460 -> line 734
 *   +0x1464 -> line 732
 *   +0x1468 -> line 722
 *   +0x146c -> line 734
 *   +0x1470 -> line 722
 *   +0x1474 -> line 734
 *   +0x1478 -> line 731
 *   +0x1480 -> line 732
 *   +0x1488 -> line 734
 *   +0x1490 -> line 723
 *   +0x1498 -> line 733
 *   +0x149c -> line 723
 *   +0x14a0 -> line 733
 *   +0x14a4 -> line 723
 *   +0x14a8 -> line 735
 *   +0x14ac -> line 733
 *   +0x14b0 -> line 735
 *   +0x14b4 -> line 733
 *   +0x14b8 -> line 723
 *   +0x14bc -> line 735
 *   +0x14c0 -> line 723
 *   +0x14c4 -> line 735
 *   +0x14c8 -> line 733
 *   +0x14d0 -> line 735
 *   +0x14d8 -> line 724
 *   +0x14f0 -> line 725
 *   +0x1508 -> line 726
 *   +0x1520 -> line 727
 *   +0x1538 -> line 728
 *   +0x1550 -> line 729
 *   +0x1568 -> line 730
 *   +0x1580 -> line 731
 *   +0x1598 -> line 732
 *   +0x15b0 -> line 733
 *   +0x15c8 -> line 734
 *   +0x15e0 -> line 735
 *   +0x15f4 -> line 770
 *   +0x15fc -> line 771
 *   +0x1600 -> line 772
 *   +0x1604 -> line 771
 *   +0x1618 -> line 772
 *   +0x1620 -> line 771
 *   +0x1630 -> line 772
 *   +0x1648 -> line 832
 *   +0x1654 -> line 834
 *   +0x166c -> line 835
 *   +0x1684 -> line 836
 *   +0x168c -> line 839
 *   +0x16a0 -> line 840
 *   +0x16b8 -> line 842
 *   +0x16d0 -> line 844
 *   +0x16d4 -> line 842
 *   +0x16e4 -> line 844
 *   +0x16e8 -> line 842
 *   +0x16ec -> line 844
 *   +0x16f0 -> line 842
 *   +0x16f8 -> line 844
 *   +0x16fc -> line 842
 *   +0x1700 -> line 844
 *   +0x1704 -> line 842
 *   +0x1708 -> line 844
 *   +0x1710 -> line 846
 *   +0x1794 -> line 847
 *   +0x17b0 -> line 856
 *   +0x17bc -> line 859
 *   +0x17c4 -> line 862
 *   +0x17cc -> line 863
 *   +0x17d0 -> line 865
 *   +0x17d8 -> line 866
 *   +0x17dc -> line 869
 *   +0x17e0 -> line 866
 *   +0x17e4 -> line 874
 *   +0x17e8 -> line 869
 *   +0x17f8 -> line 870
 *   +0x1804 -> line 874
 *   +0x180c -> line 878
 *   +0x1810 -> line 877
 *   +0x1814 -> line 878
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
unsigned int PS2glInitBuffers(_GL_BUFFERINFO* pBufferInfo)
{
    unsigned int uiOldMontionBlurIntensity;
    int j;
    int i;
    char* pEmptyMemory;
    unsigned char bEnlarge;
    unsigned char bInterlace;
    unsigned char bPAL;
    int iSecondBufferSpan32;
    int iSecondBufferSpan;
    int iBufferSpanEnlarged;
    int iBufferSpan32;
    int iBufferSpan;
    int iTextureBase;
    /* TODO: decompile from asm/... */
}

/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_BufferControl.c lines 114–167 */
/* addr: 0x00143620  size: 908 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 114
 *   +0x0008 -> line 116
 *   +0x0010 -> line 121
 *   +0x0030 -> line 123
 *   +0x0038 -> line 121
 *   +0x0058 -> line 124
 *   +0x0070 -> line 125
 *   +0x0088 -> line 126
 *   +0x00a0 -> line 127
 *   +0x00cc -> line 128
 *   +0x00d4 -> line 129
 *   +0x0148 -> line 131
 *   +0x0158 -> line 132
 *   +0x015c -> line 131
 *   +0x0160 -> line 132
 *   +0x0164 -> line 131
 *   +0x0168 -> line 132
 *   +0x016c -> line 131
 *   +0x0170 -> line 132
 *   +0x0178 -> line 137
 *   +0x017c -> line 132
 *   +0x0180 -> line 137
 *   +0x0184 -> line 141
 *   +0x0198 -> line 143
 *   +0x01a8 -> line 144
 *   +0x01b0 -> line 149
 *   +0x01bc -> line 150
 *   +0x01c4 -> line 151
 *   +0x01cc -> line 152
 *   +0x01d4 -> line 154
 *   +0x01dc -> line 157
 *   +0x01ec -> line 158
 *   +0x01f8 -> line 162
 *   +0x01fc -> line 163
 *   +0x0200 -> line 162
 *   +0x0208 -> line 163
 *   +0x020c -> line 162
 *   +0x0210 -> line 163
 *   +0x0218 -> line 162
 *   +0x0240 -> line 163
 *   +0x0244 -> line 162
 *   +0x0248 -> line 163
 *   +0x024c -> line 162
 *   +0x025c -> line 163
 *   +0x0264 -> line 162
 *   +0x0270 -> line 163
 *   +0x0274 -> line 162
 *   +0x0278 -> line 163
 *   +0x027c -> line 162
 *   +0x0280 -> line 163
 *   +0x0284 -> line 162
 *   +0x028c -> line 163
 *   +0x0290 -> line 162
 *   +0x0294 -> line 163
 *   +0x0298 -> line 162
 *   +0x029c -> line 163
 *   +0x02a0 -> line 162
 *   +0x02a4 -> line 163
 *   +0x0378 -> line 165
 *   +0x0380 -> line 167
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void PS2glClearBuffers(void)
{
    tagGLtexblock theDefaultTexBlock;
    int i;
    /* TODO: decompile from asm/... */
}

/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_BufferControl.c lines 49–49 */
/* addr: 0x001439b0  size: 8 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 49
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void PS2GL_SetProgressiveScanMode(int bOnOff)
{
    PS2GL_g_bProgressiveScan = bOnOff;
}
