#include <iostream>

int square(int const &i) {
        return i * i;
}
int main() {
        int side = 5;
        std::cout << square(side) << "\n";
}


/*

References and Pointers
Pass-By-Reference with Const
4 min
Remember const? The const keyword tells the compiler that we won’t change something.

For example, in the following code, we are telling the compiler that the double variable 
pi will stay at 3.14 throughout the program:

double const pi = 3.14;

Copy to Clipboard

If we try to change pi, the compiler will throw an error.

Sometimes, we use const in a function parameter; this is when we know for a fact that we 
want to write a function where the parameter won’t change inside the function. Here’s an example:

int triple(int const i) {

  return i * 3;

}

Copy to Clipboard

In this example, we are not modifiying the i. If inside the function triple(), the value of i 
is changed, there will be a compiler error.

So, to save the computational cost for a function that doesn’t modify the parameter value(s), 
we can actually go a step further and use a const reference:

int triple(int const &i) {

  return i * 3;

}

Copy to Clipboard

This will ensure the same thing: the parameter won’t be changed. However, by making i a reference 
to the argument, this saves the computational cost of making a copy of the argument.

Instructions
Checkpoint 1 Enabled
1.
Take a look at the program in the code editor. There is a function called square() and there is 
a main() where we call square() once.

What do you think this code will output?

Run the program to see if you are correct.

Checkpoint 2 Step instruction is unavailable until previous steps are completed
2.
Since we are not modifying the parameter in the function, let’s go a step further and make the 
square()‘s parameter a const reference.

Run the code again.

The output should be the same!

*/