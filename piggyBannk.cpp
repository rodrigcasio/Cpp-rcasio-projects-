#include <iostream>

int main() {
  
  double pesos;
  double reais;
  double soles;

  double dollars;

  std::cout <<"Enter number of Colombian Pesos: ";
  std::cin >> pesos;

  td::cout <<"Enter number of Brazilian reais: ";
  std::cin >> reais;

  td::cout <<"Enter number of Peruvian soles: ";
  std::cin >> soles;

  // 1 Colombian peso = 0.00023 usd
  // 1 reais = 0.1635 usd
  // 1 Sol = 0.26 usd 

  double conversion_rate1 = pesos * 0.00023;
  double conversion_rate2 = reais * 0.1635;
  double conversion_rate3 = soles * 0.26;

  dollars = (conversion_rate1 + conversion_rate2 + conversion_rate3);

  std::cout <<"US Dollars = $ "<< dollars;


}
