#include <iostream>
#include <string>
#include "21_6_the_object_of_your_affection_header.hpp"

/*MAIN*/
int main() {
        Profile profile1;
        profile1.profileSetup();
        profile1.getProfile();
}

/*

Learn C++
The Object of Your Affection
Your friend is building a new match-making service: The Object of Your Affection or OOYA 
for short (don’t worry, you still have time to convince them to change the name).

dating app
With your new understanding of C++ objects and classes, your friend thought you could build 
a pretty well-organized system of dating profiles.

Your first step? Build a Profile class that allows users to generate profile objects.

The Profile should store the following information:

User’s name
User’s age
User’s city
User’s country
User’s pronouns
User’s hobbies
And this is how users should be able to interact with their own profiles:

Create a new profile with some information
Add hobbies
View profile
Let’s get started!

*/

/*

Let’s review your project work
This AI-generated code review offers specific feedback about your code. You can also ask 
yourself these same questions when reviewing your code on your own.
Powered by OpenAI
 
Purpose
Does the code do what it's supposed to do?
Your code successfully collects user profile information and displays it, which aligns 
with the basic purpose of the project.
The project instructions require the use of a constructor to initialize profile attributes, 
not a setup method. Consider implementing a constructor in the Profile class to set name, 
age, city, country, and pronouns (with a default value).
Our Suggestion
Copy to Clipboard

Hobbies should be stored as a vector of strings, allowing users to add multiple hobbies. 
Update the hobbies attribute to use std::vector<std::string> and provide an add_hobby method.
Our Suggestion
Copy to Clipboard

Readability
Is the code easy to understand?
Your code is well-structured and uses clear prompts for user input, making it easy to 
follow.
Method names in C++ should use camelCase by convention. Consider renaming ProfileSetup 
and getProfile to profileSetup and getProfile (or viewProfile, as per the project).
Our Suggestion
Copy to Clipboard

Add comments to describe the purpose of each method and the class itself for better 
maintainability.
Our Suggestion
Copy to Clipboard

Performance
Does the code run efficiently?
Your code collects and displays user input without errors, which is a good start for 
performance.
To better match the project requirements and improve flexibility, use a vector for 
hobbies and allow adding hobbies one at a time, rather than a single string.
Our Suggestion
Copy to Clipboard

Consider returning a string from the viewProfile method instead of printing directly, 
which allows for more flexible use of the profile data.
Our Suggestion
Copy to Clipboard



*/