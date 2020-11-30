//课本p88：输入两个整型数，计算并输出两个整数的最大值
//*虽然scanf()不进行参数类型匹配检查，但是通过检验scanf()返回值可以判断输入是否正确

#include <stdio.h>
int main()
{
    int a, b, max, ret;
    printf("Input a,b:");
    ret = scanf("%d,%d", &a, &b);//记录scanf()函数的返回值
    if(ret!=2)//根据scanf()函数返回值，判断输入数据个数或者格式是否错误
    {
        printf("喂，你会不会输入数据啊？\n");
        fflush(stdin);//清除输入缓冲区中的错误数据
    }
    else//此处可以是正确读入数据后应该执行的操作
    {
        max = a > b ? a : b;
        printf("max = %d\n", max);
    }
    return 0;
}
