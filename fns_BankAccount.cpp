#include <string>
#include "h_BankAccount.hpp"
using namespace std;

//constructor BankAccount:
BankAccount::BankAccount(string newAccountNumber, double newBalance): accountNumber(newAccountNumber), balance(newBalance) {}

//methods BankAccount class:
string BankAccount::getAccountNumber(){
  return accountNumber;
}
double BankAccount::getBalance(){
  return balance;
}

void BankAccount::setAccountNumber(string new_account_number){
  accountNumber = new_account_number;
}
void BankAccount::setBalance(double new_balance){
  balance = new_balance;
}

//Transaction constructor:
BankAccount::Transaction::Transasction(BankAccount& acc): account(acc) {}

//methods Transaction: 
void BankAccount::Transaction::setDeposit(double new_deposit){
  if(new_deposit <= 0){
    cout << "*Invalid  deposit : Amount must be positive*" << endl << endl;
    return;
  }
  if(new_deposit > 1000000){
    cout << "*Invalid deposit : Exceeds the maximum limit*" << endl << endl;
    return;
  }
  account.setBalance(account.getBalance() + new_deposit);
  cout <<"Your deposit was done succesfully" << endl;
  cout <<"New Balance: $" << account.getBalance() << endl << endl;
}

void BankAccount::Transaction::setWithdraw(double new_withdraw){
  if(new_withdraw <= 0){
    cout <<"*Invalid withdrawl : Amount must be positive*" << endl << endl;
    return false; 
  }
  if(account.getBalance() < new_withdraw){
    cout <<"*Invalid withdrawl : not enough funds*" << endl <, endl;
    return false;
  }
  account.setBalance(account.getBalance() - new_withdraw);
  cout <<"Your withdrawl was done successfully" << endl;
  cout <<"New balance: $" << account.getBalance() << endl << endl;
  return true;
}
