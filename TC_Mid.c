#include <stdio.h>
#include <stdlib.h>
int mid(int a, int b, int c);
int main()
{
    int a, b, c;
    scanf("%d%d%d", &a, &b, &c);
    printf("The result is %d\n", mid(a, b, c)); //1
    return 0;
}
int mid(int a, int b, int c)
{
    int tmp1 = a, tmp2, tmp3, tmp4;
    if (tmp1 > b) //1
    {
        tmp1 = b;
        tmp2 = a;
        tmp3 = c;
        if (tmp1 > c) //1
        {
            tmp1 = c;
            tmp3 = b;
        }
        if (tmp2 > tmp3) //1
        {
            tmp4 = tmp3;
            tmp3 = tmp2;
            tmp2 = tmp4;
        }
    }
    else //1
    {
        tmp2 = b;
        tmp3 = c;
        if (tmp1 > c) //1
        {
            tmp1 = c;
            tmp3 = a;
        }
        if (tmp2 > tmp3) //1
        {
            tmp4 = tmp3;
            tmp3 = tmp2;
            tmp2 = tmp4;
        }
    }
    return tmp2;
}
//求出三个整数的中间值