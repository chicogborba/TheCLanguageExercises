// Section 1.9

#include <stdio.h>
#define MAXLINE 1000

int getlineNew(char line[], int maxline);
void copy(char to[], char from[]);
void reverse(char s[]);

int main()
{
  int len;
  int max;
  char line[MAXLINE];
  char longest[MAXLINE];

  max = 0;
  while((len = getlineNew(line, MAXLINE)) > 0)
    if(len > max) {
      max = len;
      copy(longest, line);
    }
  if(max > 0)
    printf("%s\n" ,longest);
    printf("tamanho: %d\n", max);
    reverse(longest);
    printf("reverse: %s\n", longest);
  return 0;
}

int getlineNew(char s[], int lim) 
{
  int c,i;
  for( i=0; i < lim-1 && (c = getchar()) != EOF && c != '\n'; i++)
    s[i] = c;
  if(c == '\n') {
    s[i] = c;
    ++i;
  }
  s[i] = '\0';
  return i;
}

void copy(char to[], char from[])
{
  int i;

  i = 0;
  while((to[i] = from[i]) != '\0')
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