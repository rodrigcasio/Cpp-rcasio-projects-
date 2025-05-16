#include "h_LibrarySystem.hpp"
#include <iostream>
#include <string>

Library::Library(){
  
}

void Library::addBook(std::string newBook){
  if(bookList.size() < 100){
    bookList.push_back(newBook);
    std::cout << newBook << " has been added successfully!" << std::endl << std::endl;
  }else{
    std::cout << "Library is full!" << std::end << std::endl;
  }
}

void Library::borrowBook(std::string bookTitle){
  if(bookList.empty()){
    std::cout << "There are no books available" << std::endl << std::endl;
  }else{
    for(auto it = bookList.begin(); it != bookList.end(); ++it){
      if(*it == bookTitle){
        bookList.erase(it);
        std::cout << "Book borrowed!" << std::endl << std::endl;
        return true;
      }
    }
    std::cout << "Book not found!" << std::endl << std::endl; 
    return false;
  }
}

void Library::bookList() const{
  if(!bookList.empty()){
    for(const std::string& book : bookList){
      std::cout << "- " << book << std::endl << std::endl;
    }
  }else{
    std::cout << "There are no book available" << std::endl << std::endl;
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
