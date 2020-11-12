#include <stdio.h>
int main()
{
    const double pi = 3.1415926;
    double r;
    printf("Input r:");
    scanf("%lf", &r);
    printf("circumference = %f\n", 2 * pi * r);
    printf("area = %f\n,pi*r*r");
    return 0;
}
//课本p32：使用const常量定义Π，编程从键盘输入圆的半径，计算并输出圆的周长和面积