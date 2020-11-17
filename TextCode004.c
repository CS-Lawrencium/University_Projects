//课本p19：学习多重赋值语句的使用方法

#include <stdio.h>
int main()
{
    int a, b, c;
    a = b = c = 0;
    a = (b = (c = 0));
    return 0;
}
