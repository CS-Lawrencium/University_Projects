//课本p261：学习字符指针的使用方法
//*用字符指针输入字符串时，必须确保字符指针事先已经指向一个数组的首地址，否则会引起非法内存访问错误


#include <stdio.h>
#define N 12
int main()
{
    char name[N];
    char *ptrName = name; //声明了一个指向数组name的字符指针ptrName
    printf("Enter your name:");
    gets(ptrName); //输入字符串存入字符指针ptrName所指向的空间
    printf("Hello %s!\n", ptrName);
    return 0;
}
