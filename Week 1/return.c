#include <stdio.h>

int square(int n);

int main(void)
{
  printf("x is ");
  int x;
  scanf("%i", &x);
  printf("x^2 is %i\n", square(x));
}

int square(int n)
{
  return n * n;
}
