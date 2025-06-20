#include "h_LibrarySystem.hpp"
#include <iostream>
#include <string>

int Library::totalBorrowedBooks = 0;
int Library::totalMembersCount = 0;

Library::Library(): reservedCount(0){
    
}

int Library::getTotalBorrowedBooks(){
    return totalBorrowedBooks;
}
void Library::getTotalBorrowedBooks2(){
    std::cout << "The total number of borrowed books is: " << getTotalBorrowedBooks() << std::endl << std::endl;
}
int Library::getReservedCount() const{
    return reservedCount;
}
int Library::getTotalMembersCount(){
    return totalMembersCount;
}
void Library::addBook(std::string newBook, double bookCost){
    if(bookList.size() < 100){
        bookList.push_back(newBook);
        libraryBudget -= bookCost; // deduct the cost of adding a book from the library budget.
        std::cout << newBook << "- has been added to the library successfully" << std::endl << std::endl;
    }else{
        std::cout << "Library is full." << std::endl << std::endl;
    }
}

bool Library::borrowBook(std::string bookTitle){
    if(bookList.empty()){
        std::cout << "There are no books available in the library." << std::endl << std::endl;
        return false;
    }
    for(auto it = bookList.begin(); it != bookList.end(); ++it){     // 1st option: manual for loop to demonstrate iterator dereferencing:
        if(*it == bookTitle){ // Book found in library
            auto it2 = find(reservedBooks.begin(), reservedBooks.end(), bookTitle);     // 2nd option: std::find() for efficient vector element search
            if(it2 != reservedBooks.end()){
                std::cout << bookTitle << " is reserved and cannot be borrowed." << std::endl << std::endl;
                return false;
            }                               
            bookList.erase(it);             // borrow book:
            totalBorrowedBooks++;
            std::cout << bookTitle << " has been borrowed successfully. Enjoy." << std::endl << std::endl;
            return true;
        }
    } 
    // Print if book is not found after loop:
    std::cout << bookTitle << " is not available in the library." << std::endl << std::endl;
    return false;
}

void Library::listBooks() const{
    if(bookList.empty()){
        std::cout << "There are no books available." << std::endl << std::endl;
        return;
    }
    std::cout << "\t ==== Books ====" << std::endl;
    for(const std::string& book : bookList){
        std::cout << "- " << book << std::endl;
    }
    std::cout << std::endl;   // adding extra newline for spacing 
}
void Library::reserveBook(std::string title) const{
    if(!bookList.empty()){
        auto it = find(bookList.begin(), bookList.end(), title);
        if(it != bookList.end()){                                           //if book is found in bookList vector:
            auto it2 = find(reservedBooks.begin(), reservedBooks.end(), title);
            if(it2 != reservedBooks.end()){                                 //meaning the title was found in the reservedBooks vector:
                std::cout << title << " cannot be reserved, book already reserved." << std::endl << std::endl;
            }else{                                                          //book not found in reservedBooks vector, so we can add it.
                reservedBooks.push_back(title);                             //adding book to vector 
                reservedCount++;
                std::cout << "Book reserved: " << title << std::endl
                          << "Reserved book count: " << getReservedCount() << std::endl << std::endl;
            }
        }else{   //if book was not found in the bookList vector:
            std::cout << title << " cannot be reserved, book is not available in the library." << std::endl << std::endl;
        }
    }else{
        std::cout << "There are no books available." << std::endl << std::endl;
    }
}

void Library::setLibraryMember(std::string memberName){
    if(libraryMembers.size() < 100){
        totalMembersCount++;
        libraryMembers.push_back(memberName);
        std::cout << memberName << " has been registered into the library." << std::endl << std::endl;
    }else{
        std::cout << "Membership list is full." << std::endl << std::endl;
    }
}

void Library::memberList() const{
    if(libraryMembers.empty()){
        std::cout << "There are not members registered." << std::endl << std::endl;
        return;
    }
    std::cout << "\t==== Library Members ====" << std::endl;
    for(const std::string& member : libraryMembers){
        std::cout << "- " << member << std::endl;
    }
    std::cout << std::endl;         // Extra newline for spacing..
}
void Library::displayMembersNumber(){
    std::cout << "Members active in the library: " << getTotalMembersCount() << std::endl << std::endl;

}

