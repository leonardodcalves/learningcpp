#include <iostream>
void enter_code(int passcode) {
    std::string secret_knowledge = "https://content.codecademy.com/courses/regex/onyourexcitingjourneylearningtocodeyouwillfindthis.gif";
    if (passcode == 0310) {
        std::cout << secret_knowledge << "\n";
    } else {
        std::cout << "Sorry, incorrect!\n";
    }
}
int main() {
    enter_code(0310);
}
/*

Functions: Scope & Flexibility
The Scope of Things
7 min
Take a look at the program below. We have a void function named favorite_animal() and main() with a few statements inside.

#include <iostream>

std::string sea_animal = "manatee";

void favorite_animal(std::string best_animal) {

  std::string animal = best_animal;
  std::cout << "Best animal: " << animal << "\n";

}

int main() {

  favorite_animal("jaguar");

  std::cout << sea_animal << "\n";
  std::cout << animal << "\n";

}

Copy to Clipboard

When this program is compiled and executed, sea_animal will print, but animal won’t. Why do you think that’s the case?

Scope is the region of code that can access or view a given element.

Variables
Preview: Docs Loading link description
 defined in global scope are accessible throughout the program.
Variables defined in a function have local scope and are only accessible inside the function.
sea_animal was defined in global scope at the top of the program, outside of main(). So sea_animal is defined everywhere in the program.

Because animal was only defined within favorite_animal() and not returned, it is not accessible to the rest of the program.

Instructions
Checkpoint 1 Enabled
1.
If you run the code, you can print secret_knowledge right in main() without entering the passcode. Yikes!

Only people who enter the correct passcode should have access to that knowledge.

Move secret_knowledge into local scope so that it only prints from the function call when the correct code is entered.

*/

/*
STARTING CODE:

#include <iostream>

std::string secret_knowledge = "https://content.codecademy.com/courses/regex/onyourexcitingjourneylearningtocodeyouwillfindthis.gif";

void enter_code(int passcode) {
  
  if (passcode == 0310) {
    
    std::cout << secret_knowledge << "\n";
    
  } else {
    
    std::cout << "Sorry, incorrect!\n";
    
  }
}

int main() {
  
  std::cout << secret_knowledge << "\n";
  
  enter_code(0310);
  
}

*/