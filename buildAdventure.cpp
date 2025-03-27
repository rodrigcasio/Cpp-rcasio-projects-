#include <iostream>

int main(){

    /*
        "The story of mickey picking up stones in the railway" (based on a reel i saw on instagram lol). 

    1 scene : mickey walks in the woods and finds a train railway.
    2 scene : mickey decides to invastigate and gets closer to the railway.
    3 scene : mickey realized that there were precious stones on the railway so he decides to pick them up.
    4 scene : mickey realized that he needs to pick many stones and he does not have any pockets or a backpack where he can carry them
              decision 1: pick them one by one 
                outcome: mickey gets ran over by the train and breaks his legs 
              decision 2: pick a few enough and return later with a backpack
                outcome: mickey becomes rich for picking many stones with his backpack 
              decision 3: leave and ask goofy to help him pick more stones with him
                outcome: mmickey gets raun over and humiliated by goofy laughing at him.
        

    */


    int decision; 
    std::string enter;

    std::cout <<"Welcome to this adventure traveller!\n";
    std::cout <<"You will have to hear a story and pick wisely to modify the outcome of the story\n";
    std::cout <<"Type anything to start!\n";
    std::cin >> enter;


    std::cout <<"This is the story of mickey and the railway.\n";
    std::cout <<"One day, Mickey decides to take a walk down in the woods.\n";
    std::cout <<"He stumbled into a railway train, and he gets closer to check on it. \n";
    std::cout <<"On the railway, her notices there are precious stones\n";
    std::cout <<"He jumps of excitement, and starts picking stones with his bare hands,\n";
    std::cout <<"He then realized that he doesnt have any room to carry all these stones\n";

    std::cout <<"What do you think mickey should do? (1-3) \n";

    std::cout << "1) Start picking as many stones as he can with his bare hands.\n";
    std::cout << "2) Leave the stones and start running towards his house to get a backpack \n";
    std::cout << "3) Leave the stones and tell Goofy if he can help him pick some stones\n";
    std::cin >> decision;

  if(decision == 1){
    std::cout <<"Mickey gets pushed off the railway by the train and breaks his legs\n";
    std::cout <<"write next to continue";
    std::cin >> enter;
    std::cout <<"----------------\n";
    std::cout <<"Mickey starts screaming in pain and crying, as he passes the train driver\n";
    std::cout <<"He shouts to the driver: \n";
    std::cout <<"THAT'S NOT FAIR!\n";
    std::cout <<"And the driver responds:\n";
    std::cout <<"I DON'T CARE!\n";
    std::cout <<"-----------------\n";
    std::cout <<"The end.\n";
  }
  else if(decision == 2){
    std::cout <<"After mickey leaves and gets his backpack, he hears a train comming towards where the stones are...\n";
    std::cout <<"write next to continue\n";
    std::cin >> enter; 
    std::cout <<"--------------\n";
    std::cout <<"He notices that the train is coming fast so he waits until the train passes. \n";
    std::cout <<"Once the train passes, he runs where the stones are.\n";
    std::cout <<"Starts looking for the stones but realized the stones desapeared \n";
    std::cout <<"Mickey starts crying and goes back home \n"; 
    std::cout <<"Sad and poor\n";
    std::cout <<"-----------------\n";
    std::cout <<"The end\n";
  }
  else if(decision == 3){
    std::cout <<"After Mickey tells Goofy that he found precious stones on a railway train. \n";
    std::cout <<"Goofy gets his backpack and starts following Mickey\n";
    std::cout <<"Once they found the railway, they hear a train comming towards them\n";
    std::cout <<"Micket desperately takes goofy's backpack and starts rushing to where he found the stones\n";
    std::cout <<"(write next to continue)\n";
    std::cin >> enter; 
    std::cout <<"---------------\n";
    std::cout <<"Goofy shouts! \"HEY! WHAT ARE YOU DOING MICKEY\"!, worried the train was getting closer.\n";
    std::cout <<"Mickey responds, \"I'm getting those stones, what do you think?\"!, and starts picking stones and putting them in the backpack.\n";
    std::cout <<"As goofy sees the train getting closer and closer, Goofy starts shouting to Mickey, \"Mickey! get the out of there!\"\n";
    std::cout <<"Mickey get caught by the train and pushes him off the rail with his legs broken\n";
    std::cout <<"press next to continue\n";
    std::cin >> enter; 
    std::cout <<"-------------------\n";
    std::cout <<"Mickey starts crying out loud, and Goofy starts laughing at him\n";
    std::cout <<"As the train slows down, mickey sees the train driver and shouts at him\n";
    std::cout <<"AHH MY LEGS!\n";
    std::cout <<"The driver stares at them and responds, \"I dont care \"\n";
    std::cout <<"-----------------\n";
    std::cout <<"The end\n";
  } 
  else{
    std::cout <<"Invalid input\n";
  }

    return 0;
}
