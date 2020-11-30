//课本p125：学习break语句的使用方法

#include <stdio.h>
int main()
{
    int i, n;
    for (i = 1; i <= 5; i++)
    {
        printf("Please enter n:");
        scanf("%d", &n);
        if (n < 0)
            break;
        printf("n = %d\n", n);
    }
    printf("Program is god damn over!\n");
    return 0;
}