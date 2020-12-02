//课本p201：改进TextCode047中的代码：计算最高分

#include <stdio.h>
#define N 40
int FindMax(int score[], int n); //FindMax()函数原型
int ReadScore(int score[]);      //ReadScore()函数原型
int main()
{
    int score[N], max, n;
    n = ReadScore(score); //调用函数ReadScore()输入成绩，返回学生人数
    printf("Total students are %d\n", n);
    max = Average(score, n); //调用函数Average()计算平均分，返回平均分
    printf("The highest score is %d \n", max);
    return 0;
}
//函数功能：计算最高分，返回最高分
int FindMax(int score[], int n)
{
    int max, i;
    max = score[0]; //假设score[0]为当前最大值
    for (i = 1; i < n; i++)
    {
        if (score[i] > max) //若score[i]的值较大
            max = score[i];
    }
    return max; //返回最高分
}
//函数功能：输入学生某门课成绩，当输入成绩为负值时，结束输入，返回学生人数
int ReadScore(int score[])
{
    int i = -1;
    do
    {
        i++;
        printf("Input score:");
        scanf("%d", &score[i]);
    } while (score[i] >= 0); //输入负值时结束输入
    return i;                //返回学生人数
}