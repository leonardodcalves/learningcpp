#include <iostream>

int triple(int &i) {
        i = i * 3;
        return i;
}
int main() {
        int num = 3;
        std::cout << triple(num) << "\n";
        std::cout << triple(num) << "\n";
}
/*

References and Pointers
Pass-By-Reference
7 min
So what’s a good use case for references? Let’s take a look.

Previously, when we passed parameters to a function, we used normal 
variables
Preview: Docs Loading link description
 and that’s known as pass-by-value. But because the variables passed into the function 
 are out of scope, we can’t actually modify the value of the arguments.

Pass-by-reference refers to passing parameters to a function by using 
references
Preview: Docs Loading link description
. When called, the function can modify the value of the arguments by using the reference 
passed in.

This allows us to:

Modify the value of the function arguments.
Avoid making copies of a variable/object for performance reasons.
The following code shows an example of pass-by-reference. The reference parameters are 
initialized with the actual arguments when the function is called:

void swap_num(int &i, int &j) {

  int temp = i;
  i = j;
  j = temp;

}

int main() {

  int a = 100;
  int b = 200;

  swap_num(a, b);

  std::cout << "A is " << a << "\n";
  std::cout << "B is " << b << "\n";

}

Copy to Clipboard

Notice that the int &i and int &j are the parameters of the function swap_num().

When swap_num() is called, the values of the variables a and b will be modified because they 
are passed by reference. The output will be:

A is 200
B is 100

Copy to Clipboard

Suppose we didn’t pass-by-reference here and have the parameters as simply int i and int j in 
the swap_num() function, then i and j would swap, but a and b wouldn’t be modified.

And the output will then be:

A is 100
B is 200

Copy to Clipboard

To reiterate, using references as parameters allows us to modify the arguments’ values. This 
can be very useful in a lot of cases.

Instructions
Checkpoint 1 Enabled
1.
Take a look at the program in the code editor. There is a function called triple() and there 
is a main() where we call triple() twice.

What do you think this code will output?

Run the program to see if you are correct.

Checkpoint 2 Step instruction is unavailable until previous steps are completed
2.
Change the parameter from int i to int &i.

We are doing pass-by-reference instead of pass-by-value. What do you think this will output now?

Run the code again.

*/