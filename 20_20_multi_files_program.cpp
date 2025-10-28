/*
my_functions.cpp
#include <iostream>
#include <cmath>

// Add definitions here:

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
main.cpp
#include <iostream>
#include <cmath>

// Add declarations here:


double average(double num1, double num2);
int tenth_power(int num);
bool is_palindrome(std::string text);
int main() {
  
  std::cout << is_palindrome("racecar") << "\n";
  std::cout << tenth_power(3) << "\n";
  std::cout << average(8.0, 19.0) << "\n";
  
}
*/


/*

Functions: Scope & Flexibility
Multi-File Programs
10 min
Programs can grow quickly. With a few 
functions
Preview: Docs Loading link description
, you can declare the function above main() and then you can define the function below main() like this:

#include <iostream>

// Declaration at the top:
void eat();

int main() {

  eat();

}

// Definition at the bottom:
void eat() {

  std::cout << "nom nom nom\n";

}

Copy to Clipboard

But this isn’t ideal when your code gets longer; it’s common to use the same function in more than one .cpp file.

To make your code cleaner and more modular, you can move the function definitions over to another specialized .cpp file (e.g., my_functions.cpp), leaving a 
list
Preview: Docs Loading link description
 of declarations above main().

But 
files
Preview: Docs Loading link description
, like functions, have scope. So, how does the main() program know about the function definitions?

Before your program even compiles, it links together any files you list in your compilation statement into a single executable:

g++ main.cpp my_functions.cpp

Copy to Clipboard

And voila! Your program knows the function definitions.

Instructions
Checkpoint 1 Enabled
1.
In main.cpp, we have a program with a few functions. Let’s move them into a different file.

First, add a declaration for each function in main.cpp above the functions above main().

Checkpoint 2 Step instruction is unavailable until previous steps are completed
2.
Now, move all of the function definitions over to my_functions.cpp.

Checkpoint 3 Step instruction is unavailable until previous steps are completed
3.
Next, you must compile your code. Remember to link the two .cpp files when compiling.

Checkpoint 4 Step instruction is unavailable until previous steps are completed
4.
Finally, execute your code with the command ./a.out.

*/