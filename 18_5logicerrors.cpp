#include <iostream>

int main() {
  
  // Output from 1 to steps:
  
  int steps = 10;
  
  for (int i = 0; i <= steps; i++) {
    
    std::cout << "Step #";
    std::cout << i << "\n";
    
  }
  
}

/*
Errors
Logic Errors
3 min
Once we have removed the compile-time 
errors
Preview: Docs Loading link description
, link-time errors, and run-time errors, the program runs successfully. But sometimes, 
the program doesn’t do what we want it to do or no output is produced. Hmmm…

These types of errors which provide incorrect output, but appears to be error-free, are 
called logical errors. These are one of the most common errors that happen to beginners 
and also usually the most difficult to find and eliminate.

Logical errors solely depend on the logical thinking of the programmer. Your job now is 
to figure out why the program didn’t do what you wanted it to do.

Some common logic errors:

Program logic is flawed
Some “silly” mistake in an if statement or a for/while loop
Note: Logic errors don’t have error messages. Sometimes, programmers use a process called 
test-driven development (TDD), a way to give logic errors error messages and save yourself 
a lot of headaches!

Instructions
Checkpoint 1 Enabled
1.
Compile and execute steps.cpp. There should be no error messages.

But the program is supposed to output steps from #1 - #10. The program is somehow starting 
from 0…

Find the logic error.
*/