#include <iostream>
/*
Example of Defualt Arguments 

	std::string parameterName = "Default value"; 
	adding the defualt value only in the declaration, not in the definition.
 
*/
//fun dec
void intro(std::string name, std::string lang = "C++");

int main(){
  intro("Rodrigo")
}

//fun def
void intro(std::string name, std::string lang){
  std::cout << "Hi my name is "<< name << " and I'm learning "
            << lang << "\n";
}
