#include <string>

class Book{
  public:
    Book(std::string name);
    void printBookName() const;
    static void getCounterValue();

  private:
    std::string name;
    static int counter;
};
