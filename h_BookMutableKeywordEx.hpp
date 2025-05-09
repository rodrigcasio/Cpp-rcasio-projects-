#include <string>

class Book{
  public:
    Book(std::string bookName);   
    std::string getBookName() const;
    void printBookName() const;            //read only function
    int getCounter() const;

  private:
    std::string name;
    mutable int counter;              //mutable variable
};
