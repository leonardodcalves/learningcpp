// this application converts temperature from Farenheint units to Celsius units.
// Leonardo Duarte da Conceição Alves, 16 de outubro de 2025.

#include <iostream>

int main() {
    std::cout << "This program converts temperature units.\nSpecifically, it converts from Farenheint to Celsius.\n";
    
    double tempC = 0;
    double tempF = 0;

    std::cout << "Please, insert temperature in Farenheint:\n";
    std::cin >> tempF;
    
    tempC = (tempF - 32) / 1,8;

    std::cout << "The temperature in Celsius for " << tempF << " Farenheint is " << tempC << " Celsius.";

    return 0;    
}