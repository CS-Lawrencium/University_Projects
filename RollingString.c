#include <stdio.h>
#include<string.h>
void reverse(char s[])
{                
    int len;
 
    len = strlen(s);
    if (len == 1)
    {                
        printf("%c", s[0]);
    }
    else
    {                
        reverse(s + 1);
        printf("%c", s[0]);
    }
}                
 
int main()
{                
    char s[100];
 
    printf("input your string:\n");
    scanf("%s", s);
    reverse(s);
}       
//反向输出字符串