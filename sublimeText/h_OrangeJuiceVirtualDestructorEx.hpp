#include "h_JuiceVirtualDestructorEx.hpp"

class OrangeJuice : public Juice{
public:
	OrangeJuice(int juiceSize, bool juicePulp);
	bool hasPulp();
	~OrangeJuice();

private:
	bool pulp;
};
