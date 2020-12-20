#include <stdio.h>//编译预处理指令
int main()//声明返回值
{
    int i,j;//不会有人这个都不知道吧？

    for(i=1;i<=9;i++)//①输出正方形九九乘法表
    {
        for(j=1;j<=9;j++)//此处不需要额外的赋值
        {
            printf("%d*%d=%2d\t",i,j,i*j);
        }
        printf("\n");
    }

printf("\n");//换行

    for(i=1;i<=9;i++)//②输出左上角九九乘法表
    {
        for(j=i;j<=9;j++)//需要将i的值赋予j
        {
            printf("%d*%d=%2d\t",i,j,i*j);
        }
        printf("\n");
    }

printf("\n");//换行

    for(i=1;i<=9;i++)//③输出右上角九九乘法表
    {
        for(j=1;j<=9;j++)
        {
            for(;i>j;)//此处需要填入新的循环以判断
            {
                printf("\t");
                j++;
            }
            printf("%d*%d=%2d\t",i,j,i*j);
        }
        printf("\n");
    }

printf("\n");//换行

    for(i=1;i<=9;i++)//④输出左下角九九乘法表
    {
        for(j=1;j<=i;j++)//判断条件在for循环中已经标定
        {
            printf("%d*%d=%2d\t",i,j,i*j);
        }
        printf("\n");
    }

printf("\n");

    for(i=1;i<=9;i++)// ⑤输出右下角九九乘法表
    {
        for(j=1;j<=9-i;j++)//用Tab补位到右上角
        {
            printf("\t");
        }
        for(j=1;j<=i;j++)//开始循环
        {
            printf("%d*%d=%2d\t",i,j,i*j);
        }
        printf("\n");
    }

    return 0;
}
//九九乘法表相关