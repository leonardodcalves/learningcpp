/*MAIN*/
#include <iostream>
int main() {
        int soda = 99;
        int &pop = soda;
        pop = pop + 1;
        std::cout << soda << "\n";
        std::cout << pop << "\n";
}
/*

References and Pointers
References
5 min
In C++, a reference variable is an alias for something else, that is, another name 
for an already existing variable.

So suppose we make Sonny a reference to someone named Songqiao. You can refer to the 
person as either Sonny or Songqiao.

Let’s take a look at how we can do this with code. Suppose we have an int variable 
already called songqiao, we can create an alias to it by using the & sign in the 
declaration:

int &sonny = songqiao;

Copy to Clipboard

So here, we made sonny a reference to songqiao.

Now when we make changes to sonny (add 1, subtract 2, etc), songqiao also changes.

Two things to note about references:

Anything we do to the reference also happens to the original.
Aliases cannot be changed to alias something else.
Instructions
Checkpoint 1 Enabled
1.
We have a variable called soda declared and initialized to 99.

Declare another int variable called pop and make it a reference to soda.

Checkpoint 2 Step instruction is unavailable until previous steps are completed
2.
Let’s add 1 to pop.

Checkpoint 3 Step instruction is unavailable until previous steps are completed
3.
Print out soda and pop.

Are they the same?

*/