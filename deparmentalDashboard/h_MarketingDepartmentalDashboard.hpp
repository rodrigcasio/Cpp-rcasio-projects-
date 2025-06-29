#include <string>
#include <vector>
#include <iostream>

namespace Marketing { // 1.
    
    class Team{ // 2.
        private:
            std::string teamName;
            std::vector<std::string> teamMembers;
            double teamBudget;

        public:
            Team(const std::string& name, const std::vector<std::string>& members, double budget): teamName(name), teamMembers(members), teamBudget(budget){} // 3.

            const std::string& getTeamName() const{ return teamName; } // 4.
            void addMember(std::string newMember){ teamMembers.push_back(newMember); std::cout << "New member named " << newMember << " has been added to the Marketing team successfully." << std::endl; } // 5.
            int getMemberCount() const{ // 6.
                return static_cast<int>(teamMembers.size()); // converting the .size() result into an integer with 'static_cast<int>'
            }
            void setTeamBudget(double newBudget){ teamBudget = newBudget; } // 7.1
            double getTeamBudget() const { return teamBudget; } // 7.2
    };

    namespace Support { // 8.
        void auditTeam(const Marketing::Team& team){    // 9.
            std::cout << "Auditing Marketing Team: " << team.getTeamName() << std::endl
                      << "Number of Members: " << team.getMemberCount() << std::endl
                      << "Team Budget: " << team.getTeamBudget() << std::endl
                      << "Audit complete" << std::endl;
        }
    }
}






/*
// first approach for method getMemberCount():
   int getMemberCount() const{
                if(!teamMembers.empty()){
                    return teamMembers.size();
                }
                return false;
            } 

    but ended up using return static_cast<int>(teamMembers.size()); 
    which converts teh value returned by teamMembers (which is a type of size_t, an unsigned integer type)
    into an int. Basically we're tellig the compilers: 'Take the size of the vector (which is a size_t)
    and convert it to an int for my return value.

*/