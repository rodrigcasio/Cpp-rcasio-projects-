#include <iostream>
#include "h_LibrarySystem.hpp"

double libraryBudget = 5000;

int main(){

    std::cout << "Current library budget is: " << libraryBudget << std::endl << std::endl;
    
    //setting up an instance of library:
    Library myLibrary;

    std::cout << "-------- Adding books to library ------------" << std::endl; 
    //adding books into myLibrary:
    myLibrary.addBook("To Sleep in a Sea of Stars", 300);
    myLibrary.addBook("Six Easy Pieces", 400);
    myLibrary.addBook("Relativity for Beginners", 350);
    myLibrary.addBook("Alex's Adventures in Numberland", 300);

    std::cout << "-------- Displaying available books in myLibrary ------------" << std::endl; 
    //printing available books in myLibrary:
    myLibrary.listBooks();
    

    std::cout << "-------- Reserving books ------------" << std::endl; 
    //reserving one book:
    myLibrary.reserveBook("Six Easy Pieces");
    myLibrary.reserveBook("Six Easy Pieces"); // should fail (already reserved)
    myLibrary.reserveBook("Imaginary Book");  // should fail : (not in the library)

    std::cout << "-------- Borrowing books ------------" << std::endl; 
    //borrowing a book, changing the total of books available:
    myLibrary.borrowBook("Relativity for Beginners");       
    myLibrary.borrowBook("Six Easy Pieces");    // should fail : (already reserved)
    myLibrary.borrowBook("Imaginary book"); // should fail : (not in library) 

    std::cout << "-------- displaying two options for number of borrowed books ------------" << std::endl; 

    //1st option to print the total number of books borrowed:
    std::cout << "The total number of borrowed books is: " << Library::getTotalBorrowedBooks() << std::endl << std::endl;
    
    //2nd option to print the total number of books borrowed with static function:
    Library::getTotalBorrowedBooks2();   
    
    std::cout << "-------- Adding members ------------" << std::endl; 
    //setting a member into the library:
    myLibrary.setLibraryMember("Rodrigo Casio");
    myLibrary.setLibraryMember("Kyrie Iving");
    myLibrary.setLibraryMember("Marco Antonio Solis");
    myLibrary.setLibraryMember("Juice Wrld");

    std::cout << "-------- Displaying library members ------------" << std::endl; 
    // printing a list of members:
    myLibrary.memberList();

    std::cout << "-------- Displaying member count ------------" << std::endl; 
    // displaying the number of active members:
    Library::displayMembersNumber();

    return 0;
}
