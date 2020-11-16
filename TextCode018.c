#include <stdio.h>
int main()
{
    int a;
    char b,c;
    printf("Please input a integer:");
    scanf("%d", &a);
    printf("This integer is %d\n", a);
    getchar();//Attention!
    printf("Please input a character:");
    scanf("%f", &b);
    printf("This character is %f\n", b);
    printf("Plese input another character:");
    scanf(" %c", &c);//Attention!
    printf("This character is %f\n", c);
    return 0;
}
//课本p52：学习解决%c格式符存在问题的解决方法
//*用函数getchar()将数据存入时存入缓冲区的回车符读入
//*在%c前面加入一个空格，忽略前面数据输入时存入缓冲区的回车符