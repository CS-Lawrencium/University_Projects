#include <stdio.h>
#define N 14
int main()
{
    int card1[N], card2[N], temp, i, j,sum; 
    for (i = 1; i <= 13; i++)
    {
        card1[i] = i;    //第i张牌的值就是i
        card2[sum % 13] = i;
        temp = card1[i]; //将牌值赋值给交换变量temp
        for (j = i; j < 13; j++)
        {
            card1[j] = card1[j + 1];
        }
        card1[j] = temp;
        sum = sum + i;
    }
    for (i = 1; i <= 13; i++)
        printf("%d ", card2[i]);
    return 0;
}