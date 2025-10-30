/*

Functions: Scope & Flexibility
Function Templates
1 min
Overloading
Preview: Docs Loading link description
 can be really tedious. Imagine you want to create a new function that works with int, float, 
 double, and other number types. Do you really need to redefine the SAME function body over and 
 over again with different parameters?

Thankfully not! When two 
functions
Preview: Docs Loading link description
 have different types but the same body — as was the case with print_cat_ears() —, there is a 
 cleaner solution you can use: 
templates
Preview: Docs Templates provide the ability to use a type as a parameter in functions and classes.
.

A template is a C++ tool that allows programmers to add 
data types
Preview: Docs Loading link description
 as parameters.

This feature comes in handy for 
classes
Preview: Docs Loading link description
 as well as for functions. In fact, std::string and std::vector are both template-based types. 
 The C++ standard library is full of templates!

Instructions
Take a look at how function templates allow you to use less code to make more than one function.

*/