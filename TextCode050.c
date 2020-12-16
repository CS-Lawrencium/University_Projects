//课本p207：学习选择法排序
//*选择法是交换法的改进方法，整个算法最多有n-1次两数交换操作

#include <stdio.h>
#define N 40
int ReadScore(int score[]);          //ReadScore()函数原型
void DataSort(int score[], int n);   //DataSort()函数原型
void PrintScore(int score[], int n); //PrintfScore()函数原型
int main()
{
    int score[N], n;
    n = ReadScore(score); //调用函数ReadScore()输入成绩，返回学生人数
    printf("Total students are %d\n", n);
    DataSort(score, n); //调用函数DataSort()进行成绩排序
    printf("Sorted scores:");
    PrintfScore(score, n); //调用函数PrintScore()输出成绩排序结果
    return 0;
}
//函数功能：输入学生某门课的成绩，当输入负值时，结束输入，返回学生人数
int ReadScore(int score[]) //ReadScore()函数定义
{
    int i = -1; //将i初始化为-1，保证循环体内i+1后数组下标从0开始
    do
    {
        i++;
        printf("Input score:");
        scanf("%d", &score[i]);
    } while (score[i] >= 0); //输入负值时结束输入
    return i;                //返回学生人数
}
//函数功能：按选择法将数组score的元素按从高到低排序
void DataSort(int score[], int n) //DataSort()函数定义
{
    int i, j, k, temp;
    for (i = 0; i < n - 1; i++)
    {
        k = i;
        for (j = i + 1; j < n; j++)
        {
            if (score[j] > score[i]) //按数组score的元素值从高到低排序
            {
                k = j;
            }
            if(k!=i)
            {
                temp = score[k];
                score[k] = score[i];
                score[i] = temp;
            }
        }
    }
}
//函数功能：打印学生成绩
void PrintScore(int score[], int n) //PrintfScore()函数定义
{
    int i;
    for (i = 0; i < n; i++)
    {
        printf("%4d", score[i]);
    }
    printf("\n");
}