#include <stdio.h>

int main ()
{
  char * file = "sample.txt";
  FILE * fd = fopen(file, "r");

  if (!fd) {
    printf( "error: can not open %s", file);
    return 1;
  }
  
  char ch;
  int count = 0;
  while ((ch = fgetc(fd)) != EOF) {
    if (ch == '\t' || ch == '\n' || ch == ' ') {
      ++count;
      ch = 'X';
      putchar(ch);
    } 
    putchar(ch);
    //printf("%d\n",ch); 
  }
  fclose(fd);
  printf("\ncount is: %d\n", count);
  return 0;
}

/*
int 
main() 
{
  int c, nl;
  nl = 0;
  while ((c = getchar()) != EOF ) {
    if ((c = getchar()) == '\t' || (c = getchar()) == '\b' || (c = getchar()) == '\\') {
      printf("pass");
    }
    putchar(c);
    printf("%d\n ", c);
    if (c == '\n')
      ++nl;
  }
  printf("%d\n", nl);
  return 0;
}
*/
