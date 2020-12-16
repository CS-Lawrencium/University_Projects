//课本p234：学习使用指针的三条准则
//*永远清楚每个指针指向了哪里，指针必须指向一块有意义的内存
//*永远清楚每个指针指向的对象是什么
//*永远不要使用未初始化的指针变量

#include <stdio.h>
int main()
{
    int a = 0, b = 1;
    char c = 'A';
    int *pa, *pb = &b; //在定义指针变量pa和pb的同时，对pb初始化而不对pa初始化
    char *pc = &c;     //在定义指针变量pc的同时对其初始化
    *pa = 9;           //修改指针变量pa所指向的变量的值
    printf("a is %d,&a is %p,pa is %p\n", a, &a, pa);
    printf("b is %d,&b is %p,pa is %p\n", b, &b, pb);
    printf("c is %c,&c is %p,pa is %p\n", c, &c, pc);
    return 0;
}