/*
main.cpp
#include <iostream>
#include "fns.hpp"
int main() {
  
  std::cout << is_palindrome("noon") << "\n";
  std::cout << tenth_power(4) << "\n";
  std::cout << average(4.0, 7.0) << "\n";
  
}
*/
/*
fns.hpp
// Move function declarations here:
double average(double num1, double num2);
int tenth_power(int num);
bool is_palindrome(std::string text);
*/
/*
fns.cpp
#include <iostream>
#include <cmath>

double average(double num1, double num2) {
  return (num1 + num2) / 2;
}

int tenth_power(int num) {
  return pow(num, 10);
}

bool is_palindrome(std::string text) {
  std::string reversed_text = "";
  
  for (int i = text.size() - 1; i >= 0; i--) {
    reversed_text += text[i];
  }
  
  if (reversed_text == text) {
    return true;
  }
  
  return false;
}
*/

/*

Functions: Scope & Flexibility
Getting a Header Yourself
7 min
If your program keeps growing, you may have to scroll through many declarations before you see main(). 
That doesn’t seem like the best way to do things. Plus you don’t want to keep declaring the same 
functions
Preview: Docs Loading link description
 over and over for different 
files
Preview: Docs Loading link description
 — making changes would be incredibly tiresome!

Well, you can take those function declarations and move them all over to a header file, another file — 
usually with the same name as the file with all of the function definitions — with the extension .hpp 
or .h. For example, if your function definitions are in my_functions.cpp, the corresponding header file 
would be my_functions.hpp or my_functions.h.

So how do you bring everything from a header file into scope for another file? Do you just link the header 
in the compilation statement like you did with the second .cpp file?

As it turns out, with headers, you can just add #include "my_functions.hpp" to the very top of main.cpp:

#include "my_functions.hpp"

Copy to Clipboard

Boom! This line pastes in everything from my_functions.hpp. Now you have access to all of the function 
declarations you stowed away in your header.

Instructions
Checkpoint 1 Enabled
1.
Move the function declarations from above main() in main.cpp into fns.hpp.

Compile and execute.

Checkpoint 2 Step instruction is unavailable until previous steps are completed
2.
Did that work?

No! Why not?

We forgot to include the header file in main.cpp. Without the include statement, the program doesn’t 
know that any of the functions even exist.

Add the include statement above main().

Checkpoint 3 Step instruction is unavailable until previous steps are completed
3.
Now compile the files. Remember to link the two .cpp files when compiling.

Checkpoint 4 Step instruction is unavailable until previous steps are completed
4.
Then execute again.

Does it work?

*/
