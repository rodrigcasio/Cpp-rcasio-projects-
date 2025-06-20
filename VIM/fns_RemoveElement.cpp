#include <vector>
#include <string>
#include <algorithm>
#include <memory>
#include <iostream>
#include "h_CustomerMemoryManagement.hpp"


// function to erease an element from a vector of shared_ptr's.

void removeElement(std::vector<std::weak_ptr<Customer>>& vec, const std::weak_ptr<Customer>& ptr){
    vec.erase(std::remove_if(vec.begin(), vec.end(), [&ptr](const std::weak_ptr<Customer>& element){
        return !element.owner_before(ptr) && !ptr.owner_before(element);
        }), 
    vec.end());
}


// new functions:

// 1. erase()
// 2. remove_if()
// 3. owner_before()
