//课本p21：比较单精度实型和双精度实型的有效位数

#include <stdio.h>
int main()
{
    float a;
    double b;
    a = 123456.789e4;
    b = 123456.789e4;
    printf("a = %f\n", a);
    printf("b = %lf\n", b);
    return 0;
}
