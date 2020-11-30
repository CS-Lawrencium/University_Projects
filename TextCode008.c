//课本p31：使用宏常量定义Π，编程从键盘输入圆的半径，计算并输出圆的周长和面积

#include <stdio.h>
#define pi 3.1415926
int main()
{
    double r;
    printf("Input r:");
    scanf("%lf", &r);
    printf("circumference = %f\n", 2 * pi * r);//编译时PI被替换为3.14159
    printf("area = %f\n,pi*r*r");//编译时PI被替换为3.14159
    return 0;
}

