#include <stdio.h>

int main()
{
    int cards[14] = {0};
    int i, j = 1, n;
    for (i = 1; i <= 13; i++) //1
    {
        n = 1;
        do
        {
            if (j > 13)       //1
                j = 1;        //1
            if (cards[j] > 0) //1
                j++;          //1
            else
            {
                if (n == i)       //1
                    cards[j] = i; //1
                j++;
                n++;
            }
        } while (n <= i); //1
    }
    for (i = 1; i <= 13; i++)
        printf("%d ", cards[i]);
    printf("\n");

    return 0;
}