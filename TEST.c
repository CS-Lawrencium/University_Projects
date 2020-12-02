#include <stdio.h>
#define N 10
int main()
{
    int a[N] = {2, 17, 8, 3, 24, 53, 82, 1, 29, 101};
    int i, j, k, t;
    for (i = 0; i < 9; i++)
    {
        k = i;
        for (j = i + 1; j < 10; j++)
        {
            if (a[j] > a[k])
                k = j;
        }
        if (k != i)
        {
            t = a[k];
            a[k] = a[i];
            a[i] = t;
        }
    }
    for (i = 0; i < 10; i++)
        printf("%d ", a[i]);
    return 0;
}