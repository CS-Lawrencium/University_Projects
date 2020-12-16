//课本p234：学习按值调用的使用方法
//*普通变量作函数参数的方法，它其实是一种按值调用
//*函数形参值得改变并未影响实参值的改变，这是因为传给函数形参的值只是函数调用语句中实参值的副本，因此，按值调用的方法不能在被调函数中改变其调用语句的实参值

#include <stdio.h>
void Fun(int par);
int main()
{
    int arg = 1;
    printf("arg = %d\n", arg);
    Fun(arg);
    printf("arg = %d\n", arg);
    return 0;
}
void Fun(int par)
{
    printf("par = %d\n", par);
    par = 2;
}