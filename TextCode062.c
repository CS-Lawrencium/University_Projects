//课本p259：学习字符串的访问和输入/输出
//*对于数组名str，不能使用str++操作使其指向的字符串中的某个字符，因为数组名是一个地址常量，其值是不能被改变的
//*用%d输入数字或%s输入字符时，忽略空格、回车或制表符等空白字符，因此用scanf()按s格式符不能输入带空格的字符串

#include <stdio.h>
#define N 12
int main()
{
    char name[N];
    printf("Enter your name:");
    scanf("%s", name);
    printf("Hello! %s ", name);
    scanf("%s", name);//读取输入缓冲区中余下的上次未被读走的字符
    printf("%s!\n", name);
    return 0;
}