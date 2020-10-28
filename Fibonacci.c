#include <stdio.h>
long f(int x);
int main()
{
    int x;
    printf("Please input the x:\n");
    scanf("%d", &x);
    printf("%d", f(x));
    return 0;
}
long f(int x)
{
    if(x==0)
        return 0;
    else if(x==1)
        return 1;
    else
        return f(x - 1) + f(x - 2);
}