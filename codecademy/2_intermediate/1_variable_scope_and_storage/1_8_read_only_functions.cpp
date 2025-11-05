/*

Variable Scope and Storage Classes
Read-only Functions
13 min
In C++, we can have read-only 
functions
Preview: Docs Loading link description
 in a class that do not modify the state of any class member. We declare these functions as const like so:

int someFunction() const {
  // function body
} 

Copy to Clipboard

The const keyword prevents accidental changes and makes code more predictable and reliable. Here is an 
example of a const function in a class:

class SomeClass {
private:
  int someVariable = 100;

public:
  void someFunction() const {
    someVariable++; // will cause an error!
    cout << someVariable << endl; // ok!
  }
};

Copy to Clipboard

Read-only functions are useful when we want to allow access to an object’s data without permitting any 
alterations. For example, consider a scenario where we have a class representing a book called Book. 
The class Book has a string member called name representing the name of a book. If we wish to print the 
name of the book, we can include a read-only function called printName() that prints the book’s name. 
Making the function read-only guarantees that name will not be accidentally changed inside the function, 
preserving its integrity. Here is the code for the Book class:

class Book {  

private:
  string name;

public:   
  Book(string bookName) : name(bookName), counter(0) {}   
  void printName() const {
    cout << name << endl;   
  }
};   

Copy to Clipboard

Let’s practice working with read-only functions.

Instructions
Checkpoint 1 Enabled
1.
In the Cache.hpp file, declare a read-only function called isValid() that accepts no parameters and doesn’t 
return anything.

Checkpoint 2 Step instruction is unavailable until previous steps are completed
2.
In the Cache.cpp file, define isValid() to print the following string if valid is true:

Cache is valid!

Copy to Clipboard

And print the following string if valid is false:

Cache is invalid!

Copy to Clipboard

Switch over to main.cpp and click “Run”.

*/