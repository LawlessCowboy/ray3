/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_UnImplemented.c */
/* Language: C */
/* Compiler: MW MIPS C Compiler */

#include <stddef.h>

/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_UnImplemented.c lines 193–275 */
/* addr: 0x00176180  size: 292 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 193
 *   +0x0004 -> line 243
 *   +0x0008 -> line 193
 *   +0x000c -> line 245
 *   +0x0010 -> line 193
 *   +0x0018 -> line 255
 *   +0x001c -> line 259
 *   +0x0020 -> line 255
 *   +0x0024 -> line 246
 *   +0x0028 -> line 248
 *   +0x002c -> line 246
 *   +0x0034 -> line 248
 *   +0x0038 -> line 250
 *   +0x0040 -> line 255
 *   +0x0048 -> line 269
 *   +0x004c -> line 268
 *   +0x0050 -> line 269
 *   +0x0054 -> line 262
 *   +0x005c -> line 268
 *   +0x0060 -> line 262
 *   +0x0074 -> line 257
 *   +0x0078 -> line 259
 *   +0x007c -> line 257
 *   +0x0080 -> line 259
 *   +0x008c -> line 264
 *   +0x0090 -> line 259
 *   +0x0094 -> line 266
 *   +0x0098 -> line 264
 *   +0x009c -> line 266
 *   +0x00a0 -> line 259
 *   +0x00a4 -> line 266
 *   +0x00ac -> line 259
 *   +0x00b0 -> line 266
 *   +0x00b8 -> line 259
 *   +0x00bc -> line 266
 *   +0x00c0 -> line 259
 *   +0x00c4 -> line 266
 *   +0x00c8 -> line 259
 *   +0x00cc -> line 266
 *   +0x00e4 -> line 269
 *   +0x00ec -> line 270
 *   +0x00fc -> line 272
 *   +0x010c -> line 275
 *   +0x0110 -> line 274
 *   +0x0114 -> line 275
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
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

/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_UnImplemented.c lines 295–295 */
/* addr: 0x001762b0  size: 8 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 295
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void impPS2glSelectBuffer(void)
{
    /* TODO: decompile from asm/... */
}

/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_UnImplemented.c lines 289–289 */
/* addr: 0x001762c0  size: 8 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 289
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
int impPS2glRenderMode(void)
{
    return 0;
}

/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_UnImplemented.c lines 283–283 */
/* addr: 0x001762d0  size: 8 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 283
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void impPS2glPushName(void)
{
    /* TODO: decompile from asm/... */
}

/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_UnImplemented.c lines 277–277 */
/* addr: 0x001762e0  size: 8 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 277
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void impPS2glPushClientAttrib(void)
{
    /* TODO: decompile from asm/... */
}

/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_UnImplemented.c lines 271–271 */
/* addr: 0x001762f0  size: 8 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 271
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void impPS2glPopName(void)
{
    /* TODO: decompile from asm/... */
}

/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_UnImplemented.c lines 265–265 */
/* addr: 0x00176300  size: 8 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 265
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void impPS2glPopClientAttrib(void)
{
    /* TODO: decompile from asm/... */
}

/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_UnImplemented.c lines 259–259 */
/* addr: 0x00176310  size: 8 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 259
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void impPS2glPolygonStipple(void)
{
    /* TODO: decompile from asm/... */
}

/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_UnImplemented.c lines 253–253 */
/* addr: 0x00176320  size: 8 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 253
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void impPS2glPolygonOffset(void)
{
    /* TODO: decompile from asm/... */
}

/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_UnImplemented.c lines 247–247 */
/* addr: 0x00176330  size: 8 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 247
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void impPS2glPolygonMode(void)
{
    /* TODO: decompile from asm/... */
}

/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_UnImplemented.c lines 241–241 */
/* addr: 0x00176340  size: 8 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 241
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void impPS2glPassThrough(void)
{
    /* TODO: decompile from asm/... */
}

/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_UnImplemented.c lines 235–235 */
/* addr: 0x00176350  size: 8 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 235
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void impPS2glMapGrid2f(void)
{
    /* TODO: decompile from asm/... */
}

/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_UnImplemented.c lines 229–229 */
/* addr: 0x00176360  size: 8 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 229
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void impPS2glMapGrid2d(void)
{
    /* TODO: decompile from asm/... */
}

/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_UnImplemented.c lines 223–223 */
/* addr: 0x00176370  size: 8 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 223
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void impPS2glMapGrid1f(void)
{
    /* TODO: decompile from asm/... */
}

/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_UnImplemented.c lines 217–217 */
/* addr: 0x00176380  size: 8 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 217
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void impPS2glMapGrid1d(void)
{
    /* TODO: decompile from asm/... */
}

/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_UnImplemented.c lines 211–211 */
/* addr: 0x00176390  size: 8 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 211
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void impPS2glMap2f(void)
{
    /* TODO: decompile from asm/... */
}

/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_UnImplemented.c lines 205–205 */
/* addr: 0x001763a0  size: 8 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 205
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void impPS2glMap2d(void)
{
    /* TODO: decompile from asm/... */
}

/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_UnImplemented.c lines 199–199 */
/* addr: 0x001763b0  size: 8 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 199
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void impPS2glMap1f(void)
{
    /* TODO: decompile from asm/... */
}

/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_UnImplemented.c lines 193–193 */
/* addr: 0x001763c0  size: 8 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 193
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void impPS2glMap1d(void)
{
    /* TODO: decompile from asm/... */
}

/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_UnImplemented.c lines 187–187 */
/* addr: 0x001763d0  size: 8 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 187
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void impPS2glLoadName(void)
{
    /* TODO: decompile from asm/... */
}

/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_UnImplemented.c lines 181–181 */
/* addr: 0x001763e0  size: 8 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 181
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void impPS2glLineWidth(void)
{
    /* TODO: decompile from asm/... */
}

/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_UnImplemented.c lines 175–175 */
/* addr: 0x001763f0  size: 8 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 175
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void impPS2glLineStipple(void)
{
    /* TODO: decompile from asm/... */
}

/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_UnImplemented.c lines 169–169 */
/* addr: 0x00176400  size: 8 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 169
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void impPS2glInitNames(void)
{
    /* TODO: decompile from asm/... */
}

/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_UnImplemented.c lines 163–163 */
/* addr: 0x00176410  size: 8 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 163
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void impPS2glIndexubv(void)
{
    /* TODO: decompile from asm/... */
}

/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_UnImplemented.c lines 157–157 */
/* addr: 0x00176420  size: 8 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 157
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void impPS2glIndexub(void)
{
    /* TODO: decompile from asm/... */
}

/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_UnImplemented.c lines 151–151 */
/* addr: 0x00176430  size: 8 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 151
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void impPS2glIndexsv(void)
{
    /* TODO: decompile from asm/... */
}

/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_UnImplemented.c lines 145–145 */
/* addr: 0x00176440  size: 8 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 145
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void impPS2glIndexs(void)
{
    /* TODO: decompile from asm/... */
}

/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_UnImplemented.c lines 139–139 */
/* addr: 0x00176450  size: 8 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 139
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void impPS2glIndexiv(void)
{
    /* TODO: decompile from asm/... */
}

/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_UnImplemented.c lines 133–133 */
/* addr: 0x00176460  size: 8 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 133
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void impPS2glIndexi(void)
{
    /* TODO: decompile from asm/... */
}

/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_UnImplemented.c lines 127–127 */
/* addr: 0x00176470  size: 8 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 127
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void impPS2glIndexfv(void)
{
    /* TODO: decompile from asm/... */
}

/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_UnImplemented.c lines 121–121 */
/* addr: 0x00176480  size: 8 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 121
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void impPS2glIndexf(void)
{
    /* TODO: decompile from asm/... */
}

/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_UnImplemented.c lines 115–115 */
/* addr: 0x00176490  size: 8 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 115
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void impPS2glIndexdv(void)
{
    /* TODO: decompile from asm/... */
}

/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_UnImplemented.c lines 109–109 */
/* addr: 0x001764a0  size: 8 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 109
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void impPS2glIndexd(void)
{
    /* TODO: decompile from asm/... */
}

/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_UnImplemented.c lines 103–103 */
/* addr: 0x001764b0  size: 8 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 103
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void impPS2glIndexMask(void)
{
    /* TODO: decompile from asm/... */
}

/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_UnImplemented.c lines 97–97 */
/* addr: 0x001764c0  size: 8 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 97
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void impPS2glFeedbackBuffer(void)
{
    /* TODO: decompile from asm/... */
}

/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_UnImplemented.c lines 91–91 */
/* addr: 0x001764d0  size: 8 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 91
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void impPS2glEvalPoint2(void)
{
    /* TODO: decompile from asm/... */
}

/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_UnImplemented.c lines 85–85 */
/* addr: 0x001764e0  size: 8 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 85
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void impPS2glEvalPoint1(void)
{
    /* TODO: decompile from asm/... */
}

/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_UnImplemented.c lines 79–79 */
/* addr: 0x001764f0  size: 8 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 79
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void impPS2glEvalMesh2(void)
{
    /* TODO: decompile from asm/... */
}

/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_UnImplemented.c lines 73–73 */
/* addr: 0x00176500  size: 8 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 73
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void impPS2glEvalMesh1(void)
{
    /* TODO: decompile from asm/... */
}

/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_UnImplemented.c lines 67–67 */
/* addr: 0x00176510  size: 8 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 67
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void impPS2glEvalCoord2fv(void)
{
    /* TODO: decompile from asm/... */
}

/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_UnImplemented.c lines 61–61 */
/* addr: 0x00176520  size: 8 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 61
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void impPS2glEvalCoord2f(void)
{
    /* TODO: decompile from asm/... */
}

/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_UnImplemented.c lines 55–55 */
/* addr: 0x00176530  size: 8 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 55
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void impPS2glEvalCoord2dv(void)
{
    /* TODO: decompile from asm/... */
}

/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_UnImplemented.c lines 49–49 */
/* addr: 0x00176540  size: 8 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 49
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void impPS2glEvalCoord2d(void)
{
    /* TODO: decompile from asm/... */
}

/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_UnImplemented.c lines 43–43 */
/* addr: 0x00176550  size: 8 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 43
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void impPS2glEvalCoord1fv(void)
{
    /* TODO: decompile from asm/... */
}

/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_UnImplemented.c lines 37–37 */
/* addr: 0x00176560  size: 8 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 37
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void impPS2glEvalCoord1f(void)
{
    /* TODO: decompile from asm/... */
}

/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_UnImplemented.c lines 31–31 */
/* addr: 0x00176570  size: 8 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 31
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void impPS2glEvalCoord1dv(void)
{
    /* TODO: decompile from asm/... */
}

/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_UnImplemented.c lines 25–25 */
/* addr: 0x00176580  size: 8 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 25
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void impPS2glEvalCoord1d(void)
{
    /* TODO: decompile from asm/... */
}

/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_UnImplemented.c lines 19–19 */
/* addr: 0x00176590  size: 8 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 19
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void impPS2glEdgeFlagv(void)
{
    /* TODO: decompile from asm/... */
}

/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_UnImplemented.c lines 13–13 */
/* addr: 0x001765a0  size: 8 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 13
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void impPS2glEdgeFlag(void)
{
    /* TODO: decompile from asm/... */
}
