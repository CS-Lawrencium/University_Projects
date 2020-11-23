//课本p115：编程设计一个简单的猜数游戏，并记录用户猜测的次数
//*使用随机函数rand()产生的是一个在0~RAND_MAX之间的整数，而符号常量RAND_MAX于stdlib.h中被定义
//*函数rand()所产生的随机数实际上只是一个伪随机数，每次得到的结果都是一样的

#include <stdio.h>
#include <stdlib.h>
int main()
{
    int magic;
    int guess;
    int counter = 0;
    magic = rand() % 100 + 1;
    do
    {
        printf("Please input a magic number:");
        scanf("%d", &guess);
        counter++;
        if(guess>magic)
            printf("Wrong!Too high!\n");
        else if(guess <magic)
            printf("Wrong!Too small!\n");
        else
            printf("You are fucking smart!");
    } while (guess != magic);
    printf("counter = %d\n", counter);
    return 0;
}