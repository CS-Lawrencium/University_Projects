//课本p110：学习嵌套循环的使用方法

#include <stdio.h>
int main()
{
    int i,j,n;
    long p, sum = 0;
    printf("Input n:");
    scanf("%d", &n);
    for (i = 1; i <= n;i++)
    {
        p = 1;
        for (j = 1; j <= i;j++)
        {
            p = p * j;
        }
        sum = sum + p;
    }
    printf("1!+2!+...+n! = %ld\n", n, sum);
    return 0;
}