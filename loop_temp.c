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
    /* The reason for multiplying by 5 and dividing by 9 instead of just multiplying by 5/9 is that in
    C, as in many other languages, integer division truncates: any fractional part is discarded.
    Since 5 and 9 are integers. 5/9 would be truncated to zero and so all the Celsius temperatures
    would be reported as zero.
    */
    printf(":\t%d\t%d\n", fahr, cels);
    fahr = fahr + step;
  } 

  return 0;
}
