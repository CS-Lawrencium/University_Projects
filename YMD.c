#include <stdio.h>
int main()
{
    int a, b, c, d = 0;
    printf("\nplease input year,month,day\n");
    scanf("%d,%d,%d", &a, &b, &c);
    if (a % 4 == 0 && a % 100 != 0 || a % 100 == 0)
    {
        switch (b)
        {
        case 1:
        {
            d = d + 0;
            if (c >= 0 && c <= 31)
                printf("It is the %dth day.", d + c);
            else
                printf("data error");
            break;
        }
        case 2:
        {
            d = d + 31;
            if (c >= 0 && c <= 29)
                printf("It is the %dth day.", d + c);
            else
                printf("data error");
            break;
        }
        case 3:
        {
            d = d + 31 + 29;
            if (c >= 0 && c <= 31)
                printf("It is the %dth day.", d + c);
            else
                printf("data error");
            break;
        }
        case 4:
        {
            d = d + 31 + 29 + 31;
            if (c >= 0 && c <= 30)
                printf("It is the %dth day.", d + c);
            else
                printf("data error");
            break;
        }
        case 5:
        {
            d = d + 31 + 29 + 31 + 30;
            if (c >= 0 && c <= 31)
                printf("It is the %dth day.", d + c);
            else
                printf("data error");
            break;
        }
        case 6:
        {
            d = d + 31 + 29 + 31 + 30 + 31;
            if (c >= 0 && c <= 30)
                printf("It is the %dth day.", d + c);
            else
                printf("data error");
            break;
        }
        case 7:
        {
            d = d + 31 + 29 + 31 + 30 + 31 + 30;
            if (c >= 0 && c <= 31)
                printf("It is the %dth day.", d + c);
            else
                printf("data error");
            break;
        }
        case 8:
        {
            d = d + 31 + 29 + 31 + 30 + 31 + 30 + 31;
            if (c >= 0 && c <= 31)
                printf("It is the %dth day.", d + c);
            else
                printf("data error");
            break;
        }
        case 9:
        {
            d = d + 31 + 29 + 31 + 30 + 31 + 30 + 31 + 31;
            if (c >= 0 && c <= 30)
                printf("It is the %dth day.", d + c);
            else
                printf("data error");
            break;
        }
        case 10:
        {
            d = d + 31 + 29 + 31 + 30 + 31 + 30 + 31 + 31 + 30;
            if (c >= 0 && c <= 31)
                printf("It is the %dth day.", d + c);
            else
                printf("data error");
            break;
        }
        case 11:
        {
            d = d + 31 + 29 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31;
            if (c >= 0 && c <= 30)
                printf("It is the %dth day.", d + c);
            else
                printf("data error");
            break;
        }
        case 12:
        {
            d = d + 31 + 29 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31 + 30;
            if (c >= 0 && c <= 31)
                printf("It is the %dth day.", d + c);
            else
                printf("data error");
            break;
        }
        default:
            printf("data error");
        }
    }
    else
    {
        switch (b)
        {
        case 1:
        {
            d = d + 0;
            if (c >= 0 && c <= 31)
                printf("It is the %dth day.", d + c);
            else
                printf("data error");
            break;
        }
        case 2:
        {
            d = d + 31;
            if (c >= 0 && c <= 28)
                printf("It is the %dth day.", d + c);
            else
                printf("data error");
            break;
        }
        case 3:
        {
            d = d + 31 + 28;
            if (c >= 0 && c <= 31)
                printf("It is the %dth day.", d + c);
            else
                printf("data error");
            break;
        }
        case 4:
        {
            d = d + 31 + 28 + 31;
            if (c >= 0 && c <= 30)
                printf("It is the %dth day.", d + c);
            else
                printf("data error");
            break;
        }
        case 5:
        {
            d = d + 31 + 28 + 31 + 30;
            if (c >= 0 && c <= 31)
                printf("It is the %dth day.", d + c);
            else
                printf("data error");
            break;
        }
        case 6:
        {
            d = d + 31 + 28 + 31 + 30 + 31;
            if (c >= 0 && c <= 30)
                printf("It is the %dth day.", d + c);
            else
                printf("data error");
            break;
        }
        case 7:
        {
            d = d + 31 + 28 + 31 + 30 + 31 + 30;
            if (c >= 0 && c <= 31)
                printf("It is the %dth day.", d + c);
            else
                printf("data error");
            break;
        }
        case 8:
        {
            d = d + 31 + 28 + 31 + 30 + 31 + 30 + 31;
            if (c >= 0 && c <= 31)
                printf("It is the %dth day.", d + c);
            else
                printf("data error");
            break;
        }
        case 9:
        {
            d = d + 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31;
            if (c >= 0 && c <= 30)
                printf("It is the %dth day.", d + c);
            else
                printf("data error");
            break;
        }
        case 10:
        {
            d = d + 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + 30;
            if (c >= 0 && c <= 31)
                printf("It is the %dth day.", d + c);
            else
                printf("data error");
            break;
        }
        case 11:
        {
            d = d + 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31;
            if (c >= 0 && c <= 30)
                printf("It is the %dth day.", d + c);
            else
                printf("data error");
            break;
        }
        case 12:
        {
            d = d + 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31 + 30;
            if (c >= 0 && c <= 31)
                printf("It is the %dth day.", d + c);
            else
                printf("data error");
            break;
        }
        default:
            printf("data error");
        }
    }
    return 0;
}
//NMSL