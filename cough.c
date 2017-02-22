#include <stdio.h>

void cough(int n);
void sneeze(int n);
void say(char s[5], int n);

int main(void)
{
    cough(5);
    sneeze(3);
}

void cough(int n) {
  say("cough", n);
}

void sneeze(int n) {
  say("achoo", n);
}

void say(char s[5], int n)
{
  for (int i = 0; i < n; i++)
  {
    printf("%s\n", s);
  }
}
