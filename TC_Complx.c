#include "stdio.h"

struct complx
{
    int real;
    int im;
};
main()
{
    static struct complx za = {3, 4};
    static struct complx zb = {5, 6};
    struct complx x, y, z;
    struct complx cmult();
    void cpr();
    z = cmult(za, zb);
    cpr(za, zb, z);
    x.real = 10;
    x.im = 20;
    y.real = 30;
    y.im = 40;
    z = cmult(x, y);
    cpr(x, y, z);
}
struct complx cmult(struct complx za, struct complx zb)
{
    struct complx w;
    w.real = za.real * zb.real - za.im * zb.im;
    w.im = za.real * zb.im + za.im * zb.real;
    return w;
}
void cpr(struct complx za, struct complx zb, struct complx z)
{
    printf("(%d+%di)*(%d+%di)=", za.real, za.im, zb.real, zb.im);
    printf("(%d+%di)\n", z.real, z.im);
}