/*

Functions
Parameters & Arguments
12 min
Returning data is all well and good, but let’s say you’re visiting NYC and you’ve been told that 
New Yorkers usually add a 20% tip for restaurants and taxis. It would be really convenient if you 
could just build a function that accepted different prices as input and figured out how much you should tip.

As it happens, you can do that with parameters. Parameters (sometimes called formal parameters) are 
variables
Preview: Docs Loading link description
 used in a function’s definition. They act as placeholders for the input values you’ll use during 
 your function call.

parameters vs arguments
In the function below, price is the function’s parameter and it’s a double. It is declared between 
the parentheses and then used in the body of the function.

double get_tip(double price) {

  return price * 0.2;

}

Copy to Clipboard

Then, when you’re ready to use your function, the value you pass to the function is called an argument 
(also known as an actual parameter). In this case, 15.75 is the argument that is passed to the function:

double tip = get_tip(15.75);
// tip would be 3.15

Copy to Clipboard

Instructions
Checkpoint 1 Enabled
1.
You work with emergency services in Britain and the emergency number just changed:


Yikes! That’s a big change. What if the number changes again?

Let’s build a function that prints out the current emergency number, whatever it is from now on.

Above main(), define a void function get_emergency_number() that accepts one parameter:

a string with the name emergency_number
Checkpoint 2 Step instruction is unavailable until previous steps are completed
2.
In get_emergency_number(), print out “Dial “ with the emergency_number that was passed into the function.

Checkpoint 3 Step instruction is unavailable until previous steps are completed
3.
Call get_emergency_number() in main() to see the number get printed!

*/

#include <iostream>
#include <string>

// Define get_emergency_number() below:
void get_emergency_number(std::string emergency_number) {
  
  std::cout << "Dial " << emergency_number;
  
}

int main() {
  
  // Original emergency services number 
  std::string old_emergency_number = "999";
  
  // For nicer ambulances, faster response times
  // and better-looking drivers
  std::string new_emergency_number = "0118 999 881 999 119 725 3";
  
  // Call get_emergency_number() below with
  // the number you want!
  get_emergency_number(new_emergency_number);
  
}