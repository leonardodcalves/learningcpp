/*

Vectors
Adding and Removing Elements
6 min
Often, we start with a vector that’s either empty or a certain length. As we read or compute 
data we want, we can grow the vector as needed.

.push_back()
Preview: Docs Loading link description
To add a new element to the “back”, or end of the vector, we can use the .push_back() function.

For example, suppose we have a vector called dna with three letter codes of nucleotides:

std::vector<std::string> dna = {"ATG", "ACG"};

Copy to Clipboard

It would look like:

1

We can add elements using .push_back():

dna.push_back("GTG");
dna.push_back("CTG");

Copy to Clipboard

So now dna would look like:

2

.pop_back()
Preview: Docs Loading link description
You can also remove elements from the “back” of the vector using .pop_back().

dna.pop_back();

Copy to Clipboard

Notice how nothing goes inside the parentheses.

The vector would now look like:

3

because CTG is removed!

Note: If you have programmed in other languages, be aware that .pop_back() has no return value in C++.

Instructions
Checkpoint 1 Enabled
1.
Inside the code editor, we have a std::string vector.

Add these four strings using .push_back():

"kylo"
"rey"
"luke"
"finn"

*/

#include <iostream>
#include <vector>
#include <string>


int main() {
    std::vector<std::string> last_jedi;
    last_jedi.push_back("kylo");
    last_jedi.push_back("rey");
    last_jedi.push_back("luke");
    last_jedi.push_back("finn");
    std::cout << last_jedi[0] << " ";
    std::cout << last_jedi[1] << " ";
    std::cout << last_jedi[2] << " ";
    std::cout << last_jedi[3] << " ";
}