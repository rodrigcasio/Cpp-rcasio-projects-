#include <iostream>
#include "h_NestedNamespaces.hpp"

using namespace App;

int main(){

    // using the constructor of the class Application inside of App namespace
    Application firstApp("beFriend");
    firstApp.start();
    firstApp.stop();
    // accessing to the nested namespace Utils
    Utils::printAppInfo(firstApp);

    return 0;
}

// 'using namespace App;' // (possible to use Util::printAppInfo(); )
// 'using namespace App::Utils' // (this brings all members of Utils into the scope)
// 'using App::Utils::printAppInfo;' // (this brings only printAppInfo() into the scope)

// 'using App::Application;' // (this brings the Application class name into the current scope, so you can write Application instead of App::Application)
//                              but in constructor we need the Application name of the class when declaring a cosntructor.