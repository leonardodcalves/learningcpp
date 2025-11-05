/*----- main.cpp -----
#include <iostream>
#include <vector>
#include "Student.hpp"
using namespace std;

int main() {
  
  auto student1 = Student("John Doe");
  student1.displayDetails();

  vector<int> marks = {85, 90, 78, 92, 88};

  
  for (auto mark : marks) {
    cout << mark << endl;
  }

// minha solução for
 /*
  for(auto i = 0; i < marks.size(); i++) {
    auto mark = marks[i];
    cout << mark << "\n";
  }
 */
  return 0;
}
*/
// ----- Student.hpp -----
/*
#include <string>
using namespace std;

class Student {
public:
  Student(string studentName);
  void displayDetails() const;

private:
  string name;
};
*/
// ----- Student.cpp -----
/*
#include "Student.hpp"
#include <iostream>
using namespace std;

Student::Student(string studentName) : name(studentName) {}

void Student::displayDetails() const {
  cout << "Student Name: " << name << endl;
}
*/


/*

Variable Scope and Storage Classes
The auto Keyword
16 min
While declaring 
variables
Preview: Docs Loading link description
, we explicitly mention the variable name and its data type. However, C++ provides an option for type inference, allowing the compiler to deduce the type of a variable based on its value. This can be done using the auto keyword. It makes the code cleaner and reduces the chance of type-related 
errors
Preview: Docs Loading link description
. With auto, we don’t need to specify the type explicitly; the compiler deduces it for us.

Here’s how we can use auto to declare a variable:

auto variableName = value; 

Copy to Clipboard

For example, if we have the following number:

int num = 10;   

Copy to Clipboard

Here, we declare that num is of type int. In the following example, C++ looks at the value 10 and automatically infers that num is of type int:

auto num = 10; // 'num' is automatically deduced as 'int'   

Copy to Clipboard

The auto keyword is especially useful in for 
loops
Preview: Docs Loading link description
 when dealing with complex types or unknown container element types:

for (auto element : myVar) {   
  // use the element   
}   

Copy to Clipboard

Here, auto allows the loop to iterate over myVar without needing to state the element type 
explicitly.

We can also use auto to create instances of 
classes
Preview: Docs Loading link description
. For example, consider a Point class that stores the coordinates of a point in a 2D space:

class Point { 
public: 
  Point(int x, int y) : xCoord(x), yCoord(y) {} 
  int getX() { return xCoord; } 
  int getY() { return yCoord; } 
private: 
  int xCoord, yCoord; 
};

Copy to Clipboard

auto point1 = Point(10, 20); // 'point1' is automatically deduced as 'Point' 

Copy to Clipboard

In this example, auto deduces that point1 is of type Point based on the constructor and 
assignment.

While auto offers many benefits, it’s not always the best choice. Overusing it can make code 
harder to understand, especially when the type is unclear or complex.

It’s better to specify the type explicitly to ensure clarity.

Now, let’s practice using the auto keyword!

Instructions
Checkpoint 1 Enabled
1.
We have a Student class.

In the main() function, create an instance of the Student class called student1 using the auto 
keyword.

The Student class constructor takes the student’s name as a string argument. Pass "John Doe" 
as the argument.

Checkpoint 2 Step instruction is unavailable until previous steps are completed
2.
We have a vector of student’s marks called marks.

Use a for loop with the auto keyword to iterate over it and print the marks. Use mark as 
the loop variable that represents each individual element in the marks vector.

For example, the output should follow this format:

Student Name: name
value1
value2
value3
value4


*/