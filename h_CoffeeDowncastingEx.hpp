#ifndef COFFEE_DOWNCASTING_EX_HPP
#define COFFEE_DOWNCASTING_EX_HPP
#include <iostream>

class Coffee{
  public:
    Coffee(int cSize, int cAmount, bool cIsHot);
    void addAmount(int amount);
    int getAmout();
    virtual void getTemperature();

  protected:
    int size;
    int amountLeft;
    bool isHot;
};

#endif
