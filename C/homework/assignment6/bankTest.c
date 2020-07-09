//Dylan Satow
//Assignment 6
//This program generates bank accounts, then changes the balance. It uses structs and typedef. 

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "banking.h"

int main(){
  srand(time(0));
  //Array of accounts
  account database[5] = {createAccount("John Smith"),createAccount("Jane Doe"),createAccount("Fred"),createAccount("Bill"),createAccount("Sophie")};

  //For loop is to do it to all accounts
  for(int i=0;i<5;i++){
    displayInfo(database[i]);
    printf("\nDepositing $50.00...\n");
    database[i] = deposit(database[i],50);
    displayInfo(database[i]);
  }
  for(int i = 0;i<5;i++){
    displayInfo(database[i]);
    printf("\nWithdrawing $30.00...\n");
    database[i] = withdraw(database[i],30);
    displayInfo(database[i]);
  }
}
