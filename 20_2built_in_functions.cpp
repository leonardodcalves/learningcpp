/*

Functions
Built-in Functions
6 min
Before we learn how to create functions, let’s go over some built-in functions…

C++ comes chock-full of functions that are already created as part of the standard library. 
But how do we access this hidden hoard of helpful functions? We gain access to various functions 
by including headers like <cmath> or <string>.

In fact, you may already have used a couple functions without even knowing it! With the following header:

#include <cmath>

Copy to Clipboard

We gain the power to call sqrt() to find the square root of any number.

Wait, “call” sqrt()?

Calling a function is how we get a function to take action. To call a basic function, we just 
need the function name followed by a pair of parentheses like sqrt(9). For example:

std::cout << sqrt(9) << "\n";

// This would output 3

Copy to Clipboard

Instructions
Checkpoint 1 Enabled
1.
Inside of main(), call rand() with the modulo operator to generate a random number between 0 and 
your favorite number. For example, rand() % 29 would output a random number between 0 and 28.

Assign the resulting value to a new int variable called the_amazing_random_number.

Print the_amazing_random_number to the terminal.

*/

#include <iostream>

int main() {
    srand (time(NULL));
    int the_amazing_random_number = rand() % 29;
    std::cout << the_amazing_random_number << "\n";
}