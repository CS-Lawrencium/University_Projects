#include <stdio.h>
#define N 10
int main()
{
    int a[N], b[N] = {0};
    int i, j, k, temp, counter = 0;
    for (i = 0; i < 10; i++)
    {
        scanf("%d", &a[i]); //3 12 7 65 8 4 17 25 36 50
    }
    for (i = 0; i < 10; i++) //扫描奇数项
    {

        if (a[i] % 2 == 1)
        {
            b[counter] = a[i];
            counter++;
        }
    }
    k = counter;
    for (i = 0; i < k - 1; i++) //对奇数项排序
    {
        for (j = i + 1; j < k; j++)
        {
            if (b[j] < b[i])
            {
                temp = b[i];
                b[i] = b[j];
                b[j] = temp;
            }
        }
    }
    for (i = 0; i < 10; i++)
    {
        if (a[i] % 2 == 0)
        {

            b[counter] = a[i];
            counter++;
        }
    }
    for (i = k; i < N - 1; i++)
    {
        for (j = i + 1; j < N; j++)
        {
            if (b[j] < b[i])
            {
                temp = b[i];
                b[i] = b[j];
                b[j] = temp;
            }
        }
    }
    for (i = 0; i < 10; i++)
    {
        printf("%d,", b[i]);
        if (i == 9)
            printf("\n");
    }
    return 0;
}