//课本p112：深入了解嵌套循环的执行过程

#include <stdio.h>
int main()
{
    int i, j;
    for (i = 0; i < 3; i++)
    {
        printf("i=%d:\n", i);
        for (j = 0; j < 4; j++)
        {
            printf("j=%d", j);
        }
        printf("\n");
    }
    return 0;
}