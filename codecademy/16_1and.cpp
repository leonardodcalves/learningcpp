/*Logical Operators
Logical Operator: &&
4 min
The and logical operator is denoted by &&.

It returns true if the condition on the left and the condition on the right are both true. Otherwise, it returns false.

Here’s the truth table:

a         b	    a && b
false	false	false
false	true	false
true	false	false
true	true	true

For instance:

( 1 < 2 && 2 < 3 ) returns true
( 1 < 2 && 2 > 3 ) returns false
Note: The keyword and can also be used in the place of &&.

Instructions
Checkpoint 1 Enabled
1.
Write the following if statement:

If hunger is true and anger is true, then print out the word "Hangry".*/

#include <iostream>

int main() {

    bool hunger = true;
    bool anger = true;

    if (hunger && anger) {
        std::cout <<"Hangry.\n";
    }
    else {
        std::cout << "Not Hangry.\n";
    }

    return 0;
}