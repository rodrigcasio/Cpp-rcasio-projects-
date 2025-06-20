#ifndef COFFEE_DOWNCASTING_HPP
#define COFFEE_DOWNCASTING_HPP
#include <iostream>

class Coffee{
	public:
		Coffee(int cSize, int cAmount, bool cIsHot);
		void addAmount(int amount);
		int getAmount();
		virtual void checkTemperature();

	protected:
	int size;
	int amountLeft;
	bool isHot;
};

#endif