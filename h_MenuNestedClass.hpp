#include <string>
using namespace std;

class Menu{
private:
  class MenuItems{
  private:
    string description;

  public:
    MenuItem(string mDescription); //constructor:
    string getDescription(); //method getter of MenuItems class
  };

  vector <MenuItems> menuItems;

public:
  ~Menu();
  void addMenuItem(string mDescription);
  void printMenu();
};
