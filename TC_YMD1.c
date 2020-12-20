#include <stdio.h>
#include <stdlib.h>
#define END -1
long Factorial(int x);
int main()
{
    int x;
    while (1)
    {
        printf("input x:");
        scanf("%d", &x);
        if (x <= END)
        {
            exit(0);
        }
        else
            printf("%d! = %d\n", x, Factorial(x));
    }
    return 0;
}

long Factorial(int x)
{
    int i;
    int result = 1;

    for (i = 1; i <= x; i++)
    {
        result = result*i;
    }
    return result;
}