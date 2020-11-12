#include <stdio.h>
int main()
{
    printf("Data type         Number of bytes\n");
    printf("short int         %d\n", sizeof(short));
    printf("long int          %d\n", sizeof(long));
    printf("long long int     %d\n", sizeof(long long));
    printf("float             %d\n", sizeof(float));
    printf("double            %d\n", sizeof(double));
    printf("long double       %d\n", sizeof(long double));
    printf("Created by Lawrencium");
    return 0;
}
//课本p17：计算并显示每种数据类型所占储存的大小