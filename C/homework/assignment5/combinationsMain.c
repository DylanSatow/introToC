//Dylan Satow
//Assignment 5
//This program uses the combination function. It takes an input of n and k, then gives nCk

#include <stdio.h>
#include "combinations.h"

int main(){
  int n,k;
  float ans;

  printf("Please enter k.");
  k = cleanint();
  printf("Please enter n.");
  n = cleanint();

  ans = combinations(k,n);
  printf("The answer is %f",ans);
}

