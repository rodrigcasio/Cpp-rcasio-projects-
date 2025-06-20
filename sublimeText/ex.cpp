#include <iostream>
#include <string>

int main(){

	std::vector <std::string> transactionList;

	int amount = 300;

	std::string sourceAccount = "1008";
	std::string depositAccount = "1010";

	std::string transactionInfo = "Account: #" + sourceAccount + " (-$" + std::to_string(amount) + ")" + "----> " + "Account: #" + depositAccount;
	std::string transactionInfo2 = "Account: #" + depositAccount + " (+$" + std::to_string(amount) + ")" + "<---- " + "Account: #" + sourceAccount;
	
	transactionList.push_back(transactionInfo);
	transactionList.push_back(transactionInfo2);

	for(int i = 0; i < transactionList.size(); i++){
		std::cout << transactionList[i] << std::endl;
	}

	return 0;
}