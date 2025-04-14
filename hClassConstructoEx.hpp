#include <string>

class Song{
  //attributes:
  std::string title;
  std::string artist;

public:
  //constructor:
  Song(std::string new_title, std::string new_artist);

  //methods used for the constructor:
  std::string get_title();
  std::string get_artist();
};
