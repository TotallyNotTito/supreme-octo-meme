#include <stdio.h>

int
main () 
{
  
  int c; 
  
  /*
  int c is declared here for the SUBTLE reason that
  EOF corresponds to a specific integer value for 
  determining the ned of a file, EOF. EOF is an intebeger
  defined in '<std.io>'. 
  */
  printf("%d\n", EOF);
  while ((c = getchar()) != EOF) {
  
  /* 
  function will suspend since there is no 
  text string to read from 
  */
    putchar(c);  
  }

  /*
  Precedence matters and != has a greater precedence than = operator
  thus, the parens are necessary in order to ensure the evaluation of 
  expressions are done in the order we want the program to execute in
  */
  printf("Out of loop");
  return 0;  
}
