//Dylan Satow
//Assignment 4
//Takes 2 string inputs, and will then output the first location where a character in the 
//second string appears in the first string. 
//Space complexity = 200 characters of string + 1 int + 2 ints = 200 bytes + 12 bytes = 212 bytes
//O(n^2) B/c there is one nested for loop

#include <stdio.h>
#include <string.h>

int main(){
  char str1[100];
  char str2[100];
  int num = 0;

  //Get both strings
  printf("Enter the first string.");
  fgets(str1,sizeof(str1),stdin);
  printf("Enter the second string.");
  fgets(str2,sizeof(str2),stdin);

  //Get the first location where a character in the second string appears in the first
  for(int i=0;i<strlen(str1)-1;i++){
    for(int j=0;j<strlen(str2)-1;j++){
      if(str1[i]==str2[j]){
        printf("%d\n",i);
        num = 1;
        break;
      }
    }
    if(num==1){
      break;
    }
  }
  //If no common characters were found, print -1
  if(num==0){
    printf("-1\n");
  }
}
