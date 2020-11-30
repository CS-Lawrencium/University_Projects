//课本p133：学习防范类型溢出的方法
//*i和m被定义为short时，1000000已经超出了其表示范围，所以发生了类型溢出

#include <stdio.h>
int main()
{
    short i, sum = 0;
    for (i = 1;; i++)
    {
        sum = sum + i * i * i;
        if (sum >= 1000000)
            break;
    }
    printf("count = %d\n", i);
    return 0;
}