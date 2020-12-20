#include <stdio.h>
int ABS(int x)
{
    if(x>=0)
        return x;
    else
        return -x;
}
int main()
{
    int x;
    printf("Hey buddy let's get the right door!\n:");
    scanf("%d", &x);
    printf("The abs of x is : %d", ABS(x));
    return 0;
}
//求x的绝对值！