//interface called class, no need for cpps of this header...

class Car{
public:
	virtual void drive(int carSpeed) = 0;
	virtual void stop() = 0;

	virtual ~Car() {}
};