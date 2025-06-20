#ifndef RESTAURANT_MEMORY_MANAGEMENT_HPP
#define RESTAURANT_MEMORY_MANAGEMENT_HPP
#include <memory>
#include <vector>
#include "h_CustomerMemoryManagement.hpp"
#include "h_TableMemoryManagement.hpp"

class Restaurant {
    private:
        std::vector<std::unique_ptr<Table>> tables;     // 2.                 // ensures exclusive ownership of Table instance 
        std::vector<std::shared_ptr<Customer>> activeCustomers;   // 3.      // representing customer in the restaurnat
        std::vector<std::weak_ptr<Customer>> waitList;       // 4.           // customers added to a waitlist if reservation is not available
        int tableCount;
        void notifyWaitlist(); // 23. 
    
    public:
        Restaurant(int initialTableCount);// 5.
        bool reserveTable(const std::shared_ptr<Customer>& customer);   // 7.
        void printWaitList() const; // 12.
        void releaseTable(int tableNumber); // 18.
};

#endif
