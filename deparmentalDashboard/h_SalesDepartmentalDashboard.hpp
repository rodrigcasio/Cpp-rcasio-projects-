#include <string>
#include <vector>
#include <iostream>

namespace Sales { // 10.
    
    class Team{  // 11.
        private:
            std::string teamName;
            std::vector<std::string> teamMembers;
            std::string teamLocation;
            double teamBudget;
        
        public: // 12.
            Team(const std::string& name, const std::vector<std::string>& members, const std::string& location): teamName(name), teamMembers(members), teamLocation(location), teamBudget(4000){}
            const std::string& getTeamName() const{ return teamName; } // 13.
            const std::vector<std::string>& getTeamMembers() const { return teamMembers; } // 14.
            const std::string& getTeamLocation() const{ return teamLocation; }  // 16. 
            int getMemberCount() const { return static_cast<int>(teamMembers.size()); }
            double getTeamBudget() const { return teamBudget; }
            
            void setTeamBudget(double newBudget){ teamBudget = newBudget; }
            void addTeamMember(std::string member){ teamMembers.push_back(member); std::cout << "New member named " << member << " has been added to the Sales team successfully." << std::endl; } // 15.
            void setTeamLocation(const std::string& newLocation){ teamLocation = newLocation; } // 16.1
            void printTeamDetails() const{  // 17.
                std::cout << "Sales Team Name: " << getTeamName() << std::endl
                          << "Location: " << getTeamLocation() << std::endl
                          << "Members: "; 
                if(teamMembers.empty()){
                    std::cout << "There are no members in the team" << std::endl;
                    return;
                }
                // printing out every member.
                for(size_t i = 0; i < teamMembers.size(); ++i){
                    std::cout << teamMembers[i];
                    if(i != teamMembers.size() - 1){ // addind a comma if the member is not the last one.
                        std::cout << " ,";
                    }else{  // if 'i' is the last element, we add a period after last element shown.
                        std::cout << "." << std::endl;
                    }
                }
            }
    };

    namespace Support {         // 28.3 (optional)
        void auditTeam(const Sales::Team& team){
            std::cout << "Auditing Sales Team " << team.getTeamName() << std::endl
                      << "Number of Members: " << team.getMemberCount() << std::endl
                      << "Team Budget: " << team.getTeamBudget() << std::endl
                      << "Audit Complete" << std::endl;


        }
    }
}


/*
    // first approach for the method printTeamDetails()
    // It works and the logic is correct to output each member, but even for the last member shown, it will include a wrongly coma at the end
    // 
void printTeamDetails() const{
                std::cout << "Sales Team Name: " << getTeamName() << std::endl
                          << "Location: " << getTeamLocation() << std::endl
                          << "Members: "; 
                if(teamMembers.empty()){
                    std::cout << "There are no members in the team" << std::endl;
                    return;
                }
                for(const std::string& member : teamMembers){
                    std::cout << member << ", ";
                }
                
            }

    // Second approach could work aswell wihtout adding comas, each member will be shown on each line

void printTeamDetails() const{
    std::cout << "Sales Team Name: " << getTeamName() << std::endl
              << "Location: " << getTeamLocation() << std::endl
              << "Members: ";
        if(teamMembers.empty()){
            std::cout << "There are no members in the team" << std::endl
            return;
        }
        for(const std::string& member : teamMembers){
            std::cout << "- " << member << std::endl;
        }
        std::cout << std::endl;
}

    // third appraoach allows to add a comma to each element from the teamMembers
    // while also adding a coma beside the 'member' only if they are not the last element.
    // that is what the last if condition does
    // if i is NOT the last index (i != teamMembers.size() - 1), print a comma.
    // if i IS the last index, do NOT print a comma.

// Third approach 

 void printTeamDetails() const{
    std::cout << "Sales Team Name: " << getTeamName() << std::endl
              << "Location: " << getTeamLocation() << std::endl
              << "Members: "; 
        if(teamMembers.empty()){
            std::cout << "There are no members in the team" << std::endl;
            return;
        }
        // printing out every member.
        for(size_t i = 0; i < teamMembers.size(); ++i){
            std::cout << teamMembers[i];
        if(i != teamMembers.size() - 1) std::cout << ", ";  // Avoiding a coma placed on the last member
        }
        std::cout << std::endl;
}

// fourth and CURRENT approach 

    // In this current approach, is simmilar to the 3rd approach, but is being added a period at the end of the
    // last detected element:
    // if 'i' is NOT the last element, we add a ', '
    // else, we add a period afterwards the last element shown ' .'  

void printTeamDetails() const{
    std::cout << "Sales Team Name: " << getTeamName() << std::endl
              << "Location: " << getTeamLocation() << std::endl
              << "Members: "; 
    if(teamMembers.empty()){
        std::cout << "There are no members in the team" << std::endl;
        return;
    }
    // printing out every member.
    for(size_t i = 0; i < teamMembers.size(); ++i){
        std::cout << teamMembers[i];
        if(i != teamMembers.size() - 1){ // addind a comma if the member is not the last one.
            std::cout << ", ";
        }else{  // if 'i' is the last element, we add a period after last element shown.
            std::cout << " ." << std::endl;
        }
    }
}


*/