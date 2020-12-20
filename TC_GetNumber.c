#include <stdio.h>
#define N 4
int counter = 1;
int number[N];
void GetNumber(int n);
void OK(int a, int b);
int main()
{
    int n;
    printf("Enter number:");
    scanf("%d", &n);
    GetNumber(n);
    return 0;
}
void GetNumber(int n)
{
    int i, j, temp;
    int Number1, Number2;
    for (i = 3; i >= 0; i--) //取出该四位数每一位数字的值
    {
        number[i] = n % 10;
        n = n / 10;
    }
    for (i = 0; i < 3; i++) //对这四个数字由大到小排序
    {
        for (j = i + 1; j < 4; j++)
        {
            if (number[j] > number[i])
            {
                temp = number[i];
                number[i] = number[j];
                number[j] = temp;
            }
        }
    }
    Number1 = number[0] + 10 * number[1] + 100 * number[2] + 1000 * number[3]; //得出最小四位数
    Number2 = number[3] + 10 * number[2] + 100 * number[1] + 1000 * number[0]; //得出最大四位数
    OK(Number1, Number2);
}
void OK(int Number1, int Number2)
{
    int delta;
    delta = Number2 - Number1;
    if (delta != 6174)
    {
        printf(" [%d]:%d-%d=%d\n", counter, Number2, Number1, delta);
        counter++;
        GetNumber(delta);
    }
    if (delta == 6174)
        printf(" [%d]:%d-%d=%d\n", counter, Number2, Number1, delta);
}