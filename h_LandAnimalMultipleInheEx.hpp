#ifndef LAND_ANIMAL_MULTIPLE_INHE_EX_HPP
#define LAND_ANIMAL_MULTIPLE_INHE_EX_HPP

class landAnimal{
  public:
    void run();
    void stop();
    void setMaxSpeed(int animalMaxSpeed);

  private:
    int maxSpeed;
};
