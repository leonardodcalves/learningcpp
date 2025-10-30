#include <iostream>
#include <string>
#include <vector>

std::string line = "123456789";
int position = 4;
void welcome_message() {
        std::cout << "Welcome to my tic tac toe game.\n";
        std::cout << "I hope it is to your liking.\n";
        std::cout << "Written by Leonardo Duarte da Conceição Alves\n\n";
}
void game_board() {
        std::cout << " " << line[0] << " | " << line[1] << " | " << line[2] << " \n";
        std::cout << "---|---|---\n";
        std::cout << " " << line[3] << " | " << line[4] << " | " << line[5] << " \n";
        std::cout << "---|---|---\n";
        std::cout << " " << line[6] << " | " << line[7] << " | " << line[8] << " \n\n";
}
bool game_not_ended() {
        
}