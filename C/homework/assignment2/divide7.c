//Dylan Satow
//Assignment 2
//A program to determine whether or not an inputted integer is divisible by 7.

#include <stdio.h>

int main(){
  //Determining the number inputted
  int num;
  scanf("%d", &num);

  //Determining if the inputted number is divisible by 7
  if (num % 7 == 0){
    printf("%d is divisible by 7.\n", num);
  }
  else{
    printf("%d is not divisible by 7.\n", num);
  }
}
