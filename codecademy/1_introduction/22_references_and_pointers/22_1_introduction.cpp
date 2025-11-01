/*

References and Pointers
Introduction
1 min
A computer’s memory is a sequence of bytes. We can number the bytes from 0 to the 
last one. Each number, known as an address, represents a location in the memory.

Everything we put into memory has an address. For example, when we declare and 
initialize an int variable named power:

int power = 9000;

Copy to Clipboard

This will set aside an int-size piece of memory for the variable power somewhere and 
put the value 9000 into that memory. But where is “somewhere”? How is it useful?

In this lesson, we will answer these questions by learning about:

References
Pointers
These are some of the most powerful features in C++; they allow programmers to directly 
manipulate memory – the most critical and scarce resource in computer – in order to 
optimize performance.

However, 
references
Preview: Docs A reference variable is an alias for another object.
 and 
pointers
Preview: Docs Loading link description
 are also sometimes considered two of the most complex and difficult features in C++.

So let’s get started.

*/