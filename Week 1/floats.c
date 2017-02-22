#include <stdio.h>

int main(void)
{
  float x, y;
  printf("x is ");
  scanf("%f", &x);
  printf("y is ");
  scanf("%f", &y);

  printf("%f plus %f is %f\n", x, y, x + y);
  printf("%f minus %f is %f\n", x, y, x - y);
  printf("%f times %f is %f\n", x, y, x * y);
  printf("%f divided by %f is %f\n", x, y, x / y);
}
