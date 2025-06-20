#ifndef CLASSBANK_HPP
#define CLASSBANK_HPP

#include <vector>
#include "h_BankAccount.hpp"
#include <iomanip>
#include <sstream>


class Bank{
private:
	std::vector<BankAccount> accounts;

public:
	//constructor:
	Bank(): accounts() {}

	//methods:
	void createAccount(std::string accountNumber, double initialBalance, double newInterestRate = 0.0, bool savings = false){ //updateed for interest rate and isSaving account..
		accounts.push_back(BankAccount(accountNumber, initialBalance, newInterestRate, savings));
	}

	//method to find account from the vector accounts:
	BankAccount* findAccount(const std::string& findAccountNumber){    					//return type needs to the object we want to find, and using & findAccountNumber to not make a copy but an allias. 
		for(BankAccount& account : accounts){
			if(account.getAccountNumber() == findAccountNumber){
				return &account;
			}
		}
		return nullptr;
	}

	int transferAccount(BankAccount& sourceAccount, BankAccount& depositAccount, double amount){
		int statusCode;
		BankAccount* sourcePtr = findAccount(sourceAccount.getAccountNumber());
		BankAccount* depositPtr = findAccount(depositAccount.getAccountNumber());
		if(sourcePtr != &sourceAccount || depositPtr != &depositAccount){ 				//checks if the pointers are pointing to same object.
			std::cout <<"*Invalid transfer: Transaction could not be processed*" << std::endl;
			statusCode = 2;
			std::cout <<"Status Code: #" << statusCode << std::endl;
			return statusCode;
			
		}
		if(sourcePtr->getAccountNumber() == depositPtr->getAccountNumber()){ 			//prevents transfer same account
			std::cout <<"*Invalid transfer: cannot deposit in same account*"<< std::endl;
			statusCode = 2;
			std::cout << "Status Code: #" << statusCode << std::endl;
			return statusCode;
		}
		if(amount <= 0){ //1. condition of money..
			std::cout <<"*Invalid transfer: Amount must be positive*"<< std::endl;
			statusCode = 3;
			std::cout <<"Status Code: #" << statusCode << std::endl;
			return statusCode;
		}  
		if(amount <= sourcePtr->getBalance()){

			BankAccount::Transaction sourceAcc(*sourcePtr);
			if(!sourceAcc.setWithdraw(amount)){
				std::cout <<"*Invalid transfer: transaction could not be processed*"<< std::endl;
				statusCode = 3;
				std::cout <<"Status Code: #" << statusCode << std::endl;
				return statusCode;
			}

			BankAccount::Transaction depositAcc(*depositPtr);
			if(!depositAcc.setDeposit(amount)){
				std::cout <<"*Invalid transfer: transaction could not be processed*"<< std::endl;
				statusCode = 3;
				std::cout <<"Status Code: #" << statusCode << std::endl;
				return statusCode;
			}
			
			//record transactions:
			//setting transaction information on 2 strings:
			std::stringstream ss;
			ss << std::fixed << std::setprecision(2) << amount; 				//changing the decimals of a double turned into string.

			std::string sourceTransactionInfo = "Account: #" + sourcePtr->getAccountNumber() + " (-$" + ss.str() + ")" + "------>" + "#" +depositPtr->getAccountNumber();
			std::string depositTransactionInfo = "Account: #"+ depositPtr->getAccountNumber() + " (+$" + ss.str() + ")" + "<------" + "#" +sourcePtr->getAccountNumber();

			sourcePtr->setTransactionInfo(sourceTransactionInfo);  				//setting  the transaction information of the account source to the vector transactionList with this method:
			depositPtr->setTransactionInfo(depositTransactionInfo);				//setting the transaction information of the account deposit to the vector transactionList  with this method:

			std::cout <<"Your transfer was done successfully!"<< std::endl;
			statusCode = 1;
			std::cout <<"Status Code: #" << statusCode << std::endl;
			return statusCode;
		}
		std::cout <<"*Invalid transfer: insufficient balance*"<< std::endl;
		statusCode = 3;
		std::cout <<"Status Code: #" << statusCode <<std::endl;
		return statusCode;
	}

	void transactionHistory(const std::string& accountNumber){ //how does this parameter work?
	BankAccount* accountPtr = findAccount(accountNumber);
	if(!accountPtr){
		std::cout <<"*Invalid search: Account was not found*" << std::endl;
		return;
	}
	std::cout <<"Transaction History of Account: #" << accountNumber <<  std::endl;
	std::cout << accountPtr->getTransactionInfo();
	std::cout <<"\t-Current total: $" << std::fixed << std::setprecision(2) << accountPtr->getBalance() <<"-"<<std::endl << std::endl;
	}

	void applyInterestToAllSavings(){
		bool applied = false; 										//tracks if any interest was applied:
		for(BankAccount& account : accounts){						//iterates over all accounts:
			if(account.isSavingsAccount()){ 						//checks if bank account is a savings account:
				BankAccount::Transaction transaction(account);			//creates a transaction object for the account to use applyInterest() method:
				if(transaction.applyInterest()){ 					//applies interest, checks if success:
					applied = true;
				}
			}
		}
		if(!applied){
			std::cout <<"*No savings accounts with applicable interest*" << std::endl << std::endl;
		}
	}
};




#endif
