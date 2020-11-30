//课本p151：学习函数防御性程序设计的使用方法
//*此处Fact()函数当中虽然增加了入口参数合法性的检查，当仍未避免错误的输出
//*我们可以在main()函数中添加一个变量ret接收函数Fact()的返回值并进行判断

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
    if(n<0)//增加对函数入口参数合法性的检查
    {
        printf("Input data error!\n");
    }
    else 
    {
        for (i = 2; i <= n;i++)
        {
            result *= i;
            return result;
        }
    }
}