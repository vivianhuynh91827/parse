#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

char ** parse_args(char * line){
  char ** args = malloc(sizeof(char *)*5);
  
  int idx = 0;
  while (line != NULL){
    args[idx] = strsep(&line," ");
    idx++;
  }
  args[idx] = NULL;
  return args;
}

int main(){
  char test[100] = "ls -a -l";
  char ** args = parse_args(test);
  execvp(args[0], args);
  return 0;
}
