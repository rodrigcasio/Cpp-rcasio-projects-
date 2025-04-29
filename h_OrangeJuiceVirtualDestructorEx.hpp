#include "h_JuiceVirtualDestructorEx.hpp"
#include <iostream>

class OrangeJuice : public Juice{
  public:
    OrangeJuice(int jSize, bool juicePulp);
    bool hasPulp();
    ~OrangeJuice();

  private:
    bool pulp;
};
