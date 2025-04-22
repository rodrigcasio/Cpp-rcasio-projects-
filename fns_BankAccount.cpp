#include <string>
#include "h_BankAccount.hpp"
#include <iomanip>

//constructor BankAccount:
BankAccount::BankAccount(std::string newAccountNumber, double newBalance): accountNumber(newAccountNumber), balance(newBalance) {}

//methods BankAccount class:
//getter methods:
std::string BankAccount::getAccountNumber(){
  return accountNumber;
}
double BankAccount::getBalance(){
  return balance;
}

std::string BankAccount::getTransactionInfo(){ //print all the transactions from the vector transactionList method:
  std::string result;
  if(transactionList.empty()){
    std::cout <<"*No transactions found*" << std::endl;
  }
  for(const auto& transactions : transactionList){ // ranged bassed for loop.
    result += transactions + "\n";
  }
  return result;
}
//setter methods: 
void BankAccount::setAccountNumber(std::string new_account_number){
  accountNumber = new_account_number;
}
void BankAccount::setBalance(double new_balance){
  balance = new_balance;
}
void BankAccount::setTransactionInfo(const std::string& transactionInfo){ //adding strings to the vector, aka the transactions
  transactionList.push_back(transactionInfo);
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
  std::cout <<"New Balance: $" << std:fixed << std::setprecision(2) << account.getBalance() << std::endl << std::endl;
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
  std::cout <<"New balance: $" << std::fixed << std::setprecision(2) << account.getBalance() << std::endl << std::endl;
  return true;
}
