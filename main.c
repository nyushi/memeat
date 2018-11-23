#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <errno.h>

extern int errno;

int main(int argc, char* argv[]){
  if(argc != 2){
    return 1;
  }
  int n = atoi(argv[1]);
  int size = n*1024*1024;

  void *p = malloc(size*sizeof(char));
  if(p == NULL){
    fprintf(stderr,"malloc error: %s\n", strerror(errno));
    return 2;
  }
  memset(p,'a',size);

  for(;;){
    sleep(1);
  }
  return 0;
}