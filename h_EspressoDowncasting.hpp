#include "h_CoffeeDowncastingEx.hpp"

class Espresso : public Coffee{
  public:
    Espresso(int cSize, int cAmount, bool cDblShot);
    void isDoubleShot();

  private:
    bool dblShot;
};
