#include <stdio.h>
int main()
{
    float x, y;
    printf("Enter value of trade:");
    scanf("%f", &x);
    if (x <= 2500)
    {
        y = 30 + 0.017 * x;
        if (y <= 39)
            y = 39;
        printf("Commission: $%.2f\n", y);
    }
    else if (x > 2500 && x <= 6250)
    {
        y = 56 + 0.0066 * x;
        printf("Commission: $%.2f\n", y);
    }
    else if (x > 6250 && x < 20000)
    {
        y = 76 + 0.0034 * x;
        printf("Commission: $%.2f\n", y);
    }
    else if (x > 20000 && x <= 50000)
    {
        y = 100 + 0.0022 * x;
        printf("Commission: $%.2f\n", y);
    }
    else if (x > 50000 && x < 500000)
    {
        y = 100 + 0.0011 * x;
        printf("Commission: $%.2f\n", y);
    }
    else
    {
        y = 255 + 0.0009 * x;
        printf("Commission: $%.2f\n", y);
    }
    return 0;
}