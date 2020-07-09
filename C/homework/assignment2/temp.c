//Dylan Satow
//Converts a Farrenheit Temperature to Celcius
//7/1/20

#include <stdio.h>

int main(){
  float farrenheit;
  printf("Please enter a farrenheit value");
  scanf("%f", &farrenheit);
  float celcius = (farrenheit - 32) / 1.8;
  printf("It is %f degrees celcius\n", celcius);
  return 0;
}
