#include <stdio.h>
int GetMax(int x,int y)
{
    if(x>y)
    return x;
    else return y;
}
int main()
{
    int a,b;
    scanf("%d,%d",&a,&b);
    printf("max = %d\n", GetMax(a,b));
    return 0;
}
//无内鬼，输出两者之间的最大值！陆玉勋，我的超人！
