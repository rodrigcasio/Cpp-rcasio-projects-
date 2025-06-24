#include <iostream>
#include "h_NamespaceReview.hpp"

namespace Stats = DataAnalysis::Statistics; // alias for chain that access the namespace elements
namespace aliasProjects = DataAnalysis::Projects;   // alias for chain that access the elements of the 'Projects' namespace like the 'Project1' class!

// annonymous namespace example only available for this file
namespace {
    int internalCounter = 77;
}

int main(){   
    using namespace DataAnalysis;   // bring everything from DataAnalysis scope.

    // accessing the function from the namespace DataAnalysis with 'using namespace DataAnalysis'
    std::cout << "The data path is " << getDataPath() << std::endl;
    // accessing the variable vale from a nested namespace and subtituded for an alias called 'Stats'
    std::cout << "The average time from the nested namespace is " << Stats::averageTime << std::endl; 

    // creating an object from the nested class, and accessing some methods from the 'Project1' class.
    aliasProjects::Project1 rodrigoProject1("Project Stan", "Rodrigo Casio", 30); 
    rodrigoProject1.setStartingDate("07/09/2025");
    rodrigoProject1.displayProjectInfo();

    // accessing the anonymous namespace integer variable
    std::cout << "the interalCounter value is " << internalCounter << std::endl;

    return 0;
}