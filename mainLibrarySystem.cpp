#include <iostream>
#include "h_LibrarySystem.hpp"

double libraryBudget = 5000;

int main(){
  
  std::cout << "Current library budget is: " << libraryBudget << std::endl << std::endl;

  //setting up an instance of Library class:
  Library myLibrary;

  //adding books to myLibrary:
  myLibrary.addBook("To Sleep in a Sea of Stars", 300);
  myLibrary.addBook("Six Easy Pieces", 400);
  myLibrary.addBook("Relativity for Beginners", 350);
  myLibrary.addBook("Alex's Adventures in Numberland", 300);

  //printing available books in myLibrary
  myLibrary.listBooks();

  //reserving one book:
  myLibrary.reserveBook("Six Easy Pieces");

  //borrowing a book, changing the total of books available:
  myLibrary.borrowedBook("Relativity for Beginners");

  //1st option of printing the total number of books borrowed:
  std::cout << "The total number of borrowed books is: " << Library::getTotalBorrowedBooks() << std::endl << std::endl;

  //2nd option of printing the total number of books borrowed using static function:
  Library::getTotalBorrowedBooks2();
  
  return 0;
}
