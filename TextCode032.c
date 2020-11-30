//课本p117：学习srand()函数的使用方法
//*如果将srand(1)改为srand(2)，程序的运行结果将会改变

#include <stdio.h>
#include <stdlib.h>
int main()
{
    int magic, guess, counter = 0;
    unsigned int seed;
    printf("Please input the seed:\n");
    scanf("%u", &seed);
    srand(seed);
    magic = rand() % 100 + 1;
    do
    {
        printf("Please input a magic number:");
        scanf("%d", &guess); //输入用户猜的数guess
        counter++;           //计数器变量counter进行"+1"操作
        if (guess > magic)
            printf("Wrong!Too high!\n");
        else if (guess < magic)
            printf("Wrong!Too small!\n");
        else
            printf("You are fucking smart!");
    } while (guess != magic); //执行到用户猜对为止
    printf("counter = %d\n", counter);
    return 0;
}