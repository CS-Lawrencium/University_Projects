#include <stdio.h>
#include <stdlib.h>
int main()
{
    int m;
    int i, j;
    int flag;
    int a[9] = {0};
    for (m = 123; m <= 333; m++)
    {
        flag = 0;

        a[0] = m / 100;
        a[1] = (m % 100) / 10;
        a[2] = m % 10;

        a[3] = (m * 2) / 100;
        a[4] = ((m * 2) % 100) / 10;
        a[5] = (m * 2) % 10;

        a[6] = (m * 3) / 100;
        a[7] = ((m * 3) % 100) / 10;
        a[8] = (m * 3) % 10;

        for (i = 0; i < 9; i++)
        {
            for (j = 0; j < 9; j++)
            {
                if (i != j && a[i] == a[j])
                {
                    flag = 1;
                }
            }
            if (a[i] == 0)
            {
                flag = 1;
            }
        }
        if (flag == 0)
        {
            printf("%d,%d,%d\n", m, m * 2, m * 3);
        }
    }
    return 0;
}