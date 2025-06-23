#include <string>
#include <iostream>

namespace App{

    class Application{  // nested class
        private:
            std::string appName;
        public:
            explicit Application(const std::string& name): appName(name){} // constructor
            void start(){ std::cout << "App started!" << std::endl; }   
            void stop(){ std::cout << "App stopped!" << std::endl; }
            std::string getAppName() const{ return appName; }   // getter method
    };
    
    namespace Utils{    // nested namespace
        void printAppInfo(const Application& someApp){
            std::cout << "Application name: " << someApp.getAppName() << std::endl;
        }
    }
}