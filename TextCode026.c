//课本p105：学习空语句的使用方法
//*当循环体中是空语句时，表示在循环体中什么也不做，常用于编写延时程序

#include <stdio.h>
int main()
{
    long long i;
    for (i = 1; i < 1919810;i++)
    {
        ;
    }
    printf("hello world!\n");
    return 0;
}