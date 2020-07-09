#include <stdio.h>
#include <string.h>

int main(){
  char input[100];
  int arr;

  fgets(input,sizeof(input),stdin);
  sscanf(input,"%d",&arr);

  printf("%d",arr);
}
