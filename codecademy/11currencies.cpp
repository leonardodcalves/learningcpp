#include <iostream>

int main() {

  /* This code is intended to simulate this scenario: 
  You just returned from a trip to South America. The countries you visited were Colombia, Brazil, and Peru. 
  You arrived back in your country with some foreign currencies from these three countries.
  Write a C++ program called currency.cpp that prompts the user for the amount of each foreign currency. 
  Your program should then convert the amount entered by the user and display the total amount of USD. 
  
  This scenario is provided from codecademy.com*/
  
double colombianpeso;
double brazilianreal;
double peruviansol;
double dollar;

std::cout << "=\nPlease, enter the amount of Colombian Pesos:\n";
std::cin >> colombianpeso;

std::cout << "\n=\nPlease, enter the amount of Brazilian Reais:\n";
std::cin >> brazilianreal;

std::cout << "\n=\nPlease, enter the amount of Peruvian Soles:\n";
std::cin >> peruviansol;

dollar = (0.000258*colombianpeso) + (0.1856*brazilianreal) + (0.29 * peruviansol);

std::cout << "\n=\nUS Dollars: $" << dollar;

/*
I could expand this code by prompting the user to update the current exchange rate
*/
  return 0;
}