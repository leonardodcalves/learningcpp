#include <iostream>
#include <string>

/*CLASSES*/
class Profile {
private:
        std::string name;
        int age;
        std::string city;
        std::string country;
        std::string pronouns;
        std::string hobbies;
public:
        void profileSetup();
        void getProfile();
        
};