//课本p126：学习continue语句的使用方法
//*循环体遇到continue语句时，程序将跳过continue后面尚未执行的语句，开始下一次循坏

#include <stdio.h>
int main()
{
    int i, n;
    for (i = 1; i <= 5; i++)
    {
        printf("Please enter n:");
        scanf("%d", &n);
        if (n < 0)
            continue;
        printf("n=%d\n", n);
    }
    printf("Program is over!\n");
    return 0;
}