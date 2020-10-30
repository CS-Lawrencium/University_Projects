#include <math.h>
#include <stdio.h>
#define EPS 1e-6
int main()
{
    float a,b,c,p,q,disc;
    scanf("%f,%f,%f",&a,&b,&c);
    p = -b/(2*a);
    q = sqrt(fabs(b*b-4*a*c))/(2*a);
    disc = b*b-4*a*c;
    if(fabs(a-0)<=0) 
    printf("It is not a quadratic equation!\n");
    else
    {
        if(fabs(disc-0)<=EPS)
        printf("x1 = x2 = %.2f\n",p);
        else if (disc>0)
        printf("x1 = %.2f, x2 = %.2f\n",p+q,p-q);
        else
        {
            printf("x1 = %.2f+%.2fi, ",p,q);
            printf("x2 = %.2f-%.2fi\n",p,q);
        }
    }
    return 0;
}
//输入一个一元二次函数并输出它的解