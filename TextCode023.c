//课本p72：使用switch语句实现简单的计算器功能
//*两数相除之前，请检查除数是否为零，以避免"除零错误"

#include <stdio.h>
int main()
{
    int data1, data2;
    char op;
    printf("Please enter an expression:");
    scanf("%d%c%d", &data1, &op, &data2);
    switch (op)//根据输入的运算符确定执行的运算
    {
    case '+'://加法运算
        printf("%d + %d = %d \n", data1, data2, data1 + data2);
        break;
    case '-'://减法运算
        printf("%d - %d = %d \n", data1, data2, data1 - data2);
        break;
    case '*'://乘法运算
        printf("%d * %d = %d \n", data1, data2, data1 * data2);
        break;
    case '/'://除法运算
        if (data2 == 0)//避免除零错误，检验除数是否为零
            printf("Division by zero!\n");
        else
            printf("%d / %d = %d \n", data1, data2, data1 / data2);
        break;
    default:
        printf("Invalid operator! \n");
    }
    return 0;
}
