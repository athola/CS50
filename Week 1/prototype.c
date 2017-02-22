#include <stdio.h>

void print_name(char name[100]);

int main(void)
{
  char s[100];
  fgets(s, 100, stdin);
  print_name(s);
}

void print_name(char name[100])
{
  printf("hello, %s\n", name);
}
