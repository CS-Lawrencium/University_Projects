//课本p35：学习强制类型转换运算符的使用方法

#include <stdio.h>
int main()
{
    int m = 5;
    printf("m/2 = %d\n", m / 2);
    printf("(float)(m/2) = %f\n", (float)(m / 2));
    printf("(float)m/2 = %f\n", (float)m / 2);
    return 0;
}
