#include <iostream>
#include <stdlib.h>

int main(){

 /* 
    Rock, Paper, Scissors logic 

    user ==  1 == Rock
             2 == Paper 
             3 == Scissors 


    computer == 1 == Rock 
                2 == Paper 
                3 == Scissors

 */

    srand(time(NULL));

    int computer = rand() % 3 + 1;

    int user = 0;

    std::string enter;
    std::string result;

    std::cout<<"Welcome to Rock, Paper, Scissors Game! write sommething to begin! \n";
    std::cin>> enter;

    std::cout <<"===========\n";
    std::cout <<"rock, paper, scissors\n";
    std::cout <<"===========\n";

    std::cout <<"1) Rock\n";
    std::cout <<"2) Paper\n";
    std::cout <<"3) Scissors\n";

    std::cout <<"shoot\n";
    std::cin >> user;

    if(user == 1){
        std::cout <<"You choose rock\n";
    }
    else if(user == 2){
        std::cout <<"You choose paper \n";
    }
    else{
        std::cout <<"You choose scissors\n";
    }


    if(computer == 1){
        std::cout<<"Computer choose rock\n";
    }
    else if(computer == 2){
        std::cout<<"Computer choose paper\n";
    }
    else{
        std::cout<<"Computer choose scissors\n";
    }

    // if user and computer pick the same one 

    if(user == computer){
        std::cout<<"It's a tie!\n";
    }

    //When user picks rock

    if(user == 1){
        if(computer == 2){
            std::cout<<"You lost! boo!\n";
        }
        else if(computer == 3){
            std::cout<<"You won!\n";
        }
    }
    else if(user == 2){         //user picks paper 
        if(computer == 1){
            std::cout<<"You won!\n";
        }
        else if(computer == 3) {
            std::cout <<"You lost! boo!\n";
        }
    }
    else if(user == 3){         // user picks scissors
        if(computer == 1){
            std::cout<<"You lost! boo!\n";
        }
        else if(computer == 2){
            std::cout<<"You won!\n";
        }
    }



    return 0;
}

    

