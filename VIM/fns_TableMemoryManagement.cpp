#include "h_TableMemoryManagement.hpp"

// definitions of Table class

Table::Table(int num): number(num), isAvailable(true){
    
}
//setters:
void Table::reserve(){ 
    isAvailable = false;
}
void Table::release(){
    isAvailable = true;
}
//getters:
bool Table::getIsAvailable() const{
    return isAvailable;
}
int Table::getNumber() const{
    return number;
}


