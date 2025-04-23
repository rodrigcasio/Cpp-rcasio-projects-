#include <string>
#include "h_BankAccount.hpp"
#include <iomanip>
#include <sstream>

//Constructor BankAccount:
BankAccount::BankAccount(std::string newAccountNumber, double newBalance, double newInterestRate, bool savings):
						 accountNumber(newAccountNumber), balance(newBalance), interestRate(newInterestRate), isSavings(savings){}

//Methods BankAccount class
//Getter methods:
std::string BankAccount::getAccountNumber(){
	return accountNumber;
}

double BankAccount::getBalance(){
	return balance;
}

std::string BankAccount::getTransactionInfo(){ 					//print all the transaction from vector transactionList method:
	std::string result;
	if(transactionList.empty()){
		return "*No transaction found*\n";
	}
	for(const auto& transactions : transactionList){
		result += transactions + "\n";
	}
	return result;
}

double BankAccount::getInterestRate(){
	return interestRate;		//returns the stored rate.. 
}

bool BankAccount::isSavingsAccount(){
	return isSavings;			//returns true for saving accounts, false otherwise
}

//---Setter methods:
void BankAccount::setAccountNumber(std::string new_account_number){
	accountNumber = new_account_number;
}

void BankAccount::setBalance(double new_balance){
	balance = new_balance;
}

void BankAccount::setTransactionInfo(const std::string& transactionInfo){
	transactionList.push_back(transactionInfo);
}

void BankAccount::setInterestRate(double newRate){
	if(newRate >= 0){				//prevents negative interests rates (invalid for savings accounts)
		interestRate = newRate;		//updates the rates 
	}
}


//constructor Transaction class
BankAccount::Transaction::Transaction(BankAccount& acc): account(acc) {}

//methods Transaction class
bool BankAccount::Transaction::setDeposit(double new_deposit){
	if(new_deposit <= 0){
		std::cout <<"*Invalid deposit : Amount must be positive*"<< std::endl << std::endl;
		return false;
	}
	if(new_deposit > 1000000){
		std::cout <<"*Invalid deposit : Amount exceeds the maximum limit*" << std::endl << std::endl;
		return false;
	}
	account.setBalance(account.getBalance() + new_deposit);
	std::cout <<"Your deposit was done successfully" << std::endl;
	std::cout <<"New Balance: $"<< std::fixed << std::setprecision(2) <<account.getBalance() << std::endl << std::endl;
	return true;
}
//encapsulates interest as a transaction, consisten with detDeposit and setWithdraw. 
bool BankAccount::Transaction::setWithdraw(double new_withdraw){
	if(new_withdraw <= 0){
		std::cout <<"*Invalid withdrawal : Amount must be positive*" << std::endl << std::endl;
		return false;
	}
	if(account.getBalance() < new_withdraw){
		std::cout <<"*Invalid withdrawal : not enough funds*" << std::endl << std::endl;
		return false;
	}
	account.setBalance(account.getBalance() - new_withdraw);
	std::cout <<"Your withdrawal was done successfully" << std::endl;
	std::cout <<"New balance: $"<< std::fixed << std::setprecision(2) << account.getBalance() << std::endl << std::endl;
	return true;
}

bool BankAccount::Transaction::applyInterest(){
	if(!account.isSavingsAccount() || account.getInterestRate() <= 0){				//checks if the account is a savings account and has a positive rate interest..
		std::cout << "*Interest not applicable: not a savings account or zero interest rate*" << std::endl << std::endl;
		return false;
	}
	double interest = account.getBalance() * account.getInterestRate();  			//declare and define a double interest : calculates simple interest of the account:
	account.setBalance(account.getBalance() + interest); 								//adds interest to balance.

	std::stringstream ss;
	ss << std::fixed << std::setprecision(2) << interest; 							//changes the decimal format
	//setting transaction info:
	account.setTransactionInfo("Interest: (+$" + ss.str() + ")");					//records transaction. 
	std::cout <<"Interest applied successfully" << std::endl;							//prints success 
	std::cout <<"Interest: $" << std::fixed << std::setprecision(2) << interest << std::endl;			//prints formated interest 	
	std::cout <<"New Balance: $" << std::fixed << std::setprecision(2) << account.getBalance() << std::endl << std::endl;		//prints balance:
	return true;			//indicates success!

}
