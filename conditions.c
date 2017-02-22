#include <stdio.h>

int main(void)
{
  int i;
  scanf("%d", &i);
  if (i < 0)
  {
    printf("negative\n");
  }
  else if (i > 0)
  {
    printf("positive\n");
  }
  else
  {
    printf("zero\n");
  }
}
