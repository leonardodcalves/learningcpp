#include <iostream>
#include <string>

std::string needs_water(int days_since_previous_watering, bool is_plant_succulent) {
    bool day_input_valid;
    bool succulent_input_valid;
    if (days_since_previous_watering >= 0 && days_since_previous_watering <= 365) {
        day_input_valid = true;
    } else {
        day_input_valid = false;
    }
    if (is_plant_succulent == true || is_plant_succulent == false) {
        succulent_input_valid = true;
    } else {
        succulent_input_valid = false;
    }
    while (day_input_valid == false || succulent_input_valid == false) {
        std::cout << "plant is suculent (true or false): ";
        std::cin >> is_plant_succulent;
        std::cout << "\n";
        std::cout << "days since previous watering (number only): ";
        std::cin >> days_since_previous_watering;
        std::cout << "\n";
    }
    if ((is_plant_succulent == false) && (days_since_previous_watering > 3)) {
        return "Time to water the plant.\n";
    } else if ((is_plant_succulent == true) && (days_since_previous_watering <= 12)) {
        return "Don't water the plant!\n";
    } else if ((is_plant_succulent == true) && (days_since_previous_watering > 13)) {
        return "Go ahead and give the plant a little water.\n";
    } else {
        return "Don't water the plant!\n";
    }
}

int main() {
    std::cout << needs_water(5, true);
}




/*

Code Challenge: C++ Functions
Water Plant
11 min
needs_water()

Instructions
Checkpoint 1 Enabled
1.
Define a function needs_water() that accepts:

First argument: An int number of days since the previous watering.
Second argument: A bool value is_succulent. (A value of true would indicate that the plant is a succulent.)
Inside the function, you’ll need some conditional logic:

If is_succulent is false and days is greater than 3, return "Time to water the plant.".
If is_succulent is true and days is 12 or less, return "Don't water the plant!".
If is_succulent is true and days is greater than or equal to 13, return "Go ahead and give the plant a little water.".
Otherwise, return "Don't water the plant!".
Note: Don’t print the strings; return them from the function.

*/