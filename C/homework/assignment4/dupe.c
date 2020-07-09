//Dylan Satow
//Assignment 4
//Takes an array as an input, then removes all duplicates and outputs it.

#include <stdio.h>
#include <string.h>

int main(){
  int arr[10];
  int arrLen = 10;

  printf("Enter the array in the format num1 num2 num3... and leave no trailing space. If a zero is entered, it will not be returned.\n");
  for(int i=0;i<10;i++){
    scanf("%d",&arr[i]);
  }

  //Ensure array is valid
  while(getchar() != '\n'){
    while(getchar()!='\n');
    printf("Please enter a valid array. Enter the array in the format num1 num2 num3...\n");
    for(int i=0;i<10;i++){
      scanf("%d",&arr[i]);
    }
  }

  //Turn all duplicates into a zero
  for(int i=0;i<10;i++){
    if(arr[i]!=0){
      for(int j=0;j<10;j++){
        if(j!=i && arr[i] == arr[j] && arr[j]!=0){
          arr[j] = 0;
        }
      }
    }
  }
  //Only print non-zero places
  for(int i=0;i<10;i++){
    if(arr[i]!=0){
      printf("%d ",arr[i]);
    }
  }


}
