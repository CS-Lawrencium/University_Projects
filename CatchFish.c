#include<stdio.h>
int flag=0;
int days(int year,int month,int day,int dx[][12]);
int judge1(int year,int month,int day,int dx[][12]);
void judge2(int d);
int main()
{
    int dx[2][12] = {{31,28,31,30,31,30,31,31,30,31,30,31},{31,28,31,30,31,30,31,31,30,31,30,31}};
    int year,ret1,ret2,month,day,d=0;
    ret1 = scanf("%4d-%2d-%2d",&year,&month,&day);
    if(ret1 != 3)
    {
        printf("Invalid input.");
        return 0;
    }
    ret2 = judge1(year,month,day,dx);
    d = days(year,month,day,dx);
    if(ret2==-1)
    {
        printf("Invalid input.");
        return 0;
    }
    judge2(d);
}
int judge1(int year,int month,int day,int dx[][12])
{
    if((year%4==0&&year%100!=0)||(year%400==0))
    {
        flag = 1;
    }
    if(year<1990||month>12||month<1)
    return -1;
    if(dx[flag][month-1]<day||day<0)
    return -1;
    return 1;
}
int days(int year,int month,int day,int dx[][12])
{
    int i,j,q,m,n,g,d=0;
    if(year>1992)
    {
        d = 2 * 365;
        j = (year - 2 - 1990)/400;
        q = (year - 2 - 1990)%400;
        m = q/100;
        n = q%100;
        g = n/4;
        d = (year - 2 - 1990)*365+j*97+m*96+g;
    }
    else
    {
        d = 365 * (year-1990);
    }
    for(i=0;i<month-1;i++)
    {
        d = d + dx[flag][i];
    }
    return d + day;
}
void judge2(int d)
{
    int i;
    i = d%5;
    switch(i)
    {
        case 3:case 1:case 2:printf("He is working.");
        break;
        case 0:case 4:printf("He is having a rest.");
        break;
    }
}
