#include <string>
#include <vector>
#include <iostream>
// 28.
namespace Engineering {
    class Team {
        private:
            std::string teamName;
            std::vector<std::string> teamMembers;
            double teamBudget;
            std::string teamLocation;

        public:
        Team(const std::string& name, const std::vector<std::string>& members, double budget, const std::string& location): teamName(name), teamMembers(members), teamBudget(budget), teamLocation(location) {}
        
        const std::string& getTeamName() const { return teamName; }
        const std::string& getTeamLocation() const { return teamLocation; }
        const std::vector<std::string>& getTeamMembers() const { return teamMembers;}
        double getTeamBudget() const { return teamBudget; }
        int getMemberCount() const { return static_cast<int>(teamMembers.size()); }

        void addMember(const std::string& newMember){ teamMembers.push_back(newMember); std::cout << "New member named " << newMember << " has been added to the Enginnering department successfully" << std::endl; }  
        void setNewLocation(const std::string& newLocation){ teamLocation = newLocation; std::cout << getTeamName() << " has moved to " << newLocation << " as new team location." << std::endl; }
        void setNewTeamBudget(double newBudget) { teamBudget = newBudget; std::cout << "New team budget of $" << newBudget << " has been added successfully" << std::endl; }
        void printTeamDetails() const{
            std::cout << "Engineering Team Name: " << getTeamName() << std::endl
                      << "Location: " << getTeamLocation() << std::endl
                      << "Budget: $" << getTeamBudget() << std::endl
                      << "Team Members: ";
                if(teamMembers.empty()){
                    std::cout << "There are no members in the Engineering team" << std::endl;
                    return;
                }
                for(size_t i = 0; i < teamMembers.size(); ++i){
                    std::cout << teamMembers[i];
                    
                    if(i != teamMembers.size() - 1){
                        std::cout << " ,";     // adding a comma beside each member that is not the last one.
                    }else{
                        std::cout << "." << std::endl;  // if it is the last one (i == teamMembers.size() - 1), output a period.
                    }
                }
        }
    };
}