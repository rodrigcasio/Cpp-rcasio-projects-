#include "hAppMatchMaking.hpp"
#include <iostream>

//constructor def:
Profile::Profile(std::string new_name, int new_age, std::string new_city,
				 std::string new_country, std::string new_pronouns):
				name(new_name), age(new_age), city(new_city), country(new_country),
				pronouns(new_pronouns){}

//method 1:
void Profile::add_hobby(std::string new_hobby){
	if(!new_hobby.empty()){		//consider invalid input strings
		hobbies.push_back(new_hobby);
	}
}

//method 2:
std::string Profile::view_profile(){
	std::string profileBio = "Name: " + name; 
	profileBio += "\nAge: " + std::to_string(age);
	profileBio += "\nCity: " + city;
	profileBio += "\nCountry: " + country;
	std::string hobby_string = "Hobbies: \n"; //new string to print out string:

	//new string to add the hobbies added:
	for(std::string hobby : hobbies){
		hobby_string += " - " + hobby + "\n";
	}

	return profileBio + "\n" + hobby_string;
}