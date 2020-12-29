#include <stdio.h>
#include <string.h>

int rtrim(char *s)
{
    int i = strlen(s) - 1;

    for (; i >= 0; i--)
        if (s[i] != '\t' && s[i] != ' ' && s[i] != '\n')
            break;
    s[i + 1] = '\0';

    return i;
}

int main()
{
    char str[100];

    printf("请输入一个字符串：");
    gets(str);

    rtrim(str);
    printf("去掉右边的空格后为%s！\n", str);
}