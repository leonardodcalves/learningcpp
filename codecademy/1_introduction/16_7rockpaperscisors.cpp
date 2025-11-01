#include <iostream>
#include <stdlib.h>

int main() {
    srand(time(NULL));
    int user = 0;
    int computer_points = 0;
    int user_points = 0;
    bool input_valid = false;
    int computer;
    do {
        do {
            std::cout << "===========================\n";
            std::cout << "=== Rock Paper Scisors! ===\n";
            std::cout << "===========================\n";
            std::cout << "\n1) ✊\n";
            std::cout << "\n2) ✋\n";
            std::cout << "\n3) ✌️\n";
            std::cout << "\nNow! What do you choose: "; std::cin >> user; std::cout << "\n";
            computer = rand() % 3 + 1;
            if (user == 1 && computer == 1) {
                std::cout << "\nTie!\n\nUser: Rock\nComputer: Rock\n";
                input_valid = true;
            } else if (user == 1 && computer == 2) {
                std::cout << "\nComputer win!\n\nUser: Rock\nComputer: Paper\n";
                computer_points = (computer_points +1);
                user_points = user_points;
                input_valid = true;
            } else if (user == 1 && computer == 3) {
                std::cout << "\nUser win!\n\nUser: Rock\nComputer: Scissors\n";
                computer_points = computer_points;
                user_points = (user_points + 1);
                input_valid = true;
            } else if (user == 2 && computer == 1) {
                std::cout << "\nUser win!\n\nUser: Paper\nComputer: Rock\n";
                computer_points = computer_points;
                user_points = (user_points + 1);
                input_valid = true;
            } else if (user == 2 && computer == 2) {
                std::cout << "\nTie!\n\nUser: Paper\nComputer: Paper\n";
                input_valid = true;
            } else if (user == 2 && computer == 3) {
                std::cout << "\nComputer win!\n\nUser: Paper\nComputer: Scissors\n";
                computer_points = (computer_points +1);
                user_points = user_points;
                input_valid = true;
            } else if (user == 3 && computer == 1) {
                std::cout << "\nComputer win!\n\nUser: Scissors\nComputer: Rock\n";
                computer_points = (computer_points +1);
                user_points = user_points;
                input_valid = true;
            } else if (user == 3 && computer == 2) {
                std::cout << "\nUser win!\n\nUser: Scissors\nComputer: Paper\n";
                computer_points = computer_points;
                user_points = (user_points + 1);
                input_valid = true;
            } else if (user == 3 && computer == 3) {
                std::cout << "\nTie!\n\nUser: Scissors\nComputer: Scissors\n";
                input_valid = true;
            } else {
                input_valid = false;
                std::cout << "\nInvalid response. Please, try again.\n\n";
            }
        } while (input_valid != true);
     } while(user_points < 3 && computer_points < 3);
     std::cout << "\n\nFinal Winner: ";
     if (user_points > computer_points)
     {
        std::cout << "USER";
     } else {
        std::cout << "COMPUTER";
     }
     std::cout << "\n\nTotal points: USER: " << user_points << "; COMPUTER: " << computer_points << "\n\n\n";
     return 0;
}