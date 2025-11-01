/*

Functions: Scope & Flexibility
How to Build Function Templates
11 min
So how do we implement templates with actual code? Unlike regular functions, templates are entirely created in header files.

Templates let us choose the type implementation right when you call the function. The type we choose may apply to the return type, a parameter type, or both.

Here’s how we could build a template for print_cat_ears() so that the parameter type is flexible:

template <typename T>
void print_cat_ears(T item) {

  std::cout << " " << item << "   " << item << " " << "\n";
  std::cout << item << item << item << " " << item << item << item << "\n";

}

Copy to Clipboard

We can call the function for int, char, std::string, or double:

print_cat_ears(2);

// the output:
//  2   2
// 222 222

Copy to Clipboard

Now we can use print_cat_ears() with a parameter of any type we want, as long as the 
type can be used with the methods expected. For example, we couldn’t pass an std::vector 
into the current print_cat_ears() because << won’t work with std::vector.

Note: Using templates will slow down the program’s compile time, but speed up the execution time.

Instructions
Checkpoint 1 Passed
1.
Here’s the deal: You have get_smallest() overloaded for int and double, but you may want 
to use the function with more types later.

Equipped with your new understanding of function templates, you can make this happen. Ready?

Press Run to move on to the next task.

Checkpoint 2 Passed
2.
Replace the function declarations in numbers.hpp with a function template that allows 
for various number types and returns the type passed in. (For example, if you pass in 
two ints, the function should return an int.)

Checkpoint 3 Passed
3.
Then remove the definitions in numbers.cpp (they are now unnecessary) and run 
main.cpp.

*/


/*
main.cpp
#include <iostream>

#include "numbers.hpp"

int main() {
  
  std::cout << get_smallest(100, 60) << "\n";
  std::cout << get_smallest(2543.2, 3254.3) << "\n";
  
}

*/

/*
numbers.hpp
// Replace these declarations with a template
template <typename T>
T get_smallest(T num1, T num2) {
  
  return num2 < num1? num2 : num1;
  
}


*/