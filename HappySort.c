//Content：   排序算法改进
//Programmer：Lawrencium
//Date：      16/12/2020

//交换法排序
void SwapSort(int array[], int n) //SwapSort()函数定义
{
    int i, j, temp;
    for (i = 0; i < n - 1; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (array[j] > array[i]) //按数组array的元素值从大到小排序
            {
                temp = array[j];     //将array[j]的值赋给中间变量temp
                array[j] = array[i]; //将array[i]的值赋给array[j]
                array[i] = temp;     //将中间变量temp的值赋给array[i]
            }
        }
    }
}

//选择法排序
void SelectSort(int array[], int n)//SelectSort()函数定义
{
    int i, j, k, temp;
    for (i = 0; i < n - 1; i++)
    {
        k = i;
        for (j = i + 1; j < n; j++)
        {
            if (array[j] > array[i]) //按数组array的元素值从大到小排序
            {
                k = j;
            }
        }
        if (k != i)
        {
            temp = array[k];     //将array[k]的值赋给中间变量temp
            array[k] = array[i]; //将array[i]的值赋给array[k]
            array[i] = temp;     //将中间变量temp的值赋给array[i]
        }
    }
}

//冒泡法排序
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

