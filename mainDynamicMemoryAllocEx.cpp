#include <iostream>

//this is an example of requesting memory from the heap during runtime 

int main(){

  //dynamically allocating memory for an integer
  int* intPtr = new int(49);

  //using the dereference pointer to access the value stored in the location where the ptr is pointing it to.
  std::cout << *intPtr << std::endl;

  //now properly deallocating the memory of the ptr..
  delete intPtr;

  return 0;
}
