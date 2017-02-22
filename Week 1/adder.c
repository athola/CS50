#include <stdio.h>

int main(void)
{
  int x, y;
  printf("x is ");
  scanf("%d", &x);
  printf("y is ");
  scanf("%d", &y);

  printf("%d plus %d is %d\n", x, y, x + y);

}
