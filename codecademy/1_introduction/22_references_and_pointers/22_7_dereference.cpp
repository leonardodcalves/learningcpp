#include <iostream>

int main() {
        int power = 9000;
        int* powerPtr = &power;
        std::cout << "power: " << power << "\n";
        std::cout << "&power: " << &power << "\n";
        std::cout << "powerPtr: " << powerPtr << "\n";
        std::cout << "*powerPtr: " << *powerPtr << "\n";   // <<-- THIS IS THE DEREFERENCE! IT 
                                                           //      SHOWS UP NOT AS THE ADDRESS POINT, 
                                                           //      BUT AS THE VALUE STORED AT THAT POINT!
}

/*