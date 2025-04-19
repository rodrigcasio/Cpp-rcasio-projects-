#ifndef #H_BANKACCOUNT_HPP
#define #H_BANKACCOUNT_HPP

#include <string>
#include <iostream>


class BankAccount{
  std::string accountNumber;
  double balance;

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
  //setter methods:
  void setAccountNumber(std::string new_account_number);
  void setBalance(double new_balance);
  
  
};

#endif
