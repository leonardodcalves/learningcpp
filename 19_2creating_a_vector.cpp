#include <iostream>
#include <vector>

int main() {
    std::vector<double> subway_adult = {800, 1200, 1500};
    std::vector<double> subway_child = {400, 600, 750};
    std::cout << subway_child[2] << "\n";
}

/*/

Vectors
Creating a Vector
3 min
The std::vector lives in the <vector> header. So first, we need to add this line of code at the top of the program:

#include <vector>

Copy to Clipboard

For review, #include is a preprocessor directive that tells the compiler to include whatever library that follows. 
In our case that is the standard vector library.

And the syntax to create a vector looks like:

std::vector<type> name;

Copy to Clipboard

So to define a vector of ints called calories_today:

std::vector<int> calories_today;

Copy to Clipboard

Inside the angle brackets is the data type of the vector. After the angle brackets is the name of the vector.

Note: The type of the vector (i.e., what data type is stored inside) cannot be changed after the declaration.

Instructions
Checkpoint 1 Enabled
1.
The Tokyo Subway has different payment options for adults and children. We have declared a double vector already 
named subway_adult.

Declare another double vector named subway_child.




#include <iostream>
#include <vector>

int main() {
    std::vector<double> subway_adult;
    std::vector<double> subway_child;
}



Vectors
Initializing a Vector
3 min
Now we know how to create a vector, we can also initialize a vector, giving it values, as we are creating it in the same line.

For example, instead of just creating a double vector named location:

std::vector<double> location;

Copy to Clipboard

We can create and initialize location with specific values:

std::vector<double> location = {42.651443, -73.749302};

Copy to Clipboard

Here, we are storing a latitude and a longitude.

So it would look something like this:

Vector

Another way we can initialize our vector is by presizing, or setting the size.

Suppose we want to create and initialize a vector with two elements. However, we don’t 
know what values we want to add yet:

std::vector<double> location(2);

Copy to Clipboard

Here, we are creating a double vector and setting the initial size to two using parentheses.

It would look something like this:

presize

Because 0.0 is the default value for double.

Instructions
Checkpoint 1 Enabled
1.
Suppose the Tokyo Subway costs are as follows:

Ticket	Adult	Child
24-hour	¥800	¥400
48-hour	¥1200	¥600
72-hour	¥1500	¥750

We have initialized the subway_adult already for you.

Initialize the subway_child vector with:

400
600
750
Note: The vector can still be double even though the values entered are ints.



#include <iostream>
#include <vector>

int main() {
    std::vector<double> subway_adult = {800, 1200, 1500};
    std::vector<double> subway_child = {400, 600, 750};
}

Vectors
Index
3 min
Now that we have a vector, how do we access an individual element? This is where index comes into play.

An index refers to an element’s position within an ordered 
list
Preview: Docs Loading link description
. 
Vectors
Preview: Docs Loading link description
 are 0-indexed, meaning the first element has index 0, the second index 1, and so on.

For example, suppose we have a char vector with all the vowels:

std::vector<char> vowels = {'a', 'e', 'i', 'o', 'u'};

Copy to Clipboard

It should look something like this:

vowels

The character at index 0 is 'a'.
The character at index 1 is 'e'.
The character at index 2 is 'i'.
The character at index 3 is 'o'.
The character at index 4 is 'u'.
To output each of the elements, we can do:

std::cout << vowels[0] << "\n";
std::cout << vowels[1] << "\n";
std::cout << vowels[2] << "\n";
std::cout << vowels[3] << "\n";
std::cout << vowels[4] << "\n";

Copy to Clipboard

Using the notation vector[index] with square brackets after the vector name and the element’s index number inside.

This will output:

a
e
i
o
u

Copy to Clipboard

Instructions
Checkpoint 1 Enabled
1.
What is the element at index 2 in the subway_child vector?

Find out the answer by outputting it out using std::cout.

*/