#include <stdio.h>
#define N 10
void BubbleSort(int array[], int n);
int main()
{
    int array[N], i, j, k;
    printf("Hello There!Please enter 10 numbers beside!\n");
    for (i = 0; i < N;i++)
    {
        scanf("%d", &array[i]);
    }
    BubbleSort(array, N);
    for (i = 0; i < N;i++)
    {
        printf("%d\t", array[i]);
    }
    return 0;
}
void BubbleSort(int array[], int n) //BubbleSort()函数定义
{
    int i, j, temp;
    for (i = 0; i < n - 1; i++)
    {
        for (j = n - 1; j > 0; j--)
        {
            if (array[j] > array[j - 1]) //按数组array的元素从大到小排序
            {
                temp = array[j];
                array[j] = array[j - 1];
                array[j - 1] = temp;
            }
        }
    }
}