#include <iostream>
#include <cstdlib>

int main(){

  // Your future is here 
std::string question;
  
  std::string random;

  std::cout<<"MAGIC 8-BALL! Ask me anything\n";
  std::cin >> question;

  srand(time(NULL));
  int answer = std::rand() % 10;

  if(answer == 1){
    std::cout <<"It is certain.\n";
  }
  else if(answer == 2){
    std::cout <<"It is decidedly so.\n";
  }
  else if(answer == 3){
    std::cout <<"Without a doubt.\n";
  }
  else if(answer == 4){
    std::cout <<"Yes - definitely.\n";
  }
  else if(answer == 5){
    std::cout <<"You may rely on it.\n";
  }
   else if(answer == 6){
    std::cout <<"As I see it, yes.\n";
  }
   else if(answer == 7){
    std::cout <<"Most likely.\n";
  }
   else if(answer == 8){
    std::cout <<"Outlook good.\n";
  }
   else if(answer == 9){
    std::cout <<"Yes.\n";
  }
   else{
    std::cout <<"Very doubtful.\n";
  }

  return 0;

}
