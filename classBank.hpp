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
  BankAccount* findAccount(const std::string& findAccountNumber){
    for(BankAccount& account : accounts){
      if(account.getAccountNumber() == findAccountNumber){
        return &account;
      }
    }
    return nullptr;
  }

  int transferAccount(BankAccount& sourceAccount, BankAccount& depositAccount, double amount){
    int statusCode;
    BankAccount* sourcePtr = findAccount(sourceAccount.getAccountNumber()); //get the address of the object BankAccount class.
    BankAccount* depositPtr = findAccount(depositAccount.getAccountNumber());
    if(sourcePtr != &sourceAccount || depositPtr != &depositAccount){ //check if pointers are pointing to the same object.
      std::cout <<"*Invalid transfer: accounts not found*" << std::endl;
      std::cout <<"Status Code: ";
      return statusCode = 2; 
    }
    if(sourcePtr->getAccountNumber() == depositPtr->getAccountNumber()){ //prevents transfer to same accounts.
      std::cout <<"*Invalid transfer: cannot deposit from same account*"<< std::endl;
      std::cout <<"Status code: ";
      return statusCode = 2;
    }
    if(amount <= 0){ //1st amount condition
      std::cout<<"*Invalid transfer: amount should be a positive*"<< std::endl;
      std::cout <<"Status Code: ";
      return statusCode = 3;
    }
    
    if(amount <= sourcePtr->getBalance()){ //2nd amount condition
      //initialize an object from Transaction class with its constructor, patameters used is dereference of the pointer.
      BankAccount::Transaction sourceAcc(*sourcePtr); //dereference sourcePtr.
      if(!sourceAcc.setWithdraw(amount)){ //setWithdraw return bool. If condition true,  transaction is not done.
        std::cout <<"*Invalid Transfer: transaction could not be processed*" << std::endl;
        std::cout <<"Status Code: ";
        return statusCode = 3;
      }
      
      BankAccount::Transaction depositAcc(*depositPtr); //initialize the constructor of Transacion class to dereference depositPtr.
      if(!depositAcc.setDeposit(amount)){
        std::cout <<"*Invalid transfer: transaction could not be processed*"<< std::endl;
        std::cout <<"Status Code: ";
        return statusCode = 3;
      }
      //good to go. 
      std::cout <<"Your transfer was processed successfully"<< std::endl;
      std::cout <<"Status Code: ";
      return statusCode = 1;
    }
    std::cout <<"*Invalid transfer: insufficient funds"* << std::endl;
    std::cout <<"Status Code: ";
    return statusCode = 3;
  }
};

#endif
