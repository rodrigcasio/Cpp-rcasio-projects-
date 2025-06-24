#include <string>
#include <iostream>
// review

namespace DataAnalysis {
    std::string getDataPath(){ return "/data/default"; }

    namespace Statistics {
        double averageTime = 2.5;
    }

    namespace Projects {
        class Project1 {
            private:
                std::string name;
                std::string director;
                int months;
                std::string startingDate;
                
            public: 
                Project1(const std::string& projectName, const std::string& projectDirector, int monthsNeeded): name(projectName), director(projectDirector), months(monthsNeeded), startingDate("TBD"){}
                
                const std::string& getProjectName() const{ return name; }   // returning a refernce to the actual name member variables inside the object, not a oopy
                const std::string& getDirectorName() const{ return director; }  // returning a reference to the original value, not a copy. Common and efficient C++ practice for getters of class members variables for std::string
                int getMonthsNeeded() const { return months; }
                std::string getStartingDate() const{ return startingDate; }
                void setStartingDate(const std::string& date){ startingDate = date; }
                void start(){ std::cout << getProjectName() << " project is starting" << std::endl; }
                void stop(){ std::cout << getProjectName() << " project is stopping" << std::endl; }
                void displayProjectInfo() const{ 
                    std::cout << "Project name: " << getProjectName() << std::endl
                              << "Project director: " << getDirectorName() << std::endl
                              << "Months needed: " << getMonthsNeeded() << std::endl
                              << "Starting date: " << getStartingDate() << std::endl; 
                }
        };
    }
}