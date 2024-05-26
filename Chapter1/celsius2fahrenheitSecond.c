// Section 1.3


#include <stdio.h>

// Section 1.4
// Adição dos #define
#define LOWER 0
#define UPPER 300
#define STEP 20

int main()
{
  int fahr;
  for (fahr = LOWER; fahr <= UPPER; fahr += STEP)
      printf("%3d %6.1f\n", fahr, (5.0/9.0 * (fahr-32)));


  return 0;
}
