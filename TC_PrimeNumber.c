#include <stdio.h>
#include <math.h>
int main()
{
    int n, i, flag = 0;
    printf("Input n:\n");
    scanf("%d", &n);
    if (n > 0 && n != 1)
    {
        for (i = 2; i <= sqrt(n); i++)
        {
            if (n % i == 0)
            {
                flag = 1;
                break;
            }
        }
        if (flag == 0)
            printf("Yes!\n");
        else
            printf("No!\n");
    }
    else
        printf("No!\n");
    return 0;
}
//判断某个数是否是素数