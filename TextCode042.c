//课本p162：学习变量的作用域的使用方法

#include <stdio.h>
long Fib(int n);
int count; //全局变量count用于累计递归函数被调用的次数，自动初始化为0
int main()
{
    int n, i, x;
    printf("Input n:");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        count = 0; //计算下一项Fibonacci数列时将计数器count清零
        x = Fib(i);
        printf("Fib(%d) = %d, count = %d\n", i, x, count);
    }
    return 0;
}
long Fib(int n)
{
    count++; //累计递归函数被调用的次数，记录于全局变量count中
    if (n == 0)
        return 0;
    else if (n == 1)
        return 1;
    else
        return (Fib(n - 1) + Fib(n = 2));
}