#include "hAppMatchMaking.hpp"

//constructor def:
Profile::Profile(std::string new_name, int new_age, std::string new_city, std::string new_country,
                 std::string new_pronouns): name(new_name), age(new_age), city(new_city), country(new_country), pronouns(new_pronouns) {}

//method 1: 
void Profile::add_hobby(std::string new_hobby){
  if(!new_hobby.empty()){  //condition in case invalid input string: 
    hobbies.push_back(new_hobby);
  }
}

//method 2:
std::string Profile::view_profile(){
  std::string profileBio = "Name: " + name;  //creating a new string to return it at the end.
  profileBio += "\nAge: " + std::to_string(age); 
  profileBio += "\nCity: " + city;
  profileBio += "\nCountry: " + country;
  
  std::string hobby_string = "Hobbies: \n"; //creating a new string to add all the contents of hobbies after iterating them in a for loop.
  for(std::string hobby : hobbies){ //creating a 2nd string add all the strings of hobbies into this new string hobby.
    hobby_string += " - " + hobby + "\n";   //adding the contents of hobby into hobby_string.
  }
  return profileBio + "\n" hobby_string; 
}
