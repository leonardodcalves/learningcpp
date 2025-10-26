/*

Code Challenge: C++ Functions
Tenth Power
4 min
tenth_power()

Instructions
Checkpoint 1 Enabled
1.
Write a function named tenth_power() that has:

An int parameter named num.
The function should return num raised to the 10th power.

*/

/*
#include <iostream>

int tenth_power(int num) {
    return (num*num*num*num*num*num*num*num*num*num);
}

int main() {
    std::cout << tenth_power(2) << "\n" << tenth_power(3) << "\n" << tenth_power(4) << "\n";
} 

*/

#include <iostream>
#include <cmath>

int tenth_power(int num) {
    return pow(num, 10);
}

int main() {
    std::cout << tenth_power(2) << "\n" << tenth_power(3) << "\n" << tenth_power(4) << "\n";
}