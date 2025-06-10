#include "h_TableMemoryManagement.hpp"

// definitions of Table class memebers 

Table::Table(int num): number(num), isAvailable(true){
  
}
// setters:
void Table::reserve(){
  isAvailable = false;
}
void Table::release(){
  isAvailable = true;
}
// getters:
bool Table::getIsAvailable() const{
  return isAvailable;
}
int Table::getTableNumber() const{
  return number;
}
