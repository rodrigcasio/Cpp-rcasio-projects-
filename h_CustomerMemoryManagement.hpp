#ifndef CUSTOMER_MEMORY_MANAGEMENT_HPP
#define CUSTOMER_MEMORY_MANAGEMENT_HPP
#include <string>
#include "h_RestaurantMemoryManagement.hpp"

class Customer{
  private:
    std::string name;
    
  public:
    Customer(const std::string& n);
    std::string getCustomerName() const; 
};

#endif
