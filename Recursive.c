#include  <stdio.h>
unsigned int ComputeAge(unsigned int n);
int main()
{           
    unsigned int n = 5;
    printf("The 5th person's age is %d\n", ComputeAge(n));
    return 0;
}           
/* 函数功能：用递归算法计算年龄 */
unsigned int ComputeAge(unsigned int n)
{           
    unsigned int age;
    if (n == 1)
    {           
        age = 10;
    }
    else
    {           
        age = ComputeAge(n - 1) + 2;
    }
    return age;
}
//一个简单的递归问题