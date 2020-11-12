#include <stdio.h>
int main()
{
    int n,m,a,b;
    n = 3;
    m = n++;
    a = 3;
    b = ++a;
    printf("m=%d", m);
    printf("b=%d", b);
    return 0;
}
//课本p28：比较前缀运算符和后缀运算符的差异