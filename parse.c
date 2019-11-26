#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

char ** parse_args( char * line ){
  char * args[5];
  char * arg = line;
  int idx = 0;
  while(arg){
    strsep(&arg, " ");
    args[idx] = arg;
    idx ++;
  }
  for (int i = 0; i < idx; i ++){
    printf("%s\n", args[i]);
  }
  return args;


}

int main(){
  parse_args("ls -a -l");
  return 0;
}
