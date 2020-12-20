#include <stdio.h>
void movedisc(unsigned n, char fromneedle, char toneedle, char usingneedle);
int i = 0;
int main()
{
    unsigned n;
    printf("Please enter the number of discs:");
    scanf("%d", &n);
    movedisc(n, 'A', 'B', 'C');
    printf("\tTotal:%d\n", i);
    return 0;
}
void movedisc(unsigned n, char fromneedle, char toneedle, char usingneedle)
{
    if (n == 1)
        printf("%2d-(%2d):%c==>%c\n", ++i, n, fromneedle, toneedle);
    else
    {
        movedisc(n - 1, fromneedle, usingneedle, toneedle);
        printf("%2d-(%2d):%c==>%c\n", ++i, n, fromneedle, toneedle);
        movedisc(n - 1, usingneedle, toneedle, fromneedle);
    }
}
//输出汉诺塔问题的解