//课本p227：学习变量的内存地址
//*可以通过取地址符&获取变量的地址
//*%p格式符，表示输出变量的地址值，这里的地址值使用一个十六进制的无符号横竖表示的，其字长一般与主机的字长相同
//*变量在内存中所占储存空间的首地址，称为该变量的地址，而变量在储存空间中存放的数据，称为变量的值。
//*如果在声明变量时没有给变量赋初值，那么它们的内容就是随机的的，其名字可看成是对程序中储存空间的一种抽象

#include <stdio.h>
int main()
{
    int a = 0,b = 1;
    char c = 'A';
    printf("a is %d,&a is %p\n", a, &a);
    printf("b is %d,&b is %p\n", b, &b);
    printf("c is %c,&c is %p\n", c, &c);
    return 0;
}