#include <stdio.h>
int main()
{
    int data1, data2;
    char op;
    printf("Please enter an expression:");
    scanf("%d%c%d", &data1, &op, &data2);
    switch (op)
    {
    case '+':
        printf("%d + %d = %d \n", data1, data2, data1 + data2);
        break;
    case '-':
        printf("%d - %d = %d \n", data1, data2, data1 - data2);
        break;
    case '*':
        printf("%d * %d = %d \n", data1, data2, data1 * data2);
        break;
    case '/':
        if (data2 == 0)
            printf("Division by zero!\n");
        else
            printf("%d / %d = %d \n", data1, data2, data1 / data2);
        break;
    default:
        printf("Invalid operator! \n");
    }
    return 0;
}
//课本p50：从键盘输入一个整数计算式，然后计算并输出该计算式的计算结果
//*在用%c格式读入字符时，空格字符和转义字符(包括回车)都会被当作有效字符读入
