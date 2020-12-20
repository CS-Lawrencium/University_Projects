#include <stdio.h>
int main()
{
    int y, m;
    int a[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    printf("Please enter year,month:");
    scanf("%d,%d", &y, &m);
    if (y % 4 == 0 && y % 100 != 0 || y % 400 == 0)
    {
        printf("%d is leap year\n",y);
        switch (m)
        {
        case 1:
            printf("The season is winter\n");
            printf("The number of days of this month is %d\n", a[m - 1]);
            break;
        case 2:
            printf("The season is winter\n");
            printf("The number of days of this month is %d\n", a[m - 1] + 1);
            break;
        case 3:
            printf("The season is spring\n");
            printf("The number of days of this month is %d\n", a[m - 1]);
            break;
        case 4:
            printf("The season is spring\n");
            printf("The number of days of this month is %d\n", a[m - 1]);
            break;
        case 5:
            printf("The season is spring\n");
            printf("The number of days of this month is %d\n", a[m - 1]);
            break;
        case 6:
            printf("The season is summer\n");
            printf("The number of days of this month is %d\n", a[m - 1]);
            break;
        case 7:
            printf("The season is summer\n");
            printf("The number of days of this month is %d\n", a[m - 1]);
            break;
        case 8:
            printf("The season is summer\n");
            printf("The number of days of this month is %d\n", a[m - 1]);
            break;
        case 9:
            printf("The season is autumn\n");
            printf("The number of days of this month is %d\n", a[m - 1]);
            break;
        case 10:
            printf("The season is autumn\n");
            printf("The number of days of this month is %d\n", a[m - 1]);
            break;
        case 11:
            printf("The season is autumn\n");
            printf("The number of days of this month is %d\n", a[m - 1]);
            break;
        case 12:
            printf("The season is winter\n");
            printf("The number of days of this month is %d\n", a[m - 1]);
            break;
        }
    }
    else
    {
        printf("%d is not leap year\n",y);
        switch (m)
        {
        case 1:
            printf("The season is winter\n");
            printf("The number of days of this month is %d\n", a[m - 1]);
            break;
        case 2:
            printf("The season is winter\n");
            printf("The number of days of this month is %d\n", a[m - 1]);
            break;
        case 3:
            printf("The season is spring\n");
            printf("The number of days of this month is %d\n", a[m - 1]);
            break;
        case 4:
            printf("The season is spring\n");
            printf("The number of days of this month is %d\n", a[m - 1]);
            break;
        case 5:
            printf("The season is spring\n");
            printf("The number of days of this month is %d\n", a[m - 1]);
            break;
        case 6:
            printf("The season is summer\n");
            printf("The number of days of this month is %d\n", a[m - 1]);
            break;
        case 7:
            printf("The season is summer\n");
            printf("The number of days of this month is %d\n", a[m - 1]);
            break;
        case 8:
            printf("The season is summer\n");
            printf("The number of days of this month is %d\n", a[m - 1]);
            break;
        case 9:
            printf("The season is autumn\n");
            printf("The number of days of this month is %d\n", a[m - 1]);
            break;
        case 10:
            printf("The season is autumn\n");
            printf("The number of days of this month is %d\n", a[m - 1]);
            break;
        case 11:
            printf("The season is autumn\n");
            printf("The number of days of this month is %d\n", a[m - 1]);
            break;
        case 12:
            printf("The season is winter\n");
            printf("The number of days of this month is %d\n", a[m - 1]);
            break;
        }
    }
    return 0;
}