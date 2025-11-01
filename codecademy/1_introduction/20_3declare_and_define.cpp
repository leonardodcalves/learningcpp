#include <iostream>

void makesandwitch() {
    std::cout << "\nOne slice of bread!\n";
    std::cout << "Egg!\n";
    std::cout << "Cheese! Enough cheese to die for.\n";
    std::cout << "Ham! Not the Fallout type.\n";
    std::cout << "Bread again.\n";
}

int main() {
    makesandwitch();
}

/*

Functions
Declare & Define
2 min
Often, built-in 
functions
Preview: Docs Loading link description
 aren’t enough to tackle the wide array of programming challenges out there. But never fear: 
 you can write your own functions too!

A C++ function is comprised of two distinct parts:

Declaration: this includes the function’s name, what the return type is, and any parameters 
(if the function will accept input values, known as arguments).
Definition: also known as the body of the function, this contains the instructions for what 
the function is supposed to do.
This is the overall structure:

return_type function_name( any, parameters, you, have ) {

   // Code block here

   return output_if_there_is_any;

}

Copy to Clipboard

This is what it might look like with real code:

void make_sandwich() {

  std::cout << "bread\n";
  std::cout << "egg\n";
  std::cout << "cheese\n";
  std::cout << "avocado\n";
  std::cout << "bread\n";

}

Copy to Clipboard

Instructions
Watch how the make_sandwich() function gets executed step by step!

This is just a preview of how everything works, so don’t worry about memorizing anything. In the 
next exercise, we’ll start building functions from scratch…

*/