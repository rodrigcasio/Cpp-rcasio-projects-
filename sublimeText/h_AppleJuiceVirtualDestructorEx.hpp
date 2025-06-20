#include "h_JuiceVirtualDestructorEx.hpp"

class AppleJuice : public Juice{
public:
	AppleJuice(int juiceSize, std::string apple);
	std::string getAppleType();
	~AppleJuice();

private:
	std::string appleType;
};