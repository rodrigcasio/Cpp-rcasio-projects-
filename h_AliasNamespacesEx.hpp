// example of using the chain of namespaces with an alias in main() function.
#include <string>
#include <iostream>

namespace Company{
    namespace Department{
        namespace Project{
            
            class Project{
                private:
                    std::string name;

                public:
                    explicit Project(const std::string& projectName): name(projectName) {}
                    std::string getProjectName(){ return name; } // getter
                    void displayMessage(){ std::cout << "Welcome to " << getProjectName() << "!" << std::endl; }
            };
        }
    }
}

