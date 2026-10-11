/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_UnImplemented.c */
/* Language: C */
/* Compiler: MW MIPS C Compiler */

#include <stddef.h>

int BlockConv4to32(unsigned char* p_input, unsigned char* p_output)
{
    unsigned int i, j, k, i0, i2;
    unsigned int index0, index1;
    unsigned char c_in, c_out, *pIn;
    static int lut[256] = {
        0, 68, 8, 76, 16, 84, 24, 92, 1, 69, 9, 77, 17, 85, 25, 93,
        2, 70, 10, 78, 18, 86, 26, 94, 3, 71, 11, 79, 19, 87, 27, 95,
        4, 64, 12, 72, 20, 80, 28, 88, 5, 65, 13, 73, 21, 81, 29, 89,
        6, 66, 14, 74, 22, 82, 30, 90, 7, 67, 15, 75, 23, 83, 31, 91,
        32, 100, 40, 108, 48, 116, 56, 124, 33, 101, 41, 109, 49, 117, 57, 125,
        34, 102, 42, 110, 50, 118, 58, 126, 35, 103, 43, 111, 51, 119, 59, 127,
        36, 96, 44, 104, 52, 112, 60, 120, 37, 97, 45, 105, 53, 113, 61, 121,
        38, 98, 46, 106, 54, 114, 62, 122, 39, 99, 47, 107, 55, 115, 63, 123,
        4, 64, 12, 72, 20, 80, 28, 88, 5, 65, 13, 73, 21, 81, 29, 89,
        6, 66, 14, 74, 22, 82, 30, 90, 7, 67, 15, 75, 23, 83, 31, 91,
        0, 68, 8, 76, 16, 84, 24, 92, 1, 69, 9, 77, 17, 85, 25, 93,
        2, 70, 10, 78, 18, 86, 26, 94, 3, 71, 11, 79, 19, 87, 27, 95,
        36, 96, 44, 104, 52, 112, 60, 120, 37, 97, 45, 105, 53, 113, 61, 121,
        38, 98, 46, 106, 54, 114, 62, 122, 39, 99, 47, 107, 55, 115, 63, 123,
        32, 100, 40, 108, 48, 116, 56, 124, 33, 101, 41, 109, 49, 117, 57, 125,
        34, 102, 42, 110, 50, 118, 58, 126, 35, 103, 43, 111, 51, 119, 59, 127,
    };

    pIn = p_input;
    index1 = 0;
    for (k = 0; k < 4; k++)
    {
        index0 = (k % 2) * 128;
        for (i = 0; i < 16; i++)
        {
            for (j = 0; j < 4; j++)
            {
                c_out = 0x00;

                i0 = lut[index0++];
                i2 = (i0 & 0x1) * 4;
                c_in = (pIn[i0 / 2] & (0x0f << i2)) >> i2;
                c_out = c_out | c_in;

                i0 = lut[index0++];
                i2 = (i0 & 0x1) * 4;
                c_in = (pIn[i0 / 2] & (0x0f << i2)) >> i2;
                c_out = c_out | ((c_in << 4) & 0xf0);

                p_output[index1++] = c_out;
            }
        }
        pIn += 64;
    }
    return 0;
}

void impPS2glSelectBuffer(void)
{
    /* TODO: decompile from asm/... */
}

int impPS2glRenderMode(void)
{
    return 0;
}

void impPS2glPushName(void)
{
    /* TODO: decompile from asm/... */
}

void impPS2glPushClientAttrib(void)
{
    /* TODO: decompile from asm/... */
}

void impPS2glPopName(void)
{
    /* TODO: decompile from asm/... */
}

void impPS2glPopClientAttrib(void)
{
    /* TODO: decompile from asm/... */
}

void impPS2glPolygonStipple(void)
{
    /* TODO: decompile from asm/... */
}

void impPS2glPolygonOffset(void)
{
    /* TODO: decompile from asm/... */
}

void impPS2glPolygonMode(void)
{
    /* TODO: decompile from asm/... */
}

void impPS2glPassThrough(void)
{
    /* TODO: decompile from asm/... */
}

void impPS2glMapGrid2f(void)
{
    /* TODO: decompile from asm/... */
}

void impPS2glMapGrid2d(void)
{
    /* TODO: decompile from asm/... */
}

void impPS2glMapGrid1f(void)
{
    /* TODO: decompile from asm/... */
}

void impPS2glMapGrid1d(void)
{
    /* TODO: decompile from asm/... */
}

void impPS2glMap2f(void)
{
    /* TODO: decompile from asm/... */
}

void impPS2glMap2d(void)
{
    /* TODO: decompile from asm/... */
}

void impPS2glMap1f(void)
{
    /* TODO: decompile from asm/... */
}

void impPS2glMap1d(void)
{
    /* TODO: decompile from asm/... */
}

void impPS2glLoadName(void)
{
    /* TODO: decompile from asm/... */
}

void impPS2glLineWidth(void)
{
    /* TODO: decompile from asm/... */
}

void impPS2glLineStipple(void)
{
    /* TODO: decompile from asm/... */
}

void impPS2glInitNames(void)
{
    /* TODO: decompile from asm/... */
}

void impPS2glIndexubv(void)
{
    /* TODO: decompile from asm/... */
}

void impPS2glIndexub(void)
{
    /* TODO: decompile from asm/... */
}

void impPS2glIndexsv(void)
{
    /* TODO: decompile from asm/... */
}

void impPS2glIndexs(void)
{
    /* TODO: decompile from asm/... */
}

void impPS2glIndexiv(void)
{
    /* TODO: decompile from asm/... */
}

void impPS2glIndexi(void)
{
    /* TODO: decompile from asm/... */
}

void impPS2glIndexfv(void)
{
    /* TODO: decompile from asm/... */
}

void impPS2glIndexf(void)
{
    /* TODO: decompile from asm/... */
}

void impPS2glIndexdv(void)
{
    /* TODO: decompile from asm/... */
}

void impPS2glIndexd(void)
{
    /* TODO: decompile from asm/... */
}

void impPS2glIndexMask(void)
{
    /* TODO: decompile from asm/... */
}

void impPS2glFeedbackBuffer(void)
{
    /* TODO: decompile from asm/... */
}

void impPS2glEvalPoint2(void)
{
    /* TODO: decompile from asm/... */
}

void impPS2glEvalPoint1(void)
{
    /* TODO: decompile from asm/... */
}

void impPS2glEvalMesh2(void)
{
    /* TODO: decompile from asm/... */
}

void impPS2glEvalMesh1(void)
{
    /* TODO: decompile from asm/... */
}

void impPS2glEvalCoord2fv(void)
{
    /* TODO: decompile from asm/... */
}

void impPS2glEvalCoord2f(void)
{
    /* TODO: decompile from asm/... */
}

void impPS2glEvalCoord2dv(void)
{
    /* TODO: decompile from asm/... */
}

void impPS2glEvalCoord2d(void)
{
    /* TODO: decompile from asm/... */
}

void impPS2glEvalCoord1fv(void)
{
    /* TODO: decompile from asm/... */
}

void impPS2glEvalCoord1f(void)
{
    /* TODO: decompile from asm/... */
}

void impPS2glEvalCoord1dv(void)
{
    /* TODO: decompile from asm/... */
}

void impPS2glEvalCoord1d(void)
{
    /* TODO: decompile from asm/... */
}

void impPS2glEdgeFlagv(void)
{
    /* TODO: decompile from asm/... */
}

void impPS2glEdgeFlag(void)
{
    /* TODO: decompile from asm/... */
}
