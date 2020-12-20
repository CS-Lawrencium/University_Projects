//课本p260：学习字符串处理函数get()的使用方法
//*使用字符串处理函数gets()，可以输入带空格的字符串，因为空格和制表符都是字符串的一部分

#include <stdio.h>
#define N 12
int main()
{
    char name[N];
    printf("Enter your name:");
    gets(name);
    printf("Hello %s!\n", name);
    return 0;
}