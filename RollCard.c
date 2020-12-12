#include <stdio.h>

int main()
{
    int cards[14] = {0};//全部初始化为0
    int i, j = 1, n;
    for (i = 1; i <= 13; i++) //表示抽牌过程共计有13次
    {
        n = 1;
        do
        {
            if (j > 13)       //当j>13时，重开
                j = 1;        
            if (cards[j] > 0) //当cards[j]存在数据时，下一个
                j++;          
            else
            {
                if (n == i)       //满足题目要求时
                    cards[j] = i; //赋值！
                j++;
                n++;
            }
        } while (n <= i); //1
    }
    for (i = 1; i <= 13; i++)
        printf("%d ", cards[i]);
    printf("\n");
    return 0;
}