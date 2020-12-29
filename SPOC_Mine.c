//Content：   扫雷小游戏
//Programmer：Lawrencium
//Date：      28/12/2020

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define _CRT_SECURE_NO_WARNINGS 1
#define row 12
#define col 12
#define COUNT 10                 //棋盘中雷的总数
extern char show_mine[row][col]; //展示数组
extern char real_mine[row][col]; //布雷数组
char show_mine[row][col] = {0};
char real_mine[row][col] = {0};
void menu();                  //打印菜单
void game();                  //游戏
void init_mine();             //初始化雷阵
void set_mine();              //布雷
int count_mine();             //统计周围雷的个数
void print_player();          //打印玩家棋盘
void print_mine();            //打印设计者棋盘
int sweep_mine();             //扫雷
void safe_mine();             //避免玩家被开幕雷击
void open_mine(int x, int y); //展开
int count_show_mine();        ///判断玩家棋盘剩余未知区域的个数
double start, finish;
void menu() //菜单
{
    printf("*******************************\n");
    printf("*****1.play       0.exit*******\n");
    printf("*******************************\n");
    printf("****Coded By HIT_Lawrencium****\n");
}
void game() //游戏
{

    int ret = 0;
    init_mine(); //初始化玩家棋盘和设计者棋盘
    set_mine();  //给设计者棋盘布雷
    printf("\n");
    print_player(); //打印玩家棋盘
    start = clock();
    safe_mine(); //避免第一次被炸死

    if (count_show_mine() == COUNT) //一步就赢的情况
    {
        print_mine();
        printf("玩家赢！\n\n");
        return;
    }
    print_player();

    while (1) //循环扫雷
    {
        int ret = sweep_mine();         //扫雷,踩到雷返回1，没有踩到雷返回0
        if (count_show_mine() == COUNT) //若玩家棋盘的'*'个数为雷数时，扫雷完成，游戏胜利
        {
            print_mine(); //打印设计者棋盘
            printf("这么简单就不用鼓励了吧\n\n");
            finish = clock(); //取结束时间
            printf("用时%d 秒\n", (int)(finish - start) / CLOCKS_PER_SEC);
            break;
        }
        if (ret) //判断是否踩到雷
        {
            printf("不会吧，不会吧，不会有人在这么简单的地方死了吧？\t");
            finish = clock(); //取结束时间
            printf("用时%d 秒\n", (int)(finish - start) / CLOCKS_PER_SEC);
            print_mine(); //打印设计者雷阵查看雷的分布
            break;
        }
        print_player(); //打印玩家棋盘
    }
}
void init_mine() //初始化两个雷阵
{
    int i = 0;
    int j = 0;
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            show_mine[i][j] = '*';
            real_mine[i][j] = '0';
        }
    }
}
void print_player() //打印玩家棋盘
{
    int i = 0;
    int j = 0;
    printf("0  ");
    for (i = 1; i < row - 1; i++)
    {
        printf("%d ", i); //打印横标
    }
    printf("\n");
    for (i = 1; i < row - 2; i++) //打印竖标
    {
        printf("%d  ", i);
        for (j = 1; j < col - 1; j++)
        {
            printf("%c ", show_mine[i][j]); //玩家棋盘数组
        }
        printf("\n");
    }
    printf("%d ", COUNT); //开始打印最后一行
    for (i = 1; i < row - 1; i++)
    {
        printf("%c ", show_mine[COUNT][i]);
    }
    printf("\n");
}
void print_mine() //打印设计者棋盘
{
    int i = 0;
    int j = 0;
    printf("0  ");
    for (i = 1; i < row - 1; i++)
    {
        printf("%d ", i); //打印横标
    }
    printf("\n");
    for (i = 1; i < row - 2; i++) //打印竖标
    {
        printf("%d  ", i);
        for (j = 1; j < col - 1; j++)
        {
            printf("%c ", real_mine[i][j]);
        }
        printf("\n");
    }
    printf("%d ", COUNT); //开始打印最后一行
    for (i = 1; i < row - 1; i++)
    {
        printf("%c ", real_mine[COUNT][i]);
    }
    printf("\n");
}
void set_mine() //给设计者棋盘布雷
{
    int x = 0;
    int y = 0;
    int count = COUNT; //雷总数
    while (count)      //雷布完后跳出循环
    {
        int x = rand() % 10 + 1;    //产生1到10的随机数，在数组下标为1到10的范围内布雷
        int y = rand() % 10 + 1;    //产生1到10的随机数，在数组下标为1到10的范围内布雷
        if (real_mine[x][y] == '0') //找不是雷的地方布雷
        {
            real_mine[x][y] = '1';
            count--;
        }
    }
}
int count_mine(int x, int y) //检测周围8个区域雷的个数
{
    int count = 0;
    if (real_mine[x - 1][y - 1] == '1')
        count++;
    if (real_mine[x - 1][y] == '1')
        count++;
    if (real_mine[x - 1][y + 1] == '1')
        count++;
    if (real_mine[x][y - 1] == '1')
        count++;
    if (real_mine[x][y + 1] == '1')
        count++;
    if (real_mine[x + 1][y - 1] == '1')
        count++;
    if (real_mine[x + 1][y] == '1')
        count++;
    if (real_mine[x + 1][y + 1] == '1')
        count++;
    return count;
}
void safe_mine() //避免第一次炸死
{
    int x = 0;
    int y = 0;
    char ch = 0;
    int count = 0;
    int ret = 1;
    printf("输入坐标扫雷\n");
    while (1)
    {
        scanf("%d%d", &x, &y);                          //只能输入1到10，输入错误重新输入
        if ((x >= 1 && x <= 10) && (y >= 1 && y <= 10)) //判断输入坐标是否有误
        {
            if (real_mine[x][y] == '1') //第一次踩到雷后补救
            {
                real_mine[x][y] = '0';
                char ch = count_mine(x, y);
                show_mine[x][y] = ch + '0'; //数字对应的ASCII值和数字字符对应的ASCII值相差48，即'0'的ASCII值
                open_mine(x, y);
                while (ret) //在其余有空的地方设置一个雷
                {
                    int x = rand() % 10 + 1;    //产生1到10的随机数，在数组下标为1到10的范围内布雷
                    int y = rand() % 10 + 1;    //产生1到10的随机数，在数组下标为1到10的范围内布雷
                    if (real_mine[x][y] == '0') //找不是雷的地方布雷
                    {
                        real_mine[x][y] = '1';
                        ret--;
                        break;
                    }
                }
                break; //跳出此函数
            }
            if (real_mine[x][y] == '0')
            {
                char ch = count_mine(x, y);
                show_mine[x][y] = ch + '0'; //数字对应的ASCII值和数字字符对应的ASCII值相差48，即'0'的ASCII值
                open_mine(x, y);
                break;
            }
        }
        else //坐标错误
        {
            printf("输入错误重新输入\n");
        }
    }
}
void open_mine(int x, int y) //坐标周围展开
{
    if (real_mine[x - 1][y - 1] == '0')
    {
        show_mine[x - 1][y - 1] = count_mine(x - 1, y - 1) + '0'; //显示该坐标周围雷数
    }
    if (real_mine[x - 1][y] == '0')
    {
        show_mine[x - 1][y] = count_mine(x - 1, y) + '0'; //显示该坐标周围雷数
    }
    if (real_mine[x - 1][y + 1] == '0')
    {
        show_mine[x - 1][y + 1] = count_mine(x - 1, y + 1) + '0'; //显示该坐标周围雷数
    }
    if (real_mine[x][y - 1] == '0')
    {
        show_mine[x][y - 1] = count_mine(x, y - 1) + '0'; //显示该坐标周围雷数
    }
    if (real_mine[x][y + 1] == '0')
    {
        show_mine[x][y + 1] = count_mine(x, y + 1) + '0'; //显示该坐标周围雷数
    }
    if (real_mine[x + 1][y - 1] == '0')
    {
        show_mine[x + 1][y - 1] = count_mine(x + 1, y - 1) + '0'; //显示该坐标周围雷数
    }
    if (real_mine[x + 1][y] == '0')
    {
        show_mine[x + 1][y] = count_mine(x + 1, y) + '0'; //显示该坐标周围雷数
    }
    if (real_mine[x + 1][y + 1] == '0')
    {
        show_mine[x + 1][y + 1] = count_mine(x + 1, y + 1) + '0'; //显示该坐标周围雷数
    }
}
int sweep_mine() //扫雷，踩到雷返回1，没有踩到雷返回0
{
    int x = 0;
    int y = 0;
    int count = 0;
    printf("输入坐标扫雷\n");
    scanf("%d%d", &x, &y);                                //只能输入1到10
    if ((x >= 1 && x <= COUNT) && (y >= 1 && y <= COUNT)) //判断输入坐标是否有误，输入错误重新输入
    {
        if (real_mine[x][y] == '0') //没踩到雷
        {
            char ch = count_mine(x, y);
            show_mine[x][y] = ch + '0'; //数字对应的ASCII值和数字字符对应的ASCII值相差48，即'0'的ASCII值
            open_mine(x, y);
            if (count_show_mine() == COUNT) //判断剩余未知区域的个数，个数为雷数时玩家赢
            {
                print_mine();
                printf("玩家赢！\n\n");
                return 0;
            }
        }
        else if (real_mine[x][y] == '1') //踩到雷
        {
            return 1;
        }
    }
    else
    {
        printf("输入错误重新输入\n");
    }
    return 0; //没踩到雷
}
int count_show_mine() //判断剩余未知区域的个数，个数为雷数时玩家赢
{
    int count = 0;
    int i = 0;
    int j = 0;
    for (i = 1; i <= row - 2; i++)
    {
        for (j = 1; j <= col - 2; j++)
        {
            if (show_mine[i][j] == '*')
            {
                count++;
            }
        }
    }
    return count;
}
int main()
{
    srand((unsigned int)time(NULL)); //产生随机数生成器
    int input = 0;
    menu(); //菜单
    do
    {
        scanf("%d", &input);
        switch (input)
        {
        case 1:
            game();
            break;
        case 0:
            exit(1); //退出游戏
            break;
        default:
            printf("你爬吧！\n");
            break;
        }
        menu();
        printf("小伙子，真继续？\n");
    } while (1); //循环玩游戏
    system("pause");
    return 0;
}
