#include <stdio.h>
int main()
{
    int i;
    float s1 = 2, s2 = 1;
    float x, sum = 0;
    for (i = 1; i <= 20; i++)
    {
        sum += s1 / s2;
        x = s1;
        s1 += s2;
        s2 = x;
    }
    printf("sum = %9.6f\n", sum);
}