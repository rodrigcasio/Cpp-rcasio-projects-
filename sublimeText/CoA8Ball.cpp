
/*
    The Magic 8-Ball program. 
*/



#include <iostream>
#include <cstdlib>


int main(){

  //the % is the module symbol that returns the remainder

  srand(time(NULL));   
  int answer = std::rand() % 10;
  std::string question;

//--

  std::cout <<"MAGIC 8-Ball Ask me anything!\n";
  std::cin >> question;

  std::cout << answer <<'\n';

  switch(answer){
    case 0:
      std::cout <<"It is certain.";
      break;
    case 1:
      std::cout <<"It is decidedly so.";
      break;
    case 2:
      std::cout <<"Outlook good.";
      break;
    case 3:
      std::cout <<"Don't count on it.";
      break;
    case 4:
      std::cout <<"As I see it, yes.";
      break;
    case 5:
      std::cout <<"Signs point to yes.";
      break;
    case 6:
      std::cout <<"Cannot predict now.";
      break;
    case 7:
      std::cout <<"Without a doubt.";
      break;
    case 8:
      std::cout <<"Reply hazy, try again.";
      break;
    case 9:
      std::cout <<"My reply no.";
      break;
    default:
      std::cout <<"Very doubtful.";

  }
    
  return 0;
}