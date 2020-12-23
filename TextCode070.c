//课本p287：指针运算的特殊性及其在访问数组元素中的作用

#include <stdio.h>
int main()
{
    int a[5], *p;
    printf("Input five numbers:");
    for (p = a; p < a + 5; p++)
    {
        scanf("%d", p); //用指针法引用数组元素
    }
    for (p = a; p < a + 5; p++)
    {
        printf("%4d", *p); //用指针法引用数组元素
    }
    printf("\n");
    return 0;
}