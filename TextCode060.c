//课本p39：从键盘任意输入两个整数，编程实现将其交换后再重新输出。试分析下面的程序能实现这一功能吗？如果不能，该如何修改程序呢？
//*由于&a传给了指针变量x，于是x指向了a，*x就代表了a的内容，同理*y就代表了b的内容，因此在执行函数Swap()时，借助于临时变量temp对*x和*y的值进行互换，就实现了a和b的值互换

#include <stdio.h>
void Swap(int *x, int *y);
int main()
{
    int a, b;
    printf("Please enter a,b:");
    scanf("%d,%d", &a, &b);
    printf("Before swap: a = %d,b = %d\n", a, b); //打印交换前的a和b
    Swap(&a, &b);                                 //模拟按引用调用函数Swap()
    printf("After Swap: a = %d,b = %d\n", a, b);  //打印交换后的a和b
    return 0;
}
void Swap(int *x, int *y)
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}