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
      if(auto customerPtr = customer.lock()) // 15, 16. Instead of "auto", could use "std::shared_ptr<Customer> customerPtr"
      std::cout << "- " << customerPtr->getCustomerName() << std::endl;
    }
  }
}

void Restaurant::releaseTable(int tableNumber){ // 18. 
  bool found = false;
  for(const std::unique_ptr<Table> table : tables){  // 19.
    if(table->getNumber() = tableNumber){  // 20.
      found = true;
      if(!table->getIsAvailable()) table->release();  // 21, 22. Found and reserved, we release table.
      
      // waitList will be updated 
      notifyWaitlist(); // 30.
      break;
    }
  }
  if(!found){
    std::cout << "There is no table with number: \"" << tableNumber << "\"" << std::endl;
  }
}

void Restaurant::notifyWaitlist(){ // 24.
  if(!waitList.empty()){  
    auto customer = waitList.front().lock(); // 25, 26.
    if(customer)  // 27
      reserveTable(customer);  // 28.
      removeElement(waitList, waitList.front()); // 29. removing element from waitList vector.
      std::cout << "Customer removed from the waiting-list and reserved a table successfully" << std::endl;
  }else{
    std::cout << "There are no customers on the waiting-list" << std::endl;
  }
}

/*  // Two approaches to create notifyWaitlist() method:

==== 1. First approach of creating notifyWaitlist(), looping through the waitList vector and
        and stopping it at the first customer found on the waitList.

void Restaurant::notifyWaitlist(){
  if(waitList.empty()){
    std::cout << "There are no customers on the waiting-list" << std::endl;
    return;
  }
  for(const std::weak_ptr<Customer>& customerWaiting : waitList){
    if(auto customer = customerWaiting.lock()){
      if(customer)
        reserveTable(customer);
        removeElement(waitList, customerWaiting);
      std::cout << "Customer removed from the waiting-list and reserved a table successfully." << std::endl;
    }
    return;    / ensures only the first customer is processed and the fucntion exits immediately after.
  }
}

==== 2. Cleaner approach to reserve table for the FIRST customer on the waitList vector
        and then removin git from the waitList.

void Restaurant::notifyWaitlist(){
  if(!waitList.empty()){
    auto customer = waitList.front().lock(); 
    if(customer)
      reserveTable(customer);
      removeElement(cutomer, waitList.front());
    std::cout << "Customer removed from waiting-list and reserved a table successfully" << std::endl;
  }else{
    std::cout << "There are no customers on the waiting-list" << std::endl;
  }
}

*/




