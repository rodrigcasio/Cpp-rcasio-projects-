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
      statusCode = 2;
      std::cout <<"Status Code: " << statusCode << std::endl;
      return statusCode;
    }
    if(sourcePtr->getAccountNumber() == depositPtr->getAccountNumber()){ //prevents transfer to same accounts.
      std::cout <<"*Invalid transfer: cannot deposit from same account*"<< std::endl;
      statusCode = 2;
      std::cout <<"Status code: " << statusCode << std::endl;
      return statusCode;
    }
    if(amount <= 0){ //1st amount condition
      std::cout<<"*Invalid transfer: amount should be a positive*"<< std::endl;
      statusCode = 3;
      std::cout <<"Status Code: " << statusCode << std::endl;
      return statusCode;
    }
    
    if(amount <= sourcePtr->getBalance()){ //2nd amount condition
      //initialize an object from Transaction class with its constructor, patameters used is dereference of the pointer.
      BankAccount::Transaction sourceAcc(*sourcePtr); //dereference sourcePtr.
      if(!sourceAcc.setWithdraw(amount)){ //setWithdraw return bool. If condition true,  transaction is not done.
        std::cout <<"*Invalid Transfer: transaction could not be processed*" << std::endl;
        statusCode = 3;
        std::cout <<"Status Code: " << statusCode << std::endl;
        return statusCode;
      }
      
      BankAccount::Transaction depositAcc(*depositPtr); //initialize the constructor of Transacion class to dereference depositPtr.
      if(!depositAcc.setDeposit(amount)){
        std::cout <<"*Invalid transfer: transaction could not be processed*"<< std::endl;
        statusCode = 3;
        std::cout <<"Status Code: "<< statusCode << std::endl;
        return statusCode;
      }

      std::stringstream ss;
      ss << std::fixed << std::setprecision(2) << amount; //changing the decimals of a double turned into string.
      //setting transaction information on 2 strings 
      //record transactions:
      std::string sourceTransactionInfo = "Account: #" + sourcePtr->getAccountNumber() + " (-$" + ss.str() + ")" + "------>" + "#" + depositPtr->getAccountNumber();
      std::string depositTransactionInfo = "Account: #" + despositPtr->getAccountNumber() + " (+$" + ss.str() + ")" + "<------" + "#" + sourcePtr->getAccountNumber();

      sourcePtr->setTransactionInfo(sourceTransactionInfo); //using the methods from BankAccount withh pointers
      depositPtr->setTransactionInfo(depositTransactionInfo); //palacing the 2 strings into the method as arguments to store them into vector transactionList();
      
      //good to go. 
      std::cout <<"Your transfer was processed successfully"<< std::endl;
      statusCode = 1;
      std::cout <<"Status Code: " << statusCode << std::endl;
      return statusCode;
    }
    std::cout <<"*Invalid transfer: insufficient funds"* << std::endl;
    statusCode = 3;
    std::cout <<"Status Code: " << statusCode << std::endl;
    return statusCode;
  }

void transactionHistory(const std::string& accountNumber){
  BankAccount* accountPtr = findAccount(accountNumber);
  if(!accountPtr){
    std::cout <<"*Invalid search: Account was not found*" << std::endl;
    return;
  }
  std::cout <<"Transaction History of Account #" << accountNumber << std::endl;
  std::cout << accountPtr->getTransactionInfo();
  std::cout <<"\t-Current total: "<< accountPtr->getBalance() << "-" << std::endl << std::endl;
  }

  void applyInterestToAllSavings(){
    bool applied = false;
    for(BankAccount& account : accounts){
      if(account.isSavingsAccount()){
        BankAccount::Transaction transaction(account);
        if(transaction.applyInterest()){
          applied = true;
        }
      }
    }
    if(!applied){
      std::cout << "*No savings accounts with applicable interest*" << std::endl << std::endl;
    }
  }

};

#endif
