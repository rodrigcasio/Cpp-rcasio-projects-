#include <iostream>

int main(){

    int gryffindor = 0;
    int hufflepuff = 0;
    int ravenclaw = 0;
    int slytherin = 0;
    std::string enter;

    int answer1, answer2, answer3, answer4;

    std::cout <<"Welcome to the Hogwarts Sorting Hat Quiz, please enter something to start \n";
    std::cin >> enter;

//--------------Question 1--------------------------

    std::cout <<"Q1) When I'm dead, I want people to remember me as: \n";
    std::cout <<"1) The Good\n";
    std::cout <<"2) The Great\n";
    std::cout <<"3) The Wise\n";
    std::cout <<"4) The Bold\n";

    std::cout<<"Enter your answer (1-4)\n";
    std::cin >> answer1;

    if(answer1 == 1){
        hufflepuff = 1;
    }
    else if(answer1 == 2){
        slytherin = 1;
    }
    else if(answer1 == 3){
        ravenclaw = 1;
    }
    else if(answer1 == 4){
        gryffindor = 1;
    }
    else{
        std::cout<<"Invalid input\n";
    }

//---------------Question 2-------------------------

    std::cout <<"Q2) Dawn or Dusk?:\n";
    std::cout <<"1) Dawn\n";
    std::cout <<"2) Dusk\n";

    std::cout <<"Enter your answer (1-4)\n";
    std::cin >> answer2;

    if(answer2 == 1){
        hufflepuff +=1;
    }
    else if(answer2 == 2){
        gryffindor +=1;
    }
    else{
        std::cout <<"Invalid input\n";
    }

//----------------Question 3---------------------------

    std::cout<< "Q3) Which kind of instrument most pleases your ear?:\n";
    std::cout <<"1) The violin\n";
    std::cout <<"2) The trumpet\n";
    std::cout <<"3) The piano\n";
    std::cout <<"4) The drum\n";

    std::cout <<"Enter your answer\n";
    std::cin >> answer3;

    if(answer3 == 1){
        slytherin +=1;
    }
    else if(answer3 == 2){
        hufflepuff += 1;
    }
    else if(answer3 == 3){
        ravenclaw +=1;
    }
    else if(answer3 == 4){
        gryffindor +=1;
    }
    else{
        std::cout<<"Invalid Input\n";
    }

//--------------Question 4--------------------------------

    std::cout<<"Which road tempts you most?:\n";
    std::cout<<"1) The wide, sunny grassy lane\n";
    std::cout<<"2) The narrow, dark, lantern-lit alley\n";
    std::cout<<"3) The twisting, lead-stream path through woods\n";
    std::cout<<"4) The cobbled street lined (ancient building)\n";

    std::cout <<"Enter your answer (1-4)\n";
    std::cin >> answer4;

    if(answer4 == 1){
        hufflepuff += 1;
    }
    else if(answer4 == 2){
        slytherin +=1; 
    }
    else if(answer4 == 3){
        gryffindor +=1;
    }
    else if(answer4 == 4){
        ravenclaw +=1;
    }
    else{
        std::cout<<"Invalid input\n";
    }

//-----------------------

    /*
        The max variable helps us to compare the value obtained, after the quiz, and lets us create a condition
        by comparing the value between the house name and max.
        Afterwards, we will assign the value of the string called "house" to show the name of the house. 

        The max variable will picl the hightest value and will show the value of house variable.
    */

    int max = 0;
    std::string house;


    if(gryffindor > max){
        max = gryffindor;
        house ="Gryffindor!\n";
    }

    if(ravenclaw > max){
        max = ravenclaw;
        house = "Ravenclaw!\n";
    }

    if(hufflepuff > max){
        max = hufflepuff;
        house ="Hufflepuff!\n";
    }

    if(slytherin > max){
        max = slytherin;
        house = "Slytherin!\n";
    }

    std::cout <<"Your house is "<< house;



   return 0;
}