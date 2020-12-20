#include <stdio.h>
int main()
{
    char c;
    c = getchar();
    while (c != '\n')
    {
        putchar(c);
        c = getchar();
    }
    return 0;
}
//君getchar语句本当上手