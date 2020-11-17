//课本p101：使用for循环进行累加运算
//*由于每次循环体执行后，都会执行增值表达式，因此最终i的值为n+1

#include <stdio.h>
int main()
{
    int i, n, sum;
    printf("Input n:");
    sum = 0;
    for (i = 1; i <= n;i++)
    {
        sum = sum + i;
    }
    printf("sum = %d\n", sum);
    return 0;
}