#include <iostream>
#include <string>
bool is_palindrome(std::string text) {
    std::string reverse_text;
    for(int i = (text.size() - 1); i >= 0; i--) {
        reverse_text.push_back(text[i]);
    }
    if(text == reverse_text) {
        return true;
    }
    return false;
    }
}
int main() {
    std::cout << is_palindrome("madam") << "\n";
    std::cout << is_palindrome("leonardo") << "\n";
    std::cout << is_palindrome("racecar") << "\n";
    std::cout << is_palindrome("hannah") << "\n";
    std::cout << is_palindrome("book") << "\n";
    return 0;
}
/*

Code Challenge: C++ Functions
Palindrome
17 min
is_palindrome()

Instructions
Checkpoint 1 Enabled
1.
Define a function is_palindrome() that takes:

An std::string parameter text.
The function should return:

true if text is a palindrome.
false if text is not a palindrome.
(A palindrome is any text that has the same characters backwards as it does forwards. For example, “hannah” and “racecar” are palindromes, while “menu” and “aardvark” are not.)

We will not test for edge cases such as capitalization or spaces.

*/