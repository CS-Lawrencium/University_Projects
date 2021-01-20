#include <stdio.h>
#include <string.h>
#define N 20
char *MyStrcat(char *dstStr, char *srcStr);
int main()
{
    char str1[2 * N], str2[N];
    printf("Enter string 1:");
    gets(str1);
    printf("Enter string 2:");
    gets(str2);
    MyStrcat(str1, str2);
    printf("a+b=%s\n", str1);
    return 0;
}
char *MyStrcat(char *dstStr, char *srcStr)
{
    char *pStr = dstStr; //保存字符串dstStr的首地址
    //将指针移到字符串dstStr的末尾
    while (*dstStr != '\0' && *dstStr != ' ')
    {
        dstStr++;
    }
    //将字符串srcStr复制到字符串dstStr的后面
    for (; *srcStr != '\0'; dstStr++, srcStr++)
    {
        *dstStr = *srcStr;
    }
    *dstStr = '\0'; //在连接后的字符串的末尾添加字符串结束标志
    return pStr;    //返回连接后的字符串dstStr的首地址
}