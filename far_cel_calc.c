#include <stdio.h>
#include <stdlib.h>

int 
main(int argc, char * argv[])
{
  if (argc < 2) {
    printf("Error\n");
    return -1;
  } 
  int fahr, cels;
  fahr = atoi(argv[1]);
  cels = (5 * (fahr - 32)) / 9;
  printf(":\t%d\t%d\n", fahr, cels);
  return 0;
}
