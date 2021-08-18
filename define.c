#include <stdio.h>
#include <stdlib.h>

int 
main(int argc, char * argv[])
{
  #define LOWER 0
  #define UPPER 100
  #define STEP 20
  if (argc < 2 || atoi(argv[1]) > 100) {
    printf("%3s\n", "Error");
    return 1;
  }
  
  float fahr = atof(argv[1]); 
  float celsius = (5.0/9.0) * (fahr-32);

  for (int i = fahr; i < UPPER; i += STEP) {
    printf("%s%3.1f\t%s%3.1f\n", "Degrees in Celsius: ", celsius, "Degrees in Fahrenheit: ", fahr);
    celsius = (5.0/9.0) * (fahr) - 32;
    fahr = (9.0/5.0) * (celsius) + 32;
  }
  return 0;
}
