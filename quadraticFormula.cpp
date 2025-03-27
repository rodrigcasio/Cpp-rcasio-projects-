#include <iostream>
#include <cmath>

int main() {
  
  double a;
  double b;
  double c;

  std::cout <<"Enter a:";
  std::cin >> a;

  std::cout <<"Enter b:";
  std::cin >> b;

  std::cout <<"Enter c:";
  std::cin >> c;

  double root1;
  double root2;

// the positive root 
  root1 = (-b + std::sqrt(b*b - 4 * a * c)) / (2 * a);

// the negative root
  root2 = (-b - std::sqrt(pow(b, 2) - 4 * a * c)) / (2 * a);

  std::cout <<"Root 1 is "<< root1 <<'\n';
  std::cout <<"Root 2 is "<< root2 <<'\n';

  
}
