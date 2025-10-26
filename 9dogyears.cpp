#include <iostream>

int main() {
  // Calculate the age of any dog older than 2 years
  double idade = 0;
  double idadehumana = 0;

  std::cout << "Insert the age of your dog (must be older than 2!):\n\n";
  std::cin >> idade;

  idadehumana = (21 + ((idade-2)*4));

  std::cout << "The age of your dog, in human years, is: " << idadehumana << " years old.\n";
  
  return 0;
}