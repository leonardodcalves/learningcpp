#include <iostream>

int Main() {
  
  int num = 0;
  int sum = 0;
  
  std::cout << "Enter a number: ";
  std::cin >> num;
  
  for (int i = 1; i <= num; i++) {
    
    sum = sum + i;
    std::cout << i << " ";
    
  }
  
  std::cout << "Sum: " << sum << "\n";
  
}

/*
Errors
Link-time Errors
3 min
Sometimes the code compiles fine, but there is still a message because the program needs some function 
or library that it can’t find. This is known as a link-time error.

As our program gets bigger, it is good practice to divide the program into separate 
files
Preview: Docs Loading link description
. After compiling them, the linker takes those separate object files and combines them into a single 
executable file. Link-time 
errors
Preview: Docs Loading link description
 are found by the linker when it is trying to combine object files into an executable file.

Some common link-time errors:

Using a function that was never defined (more on this later)
Writing Main() instead of main()
Here’s an example of a link-time error message:

/usr/lib/gcc/x86_64-linux-gnua/7/../../../x86_64-linux

These errors are more hard to find, but remember, Google is your friend! Here, a good Google search would 
be: “C++ undefined reference to main”.

Instructions
Checkpoint 1 Enabled
1.
Try compiling to find the link-time error in sum.cpp.
*/