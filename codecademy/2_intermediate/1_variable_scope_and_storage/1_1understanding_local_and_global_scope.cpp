#include <iostream>

using namespace std;
int playerScore = 50;
void showStats() {
        cout << "Player score from inside the showStats() function: " << playerScore << endl;
}
int main() {
        cout << "Player score from inside the main() function: " << playerScore << endl;
        showStats();
        return 0;
}


/*

Variable Scope and Storage Classes
Understanding Local and Global Scope
5 min
In C++, variable scope determines where we can access and modify our variables in the program. There 
are two main types of scope:

global
local
Variables in the global scope are called global variables. They serve as program-wide accessible 
data that we declare outside all 
functions
Preview: Docs Loading link description
. On the other hand, variables in the local scope are called local variables. They only exist within 
their declaring function or block.

Here is an example of both:

// Accessible everywhere
int playerSpeed = 20;  

void updateStats() { 
  // Local variable 
  int health = 100;

  // We can use playerSpeed here 
  playerSpeed += 10;
} 

void displayStats() {
  // Can access playerSpeed 
  cout << "Speed: " << playerSpeed << endl;

  // Cannot access health 
  cout << "Health: " << health << endl;     
} 

Copy to Clipboard

In the above code, playerSpeed can be accessed and modified in both updateStats() and displayStats() because 
it’s declared in the global scope. However, trying to access health in displayStats() will cause a 
compilation error because health is a local variable declared inside updateStats().

If we declare a local variable inside a function with the same name as a global variable, the value of the 
variable inside the function will be the local version.

int playerSpeed = 20;

int main() {
  int playerSpeed = 40;
  cout << "Speed: " << playerSpeed << endl; 
} 

Copy to Clipboard

The output will be:

Speed: 40

Copy to Clipboard

Global variables maintain their values throughout program execution and can be accessed or modified from 
any function. This can lead to bugs that are hard to find, especially when 
global variables
Preview: Docs Loading link description
 are overwritten. Using too many global variables can make our code harder to manage since any function 
 can change its values.

Let’s see how we can work with global variables!

Instructions
Checkpoint 1 Enabled
1.
Inside the main() function, create a local variable called playerScore of type int and set it to 50.

Take note of the error that occurs.

Make sure you do not modify the cout line in both main() and showStats().

Checkpoint 2 Step instruction is unavailable until previous steps are completed
2.
The playerScore variable is a local variable, so it can only be accessed within the main() function. 
Let’s fix the problem.

Make playerScore a global variable so it is accessible in both the main() function and the showStats() 
function. Keep the value of playerScore as 50.

*/