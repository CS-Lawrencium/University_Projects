#include <stdio.h>
typedef struct time_rec
{
    int hours;
    int mins;
    int secs;
} TIME_REC;
void input_time(struct time_rec *current_time);
void increment_time(struct time_rec *current_time);
void output_time(struct time_rec *current_time);
int main()
{
    TIME_REC current_time;
    input_time(&current_time);
    increment_time(&current_time);
    output_time(&current_time);
    return 0;
}
void input_time(struct time_rec *current_time)
{
    printf("请输入当前时间（时 分 秒）：");
    scanf("%d%d%d", &current_time->hours, &current_time->mins, &current_time->secs);
}
void increment_time(struct time_rec *current_time)
{
    current_time->secs++;
    if (current_time->secs >= 60)
    {
        current_time->secs = current_time->secs - 60;
        current_time->mins++;
    }
    if (current_time->mins >= 60)
    {
        current_time->mins = current_time->mins - 60;
        current_time->hours++;
    }
    if (current_time->hours >= 24)
    {
        current_time->hours = current_time->hours - 24;
    }
}
void output_time(struct time_rec *current_time)
{
    printf("当前时间：%d时%d分%d秒！", current_time->hours, current_time->mins, current_time->secs);
}