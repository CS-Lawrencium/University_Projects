#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define EPS 1e-6
int main()
{
    float a, b, c, disc, p, q;
    printf("Please enter the coefficient a,b,c:");
    scanf("%f,%f,%f", &a, &b, &c);
    if(fabs(a)<=EPS)
    {
        printf("It is not a quadratic equation!\n");
        exit(0);
    }
    disc = b * b - 4 * a * c;
    p = -b / (2 * a);
    q = sqrt(fabs(disc)) / (2 * a);
    if(fabs(disc)<=EPS)
    {
        printf("x1 = x2 = %.2f\n", p);
    }
    else
    {
        if(disc>EPS)
        {
            printf("x1 = %.2f, x2 = %.2f\n", p + q, p - q);
        }
        else
        {
            printf("x1 = %.2f+%.2fi,", p, q);
            printf("x2 = %.2f+%.2fi\n", p, q);
        }
    }
    return 0;
}
//课本p69：编程计算并输出一元二次方程的根，并考虑所有特殊情况
//*exit()函数的作用是终止整个程序的运行，强制返回操作系统
//*浮点数并非真正意义上的实数，只是其在某一范围内的近似，不能直接与0比较