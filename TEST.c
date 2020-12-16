#include <stdio.h>
#define StuNum 40
int ReadScore(long Number[], int Score[]);
int FindScore(long Number[], long A, int ret1);
int main()
{
    long Number[StuNum], A;
    int Score[StuNum], B;
    int ret1, ret2;
    ret1 = ReadScore(Number, Score);
    printf("Total students are %d\n", ret1);
    printf("Input the searching ID:");
    scanf("%ld", &A);
    ret2 = FindScore(Number, A, ret1);
    if (ret2 != -1)
        printf("score = %d\n", Score[ret2]);
    else
        printf("Not found!\n");
    return 0;
}
int ReadScore(long Number[], int Score[])
{
    int i = -1;
    do
    {
        i++;
        printf("Input student's ID and score:");
        scanf("%ld%d", &Number[i], &Score[i]);
    } while (Score[i] >= 0 && Number[i] >= 0);
    return i;
}
int FindScore(long Number[], long A, int ret1)
{
    int i;
    for (i = 0; i < ret1; i++)
    {
        if (A == Number[i])
            return i;
    }
    return -1;
}