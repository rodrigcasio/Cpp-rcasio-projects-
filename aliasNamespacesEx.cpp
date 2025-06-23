#include <iostream>
#include "h_AliasNamespacesEx.hpp"
// example of accessing the class members of 'Project' class from namespace 'Project'
namespace projectAlias = Company::Department::Project;

int main(){
    // alias::className objectName();
    projectAlias::Project myProject1("Project Charlie");    // using constructor of 'Project' class.

    myProject1.displayMessage();

    return 0;
}