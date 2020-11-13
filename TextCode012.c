#include <stdio.h>
int main()
{
    char ch;
    printf("Press a key and then press Enter:");
    ch = getchar();
    ch = ch + 32;
    putchar(ch);
    putchar('\n');
    return 0;
}
//课本p42：从键盘输入一个大写英文字母，将其转换为小写字母后，再显示到屏幕上