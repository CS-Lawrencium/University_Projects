#include <stdio.h>
#include <math.h>
#include <stdlib.h>
long Fact(int n)
{
    int i;
    long result = 1;
    for (i = 2; i <= n;i++)
    {
        result = result * i;
    }
    return result;
}
void clear()
{
    while(getchar()!='\n');
}
int main()
{
    int a, b;
    long G;
    printf("Please input a and b:\n");
    while(!((scanf("%d,%d", &a, &b) == 2) && (a >= b)))
    {
       clear();
    }
    G = Fact(a) / (Fact(b) * Fact(a - b));
    printf("%ld", G);
    return 0;
}
