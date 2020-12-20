//课本p240：从键盘输入某班学生某门课的成绩（每班人数最多不超过40人，具体人数由键盘输入），试分析下面的程序能否实现计算并输出最高分及相应学生的学号
//*此程序运行后并不会得到函数FindMax()中计算的最高分及其学号，这是因为普通变量作函数参数进行按值调用不能在被调函数中改变相应的实参值

#include <stdio.h>
#define N 40
void FindMax(int score[], long num[], int n, int pMaxScore, long pMaxNum);
int main()
{
    int score[N], maxScore;
    int n, i;
    long num[N], maxNum;
    printf("How many students?");
    scanf("%d", &n); //从键盘输入学生人数n
    printf("Input students's ID and score:\n");
    for (i = 0; i < n; i++)
    {
        scanf("%ld%d", &num[i], &score[i]); //字母d前为字母l
    }
    FindMax(score, num, n, maxScore, maxNum); //按值调用函数
    printf("maxScore = %d,maxNum = %ld\n", maxScore, maxNum);
    return 0;
}
//函数功能：计算最高分及其相应学生的学号
void FindMax(int score[], long num[], int n, int pMaxScore, long pMaxNum)
{
    int i;
    pMaxScore = score[0];   //假设score[0]是当前最高分
    pMaxNum = num[0];       //记录当前最高分学生的学号num[0]
    for (i = 1; i < n; i++) //对所有score[i]进行比较
    {
        if (score[i] > pMaxScore) //如果score[i]高于当前平均分
        {
            pMaxScore = score[i]; //用score[i]修改当前最高分
            pMaxNum = num[i];     //记录当前最高分学生的学号num[i]
        }
    }
}