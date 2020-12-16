#include <stdio.h>
#include <stdlib.h>
#define TerNum 4 //定义科目个数TerNum=4
#define StuNum 5 //定义学生人数StuNum=5
int main()
{
    int score[TerNum][StuNum] = {0}; //定义数组
    int i, j, k, counter, temp;
    for (i = 0; i < TerNum; i++)
    {
        for (j = 0; j < StuNum; j++)
        {
            scanf("%d", &score[i][j]); 
        }
    }
    //开始对每个项目中各学生的成绩由高到低进行排序
    for (i = 0; i < TerNum; i++)  
    {
        for (j = 0; j < StuNum - 1; j++)
        {
            for (k = j + 1; k < StuNum; k++)
            {
                if (score[i][j] < score[i][k]) //直接使用交换法排序
                {
                    temp = score[i][j];
                    score[i][j] = score[i][k];
                    score[i][k] = temp;
                }
            }
        }
    }
    //开始对每个项目中排名前三的学生成绩进行输出
    for (i = 0; i < TerNum; i++)
    {
        counter = 3;
        for (j = 0; (j < counter) && (j < StuNum); j++)
        {
            printf("%4d", score[i][j]);
            if (score[i][j] == score[i][j + 1])
                counter++;
        } 
        printf("\n");
    }
    return 0;
}