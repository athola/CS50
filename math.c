#include <stdio.h>

int main(void)
{
  int x, y;
  printf("x is ");
  scanf("%d", &x);
  printf("y is ");
  scanf("%d", &y);

  printf("%d plus %d is %d\n", x, y, x + y);
  printf("%d minus %d is %d\n", x, y, x - y);
  printf("%d times %d is %d\n", x, y, x * y);
  printf("%d divided by %d is %d\n", x, y, x / y);
  printf("remainder of %d divided by %d is %d\n", x, y, x % y);
}
