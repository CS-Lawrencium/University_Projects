//课本p269：学习从函数返回字符串指针

#include <stdio.h>
#define N 80
char *MyStrcat(char *dstStr, char *srcStr);
int main()
{
    char first[2 * N];
    char second[N];
    printf("Input the first string:");
    gets(first);
    printf("Input the second string:");
    gets(second);
    printf("The result is: %s\n",MyStrcat(first,second));
    return 0;
}
char *MyStrcat(char *dstStr,char *srcStr)
{
    char *pStr = dstStr;
    while(*dstStr!='\0')
    {
        dstStr++;
    }
    for (; *srcStr != '\0';dstStr++,srcStr++)
    {
        *dstStr = *srcStr;
    }
    *dstStr = '\0';
    return pStr;
}