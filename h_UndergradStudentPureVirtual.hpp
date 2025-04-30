#include "h_StudentPureVirtual.hpp"
#include <string>

class UndergraduateStudent: public Student{
  public:
    UndergraduateStudent(std::String studentName, int studentYear);
    void dipslayInfo();
    std::string getUndergradName();
    int getUndergradYear();

  private:
    std::string name;
    int year;
};
