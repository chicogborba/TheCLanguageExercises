// Section 1.2

#include <stdio.h>

/* print Fahrenheit-Celsius table 
for fahr = 0, 20, ... , 300 */

int main() 
{
  float fahr, celsius;
  int lower, upper, step;

  lower = 0;
  upper = 300;
  step = 20;

  fahr = lower;

  printf("Conversão de Fahrenheit para Celsius\n");
  printf(" ________\n");
  printf(" |F    C|\n");
  printf(" ‾‾‾‾‾‾‾‾\n");

  while(fahr <= upper) 
  {
    celsius = (5.0/9.0) * (fahr - 32.0);
    printf("%3.0f%6.1f\n", fahr, celsius);
    fahr += step;
  }

  printf("\nConversão de Celsius para Fahrenheit\n");
  printf(" ________\n");
  printf(" |C    F|\n");
  printf(" ‾‾‾‾‾‾‾‾\n");

  celsius = lower;

  while(celsius <= upper)
  {
    fahr = (1.8 * celsius) + 32.0;
    printf("%3.0f%6.1f\n", celsius, fahr);
    celsius += step;
  }

  return 0;
}

