//课本p26：编程从键盘输入一个三位数，计算并输出该三位数的个位、十位、百位数字之和

#include <stdio.h>
int main()
{
    int x, b1, b2, b3, sum;
    printf("Please input the x:\n");
    scanf("%d", &x);
    b3 = x / 100;             //计算百位数字
    b2 = (x - 100 * b3) / 10; //计算十位数字
    b1 = x % 10;              //计算个位数字
    sum = b1 + b2 + b3;
    printf("sum=%d\n", sum);
    return 0;
}
