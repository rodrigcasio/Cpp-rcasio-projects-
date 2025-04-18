#include <string>
#include <iostream>
using namespace std;

class BankAccount{
  string accountNumber;
  double balance;

public:
  class Transaction{
    BankAccount& account;
  public:
    Transaction(BankAccount& acc); //constructor of reference BA&
    void setDeposit(double new_deposit);
    bool setWithdraw(double new_withdraw);
  };

  BankAccount(string newAccount, double newBalance); //constructor
  //getter methods:
  string getAccountNumber();
  double getBalance();
  //setter methods:
  void setAccountNumber(string new_account_number);
  void setBalance(double new_balance);
  
  
};
