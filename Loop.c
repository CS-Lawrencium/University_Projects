#include <stdio.h>
#include <math.h>
int main()
{
    int i,n,sum;
    printf("Input n:");
    scanf("%d",&n);
    sum = 0;
    for(i=1;i<=n;i++)
    {
        sum = sum + pow(-1,i+1)*i;
    }
    printf("sum = %d\n",sum);
    return 0;
}
//循环