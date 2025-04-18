#include <iostream>
#include "h_BankAccount.hpp"
using namespace std;

int main(){

  //object1 
  BankAccount account1("1003", 3000);

  //view accountNumber
  cout <<"Your account balance is: " << account1.getAcountNumber() << endl;
  cout <<"Your balance is: $" << aacount1.getBalance() << endl;

  //object1 Transaction:
  BankAccount::Transaction trans(account1);
  trans.setDeposit(3000);
  trans.setWithdraw(100);
  trans.setDeposit(1000000);
  trans.setDeposit(-2);

  
  return 0;
}
