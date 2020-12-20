#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{           
    int hour, min;
    int ret;
    char p, q;
    double angle;
    do
    {           
        hour = -1;
        min = -1;
        p = 'a';
        q = 'a';
        printf("Please input time(e.g: 5h43m)\n");
        ret = scanf("%d%c%d%c", &hour, &p, &min, &q);//2
        //getchar();
    }while (ret != 4 || p != 'h' || q != 'm' || (hour > 12 || hour < 0) || (min > 60 || min < 0));//4
    angle = fabs(5.5 * min - 30 * hour);//2
    if (angle > 180)
    {           
        angle = 360 - angle;//2
    }
    printf("At %d:%02d the angle is %.1f degrees.\n", hour, min, angle);
}