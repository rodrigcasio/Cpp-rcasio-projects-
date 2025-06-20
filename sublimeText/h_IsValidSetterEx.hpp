#include <iostream>

void isValid(int code, int speed){
	if(code == 1){
		std::cout <<"Car speed succesfully set to "<< speed << std::endl;
	}
	else if(code == 2){
		std::cout <<"Car speed is invalid! Speed is set to "<< speed << '!'<< std::endl;
	}
	else{
		std::cout <<"Car is too fast! Speed is set to " << speed << '!'<< std::endl;
	}
}