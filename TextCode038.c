//课本p146：编写main()函数，调用函数Fact()来计算m!。其中m的值由用户从键盘输入
//*在函数定义的前面写上一段注释来描述函数的功能及其形参，是一个非常好的编程习惯
//*函数的返回值只能有一个，函数的返回值类型可以是除数组以外的任何类型
//*main()函数是由系统调用的，使得C程序在main()函数开始执行，在main()函数结束执行

#include <stdio.h>
long Fact(int n);
int main()
{
    int m;
    long ret;
    printf("Input m:");
    scanf("%d", &m);
    ret = Fact(m);
    printf("%d! = %ld\n", m, ret);
    return 0;
}
long Fact(int n)
{
    int i;
    long result = 1;
    for (i = 2; i <= n; i++)
    {
        result *= i;
    }
    return result;
}