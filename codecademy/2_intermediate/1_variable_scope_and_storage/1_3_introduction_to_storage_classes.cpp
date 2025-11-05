// main.cpp
#include <iostream>
#include "Counter.hpp"

using namespace std;

int main() {
  // Demonstrating static counter (persists across function calls)
  cout << "Demonstrating static counter:" << endl;
  incrementStaticCounter();
  incrementStaticCounter();

  // Demonstrating auto counter (created fresh each time it's called)
  cout << "Demonstrating auto counter:" << endl;
  incrementAutoCounter();
  incrementAutoCounter();
  
  // Demonstrating extern counter (shared across files)
  externCounter = 100;
  cout << "Demonstrating extern counter:" << endl;
  cout << "Extern counter value: " << externCounter << endl;

  return 0;
}
// Counter.hpp
// Declaration of extern variable
extern int externCounter;

// Function to demonstrate static variable behavior
void incrementStaticCounter();

// Function to demonstrate auto variable behavior
void incrementAutoCounter();
// Counter.cpp
#include <iostream>
#include "Counter.hpp"

using namespace std;

// Definition of extern variable
int externCounter = 0;

// Static counter function
void incrementStaticCounter() {
  static int staticCounter = 0;
  staticCounter++;
  cout << "Static counter: " << staticCounter << endl;
}

// Auto counter function
void incrementAutoCounter() {
  auto autoCounter = 10;
  cout << "Auto counter: " << autoCounter << endl;
}



/*

Variable Scope and Storage Classes
Introduction to Storage Classes
6 min
In C++, 
variables
Preview: Docs Loading link description
 are more than just containers for holding data. They also have certain properties that 
 dictate how and when they are created, accessed, and destroyed. Storage classes determine 
 these properties, which define the lifetime, scope, and visibility of variables. The need 
 for storage 
classes
Preview: Docs Loading link description
 arises from the complexity of larger programs, where variables and 
functions
Preview: Docs Loading link description
 need to behave differently based on their intended usage and lifetime.

For instance, creating a variable inside a function might only be relevant during the 
function’s execution. But in some cases, we might want a variable to retain its value even 
after the function finishes. Similarly, we may need variables that can be accessed from other 
files
Preview: Docs Loading link description
 in our program. This is where storage classes come into play.

By controlling how a variable is stored and accessed, storage classes help manage memory 
more efficiently and organize the flow of data within a program. They give us more control 
over the behavior of variables and help optimize performance and memory usage. They’re 
like different types of storage classes:

Automatic (auto) variables are declared inside a function and exist only during its execution.
Static (static) variables are initialized only once and retain their value even after the 
function exits.
Extern (extern) variables are accessible across different files in a program.
We will also discuss read-only functions and how the mutable keyword allows for the modification 
of a variable within them.

We’ll learn about these storage classes in detail in upcoming exercises.

Instructions
Run the code and observe the output.

*/