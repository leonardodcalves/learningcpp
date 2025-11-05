/*
// ----- main.cpp -----
#include <iostream>

extern int score;
extern void displayScore();

int main() {
  score = 200;
  displayScore();

  return 0;
}
// ----- game.cpp -----
#include <iostream>

// Global variable
int score = 100;

// Function definition
void displayScore() {
  std::cout << "Score: " << score << "\n";
}
*/


/*

Variable Scope and Storage Classes
External Linkage with extern
14 min
In C++, we often break our code into different 
files
Preview: Docs Loading link description
 to make it more manageable and readable. But what happens if a variable or a function defined 
 in one source file needs to be used in another? We can use extern to bring in the variable or 
 function, allowing us to use it in our current source file. The keyword extern tells the compiler, 
 “This variable (or function) is defined elsewhere, but it will be used here.”

While using extern is one way to declare variables or 
functions
Preview: Docs Loading link description
 across files, the common and preferred approach is to place declarations in a header file and 
 include the file wherever needed.

Here’s how we use the extern keyword to declare variables:

extern type variableName; 

Copy to Clipboard

Note: The extern keyword can only be used with 
global variables
Preview: Docs Loading link description
 or functions. 

Let’s explore this with an example.

Suppose we have a logging system in our application where a global variable logLevel determines 
the level of logs to display, and a function logMessage() prints log messages based on that level. 
These functions are defined in one file, but we want to use them in multiple files.

In one file (let’s call it Logger.cpp), we’ll define logLevel and implement the logMessage() 
function:

int logLevel = 2; // 1: Error, 2: Warning, 3: Info 

// Define a function to log messages based on the log level 

void logMessage(int level, const string &message) { 
  if (level <= logLevel) { 
    cout << "Log (Level " << level << "): " << message << endl; 
  } 
} 

Copy to Clipboard

This defines the logLevel variable and the logMessage() function. The logLevel controls which messages 
should be displayed based on their severity.

In another file (let’s call it main.cpp), we’ll declare logLevel and logMessage() using the extern 
keyword:

extern int logLevel; 
extern void logMessage(int level, string &message); 

Copy to Clipboard

The extern keyword in main.cpp tells the compiler that logLevel and logMessage() are defined in another 
file (Logger.cpp) but will be used in main.cpp.

A drawback of using extern is that modifying an extern variable can affect the program because it is 
a shared global variable. Changes to the variable in one part of the program can impact all other parts 
referring to it, as they share the same memory location.

The extern keyword also lets us reference functions or 
classes
Preview: Docs Loading link description
 from compiled object files (these come from code written and compiled by someone else), enabling 
 their use without access to the source code.

Suppose we use the extern keyword to declare the class or function in our code. For example:

extern class ExternalClass { 
  public: 
    void performTask(); 
}; 

Copy to Clipboard

To link the precompiled class, we must ensure that the object file or library containing the class definition 
is linked during the compilation process. This is usually done by specifying the appropriate object file or 
library in the linker command.

For example, when compiling with g++:

g++ main.cpp -o main -L/path/to/library -lmyLibrary 

Copy to Clipboard

Here, -L specifies the directory containing the library, and -l links the object file or library (e.g., 
libmyLibrary.a).

The names myLibrary and /path/to/library are placeholders in the example. We should replace them with the 
actual name of our library and the path where our library files are located. For instance, if our library is 
called libexample.a and is located in /usr/local/lib, we would adjust the command accordingly.

Once declared and linked, we can use the precompiled class as if it were defined in our source code:

ExternalClass obj; 
obj.performTask(); 

Copy to Clipboard

Let’s put this into practice!

Instructions
Checkpoint 1 Enabled
1.
In the Game.cpp file, a global variable int score is defined and initialized to 100.

In the main.cpp file, declare int score using the extern keyword.

Checkpoint 2 Step instruction is unavailable until previous steps are completed
2.
The displayScore() function in Game.cpp is defined to display the value of score.

Declare the function in the main.cpp using extern.

Checkpoint 3 Step instruction is unavailable until previous steps are completed
3.
In the main() function, update the score by assigning it the value 200.

Checkpoint 4 Step instruction is unavailable until previous steps are completed
4.
Call displayScore() in the main() function.

*/