#include <stdio.h>
int main()
{
  int i = 1, y;
  double x = 1;
  y = 5 * x + 1;
  do
  {
    if (y % 4 == 0)
    {
      y = y * 5 / 4 + 1;
      i++;
    }
    else
    {
      x = x + 1;
      y = 5 * x + 1;
      i = 1;
    }
  } while (i < 5);
  printf("y = %d\n", y);
  return 0;
}
//屑水手分椰子
