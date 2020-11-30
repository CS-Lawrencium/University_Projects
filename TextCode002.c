//课本P13：输出a、b、c三种变量的值

#include <stdio.h>
int main()
{
    int a;
    float b;
    char c;
    a = 1;
    b = 2.5;
    c = 'A';
    printf("a = %d\n", a);//按整形格式输出变量a的值
    printf("b = %f\n", b);//按实型格式输出变量b的值
    printf("c = %c\n", c);//按字符型格式输出变量c的值
    printf("End of program\n");//输出一个字符串
    return 0;
}
