#include <stdio.h>
#ifndef bool
    #define bool int
    #define false ((bool)0)
    #define true  ((bool)1)
#endif

int main(void)
{
  printf("bool is %lu\n", sizeof(bool));
  printf("char is %lu\n", sizeof(char));
  printf("double is %lu\n", sizeof(double));
  printf("float is %lu\n", sizeof(float));
  printf("int is %lu\n", sizeof(int));
  printf("long long is %lu\n", sizeof(long long));
}
