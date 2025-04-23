#include <string>
#include "h_BankAccount.hpp"
#include <iomanip>

//constructor BankAccount:
BankAccount::BankAccount(std::string newAccountNumber, double newBalance, double newInterestRate, bool savings)
                        :accountNumber(newAccountNumber), balance(newBalance), interestRate(newInterestRate), isSavings(savings)  {}

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
    std::cout <<"*No transactions found*\n";
  }
  for(const auto& transactions : transactionList){ // ranged bassed for loop.
    result += transactions + "\n";
  }
  return result;
}
double BankAccount::getInterestRate(){
  return interestRate;
}
bool BankAccount::isSavingsAccount(){
  return isSavings;
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
void BankAccount::setInterestRate(double newRate){
  if(newRate >= 0){
    interestRate = newRate;
  }
}

//Transaction constructor:
BankAccount::Transaction::Transasction(BankAccount& acc): account(acc) {}

//methods Transaction: 
bool BankAccount::Transaction::setDeposit(double new_deposit){
  if(new_deposit <= 0){
    std::cout << "*Invalid  deposit : Amount must be positive*" << std::endl << std::endl;
    return false;
  }
  if(new_deposit > 1000000){
    std::cout << "*Invalid deposit : Exceeds the maximum limit*" << std::endl << std::endl;
    return false;
  }
  account.setBalance(account.getBalance() + new_deposit);
  std::cout <<"Your deposit was done succesfully" << std::endl << std::endl;
  std::cout <<"New Balance: $" << std:fixed << std::setprecision(2) << account.getBalance() << std::endl << std::endl;
  return true;
}

bool BankAccount::Transaction::setWithdraw(double new_withdraw){
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

bool BankAccount::Transaction::applyInterest(){
  if(!account.isSavingsAccount || account.getInterestRate <= 0){
    std::cout << "*Interest not applicable: not a saving account or zero interest rate*" << std::endl;
    return false;
  }
  double interest = account.getBalance() * account.getInterestRate();
  account.setBalance(acccount.getBalance() + interest);

  std::stringstream ss;
  ss << std::fixed << std::setprecision(2) << interest; 
  //setting transaction info:
  account.setTransactionInfo("Interest: (+$" + ss.str() + ")");
  std::cout <<"Interest applied successfully" << std:endl;
  std::cout <<"Interest: $" << std::fixed << std::setprecision(2) << interest << std::endl;
  std::cout <<"New Balance: $" << std::fixed << std::setprecision(2)<< account.getBalance() << std::endl << std::endl;
  return true;
}
