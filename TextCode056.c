//课本p233：学习简写寻址运算符的使用方法
//*直接按变量名或者变量的地址存取变量的内容的访问方式，称作直接寻址
//*通过指针变量间接存取它所指向的变量的访问方式称作间接寻址
//*间接寻址运算符*可以用来访问指针变量指向的空间，也称为指针的解引用

#include <stdio.h>
int main()
{
    int a = 0, b = 1;
    char c = 'A';
    int* pa = &a, * pb = &b; //在定义指针变量pa和pb的同时对其初始化
    char* pc = &c;          //在定义指针变量pc的同时对其初始化
    *pa = 9;                //修改指针变量pa所指向的变量的值
    printf("a is %d,&a is %p,pa is %p\n", a, &a, pa);
    printf("b is %d,&b is %p,pa is %p\n", b, &b, pb);
    printf("c is %c,&c is %p,pa is %p\n", c, &c, pc);
    return 0;
}