#include <stdio.h>
int main()
{
    int a;
    char b;
    float c;
    printf("Please input an integer:");
    scanf("%d", &a);
    printf("integer: %d\n", a);
    printf("Please input a character:");
    scanf("%c", &b);
    printf("character: %c\n", b);
    printf("Please input a float number:");
    scanf("%c", &c);
    printf("float: %f\n", c);
    return 0;
}
//课本p51：编程从键盘先后输入int型、char型和float型数据，要求每输入一个数据就显示出这个数据的类型和数据值
//*在用%c格式读入字符时，空格字符和转义字符(包括回车)都会被当作有效字符读入