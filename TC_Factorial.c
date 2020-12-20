#include <stdio.h>
long Factorial(int x);
int main()
{
    int x;
    while (1)
    {
        printf("input x:");
        scanf("%d", &x);
        if (x <= -1)
            exit(0);
        else
            printf("%d! = %d\n", x, Factorial(x));
    }
    return 0;
}
long Factorial(int x)
{
    int i;
    int result = 1;
    for (i = 2; i <= x; i++)
    {
        result *= i;
    }
    return result;
}
//计算一个数的阶乘