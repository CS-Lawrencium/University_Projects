#include <stdio.h>
#define N 10
void Rearrange(int a[], int n);
int main()
{
    int a[N];
    int i;
    printf("Input %d integer number\n", N);
    for (i = 0; i < N; i++)
    {
        scanf("%d", &a[i]); //2 -5 -89 75 0 -89 0 93 48 0
    }
    Rearrange(a, N);
    for (i = 0; i < N; i++)
    {
        printf("%5d", a[i]);
    }
    printf("\n");
    return 0;
}
void Rearrange(int a[], int n)
{
    int i, j, b[N];
    for (i = 0, j = 0; i < n; i++)
    {
        if (a[i] < 0)
        {
            b[j++] = a[i];
        }
    }
    for (i = 0; i < n; i++)
    {
        if (a[i] == 0)
        {
            b[j++] = a[i];
        }
    }
    for (i = 0; i < n; i++)
    {
        if (a[i] > 0)
        {
            b[j++] = a[i];
        }
    }
    for (i = 0; i < n; i++)
    {
        a[i] = b[i];
    }
}
