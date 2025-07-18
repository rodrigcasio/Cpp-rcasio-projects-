#include <iostream>
#include <string>

//Function template
template<typename T>
T subtract(T a, T b){
    return a - b;
}

// class template:
template<typename T>
class Container {
    private:
    T item;

    public:
    Container(T pItem) : item(pItem) {}

    T getItem() const{
        return item;
    }

    void setItem(T newItem); // method definition outside the class:
};

template<typename T>    // def here
void Container<T>::setItem(T newItem){
    item = newItem;
}

// explicit template arguments
template<typename T>
void displayValue(T value){
    std::cout << "Displaying value: " << value << std::endl;
}
// template specialization as string now: 
template <>
void displayValue<std::string>(std::string value){
    std::cout << "Displaying string value here: " << value << std::endl;
}

// Variadic template ex.
template<typename... Args>
void logMessage(Args... args){
    (std::cout << ... << args) << std::endl;    // Parameter pack expansion

}

// Template Type Deduction Ex
template<typename T>
T divide(T a, T b){
    return a / b;
}

int main(){

    // 1. 
    std::cout << "Subtraction with int: " << subtract(14, 22) << std::endl;
    std::cout << "Subtraction with float: " << subtract(12.9f, 78.9f) << std::endl;

std::cout << "---" << std::endl;
    
    // 2. class template exmaple:
    Container<int> intContainer(10);
    std::cout << "Container item: " << intContainer.getItem() << std::endl; 
    intContainer.setItem(77);
    std::cout << "Updated Container item: " << intContainer.getItem() << std::endl;  
    // 2.1 now as string 
    Container<std::string> stringContainer("Hello! now im a string");
    std::cout << "Container item (string): " << stringContainer.getItem() << std::endl;

std::cout << "---" << std::endl;

    // 3. explicit template arguments example:
    displayValue<int>(172);
    displayValue<std::string>("Specilization Example! I have differnt started output! that is why!");

std::cout << "---" << std::endl;

    // 4. Variadic Template example with Parameter Pack Expansion
    logMessage("Logging: ", 1, ", ", 5, ", ", "template example!");

std::cout << "---" << std::endl;

    // 5. Template type deduction example:
    auto result = divide(223 , 4);
    std::cout << "Division result: " << result << std::endl;
    
    return 0;
}