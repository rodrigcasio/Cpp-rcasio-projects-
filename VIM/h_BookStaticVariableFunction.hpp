#include <string>

class Book{
    public:
        Book(std::string bookName);
        void printBookName() const;
        static void getCounterValue();

    private:
        std::string name;
        static int counter;
};
