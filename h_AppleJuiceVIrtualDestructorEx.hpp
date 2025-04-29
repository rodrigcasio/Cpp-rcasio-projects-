#include "h_JuiceVirtualDestructorEx.hpp"
#include <iostream>

class AppleJuice : public Juice{
  public:
    AppleJuice(int jSize, std::string aType);
    std::string getAppleType();
    ~AppleJuice();

  private:
    std::string appleType;
};
