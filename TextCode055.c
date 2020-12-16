//课本p230：学习指针变量的定义和初始化
//*存放变量的地址需要一种特殊的变量，这种特殊的数据类型就是指针
//*具有指针类型的变量称为指针变量，它是专门用于储存变量和地址值的变量，定义形式为：类型关键字 *指针变量名;
//*指针变量未被初始化意味着指针变量的值是一个随机值，这很有可能导致错误的出现，所以指针变量应用NULL进行初始化
//*指针变量只能指向同一基类型的变量，否则将会引起错误警告：assignment from incompatible pointer type
//*此处变量声明语句中的星号*只是一个指针类型说明符，不是间接寻址运算符

#include <stdio.h>
int main()
{
    int a = 0, b = 1;
    char c = 'A';
    int *pa = NULL, *pb = NULL; //定义指针变量并用NULL对其初始化
    char *pc = NULL;            //定义指针变量并用NULL对其初始化
    pa = &a;                    //初始化指针变量pa，使其指向a
    pb = &b;                    //初始化指针变量pb，使其指向b
    pc = &c;                    //初始化指针变量pc，使其指向c
    printf("a is %d,&a is %p,pa is %p\n", a, &a, pa);
    printf("b is %d,&b is %p,pa is %p\n", b, &b, pb);
    printf("c is %c,&c is %p,pa is %p\n", c, &c, pc);
    return 0;
}