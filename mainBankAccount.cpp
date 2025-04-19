#include <iostream>
#include "h_BankAccount.hpp"
#include "classBank.hpp"


int main(){

  //object1 
  BankAccount account1("1003", 3000);

  //view accountNumber
  std::cout <<"Your account balance is: " << account1.getAcountNumber() << std::endl;
  std::cout <<"Your balance is: $" << aacount1.getBalance() << std::endl;

  //object1 Transaction:
  BankAccount::Transaction trans(account1);
  trans.setDeposit(3000);
  trans.setWithdraw(100);
  trans.setDeposit(1000000);
  trans.setDeposit(-2);

  //initializing object1 Bank class:
  Bank bank;
  //using method createAccount();
  bank.createAcount("1005", 3000);

  //using method findAccount();
  BankAccount* ptr = bank.findAccount("1005");
  if(ptr){
    std::cout <<"The number of the account was found and it is: " << ptr->getAccountNumber() << std::endl;
    std::cout <<"The balance of the account found is: $" << ptr->getBalance() << std::endl;
  }
  else{
    std::cout <<"Account 1005 not found" << std::endl;
  }
  return 0;
}
