#include <stdio.h>
int main()
{  
    int a,b,s;
    char op;
    scanf("%d %c%d",&a,&op,&b);
    s=a%b;
    printf("s=%d",s);
    return 0;
}