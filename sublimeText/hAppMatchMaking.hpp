#include <string>
#include <vector>

class Profile{

	std::string name;
	int age;
	std::string city;
	std::string country;
	std::string pronouns;
	std::vector <std::string> hobbies;

public:
	//constructor:
	Profile(std::string new_name, int new_age, std::string new_city,
			std::string new_country, std::string new_pronouns = "They/Them");

	//method to add hobbies:
	void add_hobby(std::string new_hobby);

	//method to view profile:
	std::string view_profile();
};