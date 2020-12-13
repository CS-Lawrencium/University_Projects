//课本p208：学习键值的使用方法

#include <stdio.h>
#define N 40
int ReadScore(int score[], long num[]);          //ReadScore()函数原型
void DataSort(int score[], long num[], int n);   //DataSort()函数原型
void PrintScore(int score[], long num[], int n); //PrintScore()函数原型
int main()
{
    int score[N], n;
    long num[N];
    n = ReadScore(score, num); //输入成绩和学号，返回学生总数
    printf("Total students are %d\n", n);
    DataSort(score, num, n); //成绩排序
    printf("Sorted scores:\n");
    PrintScore(score, num, n); //输出成绩排序结果
    return 0;
}
//函数功能：输入学生的学号及其某门课成绩，当输入负值时，结束输入，返回学生人数
int ReadScore(int score[], long num[]) //ReadScore()函数定义
{
    int i = -1; //i初始化为-1，可保证循环体内i增1后数组下边从0开始
    do
    {
        i++;
        printf("Input student's ID and score:");
        scanf("%ld%d", &num[i], &score[i]); //以长整型格式输入学号
    } while (num[i] > 0 && score[i] >= 0);  //输入负值时结束成绩输入
    return i;                               //返回学生总数
}
//函数功能：用选择法按score数组元素的降序顺序对score和num排序
void DataSort(int score[], long num[], int n) //DataSort()函数定义
{
    int i, j, k, temp1;
    long temp2;
    for (i = 0; i < n - 1; i++)
    {
        k = i;
        for (i = j + 1; j < n; j++)
        {
            if (score[j] > score[k]) //按数组score的元素值从高到低排序
            {
                k = j; //记录最大数下标位置
            }
        }
        if (k != i) //若最大数不在下标位置i
        {
            //交换成绩
            temp1 = score[k];
            score[k] = score[i];
            score[i] = temp1;
            //交换学号
            temp2 = num[k];
            num[k] = num[i];
            num[i] = temp2;
        }
    }
}
//函数功能：打印学生学号和成绩
void PrintfScore(int score[], long num[], int n) //PrintScore()定义
{
    int i;
    for (i = 0; i < n; i++)
    {
        printf("%10ld%4d\n", num[i], score[i]); //以长整型格式打印学号
        
    }
}