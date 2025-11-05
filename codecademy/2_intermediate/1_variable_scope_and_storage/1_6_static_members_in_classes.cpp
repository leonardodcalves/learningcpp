/*
----- Player.hpp -----
#include <string>
using namespace std;

class Player {
public:
  static int playerCount;
  Player(string name);
  void showPlayerInfo();
  static void showPlayerCount();
private:
  string name;
};
----- Player.cpp -----
#include "Player.hpp"
#include <iostream>
using namespace std;

int Player::playerCount = 0;
Player::Player(string name) : name(name) {
    playerCount++; 
}

void Player::showPlayerInfo() {
  cout << "Player Name: " << name << endl;
}

void Player::showPlayerCount() {
  cout << "Player Count: " << playerCount << "\n";
}
----- main.cpp -----
#include <iostream>
#include "Player.hpp"
using namespace std;


int main() {
  Player player1("Alice");
  Player player2("Bob");
  Player::showPlayerCount();


  return 0;
}
*/


/*

Variable Scope and Storage Classes
Static Members in Classes
20 min
The concept of a static variable also extends to 
classes
Preview: Docs Loading link description
. In classes, we can have static members (variables and functions) that belong to the class itself as opposed to a specific 
instance of it. All instances of a class share the same static member, making it a shared piece of information accessible by 
every instance of that class. We declare members of a class to be static like so:

class SomeClass {
public:
 static int someVariable;
 static int someFunction(int param1);
 // other class members
};

Copy to Clipboard

We can access the static members of a class like so:

SomeClass::someVariable;
SomeClass::someFunction(2);

Copy to Clipboard

Static 
variables
Preview: Docs Loading link description
 are useful when we want to keep track of something across all instances of a class. Static 
functions
Preview: Docs Loading link description
 are useful when we want to create something like a utility class, which is a collection of functions we can use. An example 
 of this would be a Math class that has several 
math functions
Preview: Docs Loading link description
 we can use.

Let’s look at an example of a class with static members.

Suppose we are creating a system to manage the number of users currently logged into an application. We can represent a session 
by the class UserSession, where each instance represents a user. We want to keep track of the total count of logged-in users. 
We can do this by using a static variable called loggedInUsers.

class UserSession { 
public:
  static int loggedInUsers;
  UserSession();
  ~UserSession();
  static void displayLoggedInUsers(); 
}; 

Copy to Clipboard

Here is its implementation:

  int UserSession::loggedInUsers = 0;
  UserSession() { 
    loggedInUsers++;  
  } 
  ~UserSession() { 
    loggedInUsers--;  
  }
  
 void UserSession::displayLoggedInUsers() { 
    cout << "Total logged-in users: " << loggedInUsers << endl; 
  } 

Copy to Clipboard

In the above example, when a new UserSession instance is created (representing a new user logging in), the static variable 
loggedInUsers is incremented. When a UserSession instance is destroyed (representing a user logging out), the loggedInUsers 
is decremented. Take note that a static function is defined in a source file in the same manner as an ordinary function.

Before we can use this class, we have to initialize the loggedInUsers variable. We initialized the static variable in this line:

int UserSession::loggedInUsers = 0;

Copy to Clipboard

It is important to note that initializing a static variable must be done outside the class (either in the class source file or 
another location). Attempting to initialize a variable inside the class will cause a compile error.

The following is not allowed in C++:

class UserSession { 
public: 
  static int loggedInUsers = 0;  // Will cause an error!

  // rest of class
}; 

Copy to Clipboard

In our example class, the function displayLoggedInUsers() is declared as static. We can use it to display the total number of 
logged-in users (represented by loggedInUsers) like so:

UserSession::displayLoggedInUsers();

Copy to Clipboard

Since static members belong to the class and not an instance of it, it is considered a bad practice to access a static member 
of a class through an instance like we would an ordinary class member (using the dot operator). While the following code will 
not cause a compiler error, it may behave unpredictably because accessing loggedInUsers can be modified by another instance 
of UserSession.

int main() {
  UserSession someUser;
  cout << someUser.loggedInUsers << endl;
  return 0;
}

Copy to Clipboard

The same idea applies to functions.

Let’s practice working with static members of a class.

Instructions
Checkpoint 1 Enabled
1.
In the Player.hpp file, declare a public static member variable playerCount of type int. This variable will track the total 
number of players created in the game.

Checkpoint 2 Step instruction is unavailable until previous steps are completed
2.
In the Player.hpp file, declare a static function called showPlayerCount() that accepts no parameters and doesn’t return anything.

Checkpoint 3 Step instruction is unavailable until previous steps are completed
3.
In the Player.cpp file, initialize playerCount to 0.

Checkpoint 4 Step instruction is unavailable until previous steps are completed
4.
In the Player.cpp file, define the showPlayerCount() function to print the number of players. The printed string should follow 
this format:

Player Count: playerCount

Copy to Clipboard

Checkpoint 5 Step instruction is unavailable until previous steps are completed
5.
In the main.cpp file, call the function showPlayerCount() after the creation of the two instances of Player.

*/