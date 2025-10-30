/*Logical Operators
Review
14 min
Awesome! In this mini-lesson, we’ve added more 
operators (Loading link description) to our toolbox:

&&: the and logical operator
||: the or logical operator
!: the not logical operator
Instructions
Checkpoint 1 Enabled
1.
Optional: Let’s try a challenging problem that will put all your brain cells to the test.

Write a leap_year.cpp program that:

Takes a year as input.
Checks to see if the year is a four-digit number.
Displays whether or not the year falls on a leap year.
There are 3 criteria that must be taken into account to identify a leap year:

If the year can be evenly divided by 4 then it is a leap year, however…
If that year can be evenly divided by 100, and it is not evenly divided by 400, then it is NOT a leap year.
If that year is evenly divisible by 400, then it is a leap year.
Take some time to research and brainstorm before starting to write the code!*/

#include <iostream>
int main() {
    int year;
    bool year_valid = false;
    double fourdigits;
    do {
        std::cout << "Please type a year: ";
        std::cin >> year;
        std::cout << "\n";
        fourdigits = year / 1000;
        if (fourdigits >= 1 && fourdigits < 10) {
            std::cout << "It is a four digit year. Proceeding.\n";
            year_valid = true;      
            if (year % 4 == 0) {
                std::cout << "É um ano bissexto!\n";
            } else {
                std::cout << "Não é um ano bissexto!\n";
            }
        } else {
            std::cout << "It is not a four digit year. Try again.\n";
            year_valid = false;
        }
    } while (!year_valid);
    return 0;
}
