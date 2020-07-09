//Dylan Satow
//Assignment 6
//This houses the functions of the program. 
//displayInfo shows the status of each account.
//deposit allows the user to deposit money into the account
//Withdraw allows the user to withdraw money from the account
//createAccount creates an account

#include <stdio.h>
#include <string.h>
#include "banking.h"

void displayInfo(account acc){
  printf("\nAccountholder: %s ", acc.name);
  printf("\nAccount number: %08d", acc.accNum);
  printf("\nBalance: %lf\n", acc.balance);
}
account deposit(account acc, double amt){
  if(amt >= 0){
    acc.balance += amt;
//Return acc because structs are pass by value, and you cannot alter original memory loc
    return acc;
  }
  return acc;
}
account withdraw(account acc, double amt){
  if(amt >= 0){
    if(amt <= acc.balance){
      acc.balance -= amt;
      return acc;
    }
    else{
      printf("Insufficient Funds.\n");
    }
  }
  return acc;
}
account createAccount(char name[50]){
  account newAccount;
  //Ensure number <= 8 digits
  newAccount.accNum = rand() % 100000000;
  newAccount.balance = 0;
  strcpy(newAccount.name, name);
  return newAccount;
}

