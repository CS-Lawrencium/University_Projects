//Content：   快速排序
//Programmer：Lawrencium
//Date：      16/12/2020

#include <stdio.h>
#define N 100
void ReadArray(int array[], int n);             //ReadArray()函数原型
void QuickSort(int array[], int low, int high); //QuickSort()函数原型
void PrintArray(int array[], int n);            //PrintArray()函数原型
int Partition(int array[], int low, int high);  //GetStandard()函数原型
int main()
{
    int array[N] = {0};
    int n, ret = 0;
    int low, high;
    do
    {
        printf("Please enter a number (<100) then I will create an array for you.\n");
        ret = scanf("%d", &n);
    } while ((ret == 0 || n <= 2 || n > N) && printf("Holy Cow!What the hell have you entered?"));
    high = n - 1;
    ReadArray(array, n);
    QuickSort(array, low, high);
    PrintArray(array, n);
    return 0;
}
//函数功能：录入数组元素
void ReadArray(int array[], int n)
{
    int i, ret;
    for (i = 0; i < n; i++)
    {

        printf("This is the %d th(st/nd/rd) number you should enter:\n", i + 1, n); //提示这是当前第几个输入的数
        ret = scanf("%d", &array[i]);
        if (ret != 1) //加入对错误输入的检查
        {
            printf("Naive!You think you can beat me?\n"); //错误输入提示
            i = i - 1;
            getchar();
        }
    }
    printf("Congratulations!You have entered all the number!\n");
    printf("\n");
}
//函数功能：输出数组元素
void PrintArray(int array[], int n)
{
    int i;
    printf("Now the array after QuickSort is:\n");
    for (i = 0; i < n; i++)
    {
        printf("%d ", array[i]);
    }
}
//函数功能：开始快速排序
void QuickSort(int array[], int low, int high)
{
    int partition;
    if (low < high) //递归条件：low < high
    {
        partition = Partition(array, low, high); //对子数组进行原址重排
        QuickSort(array, low, partition - 1);    //对前半区间继续快速排序
        QuickSort(array, partition + 1, high);   //对后半区间继续快速排序
    }
}
int Partition(int array[], int low, int high)
{

    int i = low, j = high;
    int key = array[i]; //默认基准值是数组最左端元素
    while (i < j)
    {
        while (i < j && array[j] >= key) //从组尾开始检查数组元素，向前移动j指针
        {
            j--;
        }
        if (i < j) // 当找到比 array[i] 小的时，就把后面的值 array[j] 赋给它
        {
            array[i] = array[j];
        }
        while (i < j && array[i] <= key) //从组首开始检查数组元素，向后移动i指针
        {
            i++;
        }

        if (i < j)// 当找到比 array[j] 大的时，就把前面的值 array[i] 赋给它
        {
            array[j] = array[i]; 
        }
    }
    array[i] = key; // 把基准数据赋给正确位置
    return i;       // 跳出循环时 i 和 j 相等,此时的 i 或 j 就是 key 的正确索引位置
}
