#ifndef COFFEE_CONSTRUCTOR_INHE_EX_HPP
#define COFFEE_CONSTRUCTOR_INHE_EX_HPP

class Coffee{
  public:
    Coffee(); //1st constructor 
    Coffee(std::string type, std::string size); //2nd constructor to set values to cType and cSize.
    void isFull();
    void isEmpy();

  private:
  std::string cType;
  std::string cSize;
};

#endif
