#include <stdio.h>
int main()
{
    char ch;
    ch = getchar();
    while ((ch = getchar()) != 'a')
    {
        printf("%c",ch);
    }
    return 0;
}
//输出基本字符