#include <iostream>
#include "h_MarketingDepartmentalDashboard.hpp"
#include "h_SalesDepartmentalDashboard.hpp"

int main(){

    namespace audit = Marketing::Support;   // 26.
    
    std::vector<std::string> marketingMembers; // 18.
    std::vector<std::string> salesMembers;  // 18.1

    // creating an object from team class nested in Marketing namespace 
    // 19.  
    Marketing::Team marketingTeam("Stellar Corp", marketingMembers, 500000);

    marketingTeam.addMember("Scott");    // 20. Adding members into the team.
    marketingTeam.addMember("Nicole");
    marketingTeam.addMember("Artem");

std::cout << "---" << std::endl;

    Sales::Team salesTeam("Stellar Corp", salesMembers, "London"); // 21. Creating team   

    salesTeam.addTeamMember("Pratik"); // 22. Adding members into the team
    salesTeam.addTeamMember("Emily");
    salesTeam.addTeamMember("Clive");

std::cout << "---" << std::endl;

    salesTeam.printTeamDetails();   // 23.

std::cout << "---" << std::endl;

    // moving the sales team to a different location.
    salesTeam.setTeamLocation("New York");  // 24.

    // checking if change was made successfully
    salesTeam.printTeamDetails();   // 25.

std::cout << "---" << std::endl;
   
    // using the alias 'audit' to access the function from a nested namespace called Support within the Marketing namespace
    audit::auditTeam(marketingTeam);    // 27. must use the team object created

std::cout << "---" << std::endl;

    return 0;
}