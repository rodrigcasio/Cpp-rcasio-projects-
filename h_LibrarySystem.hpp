#include <vector>
#include <string>

class Library {
  public:
    void addBook(std::string newBook);
    void borrowBook(std::string bookTitle);
    void listBooks() const;

  private:
  std::vector<std::string> bookList;
};
