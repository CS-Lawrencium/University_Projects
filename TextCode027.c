//课本p106：学习while循环和do-while循环的使用方法
//*当第一次测试循环条件就为假时，while语句不会执行循环
//*当第一次测试循环条件就为假时，do-while语句会至少执行一次循环

#include <stdio.h>
int main()
{
    int n = 101;
    while(n<100)
    {
        printf("n = %d\n", n);
        n++;
    }
    //n的初值不小于100，循环一次也不执行
    do
    {
        printf("n = %d\n", n);
        n++;
    } while (n<100);
    //n的初值不小于100，但循环至少执行一次
    return 0;
}