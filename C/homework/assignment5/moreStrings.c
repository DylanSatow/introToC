//Dylan Satow
//Assignment 5
//This file houses the functions firstMatch() and letterMatch().
//The former checks to see the first occurence of a certain character in a string.
//The latter will remove any occurence of a certain character from a string.

#include "moreStrings.h"

int firstMatch(char str[],char c){
  for(int i=0;i<strlen(str);i++){
    if(str[i] == c){
      return i;
    }
  }
  return -1;
}

void letterMatch(char str[],char c){
  int counter = strlen(str)+1;

//Check to see if the character matches an element in the string
  for(int i=0;i<strlen(str);i++){
//If the character is equal to a certain element in a string, remove the character and move all other elements in the string back one index.
    if(str[i]==c){
      for(int j=i+1;j<strlen(str)+1;j++){
        str[j-1] = str[j];
        counter--;
      }
    }
  }
//Move the \0 back to the proper end of the string.
  str[counter]='\0';
}
