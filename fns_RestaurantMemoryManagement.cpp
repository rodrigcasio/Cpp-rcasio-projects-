#include "h_RestaurantMemoryManagement.hpp"
#include <iostream>

Restaurant::Restaurant(int initialTableCount): tableCount(initialTableCount) {  // 6. Define Constructor 
  for(int i = 1; i <= initialTableCount; ++i){
    tables.push_back(std::make_unique<Table>(i));  // 6. create a table, adding each table to "tables: vector
                                                    // create table with std::make_unique<Table>(i);
                                                    // add each table to "tables" vector with "tables.push_back(std::make_unique<Table>(i);"; 
  }
}

bool Restaurant::reserveTable(const std::shared_ptr<Customer>& customer){  // 8. Takes a shared_ptr& to a Customer (a shared pointer can only be passed on by reference)
  for(const std::unique_ptr<Table>& table : tables){
    if(table->getIsAvailable()){            // 9. accessing getIsAvailable through a pointer with "table->getIsAvailable()"
      table->reserve();                     // 10. if table is available, we access reserve() method to reserve a table with "table->reserve()"
      activeCustomers.push_back(customer);  // 11. adding customer to "activeCustomers" vector.
      std::cout << "Table successfully reserved." << std::endl;
      return true;                          // returning true if reservation went through.
    }
  }
  // After all tables checked, if tables are not available, adding customer to waitList vector.
  waitList.push_back(customer);
  std::cout << "No tables are available at the moment, customer moved to wait-list." << std::endl;
  return false;                  // returnning false if reservation was not possible at the moment.
}

void Restaurant::printWaitlist() const{  // 12.
  if(waitList.empty()){
    std::cout << "There are no customers on the waiting-list" << std::endl;
  }else{
    std::cout << "The following are the poeple waiting for the table" << std::endl; // 13.
    for(const std::weak_ptr<Customer>& customer : waitList){  // 14.
      if(auto customerPtr = customer.lock()){  // 15, 16. Instead of "auto", could use "std::shared_ptr<Customer> customerPtr"
        std::cout << "- " << customerPtr->getCustomerName() << std::endl;
      }
    }
  }
}
