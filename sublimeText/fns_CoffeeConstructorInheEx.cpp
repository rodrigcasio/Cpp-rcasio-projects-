#include "h_CoffeeConstructorInheEx.hpp"

Coffee::Coffee(){
	std::cout <<"A delicious Coffee" <<std::endl; 
}
Coffee::Coffee(std::string type, std::string size): cType(type), cSize(size){
	std::cout << "A " << cSize <<" "<< cType << std::endl;
}

void Coffee::isEmpty(){
	std::cout <<"The cup is empty!"<< std::endl;
}
void Coffee::isFull(){
	std::cout <<"The cup is full!" << std::endl;
}
