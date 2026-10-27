/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_Texture.c */
/* Language: C */
/* Compiler: MW MIPS C Compiler */

#include <stddef.h>

/* Recovered aggregate layouts from MWCC debug type records. */
typedef struct defAttribViewportBit defAttribViewportBit;
typedef struct _sceDmaTag _sceDmaTag;
typedef struct anon_25 anon_25;
typedef struct tagGLprimbuf tagGLprimbuf;
typedef struct tagGLtexblock tagGLtexblock;
typedef struct tag_GLtexture_image tag_GLtexture_image;
typedef struct anon_0 anon_0;
typedef struct anon_1 anon_1;
typedef struct anon_2 anon_2;
typedef struct anon_3 anon_3;
typedef struct anon_10 anon_10;
typedef struct anon_18 anon_18;
typedef struct anon_8 anon_8;
typedef struct tagGsLoadImage tagGsLoadImage;
typedef struct anon_4 anon_4;
typedef struct tagGLtexindex tagGLtexindex;
typedef struct anon_5 anon_5;
typedef struct anon_6 anon_6;
typedef struct anon_7 anon_7;
typedef struct anon_9 anon_9;
typedef struct anon_30 anon_30;
typedef struct anon_37 anon_37;
typedef struct anon_23 anon_23;
typedef struct anon_31 anon_31;
typedef struct anon_16 anon_16;
typedef struct tagGsSetTex tagGsSetTex;
typedef struct anon_12 anon_12;
typedef struct anon_35 anon_35;
typedef struct anon_26 anon_26;
typedef struct anon_45 anon_45;
typedef struct anon_24 anon_24;
typedef struct anon_48 anon_48;
typedef struct anon_19 anon_19;
typedef struct anon_11 anon_11;
typedef struct tag_GLtexture tag_GLtexture;
typedef struct tagListNodeSingle tagListNodeSingle;
typedef struct tag_stTexPackage tag_stTexPackage;
typedef struct anon_13 anon_13;
typedef union unFunction unFunction;
typedef struct tagGLlistnode tagGLlistnode;
typedef struct tagListData tagListData;
typedef struct anon_14 anon_14;
typedef struct anon_15 anon_15;
typedef struct anon_17 anon_17;
typedef struct tagListNode tagListNode;
typedef struct _GL_BUFFERINFO _GL_BUFFERINFO;
typedef struct tagGLtexname tagGLtexname;
typedef struct anon_20 anon_20;
typedef struct tag_GLtexture_set tag_GLtexture_set;
typedef struct tag_GLlight tag_GLlight;
typedef struct tag_GLmaterial tag_GLmaterial;
typedef struct tagGLlistpool tagGLlistpool;
typedef struct tagGLArrayInfo tagGLArrayInfo;
typedef struct tagGLcontext tagGLcontext;
typedef struct anon_38 anon_38;
typedef struct anon_49 anon_49;
typedef struct anon_32 anon_32;
typedef struct anon_21 anon_21;
typedef struct anon_22 anon_22;
typedef struct anon_27 anon_27;
typedef union anon_28 anon_28;
typedef struct anon_29 anon_29;
typedef struct anon_33 anon_33;
typedef struct anon_39 anon_39;
typedef struct anon_50 anon_50;
typedef struct anon_42 anon_42;
typedef struct anon_43 anon_43;
typedef struct anon_46 anon_46;
typedef struct anon_34 anon_34;
typedef struct anon_36 anon_36;
typedef struct tagstVIFCode tagstVIFCode;
typedef struct tagsceGsReg tagsceGsReg;
typedef struct anon_40 anon_40;
typedef struct tagGLlistcalls tagGLlistcalls;
typedef struct anon_41 anon_41;
typedef struct anon_44 anon_44;
typedef struct anon_47 anon_47;
typedef struct anon_51 anon_51;
typedef struct tagGScontext tagGScontext;
typedef struct tagGLlistdatas tagGLlistdatas;

struct _sceDmaTag {
    unsigned short qwc; /* +0x0 */
    unsigned char mark; /* +0x2 */
    unsigned char id; /* +0x3 */
    _sceDmaTag* next; /* +0x4 */
    unsigned int p[2]; /* +0x8 */
};

struct anon_25 {
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
    anon_25 tagGif; /* +0x30 */
    int vData[4]; /* +0x40 */
};

struct tagGLtexblock {
    unsigned int nTexID : 10; /* bit 0, byte +0x0 */
    int nStart : 11; /* bit 10, byte +0x0 */
    int nLength : 11; /* bit 21, byte +0x0 */
};

struct tag_GLtexture_image {
    unsigned int target; /* +0x0 */
    int inputComponents; /* +0x4 */
    int width; /* +0x8 */
    int height; /* +0xc */
    unsigned int format; /* +0x10 */
    void* pixels; /* +0x14 */
    void* pixelsAux; /* +0x18 */
    int cbPixels; /* +0x1c */
    int cbPixelsAux; /* +0x20 */
    unsigned char pixelsChanged; /* +0x24 */
    unsigned char bConverted; /* +0x25 */
    unsigned char bUserMaintain; /* +0x26 */
    unsigned int uiSpan; /* +0x28 */
};

struct anon_0 {
    unsigned long CBW : 6; /* bit 0, byte +0x0 */
    unsigned long COU : 6; /* bit 6, byte +0x0 */
    unsigned long COV : 10; /* bit 12, byte +0x0 */
    unsigned long pad22 : 42; /* bit 22, byte +0x0 */
};

struct anon_1 {
    float vObjectBS[4]; /* +0x0 */
    unsigned char bFinalCompile; /* +0x10 */
    unsigned int mode; /* +0x14 */
    tagGLprimbuf* pPrimBuf; /* +0x18 */
};

struct anon_2 {
    unsigned long MSK : 2; /* bit 0, byte +0x0 */
    unsigned long pad02 : 62; /* bit 2, byte +0x0 */
};

struct anon_3 {
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

struct anon_10 {
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

struct anon_18 {
    unsigned long RRW : 12; /* bit 0, byte +0x0 */
    unsigned long pad12 : 20; /* bit 12, byte +0x0 */
    unsigned long RRH : 12; /* bit 32, byte +0x0 */
    unsigned long pad44 : 20; /* bit 44, byte +0x0 */
};

struct anon_8 {
    unsigned long XDR : 2; /* bit 0, byte +0x0 */
    unsigned long pad02 : 62; /* bit 2, byte +0x0 */
};

struct tagGsLoadImage {
    anon_25 gifTag; /* +0x0 */
    anon_3 bitbltbuf; /* +0x10 */
    long bitbltbufaddr; /* +0x18 */
    anon_10 trxpos; /* +0x20 */
    long trxposaddr; /* +0x28 */
    anon_18 trxreg; /* +0x30 */
    long trxregaddr; /* +0x38 */
    anon_8 trxdir; /* +0x40 */
    long trxdiraddr; /* +0x48 */
};

struct anon_4 {
    unsigned long pad00 : 56; /* bit 0, byte +0x0 */
    unsigned long F : 8; /* bit 56, byte +0x0 */
};

struct tagGLtexindex {
    unsigned int nTexID : 10; /* bit 0, byte +0x0 */
    int nStart : 11; /* bit 10, byte +0x0 */
};

struct anon_5 {
    unsigned long pad00; /* +0x0 */
};

struct anon_6 {
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
    unsigned long FCR : 8; /* bit 0, byte +0x0 */
    unsigned long FCG : 8; /* bit 8, byte +0x0 */
    unsigned long FCB : 8; /* bit 16, byte +0x0 */
    unsigned long pad24 : 40; /* bit 24, byte +0x0 */
};

struct anon_9 {
    unsigned int DX : 12; /* bit 0, byte +0x0 */
    unsigned int DY : 11; /* bit 12, byte +0x0 */
    unsigned int MAGH : 4; /* bit 23, byte +0x0 */
    unsigned int MAGV : 2; /* bit 27, byte +0x0 */
    unsigned int p0 : 3; /* bit 29, byte +0x0 */
    unsigned int DW : 12; /* bit 0, byte +0x4 */
    unsigned int DH : 11; /* bit 12, byte +0x4 */
    unsigned int p1 : 9; /* bit 23, byte +0x4 */
};

struct anon_30 {
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

struct anon_23 {
    unsigned long TBP1 : 14; /* bit 0, byte +0x0 */
    unsigned long TBW1 : 6; /* bit 14, byte +0x0 */
    unsigned long TBP2 : 14; /* bit 20, byte +0x0 */
    unsigned long TBW2 : 6; /* bit 34, byte +0x0 */
    unsigned long TBP3 : 14; /* bit 40, byte +0x0 */
    unsigned long TBW3 : 6; /* bit 54, byte +0x0 */
    unsigned long pad60 : 4; /* bit 60, byte +0x0 */
};

struct anon_31 {
    unsigned long TBP4 : 14; /* bit 0, byte +0x0 */
    unsigned long TBW4 : 6; /* bit 14, byte +0x0 */
    unsigned long TBP5 : 14; /* bit 20, byte +0x0 */
    unsigned long TBW5 : 6; /* bit 34, byte +0x0 */
    unsigned long TBP6 : 14; /* bit 40, byte +0x0 */
    unsigned long TBW6 : 6; /* bit 54, byte +0x0 */
    unsigned long pad60 : 4; /* bit 60, byte +0x0 */
};

struct anon_16 {
    unsigned long WMS : 2; /* bit 0, byte +0x0 */
    unsigned long WMT : 2; /* bit 2, byte +0x0 */
    unsigned long MINU : 10; /* bit 4, byte +0x0 */
    unsigned long MAXU : 10; /* bit 14, byte +0x0 */
    unsigned long MINV : 10; /* bit 24, byte +0x0 */
    unsigned long MAXV : 10; /* bit 34, byte +0x0 */
    unsigned long pad44 : 20; /* bit 44, byte +0x0 */
};

struct tagGsSetTex {
    anon_25 gifTag; /* +0x0 */
    anon_5 texflush; /* +0x10 */
    long texflushaddr; /* +0x18 */
    anon_30 tex0; /* +0x20 */
    long tex0addr; /* +0x28 */
    anon_37 tex1; /* +0x30 */
    long tex1addr; /* +0x38 */
    anon_23 miptbp1; /* +0x40 */
    long miptbp1addr; /* +0x48 */
    anon_31 miptbp2; /* +0x50 */
    long miptbp2addr; /* +0x58 */
    anon_16 clamp; /* +0x60 */
    long clampaddr; /* +0x68 */
};

struct anon_12 {
    unsigned long FBP : 9; /* bit 0, byte +0x0 */
    unsigned long pad09 : 7; /* bit 9, byte +0x0 */
    unsigned long FBW : 6; /* bit 16, byte +0x0 */
    unsigned long pad22 : 2; /* bit 22, byte +0x0 */
    unsigned long PSM : 6; /* bit 24, byte +0x0 */
    unsigned long pad30 : 2; /* bit 30, byte +0x0 */
    unsigned long FBMSK : 32; /* bit 32, byte +0x0 */
};

struct anon_35 {
    unsigned long ZBP : 9; /* bit 0, byte +0x0 */
    unsigned long pad09 : 15; /* bit 9, byte +0x0 */
    unsigned long PSM : 4; /* bit 24, byte +0x0 */
    unsigned long pad28 : 4; /* bit 28, byte +0x0 */
    unsigned long ZMSK : 1; /* bit 32, byte +0x0 */
    unsigned long pad33 : 31; /* bit 33, byte +0x0 */
};

struct anon_26 {
    unsigned long OFX : 16; /* bit 0, byte +0x0 */
    unsigned long pad16 : 16; /* bit 16, byte +0x0 */
    unsigned long OFY : 16; /* bit 32, byte +0x0 */
    unsigned long pad48 : 16; /* bit 48, byte +0x0 */
};

struct anon_45 {
    unsigned long AC : 1; /* bit 0, byte +0x0 */
    unsigned long pad01 : 63; /* bit 1, byte +0x0 */
};

struct anon_24 {
    unsigned long CLAMP : 1; /* bit 0, byte +0x0 */
    unsigned long pad01 : 63; /* bit 1, byte +0x0 */
};

struct anon_48 {
    unsigned long DTHE : 1; /* bit 0, byte +0x0 */
    unsigned long pad01 : 63; /* bit 1, byte +0x0 */
};

struct anon_19 {
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

struct anon_11 {
    anon_12 frame2; /* +0x0 */
    unsigned long frame2addr; /* +0x8 */
    anon_35 zbuf2; /* +0x10 */
    long zbuf2addr; /* +0x18 */
    anon_26 xyoffset2; /* +0x20 */
    long xyoffset2addr; /* +0x28 */
    anon_6 scissor2; /* +0x30 */
    long scissor2addr; /* +0x38 */
    anon_45 prmodecont; /* +0x40 */
    long prmodecontaddr; /* +0x48 */
    anon_24 colclamp; /* +0x50 */
    long colclampaddr; /* +0x58 */
    anon_48 dthe; /* +0x60 */
    long dtheaddr; /* +0x68 */
    anon_19 test2; /* +0x70 */
    long test2addr; /* +0x78 */
};

struct tag_GLtexture {
    float vTexBorderColor[4]; /* +0x0 */
    unsigned int eDimension; /* +0x10 */
    unsigned int eTexFilterMin; /* +0x14 */
    unsigned int eTexFilterMag; /* +0x18 */
    unsigned int eTexWrapS; /* +0x1c */
    unsigned int eTexWrapT; /* +0x20 */
    tag_GLtexture_image* Image[7]; /* +0x24 */
    int iClutOffset; /* +0x40 */
    int iClutSize; /* +0x44 */
    void* clut; /* +0x48 */
    unsigned char bClutUserMaintain; /* +0x4c */
};

struct tagListNodeSingle {
    unsigned int nIndex; /* +0x0 */
    tagListData* pData; /* +0x4 */
};

struct tag_stTexPackage {
    _sceDmaTag tagDmaHead; /* +0x0 */
    anon_25 tagGifHead; /* +0x10 */
    _sceDmaTag tagDmaData; /* +0x20 */
};

struct anon_13 {
    unsigned int R : 8; /* bit 0, byte +0x0 */
    unsigned int G : 8; /* bit 8, byte +0x0 */
    unsigned int B : 8; /* bit 16, byte +0x0 */
    unsigned int p0 : 8; /* bit 24, byte +0x0 */
    unsigned int p1; /* +0x4 */
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

struct anon_14 {
    unsigned int ID; /* +0x0 */
    unsigned int IDMSK; /* +0x4 */
};

struct anon_15 {
    unsigned int FBP : 9; /* bit 0, byte +0x0 */
    unsigned int FBW : 6; /* bit 9, byte +0x0 */
    unsigned int PSM : 5; /* bit 15, byte +0x0 */
    unsigned int p0 : 12; /* bit 20, byte +0x0 */
    unsigned int DBX : 11; /* bit 0, byte +0x4 */
    unsigned int DBY : 11; /* bit 11, byte +0x4 */
    unsigned int p1 : 10; /* bit 22, byte +0x4 */
};

struct anon_17 {
    float S; /* +0x0 */
    float T; /* +0x4 */
};

struct tagListNode {
    tagListNode* pNext; /* +0x0 */
    unsigned int nIndex; /* +0x4 */
    int iSize; /* +0x8 */
    int apData[1]; /* +0xc */
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

struct anon_20 {
    unsigned int ID; /* +0x0 */
    unsigned int IDMSK; /* +0x4 */
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

struct tagGLlistpool {
    unsigned int nFreeIndex; /* +0x0 */
    tagListNodeSingle aSingleIndex[64]; /* +0x4 */
    tagListNode* pFirstNode; /* +0x204 */
    tagListNode* pLastNode; /* +0x208 */
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
    anon_1* pCurParamBegin; /* +0x5ce8 */
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
    anon_25* pGifTagFan; /* +0x6bf8 */
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
    anon_25* pGifTagBuf0; /* +0x6c5c */
    anon_25* pGifTagBuf1; /* +0x6c60 */
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

struct anon_49 {
    unsigned int R : 8; /* bit 0, byte +0x0 */
    unsigned int G : 8; /* bit 8, byte +0x0 */
    unsigned int B : 8; /* bit 16, byte +0x0 */
    unsigned int A : 8; /* bit 24, byte +0x0 */
    float Q; /* +0x4 */
};

struct anon_32 {
    unsigned long X : 16; /* bit 0, byte +0x0 */
    unsigned long Y : 16; /* bit 16, byte +0x0 */
    unsigned long Z : 32; /* bit 32, byte +0x0 */
};

struct anon_21 {
    anon_19 testa; /* +0x0 */
    long testaaddr; /* +0x8 */
    anon_38 prim; /* +0x10 */
    long primaddr; /* +0x18 */
    anon_49 rgbaq; /* +0x20 */
    long rgbaqaddr; /* +0x28 */
    anon_32 xyz2a; /* +0x30 */
    long xyz2aaddr; /* +0x38 */
    anon_32 xyz2b; /* +0x40 */
    long xyz2baddr; /* +0x48 */
    anon_19 testb; /* +0x50 */
    long testbaddr; /* +0x58 */
};

struct anon_22 {
    unsigned long U : 14; /* bit 0, byte +0x0 */
    unsigned long pad14 : 2; /* bit 14, byte +0x0 */
    unsigned long V : 14; /* bit 16, byte +0x0 */
    unsigned long pad30 : 34; /* bit 30, byte +0x0 */
};

struct anon_27 {
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

union anon_28 {
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

struct anon_29 {
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

struct anon_33 {
    unsigned long X : 16; /* bit 0, byte +0x0 */
    unsigned long Y : 16; /* bit 16, byte +0x0 */
    unsigned long Z : 24; /* bit 32, byte +0x0 */
    unsigned long F : 8; /* bit 56, byte +0x0 */
};

struct anon_39 {
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

struct anon_50 {
    unsigned int INT : 1; /* bit 0, byte +0x0 */
    unsigned int FFMD : 1; /* bit 1, byte +0x0 */
    unsigned int DPMS : 2; /* bit 2, byte +0x0 */
    unsigned int p0 : 28; /* bit 4, byte +0x0 */
    unsigned int p1; /* +0x4 */
};

struct anon_42 {
    unsigned int FBP : 9; /* bit 0, byte +0x0 */
    unsigned int FBW : 6; /* bit 9, byte +0x0 */
    unsigned int PSM : 5; /* bit 15, byte +0x0 */
    unsigned int p0 : 12; /* bit 20, byte +0x0 */
    unsigned int DBX : 11; /* bit 0, byte +0x4 */
    unsigned int DBY : 11; /* bit 11, byte +0x4 */
    unsigned int p1 : 10; /* bit 22, byte +0x4 */
};

struct anon_43 {
    anon_39 pmode; /* +0x0 */
    anon_50 smode2; /* +0x8 */
    anon_42 dispfb; /* +0x10 */
    anon_9 display; /* +0x18 */
    anon_13 bgcolor; /* +0x20 */
};

struct anon_46 {
    anon_12 frame1; /* +0x0 */
    unsigned long frame1addr; /* +0x8 */
    anon_35 zbuf1; /* +0x10 */
    long zbuf1addr; /* +0x18 */
    anon_26 xyoffset1; /* +0x20 */
    long xyoffset1addr; /* +0x28 */
    anon_6 scissor1; /* +0x30 */
    long scissor1addr; /* +0x38 */
    anon_45 prmodecont; /* +0x40 */
    long prmodecontaddr; /* +0x48 */
    anon_24 colclamp; /* +0x50 */
    long colclampaddr; /* +0x58 */
    anon_48 dthe; /* +0x60 */
    long dtheaddr; /* +0x68 */
    anon_19 test1; /* +0x70 */
    long test1addr; /* +0x78 */
};

struct anon_34 {
    anon_43 disp[2]; /* +0x0 */
    anon_25 giftag0; /* +0x50 */
    anon_46 draw01; /* +0x60 */
    anon_11 draw02; /* +0xe0 */
    anon_21 clear0; /* +0x160 */
    anon_25 giftag1; /* +0x1c0 */
    anon_46 draw11; /* +0x1d0 */
    anon_11 draw12; /* +0x250 */
    anon_21 clear1; /* +0x2d0 */
};

struct anon_36 {
    unsigned long PABE : 1; /* bit 0, byte +0x0 */
    unsigned long pad01 : 63; /* bit 1, byte +0x0 */
};

struct tagstVIFCode {
    unsigned short IMMEDIATE; /* +0x0 */
    unsigned char NUM; /* +0x2 */
    unsigned char CMD; /* +0x3 */
};

struct tagsceGsReg {
    unsigned long DATA; /* +0x0 */
};

struct anon_40 {
    unsigned long pad00 : 20; /* bit 0, byte +0x0 */
    unsigned long PSM : 6; /* bit 20, byte +0x0 */
    unsigned long pad26 : 11; /* bit 26, byte +0x0 */
    unsigned long CBP : 14; /* bit 37, byte +0x0 */
    unsigned long CPSM : 4; /* bit 51, byte +0x0 */
    unsigned long CSM : 1; /* bit 55, byte +0x0 */
    unsigned long CSA : 5; /* bit 56, byte +0x0 */
    unsigned long CLD : 3; /* bit 61, byte +0x0 */
};

struct tagGLlistcalls {
    tagGLlistcalls* pNext; /* +0x0 */
    unsigned int cbCalls; /* +0x4 */
    tagGLlistnode aNodes[1]; /* +0x8 */
};

struct anon_41 {
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
    unsigned char _extractor_padding_anon41[6]; /* +0x2..0x7 */
};

struct anon_44 {
    unsigned long TA0 : 8; /* bit 0, byte +0x0 */
    unsigned long pad08 : 7; /* bit 8, byte +0x0 */
    unsigned long AEM : 1; /* bit 15, byte +0x0 */
    unsigned long pad16 : 16; /* bit 16, byte +0x0 */
    unsigned long TA1 : 8; /* bit 32, byte +0x0 */
    unsigned long pad40 : 24; /* bit 40, byte +0x0 */
};

struct anon_47 {
    unsigned long A : 2; /* bit 0, byte +0x0 */
    unsigned long B : 2; /* bit 2, byte +0x0 */
    unsigned long C : 2; /* bit 4, byte +0x0 */
    unsigned long D : 2; /* bit 6, byte +0x0 */
    unsigned long pad8 : 24; /* bit 8, byte +0x0 */
    unsigned long FIX : 8; /* bit 32, byte +0x0 */
    unsigned long pad40 : 24; /* bit 40, byte +0x0 */
};

struct anon_51 {
    unsigned long FBA : 1; /* bit 0, byte +0x0 */
    unsigned long pad01 : 63; /* bit 1, byte +0x0 */
};

struct tagGScontext {
    anon_38 PRIM; /* +0x0 */
    anon_49 RGBAQ; /* +0x8 */
    anon_17 ST; /* +0x10 */
    anon_22 UV; /* +0x18 */
    anon_33 XYZF2; /* +0x20 */
    anon_32 XYZ2; /* +0x28 */
    anon_30 TEX0_1; /* +0x30 */
    anon_30 TEX0_2; /* +0x38 */
    anon_16 CLAMP_1; /* +0x40 */
    anon_16 CLAMP_2; /* +0x48 */
    anon_4 FOG; /* +0x50 */
    anon_33 XYZF3; /* +0x58 */
    anon_32 XYZ3; /* +0x60 */
    anon_37 TEX1_1; /* +0x68 */
    anon_37 TEX1_2; /* +0x70 */
    anon_40 TEX2_1; /* +0x78 */
    anon_40 TEX2_2; /* +0x80 */
    anon_26 XYOFFSET_1; /* +0x88 */
    anon_26 XYOFFSET_2; /* +0x90 */
    anon_45 PRMODECONT; /* +0x98 */
    anon_41 PRMODE; /* +0xa0 */
    anon_0 TEXCLUT; /* +0xa8 */
    anon_2 SCANMSK; /* +0xb0 */
    anon_23 MIPTBP1_1; /* +0xb8 */
    anon_23 MIPTBP1_2; /* +0xc0 */
    anon_31 MIPTBP2_1; /* +0xc8 */
    anon_31 MIPTBP2_2; /* +0xd0 */
    anon_44 TEXA; /* +0xd8 */
    anon_7 FOGCOL; /* +0xe0 */
    tagsceGsReg TEXFLUSH; /* +0xe8 */
    anon_6 SCISSOR_1; /* +0xf0 */
    anon_6 SCISSOR_2; /* +0xf8 */
    anon_47 ALPHA_1; /* +0x100 */
    anon_47 ALPHA_2; /* +0x108 */
    anon_27 DIMX; /* +0x110 */
    anon_48 DTHE; /* +0x118 */
    anon_24 COLCLAMP; /* +0x120 */
    anon_19 TEST_1; /* +0x128 */
    anon_19 TEST_2; /* +0x130 */
    anon_36 PABE; /* +0x138 */
    anon_51 FBA_1; /* +0x140 */
    anon_51 FBA_2; /* +0x148 */
    anon_12 FRAME_1; /* +0x150 */
    anon_12 FRAME_2; /* +0x158 */
    anon_35 ZBUF_1; /* +0x160 */
    anon_35 ZBUF_2; /* +0x168 */
    anon_3 BITBLTBUF; /* +0x170 */
    anon_10 TRXPOS; /* +0x178 */
    anon_18 TRXREG; /* +0x180 */
    anon_8 TRXDIR; /* +0x188 */
    tagsceGsReg HWREG; /* +0x190 */
    anon_14 SIGNAL; /* +0x198 */
    tagsceGsReg FINISH; /* +0x1a0 */
    anon_20 LABEL; /* +0x1a8 */
    anon_29 ModFlgs; /* +0x1b0 */
    anon_29 GlobalModFlgs; /* +0x1b8 */
    anon_28 PackageBuffer[518]; /* +0x1c0 */
    int iBufCount; /* +0x2220 */
    anon_28* pqCurrent; /* +0x2224 */
    anon_25* pCurTag; /* +0x2228 */
    signed char iRegs; /* +0x222c */
};

struct tagGLlistdatas {
    tagGLlistdatas* pNext; /* +0x0 */
    int apData[3]; /* +0x4 */
};

/* 16-byte aligned float vector, copied as a single quadword. */
typedef struct { float f[4]; } __attribute__((aligned(16))) quad;

static int TEX_LEVEL_SIZE[10];
static int TEX_LEVEL_BASE[10];
int iCubeMapMode;
int iCubeMapType;
int iCubeMapFaceMask;
int iCubeMapFaces[3];
int bCubeMapAddition;
int iCubeMapCount;
float CubeMapNSave[3][4];
float CubeMapAbsNSave[3][4];
int CubeMapTSave;
float g_mModelView[4][4];
tagGLcontext g_PS2glContext;
void* (*PS2glAllocator)(int);
int PS2glAllocator64;
void (*PS2glLiberator)(void*);
tagGScontext g_gsContext;
_GL_BUFFERINFO g_stBufferInfo;
anon_34 g_stDoubleBuf;

/* GL_TEXTURE_GEN_MODE: store the generation mode of one coordinate. */
#define PS2GL_TEXGEN_MODE_SWITCH(pTex, coord, pname, value) \
    if (pname == 0x2500) \
        switch (coord) \
        { \
        case 0x2000: (pTex)->nTexGenModeS = (value); break; \
        case 0x2001: (pTex)->nTexGenModeT = (value); break; \
        case 0x2002: (pTex)->nTexGenModeR = (value); break; \
        case 0x2003: (pTex)->nTexGenModeQ = (value); break; \
        }

void impPS2glTexGenfv(unsigned int coord, unsigned int pname, float* params);
void PS2glFreeTexture(tag_GLtexture* pTexture);

/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_Texture.c lines 209–538 */
/* addr: 0x001680e0  size: 2512 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 209
 *   +0x0004 -> line 214
 *   +0x0008 -> line 209
 *   +0x001c -> line 214
 *   +0x0024 -> line 217
 *   +0x0030 -> line 218
 *   +0x0034 -> line 221
 *   +0x0038 -> line 220
 *   +0x003c -> line 223
 *   +0x0040 -> line 218
 *   +0x0044 -> line 219
 *   +0x0048 -> line 220
 *   +0x004c -> line 221
 *   +0x0050 -> line 225
 *   +0x005c -> line 228
 *   +0x0068 -> line 229
 *   +0x006c -> line 240
 *   +0x0070 -> line 231
 *   +0x0074 -> line 233
 *   +0x0078 -> line 240
 *   +0x007c -> line 229
 *   +0x0080 -> line 230
 *   +0x0084 -> line 231
 *   +0x0088 -> line 232
 *   +0x008c -> line 233
 *   +0x0094 -> line 234
 *   +0x00a0 -> line 235
 *   +0x00ac -> line 236
 *   +0x00b8 -> line 237
 *   +0x00c4 -> line 238
 *   +0x00d0 -> line 239
 *   +0x00dc -> line 240
 *   +0x00e0 -> line 241
 *   +0x00e8 -> line 242
 *   +0x00ec -> line 244
 *   +0x00f8 -> line 247
 *   +0x0104 -> line 248
 *   +0x0108 -> line 254
 *   +0x0110 -> line 258
 *   +0x0114 -> line 260
 *   +0x011c -> line 262
 *   +0x0124 -> line 272
 *   +0x012c -> line 250
 *   +0x0130 -> line 254
 *   +0x0134 -> line 248
 *   +0x0138 -> line 254
 *   +0x013c -> line 249
 *   +0x0140 -> line 258
 *   +0x0144 -> line 250
 *   +0x0148 -> line 260
 *   +0x014c -> line 251
 *   +0x0150 -> line 260
 *   +0x0154 -> line 254
 *   +0x0158 -> line 262
 *   +0x0160 -> line 263
 *   +0x0164 -> line 272
 *   +0x016c -> line 254
 *   +0x0178 -> line 258
 *   +0x0180 -> line 260
 *   +0x0190 -> line 262
 *   +0x01a0 -> line 263
 *   +0x01a8 -> line 264
 *   +0x01b4 -> line 265
 *   +0x01c0 -> line 266
 *   +0x01cc -> line 267
 *   +0x01d8 -> line 268
 *   +0x01e4 -> line 269
 *   +0x01f0 -> line 276
 *   +0x01f4 -> line 272
 *   +0x0204 -> line 276
 *   +0x0208 -> line 277
 *   +0x0210 -> line 278
 *   +0x0214 -> line 280
 *   +0x0220 -> line 283
 *   +0x022c -> line 284
 *   +0x0230 -> line 286
 *   +0x0234 -> line 288
 *   +0x0238 -> line 284
 *   +0x023c -> line 285
 *   +0x0240 -> line 286
 *   +0x0244 -> line 287
 *   +0x0248 -> line 288
 *   +0x0250 -> line 289
 *   +0x0258 -> line 290
 *   +0x0260 -> line 291
 *   +0x0264 -> line 293
 *   +0x0270 -> line 296
 *   +0x027c -> line 297
 *   +0x0280 -> line 299
 *   +0x0284 -> line 301
 *   +0x0288 -> line 297
 *   +0x028c -> line 298
 *   +0x0290 -> line 299
 *   +0x0294 -> line 300
 *   +0x0298 -> line 301
 *   +0x02a0 -> line 302
 *   +0x02ac -> line 303
 *   +0x02b8 -> line 304
 *   +0x02c4 -> line 305
 *   +0x02cc -> line 306
 *   +0x02d0 -> line 308
 *   +0x02e0 -> line 311
 *   +0x02ec -> line 312
 *   +0x02f0 -> line 314
 *   +0x02f4 -> line 316
 *   +0x02f8 -> line 312
 *   +0x02fc -> line 313
 *   +0x0300 -> line 314
 *   +0x0304 -> line 315
 *   +0x0308 -> line 316
 *   +0x0310 -> line 317
 *   +0x0318 -> line 318
 *   +0x031c -> line 320
 *   +0x0328 -> line 323
 *   +0x0334 -> line 324
 *   +0x0338 -> line 334
 *   +0x033c -> line 326
 *   +0x0340 -> line 328
 *   +0x0344 -> line 334
 *   +0x0348 -> line 324
 *   +0x034c -> line 325
 *   +0x0350 -> line 326
 *   +0x0354 -> line 327
 *   +0x0358 -> line 328
 *   +0x0360 -> line 329
 *   +0x036c -> line 330
 *   +0x0378 -> line 331
 *   +0x0384 -> line 332
 *   +0x0390 -> line 333
 *   +0x039c -> line 334
 *   +0x03a0 -> line 335
 *   +0x03a8 -> line 336
 *   +0x03ac -> line 338
 *   +0x03b8 -> line 341
 *   +0x03c4 -> line 342
 *   +0x03c8 -> line 344
 *   +0x03cc -> line 342
 *   +0x03d0 -> line 343
 *   +0x03d4 -> line 344
 *   +0x03d8 -> line 346
 *   +0x03e0 -> line 347
 *   +0x03e4 -> line 349
 *   +0x03f0 -> line 352
 *   +0x03fc -> line 353
 *   +0x0400 -> line 352
 *   +0x0404 -> line 365
 *   +0x0408 -> line 355
 *   +0x040c -> line 357
 *   +0x0410 -> line 365
 *   +0x041c -> line 353
 *   +0x0420 -> line 354
 *   +0x0424 -> line 355
 *   +0x0428 -> line 356
 *   +0x042c -> line 357
 *   +0x0434 -> line 358
 *   +0x0440 -> line 359
 *   +0x044c -> line 360
 *   +0x0458 -> line 361
 *   +0x0464 -> line 362
 *   +0x0470 -> line 363
 *   +0x047c -> line 364
 *   +0x0484 -> line 365
 *   +0x048c -> line 366
 *   +0x04a0 -> line 367
 *   +0x04ac -> line 368
 *   +0x04b4 -> line 369
 *   +0x04b8 -> line 371
 *   +0x04c4 -> line 374
 *   +0x04d0 -> line 375
 *   +0x04d4 -> line 377
 *   +0x04d8 -> line 379
 *   +0x04dc -> line 375
 *   +0x04e0 -> line 376
 *   +0x04e4 -> line 377
 *   +0x04e8 -> line 378
 *   +0x04ec -> line 379
 *   +0x04f4 -> line 380
 *   +0x0500 -> line 381
 *   +0x050c -> line 382
 *   +0x0514 -> line 383
 *   +0x051c -> line 384
 *   +0x0520 -> line 386
 *   +0x0530 -> line 389
 *   +0x053c -> line 390
 *   +0x0540 -> line 392
 *   +0x0544 -> line 394
 *   +0x0548 -> line 390
 *   +0x054c -> line 391
 *   +0x0550 -> line 392
 *   +0x0554 -> line 393
 *   +0x0558 -> line 394
 *   +0x055c -> line 395
 *   +0x0564 -> line 396
 *   +0x0568 -> line 398
 *   +0x0574 -> line 401
 *   +0x0580 -> line 402
 *   +0x0584 -> line 404
 *   +0x0588 -> line 406
 *   +0x058c -> line 402
 *   +0x0590 -> line 403
 *   +0x0594 -> line 404
 *   +0x0598 -> line 405
 *   +0x059c -> line 406
 *   +0x05a4 -> line 407
 *   +0x05b0 -> line 408
 *   +0x05bc -> line 409
 *   +0x05c8 -> line 410
 *   +0x05d4 -> line 411
 *   +0x05e0 -> line 412
 *   +0x05ec -> line 413
 *   +0x05f8 -> line 414
 *   +0x0604 -> line 415
 *   +0x0610 -> line 416
 *   +0x061c -> line 417
 *   +0x0628 -> line 418
 *   +0x0634 -> line 419
 *   +0x0640 -> line 420
 *   +0x064c -> line 421
 *   +0x0658 -> line 422
 *   +0x0660 -> line 423
 *   +0x0668 -> line 424
 *   +0x066c -> line 426
 *   +0x0678 -> line 429
 *   +0x0684 -> line 430
 *   +0x0688 -> line 432
 *   +0x068c -> line 434
 *   +0x0690 -> line 430
 *   +0x0694 -> line 431
 *   +0x0698 -> line 432
 *   +0x069c -> line 433
 *   +0x06a0 -> line 434
 *   +0x06a8 -> line 435
 *   +0x06b0 -> line 436
 *   +0x06b8 -> line 437
 *   +0x06bc -> line 439
 *   +0x06c8 -> line 442
 *   +0x06d4 -> line 443
 *   +0x06d8 -> line 445
 *   +0x06dc -> line 447
 *   +0x06e0 -> line 443
 *   +0x06e4 -> line 444
 *   +0x06e8 -> line 445
 *   +0x06ec -> line 446
 *   +0x06f0 -> line 447
 *   +0x06f8 -> line 448
 *   +0x0704 -> line 449
 *   +0x0710 -> line 450
 *   +0x071c -> line 451
 *   +0x0724 -> line 452
 *   +0x072c -> line 453
 *   +0x0730 -> line 455
 *   +0x073c -> line 458
 *   +0x0748 -> line 459
 *   +0x074c -> line 463
 *   +0x0750 -> line 461
 *   +0x0754 -> line 463
 *   +0x0760 -> line 459
 *   +0x0764 -> line 460
 *   +0x0768 -> line 461
 *   +0x076c -> line 463
 *   +0x0774 -> line 464
 *   +0x077c -> line 465
 *   +0x0780 -> line 467
 *   +0x0790 -> line 470
 *   +0x079c -> line 471
 *   +0x07a0 -> line 476
 *   +0x07a4 -> line 473
 *   +0x07a8 -> line 475
 *   +0x07ac -> line 476
 *   +0x07b0 -> line 471
 *   +0x07b4 -> line 472
 *   +0x07b8 -> line 473
 *   +0x07bc -> line 474
 *   +0x07c0 -> line 475
 *   +0x07c8 -> line 476
 *   +0x07cc -> line 477
 *   +0x07d4 -> line 478
 *   +0x07d8 -> line 480
 *   +0x07e4 -> line 483
 *   +0x07f0 -> line 484
 *   +0x07f4 -> line 486
 *   +0x07f8 -> line 484
 *   +0x07fc -> line 485
 *   +0x0800 -> line 486
 *   +0x0804 -> line 488
 *   +0x080c -> line 489
 *   +0x0810 -> line 491
 *   +0x0820 -> line 494
 *   +0x082c -> line 495
 *   +0x0830 -> line 501
 *   +0x0834 -> line 497
 *   +0x0838 -> line 499
 *   +0x083c -> line 501
 *   +0x0848 -> line 495
 *   +0x084c -> line 496
 *   +0x0850 -> line 497
 *   +0x0854 -> line 498
 *   +0x0858 -> line 499
 *   +0x0860 -> line 500
 *   +0x0864 -> line 499
 *   +0x0868 -> line 500
 *   +0x086c -> line 501
 *   +0x0874 -> line 502
 *   +0x087c -> line 503
 *   +0x0880 -> line 505
 *   +0x088c -> line 508
 *   +0x0898 -> line 509
 *   +0x089c -> line 515
 *   +0x08b4 -> line 511
 *   +0x08b8 -> line 513
 *   +0x08bc -> line 515
 *   +0x08c8 -> line 509
 *   +0x08cc -> line 515
 *   +0x08d0 -> line 510
 *   +0x08d4 -> line 515
 *   +0x08d8 -> line 511
 *   +0x08dc -> line 515
 *   +0x08e0 -> line 512
 *   +0x08e4 -> line 513
 *   +0x08ec -> line 516
 *   +0x08f0 -> line 515
 *   +0x0920 -> line 516
 *   +0x0928 -> line 517
 *   +0x0934 -> line 518
 *   +0x093c -> line 519
 *   +0x0944 -> line 520
 *   +0x0948 -> line 522
 *   +0x0954 -> line 525
 *   +0x0960 -> line 526
 *   +0x0964 -> line 534
 *   +0x0968 -> line 528
 *   +0x096c -> line 530
 *   +0x0970 -> line 534
 *   +0x0974 -> line 526
 *   +0x0978 -> line 527
 *   +0x097c -> line 528
 *   +0x0980 -> line 529
 *   +0x0984 -> line 530
 *   +0x098c -> line 531
 *   +0x0998 -> line 532
 *   +0x09a4 -> line 533
 *   +0x09b0 -> line 534
 *   +0x09b8 -> line 538
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void impPS2glPushAttrib(unsigned int mask)
{
    defAttribViewportBit* pNew;
    int EOP;
    /* TODO: decompile from asm/... */
}

/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_Texture.c lines 5134–5367 */
/* addr: 0x00168ab0  size: 2396 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 5134
 *   +0x0004 -> line 5139
 *   +0x0008 -> line 5134
 *   +0x000c -> line 5139
 *   +0x0010 -> line 5134
 *   +0x0014 -> line 5139
 *   +0x0018 -> line 5134
 *   +0x0038 -> line 5137
 *   +0x003c -> line 5139
 *   +0x0044 -> line 5140
 *   +0x006c -> line 5141
 *   +0x0070 -> line 5145
 *   +0x0074 -> line 5141
 *   +0x0078 -> line 5145
 *   +0x0090 -> line 5151
 *   +0x0098 -> line 5157
 *   +0x009c -> line 5158
 *   +0x00a0 -> line 5159
 *   +0x00a8 -> line 5161
 *   +0x00c0 -> line 5163
 *   +0x00ec -> line 5164
 *   +0x0118 -> line 5165
 *   +0x0144 -> line 5166
 *   +0x0170 -> line 5168
 *   +0x018c -> line 5169
 *   +0x0198 -> line 5171
 *   +0x019c -> line 5172
 *   +0x01a8 -> line 5173
 *   +0x01bc -> line 5175
 *   +0x01d8 -> line 5176
 *   +0x01e0 -> line 5178
 *   +0x01e4 -> line 5179
 *   +0x01f0 -> line 5182
 *   +0x020c -> line 5183
 *   +0x0218 -> line 5185
 *   +0x0220 -> line 5190
 *   +0x0228 -> line 5187
 *   +0x022c -> line 5188
 *   +0x0230 -> line 5190
 *   +0x0238 -> line 5196
 *   +0x0244 -> line 5191
 *   +0x0248 -> line 5192
 *   +0x024c -> line 5193
 *   +0x0250 -> line 5194
 *   +0x0254 -> line 5196
 *   +0x025c -> line 5198
 *   +0x026c -> line 5200
 *   +0x02d4 -> line 5202
 *   +0x02d8 -> line 5204
 *   +0x02e0 -> line 5206
 *   +0x02e4 -> line 5209
 *   +0x02e8 -> line 5211
 *   +0x02f0 -> line 5213
 *   +0x02f4 -> line 5216
 *   +0x02f8 -> line 5221
 *   +0x0300 -> line 5224
 *   +0x0310 -> line 5225
 *   +0x0318 -> line 5226
 *   +0x0320 -> line 5227
 *   +0x0328 -> line 5230
 *   +0x0330 -> line 5231
 *   +0x033c -> line 5232
 *   +0x0348 -> line 5233
 *   +0x0354 -> line 5234
 *   +0x0358 -> line 5235
 *   +0x0364 -> line 5236
 *   +0x0368 -> line 5237
 *   +0x0374 -> line 5238
 *   +0x0378 -> line 5240
 *   +0x0380 -> line 5239
 *   +0x0384 -> line 5240
 *   +0x0388 -> line 5239
 *   +0x0390 -> line 5242
 *   +0x03f4 -> line 5244
 *   +0x03f8 -> line 5246
 *   +0x0400 -> line 5248
 *   +0x0404 -> line 5251
 *   +0x0408 -> line 5253
 *   +0x0410 -> line 5255
 *   +0x0414 -> line 5258
 *   +0x0418 -> line 5259
 *   +0x041c -> line 5262
 *   +0x0420 -> line 5263
 *   +0x0428 -> line 5265
 *   +0x0434 -> line 5266
 *   +0x0458 -> line 5269
 *   +0x049c -> line 5271
 *   +0x04a0 -> line 5272
 *   +0x04a8 -> line 5274
 *   +0x04ac -> line 5272
 *   +0x04b0 -> line 5274
 *   +0x04b4 -> line 5275
 *   +0x04b8 -> line 5272
 *   +0x04bc -> line 5274
 *   +0x04c0 -> line 5272
 *   +0x04c4 -> line 5274
 *   +0x04cc -> line 5275
 *   +0x04d4 -> line 5274
 *   +0x04d8 -> line 5275
 *   +0x04dc -> line 5276
 *   +0x04e4 -> line 5277
 *   +0x04e8 -> line 5278
 *   +0x04f4 -> line 5279
 *   +0x04f8 -> line 5280
 *   +0x04fc -> line 5278
 *   +0x0500 -> line 5280
 *   +0x0504 -> line 5278
 *   +0x0508 -> line 5279
 *   +0x0510 -> line 5280
 *   +0x0518 -> line 5279
 *   +0x051c -> line 5281
 *   +0x0524 -> line 5282
 *   +0x0538 -> line 5283
 *   +0x0540 -> line 5285
 *   +0x054c -> line 5286
 *   +0x0554 -> line 5285
 *   +0x0558 -> line 5286
 *   +0x055c -> line 5285
 *   +0x0560 -> line 5286
 *   +0x0568 -> line 5287
 *   +0x0570 -> line 5286
 *   +0x0574 -> line 5288
 *   +0x057c -> line 5289
 *   +0x0580 -> line 5290
 *   +0x058c -> line 5291
 *   +0x0594 -> line 5290
 *   +0x0598 -> line 5291
 *   +0x059c -> line 5290
 *   +0x05a0 -> line 5291
 *   +0x05a8 -> line 5292
 *   +0x05b0 -> line 5291
 *   +0x05b4 -> line 5293
 *   +0x05bc -> line 5294
 *   +0x05c0 -> line 5295
 *   +0x05cc -> line 5296
 *   +0x05d4 -> line 5295
 *   +0x05d8 -> line 5296
 *   +0x05e0 -> line 5295
 *   +0x05e4 -> line 5296
 *   +0x05e8 -> line 5297
 *   +0x05ec -> line 5296
 *   +0x05f0 -> line 5297
 *   +0x05f4 -> line 5296
 *   +0x05f8 -> line 5298
 *   +0x0600 -> line 5300
 *   +0x0608 -> line 5301
 *   +0x060c -> line 5300
 *   +0x0610 -> line 5301
 *   +0x0614 -> line 5302
 *   +0x0618 -> line 5300
 *   +0x061c -> line 5301
 *   +0x0620 -> line 5300
 *   +0x0624 -> line 5301
 *   +0x062c -> line 5302
 *   +0x0634 -> line 5301
 *   +0x0638 -> line 5302
 *   +0x063c -> line 5305
 *   +0x0644 -> line 5306
 *   +0x0648 -> line 5307
 *   +0x0678 -> line 5310
 *   +0x0684 -> line 5311
 *   +0x068c -> line 5310
 *   +0x0690 -> line 5311
 *   +0x0694 -> line 5310
 *   +0x0698 -> line 5311
 *   +0x06a0 -> line 5312
 *   +0x06a8 -> line 5311
 *   +0x06ac -> line 5313
 *   +0x06b4 -> line 5314
 *   +0x06b8 -> line 5315
 *   +0x06c4 -> line 5316
 *   +0x06c8 -> line 5315
 *   +0x06d0 -> line 5316
 *   +0x06d4 -> line 5317
 *   +0x06d8 -> line 5316
 *   +0x06dc -> line 5317
 *   +0x06e0 -> line 5316
 *   +0x06e4 -> line 5318
 *   +0x06ec -> line 5319
 *   +0x0700 -> line 5320
 *   +0x0708 -> line 5322
 *   +0x0714 -> line 5323
 *   +0x071c -> line 5322
 *   +0x0720 -> line 5323
 *   +0x0724 -> line 5322
 *   +0x0728 -> line 5323
 *   +0x0730 -> line 5324
 *   +0x0738 -> line 5323
 *   +0x073c -> line 5325
 *   +0x0744 -> line 5326
 *   +0x0748 -> line 5327
 *   +0x0754 -> line 5328
 *   +0x075c -> line 5327
 *   +0x0760 -> line 5328
 *   +0x0764 -> line 5327
 *   +0x0768 -> line 5328
 *   +0x0770 -> line 5329
 *   +0x0778 -> line 5328
 *   +0x077c -> line 5332
 *   +0x0784 -> line 5333
 *   +0x0788 -> line 5334
 *   +0x07bc -> line 5336
 *   +0x07c0 -> line 5337
 *   +0x07cc -> line 5338
 *   +0x07d0 -> line 5339
 *   +0x07d4 -> line 5337
 *   +0x07d8 -> line 5339
 *   +0x07dc -> line 5337
 *   +0x07e0 -> line 5338
 *   +0x07e8 -> line 5339
 *   +0x07f0 -> line 5338
 *   +0x07f4 -> line 5340
 *   +0x07fc -> line 5341
 *   +0x0810 -> line 5342
 *   +0x0818 -> line 5344
 *   +0x0824 -> line 5345
 *   +0x082c -> line 5344
 *   +0x0830 -> line 5345
 *   +0x0838 -> line 5344
 *   +0x083c -> line 5345
 *   +0x0840 -> line 5346
 *   +0x0844 -> line 5345
 *   +0x0848 -> line 5346
 *   +0x084c -> line 5345
 *   +0x0850 -> line 5347
 *   +0x0858 -> line 5349
 *   +0x0860 -> line 5350
 *   +0x0864 -> line 5349
 *   +0x0868 -> line 5350
 *   +0x086c -> line 5351
 *   +0x0870 -> line 5349
 *   +0x0874 -> line 5350
 *   +0x0878 -> line 5349
 *   +0x087c -> line 5350
 *   +0x0884 -> line 5351
 *   +0x088c -> line 5350
 *   +0x0890 -> line 5351
 *   +0x0894 -> line 5352
 *   +0x089c -> line 5353
 *   +0x08a0 -> line 5354
 *   +0x08a8 -> line 5355
 *   +0x08ac -> line 5354
 *   +0x08b0 -> line 5355
 *   +0x08b4 -> line 5356
 *   +0x08b8 -> line 5354
 *   +0x08bc -> line 5355
 *   +0x08c0 -> line 5354
 *   +0x08c4 -> line 5355
 *   +0x08cc -> line 5356
 *   +0x08d4 -> line 5355
 *   +0x08d8 -> line 5356
 *   +0x08e0 -> line 5365
 *   +0x08e8 -> line 5361
 *   +0x08ec -> line 5362
 *   +0x08f0 -> line 5363
 *   +0x08f4 -> line 5365
 *   +0x08fc -> line 5366
 *   +0x092c -> line 5367
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void PS2glVU1TexCoordsCubeMappingVectorTo2D(tagGLcontext* pctx)
{
    int iCubeMapFaceMask;
    int iCubeMapFaces[3];
    int iCubeMapType;
    int bCubeMapAddition;
    float CubeMapNSave[3][4];
    float CubeMapAbsNSave[3][4];
    float (*CubeMapTSave)[4];
    float (*pNormalMatrix)[4][4];
    float (*pCubeMapNSave)[4];
    float (*pCubeMapAbsNSave)[4];
    float (*pN)[4];
    float vUnitVector[4];
    int* piCubeMapFaces;
    int nLoop;
    int j;
    int i;
    float ma;
    float tc;
    float sc;
    /* TODO: decompile from asm/... */
}

/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_Texture.c lines 4902–5131 */
/* addr: 0x00169410  size: 2372 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 4902
 *   +0x0004 -> line 4907
 *   +0x0008 -> line 4902
 *   +0x000c -> line 4907
 *   +0x0010 -> line 4902
 *   +0x0014 -> line 4908
 *   +0x0018 -> line 4902
 *   +0x001c -> line 4907
 *   +0x0020 -> line 4902
 *   +0x0024 -> line 4915
 *   +0x0028 -> line 4902
 *   +0x0040 -> line 4907
 *   +0x0044 -> line 4905
 *   +0x0048 -> line 4909
 *   +0x0050 -> line 4905
 *   +0x0054 -> line 4909
 *   +0x0058 -> line 4913
 *   +0x005c -> line 4908
 *   +0x0060 -> line 4907
 *   +0x0064 -> line 4908
 *   +0x0070 -> line 4913
 *   +0x0078 -> line 4915
 *   +0x0080 -> line 4921
 *   +0x0084 -> line 4922
 *   +0x0088 -> line 4923
 *   +0x0090 -> line 4925
 *   +0x00a8 -> line 4927
 *   +0x00d4 -> line 4928
 *   +0x0100 -> line 4929
 *   +0x012c -> line 4930
 *   +0x0158 -> line 4932
 *   +0x0174 -> line 4933
 *   +0x0180 -> line 4935
 *   +0x0184 -> line 4936
 *   +0x0190 -> line 4937
 *   +0x01a4 -> line 4939
 *   +0x01c0 -> line 4940
 *   +0x01c8 -> line 4942
 *   +0x01cc -> line 4943
 *   +0x01d8 -> line 4946
 *   +0x01f4 -> line 4947
 *   +0x0200 -> line 4949
 *   +0x0208 -> line 4954
 *   +0x0210 -> line 4951
 *   +0x0214 -> line 4952
 *   +0x0218 -> line 4954
 *   +0x0220 -> line 4960
 *   +0x022c -> line 4955
 *   +0x0230 -> line 4956
 *   +0x0234 -> line 4957
 *   +0x0238 -> line 4958
 *   +0x023c -> line 4960
 *   +0x0244 -> line 4962
 *   +0x0254 -> line 4964
 *   +0x02bc -> line 4966
 *   +0x02c0 -> line 4968
 *   +0x02c8 -> line 4970
 *   +0x02cc -> line 4973
 *   +0x02d0 -> line 4975
 *   +0x02d8 -> line 4977
 *   +0x02dc -> line 4980
 *   +0x02e0 -> line 4985
 *   +0x02e8 -> line 4988
 *   +0x02f8 -> line 4989
 *   +0x0300 -> line 4990
 *   +0x0308 -> line 4991
 *   +0x0310 -> line 4994
 *   +0x0318 -> line 4995
 *   +0x0324 -> line 4996
 *   +0x0330 -> line 4997
 *   +0x033c -> line 4998
 *   +0x0340 -> line 4999
 *   +0x034c -> line 5000
 *   +0x0350 -> line 5001
 *   +0x035c -> line 5002
 *   +0x0360 -> line 5004
 *   +0x0368 -> line 5003
 *   +0x036c -> line 5004
 *   +0x0370 -> line 5003
 *   +0x0378 -> line 5006
 *   +0x03dc -> line 5008
 *   +0x03e0 -> line 5010
 *   +0x03e8 -> line 5012
 *   +0x03ec -> line 5015
 *   +0x03f0 -> line 5017
 *   +0x03f8 -> line 5019
 *   +0x03fc -> line 5022
 *   +0x0400 -> line 5023
 *   +0x0404 -> line 5026
 *   +0x0408 -> line 5027
 *   +0x0410 -> line 5029
 *   +0x041c -> line 5030
 *   +0x0440 -> line 5033
 *   +0x0484 -> line 5035
 *   +0x0488 -> line 5036
 *   +0x0490 -> line 5038
 *   +0x0494 -> line 5036
 *   +0x0498 -> line 5038
 *   +0x049c -> line 5039
 *   +0x04a0 -> line 5036
 *   +0x04a4 -> line 5038
 *   +0x04a8 -> line 5036
 *   +0x04ac -> line 5038
 *   +0x04b4 -> line 5039
 *   +0x04bc -> line 5038
 *   +0x04c0 -> line 5039
 *   +0x04c4 -> line 5040
 *   +0x04cc -> line 5041
 *   +0x04d0 -> line 5042
 *   +0x04dc -> line 5043
 *   +0x04e0 -> line 5044
 *   +0x04e4 -> line 5042
 *   +0x04e8 -> line 5044
 *   +0x04ec -> line 5042
 *   +0x04f0 -> line 5043
 *   +0x04f8 -> line 5044
 *   +0x0500 -> line 5043
 *   +0x0504 -> line 5045
 *   +0x050c -> line 5046
 *   +0x0520 -> line 5047
 *   +0x0528 -> line 5049
 *   +0x0534 -> line 5050
 *   +0x053c -> line 5049
 *   +0x0540 -> line 5050
 *   +0x0544 -> line 5049
 *   +0x0548 -> line 5050
 *   +0x0550 -> line 5051
 *   +0x0558 -> line 5050
 *   +0x055c -> line 5052
 *   +0x0564 -> line 5053
 *   +0x0568 -> line 5054
 *   +0x0574 -> line 5055
 *   +0x057c -> line 5054
 *   +0x0580 -> line 5055
 *   +0x0584 -> line 5054
 *   +0x0588 -> line 5055
 *   +0x0590 -> line 5056
 *   +0x0598 -> line 5055
 *   +0x059c -> line 5057
 *   +0x05a4 -> line 5058
 *   +0x05a8 -> line 5059
 *   +0x05b4 -> line 5060
 *   +0x05bc -> line 5059
 *   +0x05c0 -> line 5060
 *   +0x05c8 -> line 5059
 *   +0x05cc -> line 5060
 *   +0x05d0 -> line 5061
 *   +0x05d4 -> line 5060
 *   +0x05d8 -> line 5061
 *   +0x05dc -> line 5060
 *   +0x05e0 -> line 5062
 *   +0x05e8 -> line 5064
 *   +0x05f0 -> line 5065
 *   +0x05f4 -> line 5064
 *   +0x05f8 -> line 5065
 *   +0x05fc -> line 5066
 *   +0x0600 -> line 5064
 *   +0x0604 -> line 5065
 *   +0x0608 -> line 5064
 *   +0x060c -> line 5065
 *   +0x0614 -> line 5066
 *   +0x061c -> line 5065
 *   +0x0620 -> line 5066
 *   +0x0624 -> line 5069
 *   +0x062c -> line 5070
 *   +0x0630 -> line 5071
 *   +0x0660 -> line 5074
 *   +0x066c -> line 5075
 *   +0x0674 -> line 5074
 *   +0x0678 -> line 5075
 *   +0x067c -> line 5074
 *   +0x0680 -> line 5075
 *   +0x0688 -> line 5076
 *   +0x0690 -> line 5075
 *   +0x0694 -> line 5077
 *   +0x069c -> line 5078
 *   +0x06a0 -> line 5079
 *   +0x06ac -> line 5080
 *   +0x06b0 -> line 5079
 *   +0x06b8 -> line 5080
 *   +0x06bc -> line 5081
 *   +0x06c0 -> line 5080
 *   +0x06c4 -> line 5081
 *   +0x06c8 -> line 5080
 *   +0x06cc -> line 5082
 *   +0x06d4 -> line 5083
 *   +0x06e8 -> line 5084
 *   +0x06f0 -> line 5086
 *   +0x06fc -> line 5087
 *   +0x0704 -> line 5086
 *   +0x0708 -> line 5087
 *   +0x070c -> line 5086
 *   +0x0710 -> line 5087
 *   +0x0718 -> line 5088
 *   +0x0720 -> line 5087
 *   +0x0724 -> line 5089
 *   +0x072c -> line 5090
 *   +0x0730 -> line 5091
 *   +0x073c -> line 5092
 *   +0x0744 -> line 5091
 *   +0x0748 -> line 5092
 *   +0x074c -> line 5091
 *   +0x0750 -> line 5092
 *   +0x0758 -> line 5093
 *   +0x0760 -> line 5092
 *   +0x0764 -> line 5096
 *   +0x076c -> line 5097
 *   +0x0770 -> line 5098
 *   +0x07a4 -> line 5100
 *   +0x07a8 -> line 5101
 *   +0x07b4 -> line 5102
 *   +0x07b8 -> line 5103
 *   +0x07bc -> line 5101
 *   +0x07c0 -> line 5103
 *   +0x07c4 -> line 5101
 *   +0x07c8 -> line 5102
 *   +0x07d0 -> line 5103
 *   +0x07d8 -> line 5102
 *   +0x07dc -> line 5104
 *   +0x07e4 -> line 5105
 *   +0x07f8 -> line 5106
 *   +0x0800 -> line 5108
 *   +0x080c -> line 5109
 *   +0x0814 -> line 5108
 *   +0x0818 -> line 5109
 *   +0x0820 -> line 5108
 *   +0x0824 -> line 5109
 *   +0x0828 -> line 5110
 *   +0x082c -> line 5109
 *   +0x0830 -> line 5110
 *   +0x0834 -> line 5109
 *   +0x0838 -> line 5111
 *   +0x0840 -> line 5113
 *   +0x0848 -> line 5114
 *   +0x084c -> line 5113
 *   +0x0850 -> line 5114
 *   +0x0854 -> line 5115
 *   +0x0858 -> line 5113
 *   +0x085c -> line 5114
 *   +0x0860 -> line 5113
 *   +0x0864 -> line 5114
 *   +0x086c -> line 5115
 *   +0x0874 -> line 5114
 *   +0x0878 -> line 5115
 *   +0x087c -> line 5116
 *   +0x0884 -> line 5117
 *   +0x0888 -> line 5118
 *   +0x0890 -> line 5119
 *   +0x0894 -> line 5118
 *   +0x0898 -> line 5119
 *   +0x089c -> line 5120
 *   +0x08a0 -> line 5118
 *   +0x08a4 -> line 5119
 *   +0x08a8 -> line 5118
 *   +0x08ac -> line 5119
 *   +0x08b4 -> line 5120
 *   +0x08bc -> line 5119
 *   +0x08c0 -> line 5120
 *   +0x08c8 -> line 5129
 *   +0x08d0 -> line 5125
 *   +0x08d4 -> line 5126
 *   +0x08d8 -> line 5127
 *   +0x08dc -> line 5129
 *   +0x08e4 -> line 5130
 *   +0x0914 -> line 5131
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void PS2glVU1ListTexCoordsCubeMappingVectorTo2D(tagGLprimbuf* pPrimBuf)
{
    int iCubeMapFaceMask;
    int iCubeMapFaces[3];
    int iCubeMapType;
    int bCubeMapAddition;
    float CubeMapNSave[3][4];
    float CubeMapAbsNSave[3][4];
    float (*CubeMapTSave)[4];
    float (*pNormalMatrix)[4][4];
    float (*pCubeMapNSave)[4];
    float (*pCubeMapAbsNSave)[4];
    float (*pN)[4];
    float vUnitVector[4];
    int* piCubeMapFaces;
    int nLoop;
    int j;
    int i;
    float ma;
    float tc;
    float sc;
    /* TODO: decompile from asm/... */
}

/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_Texture.c lines 4461–4497 */
/* addr: 0x00169d60  size: 424 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 4461
 *   +0x0004 -> line 4462
 *   +0x0008 -> line 4461
 *   +0x0014 -> line 4462
 *   +0x0050 -> line 4471
 *   +0x007c -> line 4479
 *   +0x0080 -> line 4482
 *   +0x017c -> line 4483
 *   +0x0184 -> line 4485
 *   +0x018c -> line 4490
 *   +0x0194 -> line 4497
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void impPS2glGetColorTableParameterfvEXT(unsigned int target, unsigned int pname, float* params)
{
    unsigned int eInternalTarget;
    /* TODO: decompile from asm/... */
}

/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_Texture.c lines 4418–4458 */
/* addr: 0x00169f10  size: 484 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 4418
 *   +0x0004 -> line 4419
 *   +0x0008 -> line 4418
 *   +0x0014 -> line 4419
 *   +0x0064 -> line 4423
 *   +0x006c -> line 4430
 *   +0x0098 -> line 4438
 *   +0x009c -> line 4441
 *   +0x0198 -> line 4442
 *   +0x019c -> line 4444
 *   +0x01a4 -> line 4449
 *   +0x01a8 -> line 4450
 *   +0x01b0 -> line 4452
 *   +0x01cc -> line 4456
 *   +0x01d0 -> line 4458
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void impPS2glGetColorTableParameterivEXT(unsigned int target, unsigned int pname, int* params)
{
    unsigned int eInternalTarget;
    /* TODO: decompile from asm/... */
}

/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_Texture.c lines 4314–4415 */
/* addr: 0x0016a100  size: 1080 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 4314
 *   +0x0004 -> line 4323
 *   +0x0008 -> line 4314
 *   +0x000c -> line 4323
 *   +0x0010 -> line 4314
 *   +0x0014 -> line 4323
 *   +0x0018 -> line 4314
 *   +0x001c -> line 4323
 *   +0x0020 -> line 4314
 *   +0x0030 -> line 4323
 *   +0x0054 -> line 4331
 *   +0x0058 -> line 4335
 *   +0x0064 -> line 4337
 *   +0x006c -> line 4338
 *   +0x0070 -> line 4339
 *   +0x0078 -> line 4342
 *   +0x0170 -> line 4343
 *   +0x0174 -> line 4344
 *   +0x017c -> line 4347
 *   +0x0184 -> line 4350
 *   +0x01a0 -> line 4356
 *   +0x01a8 -> line 4358
 *   +0x01b8 -> line 4360
 *   +0x01c8 -> line 4362
 *   +0x01cc -> line 4361
 *   +0x01d0 -> line 4362
 *   +0x01dc -> line 4363
 *   +0x01e4 -> line 4366
 *   +0x01f0 -> line 4368
 *   +0x0204 -> line 4369
 *   +0x0228 -> line 4370
 *   +0x0238 -> line 4371
 *   +0x0258 -> line 4373
 *   +0x0268 -> line 4375
 *   +0x0270 -> line 4374
 *   +0x0274 -> line 4375
 *   +0x027c -> line 4378
 *   +0x0284 -> line 4383
 *   +0x0290 -> line 4385
 *   +0x02ac -> line 4386
 *   +0x0334 -> line 4387
 *   +0x033c -> line 4390
 *   +0x0348 -> line 4392
 *   +0x035c -> line 4393
 *   +0x0370 -> line 4394
 *   +0x0380 -> line 4395
 *   +0x0390 -> line 4397
 *   +0x03a0 -> line 4398
 *   +0x03b0 -> line 4400
 *   +0x03d4 -> line 4403
 *   +0x03d8 -> line 4402
 *   +0x03dc -> line 4403
 *   +0x03e4 -> line 4406
 *   +0x03e8 -> line 4405
 *   +0x03f8 -> line 4406
 *   +0x0400 -> line 4408
 *   +0x0408 -> line 4410
 *   +0x0418 -> line 4415
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void impPS2glGetColorTableEXT(unsigned int target, unsigned int format, void* data)
{
    unsigned char* pbSrcData;
    unsigned int* pSrcData;
    int width;
    int i;
    unsigned int* pDstData;
    unsigned int eInternalTarget;
    /* TODO: decompile from asm/... */
}

/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_Texture.c lines 4158–4311 */
/* addr: 0x0016a540  size: 1756 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 4158
 *   +0x0004 -> line 4167
 *   +0x0008 -> line 4158
 *   +0x000c -> line 4167
 *   +0x0010 -> line 4158
 *   +0x0014 -> line 4167
 *   +0x0018 -> line 4158
 *   +0x001c -> line 4167
 *   +0x0020 -> line 4158
 *   +0x0024 -> line 4166
 *   +0x0028 -> line 4158
 *   +0x0044 -> line 4167
 *   +0x0068 -> line 4175
 *   +0x006c -> line 4179
 *   +0x0078 -> line 4181
 *   +0x007c -> line 4183
 *   +0x0080 -> line 4181
 *   +0x0084 -> line 4182
 *   +0x008c -> line 4183
 *   +0x0094 -> line 4184
 *   +0x009c -> line 4187
 *   +0x01a8 -> line 4188
 *   +0x01ac -> line 4189
 *   +0x01b8 -> line 4192
 *   +0x01d8 -> line 4193
 *   +0x01e0 -> line 4195
 *   +0x0200 -> line 4202
 *   +0x0204 -> line 4203
 *   +0x0210 -> line 4205
 *   +0x0224 -> line 4208
 *   +0x0238 -> line 4209
 *   +0x0240 -> line 4210
 *   +0x0244 -> line 4209
 *   +0x0248 -> line 4210
 *   +0x024c -> line 4209
 *   +0x0250 -> line 4210
 *   +0x0258 -> line 4211
 *   +0x0260 -> line 4214
 *   +0x0274 -> line 4216
 *   +0x028c -> line 4219
 *   +0x02a0 -> line 4220
 *   +0x02a8 -> line 4221
 *   +0x02b0 -> line 4222
 *   +0x02c4 -> line 4225
 *   +0x02d8 -> line 4226
 *   +0x02e0 -> line 4227
 *   +0x02e8 -> line 4231
 *   +0x02fc -> line 4232
 *   +0x0308 -> line 4234
 *   +0x0310 -> line 4232
 *   +0x0314 -> line 4234
 *   +0x031c -> line 4237
 *   +0x0324 -> line 4242
 *   +0x0330 -> line 4244
 *   +0x034c -> line 4246
 *   +0x03c4 -> line 4247
 *   +0x03c8 -> line 4246
 *   +0x03cc -> line 4247
 *   +0x03d8 -> line 4248
 *   +0x03e0 -> line 4251
 *   +0x03f0 -> line 4253
 *   +0x0400 -> line 4255
 *   +0x0418 -> line 4256
 *   +0x0430 -> line 4257
 *   +0x0444 -> line 4258
 *   +0x0458 -> line 4260
 *   +0x0468 -> line 4261
 *   +0x0478 -> line 4264
 *   +0x04a0 -> line 4267
 *   +0x04a4 -> line 4266
 *   +0x04a8 -> line 4267
 *   +0x04b0 -> line 4270
 *   +0x04b4 -> line 4269
 *   +0x04c4 -> line 4270
 *   +0x04d0 -> line 4272
 *   +0x04d8 -> line 4274
 *   +0x04e8 -> line 4280
 *   +0x0514 -> line 4284
 *   +0x0524 -> line 4286
 *   +0x052c -> line 4284
 *   +0x0530 -> line 4286
 *   +0x0538 -> line 4284
 *   +0x053c -> line 4286
 *   +0x0540 -> line 4284
 *   +0x0544 -> line 4286
 *   +0x05a4 -> line 4287
 *   +0x05ac -> line 4290
 *   +0x05bc -> line 4291
 *   +0x05c4 -> line 4290
 *   +0x05c8 -> line 4291
 *   +0x05d0 -> line 4290
 *   +0x05d4 -> line 4291
 *   +0x05d8 -> line 4290
 *   +0x05dc -> line 4291
 *   +0x063c -> line 4292
 *   +0x0644 -> line 4308
 *   +0x0650 -> line 4307
 *   +0x0654 -> line 4308
 *   +0x0658 -> line 4307
 *   +0x0660 -> line 4308
 *   +0x06b4 -> line 4311
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void impPS2glColorSubTableEXT(unsigned int target, int start, int count, unsigned int format, void* data)
{
    unsigned char* pbDstData;
    unsigned int* pSrcData;
    unsigned char aTemp[4];
    int width;
    int i;
    unsigned int* pDstData;
    unsigned int eInternalTarget;
    /* TODO: decompile from asm/... */
}

/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_Texture.c lines 3985–4155 */
/* addr: 0x0016ac20  size: 1744 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 3985
 *   +0x0004 -> line 3994
 *   +0x0008 -> line 3985
 *   +0x000c -> line 3994
 *   +0x0010 -> line 3985
 *   +0x0014 -> line 3994
 *   +0x0018 -> line 3985
 *   +0x001c -> line 3994
 *   +0x0020 -> line 3985
 *   +0x0024 -> line 3993
 *   +0x0028 -> line 3985
 *   +0x0040 -> line 3994
 *   +0x0064 -> line 4002
 *   +0x0068 -> line 4006
 *   +0x0074 -> line 4008
 *   +0x007c -> line 4009
 *   +0x0084 -> line 4010
 *   +0x0088 -> line 4011
 *   +0x0090 -> line 4014
 *   +0x0188 -> line 4018
 *   +0x0198 -> line 4021
 *   +0x01a0 -> line 4024
 *   +0x01ac -> line 4026
 *   +0x01b8 -> line 4027
 *   +0x01c4 -> line 4028
 *   +0x01d4 -> line 4031
 *   +0x01d8 -> line 4033
 *   +0x01e0 -> line 4036
 *   +0x01f0 -> line 4038
 *   +0x020c -> line 4046
 *   +0x0218 -> line 4048
 *   +0x022c -> line 4051
 *   +0x0240 -> line 4052
 *   +0x0248 -> line 4053
 *   +0x024c -> line 4052
 *   +0x0250 -> line 4053
 *   +0x0254 -> line 4052
 *   +0x0258 -> line 4053
 *   +0x0260 -> line 4054
 *   +0x0268 -> line 4057
 *   +0x027c -> line 4059
 *   +0x0290 -> line 4062
 *   +0x02ac -> line 4063
 *   +0x02b8 -> line 4064
 *   +0x02c8 -> line 4067
 *   +0x02e0 -> line 4068
 *   +0x02e8 -> line 4072
 *   +0x02fc -> line 4073
 *   +0x0300 -> line 4074
 *   +0x0308 -> line 4075
 *   +0x0310 -> line 4074
 *   +0x0318 -> line 4075
 *   +0x0320 -> line 4078
 *   +0x0328 -> line 4083
 *   +0x0334 -> line 4085
 *   +0x0350 -> line 4087
 *   +0x03c4 -> line 4088
 *   +0x03c8 -> line 4087
 *   +0x03cc -> line 4088
 *   +0x03d8 -> line 4089
 *   +0x03e0 -> line 4092
 *   +0x03ec -> line 4094
 *   +0x03fc -> line 4096
 *   +0x0410 -> line 4097
 *   +0x0428 -> line 4098
 *   +0x0438 -> line 4099
 *   +0x0448 -> line 4101
 *   +0x0458 -> line 4102
 *   +0x0468 -> line 4103
 *   +0x0470 -> line 4105
 *   +0x047c -> line 4107
 *   +0x04a0 -> line 4110
 *   +0x04a4 -> line 4109
 *   +0x04a8 -> line 4110
 *   +0x04b0 -> line 4113
 *   +0x04b4 -> line 4112
 *   +0x04c4 -> line 4113
 *   +0x04d0 -> line 4115
 *   +0x04d8 -> line 4117
 *   +0x04e8 -> line 4124
 *   +0x0514 -> line 4128
 *   +0x0520 -> line 4130
 *   +0x0528 -> line 4128
 *   +0x052c -> line 4130
 *   +0x0534 -> line 4128
 *   +0x0538 -> line 4130
 *   +0x053c -> line 4128
 *   +0x0540 -> line 4130
 *   +0x05a0 -> line 4131
 *   +0x05a8 -> line 4134
 *   +0x05b4 -> line 4135
 *   +0x05bc -> line 4134
 *   +0x05c0 -> line 4135
 *   +0x05c8 -> line 4134
 *   +0x05cc -> line 4135
 *   +0x05d0 -> line 4134
 *   +0x05d4 -> line 4135
 *   +0x0634 -> line 4136
 *   +0x063c -> line 4152
 *   +0x0644 -> line 4151
 *   +0x0648 -> line 4152
 *   +0x064c -> line 4151
 *   +0x0654 -> line 4152
 *   +0x06a8 -> line 4155
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void impPS2glColorTableEXT(unsigned int target, int width, unsigned int format, void* data)
{
    unsigned char* pbDstData;
    unsigned int* pSrcData;
    unsigned char aTemp[4];
    unsigned int eInternalTarget;
    unsigned int* pDstData;
    int i;
    /* TODO: decompile from asm/... */
}

/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_Texture.c lines 3718–3980 */
/* addr: 0x0016b2f0  size: 2256 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 3718
 *   +0x0004 -> line 3731
 *   +0x0008 -> line 3718
 *   +0x000c -> line 3730
 *   +0x0010 -> line 3718
 *   +0x0014 -> line 3731
 *   +0x0018 -> line 3718
 *   +0x003c -> line 3727
 *   +0x0040 -> line 3718
 *   +0x0044 -> line 3725
 *   +0x0048 -> line 3730
 *   +0x004c -> line 3731
 *   +0x0060 -> line 3735
 *   +0x0068 -> line 3740
 *   +0x0070 -> line 3744
 *   +0x0078 -> line 3745
 *   +0x00b8 -> line 3760
 *   +0x00c4 -> line 3764
 *   +0x00c8 -> line 3763
 *   +0x00cc -> line 3764
 *   +0x00d0 -> line 3763
 *   +0x00d8 -> line 3764
 *   +0x00e0 -> line 3766
 *   +0x00e4 -> line 3767
 *   +0x00e8 -> line 3766
 *   +0x00ec -> line 3767
 *   +0x0104 -> line 3768
 *   +0x0108 -> line 3770
 *   +0x010c -> line 3769
 *   +0x0110 -> line 3770
 *   +0x0114 -> line 3771
 *   +0x0124 -> line 3772
 *   +0x012c -> line 3776
 *   +0x0130 -> line 3777
 *   +0x0134 -> line 3776
 *   +0x0138 -> line 3777
 *   +0x013c -> line 3776
 *   +0x0140 -> line 3777
 *   +0x0148 -> line 3778
 *   +0x0150 -> line 3781
 *   +0x0154 -> line 3780
 *   +0x0158 -> line 3781
 *   +0x015c -> line 3780
 *   +0x0160 -> line 3781
 *   +0x0178 -> line 3784
 *   +0x017c -> line 3783
 *   +0x0180 -> line 3785
 *   +0x0188 -> line 3791
 *   +0x01a4 -> line 3793
 *   +0x01c0 -> line 3798
 *   +0x01c8 -> line 3800
 *   +0x01fc -> line 3805
 *   +0x0214 -> line 3807
 *   +0x022c -> line 3809
 *   +0x0234 -> line 3811
 *   +0x023c -> line 3814
 *   +0x0240 -> line 3815
 *   +0x0248 -> line 3819
 *   +0x0250 -> line 3817
 *   +0x0254 -> line 3819
 *   +0x026c -> line 3821
 *   +0x0288 -> line 3824
 *   +0x02a0 -> line 3826
 *   +0x02b8 -> line 3828
 *   +0x02c0 -> line 3830
 *   +0x02c8 -> line 3832
 *   +0x02cc -> line 3833
 *   +0x02dc -> line 3834
 *   +0x02e0 -> line 3839
 *   +0x02f4 -> line 3841
 *   +0x0328 -> line 3843
 *   +0x0334 -> line 3844
 *   +0x034c -> line 3843
 *   +0x035c -> line 3844
 *   +0x0374 -> line 3847
 *   +0x038c -> line 3851
 *   +0x03cc -> line 3860
 *   +0x03d8 -> line 3861
 *   +0x03e0 -> line 3863
 *   +0x03f0 -> line 3868
 *   +0x0404 -> line 3870
 *   +0x0414 -> line 3871
 *   +0x0428 -> line 3873
 *   +0x0438 -> line 3874
 *   +0x0440 -> line 3878
 *   +0x044c -> line 3879
 *   +0x0460 -> line 3881
 *   +0x0474 -> line 3887
 *   +0x047c -> line 3894
 *   +0x0484 -> line 3896
 *   +0x048c -> line 3897
 *   +0x0494 -> line 3900
 *   +0x04ac -> line 3908
 *   +0x04b4 -> line 3912
 *   +0x04bc -> line 3918
 *   +0x04c0 -> line 3924
 *   +0x04c8 -> line 3919
 *   +0x04cc -> line 3924
 *   +0x04e8 -> line 3919
 *   +0x04ec -> line 3924
 *   +0x04f0 -> line 3918
 *   +0x04f4 -> line 3924
 *   +0x0500 -> line 3918
 *   +0x0504 -> line 3924
 *   +0x0508 -> line 3919
 *   +0x0514 -> line 3924
 *   +0x0518 -> line 3920
 *   +0x051c -> line 3924
 *   +0x0520 -> line 3925
 *   +0x0524 -> line 3924
 *   +0x0528 -> line 3920
 *   +0x0530 -> line 3924
 *   +0x0534 -> line 3920
 *   +0x0538 -> line 3924
 *   +0x0550 -> line 3925
 *   +0x0580 -> line 3929
 *   +0x0584 -> line 3928
 *   +0x0588 -> line 3929
 *   +0x058c -> line 3928
 *   +0x0590 -> line 3929
 *   +0x05a0 -> line 3930
 *   +0x05a4 -> line 3929
 *   +0x05d0 -> line 3930
 *   +0x05d4 -> line 3931
 *   +0x05dc -> line 3929
 *   +0x05f8 -> line 3930
 *   +0x060c -> line 3931
 *   +0x0638 -> line 3932
 *   +0x0640 -> line 3939
 *   +0x0644 -> line 3945
 *   +0x0654 -> line 3940
 *   +0x0658 -> line 3945
 *   +0x0664 -> line 3940
 *   +0x0668 -> line 3945
 *   +0x066c -> line 3939
 *   +0x0670 -> line 3945
 *   +0x0674 -> line 3939
 *   +0x0678 -> line 3945
 *   +0x067c -> line 3944
 *   +0x0680 -> line 3940
 *   +0x0688 -> line 3941
 *   +0x068c -> line 3940
 *   +0x0690 -> line 3945
 *   +0x06a0 -> line 3941
 *   +0x06ac -> line 3944
 *   +0x06b0 -> line 3945
 *   +0x06b4 -> line 3947
 *   +0x06b8 -> line 3945
 *   +0x06d4 -> line 3947
 *   +0x06d8 -> line 3945
 *   +0x06e0 -> line 3947
 *   +0x0710 -> line 3952
 *   +0x0718 -> line 3950
 *   +0x071c -> line 3952
 *   +0x0758 -> line 3953
 *   +0x0760 -> line 3952
 *   +0x0778 -> line 3953
 *   +0x07a4 -> line 3954
 *   +0x07a8 -> line 3957
 *   +0x07c0 -> line 3962
 *   +0x081c -> line 3963
 *   +0x0824 -> line 3965
 *   +0x08a0 -> line 3980
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
int PS2glAllocTexMem(int iTexSize, unsigned int nTexID)
{
    tagGLtexblock theBlock;
    int iNewBlockSize;
    int iOldBlockEnd;
    int iRandomIndex;
    int iTexBlock_TEXTURE0_2D;
    int nTexID_TEXTURE0_2D;
    int iHowFreeSpaceFound;
    int iTexIndexReplace;
    int iTexLevel;
    int iLevel;
    tagGLtexblock* pBlock;
    int iBlockFound;
    int iBlock;
    /* TODO: decompile from asm/... */
}

/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_Texture.c lines 3652–3714 */
/* addr: 0x0016bbc0  size: 600 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 3652
 *   +0x001c -> line 3653
 *   +0x0024 -> line 3655
 *   +0x0030 -> line 3656
 *   +0x0034 -> line 3655
 *   +0x0038 -> line 3657
 *   +0x003c -> line 3656
 *   +0x0044 -> line 3657
 *   +0x004c -> line 3660
 *   +0x0058 -> line 3663
 *   +0x0068 -> line 3665
 *   +0x006c -> line 3668
 *   +0x0074 -> line 3673
 *   +0x0078 -> line 3675
 *   +0x007c -> line 3671
 *   +0x0084 -> line 3673
 *   +0x008c -> line 3675
 *   +0x009c -> line 3676
 *   +0x00a0 -> line 3678
 *   +0x00b8 -> line 3679
 *   +0x00bc -> line 3678
 *   +0x00c0 -> line 3680
 *   +0x00c8 -> line 3681
 *   +0x00d0 -> line 3684
 *   +0x00e0 -> line 3686
 *   +0x00f4 -> line 3688
 *   +0x0100 -> line 3689
 *   +0x010c -> line 3690
 *   +0x0130 -> line 3693
 *   +0x0140 -> line 3695
 *   +0x0148 -> line 3693
 *   +0x014c -> line 3695
 *   +0x0160 -> line 3698
 *   +0x017c -> line 3699
 *   +0x0188 -> line 3700
 *   +0x01a8 -> line 3702
 *   +0x01ac -> line 3703
 *   +0x01bc -> line 3704
 *   +0x01c8 -> line 3702
 *   +0x01cc -> line 3704
 *   +0x01d4 -> line 3702
 *   +0x01dc -> line 3704
 *   +0x01e0 -> line 3708
 *   +0x01e4 -> line 3702
 *   +0x01ec -> line 3704
 *   +0x01f0 -> line 3703
 *   +0x01f4 -> line 3706
 *   +0x020c -> line 3703
 *   +0x0218 -> line 3704
 *   +0x0224 -> line 3708
 *   +0x022c -> line 3710
 *   +0x0238 -> line 3711
 *   +0x023c -> line 3710
 *   +0x0244 -> line 3711
 *   +0x0250 -> line 3714
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
tagGLtexblock* PS2glFreeTexBlock(int iBlock, int iSize)
{
    unsigned int nTexIDUnload;
    tagGLtexblock theBlock;
    int iEnd;
    int iStart;
    tagGLtexblock* pBlockReturn;
    tagGLtexblock* pBlock;
    /* TODO: decompile from asm/... */
}

/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_Texture.c lines 3623–3640 */
/* addr: 0x0016be20  size: 76 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 3623
 *   +0x0004 -> line 3629
 *   +0x0008 -> line 3623
 *   +0x000c -> line 3629
 *   +0x0014 -> line 3630
 *   +0x002c -> line 3636
 *   +0x0030 -> line 3638
 *   +0x0038 -> line 3639
 *   +0x0040 -> line 3640
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void PS2glUpdateTexIndex(int iLevelByTexSize);
void PS2glFreeTexBlockSafe(int iBlock, int iSize)
{
    g_PS2glContext.abTex1DChanged[0] = 1;
    g_PS2glContext.abTex2DChanged[0] = 1;
    g_PS2glContext.abTex1DChanged[1] = 1;
    g_PS2glContext.abTex2DChanged[1] = 1;
    g_PS2glContext.bTexCubeChanged = 1;
    PS2glFreeTexBlock(iBlock, iSize);
    PS2glUpdateTexIndex(-1);
}

/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_Texture.c lines 3439–3521 */
/* addr: 0x0016be70  size: 600 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 3439
 *   +0x0010 -> line 3441
 *   +0x0014 -> line 3439
 *   +0x001c -> line 3441
 *   +0x0020 -> line 3439
 *   +0x0030 -> line 3444
 *   +0x003c -> line 3449
 *   +0x0068 -> line 3453
 *   +0x0070 -> line 3455
 *   +0x0080 -> line 3459
 *   +0x0088 -> line 3464
 *   +0x0094 -> line 3466
 *   +0x0098 -> line 3467
 *   +0x009c -> line 3466
 *   +0x00a0 -> line 3467
 *   +0x00a4 -> line 3466
 *   +0x00a8 -> line 3467
 *   +0x00ac -> line 3466
 *   +0x00b0 -> line 3467
 *   +0x00b8 -> line 3471
 *   +0x00bc -> line 3467
 *   +0x00c0 -> line 3472
 *   +0x00d0 -> line 3475
 *   +0x00dc -> line 3477
 *   +0x0110 -> line 3480
 *   +0x0118 -> line 3483
 *   +0x0138 -> line 3486
 *   +0x013c -> line 3488
 *   +0x0148 -> line 3491
 *   +0x0150 -> line 3493
 *   +0x0160 -> line 3496
 *   +0x016c -> line 3498
 *   +0x01a0 -> line 3501
 *   +0x01a8 -> line 3503
 *   +0x01b8 -> line 3504
 *   +0x01c8 -> line 3507
 *   +0x01d0 -> line 3510
 *   +0x01d8 -> line 3513
 *   +0x0204 -> line 3516
 *   +0x0208 -> line 3518
 *   +0x0214 -> line 3519
 *   +0x0218 -> line 3520
 *   +0x0228 -> line 3521
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void PS2glUpdateTexIndex(int iLevelByTexSize)
{
    int J;
    int I;
    int iLimit;
    int iLoop;
    int iLevel;
    int iLevelEnd;
    int iLevelStart;
    /* TODO: decompile from asm/... */
}

/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_Texture.c lines 3376–3401 */
/* addr: 0x0016c0d0  size: 1144 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 3376
 *   +0x0004 -> line 3380
 *   +0x0008 -> line 3376
 *   +0x0024 -> line 3380
 *   +0x005c -> line 3386
 *   +0x0258 -> line 3387
 *   +0x0260 -> line 3390
 *   +0x035c -> line 3391
 *   +0x0364 -> line 3393
 *   +0x0380 -> line 3394
 *   +0x0390 -> line 3395
 *   +0x03a0 -> line 3396
 *   +0x03b0 -> line 3400
 *   +0x045c -> line 3401
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void impPS2glTexParameteriv(unsigned int target, unsigned int pname, int* params)
{
    /* TODO: decompile from asm/... */
}

/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_Texture.c lines 3350–3373 */
/* addr: 0x0016c550  size: 1084 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 3350
 *   +0x0004 -> line 3355
 *   +0x0008 -> line 3350
 *   +0x0024 -> line 3355
 *   +0x005c -> line 3361
 *   +0x0260 -> line 3362
 *   +0x0268 -> line 3365
 *   +0x0364 -> line 3366
 *   +0x036c -> line 3368
 *   +0x0374 -> line 3372
 *   +0x0420 -> line 3373
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void impPS2glTexParameterfv(unsigned int target, unsigned int pname, float* params)
{
    /* TODO: decompile from asm/... */
}

/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_Texture.c lines 3344–3347 */
/* addr: 0x0016c990  size: 596 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 3344
 *   +0x0004 -> line 3346
 *   +0x0008 -> line 3344
 *   +0x0024 -> line 3346
 *   +0x0238 -> line 3347
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void impPS2glTexParameterf(unsigned int target, unsigned int pname, float param)
{
    /* TODO: decompile from asm/... */
}

/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_Texture.c lines 3316–3341 */
/* addr: 0x0016cbf0  size: 572 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 3316
 *   +0x0004 -> line 3317
 *   +0x0008 -> line 3316
 *   +0x0024 -> line 3317
 *   +0x0120 -> line 3319
 *   +0x0128 -> line 3321
 *   +0x0158 -> line 3325
 *   +0x0160 -> line 3329
 *   +0x0168 -> line 3333
 *   +0x0170 -> line 3336
 *   +0x0174 -> line 3340
 *   +0x0220 -> line 3341
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void impPS2glTexParameteri(unsigned int target, unsigned int pname, int param)
{
    tag_GLtexture** ppTex = 0;

    switch (target)
    {
    case 0xDE0: ppTex = &g_PS2glContext.aTexName[g_PS2glContext.anCurTexName1D[g_PS2glContext.iCurTextureSet]].pTex1D; break;
    case 0xDE1: ppTex = &g_PS2glContext.aTexName[g_PS2glContext.anCurTexName2D[g_PS2glContext.iCurTextureSet]].pTex2D; break;
    case 0x8513: ppTex = &g_PS2glContext.aTexName[g_PS2glContext.anCurTexName2D[0]].pTexCube; break;
    }
    if (ppTex)
    {
        if (!*ppTex)
        {
            *ppTex = (tag_GLtexture*)PS2glAllocator(0x50);
            memset(*ppTex, 0, 0x50);
        }
        if (*ppTex)
        {
            switch (pname)
            {
            case 0x2800: (*ppTex)->eTexFilterMag = param; break;
            case 0x2801: (*ppTex)->eTexFilterMin = param; break;
            case 0x2802: (*ppTex)->eTexWrapS = param; break;
            case 0x2803: (*ppTex)->eTexWrapT = param; break;
            }
            switch (target)
            {
            case 0xDE0: g_PS2glContext.abTex1DChanged[g_PS2glContext.iCurTextureSet] = 1; break;
            case 0xDE1: g_PS2glContext.abTex2DChanged[g_PS2glContext.iCurTextureSet] = 1; break;
            case 0x8513:
            case 0x8515:
            case 0x8516:
            case 0x8517:
            case 0x8518:
            case 0x8519:
            case 0x851A: g_PS2glContext.bTexCubeChanged = 1; break;
            }
        }
    }
}

/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_Texture.c lines 3119–3313 */
/* addr: 0x0016ce30  size: 2380 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 3119
 *   +0x0004 -> line 3129
 *   +0x0008 -> line 3119
 *   +0x0050 -> line 3129
 *   +0x016c -> line 3130
 *   +0x0170 -> line 3133
 *   +0x0174 -> line 3130
 *   +0x017c -> line 3131
 *   +0x0180 -> line 3133
 *   +0x01e4 -> line 3136
 *   +0x01f8 -> line 3150
 *   +0x0204 -> line 3152
 *   +0x020c -> line 3154
 *   +0x0214 -> line 3157
 *   +0x038c -> line 3159
 *   +0x0394 -> line 3161
 *   +0x039c -> line 3162
 *   +0x03a0 -> line 3163
 *   +0x03a8 -> line 3164
 *   +0x03b0 -> line 3166
 *   +0x03b4 -> line 3167
 *   +0x03b8 -> line 3169
 *   +0x03c4 -> line 3173
 *   +0x03d0 -> line 3174
 *   +0x03dc -> line 3176
 *   +0x03f8 -> line 3178
 *   +0x03fc -> line 3179
 *   +0x0404 -> line 3178
 *   +0x0408 -> line 3179
 *   +0x0414 -> line 3180
 *   +0x0420 -> line 3183
 *   +0x0428 -> line 3186
 *   +0x0450 -> line 3187
 *   +0x0454 -> line 3189
 *   +0x0470 -> line 3191
 *   +0x0480 -> line 3193
 *   +0x048c -> line 3195
 *   +0x0498 -> line 3197
 *   +0x04b8 -> line 3198
 *   +0x04bc -> line 3199
 *   +0x04c4 -> line 3202
 *   +0x04e4 -> line 3203
 *   +0x04e8 -> line 3205
 *   +0x04f0 -> line 3208
 *   +0x04fc -> line 3210
 *   +0x051c -> line 3211
 *   +0x0520 -> line 3212
 *   +0x0528 -> line 3215
 *   +0x0548 -> line 3216
 *   +0x0550 -> line 3218
 *   +0x0560 -> line 3222
 *   +0x056c -> line 3220
 *   +0x0570 -> line 3222
 *   +0x057c -> line 3223
 *   +0x0590 -> line 3224
 *   +0x05a0 -> line 3225
 *   +0x05b4 -> line 3228
 *   +0x05cc -> line 3229
 *   +0x05d8 -> line 3234
 *   +0x05e0 -> line 3235
 *   +0x05ec -> line 3237
 *   +0x05f8 -> line 3239
 *   +0x0604 -> line 3241
 *   +0x0624 -> line 3242
 *   +0x0628 -> line 3243
 *   +0x0630 -> line 3246
 *   +0x0650 -> line 3247
 *   +0x0654 -> line 3249
 *   +0x065c -> line 3252
 *   +0x0668 -> line 3254
 *   +0x0688 -> line 3255
 *   +0x068c -> line 3256
 *   +0x0694 -> line 3259
 *   +0x06b4 -> line 3260
 *   +0x06bc -> line 3262
 *   +0x06cc -> line 3266
 *   +0x06d8 -> line 3264
 *   +0x06dc -> line 3266
 *   +0x06ec -> line 3267
 *   +0x0700 -> line 3268
 *   +0x0710 -> line 3269
 *   +0x0724 -> line 3272
 *   +0x0740 -> line 3273
 *   +0x074c -> line 3274
 *   +0x0750 -> line 3282
 *   +0x077c -> line 3286
 *   +0x078c -> line 3288
 *   +0x0794 -> line 3286
 *   +0x0798 -> line 3288
 *   +0x07a0 -> line 3286
 *   +0x07a4 -> line 3288
 *   +0x07a8 -> line 3286
 *   +0x07ac -> line 3288
 *   +0x080c -> line 3289
 *   +0x0814 -> line 3292
 *   +0x0824 -> line 3293
 *   +0x082c -> line 3292
 *   +0x0830 -> line 3293
 *   +0x0838 -> line 3292
 *   +0x083c -> line 3293
 *   +0x0840 -> line 3292
 *   +0x0844 -> line 3293
 *   +0x08a4 -> line 3294
 *   +0x08ac -> line 3310
 *   +0x08b8 -> line 3309
 *   +0x08bc -> line 3310
 *   +0x08c0 -> line 3309
 *   +0x08c8 -> line 3310
 *   +0x091c -> line 3313
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void impPS2glTexImage2D(unsigned int target, int level, int components, int width, int height, int border, unsigned int format, unsigned int type, void* pixels)
{
    unsigned char* pOriginalTexture;
    int yOffset;
    unsigned int eInternalFormat;
    int iInternalHeight;
    int iInternalWidth;
    unsigned int eInternalTarget;
    /* TODO: decompile from asm/... */
}

/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_Texture.c lines 3111–3114 */
/* addr: 0x0016d780  size: 48 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 3111
 *   +0x000c -> line 3113
 *   +0x0024 -> line 3114
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void impPS2glTexImage1D(unsigned int target, int level, int components, int width, int border, unsigned int format, unsigned int type, void* pixels)
{
    impPS2glTexImage2D(target, level, components, width, 1, border, format, type, pixels);
}

/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_Texture.c lines 2646–3041 */
/* addr: 0x0016d7b0  size: 5636 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 2646
 *   +0x0004 -> line 2652
 *   +0x0008 -> line 2646
 *   +0x0044 -> line 2652
 *   +0x0190 -> line 2662
 *   +0x02a0 -> line 2663
 *   +0x02b0 -> line 2666
 *   +0x02b4 -> line 2665
 *   +0x02b8 -> line 2666
 *   +0x02ec -> line 2669
 *   +0x030c -> line 2671
 *   +0x0314 -> line 2672
 *   +0x0320 -> line 2674
 *   +0x032c -> line 2675
 *   +0x033c -> line 2677
 *   +0x0344 -> line 2680
 *   +0x034c -> line 2681
 *   +0x0358 -> line 2682
 *   +0x0364 -> line 2683
 *   +0x0370 -> line 2684
 *   +0x037c -> line 2685
 *   +0x0388 -> line 2686
 *   +0x0390 -> line 2701
 *   +0x0394 -> line 2702
 *   +0x0398 -> line 2701
 *   +0x03a0 -> line 2704
 *   +0x03a8 -> line 2702
 *   +0x03b0 -> line 2704
 *   +0x03cc -> line 2706
 *   +0x03dc -> line 2707
 *   +0x03e8 -> line 2709
 *   +0x03f0 -> line 2712
 *   +0x0400 -> line 2714
 *   +0x0414 -> line 2715
 *   +0x0420 -> line 2719
 *   +0x0440 -> line 2720
 *   +0x0444 -> line 2719
 *   +0x0448 -> line 2720
 *   +0x0498 -> line 2721
 *   +0x04fc -> line 2722
 *   +0x0560 -> line 2723
 *   +0x05c8 -> line 2729
 *   +0x0680 -> line 2740
 *   +0x0750 -> line 2742
 *   +0x0758 -> line 2753
 *   +0x075c -> line 2755
 *   +0x0760 -> line 2753
 *   +0x0768 -> line 2752
 *   +0x076c -> line 2755
 *   +0x0770 -> line 2752
 *   +0x0774 -> line 2753
 *   +0x077c -> line 2752
 *   +0x0780 -> line 2753
 *   +0x0784 -> line 2755
 *   +0x078c -> line 2757
 *   +0x079c -> line 2759
 *   +0x07ac -> line 2761
 *   +0x07b0 -> line 2762
 *   +0x07b4 -> line 2761
 *   +0x07b8 -> line 2762
 *   +0x07c4 -> line 2761
 *   +0x07c8 -> line 2765
 *   +0x07d8 -> line 2767
 *   +0x08c4 -> line 2769
 *   +0x08c8 -> line 2770
 *   +0x08d4 -> line 2771
 *   +0x08dc -> line 2774
 *   +0x08e0 -> line 2775
 *   +0x091c -> line 2778
 *   +0x0924 -> line 2780
 *   +0x0928 -> line 2781
 *   +0x092c -> line 2782
 *   +0x0930 -> line 2783
 *   +0x0934 -> line 2781
 *   +0x0938 -> line 2783
 *   +0x093c -> line 2784
 *   +0x0944 -> line 2785
 *   +0x0948 -> line 2784
 *   +0x094c -> line 2785
 *   +0x0950 -> line 2786
 *   +0x0958 -> line 2789
 *   +0x095c -> line 2790
 *   +0x0960 -> line 2789
 *   +0x0964 -> line 2790
 *   +0x0968 -> line 2791
 *   +0x096c -> line 2790
 *   +0x0970 -> line 2791
 *   +0x0974 -> line 2790
 *   +0x0978 -> line 2791
 *   +0x097c -> line 2790
 *   +0x0980 -> line 2792
 *   +0x0984 -> line 2790
 *   +0x0988 -> line 2793
 *   +0x098c -> line 2792
 *   +0x0990 -> line 2793
 *   +0x0994 -> line 2790
 *   +0x0998 -> line 2792
 *   +0x099c -> line 2794
 *   +0x09a4 -> line 2796
 *   +0x09a8 -> line 2797
 *   +0x09ac -> line 2801
 *   +0x09b0 -> line 2798
 *   +0x09b4 -> line 2797
 *   +0x09b8 -> line 2798
 *   +0x09bc -> line 2799
 *   +0x09c0 -> line 2798
 *   +0x09c4 -> line 2799
 *   +0x09c8 -> line 2800
 *   +0x09d0 -> line 2802
 *   +0x09d8 -> line 2805
 *   +0x09dc -> line 2809
 *   +0x09e0 -> line 2806
 *   +0x09e4 -> line 2805
 *   +0x09e8 -> line 2806
 *   +0x09ec -> line 2807
 *   +0x09f0 -> line 2806
 *   +0x09f4 -> line 2807
 *   +0x09fc -> line 2808
 *   +0x0a04 -> line 2810
 *   +0x0a0c -> line 2812
 *   +0x0a10 -> line 2813
 *   +0x0a14 -> line 2814
 *   +0x0a18 -> line 2813
 *   +0x0a1c -> line 2814
 *   +0x0a20 -> line 2815
 *   +0x0a24 -> line 2814
 *   +0x0a28 -> line 2815
 *   +0x0a2c -> line 2816
 *   +0x0a30 -> line 2817
 *   +0x0a34 -> line 2816
 *   +0x0a38 -> line 2817
 *   +0x0a3c -> line 2816
 *   +0x0a40 -> line 2817
 *   +0x0a48 -> line 2818
 *   +0x0a50 -> line 2821
 *   +0x0a54 -> line 2822
 *   +0x0a58 -> line 2821
 *   +0x0a5c -> line 2822
 *   +0x0a60 -> line 2823
 *   +0x0a64 -> line 2822
 *   +0x0a68 -> line 2823
 *   +0x0a70 -> line 2824
 *   +0x0a78 -> line 2825
 *   +0x0a7c -> line 2824
 *   +0x0a80 -> line 2825
 *   +0x0a88 -> line 2826
 *   +0x0a90 -> line 2830
 *   +0x0a94 -> line 2829
 *   +0x0aa0 -> line 2831
 *   +0x0aa8 -> line 2835
 *   +0x0aac -> line 2834
 *   +0x0ab8 -> line 2836
 *   +0x0ac0 -> line 2840
 *   +0x0ac4 -> line 2839
 *   +0x0ad0 -> line 2841
 *   +0x0ad8 -> line 2845
 *   +0x0adc -> line 2844
 *   +0x0ae8 -> line 2846
 *   +0x0af0 -> line 2849
 *   +0x0af4 -> line 2850
 *   +0x0af8 -> line 2852
 *   +0x0afc -> line 2851
 *   +0x0b00 -> line 2853
 *   +0x0b08 -> line 2856
 *   +0x0b0c -> line 2857
 *   +0x0b10 -> line 2858
 *   +0x0b14 -> line 2859
 *   +0x0b18 -> line 2860
 *   +0x0b20 -> line 2863
 *   +0x0b24 -> line 2864
 *   +0x0b28 -> line 2866
 *   +0x0b2c -> line 2865
 *   +0x0b30 -> line 2867
 *   +0x0b38 -> line 2870
 *   +0x0b3c -> line 2871
 *   +0x0b40 -> line 2872
 *   +0x0b44 -> line 2873
 *   +0x0b48 -> line 2874
 *   +0x0b50 -> line 2877
 *   +0x0b54 -> line 2879
 *   +0x0b58 -> line 2877
 *   +0x0b5c -> line 2878
 *   +0x0b60 -> line 2880
 *   +0x0b68 -> line 2883
 *   +0x0b6c -> line 2885
 *   +0x0b70 -> line 2884
 *   +0x0b78 -> line 2885
 *   +0x0b7c -> line 2886
 *   +0x0b80 -> line 2888
 *   +0x0b88 -> line 2891
 *   +0x0bfc -> line 2892
 *   +0x0c20 -> line 2894
 *   +0x0c24 -> line 2892
 *   +0x0c28 -> line 2894
 *   +0x0ccc -> line 2896
 *   +0x0cd0 -> line 2894
 *   +0x0cd4 -> line 2896
 *   +0x0d78 -> line 2898
 *   +0x0d7c -> line 2896
 *   +0x0d80 -> line 2898
 *   +0x0e28 -> line 2902
 *   +0x0e3c -> line 2904
 *   +0x0e4c -> line 2905
 *   +0x0e58 -> line 2907
 *   +0x0e5c -> line 2908
 *   +0x0e60 -> line 2910
 *   +0x0e74 -> line 2912
 *   +0x0e78 -> line 2913
 *   +0x0e7c -> line 2914
 *   +0x0e80 -> line 2915
 *   +0x0e88 -> line 2916
 *   +0x0e94 -> line 2918
 *   +0x0e98 -> line 2919
 *   +0x0e9c -> line 2920
 *   +0x0ea0 -> line 2921
 *   +0x0ea4 -> line 2922
 *   +0x0eb0 -> line 2925
 *   +0x0ef0 -> line 2930
 *   +0x0f04 -> line 2931
 *   +0x0f10 -> line 2932
 *   +0x0f1c -> line 2934
 *   +0x0f20 -> line 2936
 *   +0x0f24 -> line 2934
 *   +0x0f30 -> line 2936
 *   +0x0f40 -> line 2940
 *   +0x0fd8 -> line 2944
 *   +0x10b4 -> line 2947
 *   +0x10bc -> line 2949
 *   +0x10c0 -> line 2950
 *   +0x10c4 -> line 2951
 *   +0x10c8 -> line 2950
 *   +0x10d4 -> line 2952
 *   +0x10dc -> line 2954
 *   +0x10e0 -> line 2955
 *   +0x10e4 -> line 2956
 *   +0x10e8 -> line 2955
 *   +0x10f4 -> line 2957
 *   +0x10fc -> line 2959
 *   +0x1100 -> line 2960
 *   +0x1104 -> line 2961
 *   +0x1108 -> line 2960
 *   +0x1114 -> line 2962
 *   +0x111c -> line 2964
 *   +0x1120 -> line 2966
 *   +0x1124 -> line 2965
 *   +0x1134 -> line 2967
 *   +0x113c -> line 2969
 *   +0x1140 -> line 2973
 *   +0x1144 -> line 2970
 *   +0x1148 -> line 2971
 *   +0x114c -> line 2972
 *   +0x1150 -> line 2973
 *   +0x1154 -> line 2974
 *   +0x115c -> line 2976
 *   +0x1160 -> line 2977
 *   +0x1164 -> line 2978
 *   +0x1168 -> line 2979
 *   +0x116c -> line 2980
 *   +0x1170 -> line 2981
 *   +0x1178 -> line 3000
 *   +0x117c -> line 2998
 *   +0x1180 -> line 3000
 *   +0x1184 -> line 2998
 *   +0x1188 -> line 2999
 *   +0x118c -> line 3001
 *   +0x1194 -> line 3003
 *   +0x1198 -> line 3004
 *   +0x119c -> line 3006
 *   +0x11a0 -> line 3005
 *   +0x11a8 -> line 3006
 *   +0x11ac -> line 3007
 *   +0x11b0 -> line 3008
 *   +0x11b8 -> line 3010
 *   +0x11c8 -> line 3013
 *   +0x11cc -> line 3010
 *   +0x11d4 -> line 3011
 *   +0x11dc -> line 3010
 *   +0x11e0 -> line 3011
 *   +0x11e8 -> line 3010
 *   +0x11ec -> line 3012
 *   +0x11f4 -> line 3011
 *   +0x11f8 -> line 3012
 *   +0x1200 -> line 3011
 *   +0x1204 -> line 3010
 *   +0x1208 -> line 3012
 *   +0x1210 -> line 3011
 *   +0x1214 -> line 3013
 *   +0x1288 -> line 3014
 *   +0x1310 -> line 3015
 *   +0x139c -> line 3020
 *   +0x13ac -> line 3021
 *   +0x13b0 -> line 3020
 *   +0x13c4 -> line 3021
 *   +0x143c -> line 3023
 *   +0x1448 -> line 3026
 *   +0x149c -> line 3027
 *   +0x14f0 -> line 3028
 *   +0x1544 -> line 3032
 *   +0x15a0 -> line 3036
 *   +0x15b0 -> line 3038
 *   +0x15c8 -> line 3040
 *   +0x15d4 -> line 3041
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void PS2glTexCopyImage(tag_GLtexture_image* pTexImage, unsigned char* pixels, int xOffset, int yOffset, int width, int height, int border, unsigned int format, unsigned int type)
{
    float a;
    float b;
    float g;
    float r;
    float* pPixel;
    short s;
    unsigned short u;
    unsigned char* pdata;
    int iTexSize;
    int iUnitSize;
    int th;
    int tw;
    int iStoreSkip;
    unsigned char* pStoreLine;
    int iLineSkip;
    unsigned char bScaleOrBias;
    unsigned char bShiftOffset;
    unsigned char* pLine;
    int hImg;
    int wImg;
    int J;
    int I;
    /* TODO: decompile from asm/... */
}

/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_Texture.c lines 2333–2538 */
/* addr: 0x0016edc0  size: 1928 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 2333
 *   +0x0004 -> line 2335
 *   +0x0008 -> line 2333
 *   +0x0028 -> line 2335
 *   +0x00dc -> line 2336
 *   +0x01e8 -> line 2337
 *   +0x01fc -> line 2343
 *   +0x0200 -> line 2337
 *   +0x0204 -> line 2345
 *   +0x020c -> line 2347
 *   +0x0220 -> line 2349
 *   +0x0228 -> line 2350
 *   +0x0230 -> line 2353
 *   +0x0238 -> line 2358
 *   +0x023c -> line 2356
 *   +0x0240 -> line 2358
 *   +0x0248 -> line 2360
 *   +0x0250 -> line 2361
 *   +0x025c -> line 2367
 *   +0x027c -> line 2368
 *   +0x02f8 -> line 2370
 *   +0x0374 -> line 2371
 *   +0x0390 -> line 2376
 *   +0x03a0 -> line 2377
 *   +0x03b0 -> line 2379
 *   +0x03b8 -> line 2378
 *   +0x03bc -> line 2379
 *   +0x03c8 -> line 2380
 *   +0x03dc -> line 2382
 *   +0x03e0 -> line 2383
 *   +0x03f0 -> line 2384
 *   +0x03f8 -> line 2386
 *   +0x03fc -> line 2388
 *   +0x0400 -> line 2391
 *   +0x0410 -> line 2393
 *   +0x041c -> line 2395
 *   +0x0434 -> line 2405
 *   +0x0440 -> line 2407
 *   +0x0444 -> line 2416
 *   +0x045c -> line 2417
 *   +0x046c -> line 2420
 *   +0x0474 -> line 2417
 *   +0x049c -> line 2422
 *   +0x04ac -> line 2423
 *   +0x04c0 -> line 2425
 *   +0x04dc -> line 2427
 *   +0x04e0 -> line 2425
 *   +0x04e8 -> line 2427
 *   +0x04f0 -> line 2432
 *   +0x0518 -> line 2436
 *   +0x0524 -> line 2438
 *   +0x0528 -> line 2439
 *   +0x0530 -> line 2440
 *   +0x053c -> line 2442
 *   +0x0548 -> line 2443
 *   +0x0558 -> line 2446
 *   +0x0574 -> line 2448
 *   +0x0584 -> line 2450
 *   +0x0594 -> line 2452
 *   +0x05a8 -> line 2453
 *   +0x05b4 -> line 2455
 *   +0x05dc -> line 2454
 *   +0x05e0 -> line 2455
 *   +0x05e4 -> line 2457
 *   +0x05ec -> line 2455
 *   +0x05f0 -> line 2457
 *   +0x05f4 -> line 2455
 *   +0x0600 -> line 2457
 *   +0x0610 -> line 2458
 *   +0x0618 -> line 2461
 *   +0x0630 -> line 2463
 *   +0x0638 -> line 2466
 *   +0x063c -> line 2469
 *   +0x0640 -> line 2466
 *   +0x0644 -> line 2469
 *   +0x064c -> line 2472
 *   +0x0660 -> line 2470
 *   +0x0664 -> line 2472
 *   +0x0684 -> line 2474
 *   +0x0688 -> line 2472
 *   +0x068c -> line 2474
 *   +0x0694 -> line 2472
 *   +0x06a0 -> line 2474
 *   +0x06a8 -> line 2475
 *   +0x06ac -> line 2474
 *   +0x06b8 -> line 2477
 *   +0x06c0 -> line 2479
 *   +0x06e4 -> line 2482
 *   +0x06f0 -> line 2483
 *   +0x0704 -> line 2486
 *   +0x070c -> line 2487
 *   +0x0718 -> line 2488
 *   +0x0744 -> line 2494
 *   +0x0748 -> line 2497
 *   +0x074c -> line 2494
 *   +0x0750 -> line 2497
 *   +0x075c -> line 2538
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void PS2glUpdateTexture(unsigned int target)
{
    tag_GLtexture_image* pImg;
    unsigned int iNeedFlushTexture;
    unsigned int nMipTexSize;
    unsigned int nTexSize;
    tag_GLtexture_image* pImgL0;
    tag_GLtexture_image** ppImg;
    tagGLtexname* pTexName;
    int J;
    int I;
    /* TODO: decompile from asm/... */
}

/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_Texture.c lines 2292–2328 */
/* addr: 0x0016f550  size: 1016 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 2292
 *   +0x0004 -> line 2294
 *   +0x0008 -> line 2292
 *   +0x000c -> line 2294
 *   +0x0010 -> line 2292
 *   +0x0014 -> line 2294
 *   +0x0018 -> line 2292
 *   +0x001c -> line 2300
 *   +0x0020 -> line 2292
 *   +0x0024 -> line 2300
 *   +0x0028 -> line 2292
 *   +0x002c -> line 2301
 *   +0x0030 -> line 2292
 *   +0x0034 -> line 2301
 *   +0x0038 -> line 2292
 *   +0x003c -> line 2302
 *   +0x0040 -> line 2292
 *   +0x0044 -> line 2302
 *   +0x0048 -> line 2292
 *   +0x004c -> line 2303
 *   +0x0050 -> line 2292
 *   +0x0054 -> line 2303
 *   +0x0058 -> line 2294
 *   +0x005c -> line 2300
 *   +0x0064 -> line 2294
 *   +0x0068 -> line 2300
 *   +0x006c -> line 2294
 *   +0x0070 -> line 2304
 *   +0x0074 -> line 2294
 *   +0x0078 -> line 2304
 *   +0x0080 -> line 2300
 *   +0x0084 -> line 2301
 *   +0x0088 -> line 2300
 *   +0x0094 -> line 2301
 *   +0x009c -> line 2302
 *   +0x00a0 -> line 2301
 *   +0x00ac -> line 2302
 *   +0x00b4 -> line 2303
 *   +0x00b8 -> line 2302
 *   +0x00c4 -> line 2303
 *   +0x00cc -> line 2304
 *   +0x00d0 -> line 2303
 *   +0x00dc -> line 2304
 *   +0x00ec -> line 2307
 *   +0x0178 -> line 2309
 *   +0x017c -> line 2313
 *   +0x0180 -> line 2309
 *   +0x0184 -> line 2313
 *   +0x018c -> line 2311
 *   +0x0190 -> line 2313
 *   +0x0194 -> line 2311
 *   +0x0198 -> line 2313
 *   +0x019c -> line 2309
 *   +0x01a0 -> line 2313
 *   +0x01a4 -> line 2310
 *   +0x01a8 -> line 2313
 *   +0x01ac -> line 2309
 *   +0x01b4 -> line 2314
 *   +0x01b8 -> line 2316
 *   +0x01bc -> line 2314
 *   +0x01c0 -> line 2318
 *   +0x01c4 -> line 2309
 *   +0x01c8 -> line 2315
 *   +0x01cc -> line 2316
 *   +0x01d0 -> line 2315
 *   +0x01d4 -> line 2310
 *   +0x01d8 -> line 2316
 *   +0x01dc -> line 2310
 *   +0x01e0 -> line 2309
 *   +0x01e4 -> line 2311
 *   +0x01e8 -> line 2309
 *   +0x01ec -> line 2312
 *   +0x01f0 -> line 2316
 *   +0x01f4 -> line 2309
 *   +0x01f8 -> line 2316
 *   +0x0200 -> line 2310
 *   +0x0204 -> line 2316
 *   +0x020c -> line 2312
 *   +0x0210 -> line 2316
 *   +0x0214 -> line 2317
 *   +0x021c -> line 2314
 *   +0x0220 -> line 2320
 *   +0x0224 -> line 2315
 *   +0x0228 -> line 2320
 *   +0x022c -> line 2317
 *   +0x0230 -> line 2310
 *   +0x0244 -> line 2318
 *   +0x0248 -> line 2310
 *   +0x024c -> line 2319
 *   +0x0250 -> line 2310
 *   +0x0254 -> line 2319
 *   +0x0258 -> line 2320
 *   +0x025c -> line 2321
 *   +0x0260 -> line 2310
 *   +0x0264 -> line 2311
 *   +0x0268 -> line 2310
 *   +0x0270 -> line 2327
 *   +0x0274 -> line 2310
 *   +0x0278 -> line 2311
 *   +0x0280 -> line 2312
 *   +0x0284 -> line 2311
 *   +0x0290 -> line 2312
 *   +0x0298 -> line 2313
 *   +0x029c -> line 2312
 *   +0x02a8 -> line 2313
 *   +0x02b0 -> line 2314
 *   +0x02b4 -> line 2313
 *   +0x02c0 -> line 2314
 *   +0x02c8 -> line 2315
 *   +0x02cc -> line 2314
 *   +0x02d8 -> line 2315
 *   +0x02e0 -> line 2316
 *   +0x02e4 -> line 2315
 *   +0x02f0 -> line 2316
 *   +0x02f8 -> line 2317
 *   +0x02fc -> line 2316
 *   +0x0308 -> line 2317
 *   +0x0310 -> line 2318
 *   +0x0314 -> line 2317
 *   +0x0320 -> line 2318
 *   +0x0328 -> line 2319
 *   +0x032c -> line 2318
 *   +0x0338 -> line 2319
 *   +0x0340 -> line 2320
 *   +0x0344 -> line 2319
 *   +0x0350 -> line 2320
 *   +0x0358 -> line 2321
 *   +0x035c -> line 2320
 *   +0x0368 -> line 2321
 *   +0x0374 -> line 2323
 *   +0x0378 -> line 2321
 *   +0x0384 -> line 2323
 *   +0x0390 -> line 2324
 *   +0x03a8 -> line 2327
 *   +0x03ac -> line 2324
 *   +0x03b0 -> line 2327
 *   +0x03b4 -> line 2324
 *   +0x03c0 -> line 2327
 *   +0x03c8 -> line 2328
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void PS2glUpdateScreenTexture(void)
{
    int ScreenBuffer;
    /* TODO: decompile from asm/... */
}

/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_Texture.c lines 2211–2250 */
/* addr: 0x0016f950  size: 416 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 2211
 *   +0x0004 -> line 2215
 *   +0x000c -> line 2217
 *   +0x0014 -> line 2218
 *   +0x0018 -> line 2219
 *   +0x0020 -> line 2222
 *   +0x002c -> line 2224
 *   +0x0034 -> line 2228
 *   +0x0038 -> line 2229
 *   +0x003c -> line 2228
 *   +0x0048 -> line 2229
 *   +0x004c -> line 2230
 *   +0x0050 -> line 2231
 *   +0x0058 -> line 2232
 *   +0x005c -> line 2229
 *   +0x0060 -> line 2228
 *   +0x0064 -> line 2229
 *   +0x0068 -> line 2228
 *   +0x006c -> line 2232
 *   +0x0070 -> line 2230
 *   +0x0074 -> line 2229
 *   +0x0078 -> line 2230
 *   +0x007c -> line 2229
 *   +0x0080 -> line 2231
 *   +0x0084 -> line 2230
 *   +0x0088 -> line 2231
 *   +0x008c -> line 2230
 *   +0x0090 -> line 2232
 *   +0x0094 -> line 2231
 *   +0x0098 -> line 2232
 *   +0x009c -> line 2231
 *   +0x00a0 -> line 2228
 *   +0x00a4 -> line 2232
 *   +0x00a8 -> line 2228
 *   +0x00ac -> line 2232
 *   +0x00b0 -> line 2229
 *   +0x00b8 -> line 2230
 *   +0x00c0 -> line 2231
 *   +0x00c8 -> line 2232
 *   +0x00d0 -> line 2233
 *   +0x00d4 -> line 2236
 *   +0x00d8 -> line 2233
 *   +0x00e8 -> line 2236
 *   +0x00f0 -> line 2241
 *   +0x00f4 -> line 2238
 *   +0x0108 -> line 2241
 *   +0x0110 -> line 2239
 *   +0x0114 -> line 2238
 *   +0x0118 -> line 2239
 *   +0x011c -> line 2238
 *   +0x0124 -> line 2239
 *   +0x0128 -> line 2238
 *   +0x012c -> line 2239
 *   +0x0134 -> line 2241
 *   +0x013c -> line 2242
 *   +0x0144 -> line 2245
 *   +0x0148 -> line 2248
 *   +0x014c -> line 2245
 *   +0x0158 -> line 2246
 *   +0x015c -> line 2245
 *   +0x0160 -> line 2246
 *   +0x0164 -> line 2248
 *   +0x0168 -> line 2246
 *   +0x016c -> line 2245
 *   +0x0170 -> line 2246
 *   +0x0174 -> line 2245
 *   +0x017c -> line 2246
 *   +0x0180 -> line 2245
 *   +0x0184 -> line 2246
 *   +0x018c -> line 2248
 *   +0x0194 -> line 2250
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void PS2glTexUpdateClut(tag_GLtexture* pTexture, unsigned int uiAddress)
{
    unsigned char* pClut;
    int iSize;
    /* TODO: decompile from asm/... */
}

/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_Texture.c lines 2048–2208 */
/* addr: 0x0016faf0  size: 3416 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 2048
 *   +0x0024 -> line 2053
 *   +0x0028 -> line 2048
 *   +0x0038 -> line 2049
 *   +0x003c -> line 2053
 *   +0x0044 -> line 2056
 *   +0x0048 -> line 2060
 *   +0x004c -> line 2056
 *   +0x0050 -> line 2057
 *   +0x007c -> line 2060
 *   +0x0080 -> line 2057
 *   +0x0084 -> line 2060
 *   +0x008c -> line 2062
 *   +0x0098 -> line 2063
 *   +0x00a0 -> line 2066
 *   +0x0108 -> line 2068
 *   +0x0110 -> line 2074
 *   +0x0114 -> line 2071
 *   +0x0118 -> line 2074
 *   +0x0130 -> line 2076
 *   +0x0134 -> line 2074
 *   +0x013c -> line 2071
 *   +0x0140 -> line 2074
 *   +0x014c -> line 2076
 *   +0x0190 -> line 2079
 *   +0x01a0 -> line 2080
 *   +0x01a4 -> line 2079
 *   +0x01b0 -> line 2080
 *   +0x01d0 -> line 2081
 *   +0x01dc -> line 2082
 *   +0x01e4 -> line 2085
 *   +0x01f4 -> line 2086
 *   +0x01f8 -> line 2085
 *   +0x0204 -> line 2086
 *   +0x0224 -> line 2087
 *   +0x0230 -> line 2088
 *   +0x0238 -> line 2091
 *   +0x0250 -> line 2092
 *   +0x0258 -> line 2095
 *   +0x0270 -> line 2096
 *   +0x0278 -> line 2099
 *   +0x0298 -> line 2100
 *   +0x02a0 -> line 2103
 *   +0x02a8 -> line 2107
 *   +0x02ac -> line 2106
 *   +0x02b0 -> line 2107
 *   +0x02b4 -> line 2106
 *   +0x02b8 -> line 2107
 *   +0x02bc -> line 2106
 *   +0x02c0 -> line 2107
 *   +0x02c4 -> line 2106
 *   +0x02c8 -> line 2107
 *   +0x02cc -> line 2106
 *   +0x02d0 -> line 2107
 *   +0x02e4 -> line 2106
 *   +0x02f4 -> line 2107
 *   +0x02fc -> line 2109
 *   +0x0300 -> line 2107
 *   +0x030c -> line 2109
 *   +0x0324 -> line 2110
 *   +0x07e0 -> line 2114
 *   +0x07f0 -> line 2115
 *   +0x0818 -> line 2117
 *   +0x0834 -> line 2120
 *   +0x0858 -> line 2128
 *   +0x0868 -> line 2130
 *   +0x0880 -> line 2132
 *   +0x0884 -> line 2134
 *   +0x089c -> line 2136
 *   +0x08a8 -> line 2137
 *   +0x08ac -> line 2140
 *   +0x08b8 -> line 2142
 *   +0x08c8 -> line 2143
 *   +0x08cc -> line 2146
 *   +0x08d8 -> line 2147
 *   +0x08dc -> line 2149
 *   +0x08e4 -> line 2153
 *   +0x0918 -> line 2154
 *   +0x0940 -> line 2157
 *   +0x0954 -> line 2158
 *   +0x0958 -> line 2157
 *   +0x095c -> line 2158
 *   +0x0960 -> line 2157
 *   +0x0968 -> line 2158
 *   +0x096c -> line 2157
 *   +0x0970 -> line 2158
 *   +0x0988 -> line 2159
 *   +0x0990 -> line 2161
 *   +0x09a4 -> line 2162
 *   +0x09a8 -> line 2161
 *   +0x09ac -> line 2162
 *   +0x09b0 -> line 2161
 *   +0x09b8 -> line 2162
 *   +0x09bc -> line 2161
 *   +0x09c0 -> line 2162
 *   +0x09d8 -> line 2163
 *   +0x09e0 -> line 2165
 *   +0x09f4 -> line 2166
 *   +0x09f8 -> line 2165
 *   +0x09fc -> line 2166
 *   +0x0a00 -> line 2165
 *   +0x0a04 -> line 2166
 *   +0x0a08 -> line 2165
 *   +0x0a18 -> line 2166
 *   +0x0a30 -> line 2167
 *   +0x0a38 -> line 2169
 *   +0x0a4c -> line 2170
 *   +0x0a50 -> line 2169
 *   +0x0a54 -> line 2170
 *   +0x0a58 -> line 2169
 *   +0x0a5c -> line 2170
 *   +0x0a60 -> line 2169
 *   +0x0a70 -> line 2170
 *   +0x0a88 -> line 2171
 *   +0x0a90 -> line 2173
 *   +0x0aa4 -> line 2174
 *   +0x0aa8 -> line 2173
 *   +0x0aac -> line 2174
 *   +0x0ab0 -> line 2173
 *   +0x0ab8 -> line 2174
 *   +0x0abc -> line 2173
 *   +0x0ac0 -> line 2174
 *   +0x0ad8 -> line 2175
 *   +0x0ae0 -> line 2177
 *   +0x0af4 -> line 2178
 *   +0x0af8 -> line 2177
 *   +0x0afc -> line 2178
 *   +0x0b00 -> line 2177
 *   +0x0b04 -> line 2178
 *   +0x0b08 -> line 2177
 *   +0x0b18 -> line 2178
 *   +0x0b30 -> line 2179
 *   +0x0b38 -> line 2181
 *   +0x0b4c -> line 2182
 *   +0x0b50 -> line 2181
 *   +0x0b54 -> line 2182
 *   +0x0b58 -> line 2181
 *   +0x0b5c -> line 2182
 *   +0x0b60 -> line 2181
 *   +0x0b70 -> line 2182
 *   +0x0b8c -> line 2187
 *   +0x0b9c -> line 2188
 *   +0x0ba4 -> line 2190
 *   +0x0bac -> line 2191
 *   +0x0bb0 -> line 2188
 *   +0x0bb4 -> line 2187
 *   +0x0bb8 -> line 2188
 *   +0x0bbc -> line 2187
 *   +0x0bc0 -> line 2189
 *   +0x0bc4 -> line 2188
 *   +0x0bc8 -> line 2189
 *   +0x0bcc -> line 2188
 *   +0x0bd0 -> line 2190
 *   +0x0bd4 -> line 2189
 *   +0x0bd8 -> line 2190
 *   +0x0bdc -> line 2189
 *   +0x0be0 -> line 2191
 *   +0x0be4 -> line 2190
 *   +0x0be8 -> line 2191
 *   +0x0bec -> line 2190
 *   +0x0bf0 -> line 2187
 *   +0x0bf4 -> line 2191
 *   +0x0bf8 -> line 2187
 *   +0x0bfc -> line 2191
 *   +0x0c00 -> line 2188
 *   +0x0c08 -> line 2189
 *   +0x0c10 -> line 2190
 *   +0x0c18 -> line 2191
 *   +0x0c20 -> line 2193
 *   +0x0c2c -> line 2195
 *   +0x0c38 -> line 2199
 *   +0x0c3c -> line 2196
 *   +0x0c40 -> line 2195
 *   +0x0c44 -> line 2196
 *   +0x0c48 -> line 2195
 *   +0x0c4c -> line 2197
 *   +0x0c50 -> line 2196
 *   +0x0c54 -> line 2197
 *   +0x0c58 -> line 2196
 *   +0x0c5c -> line 2198
 *   +0x0c64 -> line 2195
 *   +0x0c6c -> line 2196
 *   +0x0c74 -> line 2197
 *   +0x0c78 -> line 2196
 *   +0x0c80 -> line 2197
 *   +0x0c88 -> line 2196
 *   +0x0c8c -> line 2197
 *   +0x0c98 -> line 2198
 *   +0x0c9c -> line 2197
 *   +0x0ca0 -> line 2198
 *   +0x0ca4 -> line 2199
 *   +0x0ca8 -> line 2198
 *   +0x0cb4 -> line 2199
 *   +0x0cb8 -> line 2198
 *   +0x0cbc -> line 2199
 *   +0x0cc8 -> line 2200
 *   +0x0cec -> line 2204
 *   +0x0cfc -> line 2205
 *   +0x0d18 -> line 2207
 *   +0x0d28 -> line 2208
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void PS2glTexUpdateImage(tag_GLtexture_image* pTexImage, unsigned int level, unsigned char bResident)
{
    int iTexSize;
    int addr;
    int eth;
    int etw;
    int th;
    int tw;
    unsigned char* pixels;
    /* TODO: decompile from asm/... */
}

/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_Texture.c lines 1863–2045 */
/* addr: 0x00170850  size: 13032 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1863
 *   +0x0028 -> line 1867
 *   +0x002c -> line 1863
 *   +0x0034 -> line 1865
 *   +0x003c -> line 1866
 *   +0x0044 -> line 1867
 *   +0x00a4 -> line 1870
 *   +0x00a8 -> line 1871
 *   +0x00ac -> line 1870
 *   +0x00b0 -> line 1871
 *   +0x00b8 -> line 1873
 *   +0x00bc -> line 1875
 *   +0x00e4 -> line 1877
 *   +0x00e8 -> line 1878
 *   +0x0130 -> line 1879
 *   +0x0158 -> line 1880
 *   +0x01e4 -> line 1881
 *   +0x02d8 -> line 1882
 *   +0x02e4 -> line 1883
 *   +0x0328 -> line 1884
 *   +0x0334 -> line 1885
 *   +0x033c -> line 1886
 *   +0x0340 -> line 1887
 *   +0x0390 -> line 1888
 *   +0x0488 -> line 1889
 *   +0x0514 -> line 1890
 *   +0x0558 -> line 1891
 *   +0x0564 -> line 1892
 *   +0x056c -> line 1893
 *   +0x0570 -> line 1894
 *   +0x059c -> line 1895
 *   +0x062c -> line 1896
 *   +0x0750 -> line 1897
 *   +0x0790 -> line 1898
 *   +0x0888 -> line 1899
 *   +0x0894 -> line 1900
 *   +0x08d8 -> line 1901
 *   +0x08e4 -> line 1902
 *   +0x08ec -> line 1903
 *   +0x08f0 -> line 1904
 *   +0x0940 -> line 1905
 *   +0x0a38 -> line 1906
 *   +0x0ac4 -> line 1907
 *   +0x0be8 -> line 1908
 *   +0x0c38 -> line 1909
 *   +0x0c44 -> line 1910
 *   +0x0c4c -> line 1911
 *   +0x0c50 -> line 1912
 *   +0x0ca8 -> line 1913
 *   +0x0da0 -> line 1914
 *   +0x0e2c -> line 1915
 *   +0x0f50 -> line 1916
 *   +0x0fa8 -> line 1917
 *   +0x0fb4 -> line 1918
 *   +0x0fbc -> line 1919
 *   +0x0fc0 -> line 1920
 *   +0x1010 -> line 1921
 *   +0x1108 -> line 1922
 *   +0x1158 -> line 1923
 *   +0x1164 -> line 1925
 *   +0x1168 -> line 1926
 *   +0x1174 -> line 1927
 *   +0x1190 -> line 1928
 *   +0x1198 -> line 1929
 *   +0x11a4 -> line 1931
 *   +0x11a8 -> line 1933
 *   +0x11d0 -> line 1936
 *   +0x1218 -> line 1937
 *   +0x1240 -> line 1938
 *   +0x12cc -> line 1939
 *   +0x13c0 -> line 1940
 *   +0x13cc -> line 1941
 *   +0x1410 -> line 1942
 *   +0x141c -> line 1943
 *   +0x1424 -> line 1944
 *   +0x1428 -> line 1945
 *   +0x1478 -> line 1946
 *   +0x1570 -> line 1947
 *   +0x15fc -> line 1948
 *   +0x1640 -> line 1949
 *   +0x164c -> line 1950
 *   +0x1654 -> line 1951
 *   +0x1658 -> line 1952
 *   +0x1684 -> line 1953
 *   +0x1714 -> line 1954
 *   +0x1838 -> line 1955
 *   +0x1878 -> line 1956
 *   +0x1970 -> line 1957
 *   +0x197c -> line 1958
 *   +0x19c0 -> line 1959
 *   +0x19cc -> line 1960
 *   +0x19d4 -> line 1961
 *   +0x19d8 -> line 1962
 *   +0x1a28 -> line 1963
 *   +0x1b20 -> line 1964
 *   +0x1bac -> line 1965
 *   +0x1cd0 -> line 1966
 *   +0x1d20 -> line 1967
 *   +0x1d2c -> line 1968
 *   +0x1d34 -> line 1969
 *   +0x1d38 -> line 1970
 *   +0x1d90 -> line 1971
 *   +0x1e88 -> line 1972
 *   +0x1f14 -> line 1973
 *   +0x2038 -> line 1974
 *   +0x2088 -> line 1975
 *   +0x2094 -> line 1976
 *   +0x209c -> line 1977
 *   +0x20a0 -> line 1978
 *   +0x20f0 -> line 1979
 *   +0x21e8 -> line 1980
 *   +0x2230 -> line 1981
 *   +0x223c -> line 1983
 *   +0x2240 -> line 1984
 *   +0x224c -> line 1985
 *   +0x2268 -> line 1986
 *   +0x2270 -> line 1987
 *   +0x2278 -> line 1989
 *   +0x227c -> line 1991
 *   +0x22a4 -> line 1993
 *   +0x22a8 -> line 1994
 *   +0x22f0 -> line 1995
 *   +0x2314 -> line 1996
 *   +0x239c -> line 1997
 *   +0x2490 -> line 1998
 *   +0x249c -> line 1999
 *   +0x24d8 -> line 2000
 *   +0x24e4 -> line 2001
 *   +0x24ec -> line 2002
 *   +0x24f0 -> line 2003
 *   +0x2548 -> line 2004
 *   +0x2638 -> line 2005
 *   +0x26bc -> line 2006
 *   +0x2700 -> line 2007
 *   +0x270c -> line 2008
 *   +0x2714 -> line 2009
 *   +0x2718 -> line 2010
 *   +0x2740 -> line 2011
 *   +0x27c4 -> line 2012
 *   +0x28e0 -> line 2013
 *   +0x2920 -> line 2014
 *   +0x2a10 -> line 2015
 *   +0x2a1c -> line 2016
 *   +0x2a60 -> line 2017
 *   +0x2a6c -> line 2018
 *   +0x2a74 -> line 2019
 *   +0x2a78 -> line 2020
 *   +0x2ac0 -> line 2021
 *   +0x2bb0 -> line 2022
 *   +0x2c34 -> line 2023
 *   +0x2d50 -> line 2024
 *   +0x2d98 -> line 2025
 *   +0x2da4 -> line 2026
 *   +0x2dac -> line 2027
 *   +0x2db0 -> line 2028
 *   +0x2e08 -> line 2029
 *   +0x2ef8 -> line 2030
 *   +0x2f7c -> line 2031
 *   +0x3098 -> line 2032
 *   +0x30e8 -> line 2033
 *   +0x30f4 -> line 2034
 *   +0x30fc -> line 2035
 *   +0x3100 -> line 2036
 *   +0x3148 -> line 2037
 *   +0x3238 -> line 2038
 *   +0x3280 -> line 2039
 *   +0x328c -> line 2041
 *   +0x3290 -> line 2042
 *   +0x329c -> line 2043
 *   +0x32b8 -> line 2045
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void PS2glComplanationCubeMap(unsigned char* pixels, tag_GLtexture_image* pTexImage)
{
    char* pTempSubImage1;
    char* pTempSubImage;
    char* pSrcSubImage;
    int iSrcSubImageSize;
    int iSubHeight;
    int iSubWidth;
    int i;
    /* TODO: decompile from asm/... */
}

/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_Texture.c lines 1479–1616 */
/* addr: 0x00173b40  size: 364 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1479
 *   +0x0028 -> line 1568
 *   +0x0038 -> line 1571
 *   +0x003c -> line 1574
 *   +0x0044 -> line 1576
 *   +0x0048 -> line 1578
 *   +0x0050 -> line 1580
 *   +0x0054 -> line 1581
 *   +0x0058 -> line 1582
 *   +0x0060 -> line 1583
 *   +0x0064 -> line 1586
 *   +0x006c -> line 1594
 *   +0x0070 -> line 1598
 *   +0x0074 -> line 1591
 *   +0x0078 -> line 1588
 *   +0x007c -> line 1592
 *   +0x0080 -> line 1596
 *   +0x0084 -> line 1594
 *   +0x0088 -> line 1596
 *   +0x008c -> line 1597
 *   +0x0090 -> line 1598
 *   +0x0094 -> line 1601
 *   +0x0098 -> line 1588
 *   +0x00b8 -> line 1591
 *   +0x00bc -> line 1592
 *   +0x00c0 -> line 1589
 *   +0x00c4 -> line 1593
 *   +0x00c8 -> line 1589
 *   +0x00cc -> line 1594
 *   +0x00d0 -> line 1597
 *   +0x00d4 -> line 1596
 *   +0x00d8 -> line 1604
 *   +0x00dc -> line 1607
 *   +0x00e0 -> line 1596
 *   +0x00ec -> line 1597
 *   +0x00fc -> line 1598
 *   +0x010c -> line 1600
 *   +0x0110 -> line 1601
 *   +0x0114 -> line 1602
 *   +0x0118 -> line 1603
 *   +0x011c -> line 1606
 *   +0x0120 -> line 1604
 *   +0x0124 -> line 1609
 *   +0x0130 -> line 1610
 *   +0x013c -> line 1613
 *   +0x0140 -> line 1610
 *   +0x014c -> line 1613
 *   +0x0150 -> line 1616
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void GsTransferTexture(unsigned char* pixels, int iWidth, int iHeight, int iUnitSize)
{
    int iLoop;
    int iCount;
    tag_stTexPackage* pPackage;
    unsigned char b4Bit;
    /* TODO: decompile from asm/... */
}

/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_Texture.c lines 1371–1445 */
/* addr: 0x00173cb0  size: 1016 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1371
 *   +0x010c -> line 1373
 *   +0x0114 -> line 1377
 *   +0x0124 -> line 1378
 *   +0x014c -> line 1380
 *   +0x0168 -> line 1383
 *   +0x01bc -> line 1386
 *   +0x01d8 -> line 1387
 *   +0x01e0 -> line 1390
 *   +0x01f8 -> line 1391
 *   +0x0200 -> line 1394
 *   +0x0218 -> line 1395
 *   +0x0220 -> line 1398
 *   +0x0238 -> line 1399
 *   +0x0240 -> line 1402
 *   +0x0258 -> line 1403
 *   +0x0260 -> line 1406
 *   +0x027c -> line 1411
 *   +0x02a0 -> line 1414
 *   +0x02b8 -> line 1415
 *   +0x02c0 -> line 1417
 *   +0x02dc -> line 1422
 *   +0x0300 -> line 1425
 *   +0x031c -> line 1426
 *   +0x0324 -> line 1428
 *   +0x0340 -> line 1433
 *   +0x038c -> line 1435
 *   +0x03b0 -> line 1436
 *   +0x03d0 -> line 1440
 *   +0x03f0 -> line 1445
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void PS2glUpdateTexParameter(unsigned int target)
{
    /* TODO: decompile from asm/... */
}

/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_Texture.c lines 1284–1293 */
/* addr: 0x001740b0  size: 200 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1284
 *   +0x0004 -> line 1286
 *   +0x0010 -> line 1287
 *   +0x0070 -> line 1290
 *   +0x00b0 -> line 1291
 *   +0x00bc -> line 1293
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void impPS2glTexGeniv(unsigned int coord, unsigned int pname, int* params)
{
    tag_GLtexture_set* pCurTexture;
    int iValue;

    if (pname == 0x2500)
    {
        iValue = params[0]; pCurTexture = g_PS2glContext.pCurTexture; PS2GL_TEXGEN_MODE_SWITCH(pCurTexture, coord, pname, iValue) }
    else
    {
        quad v = {0.0f, 0.0f, 0.0f, 0.0f}; v.f[0] = (float)params[0]; v.f[1] = (float)params[1]; v.f[2] = (float)params[2]; v.f[3] = (float)params[3];
        impPS2glTexGenfv(coord, pname, v.f);
    }
}

/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_Texture.c lines 1260–1281 */
/* addr: 0x00174180  size: 272 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1260
 *   +0x0004 -> line 1264
 *   +0x0008 -> line 1260
 *   +0x000c -> line 1264
 *   +0x0034 -> line 1266
 *   +0x0098 -> line 1269
 *   +0x00d0 -> line 1271
 *   +0x00d8 -> line 1272
 *   +0x00e0 -> line 1273
 *   +0x00e8 -> line 1274
 *   +0x00f0 -> line 1275
 *   +0x00f8 -> line 1278
 *   +0x0100 -> line 1280
 *   +0x0108 -> line 1281
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void impPS2glTexGenfv(unsigned int coord, unsigned int pname, float* params)
{
    float (*pvCoeff)[4] = 0;
    int iValue;
    tag_GLtexture_set* pCurTexture = g_PS2glContext.pCurTexture;

    switch (pname)
    {
    case 0x2500:
        iValue = (int)*params; PS2GL_TEXGEN_MODE_SWITCH(pCurTexture, coord, pname, iValue) break;
    case 0x2501:
    case 0x2502:
        switch (coord)
        {
        case 0x2000: pvCoeff = &pCurTexture->vTexGenCoeffS; break;
        case 0x2001: pvCoeff = &pCurTexture->vTexGenCoeffT; break;
        case 0x2002: pvCoeff = &pCurTexture->vTexGenCoeffR; break;
        case 0x2003: pvCoeff = &pCurTexture->vTexGenCoeffQ; break;
        default: return;
        }
        break;
    default: return;
    }
    *(quad*)pvCoeff = *(quad*)params;
}

/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_Texture.c lines 1252–1256 */
/* addr: 0x00174290  size: 140 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1252
 *   +0x0004 -> line 1253
 *   +0x0008 -> line 1252
 *   +0x000c -> line 1253
 *   +0x0010 -> line 1252
 *   +0x0014 -> line 1253
 *   +0x0018 -> line 1252
 *   +0x0028 -> line 1253
 *   +0x0064 -> line 1255
 *   +0x0074 -> line 1256
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void impPS2glTexGendv(unsigned int coord, unsigned int pname, double* params)
{
    quad v = {0.0f, 0.0f, 0.0f, 0.0f}; v.f[0] = (float)params[0]; v.f[1] = (float)params[1]; v.f[2] = (float)params[2]; v.f[3] = (float)params[3];
    impPS2glTexGenfv(coord, pname, v.f);
}

/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_Texture.c lines 1246–1249 */
/* addr: 0x00174320  size: 152 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1246
 *   +0x0004 -> line 1248
 *   +0x0008 -> line 1246
 *   +0x000c -> line 1248
 *   +0x0010 -> line 1246
 *   +0x0014 -> line 1248
 *   +0x0088 -> line 1249
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void impPS2glTexGend(unsigned int coord, unsigned int pname, double param)
{
    tag_GLtexture_set* pCurTexture = g_PS2glContext.pCurTexture;
    if (pname == 0x2500) { switch (coord) { case 0x2000: pCurTexture->nTexGenModeS = (int)param; break; case 0x2001: pCurTexture->nTexGenModeT = (int)param; break; case 0x2002: pCurTexture->nTexGenModeR = (int)param; break; case 0x2003: pCurTexture->nTexGenModeQ = (int)param; break; } }
}

/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_Texture.c lines 1242–1243 */
/* addr: 0x001743c0  size: 128 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1242
 *   +0x0078 -> line 1243
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void impPS2glTexGenf(unsigned int coord, unsigned int pname, float param)
{
    tag_GLtexture_set* pCurTexture;

    pCurTexture = g_PS2glContext.pCurTexture;
    if (pname == 0x2500)
    {
        switch (coord)
        {
        case 0x2000: pCurTexture->nTexGenModeS = (int)param; break;
        case 0x2001: pCurTexture->nTexGenModeT = (int)param; break;
        case 0x2002: pCurTexture->nTexGenModeR = (int)param; break;
        case 0x2003: pCurTexture->nTexGenModeQ = (int)param; break;
        }
    }
}

/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_Texture.c lines 1226–1237 */
/* addr: 0x00174440  size: 100 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1226
 *   +0x0004 -> line 1228
 *   +0x0010 -> line 1230
 *   +0x0040 -> line 1232
 *   +0x0048 -> line 1233
 *   +0x0050 -> line 1234
 *   +0x0058 -> line 1235
 *   +0x005c -> line 1237
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void impPS2glTexGeni(unsigned int coord, unsigned int pname, int param)
{
    tag_GLtexture_set* pCurTexture;

    pCurTexture = g_PS2glContext.pCurTexture;
    if (pname == 0x2500)
    {
        switch (coord)
        {
        case 0x2000: pCurTexture->nTexGenModeS = param; break;
        case 0x2001: pCurTexture->nTexGenModeT = param; break;
        case 0x2002: pCurTexture->nTexGenModeR = param; break;
        case 0x2003: pCurTexture->nTexGenModeQ = param; break;
        }
    }
}

/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_Texture.c lines 1207–1222 */
/* addr: 0x001744b0  size: 148 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1207
 *   +0x000c -> line 1210
 *   +0x0014 -> line 1212
 *   +0x0028 -> line 1213
 *   +0x0030 -> line 1214
 *   +0x003c -> line 1217
 *   +0x0044 -> line 1216
 *   +0x0048 -> line 1217
 *   +0x004c -> line 1216
 *   +0x0050 -> line 1217
 *   +0x005c -> line 1218
 *   +0x006c -> line 1219
 *   +0x007c -> line 1220
 *   +0x008c -> line 1222
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void impPS2glTexEnviv(unsigned int target, unsigned int pname, int* params)
{
    int iValue;
    float* pfParams;
    tag_GLtexture_set* pTex;
    quad* pq;

    if (target == 0x2300)
    {
        if (pname == 0x2200)
        {
            iValue = params[0];
            if (target == 0x2300)
            {
                if (pname == 0x2200)
                    g_PS2glContext.pCurTexture->eTexEnvMode = iValue;
            }
        }
        else if (pname == 0x2201)
        {
            pTex = g_PS2glContext.pCurTexture;
            pfParams = (float*)params;
            pq = (quad*)&pTex->vTexEnvColor;
            pq[0].f[0] = (int)pfParams[0] / 2147483648.0f;
            pq[1].f[0] = (int)pfParams[1] / 2147483648.0f;
            pq[2].f[0] = (int)pfParams[2] / 2147483648.0f;
            pq[3].f[0] = (int)pfParams[3] / 2147483648.0f;
        }
    }
}

/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_Texture.c lines 1191–1202 */
/* addr: 0x00174550  size: 92 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1191
 *   +0x000c -> line 1194
 *   +0x0014 -> line 1196
 *   +0x0034 -> line 1197
 *   +0x003c -> line 1198
 *   +0x0048 -> line 1200
 *   +0x0054 -> line 1202
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void impPS2glTexEnvfv(unsigned int target, unsigned int pname, float* params)
{
    int iValue;

    if (target == 0x2300)
    {
        if (pname == 0x2200)
        {
            iValue = (int)params[0];
            if (target == 0x2300)
            {
                if (pname == 0x2200)
                    g_PS2glContext.pCurTexture->eTexEnvMode = iValue;
            }
        }
        else if (pname == 0x2201)
        {
            *(quad*)&g_PS2glContext.pCurTexture->vTexEnvColor = *(quad*)params;
        }
    }
}

/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_Texture.c lines 1185–1186 */
/* addr: 0x001745b0  size: 48 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1185
 *   +0x0028 -> line 1186
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void impPS2glTexEnvf(unsigned int target, unsigned int pname, float param)
{
    if (target == 0x2300 && pname == 0x2200) /* GL_TEXTURE_ENV, GL_TEXTURE_ENV_MODE */
        g_PS2glContext.pCurTexture->eTexEnvMode = (int)param;
}

/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_Texture.c lines 1176–1180 */
/* addr: 0x001745e0  size: 36 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1176
 *   +0x0014 -> line 1178
 *   +0x001c -> line 1180
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void impPS2glTexEnvi(unsigned int target, unsigned int pname, int param)
{
    if (target == 0x2300 && pname == 0x2200)
        g_PS2glContext.pCurTexture->eTexEnvMode = param;
}

/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_Texture.c lines 1152–1171 */
/* addr: 0x00174610  size: 1120 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1152
 *   +0x0004 -> line 1156
 *   +0x0008 -> line 1152
 *   +0x004c -> line 1156
 *   +0x01c8 -> line 1159
 *   +0x0208 -> line 1160
 *   +0x0210 -> line 1162
 *   +0x0220 -> line 1163
 *   +0x0230 -> line 1165
 *   +0x0254 -> line 1168
 *   +0x0370 -> line 1170
 *   +0x0430 -> line 1171
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void impPS2glTexSubImage2D(unsigned int target, int level, int xoffset, int yoffset, int width, int height, unsigned int format, unsigned int type, void* pixels)
{
    tag_GLtexture_image* pTexImage;
    /* TODO: decompile from asm/... */
}

/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_Texture.c lines 1123–1126 */
/* addr: 0x00174a70  size: 1040 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1123
 *   +0x0004 -> line 1125
 *   +0x0008 -> line 1123
 *   +0x004c -> line 1125
 *   +0x03e0 -> line 1126
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void impPS2glTexSubImage1D(unsigned int target, int level, int xoffset, int width, unsigned int format, unsigned int type, void* pixels)
{
    /* TODO: decompile from asm/... */
}

/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_Texture.c lines 1120–1120 */
/* addr: 0x00174e80  size: 8 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1120
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void impPS2glCopyTexSubImage2D(void)
{
    /* TODO: decompile from asm/... */
}

/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_Texture.c lines 1114–1114 */
/* addr: 0x00174e90  size: 8 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1114
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void impPS2glCopyTexSubImage1D(void)
{
    /* TODO: decompile from asm/... */
}

/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_Texture.c lines 1108–1108 */
/* addr: 0x00174ea0  size: 8 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1108
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void impPS2glCopyTexImage2D(void)
{
    /* TODO: decompile from asm/... */
}

/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_Texture.c lines 1102–1102 */
/* addr: 0x00174eb0  size: 8 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1102
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void impPS2glCopyTexImage1D(void)
{
    /* TODO: decompile from asm/... */
}

/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_Texture.c lines 1027–1089 */
/* addr: 0x00174ec0  size: 432 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1027
 *   +0x0004 -> line 1031
 *   +0x0008 -> line 1027
 *   +0x0020 -> line 1031
 *   +0x0028 -> line 1032
 *   +0x002c -> line 1034
 *   +0x004c -> line 1038
 *   +0x0058 -> line 1040
 *   +0x0070 -> line 1042
 *   +0x007c -> line 1049
 *   +0x00bc -> line 1050
 *   +0x00c0 -> line 1053
 *   +0x00ec -> line 1058
 *   +0x00f8 -> line 1059
 *   +0x00fc -> line 1058
 *   +0x0100 -> line 1059
 *   +0x0104 -> line 1058
 *   +0x0108 -> line 1059
 *   +0x010c -> line 1058
 *   +0x0110 -> line 1059
 *   +0x011c -> line 1064
 *   +0x0124 -> line 1068
 *   +0x0130 -> line 1069
 *   +0x0134 -> line 1068
 *   +0x0138 -> line 1069
 *   +0x013c -> line 1068
 *   +0x0140 -> line 1069
 *   +0x0144 -> line 1068
 *   +0x0148 -> line 1069
 *   +0x0154 -> line 1074
 *   +0x015c -> line 1077
 *   +0x0160 -> line 1078
 *   +0x0164 -> line 1077
 *   +0x0168 -> line 1079
 *   +0x0170 -> line 1081
 *   +0x0178 -> line 1084
 *   +0x017c -> line 1085
 *   +0x0184 -> line 1087
 *   +0x018c -> line 1088
 *   +0x0194 -> line 1089
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
extern void PS2glUpdateTexIndex(int iLength);
void impPS2glBindTexture(unsigned int target, unsigned int texture)
{
    tagGLtexname* pTexName;

    if (target == 0x8514)
        target = 0x8513;
    if (target == g_PS2glContext.eTexLastBindTarget && texture == g_PS2glContext.nTexLastBindName)
        return;
    if (texture < 0x200)
    {
        pTexName = &g_PS2glContext.aTexName[texture];
        if (pTexName->eDimension != target)
        {
            if (pTexName->bResident)
            {
                int iLength = g_PS2glContext.aBlockMap[pTexName->iTexBlock].nLength;
                if (PS2glFreeTexBlock(pTexName->iTexBlock, -1))
                    PS2glUpdateTexIndex(iLength);
            }
            pTexName->bResident = 0;
            pTexName->bResident = 0;
        }
        switch (target)
        {
        case 0xDE0:
            g_PS2glContext.abTex1DChanged[g_PS2glContext.iCurTextureSet] = 1;
            g_PS2glContext.anCurTexName1D[g_PS2glContext.iCurTextureSet] = texture;
            break;
        case 0xDE1:
            g_PS2glContext.abTex2DChanged[g_PS2glContext.iCurTextureSet] = 1;
            g_PS2glContext.anCurTexName2D[g_PS2glContext.iCurTextureSet] = texture;
            break;
        case 0x8513:
            g_PS2glContext.nCurTexNameCube = texture;
            g_PS2glContext.bTexCubeChanged = 1;
            break;
        default:
            return;
        }
        pTexName->eDimension = target;
        pTexName->bAllocated = 1;
        g_PS2glContext.eTexLastBindTarget = target;
        g_PS2glContext.nTexLastBindName = texture;
    }
}

/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_Texture.c lines 1004–1014 */
/* addr: 0x00175070  size: 104 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1004
 *   +0x000c -> line 1009
 *   +0x0014 -> line 1006
 *   +0x0018 -> line 1007
 *   +0x001c -> line 1008
 *   +0x0020 -> line 1006
 *   +0x0024 -> line 1008
 *   +0x002c -> line 1009
 *   +0x0048 -> line 1011
 *   +0x004c -> line 1013
 *   +0x0060 -> line 1014
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void impPS2glPrioritizeTextures(int n, unsigned int* textures, float* priorities)
{
    float fPrioritize;
    int I;
    unsigned int tex;

    for (I = 0; I < n; I++)
    {
        tex = *textures++;
        fPrioritize = *priorities++;
        if ((tex < 0x200) && g_PS2glContext.aTexName[tex].bAllocated)
            g_PS2glContext.aTexName[tex].fPrioritize = fPrioritize;
    }
}

/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_Texture.c lines 981–996 */
/* addr: 0x001750e0  size: 136 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 984
 *   +0x0004 -> line 981
 *   +0x0008 -> line 984
 *   +0x0010 -> line 991
 *   +0x0018 -> line 986
 *   +0x001c -> line 987
 *   +0x0028 -> line 991
 *   +0x006c -> line 992
 *   +0x0070 -> line 994
 *   +0x0080 -> line 996
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
unsigned char impPS2glAreTexturesResident(int n, unsigned int* textures, unsigned char* residences)
{
    unsigned int tex;
    unsigned char bAll;
    unsigned char bRes;
    int I;

    bAll = 1;
    for (I = 0; I < n; I++)
    {
        tex = *textures++;
        if ((tex < 0x200) && (bAll != 0))
        {
            bRes = (g_PS2glContext.aTexName[tex].bResident != 0) && (g_PS2glContext.aTexName[tex].bAllocated != 0);
            *residences = bRes;
            bAll = (bRes != 0);
        }
        residences++;
    }
    return bAll;
}

/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_Texture.c lines 945–976 */
/* addr: 0x00175170  size: 284 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 945
 *   +0x001c -> line 949
 *   +0x0020 -> line 945
 *   +0x002c -> line 949
 *   +0x0034 -> line 951
 *   +0x0038 -> line 952
 *   +0x004c -> line 953
 *   +0x006c -> line 956
 *   +0x00ac -> line 959
 *   +0x00b8 -> line 961
 *   +0x00c0 -> line 962
 *   +0x00c4 -> line 963
 *   +0x00c8 -> line 966
 *   +0x00d4 -> line 968
 *   +0x00dc -> line 969
 *   +0x00e0 -> line 973
 *   +0x00e4 -> line 975
 *   +0x00f8 -> line 976
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void impPS2glDeleteTextures(int n, unsigned int* textures)
{
    unsigned int tex;
    int I;
    tagGLtexname* pTexName;
    long lLength;

    for (I = 0; I < n; I++)
    {
        tex = *textures++;
        if (tex == 0) continue;
        if (tex >= 512) continue;
        pTexName = &g_PS2glContext.aTexName[tex];
        if (!g_PS2glContext.aTexName[tex].bAllocated) continue;
        if (pTexName->bResident)
        {
            lLength = g_PS2glContext.aBlockMap[pTexName->iTexBlock].nLength;
            PS2glFreeTexBlock(pTexName->iTexBlock, -1);
            if (lLength != 0)
                PS2glUpdateTexIndex(lLength);
        }
        pTexName->bResident = 0;
        if (g_PS2glContext.aTexName[tex].pTex1D)
        {
            PS2glFreeTexture(g_PS2glContext.aTexName[tex].pTex1D);
            g_PS2glContext.aTexName[tex].pTex1D = 0;
        }
        if (g_PS2glContext.aTexName[tex].pTex2D)
        {
            PS2glFreeTexture(g_PS2glContext.aTexName[tex].pTex2D);
            g_PS2glContext.aTexName[tex].pTex2D = 0;
        }
        pTexName->bAllocated = 0;
    }
}

/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_Texture.c lines 908–942 */
/* addr: 0x00175290  size: 212 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 908
 *   +0x0018 -> line 912
 *   +0x0020 -> line 914
 *   +0x0024 -> line 916
 *   +0x0030 -> line 918
 *   +0x003c -> line 920
 *   +0x0048 -> line 922
 *   +0x0054 -> line 923
 *   +0x0060 -> line 925
 *   +0x006c -> line 926
 *   +0x0070 -> line 931
 *   +0x0080 -> line 932
 *   +0x0090 -> line 933
 *   +0x009c -> line 934
 *   +0x00a0 -> line 935
 *   +0x00b0 -> line 940
 *   +0x00bc -> line 942
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void PS2glFreeTexture(tag_GLtexture* pTexture)
{
    int I;
    tag_GLtexture_image** ppImage;

    ppImage = pTexture->Image;
    if (pTexture)
    {
        for (I = 0; I < 7; I++, ppImage++)
        {
            if (*ppImage)
            {
                if ((*ppImage)->pixels)
                {
                    if (!(*ppImage)->bUserMaintain)
                    {
                        PS2glLiberator((*ppImage)->pixels);
                        if (pTexture->clut)
                        {
                            PS2glLiberator(pTexture->clut);
                            pTexture->clut = 0;
                        }
                    }
                }
                if ((*ppImage)->pixelsAux)
                    PS2glLiberator((*ppImage)->pixelsAux);
                PS2glLiberator(*ppImage);
            }
        }
        PS2glLiberator(pTexture);
    }
}

/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_Texture.c lines 897–905 */
/* addr: 0x00175370  size: 96 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 897
 *   +0x0018 -> line 899
 *   +0x0028 -> line 901
 *   +0x0030 -> line 902
 *   +0x0034 -> line 901
 *   +0x0038 -> line 902
 *   +0x003c -> line 904
 *   +0x0058 -> line 905
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void impPS2glGenTextures(int n, unsigned int* textures)
{
    unsigned int I;

    for (I = 0; I < 512 && n > 0; I++)
    {
        if (!g_PS2glContext.aTexName[I].bAllocated)
        {
            *textures = I;
            n--;
            g_PS2glContext.aTexName[I].bAllocated = 1;
            textures++;
        }
    }
}

/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_Texture.c lines 890–892 */
/* addr: 0x001753d0  size: 56 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 890
 *   +0x0030 -> line 892
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
int impPS2glIsTexture(unsigned int texture)
{
    return texture >= 512 ? 0 : g_PS2glContext.aTexName[texture].bAllocated;
}

/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_Texture.c lines 656–735 */
/* addr: 0x00175410  size: 692 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 656
 *   +0x0020 -> line 665
 *   +0x0024 -> line 656
 *   +0x0040 -> line 666
 *   +0x0050 -> line 667
 *   +0x0060 -> line 668
 *   +0x006c -> line 669
 *   +0x0078 -> line 670
 *   +0x0080 -> line 674
 *   +0x0084 -> line 675
 *   +0x0094 -> line 676
 *   +0x00a8 -> line 677
 *   +0x00b4 -> line 678
 *   +0x00c0 -> line 679
 *   +0x00c8 -> line 682
 *   +0x00d8 -> line 683
 *   +0x00e8 -> line 685
 *   +0x0100 -> line 686
 *   +0x011c -> line 692
 *   +0x0128 -> line 695
 *   +0x0130 -> line 696
 *   +0x0134 -> line 697
 *   +0x0138 -> line 700
 *   +0x0148 -> line 702
 *   +0x0158 -> line 703
 *   +0x0160 -> line 704
 *   +0x0164 -> line 705
 *   +0x0168 -> line 709
 *   +0x0178 -> line 710
 *   +0x0188 -> line 711
 *   +0x0194 -> line 715
 *   +0x0198 -> line 713
 *   +0x019c -> line 715
 *   +0x01a0 -> line 711
 *   +0x01b0 -> line 715
 *   +0x01b8 -> line 716
 *   +0x01c8 -> line 717
 *   +0x01cc -> line 719
 *   +0x01d4 -> line 718
 *   +0x01d8 -> line 719
 *   +0x01e0 -> line 722
 *   +0x01f4 -> line 724
 *   +0x01fc -> line 727
 *   +0x0200 -> line 726
 *   +0x0204 -> line 727
 *   +0x0208 -> line 724
 *   +0x021c -> line 727
 *   +0x0228 -> line 728
 *   +0x0238 -> line 729
 *   +0x023c -> line 731
 *   +0x0244 -> line 730
 *   +0x0248 -> line 731
 *   +0x0250 -> line 732
 *   +0x0260 -> line 733
 *   +0x0280 -> line 734
 *   +0x0284 -> line 735
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
int PS2glTexImageConv8to32(int width, int height, unsigned char* p_input, unsigned char* p_output)
{
    unsigned char output_page[8192];
    unsigned char input_page[8192];
    unsigned char* po1;
    unsigned char* po0;
    unsigned char* pi1;
    unsigned char* pi0;
    int n_output_height;
    int n_input_height;
    int n_output_width_byte;
    int n_input_width_byte;
    int n_page_w;
    int n_page_h;
    int k;
    int j;
    int i;
    /* TODO: decompile from asm/... */
}

/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_Texture.c lines 560–644 */
/* addr: 0x001756d0  size: 708 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 560
 *   +0x003c -> line 571
 *   +0x0040 -> line 572
 *   +0x0050 -> line 573
 *   +0x0060 -> line 574
 *   +0x006c -> line 575
 *   +0x0078 -> line 576
 *   +0x0080 -> line 579
 *   +0x0090 -> line 580
 *   +0x00a0 -> line 583
 *   +0x00a4 -> line 584
 *   +0x00b4 -> line 585
 *   +0x00c8 -> line 586
 *   +0x00d4 -> line 587
 *   +0x00e0 -> line 588
 *   +0x00e8 -> line 592
 *   +0x0100 -> line 593
 *   +0x011c -> line 599
 *   +0x0128 -> line 600
 *   +0x0138 -> line 601
 *   +0x0148 -> line 602
 *   +0x0150 -> line 603
 *   +0x0154 -> line 604
 *   +0x0158 -> line 607
 *   +0x0168 -> line 610
 *   +0x0170 -> line 611
 *   +0x0174 -> line 612
 *   +0x0178 -> line 616
 *   +0x0188 -> line 617
 *   +0x0198 -> line 618
 *   +0x01a4 -> line 622
 *   +0x01a8 -> line 620
 *   +0x01ac -> line 622
 *   +0x01b0 -> line 618
 *   +0x01c0 -> line 622
 *   +0x01c8 -> line 623
 *   +0x01d8 -> line 624
 *   +0x01dc -> line 626
 *   +0x01e4 -> line 625
 *   +0x01e8 -> line 626
 *   +0x01f0 -> line 628
 *   +0x0204 -> line 630
 *   +0x0210 -> line 633
 *   +0x0214 -> line 632
 *   +0x0218 -> line 633
 *   +0x021c -> line 630
 *   +0x022c -> line 633
 *   +0x0238 -> line 634
 *   +0x0248 -> line 635
 *   +0x024c -> line 637
 *   +0x0254 -> line 636
 *   +0x0258 -> line 637
 *   +0x0260 -> line 638
 *   +0x0270 -> line 639
 *   +0x0290 -> line 643
 *   +0x0294 -> line 644
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
int PS2glTexImageConv4to32(int width, int height, unsigned char* p_input, unsigned char* p_output)
{
    unsigned char output_page[8192];
    unsigned char input_page[8192];
    int n_output_height;
    int n_input_height;
    int n_output_width_byte;
    int n_input_width_byte;
    unsigned char* po1;
    unsigned char* po0;
    unsigned char* pi1;
    unsigned char* pi0;
    int n_page_w;
    int n_page_h;
    int k;
    int j;
    int i;
    /* TODO: decompile from asm/... */
}

/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_Texture.c lines 465–548 */
/* addr: 0x001759a0  size: 884 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 465
 *   +0x0030 -> line 492
 *   +0x004c -> line 493
 *   +0x005c -> line 494
 *   +0x0060 -> line 495
 *   +0x0064 -> line 497
 *   +0x0068 -> line 498
 *   +0x006c -> line 497
 *   +0x0070 -> line 498
 *   +0x0088 -> line 497
 *   +0x008c -> line 499
 *   +0x0090 -> line 497
 *   +0x0094 -> line 499
 *   +0x0098 -> line 497
 *   +0x00a0 -> line 499
 *   +0x00a8 -> line 497
 *   +0x00b4 -> line 499
 *   +0x00c4 -> line 497
 *   +0x00c8 -> line 498
 *   +0x00cc -> line 499
 *   +0x00d4 -> line 498
 *   +0x00dc -> line 499
 *   +0x00ec -> line 498
 *   +0x00f0 -> line 497
 *   +0x00f4 -> line 499
 *   +0x0108 -> line 498
 *   +0x010c -> line 499
 *   +0x0118 -> line 498
 *   +0x011c -> line 499
 *   +0x0130 -> line 498
 *   +0x0134 -> line 499
 *   +0x0148 -> line 498
 *   +0x014c -> line 499
 *   +0x0160 -> line 498
 *   +0x0164 -> line 499
 *   +0x0178 -> line 498
 *   +0x017c -> line 499
 *   +0x0190 -> line 498
 *   +0x0194 -> line 499
 *   +0x01a4 -> line 502
 *   +0x01b4 -> line 506
 *   +0x01cc -> line 507
 *   +0x01e4 -> line 509
 *   +0x01f4 -> line 510
 *   +0x0204 -> line 516
 *   +0x0218 -> line 518
 *   +0x0230 -> line 521
 *   +0x0238 -> line 523
 *   +0x0240 -> line 520
 *   +0x0244 -> line 525
 *   +0x0248 -> line 521
 *   +0x0250 -> line 523
 *   +0x026c -> line 525
 *   +0x0270 -> line 526
 *   +0x0280 -> line 529
 *   +0x0284 -> line 527
 *   +0x0288 -> line 529
 *   +0x0294 -> line 531
 *   +0x02a0 -> line 534
 *   +0x02a4 -> line 533
 *   +0x02a8 -> line 535
 *   +0x02ac -> line 534
 *   +0x02d4 -> line 535
 *   +0x02d8 -> line 536
 *   +0x02e8 -> line 539
 *   +0x02ec -> line 537
 *   +0x02f0 -> line 539
 *   +0x02fc -> line 541
 *   +0x0310 -> line 542
 *   +0x0328 -> line 544
 *   +0x0334 -> line 545
 *   +0x0340 -> line 548
 *   +0x0344 -> line 547
 *   +0x0348 -> line 548
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
int PageConv8to32(int width, int height, unsigned char* p_input, unsigned char* p_output)
{
    int n_height;
    int n_width;
    unsigned char* po1;
    unsigned char* po0;
    unsigned char* pi1;
    unsigned char* pi0;
    unsigned char output_block[256];
    unsigned char input_block[256];
    unsigned int in_block_nb;
    unsigned int* index32_v;
    unsigned int* index32_h;
    int k;
    int j;
    int i;
    int index1;
    int index0;
    unsigned int block_table8[32];
    unsigned int block_table32[32];
    /* TODO: decompile from asm/... */
}

/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_Texture.c lines 361–451 */
/* addr: 0x00175d20  size: 884 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 361
 *   +0x0030 -> line 394
 *   +0x004c -> line 395
 *   +0x005c -> line 396
 *   +0x0060 -> line 397
 *   +0x0064 -> line 399
 *   +0x0068 -> line 400
 *   +0x006c -> line 399
 *   +0x0070 -> line 400
 *   +0x0088 -> line 399
 *   +0x008c -> line 401
 *   +0x0090 -> line 399
 *   +0x0094 -> line 401
 *   +0x0098 -> line 399
 *   +0x00a0 -> line 401
 *   +0x00a8 -> line 399
 *   +0x00b4 -> line 401
 *   +0x00c4 -> line 399
 *   +0x00c8 -> line 400
 *   +0x00cc -> line 401
 *   +0x00d4 -> line 400
 *   +0x00dc -> line 401
 *   +0x00ec -> line 400
 *   +0x00f0 -> line 399
 *   +0x00f4 -> line 401
 *   +0x0108 -> line 400
 *   +0x010c -> line 401
 *   +0x0118 -> line 400
 *   +0x011c -> line 401
 *   +0x0130 -> line 400
 *   +0x0134 -> line 401
 *   +0x0148 -> line 400
 *   +0x014c -> line 401
 *   +0x0160 -> line 400
 *   +0x0164 -> line 401
 *   +0x0178 -> line 400
 *   +0x017c -> line 401
 *   +0x0190 -> line 400
 *   +0x0194 -> line 401
 *   +0x01a4 -> line 404
 *   +0x01b4 -> line 409
 *   +0x01cc -> line 410
 *   +0x01e4 -> line 412
 *   +0x01f4 -> line 413
 *   +0x0204 -> line 419
 *   +0x0218 -> line 421
 *   +0x0230 -> line 424
 *   +0x0238 -> line 426
 *   +0x0240 -> line 423
 *   +0x0244 -> line 428
 *   +0x0248 -> line 424
 *   +0x0250 -> line 426
 *   +0x026c -> line 428
 *   +0x0270 -> line 429
 *   +0x0280 -> line 432
 *   +0x0284 -> line 430
 *   +0x0288 -> line 432
 *   +0x0294 -> line 434
 *   +0x02a0 -> line 437
 *   +0x02a4 -> line 436
 *   +0x02a8 -> line 438
 *   +0x02ac -> line 437
 *   +0x02d4 -> line 438
 *   +0x02d8 -> line 439
 *   +0x02e8 -> line 442
 *   +0x02ec -> line 440
 *   +0x02f0 -> line 442
 *   +0x02fc -> line 444
 *   +0x0310 -> line 445
 *   +0x0328 -> line 447
 *   +0x0334 -> line 448
 *   +0x0340 -> line 451
 *   +0x0344 -> line 450
 *   +0x0348 -> line 451
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
int PageConv4to32(int width, int height, unsigned char* p_input, unsigned char* p_output)
{
    int n_height;
    int n_width;
    unsigned char* po1;
    unsigned char* po0;
    unsigned char* pi1;
    unsigned char* pi0;
    unsigned char output_block[256];
    unsigned char input_block[256];
    unsigned int in_block_nb;
    unsigned int* index32_v;
    unsigned int* index32_h;
    int k;
    int j;
    int i;
    int index1;
    int index0;
    unsigned int block_table4[32];
    unsigned int block_table32[32];
    /* TODO: decompile from asm/... */
}

/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_Texture.c lines 330–346 */
/* addr: 0x001760a0  size: 212 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 330
 *   +0x0004 -> line 332
 *   +0x0008 -> line 338
 *   +0x0010 -> line 334
 *   +0x0014 -> line 336
 *   +0x0018 -> line 334
 *   +0x001c -> line 336
 *   +0x0020 -> line 338
 *   +0x0028 -> line 339
 *   +0x002c -> line 338
 *   +0x0030 -> line 341
 *   +0x0034 -> line 339
 *   +0x0038 -> line 338
 *   +0x003c -> line 339
 *   +0x004c -> line 338
 *   +0x0050 -> line 339
 *   +0x0068 -> line 338
 *   +0x006c -> line 339
 *   +0x0088 -> line 341
 *   +0x008c -> line 339
 *   +0x00b4 -> line 341
 *   +0x00bc -> line 343
 *   +0x00cc -> line 346
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
int BlockConv8to32(unsigned char* p_input, unsigned char* p_output)
{
    static int lut[128] = {
        0, 36, 8, 44, 1, 37, 9, 45, 2, 38, 10, 46, 3, 39, 11, 47,
        4, 32, 12, 40, 5, 33, 13, 41, 6, 34, 14, 42, 7, 35, 15, 43,
        16, 52, 24, 60, 17, 53, 25, 61, 18, 54, 26, 62, 19, 55, 27, 63,
        20, 48, 28, 56, 21, 49, 29, 57, 22, 50, 30, 58, 23, 51, 31, 59,
        4, 32, 12, 40, 5, 33, 13, 41, 6, 34, 14, 42, 7, 35, 15, 43,
        0, 36, 8, 44, 1, 37, 9, 45, 2, 38, 10, 46, 3, 39, 11, 47,
        20, 48, 28, 56, 21, 49, 29, 57, 22, 50, 30, 58, 23, 51, 31, 59,
        16, 52, 24, 60, 17, 53, 25, 61, 18, 54, 26, 62, 19, 55, 27, 63,
    };
    unsigned char* pIn;
    unsigned int index1;
    unsigned int index0;
    unsigned int i0;
    unsigned int k;
    unsigned int i;

    k = 0;
    pIn = p_input;
    for (index0 = 0; index0 < 4; index0++)
    {
        i0 = (index0 & 1) * 64;
        for (index1 = 0; index1 < 16; index1++)
        {
            for (i = 0; i < 4; i++)
                p_output[k++] = pIn[lut[i0++]];
        }
        pIn += 64;
    }
    return 0;
}
