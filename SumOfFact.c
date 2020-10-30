#include <stdio.h>
long Fact(int n)
{
    int x = 1, i;
    for (i = 1; i <= n; i++)
    {
        x = x * i;
    }
    return x;
}
int main()
{
    long sum = 0;
    int n, i;
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        sum = sum + Fact(i);
    }
    printf("%ld", sum);
    return 0;
}