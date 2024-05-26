// Section 1.5.3

#include <stdio.h>

// Exercise 1-8
int main() 
{
    int c, nl, t, b;
    nl = 0;
    b = 0;
    t = 0;

    while((c = getchar()) != EOF) {
      if(c == '\n')
        ++nl;
      if(c == '\t')
        ++t;
      if(c == ' ')
        ++b;
    }

    printf("New Lines: %d\n", nl);
    printf("Blanks: %d\n", b);
    printf("Tabs: %d\n", t);

    return 0;
}