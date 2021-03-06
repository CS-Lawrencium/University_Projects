//课本p213：学习折半查找法q
//*当待查找信息有序排列时，折半查找法比顺序查找法的平均查找速度要快得多，折半查找法也成为二分查找法
//*首先选取位于数组中间的元素，将其与查找键进行比较，如果他们的值相等，则查找键被找到，返回数组中间元素的下标，否则，将查找的区间缩小为原来的一般，即在一半的数组元素中查找
//*这个程序看上去似乎天衣无缝，但如果数组长度很大很大，使得low和high之和超出了limit.h中定义的有符号整数的极限值，那么执行到取数据区间的语句就会发生数值溢出

int Binsearch(long num[], long x, int n) //Binsearch()函数定义
{
    int low = 0, high = n - 1, mid; //区间左端点low置为0，右端点high置为n-1
    while (low < high)              //若左端点小于等于右端点，则继续查找
    {
        mid = (high + low) / 2; //取数据区间的中点
        if (x > num[mid])
            low = mid + 1; //若x>num[mid]，则修改区间的左端点
        else if (x < num[mid])
            high = mid - 1; //若x<num[mid]，则修改区间的右端点
        else
            return mid; //若找到，则返回下标值mid
    }
    return -1; //若循环结束仍未找到，则返回值-1
}
