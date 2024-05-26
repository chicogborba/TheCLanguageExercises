// Section 1.5.3
// Exercise 1-9

#include <stdio.h>

int main() 
{

  int c, lc;
  c = 0;

  while ((c = getchar()) != EOF) 
  {
    if(!(c == ' ' && lc == ' '))
    {
      putchar(c);
    }
    lc = c;
  }

  return 0;

}