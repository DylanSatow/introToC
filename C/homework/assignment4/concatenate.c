//Dylan Satow
//Assignment 4
//Takes an input of two strings, then combines them into the first.

#include <stdio.h>
#include <string.h>

int main(){
  char str1[200], str2[100];
  int i;
  
  //Get both variables
  printf("Enter the first string");
  fgets(str1,sizeof(str1),stdin);
  printf("Enter the second string");
  fgets(str2,sizeof(str2),stdin);
  int str1len=strlen(str1), str2len=strlen(str2);

  //Combine the strings
  for(i=0;i<str2len+1;i++){
    str1[str1len+i-1] = str2[i];
  }
  printf("The new string is: %s\n",str1);
}

