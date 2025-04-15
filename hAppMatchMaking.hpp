#include <string>
#include <vector>

class Profile{
  //atrtibutes:
  std::string name;
  int age;
  std::string city;
  std::string country;
  std::string pronouns;
  std::vector <std::string> hobbies;

  //decl of constructor: 
  Profile(std::string new_name, int new_age, std::string new_city, std::string new_country,
          std:string new_pronouns = "they/them");

  //method 1 add new hobby to hobbies vector:
  void add_hobby(std::string new_hobby);

  //method 2 returning the profile:
  std::string view_profile();
};
