#include <stdio.h>
int main()
{
    int magic,guess;
    magic = rand();
    printf("Please guess a magic number:");
    scanf("%f", &guess);
    if (guess > magic)
      {
         printf("Wrong!Too Big!\n");
      } 
    else if (guess < magic)
      {
         printf("Wrong!Too Small!\n");
      } 
    else
      {
         printf("Fucking Right!\n");
      } 
    return 0;
}
//输入一个数，判断其与计算机随机生成的数的大小关系