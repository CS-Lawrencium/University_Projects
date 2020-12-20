#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, j, k,a=0;
    char letter;

        printf("Please input a letter:");
    ZSH :
    scanf("%c", &letter);
    k = letter - 'A' + 1;
    if(k>26||k<1)
    {printf("Invalid character!\n");}
    else{
    for (i = 0; i < k; i++)
    {
      for (j = 0; j < k - i; j++)printf(" ");
      for (j = 0; j <= i; j++)printf("%c", 'A' + j);
      for (j = i - 1; j >= 0; j--)printf("%c", 'A' + j);
      printf("\n");a=1;}if(a=1){goto ZSH;}}



    return 0;
}
//如何输出一个字母金字塔？
