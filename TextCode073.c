//课本p301：学习指针数组用于表示多个字符串的方法
//*因指针数组的元素是一个指针，所以与指针变量一样，在使用指针数组之前必须对数组元素进行初始化

#include <stdio.h>
#include <string.h>
#define MAX_LEN 10
#define N 150
void SortString(char *ptr[], int n);
int main()
{
    int i, n;
    char name[N][MAX_LEN];
    char *pStr[N];
    printf("How many countries?");
    scanf("%d", &n);
    getchar();
    printf("Input their names:\n");
    for (i = 0; i < n;i++)
    {
        pStr[i] = name[i];
        gets(pStr[i]);
    }
    SortString(pStr, n);
    printf("Sorted results:\n");
    for (i = 0; i < n;i++)
    {
        puts(pStr[i]);
    }
    return 0;
}
//函数功能：用指针数组作函数参数，采用交换法实现字符串按字典顺序排序
void SortString(char *ptr[],int n)
{
    int i, j;
    char *temp = NULL;
    for (i = 0; i < n;i++)
    {
        if(strcmp(ptr[j],ptr[i])<0)
        {
            temp = ptr[i];
            ptr[i] = ptr[j];
            ptr[j] = temp;
        }
    }
}