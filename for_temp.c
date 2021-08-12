#include <stdio.h>
#include <stdlib.h>

int 
main(int argc, char * argv[])
{
  if (argc < 2) {
    printf("Error\n");
    return -1;
  } 
  
  for (float fahr = atof(argv[1]); fahr < 300; fahr += 10) {
    printf("%3.1f%6.1f\n", fahr, ((5.0/9.0) * (fahr - 32.0)));
  }  

  printf("%0.1f\n",((5.0/9.0) * (212.0 - 32.0)));
  /*
  float fahr, cels;
  int step = 10;
  int max = 200;
  fahr = atof(argv[1]);
  
  while (fahr < max) {
    cels = ((5.0/9.0) * fahr) - 32.0;
    printf("%3.1f%6.1f\n", fahr, cels);
    fahr = fahr + step;
  } 
  */
  
    

  return 0;
}
