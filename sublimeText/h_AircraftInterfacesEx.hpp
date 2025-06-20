//second interface called Aircraft 

class Aircraft{
public:
	virtual void fly(int aircraftHeight) = 0;
	virtual void land() = 0;

	virtual ~Aircraft() {}
};