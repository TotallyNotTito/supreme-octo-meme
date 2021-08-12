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
  int step = 10;
  int max = 200;
  fahr = atoi(argv[1]);

  while (fahr < max) {
    cels = (5 * (fahr - 32)) / 9;
    printf(":\t%d\t%d\n", fahr, cels);
    fahr = fahr + step;
  } 

  return 0;
}
