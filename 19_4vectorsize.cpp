/*/

Vectors
.size()
4 min
<std::vector> not only stores the elements; it also stores the size of the vector:

size

The .size() function returns the number of elements in the vector.

For example, suppose we have a std::string vector with Sonny’s grocery list:

std::vector<std::string> grocery = {"Hot Pepper Jam", "Dragon Fruit", "Brussel Sprouts"};

Copy to Clipboard

It should look something like this:

https://content.codecademy.com/courses/learn-cpp/vectors/size1.png

The string at index 0 is "Hot Pepper Jam".
The string at index 1 is "Dragon Fruit".
The string at index 2 is "Brussel Sprouts".
std::cout << grocery.size() << "\n";

Copy to Clipboard

will return

3

Copy to Clipboard

Notice how nothing goes in the parentheses.

Instructions
Checkpoint 1 Enabled
1.
Add a few more items to the grocery list using .push_back().

Print the size of grocery using .size().

Is it the same as you expected?

*/

#include <iostream>
#include <vector>
#include <string>

int main() {
    std::vector<std::string> grocery = {"Hot Pepper Jam", "Dragon Fruit", "Brussel Sprouts"};
    grocery.push_back("Sujama");
    grocery.push_back("Sweetrool");
    grocery.push_back("Moon Sugar");
    grocery.push_back("Nirnroot");
    std::cout << grocery.size() << "\n";
}