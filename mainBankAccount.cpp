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
    bank1.transferAccount(*sourceAccount, *depositAccount, 500); //arguments used for method transferAccount must be the dereference of the pointers.
    bank1.transferAccount(*sourceAccount, *depositAccount, 900); 

    //switching the sender and the receiver examples (just for fun):
    bank1.transferAccount(*depositAccount, *sourceAccount, 99);
  }
  
  //trying other transactions with result in a variable int status:
  if(sourceAccount && depositAccount){
     bank1.transferAccount(*sourceAccount, *depositAccount, 90000); // error rexpected: not enough funds:
  }
  if(sourceAcccount && depositAccount){
    int status = bank1.transferAccount(*sourceAccount, *depositAccount, -2); //error expected: amount must be positive:
  }

  //using method of transactionHistory();
  bank1.getTransactionInfo("1007");
  bank1.getTransactionInfo("1008");

  st::cout <<"------- Interests test result:----------"<< std::endl;

  bank3.createAccount("1010", 600, 0.02, true);
  bank3.createAccount("1011", 8000, 0.0, false);
  bank3.createAccount("1012", 7777, 0.09, true);

  BankAccount& accountPtr1 = bank3.findAccount("1010");
  BankAccount& accountPtr2 = bank3.findAccount("1011");
  BankAccount& accountPtr3 = bank3.findAccount("1012");

  if(accountPtr1 && accountPtr2 && accountPtr3){
    bank3.transferAccount(*accountPtr1, *accountPtr2, 200);
    bank3.transferAccount(*accountPtr1, *accountPtr2, 20);
    bank3.transferAccount(*accountPtr2, *accountPtr3, 2000);
    bank3.transferAccount(*accountPtr2, *accountPtr1, 10);
  
  }

  bank3.applyToAllSavings();

  bank3.transactionHistory("1010");
  bank3.transactionHistory("1011");
  bank3.transactionHistory("1012");
  
  return 0;
}
