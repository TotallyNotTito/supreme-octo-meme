#include <stdio.h>

int
main () 
{
  
  long nc; 
  nc = 0; 
  /*
  int c is declared here for the SUBTLE reason that
  EOF corresponds to a specific integer value for 
  determining the ned of a file, EOF. EOF is an intebeger
  defined in '<std.io>'. 
  */
  while (getchar() != EOF) {
    ++nc;
  printf("%ld\n", nc);
  
  /* 
  function will suspend since there is no 
  text string to read from 
  */
  }

  /*
  Precedence matters and != has a greater precedence than = operator
  thus, the parens are necessary in order to ensure the evaluation of 
  expressions are done in the order we want the program to execute in
  */
  printf("Out of loop");
  return 0;  
}
