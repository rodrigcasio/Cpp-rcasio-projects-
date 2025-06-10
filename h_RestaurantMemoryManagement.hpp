#ifndef RESTAURANT_MEMORY_MANAGEMENT_HPP
#define RESTAURANT_MEMORY_MANAGEMENT_HPP
#include <memory>
#include <vector>
#include "h_CustomerMemoryManagement.hpp"
#include "h_TableMemoryManagement.hpp"

// this class manages tables, customers and waitlist

class Restaurant {
  private:
    std::vector<std::unique_ptr<Table>> tables;    // 2. exclusive ownership of Table instances.
    std::vector<std::shared_ptr<Customer>> activeCustomers;    // 3. represents the customers in the restaurant.
    std::vector<std::weak_ptr<Customer>> waitList;        // 4. if reservation is not available, customers added to waitList.
    int tableCount;

  public:
    Restaurant(int initialTableCount);        // 5. Constructor (taking number of tables)
    bool reserveTable(const std::shared_ptr<Customer>& customer);
};

#endif 
