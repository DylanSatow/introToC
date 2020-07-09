//Dylan Satow
//Assignment3
//This program takes inputs from the user, and it averages them.
//It will only output the average if a zero is entered.

#include <stdio.h>

int main(){
  int x;
  float input;
  int avg_numerator = 0;
  int avg_denominator = 0;

//Continue adding numbers to the input unless a zero is entered
  while (input != 0){
    printf("Enter a number to be averaged ");

    if (scanf("%f",&input) == 0){
      printf("Invalid input - please enter a number\n");
      while(getchar() != '\n');
      continue;
    }

    if (input != 0){
      avg_numerator += input;
      avg_denominator += 1;
    }
  }
  if (avg_numerator == 0){
    printf("You didn't input any numbers.\n");
  }
  else{
    float avg = (float) avg_numerator / avg_denominator;
    printf("The average is %.3f\n", avg);
  }
}

