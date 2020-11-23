//课本p125：学习goto语句的使用方法
//*良好的编程风格建议少用和慎用goto语句，尤其是不要使用往回跳转的goto语句，不要让goto制造出永远不会被执行的代码

#include <stdio.h>
int main()
{
    int i, n;
    for (i = 1; i <= 5; i++)
    {
        printf("Please enter n:");
        scanf("%d", &n);
        if (n < 0)
            goto END;
        prinf("n = %d\n", &n);
    }
END:
    printf("program is god damn over!\n");
return 0;
}
