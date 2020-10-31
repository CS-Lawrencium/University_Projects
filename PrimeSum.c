#include <stdio.h>
#include <math.h>
unsigned int InputNumber(char ch);
int PrimeSum(int m, int n);
int main()
{
    int m = 0, n = 0, sum = 0, i = 0;
    do
    {
        m = InputNumber('m');
        n = InputNumber('n');
    } while (m > n && printf("n must be not smaller than m! Input again!\n"));
    sum = PrimeSum(m, n);
    printf("sum of prime numbers:%d", sum);
    return 0;
}
unsigned int InputNumber(char ch)
{
    int ret, x;
    do
    {
        printf("Please input the number %c(>1):", ch);
        scanf("%d", &x);
        ret = scanf("%d", &x);
        if((x <= 1) || (ret != 1))
        while(getchar()!='\n');
    } while ((x <= 1) || (ret != 1));
    while(getchar()!='\n');
    return x;
}
int PrimeSum(int m, int n)
{
    int k, i, flag, sum = 0; //k为m~n之间的一个整数
    for (k = m; k <= n; k++)
    {
        if(k = 2)
        flag = 1;
        for (i = 2; i <= sqrt(k); i++)
        {
            if (k % i != 0)
            {
                flag = 1;
            }
        }
        if (flag == 1)
            {
                sum = sum + k;
            }
    }
    return sum;
}