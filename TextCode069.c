//课本p285：学习数组名的特殊意义及其在访问数组元素中的作用
//*C语言中的数组名有特殊的含义，它代表存放数组元素的连续储存空间的首地址，因此数组元素既可以用下标法也可以用指针发来引用

#include <stdio.h>
int main()
{
    int a[5], i;
    printf("Input five numbers:");
    for (i = 0; i < 5; i++)
    {
        scanf("%d", a + i); //这里a+i等价于&a[i]
    }
    for (i = 0; i < 5; i++)
    {
        printf("%4d", *(a + i)); //这里*(a+i)等价于a[i]
    }
    printf("\n");
    return 0;
}