#include <iostream>

// example of using an anonymous namespace. (Needs to be delcared in the same file)
namespace {
    int retryCount = 7;
}

int main(){
    // accessing the value of the variable inside the anonymous namespace:

    std::cout << "This is the value of the retry count: " << retryCount << std::endl;

    return 0;
}