#include <string>

class City{
  //attributes 
  std::string state;
  int population;

public:
  //assign values to state and population attributes:
  void add_state(std::string new_state);
  void add_population(int new_population);

  //2nd methods for return state and population 
  std::string get_state();
  int get_population();
};
