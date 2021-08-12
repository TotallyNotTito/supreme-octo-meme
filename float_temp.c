#include <stdio.h>
#include <stdlib.h>

int 
main(int argc, char * argv[])
{
  if (argc < 2) {
    printf("Error\n");
    return -1;
  } 
  float fahr, cels;
  int step = 10;
  int max = 200;
  fahr = atof(argv[1]);

  while (fahr < max) {
    cels = ((5.0/9.0) * fahr) - 32;
    printf("%3.1f%6.1f\n", fahr, cels);
    fahr = fahr + step;
  } 

  return 0;
}
