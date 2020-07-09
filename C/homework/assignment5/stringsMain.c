//Dylan Satow
//Assignment 5
//The functions of this program were described in moreStrings.c
//This program inputs 2 strings into firstMatch() and letterMatch(). 

#include <stdio.h>
#include "moreStrings.h"

int main(){
  char str1[]="Hello, this is the first string";
  char str2[]="I am str number 2";
  char char1 = 'h';
  int ans;

  printf("First String before firstMatch(): %s",str1);
  ans = firstMatch(str1,char1);
  printf("\nfirstMatch(str1,'h'): %d",ans);

  printf("\nSecond string before firstMatch(): %s",str2);
  ans = firstMatch(str2,char1);
  printf("\nfirstMatch(str2,'h'): %d",ans);

  printf("\nFirst string before letterMatch(): %s",str1);
  letterMatch(str1,char1);
  printf("\nFirst String after letterMatch(str1,'h'): %s",str1);

  printf("\nSecond string before letterMatch(): %s",str2);
  letterMatch(str2,char1);
  printf("\nSecond string after letterMatch(str2,'h'): %s\n",str2);
}
