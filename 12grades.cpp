#include <iostream>

int main() {
    int grade = 59;
    
    if (grade > 60) {
        std::cout << "Pass\n";
    }

    else {
        std::cout << "Fail\n";
    }

    if (grade == 9) {
        std::cout << "Freshman\n";
    }

    else if (grade == 10) {
        std::cout << "Sophomore\n";
    }

    else if (grade == 11) {
        std::cout << "Junior\n";
    }

    else if (grade == 12) {
        std::cout << "Senior\n";
    }

    else {
        std:: cout << "Super Senior\n";
    }

    return 0;
}