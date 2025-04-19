#ifndef CLASSBANK_HPP
#define CLASSBANK_HPP

#include <vector>
#include "h_BankAccount.hpp"

class Bank{
private:
  std::vector <BankAccount> accounts;

public:
  //constructor
  Bank(): accounts(){}

  //methods:
  void createAccount(std::string accountNumber, double initialBalance){
    accounts.push_back(BankAccount(accountNumber, initialBalance)); //using constructor of BankAccount class.. 
  }
  BankAccount* findAccount(std::string findAccountNumber){
    for(BankAccount& account : accounts){
      if(account.getAccountNumber() == findAccountNumber){
        return &account;
      }
    }
    return nullptr;
  }
  
};

#endif
