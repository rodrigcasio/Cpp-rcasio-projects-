#include "h_RestaurantMemoryManagement.hpp"
#include "h_CustomerMemoryManagement.hpp"
#include "h_TableMemoryManagement.hpp"
#include "fns_RemoveElement.cpp"
#include <memory>
#include <iostream>

Restaurant::Restaurant(int initialTableCount): tableCount(initialTableCount){   // 6.   Define Constructor 
    // using the constructor of table 'Table(int num)'
    for(int i = 1; i <= initialTableCount; ++i){               // 6. loop through 1 to "initialTableCount"
        tables.push_back(std::make_unique<Table>(i));          //    creates a table using "std::make_unique<Table>(i);
                                                               //    adding each table to "tables" vector with "tables.push_back(std::make_unique<Table>(i);"
    }                                                           
}

bool Restaurant::reserveTable(const std::shared_ptr<Customer>& customer){               // 7. takes a shared_ptr& to a Customer (a shared pointer can only be passed on by reference)
    // checking trough all the tables for customer, if full.. customer must wait.
    for(const std::unique_ptr<Table>& table : tables){                              // 8. loop through vector 'tables' (tables are smart "unique_ptr's"
        if(table->getIsAvailable()){                                                // 9.  accessing the method 'getIsAvailable' through pointer with (->) operator.
            table->reserve();                                                       // 10. reserves table and add customer to activeCustomers vector
            activeCustomers.push_back(customer);
            std::cout << "Table reserved for customer \"" << customer->getCustomerName() << "\" successfully." << std::endl;
            return true;
        }
    }
    // After all tables checked, if tables are not available, adding customer to waitlist  // 11.
    waitList.push_back(customer);
    std::cout << "Not available tables at the moment, \"" << customer->getCustomerName() << "\" added to the waiting-list."<< std::endl;
    return false;     // returning false if reservation was not possible at the moment.
}

void Restaurant::printWaitList() const{ // 12. 
    if(waitList.empty()){
        std::cout << "There are no customers on the waiting-list" << std::endl;
    }else{
        std::cout << "The following people are waiting he table: " << std::endl;   // 13.
        for(const std::weak_ptr<Customer>& customer : waitList){    // 14.
            if(auto customerPtr = customer.lock())  // 15, 16. Instead of "auto", could use "std::shared_ptr<Customer> customerPtr".
            std::cout << "- " << customerPtr->getCustomerName() << std::endl;
        }
    }
}

void Restaurant::releaseTable(int tableNumber){ // 18      placing the n# of the table
    bool found = false;
    for(const std::unique_ptr<Table>& table : tables){  // 19.
        if(table->getNumber() == tableNumber){  // 20.
            found = true;
            if(!table->getIsAvailable()) table->release();  // 21, 22.
            
            // waitList will be updated when table is released.
            notifyWaitlist();   // 30.
            break; 
        }
    }
    if(!found){     
        std::cout << "There is no table number: \"" << tableNumber << "\""<< std::endl;
    }
}

// priv method:
void Restaurant::notifyWaitlist(){  // 24. 
    if(!waitList.empty()){
        auto customer = waitList.front().lock();    // 25, 26. takes the first customer in the waitList vector and locks it to get a shareed pointer.
        if(customer)    // 27.
        reserveTable(customer); // 28.
        removeElement(waitList, waitList.front());  // 29.
            std::cout << "Customer \""<< customer->getCustomerName() << "\" was removed from the waiting-list and reserved a table successfully." << std::endl;
    }else{
        std::cout << "There are no customer on the waiting-list" << std::endl;
    }
}









/*   // Two approaches to create the notifyWaitlist() method:
 
 ====    1. First aproach of creating notifyWaitlist(), looping through the waitList vector and
              stopping it at the first customer found on the waitList.

    void Restaurant::notifyWaitlist(){  // 24.
        if(waitList.empty){ // 24.
            std::cout << "There are no customers on the waiting-list." << std::endl;
            return;
        }
        for(const std::weak_ptr<Customer>& customerWaiting : waitList){
            if(auto customer = customerWaiting.lock()){ // 25, 26.
                if(customer)    // 27.
                reserveTable(customer); // 28.
                removeElement(waitList, customerWaiting);   // 29.
                    std::cout << "Customer removed from the waiting-list and reserved a table successfully" << std::endl;
            }
            //ensures that the first customer is processed and the function exits immediately after.
            return;
        }
    }
   
 
 ====== 2. Second and cleaner approach to reserve table for the FIRST customer on the waitList vector and then 
           removing it from the waitList.

    void Restaurant::notifyWaitlist(){  // 24.
        if(!waitList.empty()){  // 24.
            auto customer = waitList.front().lock();    // 25, 26.
            if(customer)    // 27.
            reserveTable(customer)  // 28.
            removeElement(waitList, waitList.front());  // 29.
                std::cout << "Customer removed from waiting-list and reserved table successfully" << std::endl;
        }else{
            std::cout << "There are no customers on the waiting-list" << std::endl;
            return;
        }
    }

 */
