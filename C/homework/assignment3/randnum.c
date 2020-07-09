//Dylan Satow
//Assignment 3
//Program that generates a random number, then promts the user to guess the number.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
  srand(time(0));
  int num = rand() % 10;
  int guess;
  printf("The number has been generated. Please enter your guess.");
  scanf("%d", &guess);
  if (getchar() != '\n'){
    printf("Please enter a valid number.\n");
    while(getchar() != '\n');
  }
  printf("The number is %d\n", num);

  while(guess!=num){
    if(guess > num && guess < 30){
      printf("Your guess is too high.\n");
    }
    if(guess < num){
      printf("Your guess is too low.\n");
    }
    printf("Enter your new guess.\n");
    scanf("%d",&guess);
    if (getchar() != '\n'){
      printf("Please enter a valid number.\n");
      while(getchar()!='\n');
    }
  }

  printf("You guessed correctly. You win!");
  return 0;

}

