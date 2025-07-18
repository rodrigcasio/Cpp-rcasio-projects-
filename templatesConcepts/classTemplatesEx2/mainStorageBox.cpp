#include "h_StorageBox.hpp"

int main(){

    StorageBox<std::string> box1("Apples");

    std::cout << "Stored value: " << box1.getStoredValue() << std::endl;

    return 0;
}