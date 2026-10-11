/* C:\Program Files\Metrowerks\CodeWarrior\PS2 Support\gcc_wrapper.c */
/* Language: C++ */
/* Compiler: MW MIPS C Compiler */

#include <stddef.h>

int dpcmp(double left, double right);

int _dpfgt(double left, double right)
{
    return dpcmp(left, right) > 0;
}

int _dpflt(double left, double right)
{
    return dpcmp(left, right) < 0;
}

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

float _f_ulltof(unsigned long long ul)
{
    float f;

    if ((long long)ul > 0)
        return __floatdisf(ul);
    f = __floatdisf((ul >> 1) | (ul & 1));
    return f + f;
}
