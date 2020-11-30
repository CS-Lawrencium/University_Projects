#include <stdio.h>
#define STUD 30  /* 最多可能的学生人数 */
#define COURSE 5 /* 最多可能的考试科目数 */
void Input(int *pScore, int m, int n);
void Total(int *pScore, int sum[], float aver[], int m, int n);
void Print(int *pScore, int sum[], float aver[], int m, int n);
int main()
{
    int m, n, score[STUD][COURSE], sum[STUD];
    float aver[STUD];
    printf("How many students?");
    scanf("%d", &m);
    printf("How many courses?");
    scanf("%d", &n);
    Input(*score, m, n);
    Total(*score, sum, aver, m, n);
    Print(*score, sum, aver, m, n);
    return 0;
}
/*函数功能：连续输入m*n个整数存入起始地址为pScore的连续内存单元中 */
void Input(int *pScore, int m, int n)
{
    int i, j;
    printf("Input scores:\n");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", &pScore[i * n + j]);
        }
    }
}
/* 函数功能：计算起始地址为pScore的连续内存中存储的m*n个数组元素值的平均值 */
void Total(int *pScore, int sum[], float aver[], int m, int n)
{
    int i, j;
    for (i = 0; i < m; i++)
    {
        sum[i] = 0;
        for (j = 0; j < n; j++)
        {
            sum[i] = sum[i] + pScore[i * n + j];
        }
        aver[i] = (float)sum[i] / n;
    }
}
/* 函数功能：打印起始地址为pScore的连续内存单元中存储的m*n个数组元素值 */
void Print(int *pScore, int sum[], float aver[], int m, int n)
{
    int i, j;
    printf("Result:\n");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("%4d\t", pScore[i * n + j]);
        }
        printf("%5d\t%6.1f\n", sum[i], aver[i]);
    }
}
