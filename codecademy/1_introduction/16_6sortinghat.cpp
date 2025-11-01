#include <iostream>

int main() {
    int gryffindor = 0, hufflepuff = 0, ravenclaw = 0, slytherin = 0, answer1 = 0, answer2 = 0, answer3 = 0, answer4 = 0;
    bool input_valid = false;
    std::cout << "===========================\n";
    std::cout << "===The Sorting Hat Quiz!===\n";
    std::cout << "===========================\n\n";
    do {
        std::cout << "Q1) When I'm dead, I want people to remember me as:\n\n1) The Good\n2) The Great\n3) The Wise\n4) The Bold\n\n";
        std::cout << "Answer: "; std::cin >> answer1; std::cout << "\n\n";
        if (answer1 == 1) {
            hufflepuff = (hufflepuff + 1); input_valid = true;
        } else if (answer1 == 2) {
            slytherin = (slytherin + 1); input_valid = true;
        } else if (answer1 == 3) {
            ravenclaw = (ravenclaw + 1); input_valid = true;
        } else if (answer1 == 4) {
            gryffindor++; input_valid = true;
        } else {
            std::cout << "Invalid input.\n\n";
        }
    } while (!input_valid); input_valid = false;
    std::cout << "Great!\nNext Question:\n\n";
    do {
        std::cout << "Q2) Dawn or Dusk?\n\n1) Dawn;\n2) Dusk\n\n";
        std::cout << "Answer: "; std::cin >> answer2; std::cout << "\n\n";
        if (answer2 == 1) {
            gryffindor = (gryffindor + 1);
            ravenclaw = (ravenclaw + 1);
            input_valid = true;
        } else if (answer2 == 2) {
            hufflepuff = (hufflepuff + 1);
            slytherin = (slytherin + 1);
            input_valid = true;
        } else {
            std::cout << "Invalid input.\n\n";
        }
    } while (!input_valid); input_valid = false;
    std::cout << "Great! Next Question:\n\n";
    do {
        std::cout << "Q3) Which kind of instrument most pleases your ear?\n\n1) The violin\n2) The trumpet\n3) The piano\n4) The drum\n\n";
        std::cout << "Answer: "; std::cin >> answer3; std::cout << "\n\n";
        if (answer3 == 1) {
            slytherin = (slytherin + 1); input_valid = true;
        } else if (answer3 == 2) {
            hufflepuff = (hufflepuff + 1); input_valid = true;
        } else if (answer3 == 3) {
            ravenclaw = (ravenclaw + 1); input_valid = true;
        } else if (answer3 == 4) {
            gryffindor = (gryffindor + 1); input_valid = true;
        } else {
            std::cout << "Invalid input.\n\n";
        }
    } while (!input_valid);
    std::cout << "Great! Next Question:\n\n";
    do {
        std::cout << "Q4) Which road tempts you most?\n\n1) The wide, sunny, grassy lane\n2) The narrow, dark lantern-lit alley\n3) The twisting, leaf-strewn path through woods\n4) The cobbled street lined (ancient buildings)\n\n";
        std::cout << "Answer: "; std::cin >> answer4; std::cout << "\n\n";
        if (answer4 == 1) {
            hufflepuff = (hufflepuff + 1); input_valid = true;
        } else if (answer4 == 2) {
            slytherin = (slytherin + 1); input_valid = true;
        } else if (answer4 == 3) {
            gryffindor = (gryffindor + 1); input_valid = true;
        } else if (answer4 == 4) {
            ravenclaw = (ravenclaw + 1); input_valid = true;
        } else{
            std::cout << "Invalid input.\n\n";
        }
    }  while (!input_valid);
    int max = 0;
    std::string house;
    if (gryffindor > max) {
        max = gryffindor;
        house = "Gryffindor";
    } else if (hufflepuff > max) {
        max = hufflepuff;
        house = "Hufflepuff";
    } else if (ravenclaw > max) {
        max = ravenclaw;
        house = "Ravenclaw";
    } else if (slytherin > max) {
        max = slytherin;
        house = "Slytherin";
    } else {
        std::cout << "What went wrong?\n";
    }
    std::cout << house << "!\n";

    std::cout << "\n\nDEBUG: GRYFFINDOR: " << gryffindor << " HUFFLEPUFF: " << hufflepuff << " RAVENCLAW: " << ravenclaw << " SLYTHERIN: " << slytherin;
}