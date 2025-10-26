#include <iostream>
#include <string>
#include <fstream>

void catisfed() {
    std::ofstream file_out("output.txt");
    int is_cat_fed = 0;
    std::cout << "\nHave you fed the cat?\n\n1 for Yes;\n2 for No.\n\nAnswer :";
    std::cin >> is_cat_fed;
    std::cout << "\n\n";
    while (is_cat_fed != 1 && is_cat_fed != 2) {
        is_cat_fed = 0;
        std::cout << "Invalid answer. Please answer 1 for Yes and 2 for No.\n\nAnswer :";
        std::cin >> is_cat_fed;
        std::cout << "\n\n";
    }
    if (is_cat_fed == 1) {
        std::cout << "The cat is fed!\n\n";
        file_out << "The cat is fed!\n\n";
    }
    if (is_cat_fed == 2) {
        std::cout << "Damn! Please, feed the cat!\n\n";
        file_out << "Damn! Please, feed the cat!\n\n";
    }
    file_out.close();   
}

int main () {
    catisfed();
}