#include <stdio.h>
#define N 10
int main()
{
    int a[N] = {0};
    int n, i, j, ret = 0;
    printf("Enter a number :");
    scanf("%d", &n);
    do
    {
        a[i] = n % 10;
        n = n / 10;
        i++;
    } while (n / 10 != 0);
    a[i] = n % 10;
    for (i = 0; i < N - 1; i++)
    {
        for (j = i + 1; j < N;j++)
        {
            if (a[j] == a[i])
                ret = 1;
        }
    }
    if (ret == 1)
        printf("Repeated digit\n\n");
    else
        printf("No Repeated digit\n\n");
    return 0;
}