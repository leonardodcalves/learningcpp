#include <iostream>
#include <string>
#include "21_4_destructors_headers.hpp"
/*MAIN*/
int main() {
        Song back_to_black("Back to Black", "Amy Winehouse"); 
        back_to_black.get_title();
        back_to_black.get_artist();
        back_to_black.~Song();
}

/*

Classes and Objects
Destructors
8 min
So far, you’ve learned how to create and use 
objects
Preview: Docs Loading link description
. But there’s another part of the object lifecycle we need to cover: how to destroy them! 
Muahahaha.

It’s actually far less nefarious than it sounds; object destruction is really about tidying 
up and preventing memory leaks. A destructor is a special method that handles object destruction. 
Like a constructor, it has the same name as the class and no return type, but is preceded by 
a ~ operator and takes no parameters:

// city.hpp
class City {
 
  std::string name;
  int population;
 
public:
  City(std::string new_name, int new_pop);
  ~City();
};
 
// city.cpp
City::~City() {
  
  // any final cleanup
  
}

Copy to Clipboard

Inside, you add any housekeeping that needs to happen before the object is destroyed. You 
generally won’t need to call a destructor; the destructor will be called automatically in 
any of the following scenarios:

The object moves out of scope.
The object is explicitly deleted.
When the program ends.
Instructions
Checkpoint 1 Enabled
1.
Create a destructor for Song that prints "Goodbye " plus the song’s title. For example, a 
song with a title of "Drama" should print the following message when destroyed:

Goodbye Drama!

Copy to Clipboard

(You’ll need to include the <iostream> header in song.cpp for this to work.)

Then compile and execute the program in the terminal.

*/