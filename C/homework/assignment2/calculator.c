//Dylan Satow
//Assignment 2
//This program takes an input of an operation and two numbers, then performs the selected  operation on the numbers.

#include <stdio.h>

int main(){

  //Get the operator
  printf("Select an operation (+, -, /, *, %%)");
  char operator = getchar();

  //Get the number inputs
  printf("Enter two numbers\n");
  float num1, num2;
  scanf("%f", &num1);
  scanf("%f", &num2);

  //Perform the operation on the two numbers (using a switch statement). 
  //The modulus output is converted to an integer.
  //The output for all other operations is a float rounded to two decimal places.
  switch(operator){
    case '+':
      printf("Answer: %.2f \n", num1+num2);
      break;
    case '-':
      printf("Answer: %.2f \n", num1-num2);
      break;
    case '*':
      printf("Answer: %.2f \n", num1*num2);
      break;
    case '/':
      printf("Answer: %.2f \n", num1/num2);
      break;
    case '%':
      printf("Answer: %d \n", (int) num1 % (int) num2);
      break;
  }


}
