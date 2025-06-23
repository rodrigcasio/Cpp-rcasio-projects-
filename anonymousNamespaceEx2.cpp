#include <iostream>
#include <string>

namespace {
    std::string formatDebugMessage(const std::string& userMessage){ // helper function only visible in this file.
        return "[DEBUGG] " + userMessage;
    }
}

int main(){
    std::string message = "App started!";
    std::cout << formatDebugMessage(message) << std::endl;

    return 0;
}

// Example used: Let's say we want a helper function that formats debug logs.
//               We only want this function to be available insde the file where
//               its implemented, not elsewere in the project, meaning not available
//               for other files.