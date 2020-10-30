#include <stdio.h>
int main()
{
    int flag;
    char x;
    x = getchar();
    if ((x >= 65 && x <= 90) || (x >= 97 && x <= 122) || (x == '_'))
    {
        do
        {
            if ((x >= 65 && x <= 90) || (x >= 97 && x <= 122) || (x == '_') || (x >= 48 && x <= 57))
                flag = 1;
            else
            {
                flag = 0;
                break;
            }
        } while ((x = getchar()) != '\n');
        if (flag == 1)
            printf("is\n");
        else
            printf("is not\n");
    }
    else
        printf("is not\n");
    return 0;
}