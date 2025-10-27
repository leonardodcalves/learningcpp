#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
    std::cout << "You have crashlanded on an uncharted planet.\nYou are in luck, you were not harmed, and the atmospehre is breathable.\nYou have food and water from your drop pod to last for a few weeks.\n\n";
    srand(time(NULL));
    int random2 = (std::rand() % 2) + 1;
    int input_valid = 0;
    int answer = 0;
    if (random2 == 1) {
        std::cout << "You were spotted by a local space-pirate group.\nYou are now being shot at. Your luck has run out, and you were shot in the chest.\n\n";
        std::cout << "You are dead.\n\n";
        return 0;
    } else if (random2 == 2) {
        std::cout << "You rise up, and look around your landing site.\n You may choose to head North and East.\n West and South are blocked by mountains.\n\n";
        std::cout << "Where are you headed? 1)North or 2)East?\n\n";
        while (input_valid == 0) {
        std::cout << "Answer: ";
        std::cin >> answer; 
        std::cout << "\n\n";
        if (answer == 1) {
            std::cout << "You head North.\n";
            input_valid = 1;
            std::cout << "\nYou find yourself trying to survive in a thick marsh.\nThere's fog everywhere, and it is cold outside.\nThe smell of sulfur permeates the air, and you lose consciousness.\nSomehow there is no oxigen in the depths of the marsh.\nYou are dead.";
        } else if (answer == 2) {
            std::cout << "You head East.\n";
            input_valid = 1;
            std::cout <<"\nIn the easternlands, you find yourself in front of an ancient structure.\nA tall obelisk, with a surrounding aura where you can look on the other side.\nSeems like a portal to your homeworld.\nBut it is guarded by an old man, wise man.\nYou have to play with me, if you win, you can enter.\nIf you loose, I will destroy you.\n";
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
                        std::cout << "\nTie!\n\nUser: Rock\nOld Man: Rock\n";
                        input_valid = true;
                    } else if (user == 1 && computer == 2) {
                        std::cout << "\nComputer win!\n\nUser: Rock\nOld Man: Paper\n";
                        computer_points = (computer_points +1);
                        user_points = user_points;
                        input_valid = true;
                    } else if (user == 1 && computer == 3) {
                        std::cout << "\nUser win!\n\nUser: Rock\nOld Man: Scissors\n";
                        computer_points = computer_points;
                        user_points = (user_points + 1);
                        input_valid = true;
                    } else if (user == 2 && computer == 1) {
                        std::cout << "\nUser win!\n\nUser: Paper\nOld Man: Rock\n";
                        computer_points = computer_points;
                        user_points = (user_points + 1);
                        input_valid = true;
                    } else if (user == 2 && computer == 2) {
                        std::cout << "\nTie!\n\nUser: Paper\nOld Man: Paper\n";
                        input_valid = true;
                    } else if (user == 2 && computer == 3) {
                        std::cout << "\nComputer win!\n\nUser: Paper\nOld Man: Scissors\n";
                        computer_points = (computer_points +1);
                        user_points = user_points;
                        input_valid = true;
                    } else if (user == 3 && computer == 1) {
                        std::cout << "\nComputer win!\n\nUser: Scissors\nOld Man: Rock\n";
                        computer_points = (computer_points +1);
                        user_points = user_points;
                        input_valid = true;
                    } else if (user == 3 && computer == 2) {
                        std::cout << "\nUser win!\n\nUser: Scissors\nOld Man: Paper\n";
                        computer_points = computer_points;
                        user_points = (user_points + 1);
                        input_valid = true;
                    } else if (user == 3 && computer == 3) {
                        std::cout << "\nTie!\n\nUser: Scissors\nOld Man: Scissors\n";
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
                std::cout << "OLD MAN";
            }
            std::cout << "\n\nTotal points: USER: " << user_points << "; OLD MAN: " << computer_points << "\n\n\n";  
            if (user_points == 3) {
                std::cout << "\nYou return safely to your homeworld.\n";
            } else {
                std::cout << "\nYou are dead";
            }
        } else {
            std::cout << "Invalid answer. Answer '1' for North, '2' for East\n\n";
            input_valid = 0;
        }}
    } else {
        std::cout << "Something went wrong.\n";
    }
    return 0;
}

/*

Learn C++
Build a Text Adventure
Overview
This project is slightly different than others you have encountered thus far on Codecademy. 
Instead of a step-by-step tutorial, this project contains a series of open-ended requirements which describe the project you’ll be building. There are many possible ways to correctly fulfill all of these requirements, and you should expect to use the internet, Codecademy, and other resources when you encounter a problem that you cannot easily solve.

Project Goals
Create a C++ text adventure with the storyline of your choosing. The program should use your 
knowledge of C++ conditionals, logic, and loops.

Setup Instructions
If you choose to do this project on your computer instead of Codecademy, you can download what 
you’ll need by clicking the “Download” button below. If you need help setting up your computer, be sure to check out our setup guide.

Download
Tasks
0/6 complete
Mark the tasks as complete by checking them off
Prerequisites
1.
In order to complete this project, you should be familiar with C++ conditionals and control 
flow, loops, and setting variables using user input. Ideally, you’ve finished the first four sections of Learn C++ (through Loops).

Project Requirements
2.
Your program should have a storyline with:

a beginning
at least three possible endings
It can help to map out your ideas on paper and draw out your possible branches before you 
begin coding anything.

In our solution, we used Alice’s Adventures in Wonderland as the premise for our storyline, 
but you can choose any topic you like! Some possible ideas include:

A fantasy book you love
Your favorite TV show
A funny movie
A murder mystery
A game show
3.
Your program should contain at least three branch points where the user must make a choice 
about what to do next. At each branch point, the program should:

give the user at least two choices
accept user input
Note that not every story branch needs its own ending; it can also add something and then 
reconnect with another storyline.

4.
Your program should incorporate at least one kind of loop.

Loops come in handy in a couple scenarios:

to validate user input (e.g., check if the user entered something other than your listed 
choices and then list the choices again)
to give the user multiple chances to choose a specific outcome (e.g., give a user three 
chances to pick an option that won’t get them killed)
to continue the adventure until the user makes a particular choice
Note: On Codecademy’s platform, if you plan to obtain user input within a loop, we recommend 
sticking with a for loop. Due to the way our platform is set up, a while loop that includes 
user input will trigger an infinite loop.

5.
Your program should handle user choices using conditional logic. We encourage you to use 
if/else if statements and switch statements where you see fit.

Note: If your user has reached an ending, you can use return 0; to exit the main() function 
and end the program.

Project Extensions & Solution
6.
Great work! Visit our forums to compare your project to our sample solution code. You can 
also learn how to host your own solution on GitHub so you can share it with other learners! 
Your text adventure will probably be coded a lot different from ours — and that’s totally fine! 
The important thing is you built something that works as expected and that you are proud of. 
There are multiple ways to solve these projects, and you’ll learn more by seeing others’ code.

If you want to extend this project further, try adding more complexity by increasing the number 
of possible branches. Also, if you already know C++ functions, you can refactor your program 
so that your code is cleaner and more modular.

Optional: You can include ASCII art to add an extra illustrative flourish to the storyline.

*/
