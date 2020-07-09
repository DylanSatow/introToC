#include <stdio.h>

int main(){
  int counter;
  int sum = 0;

  printf("How many integers would you like to sum?");
  scanf("%d", &counter);

  for(;counter>=0;counter--){
    sum += counter;
  }
  printf("The sum of the first n integers is: %d", sum);
}
