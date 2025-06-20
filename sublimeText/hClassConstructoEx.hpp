#include <string>

class Song{

	//atributes: 
	std::string title;
	std::string artist;

public: 
	//constructor:
	Song(std::string title, std::string artist);

	//2nd methods, used for constructor
	std::string get_title();
	std::string get_artist();


};