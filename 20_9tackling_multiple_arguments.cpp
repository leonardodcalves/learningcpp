/*

Functions
Tackling Multiple Arguments
9 min
Hang on, you may be thinking, are you limited to one parameter per function? Not at all! You can 
add as many as you like, but you will have to remember their order when you call the function.

double get_tip(double price, double tip, bool total_included) {

  if (total_included) {

    return price * tip + price;

  } else {

    return price * tip;

  }

}

Copy to Clipboard

So here we have three parameters:

double price
double tip
bool total_included
When calling get_tip(), it’s important to call it with price first, tip second, and return_total last:

get_tip(0.25, true, 45.50);
// this code will not work

Copy to Clipboard

get_tip(45.50, 0.25, true);
// this code results in 56.875, which you could round up to 56.88

Copy to Clipboard

Instructions
Checkpoint 1 Enabled
1.
Define a void function name_x_times() that takes two parameters:

a string name
an integer x
Checkpoint 2 Step instruction is unavailable until previous steps are completed
2.
Inside the function body of name_x_times(), create a while loop that will run as long as x is greater than 0.

Checkpoint 3 Step instruction is unavailable until previous steps are completed
3.
Inside the while loop, print name to the terminal.

Below the print statement, decrement (or decrease) x by 1 so that x is a smaller number on the next loop.

Checkpoint 4 Step instruction is unavailable until previous steps are completed
4.
Now, call name_x_times() in main() with my_name and some_number as arguments.

(Don’t forget to change my_name to your name!)

*/

#include <iostream>
#include <string>

void name_x_times(std::string name, int x) {
    while (x > 0) {
        std::cout << name << "\n";
        x = x - 1;
    }
}

int main() {
    name_x_times("Leonardo Duarte da Conceição Alves", 10);
}