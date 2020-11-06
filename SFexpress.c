#include <stdio.h>
int main()
{
    int area;
    float price, weight;
    scanf("%d,%f", &area, &weight);
    switch (area)
    {
    case 0:
        if (weight != (int)weight)
            price = 10 + 3 * (int)weight;
        else
            price = 10 + 3 * (weight - 1);
        printf("Price: %5.2f\n", price);
        break;
    case 1:
        if (weight != (int)weight)
            price = 10 + 4 * (int)weight;
        else
            price = 10 + 4 * (weight - 1);
        printf("Price: %5.2f\n", price);
        break;
    case 2:
        if (weight != (int)weight)
            price = 15 + 5 * (int)weight;
        else
            price = 15 + 5 * (weight - 1);
        printf("Price: %5.2f\n", price);
        break;
    case 3:
        if (weight != (int)weight)
            price = 15 + 6.5 * (int)weight;
        else
            price = 15 + 6.5 * (weight - 1);
        printf("Price: %5.2f\n", price);
        break;
    case 4:
        if (weight != (int)weight)
            price = 15 + 10 * (int)weight;
        else
            price = 15 + 10 * (weight - 1);
        printf("Price: %5.2f\n", price);
        break;
    default:
        printf("Error in Area\n");
    }
    return 0;
}