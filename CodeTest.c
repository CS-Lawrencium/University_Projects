#include <stdio.h>
#include <stdlib.h>
int main()
{
    int a[5],i;
    for(i=0;i<=4;i++)
    {
        printf("Please enter n:");
        scanf("%d",&a[i]);
        if(a[i]<0)
        {
            printf("Program is over!\n");
            break;
        }
        else printf("n = %d\n",a[i]);
    }
    return 0;
}