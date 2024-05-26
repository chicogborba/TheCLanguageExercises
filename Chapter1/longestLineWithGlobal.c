// Section 1.10

#include <stdio.h>
#define MAXLINE 1000

int max;
char line[MAXLINE];
char longest[MAXLINE];

int getlineNew(void);
void copy(void);
void reverse(char s[]);

int main()
{
  int len;
  extern int max;
  extern char line[MAXLINE];
  extern char longest[MAXLINE];

  max = 0;
  while((len = getlineNew()) > 0)
    if(len > max) {
      max = len;
      copy();
    }
  if(max > 0)
    printf("tamanho: %d\n", max);
    printf("%s" ,longest);
    reverse(longest);
    printf("reverse: %s\n", longest);
  return 0;
}

int getlineNew(void) 
{
  extern char line[];
  int c,i;
  for( i=0; i < MAXLINE-1 && (c = getchar()) != EOF && c != '\n'; i++)
    line[i] = c;
  if(c == '\n') {
    line[i] = c;
    ++i;
  }
  line[i] = '\0';
  return i;
}

void copy(void)
{
  int i;
  extern char line[], longest[];

  i = 0;
  while((longest[i] = line[i]) != '\0')
    ++i;
}


// Exercise 1-19
void reverse(char s[])
{
  int i,j;
  char temp;

  // Pegando o tamanho da string
  i = 0;
  while(s[i] != '\0')
    ++i;
  --i;
  if(s[i] == '\n')
    --i;

  j=0;  
  while (j < i) {
    temp = s[j];
    s[j] = s[i];
    s[i] = temp;
    ++j;
    --i;
  }
}