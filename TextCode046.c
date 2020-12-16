//课本p197：学习向函数传递一维数组
//*若要把一个数组传递给一个函数，那么只要使用不带方括号的数组名作为参数实参调用函数即可
//*由于数组名代表数组第一个元素的地址，因此用数组名做函数实参实际上是将数组的首地址传给被调函数
//*数组作函数形参时，数组的长度可以不出现在数组名后面的方括号内，通常用另一个整形形参来指定数组的长度
//*如果不小心向函数Average()传入的n值为0，那么程序就会发生除0错误

#include <stdio.h>
#define N 40
int Average(int score[], int n);  //Average()函数原型
void ReadScore(int score[], int); //ReadScore()函数原型
int main()
{
    int score[N], aver, n;
    printf("Input n:");
    scanf("%d", &n);
    ReadScore(score, n);      //数组名作为函数实参调用函数ReadScore()
    aver = Average(score, n); //数组名作为函数实参调用函数Average()
    printf("Average score is %d \n", aver);
    return 0;
}
//函数功能：计算n个学生成绩的平均分
int Average(int score[], int n)
{
    int i, sum = 0;
    for (i = 0; i < n; i++)
    {
        sum += score[i];
    }
    return sum / n;
}
//函数功能：输入n个学生的某门课成绩
void ReadScore(int score[], int n)
{
    int i;
    printf("Input score:");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &score[i]);
    }
}