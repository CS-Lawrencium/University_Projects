//课本p263：请编程实现按奥运会参赛国国民在字典中的顺序对其入场次序进行排序，假设参赛国不超过150个
//*对单个字符进行赋值操作可以使用复制运算符，但是赋值运算符不能用于字符串的赋值操作，字符串赋值只能使用函数strcpy()
//*比较单个字符可以使用关系运算符，但比较字符串不能直接使用关系运算符，而应该使用函数strcmp()

#include <stdio.h>
#include <string.h>
#define MAX_LEN 10 //字符串最大长度
#define N 150      //字符串个数
void SortString(char str[][MAX_LEN], int n);
int main()
{
    int i, n;
    char name[N][MAX_LEN]; //定义二维字符数组
    printf("How many countries?");
    scanf("%d", &n);
    getchar(); //读走输入缓冲区中的回车符
    printf("Input their names:\n");
    for (i = 0; i < n; i++)
    {
        gets(name[i]); //输入n个字符串
    }
    SortString(name, n); //字符串按字典顺序排序
    printf("Sorted results:\n");
    for (i = 0; i < n; i++)
    {
        puts(name[i]); //输出排序后的n个字符串
    }
    return 0;
}
//函数功能：交换法实现字符串按字典顺序排序
void SortString(char str[][MAX_LEN], int n)
{
    int i, j;
    char temp[MAX_LEN];
    for (i = 0; i < n - 1; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (strcmp(str[j], str[i]) < 0)
            {
                strcpy(temp, str[i]);
                strcpy(str[i], str[j]);
                strcpy(str[j], temp);
            }
        }
    }
}