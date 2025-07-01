#ifndef DEPARTMENT_TEAM_BASE_HPP
#define DEPARTMENT_TEAM_BASE_HPP
#include <string>

// example of polymorphism 
// class done for function communicateToDeparment()
// Using a pure virtual base class so all department teams can inherit getTeamName()

class DepartmentTeamBase {
    public:
    virtual const std::string& getTeamName() const = 0;
    virtual ~DepartmentTeamBase() = default;
};

#endif