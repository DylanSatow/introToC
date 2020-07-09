//Dylan Satow
//Assignment 4
//Takes an input of a number, then generates a random array. It then checks to see the
//number of times the number appears in the array.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
  srand(time(0));
  int arr[15];
  int input;
  int count = 0;
  int i;

  printf("What number are you looking for?");
  scanf("%d",&input);
  
  if(getchar()!='\n'){
    while(getchar() != '\n');
    printf("Please enter a valid input.");
    scanf("%d",&input);
  }

  printf("The array:");

  for(i = 0; i < 15; i++){
    arr[i] = rand() % 11;

    if(arr[i]==input){
      count++;
      printf("%d*, ",arr[i]);
    }

    else{
      printf("%d, ", arr[i]);
    }
  }
  printf("\nThe number of %ds in the array is %d.\n", input, count);
}
