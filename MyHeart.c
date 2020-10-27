#include <stdio.h>
int main()
{
    int better,richer,in_health;
    better = richer = in_health = 0;
    if((better||!better)&&(richer||!richer)&&(in_health||!in_health))
        printf("I love you and I won't leave you! ");
    return 0;
}