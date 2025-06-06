#include <iostream>

// This is another example of making sure we set to "nullptr" 
// after deleting it to avoid double deletion which could cause
// undefined behaviour

int main(){

  int* ptr1 = new int(59);
  delete ptr1;
  // delete ptr1;

  if(ptr1 != nullptr){
    ptr1 = nullptr;
    std::cout << "- pointer has been set to \"nullptr\" succesfully" << std::endl;
  }else{
    std::cout << "Memory has been deallocated already" << std::endl;
  }

  return 0;
}
