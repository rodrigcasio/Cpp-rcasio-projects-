#ifndef H_BANKACCOUNT_HPP
#define H_BANKACCOUNT_HPP

#include <string>
#include <iostream>
#include <vector>


class BankAccount{
	std::string accountNumber;
	double balance;
	std::vector <std::string> transactionList;
	double interestRate;
	bool isSavings;

public:

	class Transaction{
		BankAccount& account;

	public:
		Transaction(BankAccount& acc); //constructor of reference BA&
		bool setDeposit(double new_deposit);
		bool setWithdraw(double new_withdraw);
		bool applyInterest();
	};

	BankAccount(std::string newAccount, double newBalance, double newInterestRate = 0.0, bool savings = false); //constructor 
	//getter methods:
	std::string getAccountNumber();
	std::string getTransactionInfo();
	double getBalance();
	double getInterestRate();
	bool isSavingsAccount();

	//setter methods:
	void setAccountNumber(std::string new_account_number);
	void setBalance(double new_balance);
	void setTransactionInfo(const std::string& transactionInfo);
	void setInterestRate(double newRate);
};

#endif
