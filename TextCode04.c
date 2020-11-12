#include <stdio.h>
int main()
{
    int a, b, c;
    a = b = c = 0;
    a = (b = (c = 0));
    return 0;
}
//课本p19：如何使用多重赋值语句