#include <iostream>

int main() {
        int power = 9000;
        int* powerPtr = &power;
        std::cout << "power: " << power << "\n";
        std::cout << "&power: " << &power << "\n";
        std::cout << "powerPtr: " << powerPtr << "\n";
        std::cout << "*powerPtr: " << *powerPtr << "\n";
}

/*

References and Pointers
Pointers
5 min
In C++, a pointer variable is mostly the same as other 
variables
Preview: Docs Loading link description
, which can store a piece of data. Unlike normal variables, which store a value 
(such as an int, double, char), a pointer stores a memory address.

While 
references
Preview: Docs A reference variable is an alias for another object.
 are a newer mechanism that originated in C++, 
pointers
Preview: Docs Loading link description
 are an older mechanism that was inherited from C. We recommend avoiding pointers as 
 much as possible; usually, a reference will do the trick. However, you will see 
 pointers a lot in the wild, particularly in older projects, where they are used in a 
 very similar way to references.

Pointers must be declared before they can be used, just like a normal variable. They 
are syntactically distinguished by the *, so that int* means “pointer to int“ and 
double* means “pointer to double“.

int* number;
double* decimal;
char* character;

Copy to Clipboard

So suppose we have a variable called gum:

int gum = 8;

Copy to Clipboard

We can create a pointer to it by:

int* ptr = &gum;

Copy to Clipboard

int* makes it a pointer rather than a normal variable.
ptr is the pointer name.
&gum is the memory address of the other variable gum.
So now ptr has a value of gum‘s memory address.

Pointers
Credit: XKCD 138

Note: Syntactically, spaces around * do not matter, but the best practice is 
to have it after the data type.

int* number;
int *number;
int * number;

Copy to Clipboard

Instructions
Checkpoint 1 Enabled
1.
In the code editor, we have already declared and initialized a variable called 
power.

Create a pointer called ptr that points to the memory address of power.

Checkpoint 2 Step instruction is unavailable until previous steps are completed
2.
Now let’s output the ptr using std::cout.

*/