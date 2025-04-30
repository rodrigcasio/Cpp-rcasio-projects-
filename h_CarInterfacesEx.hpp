//interfaces do not have any #include

class Car{
  public:
    virtual void drive() = 0;
    virtual void stop() = 0;

    virtual ~Car() {}     //destructor
};
