#include <iostream>

int main () {

    double pH = 4.6; // Defines variable pH

    if (pH > 7) {
        std::cout << "Basic\n";
    }
    else if (pH < 7) {
        std::cout << "Acidic\n";
    }
    else {
        std::cout << "Neutral\n";
    }
    
    return 0;
}