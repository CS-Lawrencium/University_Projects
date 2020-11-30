#include <stdio.h>
#include <math.h>

int main()
{
    printf("%f\n", (ldexp(1.0, 32) / (365 * 24 * 60 * 60)));

    return 0;
}