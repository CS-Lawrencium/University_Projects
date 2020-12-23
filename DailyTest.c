#include <stdio.h>
#include <string.h>
void fun(char *s, int n, int *t)
{
    int i, k = 0;
    s[n] = 'a';
    s[n + 1] = '\0';
    while (s[k] != 'a')
        k++;
    if (k == n)
    {
        *t = 0;
    }
    else
    {
        for (i = k; i < n; i++)
        {
            s[i] = s[i + 1];
            s[i + 1] = '\0';
        }
    }
}
int main()
{
    char s[20];
    int len, *t = NULL;
    printf("Input a string:");
    gets(s);
    len = strlen(s);
    fun(s, len, t);
    if (t == 0)
        printf("Not exist!\n");
    else
        printf("Result is:%s\n", s);
    return 0;
}
