#include <stdio.h>
#include <string.h>
#define N 40
void MyStrcpy(char *dstStr, char *srcStr);
int main()
{
    char dstStr[N], srcStr[N];
    printf("Please enter a string:\n");
    gets(srcStr);
    MyStrcpy(dstStr, srcStr);
    printf("The copy is:%s", dstStr);
    return 0;
}
void MyStrcpy(char *dstStr, char *srcStr)
{
    while (*srcStr != '\0')
    {
        *dstStr = *srcStr;
        srcStr++;
        dstStr++;
    }
    *dstStr = '\0';
}