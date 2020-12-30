#include <stdio.h>
typedef struct date
{
    int year;
    int month;
    int day;
} DATE;
int main()
{
    int i, sum;
    DATE time;
    printf("请输入日期（年，月，日）\n");
    scanf("%d,%d,%d", &time.year, &time.month, &time.day);
    int A[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int B[12] = {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    sum = time.day;
    for (i = 0; i < time.month - 1; i++)
    {
        if (time.year % 4 == 0 && time.year % 100 != 0 || time.year % 400 == 0)
        {
            sum += B[i];
        }
        else
            sum += A[i];
    }
    printf("%d月%d日是%d年的第%d天\n", time.month, time.day, time.year, sum);
    return 0;
}