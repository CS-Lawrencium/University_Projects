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
        scanf("%d", &guess);
        counter++;
        if (guess > magic)
            printf("Wrong!Too high!\n");
        else if (guess < magic)
            printf("Wrong!Too small!\n");
        else
            printf("You are fucking smart!");
    } while (guess != magic);
    printf("counter = %d\n", counter);
    return 0;
}