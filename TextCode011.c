//课本p35：编程从键盘输入a、b、c的值，计算并输出三角形的面积

#include <stdio.h>
#include <math.h>
int main()
{
    float a, b, c, s, area;
    printf("Input a,b,c:\n");
    scanf("%f,%f,%f", &a, &b, &c);
    s = (a + b + c) / 2;
    area = (float)sqrt(s * (s - a) * (s - b) * (s - c));
    printf("area = %f\n", area);
    return 0;
}
