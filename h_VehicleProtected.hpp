#ifndef VEHICLE_PROTECTED_EX_HPP
#define VEHICLE_PROTECTED_EX_HPP

class Vehicle {
  public:
    void setVehicleType(std::string vehicleType);
    std::string geVehicleType();
  private:
    std::string type;

  protected:
    std::string make;
    int year;
    std::string model;

};

#endif 
