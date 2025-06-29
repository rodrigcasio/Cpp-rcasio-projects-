#include <iostream>
#include "h_MarketingDepartmentalDashboard.hpp"
#include "h_SalesDepartmentalDashboard.hpp"

int main(){
    
    std::vector<std::string> marketingMembers; // 18.
    std::vector<std::string> salesMembers;  // 18.1

    // creating an object from team class nested in Marketing namespace 
    // 19.  
    Marketing::Team marketingTeam("Stellar Corp", marketingMembers, 500000);

    marketingTeam.addMember("Scott");    // 20. Adding members into the team.
    marketingTeam.addMember("Nicole");
    marketingTeam.addMember("Artem");

    Sales::Team salesTeam("Stellar Corp", salesMembers, "London"); // 21. Creating team   

    salesTeam.addTeamMember("Pratik"); // 22. Adding members into the team
    salesTeam.addTeamMember("Emily");
    salesTeam.addTeamMember("Clive");

    salesTeam.printTeamDetails();

    return 0;
}