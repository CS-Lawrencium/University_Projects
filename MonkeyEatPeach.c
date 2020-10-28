#include <stdio.h>
int Peach(int x)
{
    if(x==1)
        return 1;
    else
        return 2 * (Peach(x - 1) + 1);
}
int main()
{
    int x;
    scanf("%d", &x);
    printf("%d", Peach(x));
    return 0;
}