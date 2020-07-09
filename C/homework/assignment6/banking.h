//Dylan Satow
//Assignment 6

#include <stdlib.h>
#ifndef BANKING_H
#define BANKING_H

typedef struct{
  int accNum;
  char name[50];
  double balance;
}account;

void displayInfo(account acc);
account deposit(account acc,double amt);
account withdraw(account acc,double amt);
account createAccount(char name[]);
#endif
