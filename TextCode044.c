//课本p190：学习数组的定义和初始化
//*C语言中数组的下标是从0开始的
//*数组长度习惯用宏常量来定义

#include <stdio.h>
int main()
{
    int score[5];
    int totalScore = 0;
    int i;
    printf("Input the scores of five students:\n");
    for (i = 0; i < 5; i++)
    {
        scanf("%d", &score[i]);
        totalScore = totalScore + score[i];
    }
    printf("The average score is %f\n", totalScore / 5.0);
    return 0;
}