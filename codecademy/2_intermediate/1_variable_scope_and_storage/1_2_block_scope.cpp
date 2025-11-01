/*

Variable Scope and Storage Classes
Block Scope
9 min
A block is a section of code defined by curly braces {} that limits the scope of the 
variables
Preview: Docs Loading link description
 declared within it. Variables defined inside a block are only accessible and valid until the block ends. 
 This concept is known as block scope. Variables defined outside the block can still be accessed from within it.

We can create a block like this:

int main() {
  {
    // internal code here
  }
  return 0;
}

Copy to Clipboard

Using blocks helps keep variables limited to the areas where they are needed. This approach makes code 
easier to read and maintain while reducing the risk of accidentally modifying other variables.

Within a block of code, we can redeclare a variable that already exists outside that block. When we do 
this, the inner variable temporarily takes precedence, meaning that the local value is used when the variable 
is referenced from within the block. However, if we try to use the variable inside the block before redeclaring 
it, the outer variable will be used instead.

Consider the following example:

void calculateDiscount() { 
  int totalPrice = 1000;  
  int discount = 50; // All-time discount 
  { 
    int discount = 200;  // Special discount 
    int discountedPrice = totalPrice - discount; 
    cout << "Price after discount: " << discountedPrice << endl; 
  } 
  cout << "Original total price: " << totalPrice << endl; 
} 

Copy to Clipboard

In this code, we have two discount variables:

The outer discount (discount = 50) is the all-time discount applied to the total price.
The inner discount (discount = 200) represents a special limited-time offer.
When the discountedPrice is calculated inside the inner block, it uses the inner discount, which is 200, and 
subtracts it from the totalPrice (accessible from inside the block). Therefore, the price after applying the 
special offer will be 800.

The inner block’s discount variable shadows the outer discount variable, so the special offer is applied to 
the totalPrice inside the block.

However, in the following code, the outer value of discount will be used because it is referenced before 
being declared inside the block:

void calculateDiscount() { 
  int totalPrice = 1000;  
  int discount = 50; 
  { 
    int discountedPrice = totalPrice - discount; // Using outer value of discount 
    int discount = 200; 
    cout << "Price after discount: " << discountedPrice << endl; 
  } 
  cout << "Original total price: " << totalPrice << endl; 
} 

Copy to Clipboard

The output will be:

Price after discount: 950
Original total price: 1000

Copy to Clipboard

Now, let’s practice working with block scope!

Instructions
Checkpoint 1 Enabled
1.
Inside the main() function, create a block under totalScore using curly braces {}. Leave it empty for now.

Checkpoint 2 Step instruction is unavailable until previous steps are completed
2.
Declare the variable int totalScore inside the block and assign it the value 10.

Checkpoint 3 Step instruction is unavailable until previous steps are completed
3.
Inside the block, print the value of the totalScore variable in the following format and observe the output.

Total Score: totalScore

Copy to Clipboard

Make sure to replace totalScore with its value in the output.

The code will print the value of the totalScore variable, which is declared inside the block, as it takes 
precedence within that scope.

Checkpoint 4 Step instruction is unavailable until previous steps are completed
4.
In addition to printing the totalScore after it has been declared, print the value of totalScore before it is 
declared. Make sure to print from inside the block again.

Use the following format:

Total Score: totalScore

Copy to Clipboard

Make sure to replace totalScore with its value in the output.

*/