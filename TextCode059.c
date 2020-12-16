//课本p235：学习模拟按引用调用的使用方法
//*尽管可以利用return语句从被调函数返回被修改的形参值，但return仅限于从函数返回一个值，需要从函数返回多个值时，依然需要使用按引用调用的方法

#include <stdio.h>
void Fun(int *par);
int main()
{
    int arg = 1;
    printf("arg = %d\n", arg);
    Fun(&arg); //传递变量arg的地址值给函数
    printf("arg = %d\n", arg);
    return 0;
}
void Fun(int *par)
{
    printf("Par = %d\n", *par); //输出形参指向的变量的值
    *par = 2;                   //改变形参指向的变量的值
}