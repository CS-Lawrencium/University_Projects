//课本p65：学习多分支控制条件语句的使用方法
//*条件语句在语法上只允许每个分支中放置一条语句，若存在超过一条语句，请添加花括号

#include <stdio.h>
int main()
{
    int a, b;
    a = 1;
    b = 2;
    if(a<b)
        printf("b is bigger than a");
    else if(a==b)
        printf("a is equal to b");
    else
        printf("a is bigger than b");
    return 0;
}
