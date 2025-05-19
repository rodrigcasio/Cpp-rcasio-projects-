#include "h_LibrarySystem.hpp"
#include <iostream>
#include <string>

int Library::totalBorrowedBooks = 0;

Library::Library(): reservedCount(0){
  
}
int Library::getTotalBorrowedBooks(){
  return totalBorrowedBooks;
}
void Library::getTotalBorrowedBooks2(){
  std::cout << "The total number of borrowed books is: " getTotalBorrowedBooks() << std::endl << std::endl;
}
int Library::getReservedCount() const{
  return reservedCount;
}

void Library::addBook(std::string newBook, double bookCost){
  if(bookList.size() < 100){
    bookList.push_back(newBook);
    libraryBudget -= bookCost;    // deduct the cost of adding a book from the library budget.
    std::cout << newBook << "- has been added successfully!" << std::endl << std::endl;
  }else{
    std::cout << "Library is full!" << std::end << std::endl;
  }
}

bool Library::borrowBook(std::string bookTitle){
  if(bookList.empty()){
    std::cout << "There are no books available" << std::endl << std::endl;
  }else{
    for(auto it = bookList.begin(); it != bookList.end(); ++it){
      if(*it == bookTitle){
        bookList.erase(it);
        std::cout << bookTitle <<" has been borrowed successfully!" << std::endl << std::endl;
      auto it2 = find(reservedBooks.begin(), reservedBooks.end(), bookTitle);
      if(it2 != reservedBooks.end()){
        reservedBooks.erase(it2);
      }
        totalBorrowedBooks++;
        return true;
      }
    }
    std::cout << "Book not found!" << std::endl << std::endl; 
    return false;
  }
}

void Library::listBooks() const{
  if(!bookList.empty()){
    for(const std::string& book : bookList){
      std::cout << "- " << book << std::endl << std::endl;
    }
  }else{
    std::cout << "There are no book available" << std::endl << std::endl;
  }
}

void Library::reserveBook(std::string title) const{
  if(!bookList.empty()){
    auto it = find(bookList.begin(), bookList.end(), title);
    if(it != bookList.end()){  //if book was found in the bookList vector:
      auto it2 = find(reservedBooks.begin(), reservedBooks.end(), title);
      if(it2 != reservedBooks.end()){ //if title is found in reservedBooks vector:
        std::cout << "Book cannot be reserved!, book already reserved" << std::endl << std::endl;
      }else{
        reservedBooks.push_back(title); //adding book to vector
        reservedCount++;
        std::cout << "Book reserved: " << title << std::endl
                  << "Reserved book count: " << getReservedCount() << std::endl << std::endl;
      }
    }else{ //if book was not found in the bookList vector:
      std::cout << "Book cannot be reserved!, book is not available in the library" << std::endl << std::endl;
    }
  }else{
    std::cout << "There are no books available in the library" << std::endl << std::endl;
  }
}





/*
      ===Explanation of the function removeElement(vector<string>& vec, string s) =======
function:
    void removeElement(vector<strin>& vec, string s){
      auto it = find(vec.begin(), vec.end(), s)
      if(it != vec.end()){
        vec.erase(it)
      }
    }

find(vec.begin(), vec.end(), s) : searches the vector from the beginning to the end for the value of s
auto it = find(vec.begin(), vec.end(), s): it returns an iterator pointing to the first occurance of s.
                                            if was found...

if(it != vec.end()){     : if the iterator is not = to vec.end() it means the value was found and it is 
  vec.erase(it);             pointing to the element so vec.erase(it) removes the element...
}


======== Another way to define the method using the function removeElement() =================
          (using a range-based for loop)

bool Library::borrowBook(std::string bookTitle){
  for(const std::string& book : bookList){              //using a range-based for loop to go through each 
    if(book == bookTitle){                                //element and comparing 
      removeElement(bookList, bookTitle);
      std::cout << "Book borrowed!" << std::endl << std::endl;
      return true;
    }
  }
  std::cout << "Book not found!" << std::endl << std::endl;
  return false;
}
//iterator behaves like a pointer, 

//we use * dereference to obtained the value pointed to
*/
