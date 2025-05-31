#include <iostream>
#include <memory>

class Id {
  public:
    Id(std::string studentName, int StudentAge) : name(StudentName), age(StudentAge) {}
    std::string getStudentName() const { return name; }
    int getStudentAge() const { return age; }
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
    // Id2();  optional constructor...
    void setDogName(std::string dogName){ name = dogName; }
    void setDogAge(int dogAge){ age = dogAge; }
    std::string getDogName() const { return name; }
    int getDogAge() const { return age; }
    void displayDogInfo() const{
      std::cout << "Dog Name: " << getDogName() << std::endl
                << "Dog Age: " << getDogAge() << std::endl << std::endl;
    }

  private:
    std::string name;
    int age;
};

int main(){

  // 1. example of dynamically allocating an integer variable into the heap
  int* ptr = new int(7):
  std::cout << *ptr << std::endl;
  delete ptr; // dont forget to delete a raw pointer

  // 2. example  of dynamically allocating an integer variable into the heap using a unique_ptr
  // ======= this time, no need to delete the ptr2
  
  std::unique_ptr<int> ptr2 = std::make_unique<int>(5);
  std::cout << *ptr2 << std::endl;

  // 3. example of using a smart pointer to a class with a constructor
  // ======= here we are creating a ptr3 for an object of the class
  
  std::unique_ptr<Id> ptr3 = std::make_unique<Id>("Rodrigo", 25);
  ptr3->displayStudentInfo(); // accessing the method of the class

  // printing  the address of the smart pointer variable itself
  std::cout << &ptr3 << std::endl << std::endl;

  // printing the address of the object that ptr3 point to (the Id instance on the heap)
  std::cout<< ptr3.get() << std::endl << std::endl

  // 4. example of using a smart pointer to create an instance of a class
  // ======= when the class doesnt have a constructor with patameters
  
  std::unique_ptr<Id2> ptr4 = std::make_unique<Id2>();
  ptr4->setDogName("Kiara");
  ptr4->setDogAge(12);
  ptr4->displayDogInfo();

  return 0;
}
