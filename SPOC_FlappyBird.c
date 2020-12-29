//Content：  《Flappy Bird》
//Programmer：Lawrencium
//Date：      27/12/2020
//同是天涯沦落人，求下手轻点！

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <time.h>
#include <windows.h>
#define DIS 22
#define BLAN 9 //设置上下两部分柱子墙之间的缝隙
typedef struct bird
{
    COORD pos;
    int score;
} BIRD;
void CheckWall(COORD wall[]);                   //显示柱子墙体
void PrtBird(BIRD *bird);                       //显示你的小鸟
int CheckWin(COORD *wall, BIRD *bird);          //检测小鸟是否碰强或超出上下边界
void Begin(BIRD *bird);                         //显示上下边界和分数
void Gotoxy(int x, int y);                      //定位光标
BOOL SetConsoleColor(unsigned int wAttributes); //设置颜色
void HideCursor();                              //隐藏光标，避免闪屏现象，提高游戏体验
//主函数部分
int main()
{
    BIRD bird = {(22, 10), 0}; //小鸟的初始位置
    COORD wall[3] = {{40, 10}, {60, 6}, {80, 8}};
    int i;
    char ch;
    while (CheckWin(wall, &bird))
    {
        Begin(&bird);    //清屏并显示上下边界和分数
        CheckWall(wall); //显示柱子墙
        PrtBird(&bird);  //显示你的小鸟
        Sleep(200);      //昏睡红茶
        if (kbhit())     //检测键盘是否有输入
        {
            ch = getch();  //输入的字符存入ch
            if (ch == ' ') //如果输入的是空格
            {
                bird.pos.Y -= 1; //小鸟向上移动一格
            }
            else //未检测到键盘输入
            {
                bird.pos.Y += 1; //小鸟向下移动一格
            }
            for (i = 0; i < 3; i++)
            {
                wall[i].X--; //柱子墙向左移一格
            }
        }
    }
    return 0; //懂得都懂
}
//函数功能：显示柱子墙体
void CheckWall(COORD wall[])
{
    int i;
    HideCursor();
    srand(time(NULL));
    COORD temp = {wall[2].X + DIS, rand() % 13 + 5}; //随机产生一个新柱子
    if (wall[0].X < 10)                              //超出预设的左边界
    {
        wall[0] = wall[1]; //最左侧的柱子墙消失，第二个柱子变成第一个
        wall[1] = wall[2]; //第三个柱子变成第二个
        wall[2] = temp;    //新产生的柱子变成第三个
    }
    for (i = 0; i < 3; i++) //每次显示三个柱子墙
    {
        //显示上半部分柱子墙
        temp.X = wall[i].X + 1;                        //向右缩进一格显示图案
        SetConsoleColor(0x0C);                         //设置黑色背景、亮红色背景
        for (temp.Y = 2; temp.Y < wall[i].Y; temp.Y++) //从第二行开始显示
        {
            Gotoxy(temp.X, temp.Y);
            printf("██████");
        }
        temp.X--; //向左移动一格显示图案
        Gotoxy(temp.X, temp.Y);
        printf("███████");
        //显示下半部分柱子墙
        temp.Y += BLAN;
        Gotoxy(temp.X, temp.Y);
        printf("███████");
        temp.X++;                       //向右缩进一格显示图案
        temp.Y++;                       //在下一行显示下面的图案
        for (; (temp.Y) < 26; temp.Y++) //一直显示到25行
        {
            Gotoxy(temp.X, temp.Y);
            printf("██████");
        }
    }
}
//函数功能：显示你的小鸟
void PrtBird(BIRD *bird)
{
    SetConsoleColor(0x0E); //设置黑色背景，亮黄色前景
    Gotoxy(bird->pos.X, bird->pos.Y);
    printf("o->"); //显示小鸟
}
//函数功能：检测小鸟是否碰强或超出上下边界，是则返回0，否则分数加1并返回1
int CheckWin(COORD *wall, BIRD *bird)
{
    if (bird->pos.X >= wall->X) //小鸟的横坐标进入柱子坐标范围
    {
        if (bird->pos.Y <= wall->Y || bird->pos.Y >= wall->Y + BLAN)
        {
            return 0; //小鸟的纵坐标碰到上下柱子，则返回0
        }
    }
    if (bird->pos.Y < 1 || bird->pos.Y > 26)
    {
        return 0; //小鸟的位置超出上下边界，则返回0
    }
    (bird->score)++; //分数加1
    return 1;
}
//函数功能：显示上下边界和分数
void Begin(BIRD *bird)
{
    system("cls");
    Gotoxy(0, 26); //第26行显示下边界
    printf("==============================");
    printf("============================");
    printf("================================");
    Gotoxy(0, 1); //第1行显示上边界
    printf("==============================");
    printf("============================");
    printf("================================");
    SetConsoleColor(0x0E);                                      //设置黑色背景，黄亮色前景
    printf("\n你居然得到了% 4d分，你真是个猛男!", bird->score); //第1行显示分数
}
//函数功能：定位光标
void Gotoxy(int x, int y)
{
    COORD pos = {x, y};
    HANDLE hOutput = GetStdHandle(STD_OUTPUT_HANDLE); //获得标准输出设备句柄
    SetConsoleCursorPosition(hOutput, pos);           //定位光标位置
}
//函数功能：设置颜色
//一共有16种文字颜色，16种背景颜色，组合有256种。传入的参数值应当小于256
//字节的低4位控制前景色，高4位控制背景色，高亮+红+绿+蓝
BOOL SetConsoleColor(unsigned int wAttributes)
{
    HANDLE hOutput = GetStdHandle(STD_OUTPUT_HANDLE);
    if (hOutput == INVALID_HANDLE_VALUE)
    {
        return FALSE;
    }
    return SetConsoleTextAttribute(hOutput, wAttributes);
}
//函数功能：隐藏光标，避免闪屏现象，提高游戏体验
void HideCursor()
{
    HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
    CONSOLE_CURSOR_INFO CursorInfo;
    GetConsoleCursorInfo(handle, &CursorInfo); //获取控制台光标信息
    CursorInfo.bVisible = 0;                   //隐藏控制台光标
    SetConsoleCursorInfo(handle, &CursorInfo); //设置控制台光标状态
}