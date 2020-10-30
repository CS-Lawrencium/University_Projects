#include <stdio.h>
main()
{
    int x;
    printf("Input number:");
    scanf("%d", &x);
    printf("number of decimal form:%d\n", x);
    printf("    it\'s binary form: ");
    printb(x, sizeof(int) * 8);
    putchar('\n');
}
printb(int x, int n)
{
    if (n > 0)
    {
        putchar('0' + ((unsigned)(x & (1 << (n - 1))) >> (n - 1)));
        printb(x, n - 1);
    }
}
//输入一个数字并将其转为二进制