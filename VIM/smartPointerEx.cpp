#include <iostream>
#include <memory>

// Examples of using smart pointers

class Id {
    public:
        Id(std::string studentName, int studentAge): name(studentName), age(studentAge) {}
        std::string getStudentName() const{return name;}
        int getStudentAge() const{return age;}
        void displayStudentInfo() const{
            std::cout << "Student Name: " << getStudentName() << std::endl
                      << "Student Age: " << getStudentAge() << std::endl << std::endl;
        }    
    private:
        std::string name;
        int age;
};

class Id2 {
    public:
        // id2(); optional constructor..
        void setDogName(std::string dogName){ name = dogName; }
        void setDogAge(int dogAge){ age = dogAge; }
        std::string getDogName() const{ return name; }
        int getDogAge() const { return age; }
        void displayDogInfo() const{
            std::cout << "Dog Name: " << getDogName() << std::endl
                      << "Dog Age: " << getDogAge() << std::endl;
        }
    private:
        std::string name;
        int age;
};


int main(){
    
    // ======== example of dynamically allocating a variable on the heap.
    int* ptr1 = new int(7);
    std::cout << *ptr1 << std::endl;
    delete ptr1;

    // ======== example of using a smart pointer and dynamically allocating an integer on the heap
    //          automatically deletes the ptr2 at the end.
    
    std::unique_ptr<int> ptr2 = std::make_unique<int>(5);
    std::cout << *ptr2 << std::endl;

    // ======== example of using a smart pointer in a class constructor
    std::unique_ptr<Id> ptr3 = std::make_unique<Id>("Rodrigo", 25);
    ptr3->displayStudentInfo();

    // printing the address of the smart pointer variable itself.
    std::cout << &ptr3 << std::endl << std::endl;   
    // printing  the address of the object that ptr3 points to (the Id instance on the heap)
    std::cout << ptr3.get() << std::endl << std::endl;  

    // ======== example of using a smart pointer to create an instance of a class
    //          without a a constructor

    std::unique_ptr<Id2> ptr4 = std::make_unique<Id2>();
    ptr4->setDogName("Kiara");
    ptr4->setDogAge(12);
    ptr4->displayDogInfo();


    return 0;
}
