#include <stdio.h>
#include <stdlib.h>
long counter = 1;
long tower(int n, char A, char B, char C);
int main()
{
    int n;
    char A, B, C;
    printf("Please enter the number of discs:");
    scanf("%d", &n);
    printf("\tTotal:%d\n",tower(n,A,B,C));
    return 0;
}
long tower(int n,char A,char B,char C)
{
    A = 'A';
    B = 'B';
    C = 'C';
    counter = counter + 1;
    if(n==1)
    {
        printf("%2d-(%2d):%c==>%c\n", counter, n, A, B);
    }
    else
    {
        counter = counter + tower(n - 1,A,C,B);
        printf("%2d-(%2d):%c==>%c\n", counter, n, A, C);
        counter = counter + tower(n - 1, B, A, C);
        counter = counter + 1;
    }
    return counter;
}