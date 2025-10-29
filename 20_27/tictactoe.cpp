#include <iostream>
#include <vector>
#include <string>
std::string line = "012345678";
int position = 4;
char turn = 'X';
char X = 'X';
char O = 'O';
void welcome_message() {
        std::cout << "Welcome to my tic tac toe game.\n";
        std::cout << "I hope it is to your liking.\n";
        std::cout << "Written by Leonardo Duarte da Conceição Alves\n\n";
}
void game_board() {
        std::cout << "\n " << line[0] << " | " << line[1] << " | " << line[2] << " \n";
        std::cout << "---|---|---\n";
        std::cout << " " << line[3] << " | " << line[4] << " | " << line[5] << " \n";
        std::cout << "---|---|---\n";
        std::cout << " " << line[6] << " | " << line[7] << " | " << line[8] << " \n\n";
}
bool game_not_ended() {
        if(line[0] == X && line[1] == X && line[2] == X){
                std::cout << "\n\nX IS WINNER!\n\n";
                return false;
        } else if(line[3] == X && line[4] == X && line[5] == X){
                std::cout << "\n\nX IS WINNER!\n\n";
                return false;
        } else if(line[6] == X && line[7] == X && line[8] == X){
                std::cout << "\n\nX IS WINNER!\n\n";
                return false;
        } else if(line[0] == X && line[3] == X && line[6] == X){
                std::cout << "\n\nX IS WINNER!\n\n";
                return false;
        } else if(line[1] == X && line[4] == X && line[7] == X){
                std::cout << "\n\nX IS WINNER!\n\n";
                return false;
        } else if(line[2] == X && line[5] == X && line[8] == X){
                std::cout << "\n\nX IS WINNER!\n\n";
                return false;
        } else if(line[0] == X && line[4] == X && line[8] == X){
                std::cout << "\n\nX IS WINNER!\n\n";
                return false;
        } else if(line[2] == X && line[4] == X && line[6] == X){
                std::cout << "\n\nX IS WINNER!\n\n";
                return false;
        } else if(line[0] == O && line[1] == O && line[2] == O){
                std::cout << "\n\nO IS WINNER!\n\n";
                return false;
        } else if(line[3] == O && line[4] == O && line[5] == O){
                std::cout << "\n\nO IS WINNER!\n\n";
                return false;
        } else if(line[6] == O && line[7] == O && line[8] == O){
                std::cout << "\n\nO IS WINNER!\n\n";
                return false;
        } else if(line[0] == O && line[3] == O && line[6] == O){
                std::cout << "\n\nO IS WINNER!\n\n";
                return false;
        } else if(line[1] == O && line[4] == O && line[7] == O){
                std::cout << "\n\nO IS WINNER!\n\n";
                return false;
        } else if(line[2] == O && line[5] == O && line[8] == O){
                std::cout << "\n\nO IS WINNER!\n\n";
                return false;
        } else if(line[0] == O && line[4] == O && line[8] == O){
                std::cout << "\n\nO IS WINNER!\n\n";
                return false;
        } else if(line[2] == O && line[4] == O && line[6] == O){
                std::cout << "\n\nO IS WINNER!\n\n";
                return false;
        } else {
                std::cout << "The game continues.\n";
                return true;
        }
}

int main() {
        welcome_message();
        game_board();
        std::cout << "'X' will start the game, then 'O'\n";
        std::cout << "'X' player, please insert the position in which you want to place your 'X':\n";
        while(game_not_ended()){
                if(turn == 'X'){
                        std::cout << "Player turn: " << turn << "\n";
                        std::cout << "Answer only a single number: ";
                        std::cin >> position;
                        std::cout << "\n";
                        line[position] = X;
                        turn = 'O';
                } else if(turn == 'O'){
                        std::cout << "Player turn: " << turn << "\n";
                        std::cout << "Answer only a single number: ";
                        std::cin >> position;
                        std::cout << "\n";
                        line[position] = O;
                        turn = 'X';
                } else {
                        std::cout << "Something went wrong. Try again.\n";
                        return 1;
                }
                game_board();
        }
        return 0;
}

/*

Learn C++
Tic-Tac-Toe
Tic-Tac-Toe is a paper-and-pencil game for two players, X and O, who take turns marking the spaces in a 
3x3 grid. The player who succeeds in placing three of their marks in a horizontal, vertical or diagonal 
row wins the game.

Tic-Tac-Toe

Setup Instructions: If you choose to do this project on your computer, you can download what you’ll need 
by clicking the Download button below. If you need help setting up your computer, be sure to check out our 
setup guide.

Open-ended: This project is slightly different than the others you have encountered thus far. Instead of 
a step-by-step tutorial, this project contains a series of open-ended checkpoints. There are many possible 
ways to correctly fulfill all of these requirements, and you should expect to use the internet and other 
resources when you encounter a problem that you cannot easily solve.

Download
Tasks
1/5 complete
Mark the tasks as complete by checking them off
Prerequisites:
1.
In order to complete this project, you should have completed the following sections of Learn C++:

Loops
Vectors
Functions
Make sure to plan out the program on paper before you start coding and remember to take breaks!

You’ll need to account for the following:

This game will have two players that will input in the same terminal.
This 3x3 game board will need to be represented using a data structure, like a vector or an array.
There are 8 winning combinations.
Project requirements:
2.
Loops: This program should use a for loop or while loop to iterate through the player turns.

3.
Vectors: This program should use a vector or an array to hold nine positions of the 3x3 grid.

4.
Functions: This program should be modular.

Solution:
5.
Great work! Visit our forums to compare your project to our sample solution code. You can also learn how 
to host your own solution on GitHub so you can share it with other learners! Your solution might look 
different from ours, and that’s okay! There are multiple ways to solve these projects, and you’ll 
learn more by seeing others’ code.

*/

/*

Let’s review your project work
This AI-generated code review offers specific feedback about your code. You can also ask yourself these same questions when reviewing your code on your own.
Powered by OpenAI
 
Purpose
Does the code do what it's supposed to do?
Great job! Your code implements a playable two-player Tic-Tac-Toe game in the terminal, with turn-taking and win detection for both X and O.
You are currently using a string to represent the board. The project suggests using a vector or array for the 3x3 grid. Consider switching to a vector for better alignment with the project requirements.
Our Suggestion
Copy to Clipboard

std::vector<char> board = {'0','1','2','3','4','5','6','7','8'};
The game does not currently check for a draw (when all spaces are filled and no one wins). Add logic to detect and announce a draw.
Our Suggestion
Copy to Clipboard

else if (std::count(line.begin(), line.end(), 'X') + std::count(line.begin(), line.end(), 'O') == 9) {
    std::cout << "\n\nIt's a draw!\n\n";
    return false;
} else {
    std::cout << "The game continues.\n";
    return true;
}
Readability
Is the code easy to understand?
Your code is well-structured with clear function separation and helpful welcome messages.
Consider using more descriptive variable names for clarity. For example, rename 'line' to 'board' and 'position' to 'move'.
Our Suggestion
Copy to Clipboard

Add comments to explain the purpose of each function and key logic blocks, especially in the win-checking function.
Our Suggestion
Copy to Clipboard

Performance
Does the code run efficiently?
You use a while loop to iterate through player turns, which is appropriate for this game.
The win-checking logic is repetitive. Consider abstracting the win conditions into a function or using a data structure to store winning combinations.
Our Suggestion
Copy to Clipboard

Add input validation to ensure players cannot overwrite an occupied space or enter invalid positions.
Our Suggestion
Copy to Clipboard

Feedback
How did this project go?

*/