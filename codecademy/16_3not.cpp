/*Logical Operators
Logical Operator: !
3 min
The not logical operator is denoted by !.

It reverses the bool outcome of the expression that immediately follows.

Here’s the truth table:

a	     !a
false	true
true	false

For instance:

( !true ) returns false
( !false ) returns true
( !(10 < 11) ) returns false
Note: The keyword not can be used in the place of !.

Instructions
Checkpoint 1 Enabled
1.
Write the following if statement:

If the user is !logged_in, then print the phrase "Try again".*/

#include <iostream>

int main() {

    bool logged_in = true;

    if (!logged_in) {
        std::cout << "Try again.\n";
    }
    else {
        std::cout << "You are logged in.\n";
    }

    return 0;
}