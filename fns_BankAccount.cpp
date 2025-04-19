#include <string>
#include "h_BankAccount.hpp"

//constructor BankAccount:
BankAccount::BankAccount(std::string newAccountNumber, double newBalance): accountNumber(newAccountNumber), balance(newBalance) {}

//methods BankAccount class:
std::string BankAccount::getAccountNumber(){
  return accountNumber;
}
double BankAccount::getBalance(){
  return balance;
}

void BankAccount::setAccountNumber(std::string new_account_number){
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
    std::cout << "*Invalid  deposit : Amount must be positive*" << std::endl << std::endl;
    return;
  }
  if(new_deposit > 1000000){
    std::cout << "*Invalid deposit : Exceeds the maximum limit*" << std::endl << std::endl;
    return;
  }
  account.setBalance(account.getBalance() + new_deposit);
  std::cout <<"Your deposit was done succesfully" << std::endl << std::endl;
  std::cout <<"New Balance: $" << account.getBalance() << std::endl << std::endl;
}

void BankAccount::Transaction::setWithdraw(double new_withdraw){
  if(new_withdraw <= 0){
    std::cout <<"*Invalid withdrawl : Amount must be positive*" << std::endl << std::endl;
    return false; 
  }
  if(account.getBalance() < new_withdraw){
    sdt::cout <<"*Invalid withdrawl : not enough funds*" << std::endl < std::endl;
    return false;
  }
  account.setBalance(account.getBalance() - new_withdraw);
  std::cout <<"Your withdrawl was done successfully" <<std::endl;
  std::cout <<"New balance: $" << account.getBalance() << std::endl << std::endl;
  return true;
}
