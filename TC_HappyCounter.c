#include <stdio.h>
int main()
{
    int a = 0, b = 0, c = 1;
    char ch;
    ch = getchar();
    do{
        switch (ch)
        {
        case '1':
        case '2':
        case '3':
        case '4':
        case '5':
        case '6':
        case '7':
        case '8':
        case '9':
        case '0':
            a = a + 1;
            break;
        case '+':
        case '-':
        case '*':
        case '/':
        case '%':
        case '=':
            b = b + 1;
            break;
        default:
            c = c + 1;
        }
    }while((ch=getchar())!= '\\');
    printf("class1=%d, class2=%d, class3=%d\n", a, b, c);
    return 0;
}
//从键盘输入任意的字符，按下列规则进行分类计数。
//第一类：‘0’， ‘1’， ‘2’， ‘3’， ‘4’， ‘5’， ‘6’， ‘7’， ‘8’， ‘9’
//第二类：‘+’， ‘-’， ‘*’， ‘/’， ‘%’， ‘=’
//第三类：其它字符。
