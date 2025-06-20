#include <vector>
#include <string>

extern double libraryBudget;

class Library{
    public:
        Library();
        int getReservedCount() const;
        void addBook(std::string newBook, double bookCost);
        bool borrowBook(std::string bookTitle);
        void listBooks() const;
        static int getTotalBorrowedBooks();
        static void getTotalBorrowedBooks2();
        void reserveBook(std::string title) const;
        void setLibraryMember(std::string memberName);  // new
        void memberList() const;
        static int getTotalMembersCount();
        static void displayMembersNumber();

    private:
        std::vector<std::string> bookList;
        static int totalBorrowedBooks;
        mutable int reservedCount;
        mutable std::vector<std::string> reservedBooks;
        static int totalMembersCount;
        std::vector<std::string> libraryMembers;

};
