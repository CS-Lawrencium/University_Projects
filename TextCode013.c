//课本p44：从键盘输入一个大写英文字母，将其转换为小写英文字母后，将转换为的小写英文字母及其十进制的ASCⅡ码值显示在屏幕上
//*当scanf()返回指定的数据项数时，表示函数被成功调用；当scanf()返回EOF值时，表示函数调用失败，即未能读入指定的数据项数

#include <stdio.h>
int main()
{
    char ch;
    printf("Press a key and then press Enter:");
    ch = getchar();
    ch = ch + 32;
    printf("%c,%d\n", ch, ch);
    return 0;
}
