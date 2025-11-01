#include <iostream>
#include <vector>

int main() {
    int sum_even = 0;
    int product_odd = 1;
    std::vector<int> numbers = {2, 4, 3, 6, 1, 9};
    for (int i = 0; i < numbers.size(); i++) {
        if(numbers[i] % 2 == 0) {
            sum_even = sum_even + numbers[i];
        } else {
            product_odd = product_odd * numbers[i];
        }
    }
    std::cout << "Sum of even numbers is: " << sum_even << "\n";
    std::cout << "Product of odd numbers is: " << product_odd << "\n";
    return 0;
}

/*

Vectors
Review
13 min
Congratulations! You have learned about how to store groups of data into 
vectors
Preview: Docs Loading link description
 in C++. 🙌

Here are some of the things that we learned:

Vectors are a sequence of elements that you can access by an index.
std::vector<int> even = {2, 4, 6, 8, 10};

Copy to Clipboard

The first index in a vector is 0.

Some of the 
functions
Preview: Docs Loading link description
 that come with vectors:

.push_back()
Preview: Docs Loading link description
.pop_back()
Preview: Docs Loading link description
.size()
We can use a for loop to iterate through a vector.

Instructions
Checkpoint 1 Enabled
1.
Optional: Write a program to find the sum of even numbers and the product of 
odd numbers in a vector.

For example:

Suppose we have a vector that is {2, 4, 3, 6, 1, 9}.

Then the program should output:

Sum of even numbers is 12
Product of odd numbers is 27

*/