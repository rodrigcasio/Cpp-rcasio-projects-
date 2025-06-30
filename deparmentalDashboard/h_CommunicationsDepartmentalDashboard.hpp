#include <string>
#include <vector>
#include <iostream>

namespace Communications {

    class Team{

        private:
        std::string teamName;
        std::vector<std::string> teamMembers;
        std::string teamLocation;
        double teamBudget;

        public:
        Team(const std::string& name, const std::vector<std::string>& members, const std::string location, double budget): teamName(name), teamMembers(members), teamLocation(location), teamBudget(budget){}
        
        const std::string& getTeamName() const { return teamName; }
        const std::string& getTeamLocation() const { return teamLocation; }
        const std::vector<std::string>& getTeamMembers() const { return teamMembers; }
        double getTeamBudget() const { return teamBudget; }
        int getMemberCount() const { return static_cast<int>(teamMembers.size()); }

        void addMember(const std::string& newMember){ teamMembers.push_back(newMember); std::cout << "New member named " << newMember << " has been added to the the Communications team successfully" << std::endl; }
        void setTeamLocation(const std::string& newLocation){ teamLocation = newLocation; std::cout << getTeamName() << " has moved to " << newLocation << " as new team location." << std::endl; }
        void setTeamBudget(double newBudget){ teamBudget = newBudget; std::cout << "New team budget of $" << newBudget << " has been added successfully" << std::endl; }
        void printTeamDetails() const{
            std::cout << "Communications Team Name: " << getTeamName() << std::endl
                      << "Location: " << getTeamLocation() << std::endl
                      << "Budget: $" << getTeamBudget() << std::endl
                      << "Members: ";
                if(teamMembers.empty()){
                    std::cout << "There are no members in the Communications team" << std::endl;
                    return;
                }
                for(size_t i = 0; i < teamMembers.size(); ++i){
                    std::cout << teamMembers[i];    // output member
                    
                    if(i != teamMembers.size() - 1){
                        std::cout << " ,";  // adding a comma if the i(member) is not the last member o the team vector.
                    }else{
                        std::cout << ".";   // adding a period if the i(member) is the last memeber of the team vector.
                    }
                }

        }
    };
}