#include <stdio.h>

int 
main() 
{
  int c, nl;
  nl = 0;
  while ((c = getchar()) != EOF ) {
    putchar(c);
    printf("%d\n ", c);
    if (c == '\n')
      ++nl;
  }
  printf("%d\n", nl);
  return 0;
}
