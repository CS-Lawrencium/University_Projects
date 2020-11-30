//课本p109：从键盘输入n，然后计算并输出1~n之间所有数的阶乘值

#include <stdio.h>
int main()
{
    int i, n;
    long p = 1;
    printf("Please input the n:");
    scanf("%d", &n);
    for (i = 1; i <= n;i++)
    {
        p = p * i;
        printf("%d! = %ld\n", i, p);//输出1~n之间所有数的阶乘值
    }
    return 0;
}