#include <iostream>
#include <string>
#include <vector>

std::string first_three_multiples(int num) {
    std::string result;
    result += std::to_string(num*1);
    result += ", ";
    result += std::to_string(num*2);
    result += ", ";
    result += std::to_string(num*3);
    return result;
}

int main() {
    std::cout << first_three_multiples(7) << "\n";
}

/*

Code Challenge: C++ Functions
First Three Multiples
11 min
first_three_multiples()

Instructions
Checkpoint 1 Enabled
1.
Write a function named first_three_multiples() that has:

An int parameter named num.
The function should return an std::vector of the first three multiples of num in ascending order.

For example, first_three_multiples(7) should return a vector with 7, 14, and 21.

*/

/*

#include <iostream>
#include <vector>

// Define first_three_multiples() here:
std::vector<int> first_three_multiples(int num) {
  
  std::vector<int> multiples{num, num * 2, num * 3};
  
  return multiples;
  
}

int main() {
  
  for (int element : first_three_multiples(8)) {
    std::cout << element << "\n";
  }
  
}

*/

/*
#include <iostream>
#include <vector>

// Define first_three_multiples() here:
std::vector<int> first_three_multiples(int num) {
  
  std::vector<int> multiples{num, num * 2, num * 3};
  
  return multiples;
  
}

int main() {
  
  for (int element : first_three_multiples(8)) {
    std::cout << element << "\n";
  }
  
}

*/