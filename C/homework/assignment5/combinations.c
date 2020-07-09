//Dylan Satow
//Assignent 5
//factorial(n) is just the basic factorial function present in math. It uses recursion
//combinations(k,n) is just the basic combination function present in math.
//It calculates the total number of possibilities, but order doesn't matter.
//cleaninput() takes and input of n and k to be inputted into combinations(k,n)

#include <stdio.h>
#include "combinations.h"

int factorial(int n){
  //Calculate n! using recurssion
  if(n==1){
    return 1;
  }
  else{
    return n*factorial(n-1);
  }
}
int combinations(int k,int n){
  //If k>n, no combinations are possible
  if(k>n){
    return 0;
  }
  else{
    return (float)factorial(n)/(factorial(k)*factorial(n-k));
  }
}
int cleanint(){
  int num;
  scanf("%d",&num);
  //Ensure a valid input is entered
  while(getchar()!='\n'){
    while(getchar()!='\n');
    printf("Pleas enter a valid input\n");
    scanf("%d",&num);
  }
  return num;
}
