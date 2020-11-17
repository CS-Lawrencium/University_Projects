//课本p88：输入两个整型数，计算并输出两个整数的最大值
//*虽然scanf()不进行参数类型匹配检查，但是通过检验scanf()返回值可以判断输入是否正确

#include <stdio.h>
int main()
{
    int a, b, max, ret;
    printf("Input a,b:");
    ret = scanf("%d,%d", &a, &b);
    if(ret!=2)
    {
        printf("喂，你会不会输入数据啊？\n");
        fflush(stdin);
    }
    else
    {
        max = a > b ? a : b;
        printf("max = %d\n", max);
    }
    return 0;
}
