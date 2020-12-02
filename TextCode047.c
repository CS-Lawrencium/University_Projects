//课本p200：进一步改进TextCode046中的代码：返回学生人数

#include <stdio.h>
#define N 40
int Average(int score[], int n); //Average()函数原型
int ReadScore(int score[]);      //ReadScore()函数原型
int main()
{
    int score[N], aver, n;
    n = ReadScore(score); //调用函数ReadScore()输入成绩，返回学生人数
    printf("Total students are %d\n", n);
    aver = Average(score, n); //调用函数Average()计算平均分，返回平均分
    printf("Average score is %d \n", aver);
    return 0;
}
//函数功能：计算n个学生成绩的平均分
int Average(int score[], int n)
{
    int i, sum = 0;
    for (i = 0; i < n; i++)
    {
        sum += score[i];
    }
    return sum / n;
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