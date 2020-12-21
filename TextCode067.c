//课本p266：学习向函数传递字符串
//*向函数传递字符串时，既可以使用字符数组作函数参数，也可使用字符指针作函数参数
//*与使用其他类型数组不同的是，通常不使用长度即计数控制的循环来判断数组元素是否遍历结束，而是利用字符串结束标志'\0'判断字符串中的字符是否遍历完毕

#include <stdio.h>
#define N 80
void MyStrcpy(char dstStr[], char srcStr[]);
int main()
{
    char a[N], b[N];
    printf("Input a string:");
    gets(a);        //输入字符串
    MyStrcpy(b, a); //将字符数组a中的字符串复制到b中
    printf("The copy is:");
    puts(b); //输出复制后的字符串
    return 0;
}
//函数功能：用字符数组作为函数函数，实现字符串复制
void MyStrcpy(char dstStr[], char srcStr[])
{
    int i = 0;                //数组下表初始化为0
    while (srcStr[i] != '\0') //若当前去除的字符不是字符串结束标志
    {
        dstStr[i] = srcStr[i]; //复制字符
        i++;                   //移动下标
    }
    dstStr[i] = '\0'; //在字符串dstStr的末尾加字符串结束标志
}