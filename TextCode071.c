//课本p296:编写程序，输入一个3行4列的二维数组，然后输出这个二维数组的元素值
//*由于二维数组作函数形参时，必须显式地指定数组第2维(列)的长度，因此程序在第二行定义了一个符号常量N,但需要注意的是,N值应与主函数中定义的二维数组a的第二维(列)长度一致，否则会出现错误

#include <stdio.h>
#define N 4
void InputArray(int (*p)[N], int m, int n);
void OutputArray(int (*p)[N], int m, int n);
int main()
{
    int a[3][4];
    printf("Input 3*4 numbers:\n");
    InputArray(a, 3, 4);  //向函数传递二维数组的第0行的地址
    OutputArray(a, 3, 4); //向函数传递二维数组的第0行的地址
    return 0;
}
void InputArray(int (*p)[N], int m, int n)
{
    int i, j;
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", *(p + i) + j);
            printf("\n");
        }
    }
}
void OutputArray(int (*p)[N], int m, int n)
{
    int i, j;
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("%d", *(p + i) + j);
        }
        printf("\n");
    }
}