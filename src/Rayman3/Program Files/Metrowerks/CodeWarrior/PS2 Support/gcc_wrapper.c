/* C:\Program Files\Metrowerks\CodeWarrior\PS2 Support\gcc_wrapper.c */
/* Language: C++ */
/* Compiler: MW MIPS C Compiler */

#include <stddef.h>

int dpcmp(double left, double right);

/* C:\Program Files\Metrowerks\CodeWarrior\PS2 Support\gcc_wrapper.c lines 100–102 */
/* addr: 0x001001e0  size: 32 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 100
 *   +0x0008 -> line 101
 *   +0x0010 -> line 102
 *   +0x0014 -> line 101
 *   +0x0018 -> line 102
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
int _dpfgt(double left, double right)
{
    return dpcmp(left, right) > 0;
}

/* C:\Program Files\Metrowerks\CodeWarrior\PS2 Support\gcc_wrapper.c lines 88–90 */
/* addr: 0x00100200  size: 32 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 88
 *   +0x0008 -> line 89
 *   +0x0010 -> line 90
 *   +0x0014 -> line 89
 *   +0x0018 -> line 90
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
int _dpflt(double left, double right)
{
    return dpcmp(left, right) < 0;
}

/* C:\Program Files\Metrowerks\CodeWarrior\PS2 Support\gcc_wrapper.c lines 62–64 */
/* addr: 0x00100220  size: 76 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 63
 *   +0x0004 -> line 62
 *   +0x0008 -> line 63
 *   +0x0040 -> line 64
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
double __floatdidf(long long l);
float __floatdisf(long long l);

double _d_utod(unsigned int ui)
{
    unsigned long long ul = ui;
    double d;

    if ((long long)ul > 0)
        return __floatdidf(ul);
    d = __floatdidf((ul >> 1) | (ul & 1));
    return d + d;
}

/* C:\Program Files\Metrowerks\CodeWarrior\PS2 Support\gcc_wrapper.c lines 37–46 */
/* addr: 0x00100270  size: 60 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 37
 *   +0x0004 -> line 40
 *   +0x000c -> line 41
 *   +0x001c -> line 43
 *   +0x002c -> line 44
 *   +0x0030 -> line 46
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
float _f_ulltof(unsigned long long ul)
{
    float f;

    if ((long long)ul > 0)
        return __floatdisf(ul);
    f = __floatdisf((ul >> 1) | (ul & 1));
    return f + f;
}
