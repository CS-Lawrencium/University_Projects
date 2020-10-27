#include <stdio.h>
void Hnt(int n, char a, char b, char c);
int count;
int main()
{
    count = 1;
    int n;

    printf("Please enter the number of discs:");
    scanf("%d", &n);
    Hnt(n, 'a', 'b', 'c');
    printf("\tTotal:%d\n", count);
    return 0;
}

void Hnt(int n, char a, char b, char c)
{

    if (n == 1)
    {
        printf("%2d-(%2d):%c==>%c\n", count, n, a, b);
        count++;
    }
    else
    {
        Hnt(n - 1, a, c, b);
        printf("%2d-(%2d):%c==>%c\n", count, n, a, c);
        Hnt(n - 1, b, a, c);
        count++;
    }
}
