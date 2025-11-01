// This application converts the weight of an object on Earth to the weight of the same object on Mars
// Leonardo Duarte da Conceição Alves, 16 de outubro de 2025

#include <iostream>

int main() {
    std::cout << "This application converts the weight of an object on Earth to the weight of the same object on Mars.\n";
    
    double massearth = 0;
    double massmars = 0;

    std::cout << "\nPlease, insert the weight of an object on Earth (in kilograms):\n";
    std::cin >> massearth;

    massmars = massearth * (3.721/9.807);

    std::cout << "\nThank you.\n \nThe weight on Mars of an object that weights " << massearth << " kg on Earth is "
    << massmars << " kg\n";

    return 0;    
}