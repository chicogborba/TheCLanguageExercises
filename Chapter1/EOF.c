// Section 1.5
#include <stdio.h>

int main () 
{
// int c;

// while ((c = getchar()) != EOF)
//   putchar(c);
  int result = getchar() != EOF;
  printf("%d\n", result);
  printf("%d", EOF);

  return 0;
}