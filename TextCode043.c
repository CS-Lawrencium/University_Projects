//课本p164：学习数据的生存期的使用方法
//*简单变量作为函数的形参不能实现函数之间的数据交换

#include <stdio.h>
void swap(int a, int b);
int main()
{
    int a, b;
    printf("Input a,b:");
    scanf("%d,%d", &a, &b);
    swap(a, b);
    printf("In main():a = %d,b = %d\n", a, b);
    return 0;
}
void swap(int a, int b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
    printf("In swap():a = %d,b = %d\n", a, b);
}