//Dylan Satow
//Assignment 6
//This program lets the user play rock paper scissors with the computer. It uses enums.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
enum moves {quit=0,rock,paper,scissors};

int main(){
  char moveName[4][10] = {"","rock","paper","scissors"};
  srand(time(0));
  enum moves input;
  enum moves computerMove;
  int play = 1;
  printf("Let's play Rock Paper Scissors!");

  while(play==1){
  //+1 to ensure computer can't enter a 0. This is also why it is %3 over %4
  computerMove = (rand()%3)+1;
  printf("Select a move:\n");
  printf("1. Rock\n");
  printf("2. Paper\n");
  printf("3. Scissors\n");
  printf("0. Quit\n");

  printf("Your choice:\n");
  scanf("%d",&input);

  //Ensure valid input
  while(getchar()!='\n'){
    printf("Please enter a valid input.\n");
    scanf("%d",&input);
  }
  printf("Computer chose: %s\n",moveName[computerMove]);

  //I would rather use a switch statement, but I don't know how to with enums
  if(input==quit){
    printf("Goodbye!\n");
    play = 0;
  }
  if(input==rock){
    if(computerMove==rock)
      printf("It's a draw");
    if(computerMove==paper)
      printf("You lose!");
    if(computerMove==scissors)
      printf("You win!");
  }
  if(input==paper){
    if(computerMove==rock)
     printf("You win!");
    if(computerMove==paper)
      printf("It's a draw!");
    if(computerMove==scissors)
      printf("You lose!");
  }
  if(input==scissors){
    if(computerMove==rock)
      printf("You lose!");
    if(computerMove==paper)
      printf("You win!");
    if(computerMove==scissors)
      printf("It's a draw!");
  }
  }
}
