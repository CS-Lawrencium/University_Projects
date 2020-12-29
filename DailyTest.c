#include <stdio.h>
#include <string.h>
#define N 7
int main()
{
    char str[N];
    int i = 0, counter = 0;
    printf("Input your password:\n");
    while (i < 6 && counter < 6)
    {
        scanf("%c", &str[i]);
        getchar();
        if (str[i] >= 48 && str[i] <= 57)
        {
            counter++;
            printf("%c, you have enter %d-bits number\n", str[i], counter);
            i++;
        }
        else
            printf("error\n");
    }
    return 0;
}
