#ifndef CAR_PROTECTED_EX_HPP
#define CAR_PROTECTED_EX_HPP

class Car : public Vehicle{
  public:
    void setType(std::string carType);
    void setYear(int carYear);
    void setMake(std::string carMake);
    void setModel(std::string carModel);

    void displayCarInfo(); 
};

#endif
