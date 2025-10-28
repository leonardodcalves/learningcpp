/*

Functions: Scope & Flexibility
How to Get Your Functions Inline
8 min
Once you set foot in the wild of C++ development, you may encounter the term “inline functions” 
with a couple different meanings. An inline function is a function definition, usually in a 
header file, qualified by inline like this:

inline 
void eat() {

  std::cout << "nom nom\n";

}

Copy to Clipboard

Using inline advises the compiler to insert the function’s body where the function call is, 
which sometimes helps with execution speed (and sometimes hinders execution speed). If you 
do use it, we recommend testing how it affects the execution speed of your program. The 
bottom line is inline is something you’ll probably encounter, but may never use.

However, you will sometimes also hear about “inline functions” that are just member 
functions
Preview: Docs Loading link description
 (i.e. functions inside of 
classes
Preview: Docs Loading link description
 — we’ll explain classes later) which have been defined and declared in a single line in a 
 header file because the function body is so short:

// cookie_functions.hpp

// eat() belongs to the Cookie class:
void Cookie::eat() {std::cout << "nom nom\n";} 

Copy to Clipboard

Please note that you should ALWAYS add the inline keyword if you are inlining functions 
in a header (unless you are dealing with member functions, which are automatically inlined for you).

Instructions
Checkpoint 1 Enabled
1.
Currently, the program is set up with goodnight1()‘s declaration and definition split 
into night.hpp and night.cpp respectively.

We’ll try using the inline keyword and see how it affects the runtime of the function.

We’re using a library header called chrono that allows us to clock time in milliseconds. 
(Don’t worry if you don’t understand all of the syntax used for this!)

First, run your code as is. How many milliseconds did it take goodnight1() to execute?

Checkpoint 2 Step instruction is unavailable until previous steps are completed
2.
Move the very short definition of goodnight1() from night.cpp over to night.hpp (replacing 
the declaration).

Then add the inline keyword above the function and run the code.

*/
/*
main.cpp
#include <iostream>
#include <chrono>

#include "night.hpp"

int main() {
  
  // Measure time taken for goodnight1():
  std::chrono::high_resolution_clock::time_point start = std::chrono::high_resolution_clock::now();

  std::cout << goodnight1("tulip");
  
  std::chrono::high_resolution_clock::time_point end = std::chrono::high_resolution_clock::now();
  std::chrono::duration<double, std::milli> time_span = end - start;

  // Print time taken for goodnight1():
  std::cout << "Time taken for goodnight1(): " << time_span.count() << " milliseconds.\n\n";
  
  
  std::cout << goodnight2("eraser", "ivy");
  
}
*/
/*
night.hpp
std::string goodnight1(std::string thing1);
std::string goodnight2(std::string thing1, std::string thing2);
inline
std::string goodnight1(std::string thing1) {
  return "Goodnight, " + thing1 + ".\n";
}
*/

/*
night.cpp
#include <string>


std::string goodnight2(std::string thing1, std::string thing2) {
  return "Goodnight, " + thing1 + " jumping over the " + thing2 + ".\n";
}
*/