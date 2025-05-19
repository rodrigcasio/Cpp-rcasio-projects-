#include <vector>
#include <string>

extern double libraryBudget;

class Library {
  public:
    Library();
    int getReservedCount() const;

    void addBook(std::string newBook, double bookCost);
    void borrowBook(std::string bookTitle);
    void listBooks() const;
    static int getTotalBorrowedBooks();
    static void getTotalBorrowedBooks2();
    void reserveBook(std::string title) const;

  private:
    std::vector<std::string> bookList;
    static int totalBorrowedBooks;
    mutable int reservedCount;        //modified in reserveBook() const func
    mutable std::vector<std::string> reservedBooks;  //modified in reserveBook() func
  
};
