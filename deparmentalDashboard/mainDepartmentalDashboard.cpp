#include <iostream>
#include "h_MarketingDepartmentalDashboard.hpp"
#include "h_SalesDepartmentalDashboard.hpp"
#include "h_EngineeringDepartmentalDashboard.hpp"
#include "h_HRDepartmentalDashboard.hpp"
#include "h_CommunicationsDepartmentalDashboard.hpp"

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

std::cout << "---" << std::endl;

    // checking if change was made successfully
    salesTeam.printTeamDetails();   // 25.

std::cout << "---" << std::endl;
   
    // using the alias 'audit' to access the function from a nested namespace called Support within the Marketing namespace
    audit::auditTeam(marketingTeam);    // 27. must use the team object created

std::cout << "---" << std::endl;

    // creating an engineering team 
    std::vector<std::string> engineeringMembers;    // 28.1
    std::vector<std::string> humanResourcesMembers;
    std::vector<std::string> communicationsMembers;
    
    Engineering::Team engineeringTeam("Stellar Corp-Engineering", engineeringMembers, 900000, "Guadalajara");
    
    engineeringTeam.addMember("Rodrigo");
    engineeringTeam.addMember("Luis");
    engineeringTeam.addMember("Alberto");

std::cout << "\t-New Engineering Team--" << std::endl;

    engineeringTeam.printTeamDetails(); 
    
std::cout << "---" << std::endl;

    engineeringTeam.setNewLocation("Monterrey");
    
std::cout << "---" << std::endl;

    engineeringTeam.setNewTeamBudget(150000);

std::cout << "---" << std::endl;

    engineeringTeam.printTeamDetails();

    // Creating new team:

std::cout << "\t-New HR Team--" << std::endl;

    HumanResources::Team hRteam("Stellar Corp-HR", humanResourcesMembers, "New Mexico", 50000);

std::cout << "---" << std::endl;

    hRteam.addMember("Jonas");
    hRteam.addMember("Sally");
    hRteam.addMember("Penny");

std::cout << "---" << std::endl;

    hRteam.printTeamDetails();

std::cout << "---" << std::endl;

    hRteam.setTeamLocation("El Paso");

std::cout << "---" << std::endl;

    hRteam.printTeamDetails();

std::cout << "---" << std::endl;

    hRteam.setNewBudget(70000);

std::cout << "---" << std::endl;

    hRteam.printTeamDetails();

std::cout << "\t-New Communications Team--" << std::endl;

    Communications::Team communicationsTeam("Stellar Corp-Communications", communicationsMembers, "Chicago", 60000);

    communicationsTeam.addMember("Paul");
    communicationsTeam.addMember("Stephen");
    communicationsTeam.addMember("Katy");

std::cout << "---" << std::endl;

    communicationsTeam.printTeamDetails();

std::cout << "---" << std::endl;

    communicationsTeam.setTeamBudget(90000);
    
std::cout << "---" << std::endl;

    communicationsTeam.setTeamLocation("New Jersey");

std::cout << "---" << std::endl;

    communicationsTeam.printTeamDetails();

    return 0;
}