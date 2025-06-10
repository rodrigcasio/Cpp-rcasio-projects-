#include "h_CustomerMemoryManagement.hpp"
// definitions of Customer class members 

Customer::Customer(const std::string& n): name(n){
  
}
std::string Customer::getCustomerName() const{
  return name;
}
