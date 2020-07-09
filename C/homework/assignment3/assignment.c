#include <stdio.h>

int main(){

  int n = 5;
  int sum = 0, i, j;
  for( i = 0; i < n; i++ )
    for( j = 0; j < n; j++ )
        sum++;

  printf("%d\n", sum);
}
