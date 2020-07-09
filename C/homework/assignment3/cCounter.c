//Dylan Satow
//Assignment 3
//This program takes a string input,
//and it outputs the number of C's that appear (case doesn't matter)

#include <stdio.h>

int main(){
  char input;
  int cCount = 0;

  printf("Please enter the string.");
  input = getchar();

//The program continuously updates the input variable,
//as long as there are still letters stored in the memory.
//It will then check to see if the input is a c, and will add 1 to the cCount variable 
  while(input != '\n'){
    if(input == 'c' || input == 'C'){
      cCount++;
    }
    input = getchar();
  }

  printf("There were %d C's in the string\n",cCount);
}
