//课本p42：从键盘输入一个大写英文字母，将其转换为小写字母后，再显示到屏幕上

#include <stdio.h>
int main()
{
    char ch;
    printf("Press a key and then press Enter:");
    ch = getchar();//从键盘输入一个字符，按回车键结束输入，该字符被存入变量ch
    ch = ch + 32;//将大写英文字母转换为小写英文字母
    putchar(ch);//在屏幕上显示变量ch中的字符
    putchar('\n');//输出一个回车换行符
    return 0;
}
