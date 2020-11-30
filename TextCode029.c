//课本p110：学习嵌套循环的使用方法

#include <stdio.h>
int main()
{
    int i,j,n;
    long p, sum = 0;//累加求和变量sum初始为0
    printf("Input n:");
    scanf("%d", &n);
    for (i = 1; i <= n;i++)
    {
        p = 1;//每次循环之前都要将累乘求积变量赋值为1
        for (j = 1; j <= i;j++)
        {
            p = p * j;//累乘求积
        }
        sum = sum + p;//累加求和
    }
    printf("1!+2!+...+n! = %ld\n", n, sum);
    return 0;
}