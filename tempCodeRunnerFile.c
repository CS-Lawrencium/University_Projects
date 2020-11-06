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
//基础计算器