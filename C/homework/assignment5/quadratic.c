//Dylan Satow
//Assignment 5
//This program takes an input of a,b,c (ax^2+bx+c) and performs the quadratic formula on the equation, assuming it is equal to 0.

#include <stdio.h>
#include <math.h>

double getPosRoot(a,b,c){
  double ans = (-b + sqrt((b*b)-(4*a*c)))/(2*a);
  return ans;
}
double getNegRoot(a,b,c){
  double ans = (-b + sqrt((b*b)-(4*a*c)))/(2*a);
  return ans;
}

int main(){
  double a,b,c,ans;
  int sign;

  //Get a,b,c, and if the root is negative or positive
  printf("\nWhat is a?");
  scanf("%lf",&a);
  printf("\nWhat is b?");
  scanf("%lf",&b);
  printf("\nWhat is c?");
  scanf("%lf",&c);
  printf("\nDo you want the positive or negative root (1 or 0)");
  scanf("%d",&sign);

  //If the discriminant is negative, print no solution
  if((b*b)-(4*a*c)<0){
    printf("No real solution");
  }
  else{
    if(sign==1){
      ans = getPosRoot(a,b,c);
      printf("The positive root is %lf",ans);
    }
    if(sign==0){
      ans = getNegRoot(a,b,c);
      printf("The negative root is %lf",ans);
    }
  }
}
