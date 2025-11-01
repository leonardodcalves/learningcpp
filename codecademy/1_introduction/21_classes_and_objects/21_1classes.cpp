/*

Classes and Objects
Getting Classy with C++
3 min
So far, we’ve used several 
data types
Preview: Docs Loading link description
, including int, double, std::string, and bool. When we work with int or std::string, 
we can create 
variables
Preview: Docs Loading link description
 with certain properties and 
methods
Preview: Docs Loading link description
 specific to those types. For example:

int age = 33;
age++; // age is now 34

Copy to Clipboard

But what happens when you want to create a “type” for something else? You can make 
your own! Bjarne Stroustrup developed C++ because he wanted to add a feature known 
as “classes” to the C language. A C++ class is a user-defined type.

The class serves as a blueprint for 
objects
Preview: Docs Loading link description
, which are instances of the class (just like age is an instance of int). An object 
gets characteristics and behaviors from its class.

We can create an empty C++ class like this in a header file:

class City {
  
}; // <-- notice this semicolon!

Copy to Clipboard

Fun fact: C++’s original name was “C with 
Classes
Preview: Docs Loading link description
.”

Instructions
Checkpoint 1 Passed
1.
Create a new class Song in song.hpp.

*/