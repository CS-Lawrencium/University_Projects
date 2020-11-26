#include <stdio.h>
int main()
{
    int a, b, i;

    for (i = 1; i <= 99; i++)
    {
        a = (i * i / 10) % 10;
        b = (i * i) % 10;
        if (i < 10)
        {
            if (i == b)
                printf("m=%3d\t\tm*m=%6d\n", i, i * i);
        }
        else
        {
            if (a * 10 + b == i)
                printf("m=%3d\t\tm*m=%6d\n", i, i * i);
        }
    }
    return 0;
}