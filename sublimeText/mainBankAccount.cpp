#include <iostream>
#include "h_BankAccount.hpp"
#include "classBank.hpp"

int main(){

std::cout <<"------- object1 from BankAccount class (results) ----------" << std::endl;

	//Example of object1 using constructor and methods from BankAccount class: 
	BankAccount account1("1003", 3000);

	//view accountNumber:
	std::cout <<"Your account number is: " << account1.getAccountNumber() << std::endl;
	std::cout <<"Your balance is: $" << account1.getBalance() << std::endl;

std::cout <<"------- object1 from Transaction class (results) ----------" << std::endl;

	//Example of Object1 using constructor and methods from Transaction class:
	BankAccount::Transaction tran(account1);

	tran.setDeposit(3000);
	tran.setWithdraw(100);
	tran.setDeposit(10000000);
	tran.setDeposit(-2);

std::cout <<"------- object1 from Bank class (results) ----------" << std::endl;	

	//Example of object1 using constructor and methods from Bank class:
	Bank bank2;
	//1st method:
	bank2.createAccount("1007", 7000);
	bank2.createAccount("1008", 8000);

	//2nd method:
	BankAccount* sourceAccount = bank2.findAccount("1007"); //placing the address of the "1007" acocunt into the bank2Ptr...
	BankAccount* depositAccount = bank2.findAccount("1008"); 

	//3rd method only printing the method return:
	if(sourceAccount && depositAccount){
		bank2.transferAccount(*sourceAccount, *depositAccount, 500); //*sourceAccount and *depositAccount are dereferences...
		bank2.transferAccount(*sourceAccount, *depositAccount, 800);

		//switching the sender and receiver example: 
		bank2.transferAccount(*depositAccount, *sourceAccount, 99);
	}

	//trying other transactions wiht result in a variable int status:
	if(sourceAccount && depositAccount){
		bank2.transferAccount(*sourceAccount, *depositAccount, 9000);
	}
	if(sourceAccount && depositAccount){
		bank2.transferAccount(*sourceAccount, *depositAccount, -9);
	}

	//using method of transactionHistory():
	bank2.transactionHistory("1007");
	bank2.transactionHistory("1008");


std::cout <<"------- Interest test result: ----------" << std::endl;

	Bank bank3;										//initialize another bank object:

	bank3.createAccount("1010", 600, 0.02, true);			//first method of Bank class: createAccount() e.g
	bank3.createAccount("1011", 8000, 0.0, false);	//not savings account
	bank3.createAccount("1012", 7777, 0.09, true);	

	BankAccount* accountPtr1 = bank3.findAccount("1010");		//second method of Bank class: findAccount() e.g.
	BankAccount* accountPtr2 = bank3.findAccount("1011");		//declare pointers for the address of the account.
	BankAccount* accountPtr3 = bank3.findAccount("1012");

	if(accountPtr1 && accountPtr2 && accountPtr3){				//transactions e.g. 
		bank3.transferAccount(*accountPtr1, *accountPtr2, 300);			//third method of Bank class: transferAccount() e.g.
		bank3.transferAccount(*accountPtr1, *accountPtr2, 100);
		bank3.transferAccount(*accountPtr2, *accountPtr1, 5000);
		//switching the order as an e.g.
		bank3.transferAccount(*accountPtr1, *accountPtr2, 2000);		
		bank3.transferAccount(*accountPtr3, *accountPtr2, 100);
		bank3.transferAccount(*accountPtr2, *accountPtr1, 10);
		bank3.transferAccount(*accountPtr1, *accountPtr3, 30);
		bank3.transferAccount(*accountPtr1, *accountPtr3, 2000);
	}

	bank3.applyInterestToAllSavings();			//fifth method of Bank class: applyInterestToAllSavings() e.g.

	bank3.transactionHistory("1010");			//fourth method of Bank class: transactionHistory() e.g.
	bank3.transactionHistory("1011");
	bank3.transactionHistory("1012");

	return 0;
}