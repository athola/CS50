#include <string.h>
#include <stdio.h>

int main(void)
{
  char name[100];
  fgets(name, 100, stdin);
  printf("hello, %s\n", name);
}
