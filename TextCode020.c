//课本p65：使用条件运算符编程，计算并输出两个整数的最大值
//*条件表达式的一般形式为：表达式1 ? 表达式2 : 表达式3；其含义为:若表达式1的值非0，则条件表达式的值为表达式2的值，反之则为表达式3的值

#include <stdio.h>
int main()
{
    int a, b, max;
    printf("Input a,b:");
    scanf("%d,%d", &a, &b);
    max = a > b ? a : b;//用条件表达式计算两整数的最大值
    printf("max = %d\n", max);
    return 0;
}
