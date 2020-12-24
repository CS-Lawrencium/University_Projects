#include <stdio.h>
void bubble(int data[], int n);
#define LEN 10
int main()
{
    int data[LEN], i;
    for (i = 0; i < LEN; i++)
    {
        scanf("%d", data[i]);
    }
    printf("\n");
    bubble(data, LEN);
    for (i = 0; i < LEN; i++)
    {
        printf("%8d", data[i]);
    }
    return 0;
}

void bubble(int data[], int n)
{
    int i, j, temp;
    for (i = 0; i < n; i++)
    {
        for (j = n - 1; j >= 0; j--)
        {
            if (data[j] < data[j - 1])
            {
                temp = data[i - 1]; //zcfu
                data[i] = data[i - 1];
                data[i - 1] = temp;
            }
        }
    }
}
