#include <stdio.h>
union uu
{
    int a;
    struct
    {
        int u;
        float v;
    } b;
};
main()
{
    union uu m;
    m.a = 200;
    printf("%d\t", m.a);
    m.b.u = 500;
    m.b.v = 120.5;
    printf("%f\n", m.b.v);
}