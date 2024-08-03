/////////////////////////////////////////////////////
// CIS554 Object Oriented Programming in C++
// Exercise 5_1 - Reference parameters
/////////////////////////////////////////////////////

#include <iostream>
#include "TimeDiff.h"

int main()
{
    int hour, minute, second;

    // Prompt user for hour input
    std::cout << "Enter hour: ";
    std::cin >> hour;

    // Prompt user for minute input
    std::cout << "Enter minute: ";
    std::cin >> minute;

    // Prompt user for second input
    std::cout << "Enter second: ";
    std::cin >> second;

    // Calculate the seconds since the previous noon
    int seconds_since_noon = TimeDiff::SecondsSinceNoon(hour, minute, second);

    // Check if the time is valid
    if (seconds_since_noon == -1)
    {
        std::cerr << "Invalid time entered!" << std::endl;
        std::cout << "Press any key to continue . . ." << std::endl;
        std::cin.get(); // To pause the screen
        std::cin.get(); // To capture the actual key press
        return 1;
    }
    else
    {
        std::cout << "Seconds since previous noon = " << seconds_since_noon << std::endl;
    }

    // Pause the screen
    std::cout << "Press any key to continue . . ." << std::endl;
    std::cin.get(); // To pause the screen
    std::cin.get(); // To capture the actual key press

    return 0;
}
