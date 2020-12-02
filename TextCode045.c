//课本p194：学习二维数组的定义和初始化
//*一维数组在内存中占用的字节数为：数组长度*sizeof(基类型)
//*二维数组在内存中占用的字节数为：第一维长度*第二维长度*sizeof(基类型)
//*数组第二维的长度声明永远都不能省略

#include <stdio.h>
int main()
{
    short matrix[3][4] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int i, j;
    for (i = 0; i < 3;i++)
    {
        for (j = 0; j < 4;j++)
        {
            printf("%d\t", matrix[i][j]);
            if(j==3)
                printf("\n");
        }
    }
    return 0;
}