#include <iostream>
#include <string>
#include <vector>

void configure_the_election(){
    std::cout << "Welcome to the election configuration panel.\n";
    std::cout << "We will ask you for some information regarding this election process.\n\n";
    int candidateinput = 2;
    int config = 0;
    int nomorecandidates = 0;
    while (candidateinput == 2) {
        std::cout << "What would you like to configure?\n\n";
        std::cout << "1) Insert new candidate\n2)View current election configuration\n3)End election configuration\n\nAnswer :";
        std::cin >> config;
        std::cout << "\n\n";
        if(config == 1){
            std::cout << "Please, insert the full name of the candidate: ";
            for (int i = 0; nomorecandidates == 1; i++) {
                
            }
            
        }
    }

}