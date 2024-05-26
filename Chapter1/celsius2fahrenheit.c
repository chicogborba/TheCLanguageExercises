// Section 1.2

#include <stdio.h>

/* print Fahrenheit-Celsius table 
for fahr = 0, 20, ... , 300 */

// Exercise 1-15

int F2C(int f);
int C2F(int c);

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
    celsius = F2C(fahr);
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
    fahr = C2F(celsius);
    printf("%3.0f%6.1f\n", celsius, fahr);
    celsius += step;
  }

  return 0;
}

int F2C(int fahr)
{
  int c;
  c = (5.0/9.0) * (fahr - 32.0);
  return c;
}

int C2F(int celsius)
{
  int f;
  f = (1.8 * celsius) + 32.0;
  return f;
}

