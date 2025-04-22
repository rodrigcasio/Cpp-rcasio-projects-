#ifndef #H_BANKACCOUNT_HPP
#define #H_BANKACCOUNT_HPP

#include <string>
#include <iostream>


class BankAccount{
  std::string accountNumber;
  double balance;
  std::vector <std::string> transactionList;

public:
  class Transaction{
    BankAccount& account;
  public:
    Transaction(BankAccount& acc); //constructor of reference BA&
    void setDeposit(double new_deposit);
    bool setWithdraw(double new_withdraw);
  };

  BankAccount(std::string newAccount, double newBalance); //constructor
  //getter methods:
  string getAccountNumber();
  double getBalance();
  std::string getTransactionInfo();
  //setter methods:
  void setAccountNumber(std::string new_account_number);
  void setBalance(double new_balance);
  void setTransactionInfo(const std::string& transactionInfo);
  
  
};

#endif
