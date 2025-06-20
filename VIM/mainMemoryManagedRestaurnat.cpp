#include <iostream>
#include "h_RestaurantMemoryManagement.hpp"

int main() {
    
    // 31.
    Restaurant restaurant(5); 

    // 32. 
    std::shared_ptr<Customer> customer1 = std::make_shared<Customer>("Rodrigo Casio");
    std::shared_ptr<Customer> customer2 = std::make_shared<Customer>("John Mayer");
    std::shared_ptr<Customer> customer3 = std::make_shared<Customer>("Rocio Garcia");
    std::shared_ptr<Customer> customer4 = std::make_shared<Customer>("Chris Martin");
    std::shared_ptr<Customer> customer5 = std::make_shared<Customer>("Avril Lavigne");
    std::shared_ptr<Customer> customer6 = std::make_shared<Customer>("Albus Dombuldore");
    std::shared_ptr<Customer> customer7 = std::make_shared<Customer>("Harry Potter");
    std::shared_ptr<Customer> customer8 = std::make_shared<Customer>("Ron Weisley");
    std::shared_ptr<Customer> customer9 = std::make_shared<Customer>("Hermione Granger");
    std::shared_ptr<Customer> customer10 = std::make_shared<Customer>("Severus Snape");

    // 33.
    restaurant.reserveTable(customer1);
    restaurant.reserveTable(customer2);
    restaurant.reserveTable(customer3);
    restaurant.reserveTable(customer4);
    restaurant.reserveTable(customer5);
    restaurant.reserveTable(customer6);
    restaurant.reserveTable(customer7);
    restaurant.reserveTable(customer8);
    restaurant.reserveTable(customer9);
    restaurant.reserveTable(customer10);

    // appears the people who didnt get a table // output: Rocio Garcia and Chris Martin.
    restaurant.printWaitList();

    // 34.
    restaurant.releaseTable(2);

    // 35.
    restaurant.printWaitList();


    return 0;
}
