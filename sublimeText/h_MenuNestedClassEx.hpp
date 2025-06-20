#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Menu{

private:
	class MenuItem{
	private:
		string description;

	public:
		//Constructor of menuItem class:
		MenuItem(string mDrecription);
		string getDescription(); //method getter of menuItem class:

	};
	
	vector <MenuItem*> menuItems;

public: 
	//destructor and methods of Menu class:
	~Menu();
	void addMenuItem(string mDescription);
	void printMenu();
};