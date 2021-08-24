#include <stdio.h>
#include <stdlib.h>

#define IN 1 //inside world
#define OUT 0 //outside world


int 
main(int argc, char * argv[])
{
  if (argc < 1) 
    return 1;
 
  FILE * fd; 
  fd = fopen("/home/titoreinhart/c_progs/sample.txt","r");
  if(!fd) {
    printf("ERROR\n");
    exit(1);  
  }

  int state, c;
  char * text;
  state = OUT;
  printf("Success\n");
  fscanf(fd, "%s", text);
  printf("%s", text);
  fclose(fd);
  
  return 0;
}
