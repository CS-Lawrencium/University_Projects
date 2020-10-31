#include <stdio.h>
 
int main()
{                   
    int x1, x2, i;
    do{                 
        printf("Input x1, x2:\n");
        i = scanf("%d,%d", &x1, &x2);
        if (i!=2)
        {                   
            while (getchar()!='\n') ;//缓冲区
        }
    }while (x1 * x2 >= 0 || i!=2);
    printf("x1=%d,x2=%d\n", x1, x2);
    return 0;