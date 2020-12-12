#include <stdio.h>
#define N 20
int main()
{
    int a[N] = {2, 4, 6, 8, 10, 12, 14, 16};
    int n, i, pos;
    printf("Enter n:");
    scanf("%d", &n);
    for (i = 0; n >= a[i]; i++)
        ;
    pos = i;
    for (i = N - 1; i >= pos; i--)
    {
        a[i + 1] = a[i];
    }
    a[pos] = n;
    i = 0;
    while (a[i] != 0)
    {
        printf("%d ", a[i]);
        i++;
    }
    return 0;
}