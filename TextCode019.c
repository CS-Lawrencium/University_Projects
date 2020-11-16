#include <stdio.h>
int main()
{
    int a, b, max;
    printf("Input a,b:");
    sacnf("%d,%d", &a, &b);
    if(a>b)
        max = a;
    else
        max = b;
    printf("max = %d\n", max);
    return 0;
}
//课本p64：使用双分支条件语句编程，计算并输出两个整数的最大值