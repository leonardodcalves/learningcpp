#include <iostream>

double average(double num1, double num2) {
    return ((num1 + num2)/2);
}

int main() {
    std::cout << average (100, 200) << "\n" << average (500, 1000) << "\n";
}

/*

Code Challenge: C++ Functions
Average
4 min
average()

Instructions
Checkpoint 1 Enabled
1.
Write a function average() that takes:

A double parameter named num1.
A double parameter named num2.
The function should return a double that is the average of the arguments passed in.

*/