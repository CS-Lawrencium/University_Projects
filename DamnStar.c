#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n = 4;
    int i, j, sum;
    char ch = '*';
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= 3 * (n - i); j++)
        {
            printf(" ");
        }
        printf("*");
        for (sum = 2 * i - 1; sum >= 2; sum--)
        {
            printf("%3c", ch);
        }
        printf("\n");
    }
    for (i = i - 2; i >= 1; i--)
    {
        for (j = 1; j <= 3 * (n - i); j++)
        {
            printf(" ");
        }
        printf("*");
        for (sum = 2 * i - 1; sum >= 2; sum--)
        {
            printf("%3c", ch);
        }
        printf("\n");
    }
    return 0;
}
//令人恼火的星星输出