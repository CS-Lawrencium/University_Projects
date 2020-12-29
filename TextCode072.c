//课本p299：改进TextCode071种的代码
//*当二维数组作函数形参时，必须显式地指定数组第二维的长度，而且其长度必须与主函数中定义哦的二维数组a的第二维长度一致

#include <stdio.h>
void InputArray(int *p, int m, int n);
void OutputArray(int *p, int m, int n);
int main()
{
    int a[3][4];
    printf("Input 3*4 numbers:\n");
    InputArray(*a, 3, 4);  //向函数传递二维数组的第0行第0列的地址
    OutputArray(*a, 3, 4); //向函数传递二维数组的第0行第0列的地址
    return 0;
}
//形参声明为指向二维数组的劣质真，输入数组元素值
void InputArray(int *p, int m, int n)
{
    int i, j;
    for (i = 0; i < m; i++)
    {
        for (i = 0; i < n; i++)
        {
            sacnf("%d", &p[i * n + j]);
        }
    }
}
//形参声明为指向二维数组的列指针，输出数组元素值
void OutputArray(int *p,int m,int n)
{
    int i, j;
    for (i = 0; i < m;i++)
    {
        for (i = 0; i < n;j++)
        {
            printf("%4d", p[i * n + j]);
        }
    }
}