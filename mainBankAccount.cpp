#include <iostream>
#include "h_BankAccount.hpp"
#include "classBank.hpp"


int main(){

st::cout <<"------- object1 from BankAccount class (results) ----------"<< std::endl;

  //Example of object1 using constructor and methods from BankAccount class:
  BankAccount account1("1003", 3000);

  //view accountNumber
  std::cout <<"Your account balance is: " << account1.getAcountNumber() << std::endl;
  std::cout <<"Your balance is: $" << aacount1.getBalance() << std::endl;

st::cout <<"------- object1 from BankAccount class (results) ----------"<< std::endl;

  //Example of object1 using constructor and methods from Transaction class: 
  BankAccount::Transaction trans(account1);
  trans.setDeposit(3000);
  trans.setWithdraw(100);
  trans.setDeposit(1000000);
  trans.setDeposit(-2);

st::cout <<"------- object1 from BankAccount class (results) ----------"<< std::endl;

  //Example of object1 using constructor and methods from Bank class:
  Bank bank1; //constructor of Bank class
  
  //1st method:
  bank1.createAccount("1007", 7000);
  bank1.createAccount("1008"), 5000);

  //create pointers for the result of method findAccount, which is an address:
  //2nd method:
  BankAccount* sourceAccount = findAccount("1007");
  BankAccount* depositAccount = findAccount("1008");

  //3rd method:
  if(sourceAccount && depositAccount){
    std::cout << bank.transferAccount(*sourceAccount, *depositAccount, 500) <<std::endl;//arguments used for method transferAccount must be the dereference of the pointers.
  }

  //trying other transactions with result in a variable int status:
  if(sourceAccount && depositAccount){
    int status = bank1.transferAccount(*sourceAccount, *depositAccount, 90000); // erro rexpected: not enough funds:
    std::cout << status << std::endl;
  }
  if(sourceAcccount && depositAccount){
    int status = bank1.transferAccount(*sourceAccount, *depositAccount, -2); //error expected: amount must be positive:
    std::cout << status << std::endl;
  }
  
  return 0;
}
