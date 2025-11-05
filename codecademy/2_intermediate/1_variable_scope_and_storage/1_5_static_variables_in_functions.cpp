#include <iostream>
using namespace std;

void playerHealth() {
        static int health = 100;
        cout << "Current Health: " << health << "\n";
        health -= 10;
}
int main() {
        playerHealth();
        playerHealth();
        return 0;
}
/*

Variable Scope and Storage Classes
Static Variables in Functions
8 min
When a variable needs to retain its value between function calls without being reinitialized each time, we can declare it as static using the static keyword.

In C++, a static variable is a special type of variable that preserves its value even after the function where it was declared is done executing. These 
variables
Preview: Docs Loading link description
 can be used within 
functions
Preview: Docs Loading link description
 to maintain their value between calls or within 
classes
Preview: Docs Loading link description
 to share a single instance of the variable across all 
objects
Preview: Docs Loading link description
 of that class.

Unlike regular variables, which are created and destroyed each time the function is called, static variables maintain their value throughout the program’s execution. This makes them ideal for cases where we need to remember something across multiple function calls, like keeping track of the number of times a function has been executed or caching a result.

Here’s how we can declare a static variable:

static dataType variableName; 

Copy to Clipboard

For example, here we have the count() function that uses a static variable called num:

void count() {   
  static int num = 0; // static variable   
  num++;   
  cout << num << endl;   
}   

Copy to Clipboard

When we call count() multiple times, num‘s value does not reset to 0. Instead, it retains its value across function calls, incrementing each time we call count():

count(); // Outputs 1   
count(); // Outputs 2   
count(); // Outputs 3   

Copy to Clipboard

Static variables have unique storage, and their lifetime extends throughout the program.

Let’s practice working with static variables inside a function.

Instructions
Checkpoint 1 Enabled
1.
In the main.cpp file, we have a function called playerHealth().

Inside it, create a static variable int health with an initial value of 100.

Make sure you do not modify the cout line in playerHealth().

Checkpoint 2 Step instruction is unavailable until previous steps are completed
2.
Decrease the value of health by 10 every time playerHealth() is called.

Checkpoint 3 Step instruction is unavailable until previous steps are completed
3.
In the main() function, call the playerHealth() function twice.

*/