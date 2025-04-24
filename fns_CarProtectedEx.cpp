#include

void Car::displayCarInfo(){
  std::cout <<"Vehicle type: "<< getVehicleType() << std::endl;
            <<"Car make: "<< make << std:endl;
            <<"Car model: "<< model << std::endl;
            <<"Car year: "<< year << std::endl;
}
void Car::setType(std::string carType){
  setVehicleType(carType);
}
void Car::setYear(int carYear){
  year = carYear;
}
void Car::setMake(std::string carMake){
  make = carMake;
}
void Car::setModel(std::string carModel){
  model = carModel;
}
