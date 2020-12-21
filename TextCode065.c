//课本262：学习fgets(name,sizeof(name),stdin)函数的使用方法
//*函数gets()不能限制输入字符串的长度，很容易引起缓冲区溢出，从而给黑客攻击以可乘之机，而scanf()也存在这个问题
//*使用fgets(name,sizeof(name),stdin)函数能限制输入字符串长度的函数，这将更有利于涉及安全可靠的程序

#include <stdio.h>
#define N 12
int main()
{
    char name[N];
    printf("Enter your name");
    fgets(name, sizeof(name), stdin); //限制输入字符串长度不超过数组大小
    printf("Hello %s!\n", name);
    return 0;
}