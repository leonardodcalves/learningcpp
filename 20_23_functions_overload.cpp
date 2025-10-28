/*

Functions: Scope & Flexibility
Function Overload!
6 min
What if you want a function to accept an argument that can be either an int OR a double? Or what if you want some function parameters to be optional? C++ has a trick up its sleeve just for such situations.

In a process known as function overloading, you can give multiple C++ 
functions
Preview: Docs Functions are self-contained blocks of code designed to perform specific tasks, allowing for code reuse and modularity.
 the same name. Just make sure at least one of these conditions is true:

Each has different type parameters.
Each has a different number of parameters.
Overloading enables you to change the way a function behaves depending on what is passed in as an argument:

void print_cat_ears(char let) {
  std::cout << " " << let << "   " << let << " " << "\n";
  std::cout << let << let << let << " " << let << let << let << "\n";
}

void print_cat_ears(int num) {
  std::cout << " " << num << "   " << num << " " << "\n";
  std::cout << num << num << num << " " << num << num << num << "\n";
}

Copy to Clipboard

Given the above functions, you could call the functions like so and C++ will know what to do:

print_cat_ears('A');
print_cat_ears(4);

Copy to Clipboard

Output:

 A   A 
AAA AAA

 4   4
444 444

Copy to Clipboard

Instructions
Checkpoint 1 Passed
1.
You’re working with your friend on a project that involves creating some fancy number operations.

Unfortunately, your friend had no idea that function overloading was a thing, so they built a few different functions with different names that all do almost the same operation.

Fortunately, you DO know about function overloading, so you can change all three functions to the same name: fancy_number().

Change the function names in the following places so that fancy_number() is overloaded:

num_ops.hpp
num_ops.cpp
the function calls in main()

*/

/*
num_ops.cpp
int fancy_number(int num1, int num2) {
  
  return num1 - num2 + (num1 * num2);
  
}

int fancy_number(int num1, int num2, int num3) {
  
  return num1 - num2 - num3 + (num1 * num2 * num3);
  
}

int fancy_number(double num1, double num2) {
  
  return num1 - num2 + (num1 * num2);
  
}

*/
/*
num_ops.hpp
int fancy_number(int num1, int num2);
int fancy_number(int num1, int num2, int num3);
int fancy_number(double num1, double num2);

*/
/*
main.cpp
#include <iostream>

#include "num_ops.hpp"

int main() {

  std::cout << fancy_number(12, 3) << "\n";
  std::cout << fancy_number(12, 3, 19) << "\n";
  std::cout << fancy_number(13.5, 3.8) << "\n";
  
}

*/