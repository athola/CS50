#include <stdio.h>

int main(void)
{
  char c;
  scanf("%s", &c);

  switch(c)
  {
    case 'y':
    case 'Y':
      printf("yes\n");
      break;

    case 'n':
    case 'N':
      printf("no\n");
      break;

    default:
      printf("error\n");
  }
}
