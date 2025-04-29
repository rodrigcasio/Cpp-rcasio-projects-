#ifndef JUICE_VIRTUAL_DESTRUCTOR_EX_HPP
#define JUICE_VIRTUAL_DESTRUCTOR_EX_HPP
#include <iostream>
#include <string>

class Juice{
  public:
    Juice(std::string jType, int jSize);
    void setJuiceType(std::string newType);
    void setJuiceSize(int newSize);
    std::string getJuiceType();
    int getJuiceSize();

  protected:
    std::string type;
    int size;
};

#endif 
