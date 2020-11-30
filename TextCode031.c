//课本p115：编程设计一个简单的猜数游戏，并记录用户猜测的次数
//*使用随机函数rand()产生的是一个在0~RAND_MAX之间的整数，而符号常量RAND_MAX于stdlib.h中被定义
//*函数rand()所产生的随机数实际上只是一个伪随机数，每次得到的结果都是一样的

#include <stdio.h>
#include <stdlib.h>
int main()
{
    int magic;//计算机想的数
    int guess;//用户猜的数
    int counter = 0;//计数器，记录用户猜的次数，初始化为0
    magic = rand() % 100 + 1;//生成一个1~100之间的随机数
    do
    {
        printf("Please input a magic number:");
        scanf("%d", &guess);//输入用户猜的数guess
        counter++;//计数器变量counter进行"+1"操作
        if(guess>magic)
            printf("Wrong!Too high!\n");
        else if(guess <magic)
            printf("Wrong!Too small!\n");
        else
            printf("You are fucking smart!");
    } while (guess != magic);//执行到用户猜对为止
    printf("counter = %d\n", counter);//打印用户猜数的次数counter
    return 0;
}