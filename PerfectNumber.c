#include <stdio.h>
#include <math.h>
int GetPerfect(int x);
int main()
{
    int n;
    printf("Please input n:");
    scanf("%d", &n);
    if (GetPerfect(n))
    {
        printf("Yes!\n");
    }
    else
    {
        printf("No!\n");
    }
    return 0;
}
int GetPerfect(int x)
{
    int i, sum = 0;
    for (i = 1; i < x;i++)
    {
        if(x%i==0)
        {
            sum = sum + i;
        }
    }
    return sum == x ? i : 0;
}
//寻找完美数