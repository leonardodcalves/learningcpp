/*
Errors
Compile-time Errors
3 min
When we are writing C++ programs, the compiler is our first line of defense against 
errors
Preview: Docs In C++, errors help with locating and correcting problems within the source code.
.

There are two types of compile-time errors:

Syntax errors: Errors that occur when we violate the rules of C++ syntax.
Type errors: Errors that occur when there are mismatch between the types we declared.
Some common syntax errors are:

Missing semicolon ;
Missing closing parenthesis ), square bracket ], or curly brace }
Some common type errors are:

Forgetting to declare a variable
Storing a value into the wrong type
Here’s an example of a compile-time error message:

$ g++ example.cpp example.cpp: In function 'int main()': examplecpp:5:11: error: invalid conversion 
from 'const char*' to 'int' [-fpermissive] int x = "hello";

The compiler will tell us where (line number) it got into trouble and its best guess as to what is wrong.

Instructions
Checkpoint 1 Enabled
1.
Try compiling the code and find the compile-time error in millionaire.cpp.

*/

#include <iostream>

int main() {
  
  char answer;
  int score = 0;
  
  std::cout << "Who Wants To Be a Millionaire\n\n"
  
  std::cout << "Question 1)\n\n";
  
  std::cout << "For ordering his favorite beverages on demand, LBJ had four buttons installed in the Oval Office labeled 'Coffee', 'Tea', 'Coke', and what?\n\n";
  
  std::cout << "A. Fresca   B. V8  \n";
  std::cout << "C. Yoo-hoo  D. A&W \n\n";
  
  std::cout << "Enter your answer: ";
  std::cin >> answer;
  
  if (answer == 'A' || answer == 'a') {
    
    score = score + 100;
    std::cout << "Correct!\n";
    
  }
  
}