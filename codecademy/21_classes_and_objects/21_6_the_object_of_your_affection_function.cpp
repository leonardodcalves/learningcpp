#include <iostream>
#include <string>
#include "21_6_the_object_of_your_affection_header.hpp"

/*FUNCTIONS*/
void Profile::profileSetup() {
        std::cout << "Welcome to my dating app. Please, create your profile by answering with your personal information:\n\n";
        std::cout << "My full name is: "; std::getline(std::cin, name); std::cout << "\n\n";
        std::cout << "How old are you? Answer (age number only): "; std::cin >> age; std::cin.ignore(); std::cout << "\n\n";
        std::cout << "What country are you from? Answer (country name only): "; std::getline(std::cin, country); std::cout << "\n\n";
        std::cout << "Where are you from? Answer (city name only): "; std::getline(std::cin, city); std::cout << "\n\n";
        std::cout << "What are your pronouns? Answer (He/Him ; She/Her): "; std::getline(std::cin, pronouns); std::cout << "\n\n";
        std::cout << "What are your hobbies? Answer: "; std::getline(std::cin, hobbies); std::cout << "\n\n";
}
void Profile::getProfile() {
        std::cout << "\n==========\nUSER PROFILE\n==========\n";
        std::cout << "Name: " << name << "\n";
        std::cout << "Age: " << age << "\n";
        std::cout << "Country: " << country << "\n";
        std::cout << "City: " << city << "\n";
        std::cout << "Pronouns: " << pronouns << "\n";
        std::cout << "Hobbies: " << hobbies << "\n\n";
        std::cout << "==========\n";
}